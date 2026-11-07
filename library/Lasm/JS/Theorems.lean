/-
The theorems of Lasm.JS's propositions (Spec.lean): each `Theorems.x` has
type exactly `Spec.x`, from the lemmas of Lasm.JS.Proofs.Wire.
-/
import Lasm.JS.Spec

namespace Lasm.JS.Theorems
open Lasm.JS

theorem decode_encode : Spec.decode_encode :=
  fun _ _ ref hp he => Proofs.Wire.decode_encode ref hp he

theorem encode_ok_iff_fits : Spec.encode_ok_iff_fits :=
  Proofs.Wire.encode_ok_iff

end Lasm.JS.Theorems
