/-
The proof check behind `npm run proofs`:

- every proposition of `Proofs/Spec.lean` (each `Conduit.Spec.x : Prop`) has
  a theorem `Conduit.Proofs.x` whose type is exactly `Conduit.Spec.x`;
- every theorem in `Conduit.Proofs` uses only Lean's standard axioms
  (`propext`, `Classical.choice`, `Quot.sound`): a `sorry` would show up as
  the axiom `sorryAx` and fail this check.

It writes what it checked (each proposition, its doc comment, its theorem's
axioms, and the counts) as JSON to the file named by `CONDUIT_PROOFS_JSON`,
which `test/proofs.mjs` uses to keep PROOFS.md and SPEC.md in sync.
-/
import Lean
import Proofs
open Lean Elab Command

elab "#check_conduit_proofs" : command => do
  let env ← getEnv
  let allowed := [``propext, ``Classical.choice, ``Quot.sound]
  let mut theorems : Array Name := #[]
  let mut props : Array Json := #[]
  -- Every theorem written in Proofs/ (not the lemmas Lean generates).
  for (name, info) in env.constants.toList do
    if (`Conduit.Proofs).isPrefixOf name && info matches .thmInfo _ then
      if (← findDeclarationRanges? name).isSome then
        let axioms ← liftCoreM (collectAxioms name)
        for a in axioms do
          unless allowed.contains a do throwError "{name} depends on {a}"
        theorems := theorems.push name
  -- Every proposition of the specification, and its theorem.
  for (name, info) in env.constants.toList do
    if (`Conduit.Spec).isPrefixOf name && !name.isInternal then
      if let .defnInfo d := info then
        if d.type == .sort .zero && (← findDeclarationRanges? name).isSome then
          let short := name.componentsRev.head!
          let thm := `Conduit.Proofs ++ short
          let some tinfo := env.find? thm | throwError "proposition {name} has no theorem {thm}"
          unless tinfo matches .thmInfo _ do throwError "{thm} is not a theorem"
          unless tinfo.type == .const name [] do throwError "{thm} does not have type {name}"
          let axioms ← liftCoreM (collectAxioms thm)
          let doc := (← findDocString? env name).getD ""
          if doc.isEmpty then throwError "proposition {name} has no doc comment"
          let line := ((← findDeclarationRanges? name).map (·.range.pos.line)).getD 0
          props := props.push (Json.mkObj [("name", toString short), ("doc", doc.trimAscii.toString), ("line", line),
            ("theorem", toString thm), ("axioms", Json.arr (axioms.map (Json.str ∘ toString)))])
  let json := Json.mkObj [("propositions", Json.arr props), ("theorems", theorems.size),
    ("theoremNames", Json.arr ((theorems.qsort (·.toString < ·.toString)).map (Json.str ∘ toString)))]
  if let some path ← (IO.getEnv "CONDUIT_PROOFS_JSON" : IO _) then
    IO.FS.writeFile path json.pretty
  logInfo m!"{props.size} propositions, each proved by its theorem; {theorems.size} theorems in Proofs/, all using only propext, Classical.choice and Quot.sound."

#check_conduit_proofs
