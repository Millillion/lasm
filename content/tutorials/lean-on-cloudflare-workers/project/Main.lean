/-
The app on Node: `Node.serve` (Lasm.JS.Node.Serve) serves the handler
(Handler.lean) on $PORT (default 3000), on every IPv4 address, and stops
cleanly on SIGTERM or SIGINT.
-/
import Handler
import Lasm.JS.Node.Serve
open Lasm.JS

def main : IO Unit := Node.serve { fetch := Handler.handle }
