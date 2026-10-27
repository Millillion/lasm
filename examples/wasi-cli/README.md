# wasi-cli: a Lean command-line program as a WASI module

A standard `wasi_snapshot_preview1` module with no JavaScript. Its modes cover
arguments, the environment, files in a preopened directory, clocks, randomness,
sleeps, `Std.Async`, tasks, `Std.Time`, standard input, exit codes, errors and deep
recursion.

```sh
cd examples/wasi-cli
npx @lasm/cli build Main.lean --target wasi       # wasi/main.wasm
wasmtime run --dir . wasi/main.wasm check
printf '1\n2\n3\n' | wasmtime run wasi/main.wasm sum   # sum: 6
```

wasmer (`wasmer run --volume=.:/ wasi/main.wasm -- check`) and Node's `node:wasi`
([scripts/wasi/node-wasi-run.mjs](../../scripts/wasi/node-wasi-run.mjs)) run it too.
CI compares every mode's output with native Lean's on each engine
([wasi.yml](../../.github/workflows/wasi.yml)). Guide: [docs/WASI.md](../../docs/WASI.md).
