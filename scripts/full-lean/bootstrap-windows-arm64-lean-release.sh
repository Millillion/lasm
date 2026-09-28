#!/usr/bin/env bash
set -euo pipefail
[[ ${MSYSTEM:-} == CLANGARM64 ]]
[[ $(clang -dumpmachine) == aarch64-w64-windows-gnu ]]
export CMAKE_BUILD_PARALLEL_LEVEL=2 LEAN_NUM_THREADS=1 BINARYEN_CORES=1 EMCC_CORES=1
export CC=clang CXX=clang++
node_binary="$(cygpath -u "$LASM_BOOTSTRAP_NODE")"
base="$PWD/.work/windows-arm64-lean-release"
cache_base="$PWD/.work/windows-arm64-lean-release-cache"
[[ -f "$cache_base/identity.json" ]]
export CCACHE_DIR="$(cygpath -m "$cache_base/cache")"
export CCACHE_TEMPDIR="$(cygpath -m "$cache_base/temporary")"
export CCACHE_CONFIGPATH="$(cygpath -m "$cache_base/ccache.conf")"
export CCACHE_MAXSIZE=1024MiB CCACHE_COMPILERCHECK=content CCACHE_REMOTE_STORAGE=
command -v ccache
[[ -f "$base/inputs.json" && ! -e "$base/lean4" ]]
seed="$(cygpath -m "$(cat "$base/seed-prefix.txt")")"
leantar="$(cygpath -m "$(cat "$base/leantar-path.txt")")"
pacman -Q > "$base/msys2-package-versions.txt"
clang --version
cmake --version
git init -b main "$base/lean4"
git -C "$base/lean4" -c core.longpaths=true fetch --depth 1 https://github.com/leanprover/lean4.git 5045d0056413266e57c625dcd7c365b10e377c52
git -C "$base/lean4" -c core.longpaths=true checkout --detach 5045d0056413266e57c625dcd7c365b10e377c52
[[ $(git -C "$base/lean4" rev-parse HEAD) == 5045d0056413266e57c625dcd7c365b10e377c52 ]]
"$node_binary" scripts/full-lean/patch-windows-manifest.mjs "$base/lean4" 4.34.1
git -C "$base/lean4" diff -- src/CMakeLists.txt stage0/src/CMakeLists.txt > "$base/windows-manifest.patch"
# Stage one rebuilds C/C++ natively. Later stages copy C++ archives from the
# prior stage and must not be used with the x64 seed. Keep olean checks enabled.
cmake -S "$base/lean4" -B "$base/build" -G 'Unix Makefiles' \
  -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_RC_COMPILER=llvm-windres \
  -DCMAKE_C_COMPILER_LAUNCHER=ccache -DCMAKE_CXX_COMPILER_LAUNCHER=ccache \
  -DCMAKE_BUILD_TYPE=Release -DCHECK_OLEAN_VERSION=ON \
  -DSTAGE1_PREV_STAGE="$seed" -DUSE_LAKE=OFF -DLLVM=OFF \
  -DLEAN_EXTRA_OPTS='-j1 -s8192' -DLEAN_PLATFORM_TARGET=aarch64-w64-windows-gnu \
  -DCADICAL_USE_CUSTOM_CXX=ON -DLEANTAR="$leantar" -DINSTALL_LEANTAR=ON
cmake --build "$base/build" --target stage1 --parallel 2
prefix="$base/build/stage1"
llvm-readobj --file-headers "$prefix/bin/lean.exe" > "$base/lean-pe.txt"
grep -q IMAGE_FILE_MACHINE_ARM64 "$base/lean-pe.txt"
"$prefix/bin/lean" --version
[[ $("$prefix/bin/lean" --githash) == 5045d0056413266e57c625dcd7c365b10e377c52 ]]
"$prefix/bin/lake" --version
printf 'def main : IO Unit := IO.println "native Windows ARM64 Lean 4.34.1"\n' > "$base/Main.lean"
"$prefix/bin/lean" --run "$base/Main.lean"
"$prefix/bin/lean" -R "$base" -Dcompiler.postponeCompile=false -c "$base/Main.c" "$base/Main.lean"
"$prefix/bin/leanc" -O2 "$base/Main.c" -o "$base/main.exe"
llvm-readobj --file-headers "$base/main.exe" > "$base/main-pe.txt"
grep -q IMAGE_FILE_MACHINE_ARM64 "$base/main-pe.txt"
"$base/main.exe"
"$node_binary" scripts/full-lean/package-windows-arm64-lean.mjs "$(cygpath -m /clangarm64/bin)"
