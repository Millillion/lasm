#!/usr/bin/env bash
set -euo pipefail
ulimit -c 0
export LASM_TOOLCHAIN_CACHE="$PWD/.cache/managed-native-suite"
node_binary="$(command -v node)"
case "${1:-both}" in
  prepare|both)
    "$node_binary" scripts/application-tests/prepare-native-shard.mjs .work/upstream-native-ci \
      "${LASM_NATIVE_SELECTION:-all}" "${LASM_NATIVE_SHARD:-0}" "${LASM_NATIVE_SHARDS:-1}"
    ;;
  run) ;;
  *) exit 2 ;;
esac
if [[ "${1:-both}" != prepare ]]; then
  exec "$node_binary" scripts/application-tests/run.mjs .work/upstream-native-ci/manifest.json
fi
