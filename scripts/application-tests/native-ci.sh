#!/usr/bin/env bash
set -euo pipefail
ulimit -c 0
export LASM_TOOLCHAIN_CACHE="$PWD/.cache/managed-native-suite"
node_binary="$(command -v node)"
"$node_binary" scripts/application-tests/prepare.mjs .work/upstream-native-ci \
  native-build-time node "$node_binary" "$PWD"
exec "$node_binary" scripts/application-tests/run.mjs .work/upstream-native-ci/manifest.json
