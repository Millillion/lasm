/-
The site as the program's default export (`export default` in JavaScript): Bun,
Vercel Edge and Netlify Edge call it for every request (their
`build:<target>` scripts build this file). The todos live in the isolate's
memory. Cloudflare Workers (Workers.lean) and Deno (Deno.lean) keep them in
their own stores.
-/
import JsSite
open Lasm.JS

def main : IO Unit := do
  exportDefault (JsSite.handle (← Site.Kv.memory))
