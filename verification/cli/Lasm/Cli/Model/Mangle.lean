/-
# src/application-diagnosis.mjs, in Lean: `mangleName`, `demangleName`, `initializerModule`

A model of the JavaScript, written to mirror it statement for statement,
and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow). The
JavaScript ports Lean 4.35's `Name.mangle n ""` and `Name.demangle`
(Lean/Compiler/NameMangling.lean) to dotted names; the differential also
checks the JavaScript against those two functions themselves.

| JavaScript (src/application-diagnosis.mjs) | Lean |
| --- | --- |
| `numeral` (`/^(?:0\|[1-9][0-9]*)$/`) | `isNumeral` |
| one character of `escapeComponent` | `mangleChar` (`hexDigits`) |
| `escapeComponent(part)` | `escapeComponent` |
| `ambiguous(mangled)` | `ambiguous` (`escapeDigits`, `isLowerHex`) |
| `mangleName(name)`: one component, then the loop | `manglePart`, `mangleParts` |
| `demangleName(text)`'s loop (`mode`, `acc`, `count`) | `demangleGo` |
| `String(BigInt(acc))` | `stripZeros` |
| `parseInt(run, 16)`, `charOf(code)` | `hexValue`, `Char.ofNat` |
| `demangleName(text)` | `demangleNameModel` |
| `initializerModule(symbol)` | `initializerModuleModel` |

`[...text]` reads code points; a Lean `String` holds Unicode scalar values,
so the model covers the JavaScript strings without lone surrogates (the
differential draws none). `charOf` gives `'\0'` for a code that is not a
scalar value, as `Char.ofNat` does. The regular expression
`/^(?:runtime_)?initialize_(.+)$/` is `initializerStem`: `.` matches any
character but the line terminators.
-/

namespace Lasm.Cli.Mangle

/-- `numeral.test(part)`: `0`, or decimal digits not starting with `0`. -/
def isNumeral : List Char → Bool
  | ['0'] => true
  | c :: cs => c != '0' && c.isDigit && cs.all Char.isDigit
  | [] => false

/-- The digit of a value below 16, lower case. -/
def hexChar (d : Nat) : Char := if d < 10 then Char.ofNat (48 + d) else Char.ofNat (87 + d)

/-- `code.toString(16).padStart(k, '0')` for a code below 16^k. -/
def hexDigits : Nat → Nat → List Char
  | 0, _ => []
  | k + 1, v => hexDigits k (v / 16) ++ [hexChar (v % 16)]

/-- What `escapeComponent` writes for one character. -/
def mangleChar (c : Char) : List Char :=
  if c.isAlphanum then [c]
  else if c = '_' then ['_', '_']
  else if c.toNat < 0x100 then '_' :: 'x' :: hexDigits 2 c.toNat
  else if c.toNat < 0x10000 then '_' :: 'u' :: hexDigits 4 c.toNat
  else '_' :: 'U' :: hexDigits 8 c.toNat

/-- `escapeComponent(part)`. -/
def escapeComponent (part : List Char) : List Char := part.flatMap mangleChar

/-- `hexDigits[c]`: the digits after an escape's letter. -/
def escapeDigits : Char → Option Nat
  | 'x' => some 2
  | 'u' => some 4
  | 'U' => some 8
  | _ => none

/-- `/^[0-9a-f]$/`. -/
def isLowerHex (c : Char) : Bool := c.isDigit || ('a' ≤ c && c ≤ 'f')

/-- Whether `k` characters follow and all are lower-case hex digits. -/
def hexRun (k : Nat) (cs : List Char) : Bool := (cs.take k).length == k && (cs.take k).all isLowerHex

/-- `ambiguous(mangled)`: after leading underscores, nothing, a digit, or an
escape's letter and its digits. -/
def ambiguous (m : List Char) : Bool :=
  match m.dropWhile (· == '_') with
  | [] => true
  | c :: rest => c.isDigit || match escapeDigits c with
    | some k => hexRun k rest
    | none => false

/-- One component of `mangleName`'s loop, after `previous` (none first). -/
def manglePart (previous : Option (List Char)) (part : List Char) : List Char :=
  if isNumeral part then
    match previous with
    | none => part ++ ['_']
    | some _ => '_' :: part ++ ['_']
  else
    let m := escapeComponent part
    match previous with
    | none => (if ambiguous m then ['0', '0'] else []) ++ m
    | some q => (if q.getLast? == some '_' || ambiguous m then ['_', '0', '0'] else ['_']) ++ m

