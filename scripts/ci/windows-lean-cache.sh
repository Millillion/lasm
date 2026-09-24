#!/usr/bin/env bash
set -euo pipefail
[[ ${MSYSTEM:-} == CLANGARM64 ]]
[[ $(clang -dumpmachine) == aarch64-w64-windows-gnu ]]
base="$PWD/.work/windows-arm64-bootstrap-cache"
mkdir -p "$base/temporary"
export CCACHE_DIR="$(cygpath -m "$base/cache")"
export CCACHE_MAXSIZE=1024MiB CCACHE_COMPILERCHECK=content
export CCACHE_TEMPDIR="$(cygpath -m "$base/temporary")"
export CCACHE_CONFIGPATH="$(cygpath -m "$base/ccache.conf")"
export CCACHE_REMOTE_STORAGE=
node_binary="$(cygpath -u "$LASM_BOOTSTRAP_NODE")"
case "$1" in
  prepare)
    [[ ! -e "$base/identity.json" ]]
    printf 'max_size = 1024MiB\ncompiler_check = content\n' > "$base/ccache.conf"
    ccache --version > "$base/ccache-version.txt"
    clang --version > "$base/clang-version.txt"
    pacman -Q > "$base/package-versions.txt"
    "$node_binary" scripts/ci/windows-lean-cache.mjs identity
    ;;
  build)
    [[ -f "$base/identity.json" ]]
    ccache --zero-stats
    ccache --show-config > "$base/effective-config.txt"
    # Both upstream CMake compilation and generated Lean C use its detected
    # compiler launcher. The build tree starts fresh on every runner.
    bash scripts/full-lean/bootstrap-windows-arm64.sh
    ;;
  finish)
    [[ -d "$base/cache" ]]
    # The previous bounded build has exited and its entire Job Object is closed.
    # Ccache publishes completed objects atomically; temporary files live outside
    # the checkpoint. No interrupted .o/.olean/CMake build tree is reused.
    ccache --cleanup
    ccache --print-stats > "$base/stats.txt"
    "$node_binary" scripts/ci/windows-lean-cache.mjs receipt
    ;;
  *) exit 2 ;;
esac
