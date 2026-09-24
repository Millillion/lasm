#!/usr/bin/env bash
# Preserve the original server-client driver and all its before/after checks.
set -eo pipefail
driver="$1"
file="$2"
evidence="$LASM_APPLICATION_CASE"
source "$TEST_DIR/util.sh"

printf 'native-driver\n' > "$evidence/phase.txt"
source "$driver" "$file"
cp "$file.out.produced" "$evidence/native.out"
printf '%s\n' "$EXIT" > "$evidence/native-exit.txt"

printf 'application-build\n' > "$evidence/phase.txt"
"$LASM_BUILD_NODE" "$LASM_COMPILER/bin/lasm.mjs" build "$PWD/$file" \
  --target "$LASM_APPLICATION_TARGET" --output "$evidence/dist"

export LASM_TEST_DRIVER_DIST="$evidence/dist"
export LASM_TEST_INPUT="$file"
export PATH="$(dirname "$LASM_TEST_DRIVER_SHIM"):$PATH"
printf 'application-runtime\n' > "$evidence/phase.txt"
source "$driver" "$file"
cp "$file.out.produced" "$evidence/target.out"
printf '%s\n' "$EXIT" > "$evidence/target-exit.txt"
printf 'complete\n' > "$evidence/phase.txt"
