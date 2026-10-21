/-
Lists the C symbols of every `initialize`/`builtin_initialize` declaration with a
value in Lean's own libraries (Init, Std, Lean, Lake, LeanExport). Lasm's runtime
initialization plan (src/application-initialization.mjs) treats these globals as
possibly mutable state. Run with the matching native Lean:
  lean --run InitTargets.lean > src/lean-init-targets-<version>.json
-/
import Lean
open Lean

def main : IO Unit := do
  -- `lean --run`: the running Lean binary is in the toolchain's bin directory.
  initSearchPath ((← IO.appDir) / "..")
  let imports : Array Import := #[`Init, `Std, `Lean, `Lake, `LeanExport].map fun module => { module }
  let env ← importModules imports {} (loadExts := false)
  let mut names : Array String := #[]
  for (name, _) in env.constants.map₁.toList do
    let some modIdx := env.getModuleIdxFor? name | continue
    let some _ := getInitFnNameFor? env name | continue
    if isIOUnitInitFn env name then continue
    let module := env.header.moduleNames[modIdx.toNat]!
    let symbol := (getExportNameFor? env name).map (·.toString) |>.getD (name.mangle "l_")
    names := names.push s!"{symbol}\t{module}"
  names := names.qsort (· < ·)
  IO.println "{"
  IO.println s!"  \"lean\": \"{Lean.versionString}\","
  IO.println s!"  \"githash\": \"{Lean.githash}\","
  IO.println "  \"initTargets\": ["
  for h : i in [0:names.size] do
    let parts := names[i].splitOn "\t"
    IO.println s!"    [\"{parts[0]!}\", \"{parts[1]!}\"]{if i + 1 < names.size then "," else ""}"
  IO.println "  ]"
  IO.println "}"
