/-
Lasm.JS.Node.Support: the definitions the generated Node bindings
(library/Lasm/JS/Node/*.lean, scripts/bindings/generate-web.mjs) need beyond
Lasm.JS.Web.Support: properties of Node modules, functions that take a final
`(err, value)` callback, and Buffer methods called on bytes. Hand-written; the
mapping is in docs/JS_BINDINGS.md ("Lasm.JS.Node").
-/
import Lasm.JS.Web.Support

namespace Lasm.JS.Node
open Lasm.JS

namespace Support

/-- `require(module)[k₁][k₂]…`, read as `α`: a property of a Node module (`os.EOL`,
`process.argv`). On Bun, Deno and the other edge builds, `node:` modules come from
`process.getBuiltinModule`. -/
def getExport (module : String) (path : List String) (α : Type) [FromJS α] : IO α := do
  let rec go (o : Value) : List String → IO α
    | [] => throw (IO.userError s!"Lasm.JS.Node: empty path in {module}")
    | [k] => o.get k α
    | k :: ks => do go (← o.get k Value) ks
  go (← Lasm.JS.require module) path

/-- `util.promisify(require(module)[path])(...args)`, awaited without holding a Lean
thread: a Node function whose last parameter is a callback `(err, value)` (or one
the docs give a promisified form, `child_process.execFile`), as a promise of its value. -/
def promisified (α : Type) [FromJS α] (module path : String) (args : Array Data) : Async α := do
  let f ← getExport module (path.splitOn ".") Value
  let p ← Lasm.JS.Binding.invoke Value { name := "Lasm.JS.Node.Support.promisified", module := "node:util", path := "promisify", construct := false, arity := 1 }
    #[.ref f ""] (await := false)
  p.callAwait args α

/-- `require(module)[path].call(bytes, ...args)`, read as `α`: a method of a prototype
called with a `Uint8Array` of `self` as `this` (the Node docs: "All methods on the
Buffer prototype are callable with a Uint8Array instance"). -/
def callOnBytes (module path : String) (self : ByteArray) (args : Array Data) (α : Type) [FromJS α] : IO α := do
  let f ← getExport module (path.splitOn ".") Value
  f.call args α (this := .bytes self)

end Support
end Lasm.JS.Node
