/-
The theorems of the request-path model's propositions (Spec.lean): each
`Theorems.x` has type exactly `Spec.x`. The proof is in the model itself
(Model.lean).
-/
import Lasm.RequestPath.Spec

namespace Lasm.RequestPath.Theorems
open Lasm.RequestPath

theorem segments_no_dot_segments : Spec.segments_no_dot_segments :=
  Request.segments_no_dot_segments

end Lasm.RequestPath.Theorems
