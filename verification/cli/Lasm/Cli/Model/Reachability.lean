/-
# src/application-reachability.mjs, in Lean: `applicationLinkRequirements`

A model of the JavaScript, written to mirror it statement for statement,
and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow).

| JavaScript (src/application-reachability.mjs) | Lean |
| --- | --- |
| `\s`, `trim()`, `trimEnd()` (ECMAScript white space and line terminators) | `jsSpace`, `trim`, `trimEnd` |
| the row expression `/^\s*(?:[0-9a-f]+\|-)\s+[0-9a-f]+\s+[0-9a-f]+\s+(.+)$/` | `rowText` |
| the module-data expressions | `isModuleData` |
| the member expression `/(?:^\|[/\\])libleancpp\.a\(([^)]+)\):\((.+)\)$/` | `memberSection` |
| the section's independence (`.rodata`, initialization-free symbols, RTTI) | `independent` |
| `linkMapReader`'s `line` and `finish` | `readLine`, `finish` |
| `applicationLinkRequirements(map, { initializationFreeCppSymbols })` | `applicationLinkRequirements` |

Each regular expression is matched as a backtracking matcher would: the
row's tokens are maximal runs (white space is never a hex digit), and its
text is what follows the maximal white space, or (when nothing follows)
the run's last character; `.` matches anything but a line terminator.
`[...set].sort()` compares UTF-16 code units (`utf16Key`). A Lean `String`
holds Unicode scalar values, so the model covers maps without lone
surrogates. `readApplicationLinkRequirements` reads the same lines from a
stream (`readline`, which also drops a `\r` before `\n`);
`canSpecializeInitialization` is a list of audited runtimes, and the C
sources are constants.
-/

namespace Lasm.Cli.Reachability

/-- `\s`: ECMAScript's WhiteSpace and LineTerminator. -/
def jsSpace (c : Char) : Bool :=
  c = '\t' || c = '\n' || c = '\x0b' || c = '\x0c' || c = '\r' || c = ' ' || c = ' ' || c = ' ' ||
  (' ' ≤ c && c ≤ ' ') || c = ' ' || c = ' ' || c = ' ' || c = ' ' ||
  c = '　' || c = '﻿'

/-- A line terminator: what `.` does not match. -/
def lineTerminator (c : Char) : Bool := c = '\n' || c = '\r' || c = ' ' || c = ' '

/-- `/[0-9a-f]/`. -/
def lowerHex (c : Char) : Bool := ('0' ≤ c && c ≤ '9') || ('a' ≤ c && c ≤ 'f')

/-- `\w`. -/
def wordChar (c : Char) : Bool := c.isAlphanum || c = '_'

def trimEnd (s : List Char) : List Char := (s.reverse.dropWhile jsSpace).reverse
def trim (s : List Char) : List Char := trimEnd (s.dropWhile jsSpace)

/-- A nonempty maximal run of hex digits at the front, and the rest. -/
def hexToken (s : List Char) : Option (List Char) :=
  match s.span lowerHex with
  | ([], _) => none
  | (_, rest) => some rest

/-- At least one white space character, then the rest. -/
def spaces (s : List Char) : Option (List Char) :=
  match s with
  | c :: _ => if jsSpace c then some (s.dropWhile jsSpace) else none
  | [] => none

/-- `\s+(.+)$` on what follows the third token: the captured text. -/
def rowTail (s : List Char) : Option (List Char) :=
  match s with
  | c :: _ =>
    if !jsSpace c then none else
    let (run, rest) := s.span jsSpace
    if rest ≠ [] then (if rest.any lineTerminator then none else some rest)
    else match run.getLast? with
      | some last => if run.length ≥ 2 ∧ !lineTerminator last then some [last] else none
      | none => none
  | [] => none

/-- The row expression's capture, or `none` when the line is no row. -/
def rowText (line : List Char) : Option (List Char) := do
  let s := line.dropWhile jsSpace
  let s ← match hexToken s with
    | some rest => some rest
    | none => match s with
      | '-' :: rest => some rest
      | _ => none
  let s ← spaces s
  let s ← hexToken s
  let s ← spaces s
  let s ← hexToken s
  rowTail s

/-- `/^lean_(?:read|write)_module_data(?:_\w+)?$/` or
`/^l_Lean_(?:findSysroot|initSearchPath)(?:___\w+)?$/`. -/
def isModuleData (t : List Char) : Bool :=
  let suffix (pre : String) (sep : String) :=
    pre.toList.isPrefixOf t &&
      (let rest := t.drop pre.length
       rest = [] || (sep.toList.isPrefixOf rest && rest.length > sep.length && (rest.drop sep.length).all wordChar))
  suffix "lean_read_module_data" "_" || suffix "lean_write_module_data" "_" ||
    suffix "l_Lean_findSysroot" "___" || suffix "l_Lean_initSearchPath" "___"

/-- The member expression from one start: `libleancpp.a(`, a member without
`)`, `):(`, and a section up to a final `)`. -/
def memberAt (s : List Char) : Option (List Char × List Char) :=
  if "libleancpp.a(".toList.isPrefixOf s then
    let rest := s.drop 13
    let (member, after) := rest.span (· ≠ ')')
    if member = [] then none
    else if "):(".toList.isPrefixOf after then
      let tail := after.drop 3
      if tail.getLast? = some ')' ∧ tail.length ≥ 2 ∧ !(tail.dropLast.any lineTerminator) then
        some (member, tail.dropLast)
      else none
    else none
  else none

