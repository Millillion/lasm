/- Supplementary standard import/evaluation coverage; no Lasm APIs. -/
import Lean

open Lean

unsafe def main : IO Unit := do
  enableInitializersExecution
  initSearchPath (← findSysroot)
  -- Evaluation needs the imported IR and environment extensions. The lighter
  -- withImportModules API deliberately omits extensions and frees its regions.
  let env ← importModules #[{ module := `Init, isMeta := true : Import }] {} (loadExts := true)
  unless env.contains `Nat && env.contains `List.map && env.contains `String do
    throw (IO.userError "standard module data lost declarations")
  let nextPowerOfTwo ← IO.ofExcept <| env.evalConst (Nat → Nat) {} `Nat.nextPowerOfTwo
  for (input, expected) in [(0, 1), (1, 1), (2, 2), (3, 4), (31, 32), (65, 128), (1025, 2048)] do
    unless nextPowerOfTwo input == expected do
      throw (IO.userError "imported declaration evaluated incorrectly")
  IO.println "standard module data imported; seven runtime evaluations passed"
