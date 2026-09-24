#!/usr/bin/env bash
# The original project builds and serves natively; its unchanged Lean client is AOT.
set -eo pipefail
driver="$1"
evidence="$LASM_APPLICATION_CASE"
source "$TEST_DIR/util.sh"
input=InverseModuleHierarchy/BasicTest.lean

printf 'native-driver\n' > "$evidence/phase.txt"
source "$driver"
cp "$input.out.produced" "$evidence/native.out"
printf '%s\n' "$EXIT" > "$evidence/native-exit.txt"

export PATH="$(dirname "$LASM_TEST_DRIVER_SHIM"):$PATH"
export LASM_TEST_INPUT="$(realpath "$input")"
printf 'application-runtime\n' > "$evidence/phase.txt"
ln -s "$LASM_TEST_DRIVER_DIST" "$evidence/dist"
source "$driver"
cp "$input.out.produced" "$evidence/target.out"
printf '%s\n' "$EXIT" > "$evidence/target-exit.txt"
printf 'complete\n' > "$evidence/phase.txt"
