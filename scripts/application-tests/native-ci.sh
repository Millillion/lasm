#!/usr/bin/env bash
set -euo pipefail
ulimit -c 0
if [[ $# != 4 ]]; then
  echo 'Supply prepare|run|both SELECTION SHARD_INDEX SHARD_COUNT explicitly' >&2
  exit 2
fi
phase="$1"; selection="$2"; shard="$3"; shards="$4"
export LASM_TOOLCHAIN_CACHE="$PWD/.cache/managed-native-suite"
node_binary="$(command -v node)"
case "$phase" in
  prepare|both)
    "$node_binary" scripts/application-tests/prepare-native-shard.mjs .work/upstream-native-ci \
      "$selection" "$shard" "$shards"
    ;;
  run) ;;
  *) exit 2 ;;
esac
if [[ "$phase" != prepare ]]; then
  "$node_binary" scripts/application-tests/prepare-native-shard.mjs --check .work/upstream-native-ci \
    "$selection" "$shard" "$shards"
  exec "$node_binary" scripts/application-tests/run.mjs .work/upstream-native-ci/manifest.json
fi
