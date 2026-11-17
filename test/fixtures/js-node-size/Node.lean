/- The same program through Lasm.JS.Node (the modules it uses), for scripts/bindings/test-web.mjs --fixture js-node --sizes. -/
import Lasm.JS.Node.Path
import Lasm.JS.Node.Crypto
open Lasm.JS.Node

def main : IO Unit := do
  IO.println (← path.join #["a", "b"])
  let hash ← crypto.createHash "sha256"
  hash.update (.domString "abc")
  match ← hash.digest (some "hex") with
  | .domString s => IO.println s
  | .uint8Array _ => IO.println "bytes"
