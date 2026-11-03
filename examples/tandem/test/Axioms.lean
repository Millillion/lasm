/-
The proof check behind `npm run proofs`:

- every proposition of `Proofs/Spec.lean` (each `Tandem.Spec.x : Prop`) has
  a theorem `Tandem.Proofs.x` whose type is exactly `Tandem.Spec.x`;
- every theorem in `Tandem.Proofs` uses only Lean's standard axioms
  (`propext`, `Classical.choice`, `Quot.sound`): a `sorry` would show up as
  the axiom `sorryAx` and fail this check;
- the code that handles untrusted input is total: no definition reachable
  from the document's operations (`Doc.apply`, `Doc.applyAll`), its text
  (`Doc.text`), the local edits (`Doc.edit`, `Doc.insertNode`,
  `Doc.deleteAt`), the wire format's parsers and printers and the sync
  server's logic (`Sync.sync`, `Sync.accept`) is `partial` or `unsafe` (a
  `partial def` is an opaque constant, so every opaque one fails the check),
  and none of them calls `panic` (as `xs[i]!`, `get!` or `unreachable!`
  would). Every recursion is structural or well-founded, so every message,
  however malformed, is answered in finitely many steps.

It writes what it checked (each proposition, its doc comment, its theorem's
axioms, the counts, and the totality check) as JSON to the file named by
`TANDEM_PROOFS_JSON`, which `test/proofs.mjs` uses to keep PROOFS.md and
SPEC.md in sync.
-/
import Lean
import Proofs
import Tandem
import Tandem.Client
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

elab "#check_tandem_proofs" : command => do
  let env ← getEnv
  let allowed := [``propext, ``Classical.choice, ``Quot.sound]
  let mut theorems : Array Name := #[]
  let mut props : Array Json := #[]
  -- Every theorem written in Proofs/ (not the lemmas Lean generates).
  for (name, info) in env.constants.toList do
    if (`Tandem.Proofs).isPrefixOf name && info matches .thmInfo _ then
      if (← findDeclarationRanges? name).isSome then
        let axioms ← liftCoreM (collectAxioms name)
        for a in axioms do
          unless allowed.contains a do throwError "{name} depends on {a}"
        theorems := theorems.push name
  -- Every proposition of the specification, and its theorem.
  for (name, info) in env.constants.toList do
    if (`Tandem.Spec).isPrefixOf name && !name.isInternal then
      if let .defnInfo d := info then
        if d.type == .sort .zero && (← findDeclarationRanges? name).isSome then
          let short := name.componentsRev.head!
          let thm := `Tandem.Proofs ++ short
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
  let reach := reachable env [``Tandem.Doc.apply, ``Tandem.Doc.applyAll, ``Tandem.Doc.text, ``Tandem.Doc.chars,
    ``Tandem.Doc.edit, ``Tandem.Doc.insertNode, ``Tandem.Doc.deleteAt, ``Tandem.Wire.decodeRequest,
    ``Tandem.Wire.decodeReply, ``Tandem.Wire.encodeRequest, ``Tandem.Wire.encodeReply, ``Tandem.Sync.sync,
    ``Tandem.Sync.accept, ``Tandem.Doc.applyMany, ``Tandem.Replica.edit, ``Tandem.Replica.request,
    ``Tandem.Replica.onReply, ``Tandem.Replica.onPush]
  let mut provider : Array Name := #[]
  let mut opaques : Array Name := #[]
  for n in reach.toList do
    if panics.contains n then throwError "the input handlers can reach {n}"
    match env.find? n with
    | some (.opaqueInfo d) =>
      if d.isUnsafe then throwError "the input handlers reach the unsafe {n}"
      -- A `partial def` is an opaque constant implemented by an unsafe `_unsafe_rec`.
      if env.contains (Name.str n "_unsafe_rec") then throwError "the input handlers reach the partial {n}"
      if (`Tandem).isPrefixOf n then throwError "{n} is opaque"
      -- Lean's own primitives (`@[extern]`, such as hashing and the word size) remain.
      opaques := opaques.push n
    | some (.defnInfo d) =>
      if d.safety != .safe then throwError "the input handlers reach the {repr d.safety} definition {n}"
      if (`Tandem).isPrefixOf n then provider := provider.push n
    | some (.axiomInfo _) => throwError "the input handlers reach the axiom {n}"
    | _ => pure ()
  let json := Json.mkObj [("propositions", Json.arr props), ("theorems", theorems.size),
    ("theoremNames", Json.arr ((theorems.qsort (·.toString < ·.toString)).map (Json.str ∘ toString))),
    ("totality", Json.mkObj [("reachable", reach.size), ("tandemDefinitions", provider.size),
      ("primitives", Json.arr ((opaques.qsort (·.toString < ·.toString)).map (Json.str ∘ toString)))])]
  if let some path ← (IO.getEnv "TANDEM_PROOFS_JSON" : IO _) then
    IO.FS.writeFile path json.pretty
  logInfo m!"{props.size} propositions, each proved by its theorem; {theorems.size} theorems in Proofs/, all using only propext, Classical.choice and Quot.sound. Totality: the input handlers reach {reach.size} definitions ({provider.size} of Tandem's), none partial or unsafe, none a panic; the only opaque ones are Lean's primitives {opaques.toList}."

#check_tandem_proofs
