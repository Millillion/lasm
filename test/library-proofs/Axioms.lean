/-
The proof check behind `node scripts/library-proofs.mjs`, for Lasm's own
library (library/PROOFS.md):

- every proposition of a library's `Spec.lean` (each `Lasm.L.Spec.x : Prop`,
  for L = UI, RPC, KV, Fetch, JS, Serverless, and Lasm.Cli.Spec.x about the
  models of the CLI's JavaScript in verification/cli) has a theorem `Lasm.L.Theorems.x` whose type
  is exactly `Lasm.L.Spec.x`, and a doc comment;
- every theorem written in Lasm's library and its proofs uses only Lean's
  standard axioms (`propext`, `Classical.choice`, `Quot.sound`): a `sorry`
  would show up as the axiom `sorryAx` and fail this check.

It writes what it checked (each proposition, its module, line, doc comment
and theorem's axioms, and the theorem count) as JSON to the file named by
`LIBRARY_PROOFS_JSON`, from which the script generates library/PROOFS.md.
-/
import Lean
import Lasm.UI.Theorems
import Lasm.RPC.Theorems
import Lasm.KV.Theorems
import Lasm.Fetch.Theorems
import Lasm.JS.Theorems
import Lasm.Serverless.Theorems
import Lasm.Cli.Theorems
import Lasm.Cli.Glue
open Lean Elab Command

elab "#check_library_proofs" : command => do
  let env ← getEnv
  let allowed := [``propext, ``Classical.choice, ``Quot.sound]
  let moduleOf (n : Name) : Name := match env.getModuleIdxFor? n with
    | some i => env.header.moduleNames[i.toNat]!
    | none => .anonymous
  let mut theorems : Array Name := #[]
  let mut props : Array Json := #[]
  -- Every theorem written in Lasm's library modules and its proof modules.
  for (name, info) in env.constants.toList do
    -- (Not the fields of structures of proofs, nor instances: those are not `theorem`s.)
    if (`Lasm).isPrefixOf (moduleOf name) && info matches .thmInfo _ && !(← isProjectionFn name)
        && !(Meta.isInstanceCore env name) then
      if (← findDeclarationRanges? name).isSome then
        let axioms ← liftCoreM (collectAxioms name)
        for a in axioms do
          unless allowed.contains a do throwError "{name} depends on {a}"
        theorems := theorems.push name
  -- Every proposition of the specifications, and its theorem.
  for (name, info) in env.constants.toList do
    if !name.isInternal && name.getPrefix.componentsRev.head? == some `Spec && (`Lasm).isPrefixOf name then
      if let .defnInfo d := info then
        if d.type == .sort .zero && (← findDeclarationRanges? name).isSome then
          let short := name.componentsRev.head!
          let lib := name.getPrefix.getPrefix
          let thm := lib ++ `Theorems ++ short
          let some tinfo := env.find? thm | throwError "proposition {name} has no theorem {thm}"
          unless tinfo matches .thmInfo _ do throwError "{thm} is not a theorem"
          unless tinfo.type == .const name [] do throwError "{thm} does not have type {name}"
          let axioms ← liftCoreM (collectAxioms thm)
          let doc := (← findDocString? env name).getD ""
          if doc.isEmpty then throwError "proposition {name} has no doc comment"
          let line := ((← findDeclarationRanges? name).map (·.range.pos.line)).getD 0
          props := props.push (Json.mkObj [("name", toString short), ("library", toString lib),
            ("module", toString (moduleOf name)), ("doc", doc.trimAscii.toString), ("line", line),
            ("theorem", toString thm), ("axioms", Json.arr (axioms.map (Json.str ∘ toString)))])
  let json := Json.mkObj [("propositions", Json.arr props), ("theorems", theorems.size),
    ("theoremNames", Json.arr ((theorems.qsort (·.toString < ·.toString)).map (Json.str ∘ toString)))]
  if let some path ← (IO.getEnv "LIBRARY_PROOFS_JSON" : IO _) then
    IO.FS.writeFile path json.pretty
  logInfo m!"{props.size} propositions, each proved by its theorem; {theorems.size} theorems in Lasm's library and its proofs, all using only propext, Classical.choice and Quot.sound."

#check_library_proofs
