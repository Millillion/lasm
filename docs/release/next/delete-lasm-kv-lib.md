## Lasm.KV removed

- **`Lasm.KV` is deleted** (API_DECISIONS 0.5-18). Use the platform's own store through its
  generated binding: Workers KV as a `KVNamespace` field of the Worker's typed `Env`
  (`Lasm.JS.Cloudflare.Kv`, `env.TODOS.get key`, `env.TODOS.put key (.domString value)`),
  Deno KV through `Lasm.JS.Deno.Kv` (`openKv`, `kv.get #[.domString name, .domString key]`,
  `kv.set …`), Fastly's KV Store through `Lasm.Fastly.KvStore`. Migration: replace
  `Lasm.KV.open name` with the store of the platform the program is built for; where a
  platform has none, keep a `Std.HashMap` in an `IO.Ref`. A missing binding now fails
  loudly instead of falling back to memory.
