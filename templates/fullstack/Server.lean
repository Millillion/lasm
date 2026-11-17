/-
The server on Node (`npm start`, `npm run dev`): `Node.serve` (Lasm.JS.Node.Serve)
serves the site (JsSite.lean, Site.lean) on $PORT (default 3000), on every
IPv4 address, and stops cleanly on SIGTERM or SIGINT. The todos live in the
process's memory.
-/
import Lasm.JS.Node.Serve
import JsSite
open Lasm.JS

def main : IO Unit := do
  let kv ← Site.Kv.memory
  Node.serve { fetch := JsSite.handle kv }
