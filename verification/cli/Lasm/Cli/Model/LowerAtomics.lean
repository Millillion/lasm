/-
# src/wasi/lower-atomics.mjs, in Lean: `lowerAtomics`, `moduleImports`, `keepExports`

A model of the JavaScript, written to mirror it statement for statement,
and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow).

| JavaScript (src/wasi/lower-atomics.mjs) | Lean |
| --- | --- |
| `class Reader` (`byte`, `u32`, `u64`, `skipLeb`, `slice`) over a buffer | `Rd` (a state monad over the position, with the buffer read-only): `byte`, `u32`, `u64`, `skipLeb`, `slice`; `peek` is `bytes[r.at]` |
| `u32(value)`, `s64(value)`, `vector(items)` | `encU32`, `encS64`, `vector` |
| `plain`, `widths`, `operations`, `rmwNames` | the definitions of the same names |
| `limits`, `heapType`, `valueType`, `blockType`, `memarg`, `memargOffset`, `skipInstruction` | the functions of the same names |
| `lowerAtomics(input)` | `lowerAtomics` (the bodies, `lowerBody`; the helpers, `Helpers`) |
| `moduleImports(input)` | `moduleImports` |
| `keepExports(input, keep)` | `keepExports` |

A thrown `Error` is `.error` with its message. Two throws are V8's own: a
module with a code section and no type or function section reads
`typeSection.body` of `undefined` (`TypeError: Cannot read properties of
undefined (reading 'body')`). `u32` accumulates in a JavaScript number,
exact below 2^53; here a `Nat` (a larger count or size runs past the end
of any module and throws the same). `TextDecoder` decodes import names
with replacement characters (`String.fromUTF8!`-like decoding is
`decodeUtf8`, given as a parameter of `moduleImports`, the runner's
`TextDecoder`).
-/

namespace Lasm.Cli.LowerAtomics

/-- The reader's state: the buffer and the position (`r.at`). -/
abbrev Rd := StateT Nat (ReaderT ByteArray (Except String))

def unexpectedEnd : String := "Unexpected end of WebAssembly module"

/-- `bytes[r.at]`, `undefined` past the end. -/
def peek : Rd (Option UInt8) := do
  let b ← read; let pos ← get
  return b[pos]?

/-- `r.byte()`. -/
def byte : Rd UInt8 := do
  let b ← read; let pos ← get
  match b[pos]? with
  | some x => set (pos + 1); return x
  | none => throw unexpectedEnd

/-- The LEB loop of `u32` and `u64`: low seven bits first. `fuel` bounds the
bytes left (each step reads one, and past the end `byte` throws). -/
def lebLoop : Nat → Nat → Nat → Rd Nat
  | 0, _, _ => throw unexpectedEnd
  | fuel + 1, shift, acc => do
    let b ← byte
    let acc := acc + (b.toNat % 128) * 2 ^ shift
    if b.toNat ≥ 128 then lebLoop fuel (shift + 7) acc else return acc

/-- `r.u32()` and `r.u64()`. -/
def leb : Rd Nat := do
  let b ← read; let pos ← get
  lebLoop (b.size - pos + 1) 0 0

/-- `r.skipLeb()`. -/
def skipLeb : Rd Unit := do let _ ← leb

/-- `r.slice(n)`. -/
def slice (n : Nat) : Rd ByteArray := do
  let b ← read; let pos ← get
  if pos + n > b.size then throw unexpectedEnd
  set (pos + n)
  return b.extract pos (pos + n)

/-- `u32(value)`: minimal unsigned LEB128. -/
def encU32 (n : Nat) : List UInt8 :=
  if n < 128 then [n.toUInt8] else (n % 128 + 128).toUInt8 :: encU32 (n / 128)
termination_by n
decreasing_by omega

/-- `s64(value)` of a non-negative value: minimal signed LEB128. -/
def encS64 (n : Nat) : List UInt8 :=
  if n < 64 then [n.toUInt8] else (n % 128 + 128).toUInt8 :: encS64 (n / 128)
