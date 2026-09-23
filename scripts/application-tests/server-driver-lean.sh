#!/usr/bin/env bash
# The client/driver is AOT; its original compiler/server child stays native.
# Accept only the two exact command shapes used by this unchanged driver.
set -eo pipefail
if [[ $# == 4 && $1 == -Dlinter.all=false && $2 == --run && $3 == run_test.lean && $4 == "$LASM_TEST_INPUT" ]]; then
  prefix=()
  if [[ $LASM_APPLICATION_TARGET == deno ]]; then prefix=(run -A); fi
  exec "$LASM_APPLICATION_ENGINE" "${prefix[@]}" "$LASM_TEST_DRIVER_DIST/main.mjs" "$4"
fi
if [[ $# == 3 && $1 == --server && $2 == -DstderrAsMessages=false && $3 == -Dexperimental.module=true ]]; then
  printf '%s\n' 'managed native Lean --server -DstderrAsMessages=false -Dexperimental.module=true' >> "$LASM_APPLICATION_CASE/native-compiler-invocations.txt"
  exec "$LASM_NATIVE_LEAN" "$@"
fi
echo 'Unmapped upstream server-driver command; update the parallel harness explicitly.' >&2
exit 78
