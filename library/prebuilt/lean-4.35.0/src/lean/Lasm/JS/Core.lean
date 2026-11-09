/-
Lasm.JS core: JavaScript values, conversions, calls, promises and callbacks for
Lean programs compiled by Lasm and run on Node.js. Every JavaScript operation
is a host call to Node's main thread (about 25–35 µs); see docs/JS_INTEROP.md.
-/
import Std.Data.HashMap
import Std.Async.Basic

namespace Lasm.JS
open Std.Async

/- Std.Async's `Async`, available after `open Lasm.JS`: Lean code that waits for
JavaScript (`callMethodAwait`, `Value.await`, `Async` bindings) without holding
a Lean thread. JavaScript calls Lean functions (`Function.ofFn`) in `Async`;
`IO` actions run in it unchanged. -/
export Std.Async (Async)

/-- A JavaScript value held by the host on Lean's behalf (any value: object,
function, promise, class instance or primitive). It is released when the Lean
object is freed. -/
opaque ValuePointed : NonemptyType
def Value : Type := ValuePointed.type
instance : Nonempty Value := ValuePointed.property

@[extern "lasm_js_value_of_handle"] private opaque valueOfHandle (handle : UInt32) : IO Value
@[extern "lasm_js_value_handle"] private opaque valueHandle (v : @& Value) : UInt32
@[extern "lasm_js_available"] private opaque available : Unit → Bool

/-- Whether this program runs under Lasm on Node.js (false when built natively). -/
def isAvailable : Bool := available ()

/-- JavaScript data as Lean sees it. `ref` is any value that is not plain data
(functions, promises, class instances, Map, Date, …); `description` says what it
is, for error messages. Converting a JavaScript value to `Data` copies plain
objects, arrays, strings, numbers, booleans, bigints and `Uint8Array`s. -/
inductive Data where
  | undefined
  | null
  | bool (b : Bool)
  | number (n : Float)
  | string (s : String)
  | bigint (i : Int)
  | bytes (b : ByteArray)
  | array (items : Array Data)
  | object (fields : Array (String × Data))
  | ref (value : Value) (description : String)
  deriving Inhabited

namespace Data

/-- A short description of a value, as used in type-mismatch errors. -/
partial def describe : Data → String
  | .undefined => "undefined"
  | .null => "null"
  | .bool b => s!"boolean {b}"
  | .number n => s!"number {if n.floor == n && n.abs < 1e15 then (if n < 0 then "-" else "") ++ toString n.abs.toUInt64 else toString n}"
  | .string s => s!"string {repr (if s.length > 60 then (s.take 57).toString ++ "..." else s)}"
  | .bigint i => s!"bigint {i}n"
  | .bytes b => s!"Uint8Array of length {b.size}"
  | .array xs => s!"array of length {xs.size}"
  | .object fs => s!"object \{{", ".intercalate (fs.toList.take 6 |>.map (·.1))}{if fs.size > 6 then ", …" else ""}}"
  | .ref _ d => if d.isEmpty then "JavaScript value (a reference)" else d

/-- The field `key` of an object (`undefined` when absent or not an object). -/
def field (d : Data) (key : String) : Data :=
  match d with
  | .object fs => (fs.find? (·.1 == key)).map (·.2) |>.getD .undefined
  | _ => .undefined

end Data

/-! Wire format shared with the hosts' JavaScript (src/node-js.mjs and
src/edge/edge-js.mjs), little endian. Proved (library/Lasm/JS/Spec.lean):
whatever `encode` accepts, `decodeWith` reads back as the same value, and
`encode` refuses exactly the values with a length that does not fit a u32. -/
namespace Wire

/-- The largest length the wire format carries: the lengths of strings, byte
arrays, arrays and objects travel as u32. -/
def maxLength : Nat := UInt32.size - 1

def pushU32 (b : ByteArray) (n : UInt32) : ByteArray :=
  b.push n.toUInt8 |>.push (n >>> 8).toUInt8 |>.push (n >>> 16).toUInt8 |>.push (n >>> 24).toUInt8
def pushU64 (b : ByteArray) (n : UInt64) : ByteArray :=
  b.push n.toUInt8 |>.push (n >>> 8).toUInt8 |>.push (n >>> 16).toUInt8 |>.push (n >>> 24).toUInt8
    |>.push (n >>> 32).toUInt8 |>.push (n >>> 40).toUInt8 |>.push (n >>> 48).toUInt8 |>.push (n >>> 56).toUInt8

/-- Appends the length `n` of `what` (`unit`s), or fails if it does not fit in
a u32: a larger length would wrap and the reader would misread everything
after it. -/
def pushLength (b : ByteArray) (n : Nat) (what unit : String) : Except String ByteArray :=
  if n ≤ maxLength then .ok (pushU32 b n.toUInt32)
  else .error s!"Lasm.JS: cannot pass {what} of {n} {unit} to JavaScript (lengths cross as 32-bit numbers, so at most {maxLength})"
def pushString (b : ByteArray) (s : String) (what := "a string") : Except String ByteArray := do
  return (← pushLength b s.utf8ByteSize what "bytes") ++ s.toUTF8

