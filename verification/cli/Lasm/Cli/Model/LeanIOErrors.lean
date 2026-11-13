/-
# src/lean-io-errors.mjs, in Lean: `leanAtLeast`

A model of the JavaScript, written to mirror it statement for statement,
and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow).

| JavaScript (src/lean-io-errors.mjs) | Lean |
| --- | --- |
| `Number(part)` of a version part | `jsNumber` |
| `parts(value)`: `value.split('-')[0].split('.').map(Number)` | `versionParts` |
| `leanAtLeast(version, minimum)` | `leanAtLeast` |

`Number(text)` is modelled for the texts a version part is made of: the
empty text is 0, decimal digits are their value, anything else is NaN. The
JavaScript also reads whitespace, signs, exponents and `0x…` (never in a
Lean version), and loses precision past 2^53; the differential draws parts of
at most 15 digits, letters and dots. A missing part (`a[i]` past the end) is
`undefined`. `!==` and `>` are JavaScript's: NaN differs from everything, and
`>` with NaN or `undefined` is false.

The rest of the module (the IO error policy) is not modelled.
-/

namespace Lasm.Cli

/-- A part as JavaScript holds it: a number, NaN, or `undefined`. -/
inductive JsNum where
  | undef
  | nan
  | num (n : Nat)
deriving DecidableEq, Repr

/-- `Number(text)` of a version part. -/
def jsNumber (s : String) : JsNum :=
  if s = "" then .num 0 else if s.all Char.isDigit then .num s.toNat! else .nan

/-- `value.split('-')[0].split('.').map(Number)`. -/
def versionParts (value : String) : List JsNum :=
  (((value.splitOn "-").headD "").splitOn ".").map jsNumber

/-- `x !== y`. -/
def JsNum.strictNe : JsNum → JsNum → Bool
  | .num m, .num n => m != n
  | .undef, .undef => false
  | _, _ => true

/-- `x > y`. -/
def JsNum.gt : JsNum → JsNum → Bool
  | .num m, .num n => n < m
  | _, _ => false

/-- `leanAtLeast(version, minimum)`: the first of three parts that differ
decides; all equal is `true`. -/
def leanAtLeastModel (version minimum : String) : Bool :=
  let a := versionParts version
  let b := versionParts minimum
  let get := fun (l : List JsNum) (i : Nat) => l[i]?.getD .undef
  go a b get [0, 1, 2]
where
  go (a b : List JsNum) (get : List JsNum → Nat → JsNum) : List Nat → Bool
    | [] => true
    | i :: is => if (get a i).strictNe (get b i) then (get a i).gt (get b i) else go a b get is

end Lasm.Cli
