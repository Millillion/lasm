/-
The site as the program's default export (`export default` in JavaScript):
Cloudflare Workers, Vercel and Netlify Edge, Deno Deploy, Bun and Deno call it
for every request (their `build:<target>` scripts build this file). The todos
are kept in `Lasm.KV`: Deno KV on Deno and Deno Deploy, else the isolate's
memory.
-/
import JsSite
open Lasm.JS

def main : IO Unit := do
  -- KV seam (milestone 0.5): the store opened here moves to the platform's own
  -- binding (Cloudflare KV from the Worker's `env`, Deno KV), and Lasm.KV goes.
  let kv ← Lasm.KV.open "TODOS"
  exportDefault (JsSite.handle kv)
