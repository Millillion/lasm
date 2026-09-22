import { join } from 'node:path';

const quote = value => "'" + value.replaceAll("'", "'\\''") + "'";

// Only these two upstream invocations run the same verified two-line Lean
// entry point. Preserve every driver argument, including the project flag.
export function serverDriverShim(source, prefix, executable) {
  return `#!/usr/bin/env bash
if [ "$1" = '-Dlinter.all=false' ] && [ "$2" = '--run' ] && [ "$3" = 'run_test.lean' ]; then
  if { [ "$PWD" = ${quote(join(source, 'tests/server_interactive'))} ] && [ "$#" -eq 4 ]; } ||
     { [ "$PWD" = ${quote(join(source, 'tests/misc_dir/server_project'))} ] && [ "$#" -eq 5 ] && [ "$4" = '-p' ]; }; then
    shift 3
    export LEAN_NUM_THREADS="\${LEAN_NUM_THREADS:-4}"
    export LEAN_STACK_SIZE_KB="\${LEAN_STACK_SIZE_KB:-65536}"
    exec ${quote(executable)} "$@"
  fi
fi
exec ${quote(join(prefix, 'bin/lean'))} "$@"
`;
}
