import Lean
import Std
import Std.Http
import Lake

open Lean Elab Command

-- The application audit driver prepends imports for every module in the
-- versioned runtime's standard-library manifest. This inventory is declaration
-- coverage, not a behavioral pass or a proof that a linked extern is implemented.
run_cmd do
  let env ← getEnv
  let modules := env.header.moduleNames
  let mut rows : Array (Name × Json) := #[]
  let mut theoremCount := 0
  let mut internalCount := 0
  for (name, info) in env.constants do
    if info.isTheorem then
      theoremCount := theoremCount + 1
      continue
    if name.isInternal then
      internalCount := internalCount + 1
      continue
    let ir := IR.findEnvDecl env name
    let external := match ir with
      | some (.extern _ _ _ data) => some data
      | _ => getExternAttrData? env name
    let entries := external.map (fun data => data.entries.map fun entry => match entry with
      | .standard backend symbol => Json.mkObj [
          ("kind", toJson "standard"), ("backend", toJson backend.toString), ("symbol", toJson symbol)]
      | .inline backend pattern => Json.mkObj [
          ("kind", toJson "inline"), ("backend", toJson backend.toString), ("pattern", toJson pattern)]
      | .adhoc backend => Json.mkObj [("kind", toJson "adhoc"), ("backend", toJson backend.toString)]
      | .opaque => Json.mkObj [("kind", toJson "opaque")]) |>.getD []
    let kind := match info with
      | .defnInfo _ => "definition"
      | .opaqueInfo _ => "opaque"
      | .axiomInfo _ => "axiom"
      | .ctorInfo _ => "constructor"
      | .inductInfo _ => "type"
      | .recInfo _ => "recursor"
      | .quotInfo _ => "quotient"
      | .thmInfo _ => "theorem"
    let origin := env.getModuleIdxFor? name |>.map fun index => modules[index.toNat]!.toString
    rows := rows.push (name, Json.mkObj [
      ("name", toJson name.toString), ("module", toJson origin), ("kind", toJson kind),
      ("hasCompiledIR", toJson ir.isSome), ("externs", toJson entries),
      ("implementedBy", toJson ((Compiler.getImplementedBy? env name).map Name.toString)),
      ("behavioralCoverage", toJson "unverified")])
  rows := rows.qsort (fun a b => Name.lt a.1 b.1)
  IO.println <| (Json.mkObj [
    ("modules", toJson (modules.map Name.toString)),
    ("excludedTheorems", toJson theoremCount), ("excludedInternalNames", toJson internalCount),
    ("declarations", Json.arr (rows.map Prod.snd))]).compress
