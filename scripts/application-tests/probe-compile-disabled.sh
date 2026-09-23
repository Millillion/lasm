#!/usr/bin/env bash
# Explicit extra experiment for cases that upstream marks no_compile. Their
# original driver/markers still run unchanged before either AOT control.
set -eo pipefail
file="$1"
evidence="$2"
source "$TEST_DIR/util.sh"
printf 'native-driver\n' > "$evidence/phase.txt"
source ./run_test.sh "$file"
cp "$file.out.produced" "$evidence/native.out"
printf '%s\n' "$EXIT" > "$evidence/native-exit.txt"
if [[ -n $DO_COMPILE ]]; then
  echo 'The extra compilation probe requires an upstream compile-disabled case.' >&2
  exit 78
fi
if (( ${#TEST_LEAN_ARGS[@]} != 0 || ${#TEST_LEANC_ARGS[@]} != 0 )); then
  echo 'Unmapped compiler arguments in extra compilation probe.' >&2
  exit 78
fi

# Additional native AOT control: the same commands used by upstream's ordinary
# compile driver, with every original assertion and before/after hook retained.
printf 'extra-native-aot\n' > "$evidence/phase.txt"
run_before "$file"
lean --c="$file.c" -Dcompiler.postponeCompile=false "$file"
leanc ${LEANC_OPTS-} -O3 -DNDEBUG -o "$file.out" "$file.c"
capture_only "$file" "./$file.out" "${TEST_ARGS[@]}"
printf '%s\n' "$EXIT" > "$evidence/extra-native-exit.txt"
normalize_measurements
cp "$file.out.produced" "$evidence/extra-native.out"
check_out_file
check_exit_is "${TEST_EXIT:-0}"
run_after "$file"

printf 'application-build\n' > "$evidence/phase.txt"
run_before "$file"
"$LASM_BUILD_NODE" "$LASM_COMPILER/bin/lasm.mjs" build "$PWD/$file" \
  --target "$LASM_APPLICATION_TARGET" --output "$evidence/dist"
prefix=()
if [[ $LASM_APPLICATION_TARGET == deno ]]; then prefix=(run -A); fi
printf 'application-runtime\n' > "$evidence/phase.txt"
capture_only "$file" "$LASM_APPLICATION_ENGINE" "${prefix[@]}" "$evidence/dist/main.mjs" "${TEST_ARGS[@]}"
cp "$file.out.produced" "$evidence/target-raw.out"
printf '%s\n' "$EXIT" > "$evidence/target-exit.txt"
normalize_measurements
cp "$file.out.produced" "$evidence/target.out"
check_out_file
check_exit_is "${TEST_EXIT:-0}"
run_after "$file"
printf 'complete\n' > "$evidence/phase.txt"
