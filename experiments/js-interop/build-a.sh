#!/bin/sh
# Build configuration A of the prototype with the current source checkout's
# Lasm CLI, under the maintainer resource guard (base pages, one Binaryen/emcc
# worker). Usage: experiments/js-interop/build-a.sh RUNTIME_DIR WORK_DIR TAG
#   RUNTIME_DIR: an application runtime bundle (targets/lean-4.36.0-rc2-wasm64)
#   WORK_DIR: a scratch directory under .work/ (receives proto-src/ and dist-a/)
set -eu
root=$(cd "$(dirname "$0")/../.." && pwd)
runtime=$1 work=$2 tag=$3
rm -rf "$work/proto-src" && mkdir -p "$work" && cp -r "$root/experiments/js-interop/proto" "$work/proto-src"
cd "$work/proto-src"
node "$root/scripts/full-lean/run-bounded.mjs" --report "$work/build-a-$tag.resources.json" -- \
  python3 "$root/scripts/full-lean/base-pages.py" env BINARYEN_CORES=1 EMCC_CORES=1 LASM_KEEP_LINK_WORK=1 \
  LASM_APPLICATION_RUNTIME="$runtime" node "$root/bin/lasm.mjs" build Main.lean --output "$work/dist-a" --verbose