/-- Appends `d`, or fails if a string, byte array, array or object in it is
longer than `maxLength`. -/
def write (b : ByteArray) : Data → Except String ByteArray
  | .undefined => .ok (b.push 0)
  | .null => .ok (b.push 1)
  | .bool false => .ok (b.push 2)
  | .bool true => .ok (b.push 3)
  | .number n => .ok (pushU64 (b.push 4) n.toBits)
  | .string s => pushString (b.push 5) s
  | .bigint i => pushString (b.push 6) (toString i) "a bigint"
  | .bytes x => do return (← pushLength (b.push 7) x.size "a ByteArray" "bytes") ++ x
  | .array xs => do xs.foldlM write (← pushLength (b.push 8) xs.size "an array" "elements")
  | .object fs => do
    fs.foldlM (fun b kv => do write (← pushString b kv.1 "an object key") kv.2)
      (← pushLength (b.push 9) fs.size "an object" "fields")
  | .ref v _ => .ok (pushU32 (pushU32 (b.push 10) (valueHandle v)) 0)
termination_by d => d
decreasing_by
  all_goals
    have := Array.sizeOf_lt_of_mem ‹_ ∈ _›
    first | (simp_all; omega) | (cases ‹String × Data›; simp_all; omega)

/-- The wire bytes of `d`, or why it cannot cross (a length above `maxLength`). -/
def encode (d : Data) : Except String ByteArray := write .empty d

-- (`+` rather than `|||`: the bytes do not overlap, so they are the same, and `+` is what `omega` proves things about.)
def readU32 (b : ByteArray) (o : Nat) : Option UInt32 :=
  if h : o + 4 ≤ b.size then
    some (b[o].toUInt32 + (b[o+1].toUInt32 <<< 8) + (b[o+2].toUInt32 <<< 16) + (b[o+3].toUInt32 <<< 24))
  else none
def readU64 (b : ByteArray) (o : Nat) : Option UInt64 :=
  if h : o + 8 ≤ b.size then
    some (b[o].toUInt64 + (b[o+1].toUInt64 <<< 8) + (b[o+2].toUInt64 <<< 16) + (b[o+3].toUInt64 <<< 24) +
      (b[o+4].toUInt64 <<< 32) + (b[o+5].toUInt64 <<< 40) + (b[o+6].toUInt64 <<< 48) + (b[o+7].toUInt64 <<< 56))
  else none
/-- A length-prefixed run of bytes at `o`, and the offset after it. -/
def readRaw (b : ByteArray) (o : Nat) : Option (ByteArray × Nat) :=
  match readU32 b o with
  | some n => if o + 4 + n.toNat ≤ b.size then some (b.extract (o + 4) (o + 4 + n.toNat), o + 4 + n.toNat) else none
  | none => none
def readString (b : ByteArray) (o : Nat) : Except String (String × Nat) :=
  match readRaw b o with
  | some (raw, o) => match String.fromUTF8? raw with
    | some s => .ok (s, o)
    | none => .error "Malformed Lasm.JS value (invalid UTF-8)"
  | none => .error "Malformed Lasm.JS value (truncated)"

section Read
variable {m : Type → Type} [Monad m] {ε : Type} [MonadExceptOf ε m] (err : String → ε)
  (ref : UInt32 → String → m Data)

