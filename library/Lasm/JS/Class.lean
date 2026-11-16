/-
JavaScript classes defined in Lean (A6.2, docs/JS_BINDINGS.md "JavaScript
classes"): `Lasm.JS.Class.define` makes a real `class Name extends Base`, with
no `eval`, through Lasm's builtin module `lasm:class`. Its constructor and
methods are Lean functions, each given the instance (`this`) first. APIs that
insist on a class take it: `customElements.define`, subclasses of
`EventTarget`, `Error` or Node's streams, frameworks that `new` what you pass.

    import Lasm.JS.Class
    open Lasm.JS

    def counter : IO Value := Class.define {
      name := "Counter"
      constructor := some fun self _ => self.set "count" (0 : Nat)
      methods := #[
        ("increment", .sync fun self _ => do
          let n ← self.get "count" Nat
          self.set "count" (n + 1)
          return toJS (n + 1))]
      getters := #[("double", fun self => do return toJS (2 * (← self.get "count" Nat)))] }

    -- const c = new Counter(); c.increment(); c.double === 2
-/
import Lasm.JS.Core
import Lasm.JS.Meta

namespace Lasm.JS.Class

/-- A method of a class: a Lean function of the instance (`this`) and the
call's arguments. -/
inductive Method where
  /-- Called synchronously; JavaScript gets its result at once
  (`Function.ofSyncFn`'s rules: it cannot wait for JavaScript). For methods
  whose callers use the result (a DOM lifecycle callback, a getter-like
  method, `_transform`). -/
  | sync (f : Value → Array Data → IO Data)
  /-- Returns a promise of its result, and runs as a Lean task that holds no
  thread while it awaits (`Function.ofFn`). -/
  | async (f : Value → Array Data → Async Data)

/-- What `define` makes. -/
structure Spec where
  /-- The class's `name`. -/
  name : String
  /-- The class it extends (`Error`, `HTMLElement`, a library's base class);
  `none` extends `Object`. -/
  extends? : Option Value := none
  /-- Runs after `super(...args)`, with the new instance and the arguments. -/
  constructor : Option (Value → Array Data → IO Unit) := none
  /-- Prototype methods, by name. -/
  methods : Array (String × Method) := #[]
  /-- Prototype getters, by name (synchronous, as JavaScript reads them). -/
  getters : Array (String × (Value → IO Data)) := #[]
  /-- Properties of the class itself (`static observedAttributes = [...]`). -/
  statics : Array (String × Data) := #[]

/-- `define` of the builtin module `lasm:class`; `Class.define` calls it. -/
@[js "lasm:class" "define"] private opaque defineRaw : String → Option Value → Option Value →
  Array (String × Value) → Array (String × Value) → Array (String × Data) → IO Value

/-- The instance (`this`) and the call's own arguments, from the arguments the
class's JavaScript passes a Lean function (`f(this, ...args)`). -/
private def split (what : String) (args : Array Data) : IO (Value × Array Data) := do
  let self ← decodeAs Value what (args[0]?.getD .undefined)
  return (self, args.extract 1 args.size)

/-- Defines the class: its constructor, as a JavaScript value (pass it to
`customElements.define`, call `new` on it with `Value.new`, export it). -/
def define (s : Spec) : IO Value := do
  let construct ← s.constructor.mapM fun f => Function.ofSyncFn fun args => do
    let (self, rest) ← split s!"the constructor of {s.name}" args
    f self rest
    return .undefined
  let methods ← s.methods.mapM fun (name, m) => do
    let context := s!"{s.name}.{name}"
    let fn ← match m with
      | .sync f => Function.ofSyncFn fun args => do let (self, rest) ← split context args; f self rest
      | .async f => Function.ofFn fun args => do let (self, rest) ← split context args; f self rest
    return (name, fn)
  let getters ← s.getters.mapM fun (name, f) => do
    return (name, ← Function.ofSyncFn fun args => do let (self, _) ← split s!"{s.name}.{name}" args; f self)
  defineRaw s.name s.extends? construct methods getters s.statics

end Lasm.JS.Class