/-- `mangleName`'s loop over the components. -/
def mangleParts : Option (List Char) → List (List Char) → List Char
  | _, [] => []
  | previous, p :: ps => manglePart previous p ++ mangleParts (some p) ps

/-- `mangleName(name)`. -/
def mangleNameModel (name : String) : String :=
  String.ofList (mangleParts none (name.toList.splitOn '.'))

/-- `String(BigInt(acc))` of decimal digits: leading zeros removed. -/
def stripZeros : List Char → List Char
  | '0' :: c :: cs => stripZeros (c :: cs)
  | cs => cs

/-- The value of hex digits, most significant first (`parseInt(run, 16)`). -/
def hexValue (cs : List Char) : Nat :=
  cs.foldl (fun n c => n * 16 + (if c.isDigit then c.toNat - 48 else c.toNat - 87)) 0

/-- `demangleName`'s `mode`. -/
inductive DemangleMode where
  | start
  | number
  | text
deriving DecidableEq, Repr

/-- `demangleName(text)`'s loop: the mode, the characters left, `acc`,
`count` and the components read. -/
def demangleGo : DemangleMode → List Char → List Char → Nat → List (List Char) → List (List Char)
  | .start, [], _, _, ps => ps
  | .start, c :: cs, _, _, ps =>
    if c.isDigit then
      if c = '0' ∧ cs.head? = some '0' then demangleGo .text cs.tail [] 0 ps
      else demangleGo .number cs [c] 0 ps
    else if c = '_' then demangleGo .text cs [] 1 ps
    else demangleGo .text cs [c] 0 ps
  | .number, [], acc, _, ps => ps ++ [stripZeros acc]
  | .number, c :: cs, acc, _, ps =>
    if c.isDigit then demangleGo .number cs (acc ++ [c]) 0 ps
    else if cs = [] then ps ++ [stripZeros acc]
    else demangleGo .start cs.tail [] 0 (ps ++ [stripZeros acc])
  | .text, [], acc, count, ps => ps ++ [acc ++ List.replicate (count / 2) '_']
  | .text, c :: cs, acc, count, ps =>
    if c = '_' then demangleGo .text cs acc (count + 1) ps
    else if count % 2 = 0 then demangleGo .text cs (acc ++ List.replicate (count / 2) '_' ++ [c]) 0 ps
    else if c.isDigit then
      if c = '0' ∧ cs.head? = some '0' then demangleGo .text cs.tail [] 0 (ps ++ [acc ++ List.replicate (count / 2) '_'])
      else demangleGo .number cs [c] 0 (ps ++ [acc ++ List.replicate (count / 2) '_'])
    else
      match escapeDigits c with
      | some k =>
        if hexRun k cs then
          demangleGo .text (cs.drop k) (acc ++ List.replicate (count / 2) '_' ++ [Char.ofNat (hexValue (cs.take k))]) 0 ps
        else demangleGo .text cs (List.replicate (count / 2) '_' ++ [c]) 0 (ps ++ [acc])
      | none => demangleGo .text cs (List.replicate (count / 2) '_' ++ [c]) 0 (ps ++ [acc])
termination_by _ cs => cs.length
decreasing_by all_goals simp_wf <;> omega

/-- `demangleName(text)`: the components joined by `.`. -/
def demangleNameModel (text : String) : String :=
  String.ofList (['.'].intercalate (demangleGo .start text.toList [] 0 []))

/-- Not a line terminator: what `.` matches. -/
def regexDot (c : Char) : Bool := !(c = '\n' || c = '\r' || c = ' ' || c = ' ')

/-- `/^(?:runtime_)?initialize_(.+)$/.exec(symbol)?.[1]`. -/
def initializerStem (symbol : List Char) : Option (List Char) :=
  let stem (s : List Char) := if s ≠ [] ∧ s.all regexDot then some s else none
  let plain (s : List Char) := if "initialize_".toList.isPrefixOf s then stem (s.drop 11) else none
  if "runtime_initialize_".toList.isPrefixOf symbol then
    (stem (symbol.drop 19)).or (plain symbol)
  else plain symbol

/-- `initializerModule(symbol)`: the demangled stem when mangling it gives
the stem back. -/
def initializerModuleModel (symbol : String) : Option String :=
  match initializerStem symbol.toList with
  | none => none
  | some stem =>
    let name := demangleNameModel (String.ofList stem)
    if (mangleNameModel name).toList = stem then some name else none

end Lasm.Cli.Mangle
