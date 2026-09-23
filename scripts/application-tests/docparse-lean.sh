#!/usr/bin/env bash
# An external command keeps the original capture_only function's set -x from
# adding shell-function tracing to the application's captured stderr.
set -eo pipefail
if [[ $# != 4 || $1 != -Dlinter.all=false || $2 != --run || $3 != run_test.lean || $4 != "$LASM_TEST_INPUT" ]]; then
  echo 'Unmapped upstream parser command; update the parallel harness explicitly.' >&2
  exit 78
fi
prefix=()
if [[ $LASM_APPLICATION_TARGET == deno ]]; then prefix=(run -A); fi
exec "$LASM_APPLICATION_ENGINE" "${prefix[@]}" "$LASM_TEST_DRIVER_DIST/main.mjs" "$4"
