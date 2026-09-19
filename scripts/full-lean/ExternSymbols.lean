import Lean
import Std
import Lake

open Lean Elab Command

/- Use Lean's own names and export rules for the interpreter's native lookups. -/
run_cmd do
  let env ← getEnv
  let mut rows : Array Json := #[]
  for (name, _) in env.constants do
    let some _ := getExternAttrData? env name | continue
    let stem := getSymbolStem env name
    rows := rows.push <| Json.mkObj [
      ("name", toJson name.toString),
      ("stem", toJson stem),
      ("boxed", toJson (mkMangledBoxedName stem))]
  IO.println (Json.arr rows).compress
