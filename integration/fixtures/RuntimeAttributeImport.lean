import UserAttr.Tst

open Lean

-- Parallel runtime counterpart of the original Main.lean's three #eval checks.
-- The original upstream modules and native shell driver remain unchanged.
unsafe def main : IO Unit := do
  initSearchPath (← findSysroot)
  withImportModules #[{ module := `UserAttr.Tst : Import }] {} fun env => do
    let observed := [blaAttr.hasTag env `f, blaAttr.hasTag env `g, blaAttr.hasTag env `id]
    unless observed == [true, true, false] do
      throw (IO.userError s!"Imported attribute tags differ: {observed}")
    IO.println s!"Imported attribute tags: {observed}"
