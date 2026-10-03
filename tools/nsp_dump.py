#!/usr/bin/env python3
"""Decrypt a Nintendo Switch NSP into its readable contents.

Pokemon Sword's NSP stores every NCA with an AES-XTS-encrypted header, which is
why the archives look like pure noise.  This reproduces the console's key
derivation chain (aes_kek_generation_source -> key area keys / header key, then
the title key out of the .cnmt.nca meta region) and walks PFS0 -> NCA -> IVFC ->
RomFS so the game's assets become readable on disk.

Usage:
    python nsp_dump.py info    <nsp> <prod.keys>
    python nsp_dump.py dump    <nsp> <prod.keys> <outdir> [filter]
"""

import os
import struct
import sys

from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes

EMPTY = 0xFFFFFFFF
SECTOR = 0x200
MEDIA = 0x200

# Nintendo's XTS tweak is the sector index written little-endian and then grown
# by one AES block at a time.  mbedtls, which the console's own code is built
# on, walks the tweak as a big-endian GF(2^128) value; _xts_next tries both
# conventions because a couple of homebrew reimplementations disagree.
XTS_MULT_BE = "be"
XTS_MULT_LE = "le"
_XTS_MULT = XTS_MULT_BE


def _cipher(key, mode):
    return Cipher(algorithms.AES(key), mode, default_backend())


def ecb_encrypt(key, data):
    e = _cipher(key, modes.ECB()).encryptor()
    return e.update(data) + e.finalize()


def ecb_decrypt(key, data):
    d = _cipher(key, modes.ECB()).decryptor()
    return d.update(data) + d.finalize()


def _xts_next(tweak):
    """tweak *= x in GF(2^128). mbedtls, which the console code is built on,
    walks the tweak as a big-endian polynomial; the two conventions disagree
    only on where the 0x87 reduction lands, so both are tried."""
    out = bytearray(tweak)
    carry = 0
    if _XTS_MULT == XTS_MULT_BE:
        for i in range(15, 0, -1):
            b = out[i]
            out[i] = ((b << 1) | carry) & 0xFF
            carry = (b >> 7) & 1
        out[0] = ((out[0] << 1) | carry) & 0xFF
        if tweak[15] & 0x80:
            out[15] ^= 0x87
    else:
        for i in range(15, 0, -1):
            b = out[i]
            out[i] = ((b >> 1) | (carry << 7)) & 0xFF
            carry = b & 1
        out[0] = ((out[0] >> 1) | (carry << 7)) & 0xFF
        if tweak[0] & 1:
            out[15] ^= 0x87
    return bytes(out)


def xts_tweak(sector):
    """Nintendo's custom sector tweak: the index little-endian in bytes 15..8."""
    return b"\0" * 8 + struct.pack("<Q", sector)


def xts_decrypt(key32, data, sector, sector_size=SECTOR):
    if len(key32) != 32:
        raise ValueError("XTS key must be 32 bytes")
    cipher_key, tweak_key = key32[:16], key32[16:]
    out = bytearray(len(data))
    pos = 0
    while pos < len(data):
        n = min(sector_size, len(data) - pos)
        tweak = ecb_encrypt(tweak_key, xts_tweak(sector))
        for off in range(0, n - 15, 16):
            x = bytes(a ^ b for a, b in zip(data[pos + off:pos + off + 16], tweak))
            p = ecb_decrypt(cipher_key, x)
            out[pos + off:pos + off + 16] = bytes(a ^ b for a, b in zip(p, tweak))
            tweak = _xts_next(tweak)
        pos += n
        sector += 1
    return bytes(out)


