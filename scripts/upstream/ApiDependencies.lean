import Lean
import Std.Http

open Lean Elab Command

-- Supplementary compiled dependency inventory. Dynamic callbacks, runtime
-- internals, and behavioral coverage remain separate from this graph.
run_cmd do
  let env ← getEnv
  let mut roots : Array Name := #[]
  for (name, info) in env.constants do
    if ((`IO.FS).isPrefixOf name || (`Std.Http).isPrefixOf name) &&
        !info.isTheorem && !name.isInternal then
      roots := roots.push name
  roots := roots.qsort Name.lt
  let mut pending := roots
  let mut seen : NameSet := {}
  let mut rows : Array (Name × Json) := #[]
  while !pending.isEmpty do
    let name := pending.back!
    pending := pending.pop
    if seen.contains name then continue
    seen := seen.insert name
    let info := env.find? name
    let ir := IR.findEnvDecl env name
    let attrs := match ir with
      | some (.extern _ _ _ ext) => some ext
      | _ => getExternAttrData? env name
    let symbols := attrs.map (fun data => data.entries.filterMap fun entry =>
      match entry with
      | .standard backend symbol => some <| Json.mkObj [
          ("backend", toJson backend.toString), ("symbol", toJson symbol)]
      | _ => none) |>.getD []
    let implementation := Compiler.getImplementedBy? env name
    let mut dependencies : Array Name := #[]
    let mut resolution := "no-compiled-body"
    if let some actual := implementation then
      dependencies := #[actual]
      resolution := "implemented-by"
    else if attrs.isSome then
      resolution := "extern"
    else if let some decl := ir then
      dependencies := (IR.collectUsedDecls env [decl]).filter (· != name)
      resolution := "compiled-body"
    dependencies := dependencies.qsort Name.lt
    pending := pending ++ dependencies
    let kind := info.map fun info => match info with
      | .defnInfo _ => "definition"
      | .opaqueInfo _ => "opaque"
      | .axiomInfo _ => "axiom"
      | .ctorInfo _ => "constructor"
      | .inductInfo _ => "type"
      | .recInfo _ => "recursor"
      | .quotInfo _ => "quotient"
      | .thmInfo _ => "theorem"
    rows := rows.push (name, Json.mkObj [
      ("name", toJson name.toString), ("kind", toJson kind),
      ("resolution", toJson resolution),
      ("hasExternAttribute", toJson attrs.isSome),
      ("standardExterns", Json.arr symbols.toArray),
      ("implementedBy", toJson (implementation.map Name.toString)),
      ("dependencies", toJson (dependencies.map Name.toString))])
  rows := rows.qsort (fun a b => Name.lt a.1 b.1)
  IO.println <| (Json.mkObj [
    ("roots", toJson (roots.map Name.toString)),
    ("nodes", Json.arr (rows.map Prod.snd))]).compress
