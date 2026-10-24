#!/bin/bash
# Phase 7.1: the prototypes under `wrangler dev` (local workerd), one build at a
# time. usage: measure-workerd.sh FINAL_DIR WRANGLER > results.jsonl
# Needs CI=1 and no login; wrangler never opens a browser here.
set -u
F=$1; WR=$2; HERE=$(cd "$(dirname "$0")" && pwd)
export CI=1 BROWSER=false WRANGLER_SEND_METRICS=false NO_COLOR=1
run() { # app build port
  cp "$F/$2/program.mjs" "$F/$2/program.wasm" "$HERE/workers/$1/build/"
  (cd "$HERE/workers/$1" && exec setsid "$WR" dev --port "$3" --ip 127.0.0.1 > "$F/$2.wrangler.log" 2>&1 < /dev/null) & local pid=$!
  for i in $(seq 1 90); do curl -s -o /dev/null -m 3 "localhost:$3/__startup" && break; sleep 1; done
  local startup=$(curl -s "localhost:$3/__startup")
  if [ "$1" = pure ]; then
    for p in / /fib/20 /primes/10000; do echo "{\"app\":\"pure\",\"build\":\"$2\",\"bench\":$(curl -s "localhost:$3/__bench?n=2000&path=$p")}"; done
    for p in /sleep/20 /block /asleep/20 /deep/10000 /deep/30000; do echo "{\"app\":\"pure\",\"build\":\"$2\",\"path\":\"$p\",\"response\":$(curl -s localhost:$3$p | node -e 'process.stdout.write(JSON.stringify(require("fs").readFileSync(0,"utf8")))')}"; done
  else
    for p in /js/health /health /js/json /json; do echo "{\"app\":\"hono\",\"build\":\"$2\",\"bench\":$(curl -s "localhost:$3/__bench?n=2000&path=$p")}"; done
  fi
  echo "{\"app\":\"$1\",\"build\":\"$2\",\"startup\":$startup}"
  kill -- -$pid 2>/dev/null; kill $pid 2>/dev/null; sleep 2
}
for b in pure-jspi pure-sync pure-asyncify; do run pure $b 8811; done
for b in hono-jspi hono-sync hono-asyncify; do run hono $b 8812; done