termination_by n
decreasing_by omega

/-- `vector(items)`. -/
def vector (items : List (List UInt8)) : List UInt8 := encU32 items.length ++ items.flatten

/-- `limits(r)`. -/
def limits : Rd Unit := do
  let flags ← byte
  if flags.toNat &&& 4 ≠ 0 then
    let _ ← leb; if flags.toNat &&& 1 ≠ 0 then let _ ← leb
  else
    let _ ← leb; if flags.toNat &&& 1 ≠ 0 then let _ ← leb

/-- `heapType(r)`. -/
def heapType : Rd Unit := do
  match ← peek with
  | some b => if (0x69 ≤ b ∧ b ≤ 0x74) ∨ b = 0x40 then modify (· + 1) else let _ ← leb
  | none => let _ ← leb

/-- `valueType(r)`. -/
def valueType : Rd Unit := do
  let b ← byte
  if b = 0x63 ∨ b = 0x64 then heapType

/-- `blockType(r)`. -/
def blockType : Rd Unit := do
  match ← peek with
  | some b =>
    if b = 0x40 ∨ (0x7b ≤ b ∧ b ≤ 0x7f) ∨ b = 0x70 ∨ b = 0x6f then modify (· + 1)
    else if b = 0x63 ∨ b = 0x64 then do modify (· + 1); heapType
    else let _ ← leb
  | none => let _ ← leb

/-- `memarg(r)`. -/
def memarg : Rd Unit := do
  let align ← leb
  if align &&& 0x40 ≠ 0 then let _ ← leb
  let _ ← leb

/-- `n` times. -/
def times (n : Nat) (f : Rd Unit) : Rd Unit := do
  for _ in [0:n] do f

/-- Lower-case hexadecimal without padding (`op.toString(16)`). -/
def hexOf (n : Nat) : String := String.ofList (Nat.toDigits 16 n)

/-- `skipInstruction(r, op)`. -/
def skipInstruction (op : Nat) : Rd Unit := do
  if op ≤ 0x01 ∨ op = 0x05 ∨ op = 0x0b ∨ op = 0x0f ∨ op = 0x1a ∨ op = 0x1b ∨ (0x45 ≤ op ∧ op ≤ 0xc4) ∨ op = 0xd1 ∨ op = 0xd3 ∨ op = 0xd4 then
    return
  if op = 0x02 ∨ op = 0x03 ∨ op = 0x04 ∨ op = 0x06 then blockType
  else if op ∈ [0x07, 0x08, 0x09, 0x0c, 0x0d, 0x10, 0x12, 0x14, 0x15, 0x18, 0xd2, 0xd5, 0xd6, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26] then
    let _ ← leb
  else if op = 0x19 ∨ op = 0x0a then return
  else if op = 0x0e then do times (← leb) (do let _ ← leb); let _ ← leb
  else if op = 0x11 ∨ op = 0x13 then do let _ ← leb; let _ ← leb
  else if op = 0x1c then times (← leb) valueType
  else if op = 0x1f then do
    blockType
    times (← leb) do
      let kind ← byte
      if kind < 2 then let _ ← leb
      let _ ← leb
  else if op = 0x3f ∨ op = 0x40 then let _ ← leb
  else if op = 0x41 ∨ op = 0x42 then skipLeb
  else if op = 0x43 then let _ ← slice 4
  else if op = 0x44 then let _ ← slice 8
  else if op = 0xd0 then heapType
  else if op = 0xfc then do
    let sub ← leb
    if sub ≤ 7 then return
    if sub = 8 ∨ sub = 10 ∨ sub = 12 ∨ sub = 14 then do let _ ← leb; let _ ← leb
    else if sub = 9 ∨ sub = 11 ∨ sub = 13 ∨ (15 ≤ sub ∧ sub ≤ 17) then let _ ← leb
    else throw s!"Unknown instruction 0xfc {sub}"
  else if 0x28 ≤ op ∧ op ≤ 0x3e then memarg
  else throw s!"Unsupported WebAssembly instruction 0x{hexOf op} (SIMD and GC instructions are not expected in Lasm programs)"

