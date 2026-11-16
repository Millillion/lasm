/-
Lean's own reading of a source file's header, as an oracle for the
project-files fuzz target: one JSON request per line on stdin, one JSON
answer per line on stdout. Run by test/fuzz/support/lean-header-model.mjs
(`lean --run`).

  {"text": "…"}
  → {"ok": [[components, all, exported, meta], …]}  or  {"error": true}

`components` is the imported module's name, component by component (`«A B»`
is the one component "A B"); `all`, `exported` and `meta` are the import's
flags. An answer is an error when Lean's header parser reports any error
message for the text (`Lean.Elab.parseImports`).
-/
import Lean.Elab.Import

open Lean

def importJson (i : Import) : Json :=
  Json.arr #[toJson (i.module.components.map fun c => c.toString (escape := false)), toJson i.importAll, toJson i.isExported, toJson i.isMeta]

def answer (line : String) : IO Json := do
  let request ← IO.ofExcept (Json.parse line)
  let text ← IO.ofExcept (request.getObjValAs? String "text")
  let (imports, _, log) ← Elab.parseImports text
  if log.hasErrors then return Json.mkObj [("error", true)]
  return Json.mkObj [("ok", Json.arr (imports.map importJson))]

def main : IO Unit := do
  let stdin ← IO.getStdin
  let stdout ← IO.getStdout
  repeat
    let line ← stdin.getLine
    if line.isEmpty then break
    let out ← try answer line catch e => pure (Json.mkObj [("fault", toJson e.toString)])
    stdout.putStrLn out.compress
    stdout.flush