mutual
/-- Reads one value at `o` and returns it with the offset after it; `ref`
turns a reference (handle and description) into a value. `fuel` bounds the
bytes left (`decodeWith` passes the size), so the reader is total. -/
@[specialize] def readAt : Nat → ByteArray → Nat → m (Data × Nat)
  | 0, _, _ => throw (err "Malformed Lasm.JS value (truncated)")
  | fuel + 1, b, o =>
    if h : o < b.size then
      let o' := o + 1
      match b[o] with
      | 0 => pure (.undefined, o')
      | 1 => pure (.null, o')
      | 2 => pure (.bool false, o')
      | 3 => pure (.bool true, o')
      | 4 => match readU64 b o' with
        | some v => pure (.number (Float.ofBits v), o' + 8)
        | none => throw (err "Malformed Lasm.JS value (truncated)")
      | 5 => match readString b o' with
        | .ok (s, o) => pure (.string s, o)
        | .error e => throw (err e)
      | 6 => match readString b o' with
        | .ok (s, o) => match s.toInt? with
          | some i => pure (.bigint i, o)
          | none => throw (err "Malformed Lasm.JS value (bigint)")
        | .error e => throw (err e)
      | 7 => match readRaw b o' with
        | some (x, o) => pure (.bytes x, o)
        | none => throw (err "Malformed Lasm.JS value (truncated)")
      | 8 => match readU32 b o' with
        -- Every element takes at least a byte: never reserve more than are left.
        | some n => do
          let (xs, o) ← readItems fuel b n.toNat (o' + 4) (Array.mkEmpty (min n.toNat (b.size - o)))
          pure (.array xs, o)
        | none => throw (err "Malformed Lasm.JS value (truncated)")
      | 9 => match readU32 b o' with
        | some n => do
          let (fs, o) ← readFields fuel b n.toNat (o' + 4) (Array.mkEmpty (min n.toNat (b.size - o)))
          pure (.object fs, o)
        | none => throw (err "Malformed Lasm.JS value (truncated)")
      | 10 => match readU32 b o' with
        | some handle => match readString b (o' + 4) with
          | .ok (d, o) => do return (← ref handle d, o)
          | .error e => throw (err e)
        | none => throw (err "Malformed Lasm.JS value (truncated)")
      | t => throw (err s!"Malformed Lasm.JS value (tag {t})")
    else throw (err "Malformed Lasm.JS value (truncated)")
termination_by fuel _ _ => (fuel, 0)
/-- Reads `n` values from `o`, appending them to `acc`. -/
@[specialize] def readItems (fuel : Nat) (b : ByteArray) : Nat → Nat → Array Data → m (Array Data × Nat)
  | 0, o, acc => pure (acc, o)
  | n + 1, o, acc => do
    let (d, o) ← readAt fuel b o
    readItems fuel b n o (acc.push d)
termination_by n _ _ => (fuel, n + 1)
/-- Reads `n` fields (key and value) from `o`, appending them to `acc`. -/
@[specialize] def readFields (fuel : Nat) (b : ByteArray) : Nat → Nat → Array (String × Data) → m (Array (String × Data) × Nat)
  | 0, o, acc => pure (acc, o)
  | n + 1, o, acc => match readString b o with
    | .ok (k, o) => do
      let (d, o) ← readAt fuel b o
      readFields fuel b n o (acc.push (k, d))
    | .error e => throw (err e)
termination_by n _ _ => (fuel, n + 1)
end

/-- Reads the one value that `b` holds. -/
@[specialize] def decodeWith (b : ByteArray) : m Data := do
  let (d, o) ← readAt err ref b.size b 0
  if o != b.size then throw (err "Malformed Lasm.JS value (trailing bytes)")
  pure d

end Read

/-- Reads the one value that `b` holds; references become owned `Value`s. -/
def decode (b : ByteArray) : IO Data :=
  decodeWith IO.userError (fun h d => return .ref (← valueOfHandle h) d) b

/-- `encode` in `IO`: a value that cannot cross is an `IO.userError`. -/
def encodeIO (d : Data) : IO ByteArray :=
  match encode d with
  | .ok b => pure b
  | .error e => throw (IO.userError e)

end Wire

/-- `keep` holds the values whose handles `input` mentions: borrowed, it stays
alive (and its handles unreleased) until the host has read the request. -/
@[extern "lasm_js_call"] private opaque hostCallKeep (op handle : UInt32) (arg : UInt64) (input : @& ByteArray) (keep : @& Data) : IO ByteArray
private def hostCall (op handle : UInt32) (arg : UInt64) (input : ByteArray) : IO ByteArray := hostCallKeep op handle arg input .undefined
private def hostCallWith (op : UInt32) (arg : UInt64) (payload : Data) (handle : UInt32 := 0) : IO ByteArray := do
  hostCallKeep op handle arg (← Wire.encodeIO payload) payload
/-- A call (205) or binding (214) whose result resolves `p` when it settles. -/
@[extern "lasm_js_call_into"] private opaque hostCallInto (p : @& IO.Promise (Except String ByteArray)) (op handle : UInt32) (arg : UInt64) (input : @& ByteArray) (keep : @& Data) : IO Unit

/-! Conversions -/

/-- Lean values that convert to JavaScript. -/
class ToJS (α : Type) where
  toJS : α → Data

/-- How a JavaScript result is transferred: copied as data, or as a reference
(`Value`) to the JavaScript value itself. -/
inductive Mode where
  | data | reference
  deriving BEq, Inhabited

/-- Lean values that can be read from JavaScript. `typeName` appears in
type-mismatch errors. -/
class FromJS (α : Type) where
  fromJS : Data → Except String α
  typeName : String
  mode : Mode := .data

export ToJS (toJS)

/-- `fromJS` with an error naming the context, the expected Lean type and the
JavaScript value received. -/
def decodeAs (α : Type) [FromJS α] (context : String) (d : Data) : IO α :=
  match FromJS.fromJS d with
  | .ok a => pure a
  | .error detail => do
    -- References carry no description; ask the host for one only now.
    let received ← match d with
      | .ref v "" => (do return String.fromUTF8! (← hostCallWith 206 0 (.ref v "") (valueHandle v))) <|> pure "a JavaScript value"
      | _ => pure d.describe
    throw <| IO.userError <|
      s!"Lasm.JS {context}: expected Lean type {FromJS.typeName α}, received JavaScript {received}" ++
        (if detail.isEmpty then "" else s!" ({detail})")

instance : ToJS Data := ⟨id⟩
instance : FromJS Data := ⟨.ok, "Lasm.JS.Data", .data⟩
instance : ToJS Value := ⟨fun v => .ref v ""⟩
instance : FromJS Value where
  fromJS | .ref v _ => .ok v | _ => .error ""
  typeName := "Lasm.JS.Value"
  mode := .reference
instance : ToJS String := ⟨.string⟩
instance : FromJS String := ⟨fun | .string s => .ok s | _ => .error "", "String", .data⟩
instance : ToJS Bool := ⟨.bool⟩
instance : FromJS Bool := ⟨fun | .bool b => .ok b | _ => .error "", "Bool", .data⟩
instance : ToJS Float := ⟨.number⟩
instance : FromJS Float := ⟨fun | .number n => .ok n | _ => .error "", "Float", .data⟩
instance : ToJS Unit := ⟨fun _ => .undefined⟩
instance : FromJS Unit := ⟨fun _ => .ok (), "Unit", .data⟩
instance : ToJS ByteArray := ⟨.bytes⟩
instance : FromJS ByteArray := ⟨fun | .bytes b => .ok b | _ => .error "", "ByteArray", .data⟩

private def maxSafe : Nat := 9007199254740991
private def floatToInt? (n : Float) : Option Int :=
  if n.isNaN || n.isInf || n.floor != n || n.abs > maxSafe.toFloat then none
  else if n < 0 then some (-((-n).toUInt64.toNat : Int)) else some (n.toUInt64.toNat : Int)

/-- Integers up to 2^53 - 1 in magnitude become numbers, larger ones bigints. -/
instance : ToJS Int := ⟨fun i => if i.natAbs ≤ maxSafe then .number (Float.ofInt i) else .bigint i⟩
instance : FromJS Int where
  fromJS
    | .number n => (floatToInt? n).elim (.error "not an integer") .ok
    | .bigint i => .ok i
    | _ => .error ""
  typeName := "Int"
instance : ToJS Nat := ⟨fun n => toJS (n : Int)⟩
instance : FromJS Nat where
  fromJS d := match (FromJS.fromJS d : Except String Int) with
    | .ok i => if i ≥ 0 then .ok i.toNat else .error "negative"
    | .error e => .error e
  typeName := "Nat"
@[reducible] private def fromBounded (name : String) (bound : Nat) (f : Nat → α) : FromJS α where
  fromJS d := match (FromJS.fromJS d : Except String Nat) with
    | .ok n => if n < bound then .ok (f n) else .error s!"out of range for {name}"
    | .error e => .error e
  typeName := name
instance : ToJS UInt8 := ⟨fun n => toJS n.toNat⟩
instance : FromJS UInt8 := fromBounded "UInt8" 256 Nat.toUInt8
instance : ToJS UInt16 := ⟨fun n => toJS n.toNat⟩
instance : FromJS UInt16 := fromBounded "UInt16" 65536 Nat.toUInt16
instance : ToJS UInt32 := ⟨fun n => toJS n.toNat⟩
instance : FromJS UInt32 := fromBounded "UInt32" 4294967296 Nat.toUInt32
instance : ToJS UInt64 := ⟨fun n => toJS n.toNat⟩
instance : FromJS UInt64 := fromBounded "UInt64" 18446744073709551616 Nat.toUInt64

instance [ToJS α] : ToJS (Array α) := ⟨fun xs => .array (xs.map toJS)⟩
instance [FromJS α] : FromJS (Array α) where
  fromJS
    | .array xs => xs.mapM (fun x => (FromJS.fromJS x : Except String α)) |>.mapError
        (fun e => s!"an element is not {FromJS.typeName α}{if e.isEmpty then "" else ": " ++ e}")
    | _ => .error ""
  typeName := s!"Array ({FromJS.typeName α})"
instance [ToJS α] : ToJS (List α) := ⟨fun xs => toJS xs.toArray⟩
instance [FromJS α] : FromJS (List α) where
  fromJS d := (FromJS.fromJS d : Except String (Array α)).map Array.toList
  typeName := s!"List ({FromJS.typeName α})"
/-- `none` is `null`; `undefined` and `null` both read as `none`. -/
instance [ToJS α] : ToJS (Option α) := ⟨fun | none => .null | some a => toJS a⟩
instance [FromJS α] : FromJS (Option α) where
  fromJS | .null => .ok none | .undefined => .ok none | d => (FromJS.fromJS d : Except String α).map some
  typeName := s!"Option ({FromJS.typeName α})"
  mode := FromJS.mode α
/-- Pairs are two-element arrays. -/
instance [ToJS α] [ToJS β] : ToJS (α × β) := ⟨fun (a, b) => .array #[toJS a, toJS b]⟩
instance [FromJS α] [FromJS β] : FromJS (α × β) where
  fromJS
    | .array #[a, b] => do return ((← FromJS.fromJS a), (← FromJS.fromJS b))
    | _ => .error "expected a two-element array"
  typeName := s!"({FromJS.typeName α} × {FromJS.typeName β})"

/-- An object literal, for arguments: `obj [("port", toJS 3000)]`. -/
def obj (fields : List (String × Data)) : Data := .object fields.toArray

/-- Reads field `key` of a JavaScript object for `deriving FromJS`. -/
def readField (α : Type) [FromJS α] (d : Data) (key : String) : Except String α :=
  match d with
  | .object _ => (FromJS.fromJS (d.field key) : Except String α).mapError
      (fun e => s!"field {key}: expected {FromJS.typeName α}, received {(d.field key).describe}{if e.isEmpty then "" else " (" ++ e ++ ")"}")
  | _ => .error "expected an object"

/-! The interop thread: promise completions and calls of Lean functions -/

/-- What an asynchronous Lean function (`Function.ofFnReply`) answers JavaScript
with: a value, or a method call that the host makes on Node's main thread as part
of the reply, resolving the JavaScript promise with its result. A handler that
ends with `res.json(body)` or `c.json(body)` saves one host round trip this way. -/
inductive Function.Reply where
  | value (result : Data)
  | callMethod (target : Value) (name : String) (args : Array Data)

private structure Registry where
  next : UInt32 := 1
  asyncFns : Std.HashMap UInt32 (Array Data → Async Function.Reply) := {}
  syncFns : Std.HashMap UInt32 (Array Data → IO Data) := {}

private instance : Nonempty Registry := ⟨{}⟩

private initialize registry : IO.Ref Registry ← IO.mkRef {}

@[extern "lasm_js_start"] private opaque startThread (dispatch : UInt8 → UInt32 → UInt64 → ByteArray → IO Unit) : IO Unit
@[extern "lasm_js_await_into"] private opaque awaitInto (p : @& IO.Promise (Except String ByteArray)) (value : @& ByteArray) (keep : @& Data) : IO Unit
/-- On the thread running `main`, becomes Lasm.JS's interop poller and never
returns; elsewhere (or once a poller runs) returns `false`. -/
@[extern "lasm_js_park"] private opaque park : IO Bool
@[extern "lasm_js_sync_start"] private opaque startSync (dispatch : UInt32 → ByteArray → IO (ByteArray × Data)) : IO Unit

private def errorText (e : IO.Error) : String := toString e

private def reply (call : UInt64) (result : Except IO.Error Function.Reply) : IO Unit := do
  -- Status 0 a value, 1 a Lean error (message), 2 a method call [target, name, args].
  let failure (message : String) : UInt8 × ByteArray × Data := (1, message.toUTF8, .undefined)
  let encoded (status : UInt8) (d : Data) : UInt8 × ByteArray × Data :=
    match Wire.encode d with
    | .ok bytes => (status, bytes, d)
    | .error message => failure message
  let (failed, payload, keep) := match result with
    | .ok (.value d) => encoded 0 d
    | .ok (.callMethod target name args) => encoded 2 (.array #[.ref target "", .string name, .array args])
    | .error e => failure (errorText e)
  -- Replies are framed (u64 call, u8 status, u32 length): a payload too long for
  -- the u32 fails the call instead.
  let header (status : UInt8) := Wire.pushU64 .empty call |>.push status
  let (b, payload, keep) := match Wire.pushLength (header failed) payload.size "a Lean function's result" "bytes" with
    | .ok b => (b, payload, keep)
    | .error message => (Wire.pushU32 (header 1) message.utf8ByteSize.toUInt32, message.toUTF8, .undefined)
  discard <| hostCallKeep 208 0 0 (b ++ payload) keep

private def argsOf (bytes : ByteArray) : IO (Array Data) := do
  match ← Wire.decode bytes with
  | .array xs => pure xs
  | d => pure #[d]

/-- One call of a Lean function from JavaScript, run as a Lean task. If the
function finishes without waiting, it replies at once; if it waits for a
JavaScript promise, the reply is a continuation that runs when the computation
finishes, and no Lean thread is held while it waits. -/
private def runCall (call : UInt64) (f : Array Data → Async Function.Reply) (bytes : ByteArray) : BaseIO Unit := do
  let run : Async Function.Reply := do f (← argsOf bytes)
  match ← BaseAsync.toRawBaseIO run with
  | .pure result => discard <| (reply call result).toBaseIO
  | .ofTask t => discard <| BaseIO.mapTask (fun result => discard <| (reply call result).toBaseIO) t

/-- Runs on the interop thread: kind 2 calls a Lean function as a task, kind 3
forgets a function JavaScript no longer references. -/
private def dispatch (kind : UInt8) (fn : UInt32) (call : UInt64) (bytes : ByteArray) : IO Unit := do
  if kind == 3 then
    registry.modify fun r => { r with asyncFns := r.asyncFns.erase fn, syncFns := r.syncFns.erase fn }
  else
    let f? := (← registry.get).asyncFns[fn]?
    match f? with
    | none => reply call (.error (IO.userError "Lasm.JS: the Lean function was released"))
    | some f => discard <| BaseIO.asTask (runCall call f bytes)

/-- Returns the reply and the data it mentions, which the C glue keeps alive until
Node's main thread has read the reply. -/
private def syncDispatch (fn : UInt32) (bytes : ByteArray) : IO (ByteArray × Data) := do
  let result ← (do
    let some f := (← registry.get).syncFns[fn]?
      | throw (IO.userError "Lasm.JS: the Lean function was released")
    f (← argsOf bytes)).toBaseIO
  return match result with
    | .ok d => match Wire.encode d with
      | .ok bytes => (ByteArray.mk #[0] ++ bytes, d)
      | .error message => (ByteArray.mk #[1] ++ message.toUTF8, .undefined)
    | .error e => (ByteArray.mk #[1] ++ (errorText e).toUTF8, .undefined)

private def ensureStarted : IO Unit := startThread dispatch

/-! Waiting for JavaScript -/

/-- Monads in which Lean code waits for JavaScript promises (`callAwait`,
`callMethodAwait`, `Value.await`). In `Async`, and monads that `Async` lifts
into, waiting holds no Lean thread: the rest of the computation runs when the
promise settles, so thousands of calls can wait at once. In `IO` (and other
monads `IO` lifts into) the calling Lean thread blocks until the promise
settles, which suits scripts; there are only about as many Lean threads as CPUs. -/
class MonadJS (m : Type → Type) where
  /-- `blocking` where only `IO` lifts into `m`, `nonblocking` where `Async` does. -/
  awaitWith {α : Type} (blocking : IO α) (nonblocking : Async α) : m α

instance [MonadLiftT Async m] : MonadJS m := ⟨fun _ a => monadLift a⟩
instance (priority := low) [MonadLiftT IO m] : MonadJS m := ⟨fun b _ => monadLift b⟩

/-- Continues when the host resolves `p`, holding no Lean thread meanwhile. -/
private def awaitBytes (p : IO.Promise (Except String ByteArray)) : Async ByteArray :=
  EAsync.ofTask <| ExceptT.mk <| p.result?.map (sync := true) fun
    | some (.ok bytes) => .ok bytes
    | some (.error message) => .error (IO.userError message)
    | none => .error (IO.userError "Lasm.JS: a JavaScript result was lost (internal error)")

/-- Host call `op` (205 a call, 214 a binding) whose result, once settled,
resolves a Lean promise that the computation then continues from. -/
private def callAsync (α : Type) [FromJS α] (context : String) (op : UInt32) (flags : UInt64) (payload : Data)
    (failurePrefix : String := "") : Async α := do
  ensureStarted
  let p : IO.Promise (Except String ByteArray) ← IO.Promise.new
  let settled : Async ByteArray := do
    hostCallInto p op 0 flags (← Wire.encodeIO payload) payload
    awaitBytes p
  let bytes ← if failurePrefix.isEmpty then settled
    else try settled catch e => throw (IO.userError s!"{failurePrefix}{e}")
  decodeAs α context (← Wire.decode bytes)

/-! Values and calls -/

private def modeArg (m : Mode) : UInt64 := if m == .reference then 1 else 0
private def receive (α : Type) [FromJS α] (context : String) (bytes : ByteArray) : IO α := do
  decodeAs α context (← Wire.decode bytes)

/-- `globalThis`. -/
def global : IO Value := do receive Value "global" (← hostCall 202 0 0 .empty)

/-- Loads a JavaScript module with Node's `require` (CommonJS, and ES modules
without top-level await), resolved from the deployment's `node_modules` (copied
from the project's `node_modules` by `lasm build`), or a Node built-in (`node:fs`). -/
def require (specifier : String) (α : Type := Value) [FromJS α] : IO α := do
  receive α s!"require {repr specifier}" (← hostCall 201 0 (modeArg (FromJS.mode α)) specifier.toUTF8)

namespace Value

/-- What the value is, for diagnostics: `function express (2 parameters)`, `promise`, … -/
def describe (v : Value) : IO String := do
  return String.fromUTF8! (← hostCallWith 206 0 (.ref v "") (valueHandle v))

/-- A property key in error messages: a string as Lean writes it, else the value. -/
private def keyText : Data → String
  | .string s => (repr s).pretty
  | d => d.describe

/-- `o[key]`. The key is any value with `ToJS`, as in JavaScript: a `String`, a
number, or a Symbol `Value` (`Symbol.iterator`, `Symbol.for "k"`). -/
def get [ToJS κ] (o : Value) (key : κ) (α : Type := Value) [FromJS α] : IO α := do
  let k := toJS key
  receive α s!"get {keyText k}" (← hostCallKeep 203 (valueHandle o) (modeArg (FromJS.mode α)) (← Wire.encodeIO k) (.array #[k, .ref o ""]))

/-- Several properties in one call: `{k₁: o[k₁], …}` as data (non-plain values as
references), converted to `α`. Each JavaScript call costs tens of microseconds;
reading an HTTP request's fields this way takes one. -/
def getFields (o : Value) (keys : Array String) (α : Type := Data) [FromJS α] : IO α := do
  receive α "getFields" (← hostCallKeep 203 (valueHandle o) 2 (← Wire.encodeIO (.array (keys.map .string))) (.ref o ""))

/-- `o[key] = x`; the key as for `get`. -/
def set [ToJS κ] [ToJS α] (o : Value) (key : κ) (x : α) : IO Unit := do
  let payload := Data.array #[toJS key, toJS x, .ref o ""]
  discard <| hostCallKeep 204 (valueHandle o) 0 (← Wire.encodeIO (.array #[toJS key, toJS x])) payload

/-- Flags: 1 reference result, 2 await a promise result, 4 construct, 8 method call. -/
def invokeRaw (target receiver : Data) (args : Array Data) (flags : UInt64) : IO ByteArray :=
  hostCallWith 205 flags (.array #[target, receiver, .array args])

private def flags (α : Type) [FromJS α] (await : Bool) (extra : UInt64) : UInt64 :=
  modeArg (FromJS.mode α) ||| (if await then 2 else 0) ||| extra

/-- `f(...args)`. A returned promise is not awaited (see `callAwait`). -/
def call (f : Value) (args : Array Data := #[]) (α : Type := Value) [FromJS α] (this : Data := .undefined) : IO α := do
  receive α "call" (← invokeRaw (.ref f "") this args (flags α false 0))

/-- `await f(...args)`. In `Async` the Lean computation continues when the
promise settles, holding no Lean thread; in `IO` the calling thread waits. -/
def callAwait [MonadJS m] (f : Value) (args : Array Data := #[]) (α : Type := Data) [FromJS α] (this : Data := .undefined) : m α :=
  MonadJS.awaitWith
    (do receive α "call" (← invokeRaw (.ref f "") this args (flags α true 0)))
    (callAsync α "call" 205 (flags α false 0) (.array #[.ref f "", this, .array args]))

/-- `o.name(...args)`. A returned promise is not awaited (see `callMethodAwait`). -/
def callMethod (o : Value) (name : String) (args : Array Data := #[]) (α : Type := Value) [FromJS α] : IO α := do
  receive α s!"method {name}" (← invokeRaw (.ref o "") (.string name) args (flags α false 8))

/-- `await o.name(...args)`. In `Async` the Lean computation continues when the
promise settles, holding no Lean thread; in `IO` the calling thread waits. -/
def callMethodAwait [MonadJS m] (o : Value) (name : String) (args : Array Data := #[]) (α : Type := Data) [FromJS α] : m α :=
  MonadJS.awaitWith
    (do receive α s!"method {name}" (← invokeRaw (.ref o "") (.string name) args (flags α true 8)))
    (callAsync α s!"method {name}" 205 (flags α false 8) (.array #[.ref o "", .string name, .array args]))

/-- `new C(...args)`. -/
def new (c : Value) (args : Array Data := #[]) (α : Type := Value) [FromJS α] : IO α := do
  receive α "new" (← invokeRaw (.ref c "") .undefined args (flags α false 4))

/-- `toTask`; `keep` (the data kept alive with the request) also tells the C glue
whether `Value.await` waits for it. -/
private def toTaskKeeping (v : Value) (α : Type) [FromJS α] (keep : Data) : IO (Task (Except IO.Error α)) := do
  ensureStarted
  let p ← IO.Promise.new
  awaitInto p (← Wire.encodeIO (.ref v "")) keep
  IO.mapTask (t := p.result!) fun
    | .ok bytes => do decodeAs α "await" (← Wire.decode bytes)
    | .error message => throw (IO.userError message)

/-- A Lean task that finishes when a JavaScript value settles: a promise (or any
thenable) becomes its result, any other value is itself. Does not block a Lean
thread. -/
def toTask (v : Value) (α : Type := Data) [FromJS α] : IO (Task (Except IO.Error α)) :=
  toTaskKeeping v α (.ref v "")

/-- `await v`: a promise (or any thenable) becomes its result, any other value is
itself. In `Async` the Lean computation continues when it settles, holding no
Lean thread; in `IO` the calling thread waits. -/
def await [MonadJS m] (v : Value) (α : Type := Data) [FromJS α] : m α :=
  MonadJS.awaitWith
    -- Marked for the C glue: inside a synchronous callback this fails at once.
    (do IO.ofExcept (← IO.wait (← toTaskKeeping v α (.ref v "Value.await"))))
    (do
      ensureStarted
      let p : IO.Promise (Except String ByteArray) ← IO.Promise.new
      awaitInto p (← Wire.encodeIO (.ref v "")) (.ref v "")
      decodeAs α "await" (← Wire.decode (← awaitBytes p)))

end Value

namespace Function

private def register (synchronous : Bool) (f : Array Data → IO Data) : IO UInt32 :=
  registry.modifyGet fun r =>
    let id := r.next
    (id, { r with syncFns := if synchronous then r.syncFns.insert id f else r.syncFns, next := id + 1 })

private def registerReply (f : Array Data → Async Function.Reply) : IO UInt32 :=
  registry.modifyGet fun r =>
    let id := r.next
    (id, { r with asyncFns := r.asyncFns.insert id f, next := id + 1 })

/-- A JavaScript function that calls `f` and returns a promise of its result.
Each call runs as a Lean task; while `f` awaits JavaScript (`callMethodAwait`,
`Value.await`, an `Async` binding) it holds no Lean thread, so any number of
calls can wait at once. `IO` actions run inside `f` unchanged. A Lean error
rejects the promise with an `Error`. -/
def ofFn (f : Array Data → Async Data) : IO Value := do
  ensureStarted
  let id ← registerReply fun args => Function.Reply.value <$> f args
  decodeAs Value "Function.ofFn" (← Wire.decode (← hostCall 210 id 1 .empty))

/-- `ofFn` whose result may be a method call made by the host as part of the
reply (`Function.Reply.callMethod res "json" #[body]`), one host round trip fewer than
calling the method and then returning. The JavaScript promise resolves with the
method's result (awaited if it is a promise); if the method throws, it rejects. -/
def ofFnReply (f : Array Data → Async Function.Reply) : IO Value := do
  ensureStarted
  let id ← registerReply f
  decodeAs Value "Function.ofFnReply" (← Wire.decode (← hostCall 210 id 1 .empty))

/-- A JavaScript function that calls `f` synchronously and returns its result.
Node's main thread waits while `f` runs (about 20 µs per call plus `f`), so the
event loop is blocked meanwhile. Inside `f`, JavaScript calls, console output and
waiting for a Lean task that needs nothing from Node work, and a timer, DNS
lookup, socket read or `Value.toTask` may be started (it finishes after `f`
returns). Waiting for anything that needs Node fails at once with an error: a
JavaScript promise, Lean file IO, a Lean task that makes host calls (including
`Async` run with `.block`), or a timer, DNS lookup or socket read started in `f`.
A promise wait (`Value.await`, the `…Await` forms) fails as an error `f` can
catch; a failed wait for a Lean task ends `f` itself. `f` cannot call another
synchronous callback (docs/JS_BINDINGS.md). -/
def ofSyncFn (f : Array Data → IO Data) : IO Value := do
  ensureStarted
  startSync syncDispatch
  let id ← register true f
  decodeAs Value "Function.ofSyncFn" (← Wire.decode (← hostCall 210 id 2 .empty))

private def argument (α : Type) [FromJS α] (args : Array Data) (i : Nat) : IO α :=
  decodeAs α s!"callback argument {i + 1}" (args[i]?.getD .undefined)

/-- `ofFn` for a one-argument function with typed conversions. -/
def ofFn1 [FromJS α] [ToJS β] (f : α → Async β) : IO Value :=
  ofFn fun args => do return toJS (← f (← argument α args 0))
/-- `ofFn` for a two-argument function with typed conversions. -/
def ofFn2 [FromJS α] [FromJS β] [ToJS γ] (f : α → β → Async γ) : IO Value :=
  ofFn fun args => do return toJS (← f (← argument α args 0) (← argument β args 1))
/-- `ofSyncFn` for a two-argument function with typed conversions. -/
def ofSyncFn2 [FromJS α] [FromJS β] [ToJS γ] (f : α → β → IO γ) : IO Value :=
  ofSyncFn fun args => do return toJS (← f (← argument α args 0) (← argument β args 1))

end Function

/-! Typed bindings: `@[js "module" "export"] opaque f : A → B → Async C` (macro in
Lasm.JS.Meta) defines `f` with `Bindable.bind`; the glue comes from the type. -/

/-- One JavaScript export bound to a Lean declaration. `path` is the export
(`"jwtVerify"`, `"default"`, nested `"promises.readFile"`, or `""` for the module
itself); `construct` calls it with `new`. -/
structure Binding where
  name : String
  module : String
  path : String
  construct : Bool := false
  arity : Nat
  deriving Repr

private def Binding.context (b : Binding) : String :=
  s!"binding {b.name} ({b.module}{if b.path.isEmpty then "" else " " ++ b.path})"

private def Binding.payload (b : Binding) (args : Array Data) : Data :=
  .array #[.string b.name, .string b.module, .string b.path, .array args]

/-- Calls the bound export with `args`. With `await`, a returned promise is
awaited (blocking the calling Lean thread). Errors name the binding. -/
def Binding.invoke (α : Type) [FromJS α] (b : Binding) (args : Array Data) (await : Bool := true) : IO α := do
  let flags := modeArg (FromJS.mode α) ||| (if await then 2 else 0) ||| (if b.construct then 4 else 0)
  let bytes ← try hostCallWith 214 flags (b.payload args)
    catch e => throw (IO.userError s!"Lasm.JS {b.context}: {e}")
  decodeAs α b.context (← Wire.decode bytes)

/-- Calls the bound export with `args` and continues when its result settles,
holding no Lean thread meanwhile. Errors name the binding. -/
def Binding.invokeAsync (α : Type) [FromJS α] (b : Binding) (args : Array Data) : Async α :=
  callAsync α b.context 214 (modeArg (FromJS.mode α) ||| (if b.construct then 4 else 0)) (b.payload args)
    (failurePrefix := s!"Lasm.JS {b.context}: ")

/-- Lean function types a binding can have: arguments with `ToJS`, ending in
`Async β` (a returned promise is awaited without holding a Lean thread), `IO β`
(awaited by blocking the calling Lean thread) or `IO (Task (Except IO.Error β))`
(not awaited), with `FromJS β`. -/
class Bindable (α : Type) where
  arity : Nat
  bind : Binding → Array Data → α

instance (priority := high) [FromJS β] : Bindable (IO (Task (Except IO.Error β))) where
  arity := 0
  bind b args := do
    let promise ← b.invoke Value args (await := false)
    promise.toTask (α := β)
instance [FromJS β] : Bindable (IO β) where
  arity := 0
  bind b args := b.invoke β args
instance [FromJS β] : Bindable (Async β) where
  arity := 0
  bind b args := b.invokeAsync β args
instance [ToJS α] [Bindable β] : Bindable (α → β) where
  arity := Bindable.arity β + 1
  bind b args := fun a => Bindable.bind b (args.push (toJS a))

/-- Whether this program runs in Lasm's edge build (`lasm build --target workers`:
an isolate such as Cloudflare Workers, single-threaded, no files) rather than on
Node. The edge host answers the protocol query (op 200) with a second word, 1. -/
def onEdge : IO Bool := do
  if !isAvailable then return false
  let reply ← hostCall 200 0 0 .empty
  return reply.size ≥ 8 && reply.get! 4 == 1

/-- Publishes `v` as the program's default export. In an edge build
(`lasm build --target workers`) the Worker's requests go to it: a Hono app (or
any object with a `fetch` method), or a function `(request, env, ctx) => Response`.
On Node it only records the value (`globalThis.__lasmDefaultExport`). -/
def exportDefault (v : Value) : IO Unit := do
  (← global).set "__lasmDefaultExport" v

/-- Blocks the calling thread forever, for servers whose work happens in
JavaScript callbacks (stop them with `IO.Process.exit` from a callback, or a signal).
In an edge build it returns at once: the platform owns the isolate's lifetime,
and requests arrive after `main` has returned. -/
def waitForever : IO Unit := do
  if ← onEdge then return
  -- On the thread running `main`, serve JavaScript's events here (Lasm.JS's
  -- interop loop, which never returns) rather than in a thread of their own:
  -- each thread is a Node Worker that costs start-up time. Elsewhere, wait.
  if ← park then return
  let p : IO.Promise Unit ← IO.Promise.new
  -- Keep `p` alive: a dropped promise would resolve `result?` with `none`.
  let r ← IO.mkRef (some p)
  discard <| IO.wait p.result?
  discard <| r.get

/-- Host statistics (handles held, pending callbacks, …), for tests. -/
def stats : IO String := do return String.fromUTF8! (← hostCall 213 0 0 .empty)

end Lasm.JS
