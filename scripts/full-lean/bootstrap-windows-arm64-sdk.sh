#!/usr/bin/env bash
set -euo pipefail

# Maintainer source bootstrap only. Native ARM64 LLVM/Binaryen, with MSYS2 x64
# shell utilities explicitly retained as bootstrap tools, not shipped tools.
[[ "${MSYSTEM:-}" == CLANGARM64 ]]
[[ "$(clang -dumpmachine)" == aarch64-w64-windows-gnu ]]
export CMAKE_BUILD_PARALLEL_LEVEL=1 BINARYEN_CORES=1 EMCC_CORES=1
node_binary="$(cygpath -u "$LASM_BOOTSTRAP_NODE")"
base="$PWD/.work/windows-arm64-sdk"
mkdir -p "$base"
pacman -Q > "$base/msys2-package-versions.txt"
clang --version
cmake --version

# Pinned by emscripten-releases f04ea239d533260dd1db760dd2d668d5f9a88d6b/DEPS.
# SHA256 of that original DEPS: 6573240bc51834574376040f45dac06132d0d3fc35edd3f9302b285fdcf94a76.
llvm_commit=b158b0ae6c559f87be325b8f427c5588e6a48823
binaryen_commit=d03c25ea43d8f147fc222f9b88ff3bf641abe8da
fetch_source() {
  local repository="$1" revision="$2" directory="$3"
  git init -b main "$directory"
  git -C "$directory" -c core.longpaths=true fetch --depth 1 "$repository" "$revision"
  git -C "$directory" -c core.longpaths=true checkout --detach "$revision"
  [[ "$(git -C "$directory" rev-parse HEAD)" == "$revision" ]]
}
printf 'int main(void) { return 0; }\n' > "$base/link-control.c"
# Verify the single-threaded native linker setting before the large build.
clang -Wl,--threads=1 "$base/link-control.c" -o "$base/link-control.exe"
"$base/link-control.exe"

fetch_source https://github.com/llvm/llvm-project.git "$llvm_commit" "$base/llvm-project"
cmake -S "$base/llvm-project/llvm" -B "$base/llvm-build" -G Ninja \
  -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ \
  -DCMAKE_BUILD_TYPE=Release -DCMAKE_C_FLAGS_RELEASE='-O2 -DNDEBUG' \
  -DCMAKE_CXX_FLAGS_RELEASE='-O2 -DNDEBUG' -DCMAKE_EXE_LINKER_FLAGS='-Wl,--threads=1' \
  -DLLVM_ENABLE_PROJECTS='clang;lld' -DLLVM_TARGETS_TO_BUILD=WebAssembly \
  -DLLVM_ENABLE_ASSERTIONS=OFF -DLLVM_ENABLE_LTO=OFF -DLLVM_PARALLEL_LINK_JOBS=1 \
  -DLLVM_INCLUDE_TESTS=OFF -DLLVM_INCLUDE_BENCHMARKS=OFF -DLLVM_INCLUDE_EXAMPLES=OFF \
  -DLLVM_INCLUDE_DOCS=OFF -DLLVM_ENABLE_BINDINGS=OFF \
  -DLLVM_BUILD_LLVM_DYLIB=OFF -DLLVM_BUILD_LLVM_C_DYLIB=OFF -DLLVM_LINK_LLVM_DYLIB=OFF \
  -DCLANG_BUILD_CLANG_DYLIB=OFF -DCLANG_LINK_CLANG_DYLIB=OFF \
  -DCLANG_ENABLE_ARCMT=OFF -DCLANG_ENABLE_STATIC_ANALYZER=OFF \
  -DLLVM_ENABLE_ZLIB=ON -DLLVM_ENABLE_ZSTD=ON -DLLVM_ENABLE_CURL=OFF -DLLVM_ENABLE_LIBXML2=OFF
cmake --build "$base/llvm-build" --parallel 1 --target \
  clang lld llvm-ar llvm-ranlib llvm-nm llvm-objcopy llvm-dwarfdump llvm-dwp \
  llvm-profdata llvm-cov clang-scan-deps llvm-readobj llvm-size llvm-strip

fetch_source https://github.com/WebAssembly/binaryen.git "$binaryen_commit" "$base/binaryen"
cmake -S "$base/binaryen" -B "$base/binaryen-build" -G Ninja \
  -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ \
  -DCMAKE_BUILD_TYPE=Release -DCMAKE_C_FLAGS_RELEASE='-O2 -DNDEBUG' \
  -DCMAKE_CXX_FLAGS_RELEASE='-O2 -DNDEBUG' -DCMAKE_EXE_LINKER_FLAGS='-Wl,--threads=1' \
  -DBUILD_TESTS=OFF -DBUILD_FUZZTEST=OFF -DBUILD_SHARED_LIBS=OFF -DBYN_ENABLE_LTO=OFF \
  -DENABLE_WERROR=OFF -DBUILD_EMSCRIPTEN_TOOLS_ONLY=ON
cmake --build "$base/binaryen-build" --parallel 1

"$node_binary" scripts/full-lean/check-windows-arm64-sdk.mjs \
  "$(cygpath -m "$base")" "$llvm_commit" "$binaryen_commit"