/-- Runs a reader on a buffer from a position. -/
def run {α} (x : Rd α) (b : ByteArray) (pos : Nat) : Except String (α × Nat) := (x.run pos).run b

/-- `memargOffset(bytes)`: the offset of a memarg's bytes. -/
def memargOffset (m : ByteArray) : Except String Nat :=
  (run (do
    let align ← leb
    if align &&& 0x40 ≠ 0 then let _ ← leb
    leb) m 0).map (·.1)

def I32 : UInt8 := 0x7f
def I64 : UInt8 := 0x7e

/-- `plain`: atomic loads and stores and their plain counterparts. -/
def plain (sub : Nat) : Option UInt8 :=
  if 0x10 ≤ sub ∧ sub ≤ 0x1d then
    [0x28, 0x29, 0x2d, 0x2f, 0x31, 0x33, 0x35, 0x36, 0x37, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e][sub - 0x10]?
  else none

/-- `widths`: [value type, plain load, plain store, mask for compare-exchange]. -/
def widths : List (UInt8 × UInt8 × UInt8 × Option Nat) :=
  [(I32, 0x28, 0x36, none), (I64, 0x29, 0x37, none), (I32, 0x2d, 0x3a, some 0xff), (I32, 0x2f, 0x3b, some 0xffff),
   (I64, 0x31, 0x3c, some 0xff), (I64, 0x33, 0x3d, some 0xffff), (I64, 0x35, 0x3e, some 0xffffffff)]

/-- `operations[name][type === I32 ? 0 : 1]`. -/
def operation (name : String) (i32 : Bool) : UInt8 :=
  match name with
  | "add" => if i32 then 0x6a else 0x7c
  | "sub" => if i32 then 0x6b else 0x7d
  | "and" => if i32 then 0x71 else 0x83
  | "or" => if i32 then 0x72 else 0x84
  | _ => if i32 then 0x73 else 0x85

def rmwNames : List String := ["add", "sub", "and", "or", "xor", "xchg", "cmpxchg"]

