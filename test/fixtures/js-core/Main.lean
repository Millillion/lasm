/-
Conformance program for Lasm.JS's core on every JavaScript target (Node, Bun,
Deno, Workers, the browser): built and run by scripts/bindings/test-web.mjs
--fixture js-core (web-bindings.yml). Each section checks one feature against
its specification (docs/JS_BINDINGS.md):

- project files: `@[js "./ffi/files.mjs" …]` binds the project's own ES module,
  relative to this file, and the files it imports by relative path ship with it;
- classes: the recipes of "JavaScript classes": a class in the project's own
  file (ffi/classes.mjs) whose methods call Lean (an `Error` subclass, and a
  custom element where there is a DOM).

Output: a line `FAIL <check>: <detail>` per failed check, a line
`section <name>: <passed> passed, <failed> failed` per section, and
`summary <passed> <failed>`.
-/
import Lasm.JS
import Lasm.Target
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

/-! Classes (docs/JS_BINDINGS.md, "JavaScript classes"): the class is JavaScript in
ffi/classes.mjs, and its methods call Lean functions. -/

@[js "./ffi/classes.mjs" "new NotFound"] opaque newNotFound : String → IO Value
@[js "./ffi/classes.mjs" "isNotFound"] opaque isNotFound : Value → IO Bool
@[js "./ffi/classes.mjs" "find"] opaque find : String → IO String
@[js "./ffi/classes.mjs" "defineGreeting"] opaque defineGreeting : String → Value → Value → IO Unit

def classes (r : Checks) : IO Unit := runSection r "classes" do
  -- An Error subclass: instanceof NotFound and Error, super's message, and thrown into Lean.
  let e ← newNotFound "/missing"
  expect r "instanceof" (← isNotFound e) ""
  let message ← e.get "message" String
  expect r "super" (message == "no such page: /missing") message
  let name ← e.get "name" String
  expect r "name" (name == "NotFound") name
  let thrown ← tryCatch (do discard <| find "/gone"; pure "") fun err => pure (toString err)
  expect r "thrown" ((thrown.splitOn "NotFound: no such page: /gone").length > 1) thrown
  -- A custom element whose lifecycle callbacks are Lean functions: only where there is a DOM.
  let g ← global
  if (← g.get "customElements" Data) matches .undefined then return
  let connected ← IO.mkRef (0 : Nat)
  let onConnected ← Function.ofSyncFn fun _ => do connected.modify (· + 1); return .undefined
  let onChanged ← Function.ofSyncFn fun args => do
    let self ← decodeAs Value "this" (args[0]?.getD .undefined)
    let value ← decodeAs (Option String) "newValue" (args[2]?.getD .undefined)
    self.set "textContent" s!"hello, {value.getD "nobody"}"
    return .undefined
  defineGreeting "lean-greeting" onConnected onChanged
  let doc ← g.get "document"
  let el ← doc.callMethod "createElement" #[toJS "lean-greeting"]
  discard <| el.callMethod "setAttribute" #[toJS "name", toJS "Lean"] Data
  discard <| (← doc.get "documentElement").callMethod "appendChild" #[toJS el] Data
  let text ← el.get "textContent" String
  expect r "attributeChangedCallback" (text == "hello, Lean") text
  let n ← connected.get
  expect r "connectedCallback" (n == 1) s!"{n}"
  discard <| el.callMethod "setAttribute" #[toJS "name", toJS "again"] Data
  let text ← el.get "textContent" String
  expect r "attributeChangedCallback again" (text == "hello, again") text

/-! Lasm.target: the build's target, against the host the program runs on. -/

@[js "./ffi/host.mjs" "host"] opaque jsHost : IO String

def targetSection (r : Checks) : IO Unit := runSection r "target" do
  let host ← jsHost
  expect r "Lasm.target" (Lasm.target.name == host) s!"built for {Lasm.target}, running on {host}"

def checks : IO String := do
  let r : Checks ← IO.mkRef {}
  projectFiles r
  classes r
  targetSection r
  let s ← r.get
  return "\n".intercalate (s.lines.push s!"summary {s.passed} {s.failed}").toList ++ "\n"

def main : IO Unit := do
  -- On Cloudflare Workers, a program runs its checks in a request.
  if Lasm.target == .workers then
    -- On Workers, the checks run in the first request and answer its body.
    let handler ← Function.ofFn fun _ => do
      let text ← checks
      return toJS (← (← global).get "Response" >>= (·.new #[toJS text]))
    exportDefault handler
    return
  IO.print (← checks)
