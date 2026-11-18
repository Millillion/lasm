/-
# What is tested, not yet proved, about the request-path model

Candidates: propositions in the form of `Spec.lean` that tests check on
generated inputs but no theorem proves yet (the convention is described in
library/Lasm/UI/Candidates.lean and docs/TESTING_STRATEGY.md §4).
-/
import Lasm.RequestPath.Model
import Lasm.UI.Url

namespace Lasm.RequestPath.Candidates
open Lasm.RequestPath

/-! ## Request paths -/

/-- **No path segment is empty.** Whatever the request's URL (`//`,
a trailing `/`, escapes that decode to nothing printable), no segment of
`r.segments` is the empty string. Tested by: test/library-proofs/RequestPath.lean -/
def segments_nonempty : Prop :=
  ∀ r : Request, ∀ s ∈ r.segments, s ≠ ""

/-- **A server decodes what a Lasm.UI page encodes.** For every string,
the model's `percentDecode` reads `Lasm.UI.Url.percentEncode`'s output back
as that string: a path segment or query value a page builds reaches a server
that decodes as the model does unchanged. Tested by: test/library-proofs/RequestPath.lean -/
def percent_round_trip : Prop :=
  ∀ s : String, percentDecode (Lasm.UI.Url.percentEncode s) = s

end Lasm.RequestPath.Candidates
