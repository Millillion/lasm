/-
Every theorem about Tandem. `Proofs/Spec.lean` lists the propositions
(PROOFS.md and SPEC.md explain them); `Proofs/Theorems.lean` proves each one
from the lemmas in the other files. `lake build` checks the proofs; `npm run
proofs` also checks that each proposition has its theorem and that none uses
`sorry` or an axiom beyond Lean's standard three.
-/
import Proofs.Order
import Proofs.Canon
import Proofs.Tree
import Proofs.Graft
import Proofs.Fast
import Proofs.Place
import Proofs.Runs
import Proofs.Typing
import Proofs.Edits
import Proofs.Wire
import Proofs.Sync
import Proofs.Spec
import Proofs.Theorems
