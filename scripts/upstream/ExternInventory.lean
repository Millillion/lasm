import Lean
import Std

open Lean Elab Command

/- Exact declaration-to-symbol mapping from the pinned elaborated environment. -/
run_cmd do
  let env ← getEnv
  let mut rows : Array Json := #[]
  for (name, _) in env.constants do
    let some data := getExternAttrData? env name | continue
    for entry in data.entries do
      if let .standard backend symbol := entry then
        rows := rows.push <| Json.mkObj [
          ("name", toJson name.toString), ("backend", toJson backend.toString),
          ("symbol", toJson symbol)]
  IO.println (Json.arr rows).compress
