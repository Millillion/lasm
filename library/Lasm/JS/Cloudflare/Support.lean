/-
Lasm.JS.Cloudflare.Support: the definitions the generated Cloudflare bindings
(library/Lasm/JS/Cloudflare/*.lean, scripts/bindings/generate-web.mjs) need beyond
Lasm.JS.Web.Support: exports of the runtime's modules (`env` of `cloudflare:workers`),
and records read from objects that are not plain (a `Map`, which Durable Object
storage returns). Hand-written; the mapping is in docs/JS_BINDINGS.md ("Cloudflare
Workers: Lasm.JS.Cloudflare").
-/
import Lasm.JS.Web.Support

namespace Lasm.JS.Cloudflare
open Lasm.JS

namespace Support

/-- `module[k₁][k₂]…`, read as `α`: an export of a module of the runtime (`env` of
`cloudflare:workers`). A Workers build imports `cloudflare:workers` and
`cloudflare:sockets` in its entry, so `Lasm.JS.require` finds them. -/
def getExport (module : String) (path : List String) (α : Type) [FromJS α] : IO α := do
  let rec go (o : Value) : List String → IO α
    | [] => throw (IO.userError s!"Lasm.JS.Cloudflare: empty path in {module}")
    | [k] => o.get k α
    | k :: ks => do go (← o.get k Value) ks
  go (← Lasm.JS.require module) path

/-- `Object.entries(v)`, read as a record of `α`: a record result whose object may not be
plain (`R2Object.customMetadata`). -/
def recordOf (α : Type) [FromJS α] (v : Value) : IO (Lasm.JS.Web.Record α) := do
  let entries ← Lasm.JS.Binding.invoke (Array (String × α)) { name := "Lasm.JS.Cloudflare.Support.recordOf", module := "globalThis", path := "Object.entries", construct := false, arity := 1 }
    #[.ref v ""] (await := false)
  return ⟨entries⟩

/-- A nullable record result, read as data: `none` for null or undefined, a plain object's
fields, or `Object.entries` of an object that is not plain (`recordOf`). -/
def optionalRecordOf (α : Type) [FromJS α] : Data → IO (Option (Lasm.JS.Web.Record α))
  | .null | .undefined => pure none
  | .ref v _ => some <$> recordOf α v
  | .object fields => do
    let entries ← fields.mapM fun (k, d) => do
      match (FromJS.fromJS d : Except String α) with
      | .ok x => pure (k, x)
      | .error e => throw (IO.userError s!"record field {k}: expected {FromJS.typeName α}, got {d.describe}{if e.isEmpty then "" else s!" ({e})"}")
    return some ⟨entries⟩
  | d => throw (IO.userError s!"expected an object or null, got {d.describe}")

/-- `Array.from(map)`, read as a record of `α`: a JavaScript `Map` with string keys
(`DurableObjectStorage.list`, `get` of several keys), in its iteration order (Durable
Object storage returns keys in sorted order). -/
def mapOf (α : Type) [FromJS α] (v : Value) : IO (Lasm.JS.Web.Record α) := do
  let entries ← Lasm.JS.Binding.invoke (Array (String × α)) { name := "Lasm.JS.Cloudflare.Support.mapOf", module := "globalThis", path := "Array.from", construct := false, arity := 1 }
    #[.ref v ""] (await := false)
  return ⟨entries⟩

end Support
end Lasm.JS.Cloudflare
