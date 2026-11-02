/-
The proof check behind `npm run proofs`:

- every proposition of `Proofs/Spec.lean` (each `Folio.Spec.x : Prop`) has
  a theorem `Folio.Proofs.x` whose type is exactly `Folio.Spec.x`;
- every theorem in `Folio.Proofs` uses only Lean's standard axioms
  (`propext`, `Classical.choice`, `Quot.sound`): a `sorry` would show up as
  the axiom `sorryAx`, a `native_decide` as `Lean.ofReduceBool`;
- every definition of Folio that `Folio.render` and `Folio.Site.build` use
  is total: none is `partial`, `unsafe` or opaque, so Lean has checked that
  each terminates on every input.

It writes what it checked (each proposition, its doc comment, its theorem's
axioms, and the counts) as JSON to the file named by `FOLIO_PROOFS_JSON`,
which `test/proofs.mjs` uses to keep PROOFS.md and SPEC.md in sync.
-/
import Lean
import Proofs
open Lean Elab Command

/-- The definitions of Folio (names under `Folio`) that `roots` use, directly
or through each other. -/
def folioClosure (env : Environment) (roots : List Name) : Array Name := Id.run do
  let mut seen : NameSet := {}
  let mut todo := roots
  let mut out := #[]
  for _ in [0:100000] do
    match todo with
    | [] => break
    | n :: rest =>
      todo := rest
      if seen.contains n then continue
      seen := seen.insert n
      let some info := env.find? n | continue
      out := out.push n
      for m in info.getUsedConstantsAsSet do
        if (`Folio).isPrefixOf m && !seen.contains m then todo := m :: todo
  return out

elab "#check_folio_proofs" : command => do
  let env ← getEnv
  let allowed := [``propext, ``Classical.choice, ``Quot.sound]
  let mut theorems : Array Name := #[]
  let mut props : Array Json := #[]
  -- Every theorem written in Proofs/ (not the lemmas Lean generates).
  for (name, info) in env.constants.toList do
    if (`Folio.Proofs).isPrefixOf name && info matches .thmInfo _ then
      if (← findDeclarationRanges? name).isSome then
        let axioms ← liftCoreM (collectAxioms name)
        for a in axioms do
          unless allowed.contains a do throwError "{name} depends on {a}"
        theorems := theorems.push name
  -- Every proposition of the specification, and its theorem.
  for (name, info) in env.constants.toList do
    if (`Folio.Spec).isPrefixOf name && !name.isInternal then
      if let .defnInfo d := info then
        if d.type == .sort .zero && (← findDeclarationRanges? name).isSome then
          let short := name.componentsRev.head!
          let thm := `Folio.Proofs ++ short
          let some tinfo := env.find? thm | throwError "proposition {name} has no theorem {thm}"
          unless tinfo matches .thmInfo _ do throwError "{thm} is not a theorem"
          unless tinfo.type == .const name [] do throwError "{thm} does not have type {name}"
          let axioms ← liftCoreM (collectAxioms thm)
          let doc := (← findDocString? env name).getD ""
          if doc.isEmpty then throwError "proposition {name} has no doc comment"
          let line := ((← findDeclarationRanges? name).map (·.range.pos.line)).getD 0
          props := props.push (Json.mkObj [("name", toString short), ("doc", doc.trimAscii.toString), ("line", line),
            ("theorem", toString thm), ("axioms", Json.arr (axioms.map (Json.str ∘ toString)))])
  -- Totality: no partial, unsafe or opaque definition behind the program.
  let closure := folioClosure env [``Folio.render, ``Folio.Site.build]
  for n in closure do
    match env.find? n with
    | some (.defnInfo d) =>
      unless d.safety == .safe do throwError "{n} is not total ({repr d.safety})"
    | some (.opaqueInfo _) => throwError "{n} is opaque (partial or implemented_by)"
    | some info => if info.isUnsafe then throwError "{n} is unsafe"
    | none => pure ()
  let json := Json.mkObj [("propositions", Json.arr props), ("theorems", theorems.size),
    ("totalDefinitions", closure.size),
    ("theoremNames", Json.arr ((theorems.qsort (·.toString < ·.toString)).map (Json.str ∘ toString)))]
  if let some path ← (IO.getEnv "FOLIO_PROOFS_JSON" : IO _) then
    IO.FS.writeFile path json.pretty
  logInfo m!"{props.size} propositions, each proved by its theorem; {theorems.size} theorems in Proofs/, all using only propext, Classical.choice and Quot.sound; {closure.size} definitions behind render and Site.build, none partial, unsafe or opaque."

#check_folio_proofs
