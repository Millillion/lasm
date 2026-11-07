/-
# What is proved about Lasm.JS

Every proposition proved about Lasm.JS, as a named `def … : Prop` with a
plain-English doc comment and no proof. Each proposition `Spec.x` is proved
by the theorem `Lasm.JS.Theorems.x : Spec.x` (Theorems.lean), and
`node scripts/library-proofs.mjs` fails unless every proposition here has its
theorem and every theorem uses only Lean's standard axioms. library/PROOFS.md
is generated from this file.

Reading guide. Every value that crosses between Lean and JavaScript (call
arguments, results, properties, callbacks) is a `Data` sent in one binary
format, the value codec (`Wire` in Core.lean; its JavaScript half is in
src/node-js.mjs and src/edge/edge-js.mjs). `Wire.encode` writes a
value; `Wire.decode` reads one, by running `Wire.decodeWith` in `IO`, where
a reference becomes a JavaScript value held for Lean. The propositions are
about that same reader, run in `Except String`. Vocabulary
(Lasm.JS.Proofs.Wire):
- `d.Plain`: `d` holds no reference (a reference is a handle into the
  JavaScript host's table, which only the host can resolve);
- `d.Fits`: every length in `d` (of a string or object key in UTF-8 bytes,
  a bigint's digits, a byte array, an array, an object's fields) is at most
  `Wire.maxLength`, 2³² − 1, the most the format's u32 lengths carry;
- `d.wire`: `d` with each number replaced by the float with the same bits
  (numbers travel as their 64 bits; Lean's library does not prove
  `Float.ofBits (Float.toBits n) = n`).
That the JavaScript half reads and writes the same format is tested
(test/node-js.test.mjs, test/edge-js.test.mjs), not proved.
-/
import Lasm.JS.Proofs.Wire

namespace Lasm.JS.Spec
open Lasm.JS

/-! ## The value codec: every value crosses intact -/

/-- **Every value that is encoded is read back exactly.** Take any plain
value `d` (no references) that `encode` accepts, as the bytes `b`. The
reader (`decodeWith`, which `decode` runs) reads `b` back as `d`, every
number with the same bits: never an error, nothing left over, nothing
misread. -/
def decode_encode : Prop :=
  ∀ (d : Data) (b : ByteArray) (ref : UInt32 → String → Except String Data),
    d.Plain → Wire.encode d = .ok b → Wire.decodeWith id ref b = .ok d.wire

/-- **Lengths never wrap.** `encode d` succeeds exactly when every length
in `d` fits the format's u32 (`d.Fits`). A string, byte array, array or
object with 2³² or more bytes, elements or fields is an error naming it,
never a length that wraps around and makes the reader misread what follows. -/
def encode_ok_iff_fits : Prop :=
  ∀ d : Data, (∃ b, Wire.encode d = .ok b) ↔ d.Fits

end Lasm.JS.Spec
