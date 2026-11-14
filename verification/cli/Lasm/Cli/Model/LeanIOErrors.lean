/-
# src/lean-io-errors.mjs, in Lean: `leanAtLeast`, `leanIOError`

A model of the JavaScript, written to mirror it statement for statement,
and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow).

| JavaScript (src/lean-io-errors.mjs) | Lean |
| --- | --- |
| `Number(part)` of a version part | `jsNumber` |
| `parts(value)`: `value.split('-')[0].split('.').map(Number)` | `versionParts` |
| `leanAtLeast(version, minimum)` | `leanAtLeast` |
| `leanIOError(error, version, { platform, systemErrorName })` | `leanIOErrorModel` |

`Number(text)` is modelled for the texts a version part is made of: the
empty text is 0, decimal digits are their value, anything else is NaN. The
JavaScript also reads whitespace, signs, exponents and `0x…` (never in a
Lean version), and loses precision past 2^53; the differential draws parts of
at most 15 digits, letters and dots. A missing part (`a[i]` past the end) is
`undefined`. `!==` and `>` are JavaScript's: NaN differs from everything, and
`>` with NaN or `undefined` is false.

`leanIOError` is modelled over what it reads of an error (`leanUserError`,
a numeric `errno` (an integer), `code`, whether `errorOrigin` is `'crt'`)
and what it changes (`code`, `errno`, `message`; the other fields are
kept, and `nativeMessage` set). Its tables (libuv's messages, Lean's CRT
aliases, the Windows CRT cases) are parameters: they are data, which the
differential passes as the module exports them (`ioErrorTables`); a lookup
finds own entries only. `checkLeanIOVersion` and `receiveSizeError` are a
list and a constant.
-/

namespace Lasm.Cli

/-- A part as JavaScript holds it: a number, NaN, or `undefined`. -/
inductive JsNum where
  | undef
  | nan
  | num (n : Nat)
deriving DecidableEq, Repr

/-- The value of decimal digits, most significant first. -/
def decimalValue (s : List Char) : Nat := s.foldl (fun n c => n * 10 + (c.toNat - '0'.toNat)) 0

/-- `Number(text)` of a version part (its characters). -/
def jsNumber (s : List Char) : JsNum :=
  if s = [] then .num 0 else if s.all Char.isDigit then .num (decimalValue s) else .nan

/-- `value.split('-')[0].split('.').map(Number)`: splitting on one ASCII
character, as JavaScript's `split` does on UTF-16 units, is splitting the
characters. -/
def versionParts (value : String) : List JsNum :=
  (((value.toList.splitOn '-').headD []).splitOn '.').map jsNumber

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

/-- What `leanIOError` reads of an error. -/
structure IOErrorIn where
  userError : Bool
  errno : Option Int
  code : Option String
  crt : Bool
deriving Repr

/-- `leanIOError`'s tables. -/
structure IOErrorTables where
  messages : List (String × String)
  crtAliases : List (String × String)
  windowsCrtCases : List String

/-- `table[key]` of a table without a prototype. -/
def lookupCode (table : List (String × String)) : Option String → Option String
  | some k => table.lookup k
  | none => none

/-- `leanIOError(error, version, { platform, systemErrorName })`: `none` when
the error is returned as it is, else its new `code` (undefined as `none`),
`errno` and `message`. -/
def leanIOErrorModel (tables : IOErrorTables) (platform version : String) (systemErrorName : Int → Option String)
    (e : IOErrorIn) : Option (Option String × Int × String) :=
  if version = "4.32.0" ∨ e.userError then none else
  let uv := match e.errno with | some n => decide (n < 0) | none => false
  if !uv && !e.crt then none else
  let errno := e.errno.getD 0
  let code := if uv then e.code else (lookupCode tables.crtAliases e.code).or e.code
  let code := if !uv && platform = "win32" && !(e.code.map (tables.windowsCrtCases.contains ·)).getD false then
      some ((systemErrorName (-errno)).getD "UNKNOWN") else code
  let uvNumber := if uv then errno else -errno
  let message := (if platform = "win32" ∧ code = some "ENOEXEC" then some "exec format error" else none).or
    (if code ≠ some "UNKNOWN" ∨ uvNumber = -4094 then lookupCode tables.messages code else none)
  some (code, (if uv then -errno else errno), message.getD s!"Unknown system error {uvNumber}")

end Lasm.Cli
