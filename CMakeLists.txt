cmake_minimum_required(VERSION 3.13)
project(pokesword C CXX)

# Pokemon Sword static recompilation, structured as a decomp.me / decomp.dev
# project and wired to be a drop-in fork of https://github.com/notyourav/pokesword.
#
# Layout follows upstream pokesword:
#   prog/       game source, one directory per subsystem, namespaced C++
#   lib/        NintendoSDK (nnheaders) + gflib3, as external dependencies
#   data/       the original binaries as ELF (main.elf, ...) + functions.csv
#   tools/      asm-differ, diff.py, check.py, print_decomp_symbols.py
#
# Two build configurations are provided:
#
#   1. Host verification (default). Builds the recovered code natively so the
#      decompilation can be executed and diffed on this machine. The recovered
#      recomp blocks in exefs/<mod>/src are linked unmodified, so behaviour is
#      identical to the shipped recompilation by construction.
#
#   2. NX64 matching. Configure with
#        cmake -DCMAKE_TOOLCHAIN_FILE=ToolchainNX64.cmake -B build
#      to cross-compile for Switch, the way a matching decomp project builds.

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# RECOMP_MODULES: the five NSO modules that make up the game.
set(RECOMP_MODULES rtld main sdk subsdk0 subsdk1)

# The upstream target name, kept so pokesword's own CMake and tooling apply.
add_executable(pokesword)

if(NOT CMAKE_SYSTEM_NAME STREQUAL "NintendoSwitch")
  # ------------------------------------------------------------------
  # Host build: no devkitA64, so compile for the host and keep the
  # recomp execution semantics intact.
  # ------------------------------------------------------------------
  set(RECOMP_STATIC_ONLY ON)
  # decomp/<mod>/CMakeLists.txt resolves the original blocks and the stock
  # standalone runtime through this variable.
  set(BLOCK_SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/exefs")

  foreach(mod ${RECOMP_MODULES})
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/exefs/${mod}/CMakeLists.txt")
      add_subdirectory(exefs/${mod} recomp_${mod})
    endif()
  endforeach()

  # The structured decompilation: named functions wrapping the recovered blocks.
  foreach(mod ${RECOMP_MODULES})
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/decomp/${mod}/CMakeLists.txt")
      add_subdirectory(decomp/${mod} decomp_${mod})
    endif()
  endforeach()

  # Upstream's `pokesword` target has no host counterpart (the recovered code
  # lives in the per-module decompiled_* executables), so stand up an empty
  # interface target to keep upstream CMake fragments valid.
  target_sources(pokesword PRIVATE prog/main.cpp)

  # Per-module verification binaries. Multi-config generators append the
  # config name unless each per-config property is set too, and the tooling
  # in tools/diff_settings.py expects a single stable location.
  foreach(mod ${RECOMP_MODULES})
    if(TARGET decompiled_${mod})
      foreach(cfg "" _DEBUG _RELEASE _RELWITHDEBINFO _MINSIZEREL)
        set_property(TARGET decompiled_${mod} PROPERTY
                     RUNTIME_OUTPUT_DIRECTORY${cfg} "${CMAKE_BINARY_DIR}/bin")
      endforeach()
    endif()
  endforeach()
else()
  # ------------------------------------------------------------------
  # NX64 build: matching decomp, cross-compiled for Switch.
  # ------------------------------------------------------------------
  target_compile_options(pokesword PRIVATE -fno-rtti -fno-exceptions)
  target_compile_options(pokesword PRIVATE -Wall -Wextra)
  target_compile_options(pokesword PRIVATE -fno-strict-aliasing)
  target_compile_options(pokesword PRIVATE -Wno-invalid-offsetof)

  if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/lib/NintendoSDK/CMakeLists.txt")
    add_subdirectory(lib/NintendoSDK)
    target_link_libraries(pokesword PUBLIC NintendoSDK)
  endif()

  add_subdirectory(lib/gflib3)
  target_link_libraries(pokesword PUBLIC gflib3)

  add_subdirectory(prog)
endif()

# Pawn scripts are game data, not compiled code. They are inventoried and
# disassembled under decomp/script/ by tools/pawn_disasm.py.
add_custom_target(pawn_scripts
  COMMAND ${CMAKE_COMMAND} -E echo
          "Pawn scripts: decomp/script/*.pasm (691) + *.pseudo.c (691)"
  COMMENT "Listing Pawn script decompilation"
)
