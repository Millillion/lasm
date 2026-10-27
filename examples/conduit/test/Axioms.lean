/-
Every theorem in `Conduit.Proofs` uses only Lean's standard axioms
(`propext`, `Classical.choice`, `Quot.sound`); a `sorry` would show up as the
axiom `sorryAx` and fail this check. Run by `npm run proofs`.
-/
import Lean
import Proofs
open Lean Elab Command

elab "#check_conduit_axioms" : command => do
  let env ← getEnv
  let allowed := [``propext, ``Classical.choice, ``Quot.sound]
  let mut checked : Array Name := #[]
  for (name, info) in env.constants.toList do
    if (`Conduit.Proofs).isPrefixOf name && !name.isInternal && !name.components.contains `mk && !(name.components.any (·.toString.startsWith "eq_")) && info matches .thmInfo _ then
      let axioms ← liftCoreM (collectAxioms name)
      for a in axioms do
        unless allowed.contains a do throwError "{name} depends on {a}"
      checked := checked.push name
  let names := checked.qsort (·.toString < ·.toString) |>.toList.map fun n => (n.toString.drop 15).toString
  let list := String.intercalate ", " names
  logInfo m!"{checked.size} theorems use only propext, Classical.choice and Quot.sound: {list}"

#check_conduit_axioms
