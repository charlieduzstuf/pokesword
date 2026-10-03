# Rebuilds hactool from source with clang/MSVC. The only files added on top of
# upstream are compat/getopt.{c,h} and compat/strings.h, because MSVC ships no
# <getopt.h> or <strings.h> and hactool's main.c includes both.
$ErrorActionPreference = "Stop"
$src = "$env:TEMP\opencode\hactool"
if (-not (Test-Path $src)) { git clone --depth 1 https://github.com/SciresM/hactool.git $src }
Push-Location $src
$dump = cmd /c '"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat" >nul 2>&1 && set'
foreach ($line in $dump) { if ($line -match '^([^=]+)=(.*)$') { Set-Item "env:$($matches[1])" $matches[2] } }
$env:PATH = "$env:LOCALAPPDATA\..\..\..\scoop\apps\llvm\current\bin;$env:PATH"
Remove-Item -Recurse -Force build -ErrorAction SilentlyContinue
New-Item -ItemType Directory -Force -Path build | Out-Null
$cf = @('--target=x86_64-pc-windows-msvc','-O2','-D_CRT_SECURE_NO_WARNINGS','-D_FILE_OFFSET_BITS=64','-I.','-Icompat','-Imbedtls/include')
$srcs = 'save','sha','aes','extkeys','rsa','npdm','bktr','kip','packages','pki','pfs0','hfs0','nca0_romfs','romfs','utils','nax0','nso','lz4','nca','xci','main','filepath','ConvertUTF','cJSON'
foreach ($s in $srcs + 'compat\getopt') { & clang @cf -c "$s.c" -o "build\$([IO.Path]::GetFileNameWithoutExtension($s)).obj" }
Get-ChildItem mbedtls\library\*.c | Where-Object { $_.Name -ne 'net_sockets.c' } | ForEach-Object {
    & clang @cf -O1 -c $_.FullName -o "build\mbed_$([IO.Path]::GetFileNameWithoutExtension($_.Name)).obj"
}
& clang --target=x86_64-pc-windows-msvc -o hactool.exe (Get-ChildItem build\*.obj | ForEach-Object { $_.FullName }) -lws2_32 -ladvapi32 -lbcrypt -luserenv
Pop-Location