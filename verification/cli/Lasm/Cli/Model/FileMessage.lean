/-
# src/native-file-message.mjs, in Lean: `encodeFileMessage`, `decodeFileMessage`

A model of the JavaScript, written to mirror it statement for statement,
and checked against it on generated values by
test/models/cli-differential.mjs (the `cli-models` workflow).

| JavaScript (src/native-file-message.mjs) | Lean |
| --- | --- |
| a value: a primitive, an `ArrayBuffer` or `SharedArrayBuffer`, a `Uint8Array`, an array, an object | `Value` |
| the message: tagged `buffer`, `bytes`, `array`, `record` containers | `Message` |
| an `ArrayBuffer` in the message: the value's own, or a copy | `Ref` |
| `encode(value)` with the `transfers` Set | `encode` |
| `encodeFileMessage(value, { move })` | `encodeFileMessage` |
| `decodeFileMessage(value)` | `decodeFileMessage` |

Reading guide. Buffers are named by an id; a `Uint8Array` by its buffer,
whether that is shared, whether the view covers it exactly (`byteOffset`
0 and the buffer's `byteLength`) and its length. A copy (`new
Uint8Array(value)`) is a fresh buffer, numbered in the order the walk makes
them. An object is read as `Object.entries` lists it. A primitive is kept
as the differential describes it. Decoding reads the message in the same
realm: a `bytes` container is a `Uint8Array` over its whole buffer.
-/

namespace Lasm.Cli.FileMessage

/-- A buffer in the message: the value's own (by id) or the `k`th copy. -/
inductive Ref where
  | own (id : Nat)
  | copy (k : Nat) (length : Nat)
deriving DecidableEq, Repr

inductive Value where
  | prim (desc : String)
  | buffer (id : Nat) (shared : Bool)
  | view (id : Nat) (shared : Bool) (whole : Bool) (length : Nat)
  | array (items : List Value)
  | record (entries : List (String × Value))
deriving Repr

inductive Message where
  | prim (desc : String)
  | buffer (ref : Ref) (shared : Bool)
  | bytes (ref : Ref)
  | array (items : List Message)
  | record (entries : List (String × Message))
deriving Repr

/-- The walk's state: copies made so far, and the transfer list (a Set, in
insertion order). -/
structure State where
  copies : Nat := 0
  transfers : List Ref := []

def State.add (s : State) (r : Ref) : State :=
  if r ∈ s.transfers then s else { s with transfers := s.transfers ++ [r] }

mutual
/-- `encode(value)`. -/
def encode (move : Bool) : Value → State → Message × State
  | .prim d, s => (.prim d, s)
  | .buffer id shared, s =>
    (.buffer (.own id) shared, if move && !shared then s.add (.own id) else s)
  | .view id shared whole length, s =>
    let (ref, s) := if whole && !shared then (Ref.own id, s) else (Ref.copy s.copies length, { s with copies := s.copies + 1 })
    (.bytes ref, if move then s.add ref else s)
  | .array items, s => let (ms, s) := encodeList move items s; (.array ms, s)
  | .record entries, s => let (es, s) := encodeEntries move entries s; (.record es, s)
def encodeList (move : Bool) : List Value → State → List Message × State
  | [], s => ([], s)
  | v :: vs, s =>
    let (m, s) := encode move v s
    let (ms, s) := encodeList move vs s
    (m :: ms, s)
def encodeEntries (move : Bool) : List (String × Value) → State → List (String × Message) × State
  | [], s => ([], s)
  | (k, v) :: es, s =>
    let (m, s) := encode move v s
    let (ms, s) := encodeEntries move es s
    ((k, m) :: ms, s)
end

/-- `encodeFileMessage(value, { move })`: the message and the transfer list. -/
def encodeFileMessage (move : Bool) (v : Value) : Message × List Ref :=
  let (m, s) := encode move v {}
  (m, s.transfers)

/-- What decoding gives: a primitive, a buffer, a `Uint8Array` over a whole
buffer, an array, a plain object. -/
inductive Decoded where
  | prim (desc : String)
  | buffer (ref : Ref) (shared : Bool)
  | bytes (ref : Ref)
  | array (items : List Decoded)
  | record (entries : List (String × Decoded))
deriving Repr

mutual
/-- `decodeFileMessage(value)` of a message (every container tagged, so it
never throws). -/
def decodeFileMessage : Message → Decoded
  | .prim d => .prim d
  | .buffer r sh => .buffer r sh
  | .bytes r => .bytes r
  | .array ms => .array (decodeList ms)
  | .record es => .record (decodeEntries es)
def decodeList : List Message → List Decoded
  | [] => []
  | m :: ms => decodeFileMessage m :: decodeList ms
def decodeEntries : List (String × Message) → List (String × Decoded)
  | [] => []
  | (k, m) :: es => (k, decodeFileMessage m) :: decodeEntries es
end

end Lasm.Cli.FileMessage
