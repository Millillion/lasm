/-
Fuzz entry points for Lasm's Lean code, compiled to C with the managed Lean
and linked into libFuzzer binaries (test/fuzz/native/build.mjs,
lean_driver.c). Each takes the fuzz input and returns "" or a description of
the property it broke; the driver aborts on a non-empty answer, and a Lean
panic aborts too (lean_set_exit_on_panic). The propositions an entry checks
are cited by `Proposition:` lines, with their statements, and evaluated on
every input (docs/TESTING_STRATEGY.md §4).
-/
import Lasm.JS.Core
open Lasm.JS

namespace LasmFuzz

/-- Reads wire bytes with Lean's own reader. A reference is refused, so a
value read is plain (no references). -/
def read (b : ByteArray) : Except String Data :=
  Wire.decodeWith id (fun _ _ => .error "a reference") b

/-- The Lasm.JS value codec's Lean half (`Wire` in library/Lasm/JS/Core.lean)
on arbitrary bytes, natively: the reader never panics or overruns, it reads
the input or refuses it cleanly, and whatever it reads crosses intact. The
value read, `d`, is plain; `encode d` must accept it (it came from lengths
that fit in a u32), the reader must read those bytes back (never an error),
and writing that again must give the same bytes: the round trip is a fixed
point after one step. (The input itself need not come back byte for byte:
a bigint's digits, say, are written in canonical form.) -/
@[export lasm_fuzz_js_wire_decode]
def jsWireDecode (input : ByteArray) : String := Id.run do
  let .ok d := read input | return ""
  let .ok b := Wire.encode d | return s!"encode refused the {d.describe} the reader read"
  -- Proposition: Lasm.JS.Spec.decode_encode
  --   ∀ (d : Data) (b : ByteArray) (ref : UInt32 → String → Except String Data),
  --     d.Plain → Wire.encode d = .ok b → Wire.decodeWith id ref b = .ok d.wire
  let .ok d' := read b | return s!"the reader refused the bytes encode wrote for the {d.describe}"
  let .ok b' := Wire.encode d' | return s!"encode refused the {d'.describe} read back"
  if b'.data != b.data then return s!"the {d.describe} did not come back intact ({b.size} bytes, then {b'.size})"
  return ""

end LasmFuzz
