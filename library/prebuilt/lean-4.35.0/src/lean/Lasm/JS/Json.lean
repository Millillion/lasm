/-
`Lean.Json` ↔ JavaScript data. Numbers are converted through `Float` (as
`JSON.parse` does); objects become plain objects, `null` is `null`.
-/
import Lean.Data.Json.Basic
import Lasm.JS.Core

namespace Lasm.JS
open Lean

partial def jsonToData : Json → Data
  | .null => .null
  | .bool b => .bool b
  | .num n => .number n.toFloat
  | .str s => .string s
  | .arr xs => .array (xs.map jsonToData)
  | .obj kvs => .object (kvs.foldl (init := #[]) fun acc k v => acc.push (k, jsonToData v))

partial def dataToJson : Data → Except String Json
  | .null | .undefined => .ok .null
  | .bool b => .ok (.bool b)
  | .number n =>
    match JsonNumber.fromFloat? n with
    | .inr j => .ok (.num j)
    | .inl e => .error s!"number {n} is not representable in JSON ({e})"
  | .string s => .ok (.str s)
  | .bigint i => .ok (.num (JsonNumber.fromInt i))
  | .array xs => return .arr (← xs.mapM dataToJson)
  | .object fs => return Json.mkObj (← fs.toList.mapM fun (k, v) => return (k, ← dataToJson v))
  | .bytes _ => .error "Uint8Array is not JSON"
  | .ref _ d => .error s!"{d} is not plain JSON data"

instance : ToJS Json := ⟨jsonToData⟩
instance : FromJS Json := ⟨dataToJson, "Lean.Json", .data⟩

end Lasm.JS
