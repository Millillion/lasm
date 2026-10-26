Engine feature probe (Phase 7.1): `node gen.mjs` writes tiny Wasm modules to
`src/`; `node src/local.mjs` (or `bun`, `deno run -A`) prints which features
compile and whether a real JSPI suspension works; under `wrangler dev`
(`CI=1`), `src/worker.mjs` answers the same JSON and `src/g.mjs` (set it as
`main`) shows what the Workers global scope allows. Results: docs/EDGE.md.
