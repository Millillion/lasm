#!/usr/bin/env bash
# Map only commands present in these four unchanged upstream clients.
set -eo pipefail
if [[ $# == 3 && $1 == -Dlinter.all=false && $2 == --run && $3 == "$LASM_TEST_INPUT" ]]; then
  prefix=()
  if [[ $LASM_APPLICATION_TARGET == deno ]]; then prefix=(run -A); fi
  exec "$LASM_APPLICATION_ENGINE" "${prefix[@]}" "$LASM_TEST_DRIVER_DIST/main.mjs"
fi
native=false
case "$LASM_TEST_INPUT" in
  diags.lean)
    if [[ $# == 2 && $1 == --server && $2 == -Dlinter.all=false ]]; then native=true; fi ;;
  init_exit.lean|init_exit_with_zed.lean)
    if [[ $# == 1 && $1 == --server ]]; then native=true; fi ;;
  init_exit_worker.lean)
    if [[ $# == 1 && $1 == --worker ]]; then native=true; fi ;;
esac
if $native; then
  printf 'managed native Lean %s\n' "$*" >> "$LASM_APPLICATION_CASE/native-compiler-invocations.txt"
  exec "$LASM_NATIVE_LEAN" "$@"
fi
echo 'Unmapped upstream server-client command; update the parallel harness explicitly.' >&2
exit 78
