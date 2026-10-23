/-
Lasm build tool: prints the Lasm.JS bindings (`@[js "module" "export"]`)
recorded in the given .olean files, one JSON object per line. Run with the
managed native Lean: `lean --run lasm-js-bindings.lean A.olean B.olean …`.
-/
import Lean
open Lean

unsafe def main (files : List String) : IO Unit := do
  for file in files do
    let (data, region) ← readModuleData file
    for (name, entries) in data.entries do
      if name == `Lasm.JS.Meta.bindingExtension then
        for entry in entries do IO.println (unsafeCast entry : String)
    region.free
