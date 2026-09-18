import Lean
import Std.Http

open Lean Elab Command

run_cmd do
  let env ← getEnv
  let mut rows : Array Json := #[]
  for (name, info) in env.constants do
    if (`IO.FS).isPrefixOf name || (`Std.Http).isPrefixOf name then
      if info.isTheorem || name.isInternal then continue
      let kind := match info with
        | .defnInfo _ => "definition"
        | .opaqueInfo _ => "opaque"
        | .axiomInfo _ => "axiom"
        | .ctorInfo _ => "constructor"
        | .inductInfo _ => "type"
        | .recInfo _ => "recursor"
        | .quotInfo _ => "quotient"
        | .thmInfo _ => "theorem"
      let symbols := (getExternAttrData? env name).map (fun data => data.entries.filterMap fun entry =>
        match entry with
        | .standard _ symbol => some (Json.str symbol)
        | _ => none) |>.getD []
      rows := rows.push <| Json.mkObj [
        ("name", toJson name.toString), ("kind", toJson kind),
        ("externs", Json.arr symbols.toArray)]
  IO.println (Json.arr rows).compress
