#!/usr/bin/env bash
set -euo pipefail
ulimit -c 0
if [[ $# != 4 && $# != 5 ]]; then
  echo 'Supply prepare|run|both SELECTION SHARD_INDEX SHARD_COUNT [LEAN_VERSION] explicitly' >&2
  exit 2
fi
phase="$1"; selection="$2"; shard="$3"; shards="$4"
version_args=()
if [[ $# == 5 ]]; then version_args=("$5"); fi
export LASM_TOOLCHAIN_CACHE="$PWD/.cache/managed-native-suite"
node_binary="$(command -v node)"
case "$phase" in
  prepare|both)
    "$node_binary" scripts/application-tests/prepare-native-shard.mjs .work/upstream-native-ci \
      "$selection" "$shard" "$shards" "${version_args[@]}"
    ;;
  run) ;;
  *) exit 2 ;;
esac
if [[ "$phase" != prepare ]]; then
  "$node_binary" scripts/application-tests/prepare-native-shard.mjs --check .work/upstream-native-ci \
    "$selection" "$shard" "$shards" "${version_args[@]}"
  exec "$node_binary" scripts/application-tests/run.mjs .work/upstream-native-ci/manifest.json
fi