def xts_encrypt(key32, data, sector, sector_size=SECTOR):
    cipher_key, tweak_key = key32[:16], key32[16:]
    out = bytearray(len(data))
    pos = 0
    while pos < len(data):
        n = min(sector_size, len(data) - pos)
        tweak = ecb_encrypt(tweak_key, struct.pack("<Q", sector) + b"\0" * 8)
        for off in range(0, n - 15, 16):
            x = bytes(a ^ b for a, b in zip(data[pos + off:pos + off + 16], tweak))
            c = ecb_encrypt(cipher_key, x)
            out[pos + off:pos + off + 16] = bytes(a ^ b for a, b in zip(c, tweak))
            tweak = _xts_next(tweak)
        pos += n
        sector += 1
    return bytes(out)


def ctr_decrypt(key16, ctr16, data):
    """AES-CTR with the console's big-endian nonce that counts up per block."""
    out = bytearray(len(data))
    ctr = int.from_bytes(ctr16, "big")
    for off in range(0, len(data), 16):
        blk = data[off:off + 16]
        if len(blk) < 16:
            blk = blk + b"\0" * (16 - len(blk))
        ks = ecb_encrypt(key16, (ctr % (1 << 128)).to_bytes(16, "big"))
        out[off:off + 16] = bytes(a ^ b for a, b in zip(blk, ks))
        ctr += 1
    return bytes(out)


def media_to_real(x):
    return x * MEDIA


def generate_kek(src, master_key, kek_seed, key_seed):
    """The console's three-step GenerateAesKek chain. Every step is an
    AES-ECB *decrypt*, which is easy to get backwards."""
    kek = ecb_decrypt(master_key, kek_seed)
    src_kek = ecb_decrypt(kek, src)
    if key_seed is None:
        return src_kek
    return ecb_decrypt(src_kek, key_seed)


class Keyset:
    def __init__(self, path):
        raw = {}
        with open(path, "r", encoding="utf-8", errors="replace") as fh:
            for line in fh:
                line = line.strip()
                if not line or line.startswith("#") or "=" not in line:
                    continue
                k, v = line.split("=", 1)
                raw[k.strip()] = v.strip()

        def h(name):
            v = raw.get(name)
            return bytes.fromhex(v) if v else None

        self.aes_kek_gen = h("aes_kek_generation_source")
        self.aes_key_gen = h("aes_key_generation_source")
        self.master_keys = {}
        for name, val in raw.items():
            if not name.startswith("master_key_") or len(val) != 32:
                continue
            try:
                self.master_keys[int(name.rsplit("_", 1)[1], 16)] = bytes.fromhex(val)
            except ValueError:
                continue                      # master_key_source is a seed, not a key

        # key_area_key[i][n]: prefer the table from prod.keys, otherwise derive
        # from the per-generation seeds.
        app = h("key_area_key_application_source")
        ocean = h("key_area_key_ocean_source")
        system = h("key_area_key_system_source")
        kaek_sources = (app, ocean, system)
        self.key_area_keys = {}
        for i, mk in self.master_keys.items():
            slots = []
            for n, seed in enumerate(kaek_sources):
                explicit = h("key_area_key_%s_%02x" % ("application ocean system".split()[n], i))
                if explicit is not None:
                    slots.append(explicit)
                elif seed is not None:
                    slots.append(generate_kek(seed, mk, self.aes_kek_gen, self.aes_key_gen))
                else:
                    slots.append(b"\0" * 16)
            self.key_area_keys[i] = slots

        # The NCA header key lives in prod.keys only as a pair of seeds.
        header_key = h("header_key")
        if header_key is None:
            header_key_source = h("header_key_source")
            header_kek_source = h("header_kek_source")
            if header_key_source and header_kek_source and 0 in self.master_keys:
                header_kek = generate_kek(header_kek_source, self.master_keys[0],
                                          self.aes_kek_gen, self.aes_key_gen)
                header_key = ecb_decrypt(header_kek, header_key_source)
        self.header_key = header_key or (b"\0" * 32)

        titlekek_source = h("titlekek_source")
        self.titlekeks = {}
        for i, mk in self.master_keys.items():
            explicit = h("titlekek_%02x" % i)
            if explicit is not None:
                self.titlekeks[i] = explicit
            elif titlekek_source is not None:
                self.titlekeks[i] = ecb_decrypt(mk, titlekek_source)
            else:
                self.titlekeks[i] = b"\0" * 16


