/- Size and build-time baseline for Lasm.JS.Node (scripts/bindings/test-web.mjs --fixture js-node --sizes): Lasm.JS only. -/
import Lasm.JS
open Lasm.JS

def main : IO Unit := do
  let path ← Lasm.JS.require "node:path"
  IO.println (← path.callMethod "join" #[.string "a", .string "b"] String)
  let hash ← (← Lasm.JS.require "node:crypto").callMethod "createHash" #[.string "sha256"] Value
  discard <| hash.callMethod "update" #[.string "abc"] Value
  IO.println (← hash.callMethod "digest" #[.string "hex"] String)
