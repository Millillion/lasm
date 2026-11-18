## Templates

- **The fullstack template's `Deno.lean` uses the generated Deno KV binding**
  (`Lasm.JS.Deno.Kv`: `openKv`, `Kv.get`, `Kv.set`) instead of calling
  `Deno.openKv` by hand; the database opens on the first request.
