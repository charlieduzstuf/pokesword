"""Hashing utilities"""


def fnv1_32(inp: str) -> int:
    """Calculate the FNV-1 hash of a string"""
    hash_ = 0
    for char in inp:
        hash_ = ((hash_ * 0x83) ^ ord(char)) & 0xFFFFFFFF
    return hash_
