/-
# What is proved about Lasm.Fetch

Every proposition proved about Lasm.Fetch, as a named `def … : Prop` with a
plain-English doc comment and no proof. Each proposition `Spec.x` is proved
by the theorem `Lasm.Fetch.Theorems.x : Spec.x` (Theorems.lean), and
`node scripts/library-proofs.mjs` fails unless every proposition here has its
theorem and every theorem uses only Lean's standard axioms. library/PROOFS.md
is generated from this file.

Reading guide. `Request` is what every platform hands a `Lasm.Fetch`
handler; `r.segments` is its path, split at `/` (and `\`), with `.` and `..`
resolved as a browser resolves them, then percent-decoded.
-/
import Lasm.Fetch

namespace Lasm.Fetch.Spec
open Lasm.Fetch

/-! ## Request paths -/

/-- **No path segment is `.` or `..`.** Whatever the request's URL, on every
platform (including escaped forms such as `%2e%2E`), no segment of
`r.segments` is `.` or `..`: a handler that maps segments to files or keys
never sees a parent reference. -/
def segments_no_dot_segments : Prop :=
  ∀ (r : Request), ∀ s ∈ r.segments, s ≠ "." ∧ s ≠ ".."

end Lasm.Fetch.Spec
