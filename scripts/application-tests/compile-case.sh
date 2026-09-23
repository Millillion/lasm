#!/usr/bin/env bash
# Parallel application harness. The original driver, tests, sidecars, arguments,
# output normalization and assertions are unchanged. Only the deployed compile/
# execution command differs. Native --run checks remain native compiler evidence.
set -eo pipefail
file="$1"
evidence="$2"
source "$TEST_DIR/util.sh"

echo 'Running the unchanged native compile/interpreter driver'
printf 'native-driver\n' > "$evidence/phase.txt"
source ./run_test.sh "$file"
cp "$file.out.produced" "$evidence/native.out"
printf '%s\n' "$EXIT" > "$evidence/native-exit.txt"

if [[ -z $DO_COMPILE ]]; then
  echo 'Upstream disables compilation; native driver ran, deployed application remains untested.'
  exit 77
fi
if (( ${#TEST_LEAN_ARGS[@]} != 0 || ${#TEST_LEANC_ARGS[@]} != 0 )); then
  echo 'This case supplies extra compiler arguments; application harness integration is required.'
  exit 78
fi

echo 'Compiling the unchanged application through the installed Lasm CLI'
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
echo 'Native driver and deployed application passed their original assertions'
printf 'complete\n' > "$evidence/phase.txt"
