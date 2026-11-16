/-
# src/link-driver/python.mjs, in Lean: `pythonJsonString`, `comparePythonStrings`

A model of the JavaScript, written to mirror it statement for statement,
and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow).

| JavaScript (src/link-driver/python.mjs) | Lean |
| --- | --- |
| `value.charCodeAt(index)` over the string | `utf16Units` of each character |
| `code.toString(16).padStart(4, '0')` | `hex4` |
| one step of `pythonJsonString`'s loop | `escapeUnit` |
| `pythonJsonString(value)` | `pythonJsonString` |
| `comparePythonStrings(a, b)` (`[...a]`: code points) | `comparePythonStrings` (`go`) |

A Lean `String` holds Unicode scalar values, so the model covers the
JavaScript strings without lone surrogates (the differential draws those).
The rest of the module (`pythonJsonDumps`, `pythonEquals`, `truthy`, the
identifier and whitespace helpers) is not modelled.
-/

namespace Lasm.Cli

/-- A character's UTF-16 code units (`charCodeAt` reads them one by one). -/
def utf16Units (c : Char) : List Nat :=
  if c.val.toNat < 0x10000 then [c.val.toNat]
  else [0xD800 + (c.val.toNat - 0x10000) / 0x400, 0xDC00 + (c.val.toNat - 0x10000) % 0x400]

/-- `code.toString(16).padStart(4, '0')`. -/
def hex4 (n : Nat) : List Char :=
  List.replicate (4 - (Nat.toDigits 16 n).length) '0' ++ Nat.toDigits 16 n

/-- What the loop appends for one code unit. -/
def escapeUnit (u : Nat) : List Char :=
  if u = 0x22 then ['\\', '"']
  else if u = 0x5c then ['\\', '\\']
  else if u = 0x0a then ['\\', 'n']
  else if u = 0x0d then ['\\', 'r']
  else if u = 0x09 then ['\\', 't']
  else if u = 0x08 then ['\\', 'b']
  else if u = 0x0c then ['\\', 'f']
  else if u < 0x20 ∨ u > 0x7e then '\\' :: 'u' :: hex4 u
  else [Char.ofNat u]

/-- `pythonJsonString(value)`: `json.dumps` of a string, `ensure_ascii`. -/
def pythonJsonString (s : String) : String :=
  String.ofList ('"' :: (s.toList.flatMap utf16Units).flatMap escapeUnit ++ ['"'])

/-- `comparePythonStrings(a, b)`: the first difference of code points, or
the difference of the lengths. -/
def comparePythonStrings (a b : String) : Int := go a.toList b.toList
where
  go : List Char → List Char → Int
    | x :: xs, y :: ys => if x.val.toNat ≠ y.val.toNat then (x.val.toNat : Int) - y.val.toNat else go xs ys
    | xs, ys => (xs.length : Int) - ys.length

end Lasm.Cli
