/-
The theorems of Lasm.Fetch's propositions (Spec.lean): each `Theorems.x` has
type exactly `Spec.x`. The proof is in the library itself (Fetch.lean).
-/
import Lasm.Fetch.Spec

namespace Lasm.Fetch.Theorems
open Lasm.Fetch

theorem segments_no_dot_segments : Spec.segments_no_dot_segments :=
  Request.segments_no_dot_segments

end Lasm.Fetch.Theorems
