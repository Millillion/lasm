#!/usr/bin/env bash
set -euo pipefail
[[ ${MSYSTEM:-} == CLANGARM64 ]]
[[ $(clang -dumpmachine) == aarch64-w64-windows-gnu ]]
base="$PWD/.work/compiler-cache-control"
mkdir -p "$base/temporary"
export CCACHE_DIR="$(cygpath -m "$base/cache")"
export CCACHE_MAXSIZE=64MiB CCACHE_COMPILERCHECK=content
export CCACHE_TEMPDIR="$(cygpath -m "$base/temporary")"
export CCACHE_CONFIGPATH="$(cygpath -m "$base/ccache.conf")"
export CCACHE_REMOTE_STORAGE=
node_binary="$(cygpath -u "$LASM_BOOTSTRAP_NODE")"
if [[ $1 == create ]]; then
  printf 'max_size = 64MiB\ncompiler_check = content\n' > "$base/ccache.conf"
  ccache --version > "$base/ccache-version.txt"
  clang --version > "$base/clang-version.txt"
  pacman -Q > "$base/package-versions.txt"
  printf 'int answer(void) { return 42; }\n' > "$base/answer.c"
  printf '#include <stdio.h>\nint answer(void); int main(void) { printf("%%d\\n", answer()); return 0; }\n' > "$base/main.c"
  ccache --zero-stats
  ccache clang -O2 -c "$base/answer.c" -o "$base/answer.o"
  cp "$base/answer.o" "$base/expected.o"
  rm "$base/answer.o"
  ccache clang -O2 -c "$base/answer.c" -o "$base/answer.o"
  cmp "$base/expected.o" "$base/answer.o"
  "$node_binary" scripts/ci/compiler-cache-control.mjs identity
elif [[ $1 == verify ]]; then
  rm "$base/answer.o"
  ccache clang -O2 -c "$base/answer.c" -o "$base/answer.o"
  cmp "$base/expected.o" "$base/answer.o"
else
  exit 2
fi
clang "$base/main.c" "$base/answer.o" -o "$base/main.exe"
[[ $("$base/main.exe") == 42 ]]
ccache --print-stats > "$base/stats-$1.txt"
"$node_binary" scripts/ci/compiler-cache-control.mjs "$1"
