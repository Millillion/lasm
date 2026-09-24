#!/usr/bin/env bash
set -eo pipefail
if [[ $# == 1 && $1 == build ]] ||
   [[ $# == 4 && $1 == serve && $2 == -- && $3 == -DstderrAsMessages=false && $4 == -Dexperimental.module=true ]]; then
  printf 'managed native Lake %s\n' "$*" >> "$LASM_APPLICATION_CASE/native-compiler-invocations.txt"
  exec "$LASM_NATIVE_LAKE" "$@"
fi
echo 'Unmapped upstream project-server command; update the parallel harness explicitly.' >&2
exit 78
