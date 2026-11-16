/-
Conformance program for Lasm.JS's core on every JavaScript target (Node, Bun,
Deno, Workers, the browser): built and run by scripts/bindings/test-web.mjs
--fixture js-core (web-bindings.yml). Each section checks one feature against
its specification (docs/JS_BINDINGS.md):

- project files: `@[js "./ffi/files.mjs" …]` binds the project's own ES module,
  relative to this file, and the files it imports by relative path ship with it.

Output: a line `FAIL <check>: <detail>` per failed check, a line
`section <name>: <passed> passed, <failed> failed` per section, and
`summary <passed> <failed>`.
-/
import Lasm.JS
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

def main : IO Unit := do
  let r : Checks ← IO.mkRef {}
  projectFiles r
  let s ← r.get
  for line in s.lines do IO.println line
  IO.println s!"summary {s.passed} {s.failed}"