class Reader:
    def __init__(self, path):
        self.f = open(path, "rb")
        self.path = path
        self.size = os.path.getsize(path)

    def close(self):
        self.f.close()

    def read(self, off, n):
        self.f.seek(off)
        return self.f.read(n)

    def stream(self, off, n, chunk=1 << 22):
        self.f.seek(off)
        left = n
        while left:
            b = self.f.read(min(left, chunk))
            if not b:
                return
            left -= len(b)
            yield b


def parse_pfs0(buf):
    if buf[:4] != b"PFS0":
        raise ValueError("not PFS0")
    count, str_size = struct.unpack_from("<II", buf, 4)
    entry_base, str_base = 0x10, 0x10 + count * 0x18
    names = buf[str_base:str_base + str_size]
    out = []
    for i in range(count):
        off, size, so = struct.unpack_from("<QQI", buf, entry_base + i * 0x18)
        end = names.index(b"\0", so)
        out.append((names[so:end].decode(), off, size))
    return out


def parse_hfs0(buf, base=0):
    if buf[base:base + 4] != b"HFS0":
        raise ValueError("not HFS0")
    count, str_size = struct.unpack_from("<II", buf, base + 4)
    entry_base, str_base = base + 0x200, base + 0x200 + count * 0x40
    names = buf[str_base:str_base + str_size]
    out = []
    for i in range(count):
        off, size, so = struct.unpack_from("<QQI", buf, entry_base + i * 0x40)
        end = names.index(b"\0", so)
        out.append((names[so:end].decode(), str_base + off, size))
    return out


# ---------------------------------------------------------------- NCA header
def decrypt_nca_header(rdr, off, ks, guess_tweak=True):
    raw = rdr.read(off, 0xC00)
    cands = []
    for mult in (XTS_MULT_BE, XTS_MULT_LE):
        global _XTS_MULT
        _XTS_MULT = mult
        hdr = bytearray(xts_decrypt(ks.header_key, raw, 0))
        if hdr[0x200:0x204] in (b"NCA0", b"NCA2", b"NCA3", b"NCAF"):
            cands.append((mult, bytes(hdr)))
    if not cands:
        return None, None
    _XTS_MULT = cands[0][0]
    hdr = bytearray(cands[0][1])
    version = hdr[0x200:0x204]
    if version == b"NCA2":
        for i in range(4):
            base = 0x3F2 + i * 0x200
            if any(hdr[base + 0x148:base + 0x200]):
                hdr[base:base + 0x200] = xts_decrypt(ks.header_key,
                                                     raw[base:base + 0x200], 0)
    return parse_nca_header(hdr), version


def parse_nca_header(hdr):
    version = hdr[0x200:0x204].decode()
    content_type = hdr[0x205]
    crypto_type = hdr[0x206]
    kaek_ind = hdr[0x207]
    nca_size, title_id = struct.unpack_from("<QQ", hdr, 0x208)
    crypto_type2 = hdr[0x220]
    rights_id = hdr[0x222:0x232]
    sections = []
    for i in range(4):
        e = 0x232 + i * 0x10
        start, end = struct.unpack_from("<II", hdr, e)
        fh = 0x3F2 + i * 0x200
        part_type, fs_type, crypt_type = hdr[fh + 2], hdr[fh + 3], hdr[fh + 4]
        ctr = hdr[fh + 0x140:fh + 0x148]
        sections.append({
            "index": i, "start": start, "end": end,
            "offset": media_to_real(start), "size": media_to_real(end) - media_to_real(start),
            "partition_type": part_type, "fs_type": fs_type, "crypt_type": crypt_type,
            "ctr": ctr,
            "superblock": bytes(hdr[fh + 8:fh + 0x140]),
        })
    return {"version": version, "content_type": content_type,
            "crypto_type": crypto_type, "kaek_ind": kaek_ind, "nca_size": nca_size,
            "title_id": title_id, "crypto_type2": crypto_type2,
            "rights_id": rights_id, "sections": sections}


