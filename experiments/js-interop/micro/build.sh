#!/bin/sh
# Build the no-Lean micro benchmark in both configurations, under the resource
# guard: proxy.cjs (PROXY_TO_PTHREAD, as Lasm links today) and jspi.cjs (-sJSPI,
# main on Node's main thread). Usage: micro/build.sh OUT_DIR
set -eu
here=$(cd "$(dirname "$0")" && pwd); root=$(cd "$here/../../.." && pwd); out=$1
mkdir -p "$out"
common="-O2 -pthread -fwasm-exceptions -sMEMORY64=1 -sMAIN_MODULE=2 -sEXPORTED_FUNCTIONS=_main,_wasm_add,_probe_depth,_get_depth \
 -sALLOW_MEMORY_GROWTH=1 -sGROWABLE_ARRAYBUFFERS=1 -sINITIAL_MEMORY=134217728 -sSTACK_SIZE=67108864 \
 -sDEFAULT_PTHREAD_STACK_SIZE=67108864 -sPTHREAD_POOL_SIZE=4 -sEXIT_RUNTIME=1 -sMAXIMUM_MEMORY=8589934592 \
 -Wno-experimental -Wno-pthreads-mem-growth --js-library $here/micro-lib.js"
for v in jspi proxy; do
  if [ $v = jspi ]; then flags="-DWITH_JSPI -sJSPI"; else flags="-sPROXY_TO_PTHREAD=1"; fi
  node "$root/scripts/full-lean/run-bounded.mjs" --memory-mib 4096 --report "$out/build-$v.resources.json" -- \
    python3 "$root/scripts/full-lean/base-pages.py" node "$here/../emxx.mjs" emcc "$here/micro.c" $common $flags -o "$out/$v.cjs"
done
