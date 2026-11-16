# A todo API on Deno KV

A Lean HTTP API that keeps its data in Deno KV, written only against the generated
bindings: `Lasm.JS.Deno` (generated from Deno's own TypeScript declarations) and
`Lasm.JS.Web`. It runs on the Deno CLI and on Deno Deploy (whose KV it uses).

```sh
npx lasm build Main.lean --target deno           # or --target deno-deploy
deno run -A --unstable-kv deno/main.mjs           # PORT=8000 by default
curl -X POST localhost:8000/todos -d 'buy milk'   # {"id":1,"title":"buy milk"}
curl localhost:8000/todos                         # [{"id":1,"title":"buy milk"}]
curl -X DELETE localhost:8000/todos/1
```

The Deno CLI needs `--unstable-kv` for Deno KV (Deno's own flag); Deno Deploy provides
KV without it. `KV_PATH` names a local database file; unset, Deno uses its default (the
platform's store on Deno Deploy).

What it uses:

- `Deno.serveWithOptions` and `Deno.ServeHandler.ofFn` to serve a Lean handler;
- `Deno.openKv`, `Kv.get`, `Kv.set`, `Kv.delete`, `Kv.list` (an async iterable, read with
  `values`), and `Kv.atomic` with `check` and `commit` for an id counter that concurrent
  requests never share.

CI builds it with the release candidate and checks the API over HTTP
([test/run.mjs](test/run.mjs), `web-bindings.yml`). The mapping from Deno's declarations
to Lean is in [docs/JS_BINDINGS.md](../../docs/JS_BINDINGS.md#standard-bindings-for-deno-lasmjsdeno).
