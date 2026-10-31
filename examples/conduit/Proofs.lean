/-
Every theorem about Conduit. `Proofs/Spec.lean` lists the propositions
(PROOFS.md and SPEC.md explain them); the other files prove them. `lake build`
checks the proofs; `npm run proofs` also checks that each proposition has
its theorem and that none uses `sorry` or an axiom beyond Lean's standard three.
-/
import Proofs.Spec
import Proofs.Json
import Proofs.Validation
import Proofs.Slug
import Proofs.Paging
import Proofs.Favorites
import Proofs.ReadOnly
import Proofs.Effects
import Proofs.Endpoints
import Proofs.Integrity
import Proofs.Markdown
import Proofs.Client
import Proofs.Route
import Proofs.View
