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
command -v llvm-windres
command -v llvm-readobj
node_binary="$(cygpath -u "$LASM_BOOTSTRAP_NODE")"
base="$PWD/.work/windows-arm64-bootstrap"
mkdir -p "$base"
pacman -Q > "$base/msys2-package-versions.txt"
clang --version
cmake --version
git init -b main "$base/lean4"
git -C "$base/lean4" fetch --depth 1 https://github.com/leanprover/lean4.git 293d5d0c0c3f3dded4688b3ccd6a33939ac5102b
git -C "$base/lean4" checkout --detach 293d5d0c0c3f3dded4688b3ccd6a33939ac5102b
[[ "$(git -C "$base/lean4" rev-parse HEAD)" == 293d5d0c0c3f3dded4688b3ccd6a33939ac5102b ]]
"$node_binary" scripts/full-lean/patch-windows-manifest.mjs "$base/lean4"
git -C "$base/lean4" diff -- src/CMakeLists.txt stage0/src/CMakeLists.txt > "$base/windows-manifest.patch"
# Fail quickly on resource-compiler/COFF issues, before compiling thousands of
# upstream C files. The manifest itself is the unchanged upstream Windows one.
mkdir -p "$base/manifest-check"
cp "$base/lean4/src/shell/manifest.rc" "$base/lean4/src/shell/app.manifest" "$base/manifest-check/"
printf '#include <stdio.h>\nint main(void) { puts("native ARM64 manifest link"); return 0; }\n' > "$base/manifest-check/main.c"
printf '\n' > "$base/manifest-check/empty.c"
cat > "$base/manifest-check/CMakeLists.txt" <<'CMAKE'
cmake_minimum_required(VERSION 3.21)
project(ManifestControl C RC)
add_library(leanmanifest STATIC empty.c manifest.rc)
add_executable(manifest-check main.c)
target_link_libraries(manifest-check PRIVATE -Wl,--whole-archive leanmanifest -Wl,--no-whole-archive)
CMAKE
cmake -S "$base/manifest-check" -B "$base/manifest-build" -G 'Unix Makefiles' \
  -DCMAKE_C_COMPILER=clang -DCMAKE_RC_COMPILER=llvm-windres
cmake --build "$base/manifest-build" --parallel 1
llvm-readobj --file-headers "$base/manifest-build/manifest-check.exe" > "$base/manifest-pe.txt"
grep -q IMAGE_FILE_MACHINE_ARM64 "$base/manifest-pe.txt"
"$base/manifest-build/manifest-check.exe"
cmake -S "$base/lean4" -B "$base/build" -G 'Unix Makefiles' \
  -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_RC_COMPILER=llvm-windres \
  -DSTAGE0_CMAKE_RC_COMPILER=llvm-windres \
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
