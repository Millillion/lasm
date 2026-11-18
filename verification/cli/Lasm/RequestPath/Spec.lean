/-
# What is proved about the request-path model

Every proposition proved about the request-path model (Model.lean), as a
named `def … : Prop` with a plain-English doc comment and no proof. Each
proposition `Spec.x` is proved by the theorem
`Lasm.RequestPath.Theorems.x : Spec.x` (Theorems.lean), and
`node scripts/library-proofs.mjs` fails unless every proposition here has its
theorem and every theorem uses only Lean's standard axioms.
verification/cli/README.md is generated from this file.

Reading guide. `r.segments` is a request's path, split at `/` (and `\`),
with `.` and `..` resolved as a browser resolves them, then percent-decoded.
-/
import Lasm.RequestPath.Model

namespace Lasm.RequestPath.Spec
open Lasm.RequestPath

/-! ## Request paths -/

/-- **No path segment is `.` or `..`.** Whatever the request's URL
(including escaped forms such as `%2e%2E`), no segment of `r.segments` is
`.` or `..`: a handler that maps segments to files or keys never sees a
parent reference. -/
def segments_no_dot_segments : Prop :=
  ∀ (r : Request), ∀ s ∈ r.segments, s ≠ "." ∧ s ≠ ".."

end Lasm.RequestPath.Spec
