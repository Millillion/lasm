/-
The proof check behind `npm run proofs`:

- every proposition of `Proofs/Spec.lean` (each `Porter.Spec.x : Prop`) has
  a theorem `Porter.Proofs.x` whose type is exactly `Porter.Spec.x`;
- every theorem in `Porter.Proofs` uses only Lean's standard axioms
  (`propext`, `Classical.choice`, `Quot.sound`): a `sorry` would show up as
  the axiom `sorryAx` and fail this check;
- the request handlers are total: no definition the provider's code reaches
  from `Porter.handle` and `Porter.Reply.render` is `partial` or `unsafe`
  (a `partial def` is an opaque constant, so every opaque one fails the
  check), and none of them calls `panic` (as `xs[i]!`, `get!` or `unreachable!`
  would). Every recursion in the provider is structural or well-founded, so
  every request's reply is computed in finitely many steps.

It writes what it checked (each proposition, its doc comment, its theorem's
axioms, the counts, and the totality check) as JSON to the file named by
`PORTER_PROOFS_JSON`, which `test/proofs.mjs` uses to keep PROOFS.md and
SPEC.md in sync.
-/
import Lean
import Proofs
import Porter.Render
open Lean Elab Command

/-- Every constant the definition of `root` refers to, transitively (through
definitions' bodies, not through proofs). -/
partial def reachable (env : Environment) (roots : List Name) : NameSet := Id.run do
  let mut seen : NameSet := {}
  let mut todo := roots
  while !todo.isEmpty do
    match todo with
    | [] => break
    | n :: rest =>
      todo := rest
      if seen.contains n then continue
      seen := seen.insert n
      match env.find? n with
      | some (.defnInfo d) => todo := d.value.getUsedConstants.toList ++ d.type.getUsedConstants.toList ++ todo
      | some (.opaqueInfo d) => todo := d.type.getUsedConstants.toList ++ todo
      | some (.ctorInfo c) => todo := c.type.getUsedConstants.toList ++ todo
      | some (.inductInfo i) => todo := i.type.getUsedConstants.toList ++ todo
      | _ => pure ()
  return seen

/-- The panics. -/
def panics : List Name := [``panic, ``panicCore, ``panicWithPos, ``panicWithPosWithDecl, ``outOfBounds]

elab "#check_porter_proofs" : command => do
  let env ← getEnv
  let allowed := [``propext, ``Classical.choice, ``Quot.sound]
  let mut theorems : Array Name := #[]
  let mut props : Array Json := #[]
  -- Every theorem written in Proofs/ (not the lemmas Lean generates).
  for (name, info) in env.constants.toList do
    if (`Porter.Proofs).isPrefixOf name && info matches .thmInfo _ then
      if (← findDeclarationRanges? name).isSome then
        let axioms ← liftCoreM (collectAxioms name)
        for a in axioms do
          unless allowed.contains a do throwError "{name} depends on {a}"
        theorems := theorems.push name
  -- Every proposition of the specification, and its theorem.
  for (name, info) in env.constants.toList do
    if (`Porter.Spec).isPrefixOf name && !name.isInternal then
      if let .defnInfo d := info then
        if d.type == .sort .zero && (← findDeclarationRanges? name).isSome then
          let short := name.componentsRev.head!
          let thm := `Porter.Proofs ++ short
          let some tinfo := env.find? thm | throwError "proposition {name} has no theorem {thm}"
          unless tinfo matches .thmInfo _ do throwError "{thm} is not a theorem"
          unless tinfo.type == .const name [] do throwError "{thm} does not have type {name}"
          let axioms ← liftCoreM (collectAxioms thm)
          let doc := (← findDocString? env name).getD ""
          if doc.isEmpty then throwError "proposition {name} has no doc comment"
          let line := ((← findDeclarationRanges? name).map (·.range.pos.line)).getD 0
          props := props.push (Json.mkObj [("name", toString short), ("doc", doc.trimAscii.toString), ("line", line),
            ("theorem", toString thm), ("axioms", Json.arr (axioms.map (Json.str ∘ toString)))])
  -- Totality: what the handlers reach.
  let reach := reachable env [``Porter.handle, ``Porter.Reply.render]
  let mut provider : Array Name := #[]
  for n in reach.toList do
    if panics.contains n then throwError "the request handlers can reach {n}"
    match env.find? n with
    | some (.opaqueInfo d) =>
      if d.isUnsafe then throwError "the request handlers reach the unsafe {n}"
      -- A `partial def` is an opaque constant whose implementation is unsafe.
      if (`Porter).isPrefixOf n then throwError "{n} is partial (opaque)"
      throwError "the request handlers reach the opaque {n} (a partial or opaque definition)"
    | some (.defnInfo d) =>
      if d.safety != .safe then throwError "the request handlers reach the {repr d.safety} definition {n}"
      if (`Porter).isPrefixOf n then provider := provider.push n
    | some (.axiomInfo _) => throwError "the request handlers reach the axiom {n}"
    | _ => pure ()
  let json := Json.mkObj [("propositions", Json.arr props), ("theorems", theorems.size),
    ("theoremNames", Json.arr ((theorems.qsort (·.toString < ·.toString)).map (Json.str ∘ toString))),
    ("totality", Json.mkObj [("reachable", reach.size), ("providerDefinitions", provider.size)])]
  if let some path ← (IO.getEnv "PORTER_PROOFS_JSON" : IO _) then
    IO.FS.writeFile path json.pretty
  logInfo m!"{props.size} propositions, each proved by its theorem; {theorems.size} theorems in Proofs/, all using only propext, Classical.choice and Quot.sound. Totality: the handlers reach {reach.size} definitions ({provider.size} of Porter's), none partial, unsafe or opaque, none a panic."

#check_porter_proofs
