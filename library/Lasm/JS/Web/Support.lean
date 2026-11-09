/-
Lasm.JS.Web.Support: the few definitions the generated standard bindings
(library/Lasm/JS/Web/*.lean, scripts/bindings/generate-web.mjs) are written
with: WebIDL records, optional and variadic arguments, dictionaries, and
reading ArrayBuffers and iterables. Hand-written; the mapping is in
docs/JS_BINDINGS.md ("Standard bindings").
-/
import Lasm.JS.Core

namespace Lasm.JS.Web
open Lasm.JS

/-- A WebIDL `record<K, V>`: a JavaScript object's own properties, in order. -/
structure Record (α : Type) where
  entries : Array (String × α)
  deriving Inhabited, Repr, BEq

instance [ToJS α] : ToJS (Record α) := ⟨fun r => .object (r.entries.map fun (k, v) => (k, toJS v))⟩
instance [FromJS α] : FromJS (Record α) where
  fromJS
    | .object fields => do
      let entries ← fields.mapM fun (k, v) => do
        let a ← (FromJS.fromJS v : Except String α).mapError (s!"property {k}: " ++ ·)
        return (k, a)
      return ⟨entries⟩
    | _ => .error ""
  typeName := s!"Lasm.JS.Web.Record ({FromJS.typeName α})"

namespace Support

/-- An optional argument or dictionary member: `none` is JavaScript `undefined` (left out). -/
def optional [ToJS α] : Option α → Data
  | none => .undefined
  | some a => toJS a

/-- Arguments without their trailing `undefined`s (omitted optional arguments). -/
def args (xs : Array Data) : Array Data :=
  let n := (xs.toList.reverse.dropWhile fun | .undefined => true | _ => false).length
  xs.extract 0 n

/-- Fixed arguments, then variadic ones (passed as given). -/
def argsWith (fixed rest : Array Data) : Array Data :=
  if rest.isEmpty then args fixed else fixed ++ rest

/-- A dictionary: an object of the members that are not `undefined`. -/
def fields (fs : Array (String × Data)) : Data :=
  .object (fs.filter fun | (_, .undefined) => false | _ => true)

/-- A callback's argument `i`, read as `α`. -/
def arg (α : Type) [FromJS α] (args : Array Data) (i : Nat) : IO α :=
  decodeAs α s!"callback argument {i + 1}" (args[i]?.getD .undefined)

/-- The bytes of an `ArrayBuffer` (copied through `new Uint8Array(buffer)`). -/
def arrayBufferBytes (buffer : Value) : IO ByteArray :=
  Binding.invoke ByteArray { name := "Lasm.JS.Web.Support.arrayBufferBytes", module := "globalThis", path := "Uint8Array", construct := true, arity := 1 } #[.ref buffer ""] (await := false)

/-- `Number(v)`, read as `α`: an integer some runtimes return as an object with a primitive value (a timer). -/
def number (α : Type) [FromJS α] (v : Value) : IO α :=
  Binding.invoke α { name := "Lasm.JS.Web.Support.number", module := "globalThis", path := "Number", construct := false, arity := 1 } #[.ref v ""] (await := false)

/-- `Array.from(o[method]())`, read as `α`: the entries, keys or values of an iterable. -/
def iterate (o : Value) (method : String) (α : Type) [FromJS α] : IO α := do
  let iterator ← o.callMethod method #[] Value
  Binding.invoke α { name := "Lasm.JS.Web.Support.iterate", module := "globalThis", path := "Array.from", construct := false, arity := 1 } #[.ref iterator ""] (await := false)

/-- `globalThis.a.b…`, read as `α`. -/
def getGlobal (path : List String) (α : Type) [FromJS α] : IO α := do
  let rec go (o : Value) : List String → IO α
    | [] => throw (IO.userError "Lasm.JS.Web: empty global path")
    | [k] => o.get k α
    | k :: ks => do go (← o.get k Value) ks
  go (← global) path

end Support
end Lasm.JS.Web