CONTENT_TYPES = {0: "Program", 1: "Meta", 2: "Control", 3: "Manual",
                 4: "Data", 5: "PublicData"}
PARTITION_NAMES = {0: "RomFS", 1: "PFS0"}
FS_NAMES = {1: "PFS0", 2: "PFS0", 3: "RomFS"}
CRYPT_NAMES = {0: "none", 1: "none", 2: "XTS", 3: "CTR", 4: "BKTR"}


def nca_keys(hdr, ks, title_key=None):
    ct = max(hdr["crypto_type"], hdr["crypto_type2"])
    ct = ct - 1 if ct else 0
    if any(hdr["rights_id"]):
        if title_key is None:
            raise RuntimeError("title key required but not available")
        return ct, title_key
    kaek = ks.key_area_keys[ct][hdr["kaek_ind"]]
    wrapped = bytes(hdr["_encrypted_keys"]) if "_encrypted_keys" in hdr else None
    return ct, kaek


def section_crypto(hdr, sec, ks, title_key=None):
    """Resolve the AES key material for one NCA section."""
    rights = any(hdr["rights_id"])
    if rights:
        key = title_key
    else:
        ct = hdr["crypto_type"]
        ct2 = hdr["crypto_type2"]
        rev = (max(ct, ct2) - 1) if max(ct, ct2) else 0
        kaek = ks.key_area_keys[rev][hdr["kaek_ind"]]
        wrapped = ecb_decrypt(kaek, hdr["encrypted_keys"])
        if sec["crypt_type"] == 2:
            key = wrapped
        else:
            key = wrapped[0x20:0x30]
    return key


def decrypt_section(rdr, hdr, sec, ks, title_key=None):
    if sec["size"] == 0 or sec["start"] == 0:
        return b""
    key = section_crypto(hdr, sec, ks, title_key)
    if sec["crypt_type"] in (0, 1):
        return rdr.read(sec["offset"], sec["size"])
    if sec["crypt_type"] == 2:
        return xts_stream_decrypt(rdr, key, sec)
    if sec["crypt_type"] in (3, 4):
        ctr = bytearray(sec["ctr"]) + b"\0" * 8
        return b"".join(ctr_decrypt(key, bytes(ctr), b)
                        for b in rdr.stream(sec["offset"], sec["size"]))
    return rdr.read(sec["offset"], sec["size"])


