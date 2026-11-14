/-
# src/wasi/wasi-component.mjs, in Lean

A model of the JavaScript, checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow).
Lasm.Cli.Theorems proves its propositions.

| src/wasi/wasi-component.mjs           | here                                  |
| ------------------------------------- | ------------------------------------- |
| `leb`                                 | `lebJS`                               |
| `readLeb(bytes, at)`                  | `readLebJS` (of `bytes` from `at`)    |
| `sections(bytes)`                     | `isComponentHeader`, `parseSections`  |
| `startsWith(a, prefix)`               | `List.isPrefixOf`                     |
| `replaceCoreModule(c, prefix, to)`    | `replaceCoreModule`                   |
| `placeholderModule()`                 | `placeholderModule`                   |
| `componentize(core, template)`        | `componentize`                        |
| `makeTemplate(component, core)`       | `makeTemplate`                        |
| `extractCore(component, template)`    | `extractCore`                         |
| `withoutComponentType(module)`        | `withoutComponentType`, `keepSections` |

The template that `componentize` and `extractCore` read by default
(`readFileSync(templateUrl)`, src/wasi/component/proxy-template.wasm) is an
argument here, as the JavaScript also takes it.

Reading guide. The JavaScript walks a `Uint8Array` by offsets; the model
walks the list of bytes that remain, so that `bytes.subarray(a, b)` is a
`drop` and a `take` (both clamp at the end, as `subarray` does). A section
is read as its bytes (`raw`: id, size and payload, `subarray(at, end)`) and
its payload (`body`, `subarray(start, end)`). `replaceCoreModule` writes the
bytes before the matching section, the new section and the bytes after it;
here every section but the matching one is written back as its `raw` bytes,
which is the same list.

Where the two can differ: `readLeb` adds `(b & 0x7f) * 2 ** shift` in
floating point, exact below 2⁵³; a size of 2⁵³ or more is past the end of
any array either way, so it is the same as here (an error in `sections`,
the end of the walk in `withoutComponentType`), except for a LEB128 of more
than 146 bytes, where `2 ** shift` is infinite and the JavaScript reads NaN.
`withoutComponentType` decodes a custom section's name with `TextDecoder`
(U+FFFD for bytes that are not UTF-8) and asks whether it starts with
`component-type`; that holds exactly when the bytes start with its 14 ASCII
bytes (a decoded ASCII character before any U+FFFD is the same byte), which
is what the model asks.
-/

namespace Lasm.Cli

/-- `leb(value)`: unsigned LEB128, seven bits a byte, low bits first, the
high bit set on every byte but the last (one byte for 0). -/
def lebJS (v : Nat) : List UInt8 :=
  if h : v / 128 = 0 then [(v % 128).toUInt8] else (v % 128 + 128).toUInt8 :: lebJS (v / 128)
termination_by v
decreasing_by omega

/-- `readLeb(bytes, at)`, of the bytes from `at`: the value and the number of
bytes read. A byte past the end is `undefined`, read as 0 (`undefined & 0x7f`
is 0 and ends the number). -/
def readLebJS : List UInt8 → Nat × Nat
  | [] => (0, 1)
  | b :: r => if b.toNat < 128 then (b.toNat, 1) else (b.toNat - 128 + 128 * (readLebJS r).1, (readLebJS r).2 + 1)

/-- A section as `sections` and the loop of `withoutComponentType` read it:
its id, its bytes (id, size and payload) and its payload. -/
structure Section where
  id : UInt8
  raw : List UInt8
  body : List UInt8
deriving Inhabited

/-- `sections(bytes)` after the header: each section in order, or `none`
where the JavaScript throws (a section that runs past the end). -/
def parseSections : List UInt8 → Option (List Section)
  | [] => some []
  | id :: r =>
    let p := readLebJS r
    if p.2 + p.1 ≤ r.length then
      (parseSections (r.drop (p.2 + p.1))).map
        ({ id, raw := id :: r.take (p.2 + p.1), body := (r.drop p.2).take p.1 } :: ·)
    else none
termination_by l => l.length
decreasing_by simp only [List.length_drop, List.length_cons]; omega

/-- The header check of `sections`: `\0asm`, then any version, then layer 1
(bytes 6 and 7 are `01 00`). -/
def isComponentHeader (c : List UInt8) : Bool :=
  c[0]? == some 0 && c[1]? == some 0x61 && c[2]? == some 0x73 && c[3]? == some 0x6d &&
    c[6]? == some 1 && c[7]? == some 0

/-- The message `sections` throws. -/
def notAComponent : String := "Not a WebAssembly component"

