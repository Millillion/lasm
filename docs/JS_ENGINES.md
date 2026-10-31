# JavaScript engines

> **Historical (2026-10-16).** Superseded: Bun and Deno are supported again from
> 0.2.0 ([BUN_DENO.md](BUN_DENO.md)), and edge isolates, WASI and browsers are
> targets ([README](../README.md#where-it-runs-and-the-evidence)). This page records the Node-only phase.

Lasm targets Node only. The source launcher runs an ordinary Lean entry point in
Node:

```sh
node lasm-node.js [--rebuild] [--verbose] Main.lean [--] [arguments…]
```

A generated deployment also runs in Node:

```sh
node dist/main.mjs argument1
```

`npm run test:engines` runs the Node application integration cases in
`integration/engines.test.mjs`. See [the full-suite result](FULL_SUITE_RESULTS.md)
and the open [IO limitations](../IO_LIMITATIONS.md).

**Deno and Bun support removed — 2026-10-16:** by the user's decision, Deno and
Bun support was removed from Lasm. Lasm targets Node only.