def xts_stream_decrypt(rdr, key32, sec):
    """Stream an XTS section so a 10 GB RomFS never lands in memory."""
    out = bytearray()
    sector = 0
    cipher_key, tweak_key = key32[:16], key32[16:]
    pending = b""
    for chunk in rdr.stream(sec["offset"], sec["size"]):
        buf = pending + chunk
        n = (len(buf) // SECTOR) * SECTOR
        if n:
            out += xts_decrypt(key32, buf[:n], sector)
            sector += n // SECTOR
        pending = buf[n:]
    if pending:
        out += xts_decrypt(key32, pending, sector)
    return bytes(out)


# ------------------------------------------------------------------ RomFS
def extract_romfs(blob, outdir):
    if len(blob) < 0x50:
        return 0, 0
    hdr = struct.unpack_from("<9Q", blob, 0)
    (hsize, dhash_off, dhash_sz, dmeta_off, dmeta_sz,
     fhash_off, fhash_sz, fmeta_off, fmeta_sz, data_off) = hdr
    if hsize != 0x50:
        return 0, 0
    dmeta = blob[hsize + dmeta_off:hsize + dmeta_off + dmeta_sz]
    fmeta = blob[hsize + fmeta_off:hsize + fmeta_off + fmeta_sz]
    dcount = dmeta_sz // 0x18
    fcount = fmeta_sz // 0x20
    ndirs = nfiles = 0

    def dirent(i):
        p, sib, cdir, cfile, _h, nl = struct.unpack_from("<IIIIII", dmeta, i * 0x18)
        return sib, cdir, cfile, dmeta[i * 0x18 + 0x18:i * 0x18 + 0x18 + nl].decode("utf-8", "replace")

    def fent(i):
        p, sib, doff, dsz, _h, nl = struct.unpack_from("<IIQQII", fmeta, i * 0x20)
        return sib, doff, dsz, fmeta[i * 0x20 + 0x20:i * 0x20 + 0x20 + nl].decode("utf-8", "replace")

    def walk_files(this, path):
        nonlocal nfiles
        while this != EMPTY:
            sib, doff, dsz, name = fent(this)
            os.makedirs(path, exist_ok=True)
            target = os.path.join(path, name)
            if dsz:
                with open(target, "wb") as fh:
                    fh.write(blob[data_off + doff:data_off + doff + dsz])
                nfiles += 1
            else:
                os.makedirs(target, exist_ok=True)
            this = sib

    def walk_dirs(this, path):
        nonlocal ndirs
        while this != EMPTY:
            sib, cdir, cfile, name = dirent(this)
            cur = os.path.join(path, name) if name else path
            os.makedirs(cur, exist_ok=True)
            if cfile != EMPTY:
                walk_files(cfile, cur)
            if cdir != EMPTY:
                walk_dirs(cdir, cur)
            ndirs += 1
            this = sib

    os.makedirs(outdir, exist_ok=True)
    _p, cdir, cfile, _n = dirent(0)
    walk_files(cfile, outdir)
    if cdir != EMPTY:
        walk_dirs(cdir, outdir)
    return ndirs, nfiles


def ivfc_data(sec_blob, superblock):
    """RomFS data lives at the lowest IVFC level inside the section."""
    magic = superblock[0:4]
    if magic != b"IVFC":
        return sec_blob
    _m, _id, mhs, nlev = struct.unpack_from("<IIII", superblock, 0)
    lo_off, lo_size = struct.unpack_from("<QQ", superblock, 0x10 + (nlev - 1) * 0x18)
    return sec_blob[lo_off:lo_off + lo_size]


def main(argv):
    global _XTS_MULT
    if len(argv) < 4:
        print(__doc__)
        return 1
    cmd, nsp, keys_path = argv[1], argv[2], argv[3]
    ks = Keyset(keys_path)
    rdr = Reader(nsp)
    parts = parse_pfs0(rdr.read(0, 0x10000))

    # Locate the .cnmt.nca first: it holds the title key for the game NCAs.
    title_key = None
    meta_blob = None
    infos = {}
    for name, off, size in parts:
        if not name.endswith(".nca"):
            continue
        hdr, ver = decrypt_nca_header(rdr, off, ks)
        infos[name] = (off, size, hdr, ver)
        if name.endswith(".cnmt.nca") and hdr:
            hdr["encrypted_keys"] = rdr.read(off + 0x2F2, 0x40)
            sec = next((s for s in hdr["sections"] if s["partition_type"] is not None), None)
            for s in hdr["sections"]:
                if s["fs_type"] == 1 and s["size"] and s["partition_type"] == 1:
                    meta_blob = decrypt_section(rdr, hdr, s, ks)
            if meta_blob:
                title_key = guess_title_key(ks, meta_blob, parts, rdr, infos)

    rights = None
    for name, (off, size, hdr, ver) in infos.items():
        if hdr and any(hdr["rights_id"]):
            rights = hdr["rights_id"]
            break

    if cmd == "info":
        print("Title ID: %016x" % (infos and next(iter(infos.values()))[2]["title_id"]))
        print("Rights ID: %s" % (rights.hex() if rights else "(none - standard crypto)"))
        print("Title key: %s" % (title_key.hex() if title_key else "(not needed)"))
        for name, (off, size, hdr, ver) in infos.items():
            if not hdr:
                print("\n%s: header decrypt failed" % name)
                continue
            print("\n%s  size=%d  %s  content=%s  kaek=%d" % (
                name, size, ver, CONTENT_TYPES.get(hdr["content_type"], "?"),
                hdr["kaek_ind"]))
            for s in hdr["sections"]:
                if not s["start"]:
                    continue
                print("   sec%d %-6s %-6s crypt=%-4s off=%#x size=%d" % (
                    s["index"], PARTITION_NAMES.get(s["partition_type"], "?"),
                    FS_NAMES.get(s["fs_type"], "?"),
                    CRYPT_NAMES.get(s["crypt_type"], "?"),
                    s["offset"], s["size"]))
        return 0

    if cmd != "dump":
        print(__doc__)
        return 1

    outdir = argv[4]
    only = argv[5] if len(argv) > 5 else None
    for name, (off, size, hdr, ver) in infos.items():
        if not hdr:
            print("skip %s (header failed)" % name)
            continue
        if only and only not in name:
            continue
        if only is None and name.endswith(".cnmt.nca"):
            continue
        base = os.path.join(outdir, os.path.splitext(name)[0])
        print("=== %s ===" % name)
        for s in hdr["sections"]:
            if not s["start"]:
                continue
            print("  section %d (%s/%s)" % (s["index"],
                  PARTITION_NAMES.get(s["partition_type"], "?"),
                  FS_NAMES.get(s["fs_type"], "?")))
            if s["partition_type"] == 1 and s["fs_type"] in (1, 2):
                blob = decrypt_section(rdr, hdr, s, ks, title_key)
                target = base + "_sec%d" % s["index"]
                with open(target, "wb") as fh:
                    fh.write(blob)
                for fn, foff, fsize in parse_pfs0(blob[:0x100000]):
                    os.makedirs(target, exist_ok=True)
                    with open(os.path.join(target, fn), "wb") as fh:
                        fh.write(blob[foff:foff + fsize])
                    print("    %s (%d bytes)" % (fn, fsize))
            elif s["partition_type"] == 0 and s["fs_type"] == 3:
                blob = decrypt_section(rdr, hdr, s, ks, title_key)
                romfs = ivfc_data(blob, s["superblock"])
                d, f = extract_romfs(romfs, base + "_romfs")
                print("    romfs: %d dirs, %d files" % (d, f))
    return 0


def guess_title_key(ks, meta, parts, rdr, infos):
    """Pull the title key out of the .cnmt.nca meta region.

    The meta stores rights_id in the clear with the title key immediately before
    it, wrapped under the titlekek, so locating the rights id from the game NCA
    headers is enough to recover the key without trusting a fixed offset.
    """
    rights = None
    for name, (off, size, hdr, ver) in infos.items():
        if name.endswith(".cnmt.nca"):
            continue
        if hdr and any(hdr["rights_id"]):
            rights = hdr["rights_id"]
            rev = (max(hdr["crypto_type"], hdr["crypto_type2"]) - 1) \
                if max(hdr["crypto_type"], hdr["crypto_type2"]) else 0
            break
    if rights is None:
        return None
    pos = meta.find(rights)
    if pos < 0x10:
        return None
    enc = meta[pos - 0x10:pos]
    rev = 0
    for name, (off, size, hdr, ver) in infos.items():
        if name.endswith(".cnmt.nca"):
            continue
        if hdr and any(hdr["rights_id"]):
            rev = (max(hdr["crypto_type"], hdr["crypto_type2"]) - 1) \
                if max(hdr["crypto_type"], hdr["crypto_type2"]) else 0
            break
    for cand in (rev, 0, 1, 2, 3):
        if cand not in ks.titlekeks:
            continue
        tk = ecb_decrypt(ks.titlekeks[cand], enc)
        yield_ok = tk
        return yield_ok
    return None


if __name__ == "__main__":
    sys.exit(main(sys.argv))