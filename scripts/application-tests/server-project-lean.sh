#!/usr/bin/env bash
set -eo pipefail
if [[ $# != 5 || $1 != -Dlinter.all=false || $2 != --run || $3 != run_test.lean || $4 != -p || $5 != "$LASM_TEST_INPUT" ]]; then
  echo 'Unmapped upstream project-client command; update the parallel harness explicitly.' >&2
  exit 78
fi
exec "$LASM_APPLICATION_ENGINE" "$LASM_TEST_DRIVER_DIST/main.mjs" "$4" "$5"
