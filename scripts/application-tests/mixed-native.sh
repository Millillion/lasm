#!/usr/bin/env bash
# Match the original CTest entry points; assertions and fixture changes remain
# inside their original shell scripts, not a rewritten native test.
set -eo pipefail
kind="$1"; driver="$2"; shift 2
if [[ $kind == lake ]]; then
  set -u
  LAKE=lake "$driver"
else
  source "$TEST_DIR/util.sh"
  source "$driver" "$@"
fi