/-- `/(?:^|[/\\])libleancpp\.a\(([^)]+)\):\((.+)\)$/.exec(text)`: the first
start (the beginning, or after `/` or `\`) where the rest matches. -/
def memberSection (t : List Char) : Option (List Char × List Char) :=
  (memberAt t).or (go t)
where
  go : List Char → Option (List Char × List Char)
    | [] => none
    | c :: cs => (if c = '/' || c = '\\' then memberAt cs else none).or (go cs)

/-- `text.includes('libleancpp.a(')`. -/
def includesLibleancpp (t : List Char) : Bool :=
  go t
where
  go : List Char → Bool
    | [] => false
    | c :: cs => "libleancpp.a(".toList.isPrefixOf (c :: cs) || go cs

/-- A section that needs no compiler state: read-only data (`.rodata` or
`.rodata.…`), a function section of an initialization-free symbol, or the
RTTI or vtable (`.data.rel.ro._ZTI…`/`_ZTV…`) of one. -/
def independent (initFree : List Char → Bool) (sec : List Char) : Bool :=
  let rodata := ".rodata".toList.isPrefixOf sec &&
    (sec.length = 7 || (sec.drop 7).head? == some '.')
  let rtti := if ".data.rel.ro.".toList.isPrefixOf sec then
      let name := sec.drop 13
      ("_ZTI".toList.isPrefixOf name || "_ZTV".toList.isPrefixOf name) && name.length > 4 &&
        (name.drop 4).all wordChar && initFree name
    else false
  rodata || (sec.head? != some '.' && initFree sec) || rtti

def dynamicSymbols : List (List Char) :=
  ["lasm_lookup_lean_symbol", "dlopen", "dlsym", "dlvsym", "emscripten_dlopen", "emscripten_dlopen_promise"].map String.toList
def entrypoints : List (List Char) := ["main", "__main_argc_argv", "__main_void"].map String.toList

/-- The reader's state: header and CODE seen, symbols, C++ members, module data. -/
structure Reader where
  header : Bool := false
  code : Bool := false
  symbols : List (List Char) := []
  cxx : List (List Char) := []
  metadata : List (List Char) := []

def headerLine : List Char := "Addr      Off     Size Out     In      Symbol".toList

/-- A row's text noted: CODE, an entry point or loader, a module-data API. -/
def noteRow (r : Reader) (t : List Char) : Reader :=
  { r with code := if t = "CODE".toList then true else r.code,
           symbols := if dynamicSymbols.contains t || entrypoints.contains t then r.symbols ++ [t] else r.symbols,
           metadata := if isModuleData t then r.metadata ++ [t] else r.metadata }

/-- `line(line)`: the next state, or the message thrown. -/
def readLine (initFree : List Char → Bool) (r : Reader) (line : List Char) : Except String Reader :=
  if !r.header then
    if trim line ≠ headerLine then .error "Unrecognized application linker map header"
    else .ok { r with header := true }
  else if trim line = [] then .ok r
  else match rowText line with
    | none => .error "Unrecognized application linker map row"
    | some t =>
      let r := noteRow r t
      match memberSection t with
      | some (member, sec) =>
        .ok (if independent initFree sec then r else { r with cxx := r.cxx ++ [member] })
      | none => if includesLibleancpp t then .error "Unrecognized C++ section in application linker map" else .ok r

/-- A character's UTF-16 code units. -/
def utf16Key (s : List Char) : List Nat :=
  s.flatMap fun c => if c.toNat < 0x10000 then [c.toNat]
    else [0xD800 + (c.toNat - 0x10000) / 0x400, 0xDC00 + (c.toNat - 0x10000) % 0x400]

/-- Lexicographic order of code unit lists. -/
def unitsLt : List Nat → List Nat → Bool
  | [], _ :: _ => true
  | a :: as, b :: bs => a < b || (a = b && unitsLt as bs)
  | _, _ => false

/-- `[...new Set(l)].sort()`. -/
def sortedUnique (l : List (List Char)) : List (List Char) :=
  (l.eraseDups).mergeSort fun a b => !unitsLt (utf16Key b) (utf16Key a)

/-- What `finish()` returns. -/
structure Requirements where
  static : Bool
  dynamic : List (List Char)
  cxxRuntime : List (List Char)
  moduleData : List (List Char)
  requiresModuleData : Bool
deriving DecidableEq, Repr

/-- `finish()`. -/
def finish (r : Reader) : Except String Requirements :=
  if !r.header || !r.code || !(entrypoints.any r.symbols.contains) then
    .error "Application linker map has no executable entry point"
  else
    let dynamic := dynamicSymbols.filter r.symbols.contains
    let moduleData := sortedUnique r.metadata
    let cxxRuntime := sortedUnique r.cxx
    .ok { static := dynamic.isEmpty && cxxRuntime.isEmpty, dynamic, cxxRuntime, moduleData,
          requiresModuleData := !dynamic.isEmpty || !cxxRuntime.isEmpty || !moduleData.isEmpty }

/-- `applicationLinkRequirements(map, { initializationFreeCppSymbols })`. -/
def applicationLinkRequirements (initFree : List Char → Bool) (map : List Char) : Except String Requirements := do
  let r ← ((trimEnd map).splitOn '\n').foldlM (readLine initFree) {}
  finish r

end Lasm.Cli.Reachability
