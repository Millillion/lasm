/-
Conformance program for Lasm.JS's core on every JavaScript target (Node, Bun,
Deno, Workers, the browser): built and run by scripts/bindings/test-web.mjs
--fixture js-core (web-bindings.yml). Each section checks one feature against
its specification (docs/JS_BINDINGS.md):

- project files: `@[js "./ffi/files.mjs" …]` binds the project's own ES module,
  relative to this file, and the files it imports by relative path ship with it;
- classes: `Lasm.JS.Class.define` makes a real class extending a base, whose
  constructor, methods and getters are Lean functions given `this`.

Output: a line `FAIL <check>: <detail>` per failed check, a line
`section <name>: <passed> passed, <failed> failed` per section, and
`summary <passed> <failed>`.
-/
import Lasm.JS
import Lasm.JS.Class
open Lasm.JS

structure Report where
  passed : Nat := 0
  failed : Nat := 0
  lines : Array String := #[]

abbrev Checks := IO.Ref Report

def expect (r : Checks) (name : String) (ok : Bool) (detail : String := "") : IO Unit :=
  r.modify fun s => if ok then { s with passed := s.passed + 1 }
    else { s with failed := s.failed + 1, lines := s.lines.push s!"FAIL {name}: {detail}" }

def runSection (r : Checks) (name : String) (body : IO Unit) : IO Unit := do
  let before ← r.get
  try body catch e => expect r s!"{name} (section)" false s!"threw {e}"
  let after ← r.get
  r.modify fun s => { s with lines := s.lines.push s!"section {name}: {after.passed - before.passed} passed, {after.failed - before.failed} failed" }

/-! Project files (A6): ffi/files.mjs imports ffi/lib/helper.mjs. -/

@[js "./ffi/files.mjs" "twice"] opaque twice : Nat → IO Nat
@[js "./ffi/files.mjs" "greeting"] opaque greeting : String → IO String
@[js "./ffi/files.mjs" "new Box"] opaque newBox : Nat → IO Value
@[js "./ffi/lib/helper.mjs" "calls"] opaque helperCalls : IO Nat

def projectFiles (r : Checks) : IO Unit := runSection r "project-files" do
  -- twice n = 2n, a function of the project's file
  for n in [0, 1, 7, 999] do
    let m ← twice n
    expect r s!"twice {n}" (m == 2 * n) s!"{m}"
  -- A file the bound file imports comes along; bound directly, it is the same module instance.
  let g ← greeting "Lean"
  expect r "imported helper" (g == "hello, Lean (from helper)") g
  let g2 ← greeting "again"
  expect r "imported helper again" (g2 == "hello, again (from helper)") g2
  let calls ← helperCalls
  expect r "one module instance" (calls == 2) s!"{calls}"
  -- `new` on a class the project file exports
  let box ← newBox 5
  let v ← box.get "value" Nat
  expect r "new" (v == 5) s!"{v}"

/-! Classes (A6.2): exercised from JavaScript (ffi/files.mjs `useClass`). -/

@[js "./ffi/files.mjs" "useClass"] opaque useClass : Value → IO Data
@[js "globalThis" "Error"] opaque errorClass : IO Value

def classes (r : Checks) : IO Unit := runSection r "classes" do
  let c ← Class.define {
    name := "Counter"
    extends? := some (← errorClass)
    constructor := some fun self args => do
      self.set "count" ((← decodeAs Nat "start" (args[1]?.getD (toJS (0 : Nat)))))
    methods := #[("increment", .sync fun self args => do
      let n := (← self.get "count" Nat) + (← decodeAs Nat "by" (args[0]?.getD (toJS (1 : Nat))))
      self.set "count" n
      return toJS n)]
    getters := #[("double", fun self => do return toJS (2 * (← self.get "count" Nat)))]
    statics := #[("kind", .string "counter")] }
  -- useClass does: const c = new C("boom", 5); c.increment(); c.increment(2);
  -- and reports [C.name, C.kind, c instanceof C, c instanceof Error, c.message, c.count, c.double].
  let d ← useClass c
  let get (i : Nat) : Data := match d with | .array xs => xs[i]?.getD .undefined | _ => .undefined
  let str (i : Nat) : Option String := match get i with | .string s => some s | _ => none
  let bool (i : Nat) : Option Bool := match get i with | .bool b => some b | _ => none
  let num (i : Nat) : Option Float := match get i with | .number n => some n | _ => none
  expect r "name" (str 0 == some "Counter") (get 0).describe
  expect r "static" (str 1 == some "counter") (get 1).describe
  expect r "instanceof" (bool 2 == some true && bool 3 == some true) s!"{(get 2).describe} {(get 3).describe}"
  expect r "super" (str 4 == some "boom") (get 4).describe
  expect r "methods with this" (num 5 == some 8) (get 5).describe
  expect r "getter" (num 6 == some 16) (get 6).describe
  -- Lean makes an instance too (Value.new), and sees the same state.
  let inst ← c.new #[toJS "from Lean", toJS (1 : Nat)]
  let _ ← inst.callMethod "increment" #[]
  let n ← inst.get "count" Nat
  expect r "new from Lean" (n == 2) s!"{n}"

def checks : IO String := do
  let r : Checks ← IO.mkRef {}
  projectFiles r
  classes r
  let s ← r.get
  return "\n".intercalate (s.lines.push s!"summary {s.passed} {s.failed}").toList ++ "\n"

/-- Cloudflare Workers (`navigator.userAgent`), where a program runs its checks in a request. -/
def onWorkers : IO Bool := do
  if !(← onEdge) then return false
  let nav ← (← global).get "navigator"
  return (← nav.get "userAgent" (Option String)) == some "Cloudflare-Workers"

def main : IO Unit := do
  if ← onWorkers then
    -- On Workers, the checks run in the first request and answer its body.
    let handler ← Function.ofFn fun _ => do
      let text ← checks
      return toJS (← (← global).get "Response" >>= (·.new #[toJS text]))
    exportDefault handler
    return
  IO.print (← checks)
