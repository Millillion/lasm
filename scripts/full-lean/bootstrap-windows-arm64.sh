#!/usr/bin/env bash
set -euo pipefail

# Maintainer bootstrap experiment. Native Clang/Lean on an ARM64 Windows host;
# MSYS2's POSIX shell/make utilities are x64 helpers and are explicitly recorded.
# Not a shippable SDK, and not evidence for an all-native end-user dependency set.
[[ "${MSYSTEM:-}" == CLANGARM64 ]]
[[ "$(clang -dumpmachine)" == aarch64-w64-windows-gnu ]]
export CMAKE_BUILD_PARALLEL_LEVEL=1 LEAN_NUM_THREADS=2
export BINARYEN_CORES=1 EMCC_CORES=1
export CC=clang CXX=clang++
base="$PWD/.work/windows-arm64-bootstrap"
mkdir -p "$base"
pacman -Q > "$base/msys2-package-versions.txt"
clang --version
cmake --version
git init "$base/lean4"
git -C "$base/lean4" fetch --depth 1 https://github.com/leanprover/lean4.git 293d5d0c0c3f3dded4688b3ccd6a33939ac5102b
git -C "$base/lean4" checkout --detach 293d5d0c0c3f3dded4688b3ccd6a33939ac5102b
[[ "$(git -C "$base/lean4" rev-parse HEAD)" == 293d5d0c0c3f3dded4688b3ccd6a33939ac5102b ]]
cmake -S "$base/lean4" -B "$base/build" -G 'Unix Makefiles' \
  -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ \
  -DCMAKE_BUILD_TYPE=Release -DCHECK_OLEAN_VERSION=ON \
  -DUSE_LAKE=OFF -DLLVM=OFF -DLEAN_EXTRA_OPTS='-j2 -s8192' \
  -DSTAGE0_LEAN_EXTRA_OPTS='-j2 -s8192' \
  -DLEAN_PLATFORM_TARGET=aarch64-w64-windows-gnu \
  -DLEANTAR=not-packaged -DINSTALL_LEANTAR=OFF -DSTAGE0_INSTALL_LEANTAR=OFF
# Missing ARM64 leantar is not silently replaced by its x64 release. This
# compiler bootstrap does not test Lake's archive cache; distribution is pending.
cmake --build "$base/build" --target stage1 --parallel 1
prefix="$base/build/stage1"
llvm-readobj --file-headers "$prefix/bin/lean.exe" > "$base/lean-pe.txt"
grep -q IMAGE_FILE_MACHINE_ARM64 "$base/lean-pe.txt"
"$prefix/bin/lean" --version
"$prefix/bin/lean" --githash
"$prefix/bin/lake" --version
printf 'def main : IO Unit := IO.println "native Windows ARM64 Lean"\n' > "$base/Main.lean"
"$prefix/bin/lean" --run "$base/Main.lean"
"$prefix/bin/lean" -R "$base" -Dcompiler.postponeCompile=false -c "$base/Main.c" "$base/Main.lean"
"$prefix/bin/leanc" -O2 "$base/Main.c" -o "$base/main.exe"
llvm-readobj --file-headers "$base/main.exe" > "$base/main-pe.txt"
grep -q IMAGE_FILE_MACHINE_ARM64 "$base/main-pe.txt"
"$base/main.exe"