/-- `replaceCoreModule(component, prefix, to)` on lists of bytes. -/
def replaceCoreModuleL (c pfx to : List UInt8) : Except String (List UInt8) :=
  if !isComponentHeader c then .error notAComponent else
  match parseSections (c.drop 8) with
  | none => .error notAComponent
  | some secs =>
    let matches_ := fun (s : Section) => s.id == 1 && pfx.isPrefixOf s.body
    let found := secs.filter matches_
    if found.length = 1 then
      .ok (c.take 8 ++ secs.flatMap fun s =>
        if matches_ s then
          let module := to ++ s.body.drop pfx.length
          1 :: lebJS module.length ++ module
        else s.raw)
    else .error s!"The component has {found.length} matching core modules (expected one)"

/-- `replaceCoreModule(component, prefix, to)`: the component with its one
core module section that starts with `prefix` replaced by `to` followed by
the rest of that section, or the message it throws. -/
def replaceCoreModule (c pfx to : ByteArray) : Except String ByteArray :=
  (replaceCoreModuleL c.data.toList pfx.data.toList to.data.toList).map fun l => ⟨l.toArray⟩

/-- `placeholderModule()`: the template's stand-in for the main module, an
empty module with one custom section named `lasm:main-module` and no
payload (`[0, payload.length, ...payload]` with `payload = [name.length,
...name]`). -/
def placeholderModule : List UInt8 :=
  let name := "lasm:main-module".toUTF8.data.toList
  let payload := name.length.toUInt8 :: name
  [0, 0x61, 0x73, 0x6d, 1, 0, 0, 0, 0, payload.length.toUInt8] ++ payload

/-- `componentize(core, template)`: the template with its placeholder module
replaced by `core`. -/
def componentize (core template : ByteArray) : Except String ByteArray :=
  replaceCoreModule template ⟨placeholderModule.toArray⟩ core

/-- `makeTemplate(component, core)`: the component with `core` replaced by
the placeholder. -/
def makeTemplate (component core : ByteArray) : Except String ByteArray :=
  replaceCoreModule component core ⟨placeholderModule.toArray⟩

/-- `sections(bytes)`: the sections after the header, or the message it
throws. -/
def sectionsOf (c : List UInt8) : Except String (List Section) :=
  if !isComponentHeader c then .error notAComponent else
  match parseSections (c.drop 8) with
  | none => .error notAComponent
  | some secs => .ok secs

/-- `extractCore(component, template)` on lists of bytes: the template's
first core module that starts with the placeholder gives the index among
core modules and the length of the suffix after the placeholder; the core is
the component's core module at that index without that suffix
(`c.slice(start, end - suffixLength)`, empty when the end comes first). A
component with fewer core modules makes `main` undefined: the JavaScript
throws a `TypeError` reading `main.start`. -/
def extractCoreL (c t : List UInt8) : Except String (List UInt8) := do
  let modules := (← sectionsOf t).filter (·.id == 1)
  match modules.findIdx? (fun s => placeholderModule.isPrefixOf s.body) with
  | none => .error "The component template has no placeholder module"
  | some index =>
    let suffixLength := (modules.getD index default).body.length - placeholderModule.length
    match ((← sectionsOf c).filter (·.id == 1))[index]? with
    | none => .error "Cannot read properties of undefined (reading 'start')"
    | some main => .ok (main.body.take (main.body.length - suffixLength))

/-- `extractCore(component, template)`, or the message it throws. -/
def extractCore (component template : ByteArray) : Except String ByteArray :=
  (extractCoreL component.data.toList template.data.toList).map fun l => ⟨l.toArray⟩

/-- The UTF-8 bytes of `component-type`. -/
def componentTypeBytes : List UInt8 := [99, 111, 109, 112, 111, 110, 101, 110, 116, 45, 116, 121, 112, 101]

/-- The loop of `withoutComponentType`, from a section's id byte: each
section's bytes (`module.subarray(at, start + size)`, clamped) unless it is
a custom section whose name (read from its payload, not clamped to the
section) starts with `component-type`. -/
def keepSections : List UInt8 → List UInt8
  | [] => []
  | id :: r =>
    let p := readLebJS r
    let payload := r.drop p.2
    let n := readLebJS payload
    let drop := id == 0 && componentTypeBytes.isPrefixOf ((payload.drop n.2).take n.1)
    (if drop then [] else id :: r.take (p.2 + p.1)) ++ keepSections (r.drop (p.2 + p.1))
termination_by l => l.length
decreasing_by simp only [List.length_drop, List.length_cons]; omega

/-- `withoutComponentType(module)`: its first eight bytes, then every section
but the `component-type…` custom sections. -/
def withoutComponentType (m : ByteArray) : ByteArray :=
  ⟨(m.data.toList.take 8 ++ keepSections (m.data.toList.drop 8)).toArray⟩

end Lasm.Cli