/-- A helper appended on demand (`helpers`' values): its index, type, locals and code. -/
structure Helper where
  key : String
  index : Nat
  type : Nat
  locals : List (Nat × UInt8)
  code : List UInt8

/-- The state of the lowering: the helpers in insertion order and the new
types (`newTypes`, each its encoding), with the module's fixed numbers. -/
structure Helpers where
  helpers : List Helper := []
  newTypes : List (List UInt8) := []

structure Fixed where
  address : UInt8
  importedFunctions : Nat
  definedCount : Nat
  typeCount : Nat

/-- `typeOf(params, results)`. -/
def typeOf (fx : Fixed) (hs : Helpers) (params results : List UInt8) : Helpers × Nat :=
  let encoded := [0x60] ++ vector (params.map ([·])) ++ vector (results.map ([·]))
  match hs.newTypes.idxOf? encoded with
  | some i => (hs, fx.typeCount + i)
  | none => ({ hs with newTypes := hs.newTypes ++ [encoded] }, fx.typeCount + hs.newTypes.length)

/-- `helper(key, params, results, locals, code)`. -/
def helper (fx : Fixed) (hs : Helpers) (key : String) (params results : List UInt8) (locals : List (Nat × UInt8))
    (code : List UInt8) : Helpers × Nat :=
  match hs.helpers.find? (·.key == key) with
  | some h => (hs, h.index)
  | none =>
    let index := fx.importedFunctions + fx.definedCount + hs.helpers.length
    let (hs, type) := typeOf fx hs params results
    ({ hs with helpers := hs.helpers ++ [⟨key, index, type, locals, code⟩] }, index)

/-- `effective(offsetLocal)`. -/
def effective (fx : Fixed) (offsetLocal : UInt8) : List UInt8 :=
  [0x20, 0, 0x20, offsetLocal, if fx.address = I64 then 0x7c else 0x6a, 0x21, 0]

/-- `rmwHelper(name, width)`. -/
def rmwHelper (fx : Fixed) (hs : Helpers) (name : String) (width : Nat) : Helpers × Nat :=
  let (type, load, store, mask) := widths[width]!
  let address := fx.address
  if name = "cmpxchg" then
    helper fx hs s!"cmpxchg{width}" [address, type, type, address] [type] [(1, type)] (
      effective fx 3 ++ [0x20, 0, load, 0, 0, 0x21, 4,
      0x20, 4, 0x20, 1] ++ (match mask with
        | none => []
        | some m => if type = I32 then [0x41] ++ encS64 m ++ [0x71] else [0x42] ++ encS64 m ++ [0x83]) ++
      [if type = I32 then 0x46 else 0x51, 0x04, 0x40, 0x20, 0, 0x20, 2, store, 0, 0, 0x0b, 0x20, 4])
  else
    let update := if name = "xchg" then [0x20, 1] else [0x20, 3, 0x20, 1, operation name (type = I32)]
    helper fx hs s!"{name}{width}" [address, type, address] [type] [(1, type)] (
      effective fx 2 ++ [0x20, 0, load, 0, 0, 0x21, 3, 0x20, 0] ++ update ++ [store, 0, 0, 0x20, 3])

/-- The address-typed constant of an offset: `address === I64 ? 0x42 : 0x41, ...s64(offset)`. -/
def pushOffset (fx : Fixed) (offset : Nat) : List UInt8 :=
  (if fx.address = I64 then 0x42 else 0x41) :: encS64 offset

/-- One atomic instruction after `0xfe sub` and its memarg (`memargBytes`):
its replacement, with the helpers. -/
def lowerAtomic (fx : Fixed) (hs : Helpers) (sub : Nat) (memargBytes : ByteArray) (offset : Nat) :
    Except String (Helpers × List UInt8) :=
  match plain sub with
  | some p => .ok (hs, p :: memargBytes.toList)
  | none =>
    if 0x1e ≤ sub ∧ sub ≤ 0x4e then
      let (hs, idx) := rmwHelper fx hs rmwNames[(sub - 0x1e) / 7]! ((sub - 0x1e) % 7)
      .ok (hs, pushOffset fx offset ++ 0x10 :: encU32 idx)
    else if sub = 0x00 then
      let (hs, idx) := helper fx hs "notify" [fx.address, I32, fx.address] [I32] [] [0x41, 0]
      .ok (hs, pushOffset fx offset ++ 0x10 :: encU32 idx)
    else if sub = 0x01 ∨ sub = 0x02 then
      let type := if sub = 0x01 then I32 else I64
      let (hs, idx) := helper fx hs s!"wait{type.toNat}" [fx.address, type, I64, fx.address] [I32] [] [0x00]
      .ok (hs, pushOffset fx offset ++ 0x10 :: encU32 idx)
    else .error s!"Unknown atomic instruction 0xfe {sub}"

/-- The loop over a body's instructions (`while (r.at < end)`): the
replacement so far (`out`), the position copied up to (`copied`), whether
anything changed. `code` is the code section's body. -/
def instrLoop (fx : Fixed) (code : ByteArray) (end_ : Nat) :
    Nat → Helpers → List UInt8 → Nat → Bool → Rd (Helpers × List UInt8 × Nat × Bool)
  | 0, hs, out, copied, changed => return (hs, out, copied, changed)
  | fuel + 1, hs, out, copied, changed => do
    let pos ← get
    if pos ≥ end_ then return (hs, out, copied, changed)
    let op ← byte
    if op ≠ 0xfe then
      skipInstruction op.toNat
      instrLoop fx code end_ fuel hs out copied changed
    else
      let sub ← leb
      let out := out ++ (code.extract copied pos).toList
      if sub = 0x03 then
        let _ ← byte
        instrLoop fx code end_ fuel hs out (← get) true
      else
        let start ← get
        memarg
        let memargBytes := code.extract start (← get)
        let offset ← match memargOffset memargBytes with
          | .ok o => pure o
          | .error e => throw e
        match lowerAtomic fx hs sub memargBytes offset with
        | .ok (hs, rep) => instrLoop fx code end_ fuel hs (out ++ rep) (← get) true
        | .error e => throw e

/-- One function body pos the code reader's position: the rewritten body. -/
def lowerBody (fx : Fixed) (code : ByteArray) (hs : Helpers) : Rd (Helpers × List UInt8 × Bool) := do
  let size ← leb
  let pos ← get
  let end_ := pos + size
  let start := pos
  times (← leb) (do let _ ← leb; valueType)
  let afterLocals ← get
  let out := (code.extract start afterLocals).toList
  let (hs, out, copied, changed) ← instrLoop fx code end_ (code.size + 1) hs out afterLocals false
  let out := out ++ (code.extract copied end_).toList
  set end_
  return (hs, out, changed)

/-- The sections after the header: id and body. -/
def readSections (fuel : Nat) : Rd (List (UInt8 × ByteArray)) := do
  match fuel with
  | 0 => return []
  | fuel + 1 =>
    let b ← read
    if (← get) ≥ b.size then return []
    let id ← byte
    let size ← leb
    let body ← slice size
    return (id, body) :: (← readSections fuel)

/-- One import entry after its names: its kind's description. Returns the kind. -/
def importDesc : Rd UInt8 := do
  let kind ← byte
  if kind = 0 then let _ ← leb
  else if kind = 1 then do let _ ← byte; limits
  else if kind = 2 then limits
  else if kind = 3 then do let _ ← byte; let _ ← byte
  else if kind = 4 then do let _ ← byte; let _ ← leb
  else throw s!"Unknown import kind {kind.toNat}"
  return kind

def undefinedBody : String := "Cannot read properties of undefined (reading 'body')"

/-- `lowerAtomics(input)`. -/
def lowerAtomics (bytes : ByteArray) : Except String ByteArray := do
  if !(bytes[0]? = some 0 ∧ bytes[1]? = some 0x61 ∧ bytes[2]? = some 0x73 ∧ bytes[3]? = some 0x6d ∧ bytes[4]? = some 1) then
    throw "Not a WebAssembly module"
  let (sections, _) ← run (readSections bytes.size) bytes 8
  let sectionOf := fun (id : UInt8) => (sections.find? (·.1 == id)).map (·.2)
  let mut address := I32
  if let some m := sectionOf 5 then
    let (count, pos) ← run leb m 0
    if count ≠ 0 then
      let (flags, _) ← run byte m pos
      if flags.toNat &&& 4 ≠ 0 then address := I64
  let some codeSection := sectionOf 10 | return bytes
  let mut importedFunctions := 0
  if let some imports := sectionOf 2 then
    let (n, pos) ← run leb imports 0
    let (k, _) ← run (do
      let mut k := 0
      for _ in [0:n] do
        let a ← leb; let _ ← slice a
        let b ← leb; let _ ← slice b
        let kind ← importDesc
        if kind = 0 then k := k + 1
      return k) imports pos
    importedFunctions := k
  let some typeSection := sectionOf 1 | throw undefinedBody
  let (typeCount, typesAt) ← run leb typeSection 0
  let some functionSection := sectionOf 3 | throw undefinedBody
  let (definedCount, fat) ← run leb functionSection 0
  let (typeIndices, _) ← run (do
    let mut out := #[]
    for _ in [0:definedCount] do out := out.push (← leb)
    return out.toList) functionSection fat
  let fx : Fixed := ⟨address, importedFunctions, definedCount, typeCount⟩
  let (bodies, codeAt) ← run leb codeSection 0
  if bodies ≠ definedCount then throw "Function and code section counts differ"
  let ((hs, rewritten, changed), _) ← run (do
    let mut hs : Helpers := {}
    let mut rewritten : Array (List UInt8) := #[]
    let mut changed := false
    for _ in [0:bodies] do
      let (hs', body, c) ← lowerBody fx codeSection hs
      hs := hs'; rewritten := rewritten.push body; changed := changed || c
    return (hs, rewritten.toList, changed)) codeSection codeAt
  if !changed then return bytes
  let helperBodies := hs.helpers.map fun h =>
    vector (h.locals.map fun (n, t) => encU32 n ++ [t]) ++ h.code ++ [0x0b]
  let all := rewritten ++ helperBodies
  let codeBytes := encU32 all.length ++ (all.map fun b => encU32 b.length ++ b).flatten
  let typeBytes := encU32 (typeCount + hs.newTypes.length) ++ (typeSection.extract typesAt typeSection.size).toList ++ hs.newTypes.flatten
  let functionBytes := encU32 (definedCount + hs.helpers.length) ++ (typeIndices.map encU32).flatten ++ (hs.helpers.map (encU32 ·.type)).flatten
  let replaced := fun (id : UInt8) (body : ByteArray) =>
    if id = 1 then ByteArray.mk typeBytes.toArray else if id = 3 then ByteArray.mk functionBytes.toArray
    else if id = 10 then ByteArray.mk codeBytes.toArray else body
  let out := (bytes.extract 0 8).toList ++ (sections.map fun (id, body) =>
    let body := replaced id body
    id :: encU32 body.size ++ body.toList).flatten
  return ByteArray.mk out.toArray

/-- `moduleImports(input)`: each import's module, name and kind; names are
decoded by `decode` (`TextDecoder`). -/
def moduleImports (decode : ByteArray → String) (bytes : ByteArray) : Except String (List (String × String × Nat)) := do
  let (out, _) ← run (go bytes.size) bytes 8
  return out
where
  go : Nat → Rd (List (String × String × Nat))
    | 0 => return []
    | fuel + 1 => do
      let b ← read
      if (← get) ≥ b.size then return []
      let id ← byte
      let size ← leb
      let end_ := (← get) + size
      let mut found := []
      if id = 2 then
        let n ← leb
        let mut acc := #[]
        for _ in [0:n] do
          let module := decode (← slice (← leb))
          let name := decode (← slice (← leb))
          let kind ← importDesc
          acc := acc.push (module, name, kind.toNat)
        found := acc.toList
      set end_
      return found ++ (← go fuel)

/-- `keepExports(input, keep)`. -/
def keepExports (decode : ByteArray → String) (keep : String → Bool) (bytes : ByteArray) : Except String ByteArray := do
  let (out, _) ← run (go bytes.size) bytes 8
  return ByteArray.mk ((bytes.extract 0 8).toList ++ out).toArray
where
  go : Nat → Rd (List UInt8)
    | 0 => return []
    | fuel + 1 => do
      let b ← read
      if (← get) ≥ b.size then return []
      let id ← byte
      let size ← leb
      let start ← get
      let end_ := start + size
      if id ≠ 7 then
        set end_
        return id :: encU32 size ++ (b.extract start end_).toList ++ (← go fuel)
      let n ← leb
      let mut kept := #[]
      for _ in [0:n] do
        let nameStart ← get
        let length ← leb
        let name := decode (← slice length)
        let _ ← byte; let _ ← leb
        if keep name then kept := kept.push (b.extract nameStart (← get)).toList
      let body := encU32 kept.size ++ kept.toList.flatten
      set end_
      return 7 :: encU32 body.length ++ body ++ (← go fuel)

end Lasm.Cli.LowerAtomics
