#!/usr/bin/env bash
# Use the original driver twice, substituting only its known --run invocation
# after the native oracle. Inputs, normalization and assertions stay upstream.
set -eo pipefail
driver="$1"
file="$2"
evidence="$LASM_APPLICATION_CASE"
source "$TEST_DIR/util.sh"

printf 'native-driver\n' > "$evidence/phase.txt"
source "$driver" "$file"
cp "$file.out.produced" "$evidence/native.out"
printf '%s\n' "$EXIT" > "$evidence/native-exit.txt"

export PATH="$(dirname "$LASM_TEST_DRIVER_SHIM"):$PATH"
export LASM_TEST_INPUT="$file"
printf 'application-runtime\n' > "$evidence/phase.txt"
# The driver was compiled once through the installed CLI, with original source.
# This per-case reference lets the common recorder hash that exact artifact;
# cleanup removes only the symlink, leaving the shared artifact for later cases.
ln -s "$LASM_TEST_DRIVER_DIST" "$evidence/dist"
source "$driver" "$file"
cp "$file.out.produced" "$evidence/target.out"
printf '%s\n' "$EXIT" > "$evidence/target-exit.txt"
printf 'complete\n' > "$evidence/phase.txt"
