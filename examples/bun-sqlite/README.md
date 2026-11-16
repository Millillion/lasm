# A todo API on bun:sqlite

A Lean HTTP API that keeps its data in SQLite through `bun:sqlite`, served with
`Bun.serve`, written only against the generated bindings: `Lasm.JS.Bun` (generated from
Bun's own TypeScript declarations) and `Lasm.JS.Web`.

```sh
npx lasm build Main.lean --target bun
bun bun/main.mjs                                  # PORT=3000 by default
curl -X POST localhost:3000/todos -d 'buy milk'   # {"id":1,"title":"buy milk"}
curl localhost:3000/todos                         # [{"id":1,"title":"buy milk"}]
curl -X DELETE localhost:3000/todos/1
```

`DB_PATH` names the database file (`:memory:` when unset). It uses `Bun.serve` with
`Bun.ServeOptionsFetch.ofFn`, `Bun.Database.new`, `Database.run`, `Database.query` and
`Statement.all`/`run` with bound parameters, and `Bun.env`.

CI builds it with the release candidate and checks the API over HTTP
([test/run.mjs](test/run.mjs), `web-bindings.yml`). The mapping from Bun's declarations
to Lean is in [docs/JS_BINDINGS.md](../../docs/JS_BINDINGS.md#standard-bindings-for-bun-lasmjsbun).
