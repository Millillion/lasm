## Migration (Lasm.JS.Deno and Lasm.JS.Bun)

- **No umbrella modules:** `import Lasm.JS.Deno` and `import Lasm.JS.Bun` are gone
  (docs/api/decisions/0.4.md, 0.4-21). Import the modules whose members you call:
  `import Lasm.JS.Deno.Serve` for `Deno.serve`, `import Lasm.JS.Deno.Kv` for Deno KV,
  `import Lasm.JS.Bun.Serve` for `Bun.serve`, `import Lasm.JS.Bun.Sqlite` for
  `bun:sqlite`. Each module compiles on the first build that imports it, so a program
  compiles only what it uses.
