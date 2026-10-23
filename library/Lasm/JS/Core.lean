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

/-! Wire format shared with src/node-js.mjs (little endian). -/
namespace Wire

private def pushU32 (b : ByteArray) (n : UInt32) : ByteArray :=
  b.push n.toUInt8 |>.push (n >>> 8).toUInt8 |>.push (n >>> 16).toUInt8 |>.push (n >>> 24).toUInt8
private def pushU64 (b : ByteArray) (n : UInt64) : ByteArray := Id.run do
  let mut b := b
  for i in [0:8] do b := b.push (n >>> (8 * i).toUInt64).toUInt8
  return b
private def pushBytes (b : ByteArray) (x : ByteArray) : ByteArray := pushU32 b x.size.toUInt32 ++ x
private def pushString (b : ByteArray) (s : String) : ByteArray := pushBytes b s.toUTF8

partial def write (b : ByteArray) : Data → ByteArray
  | .undefined => b.push 0
  | .null => b.push 1
  | .bool false => b.push 2
  | .bool true => b.push 3
  | .number n => pushU64 (b.push 4) n.toBits
  | .string s => pushString (b.push 5) s
  | .bigint i => pushString (b.push 6) (toString i)
  | .bytes x => pushBytes (b.push 7) x
  | .array xs => xs.foldl write (pushU32 (b.push 8) xs.size.toUInt32)
  | .object fs => fs.foldl (fun b (k, v) => write (pushString b k) v) (pushU32 (b.push 9) fs.size.toUInt32)
  | .ref v _ => pushU32 (pushU32 (b.push 10) (valueHandle v)) 0

def encode (d : Data) : ByteArray := write .empty d

private def readU32 (b : ByteArray) (o : Nat) : Except String UInt32 :=
  if o + 4 ≤ b.size then
    .ok (b[o]!.toUInt32 ||| (b[o+1]!.toUInt32 <<< 8) ||| (b[o+2]!.toUInt32 <<< 16) ||| (b[o+3]!.toUInt32 <<< 24))
  else .error "Malformed Lasm.JS value (truncated)"
private def readU64 (b : ByteArray) (o : Nat) : Except String UInt64 :=
  if o + 8 ≤ b.size then .ok <| Id.run do
    let mut v : UInt64 := 0
    for i in [0:8] do v := v ||| (b[o + i]!.toUInt64 <<< (8 * i).toUInt64)
    return v
  else .error "Malformed Lasm.JS value (truncated)"
private def readRaw (b : ByteArray) (o : Nat) : Except String (ByteArray × Nat) := do
  let n := (← readU32 b o).toNat
  if o + 4 + n ≤ b.size then return (b.extract (o + 4) (o + 4 + n), o + 4 + n)
  else throw "Malformed Lasm.JS value (truncated)"
private def readString (b : ByteArray) (o : Nat) : Except String (String × Nat) := do
  let (raw, o) ← readRaw b o
  match String.fromUTF8? raw with
  | some s => return (s, o)
  | none => throw "Malformed Lasm.JS value (invalid UTF-8)"

private def lift (e : Except String α) : IO α := IO.ofExcept (e.mapError IO.userError)

/-- Reads one value at `o`; references become owned `Value`s. -/
partial def read (b : ByteArray) (o : Nat) : IO (Data × Nat) := do
  if o ≥ b.size then throw (IO.userError "Malformed Lasm.JS value (truncated)")
  let o' := o + 1
  match b[o]! with
  | 0 => return (.undefined, o')
  | 1 => return (.null, o')
  | 2 => return (.bool false, o')
  | 3 => return (.bool true, o')
  | 4 => return (.number (Float.ofBits (← lift (readU64 b o'))), o' + 8)
  | 5 => let (s, o) ← lift (readString b o'); return (.string s, o)
  | 6 => let (s, o) ← lift (readString b o'); return (.bigint (s.toInt?.getD 0), o)
  | 7 => let (x, o) ← lift (readRaw b o'); return (.bytes x, o)
  | 8 =>
    let n := (← lift (readU32 b o')).toNat
    let mut o := o' + 4
    let mut items := Array.mkEmpty n
    for _ in [0:n] do
      let (d, o2) ← read b o
      items := items.push d; o := o2
    return (.array items, o)
  | 9 =>
    let n := (← lift (readU32 b o')).toNat
    let mut o := o' + 4
    let mut fields := Array.mkEmpty n
    for _ in [0:n] do
      let (k, o2) ← lift (readString b o)
      let (d, o3) ← read b o2
      fields := fields.push (k, d); o := o3
    return (.object fields, o)
  | 10 =>
    let h ← lift (readU32 b o')
    let (d, o) ← lift (readString b (o' + 4))
    return (.ref (← valueOfHandle h) d, o)
  | t => throw (IO.userError s!"Malformed Lasm.JS value (tag {t})")

def decode (b : ByteArray) : IO Data := do
  let (d, o) ← read b 0
  if o != b.size then throw (IO.userError "Malformed Lasm.JS value (trailing bytes)")
  return d

end Wire

/-- `keep` holds the values whose handles `input` mentions: borrowed, it stays
alive (and its handles unreleased) until the host has read the request. -/
@[extern "lasm_js_call"] private opaque hostCallKeep (op handle : UInt32) (arg : UInt64) (input : @& ByteArray) (keep : @& Data) : IO ByteArray
private def hostCall (op handle : UInt32) (arg : UInt64) (input : ByteArray) : IO ByteArray := hostCallKeep op handle arg input .undefined
private def hostCallWith (op : UInt32) (arg : UInt64) (payload : Data) (handle : UInt32 := 0) : IO ByteArray :=
  hostCallKeep op handle arg (Wire.encode payload) payload
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
@[extern "lasm_js_sync_start"] private opaque startSync (dispatch : UInt32 → ByteArray → IO (ByteArray × Data)) : IO Unit

private def errorText (e : IO.Error) : String := toString e

private def reply (call : UInt64) (result : Except IO.Error Function.Reply) : IO Unit := do
  -- Status 0 a value, 1 a Lean error (message), 2 a method call [target, name, args].
  let (failed, payload, keep) : UInt8 × ByteArray × Data := match result with
    | .ok (.value d) => (0, Wire.encode d, d)
    | .ok (.callMethod target name args) =>
      let d : Data := .array #[.ref target "", .string name, .array args]
      (2, Wire.encode d, d)
    | .error e => (1, (errorText e).toUTF8, .undefined)
  let mut b := ByteArray.empty
  for i in [0:8] do b := b.push (call >>> (8 * i).toUInt64).toUInt8
  b := b.push failed
  let n := payload.size.toUInt32
  b := b.push n.toUInt8 |>.push (n >>> 8).toUInt8 |>.push (n >>> 16).toUInt8 |>.push (n >>> 24).toUInt8
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
    | .ok d => (ByteArray.mk #[0] ++ Wire.encode d, d)
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
    hostCallInto p op 0 flags (Wire.encode payload) payload
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

/-- `o[key]` -/
def get (o : Value) (key : String) (α : Type := Value) [FromJS α] : IO α := do
  receive α s!"get {repr key}" (← hostCallKeep 203 (valueHandle o) (modeArg (FromJS.mode α)) (Wire.encode (.string key)) (.ref o ""))

/-- Several properties in one call: `{k₁: o[k₁], …}` as data (non-plain values as
references), converted to `α`. Each JavaScript call costs tens of microseconds;
reading an HTTP request's fields this way takes one. -/
def getFields (o : Value) (keys : Array String) (α : Type := Data) [FromJS α] : IO α := do
  receive α "getFields" (← hostCallKeep 203 (valueHandle o) 0 (Wire.encode (.array (keys.map .string))) (.ref o ""))

/-- `o[key] = x` -/
def set [ToJS α] (o : Value) (key : String) (x : α) : IO Unit := do
  let payload := Data.array #[.string key, toJS x, .ref o ""]
  discard <| hostCallKeep 204 (valueHandle o) 0 (Wire.encode (.array #[.string key, toJS x])) payload

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

/-- A Lean task that finishes when a JavaScript value settles: a promise (or any
thenable) becomes its result, any other value is itself. Does not block a Lean
thread. -/
def toTask (v : Value) (α : Type := Data) [FromJS α] : IO (Task (Except IO.Error α)) := do
  ensureStarted
  let p ← IO.Promise.new
  awaitInto p (Wire.encode (.ref v "")) (.ref v "")
  IO.mapTask (t := p.result!) fun
    | .ok bytes => do decodeAs α "await" (← Wire.decode bytes)
    | .error message => throw (IO.userError message)

/-- `await v`: a promise (or any thenable) becomes its result, any other value is
itself. In `Async` the Lean computation continues when it settles, holding no
Lean thread; in `IO` the calling thread waits. -/
def await [MonadJS m] (v : Value) (α : Type := Data) [FromJS α] : m α :=
  MonadJS.awaitWith
    (do IO.ofExcept (← IO.wait (← v.toTask (α := α))))
    (do
      ensureStarted
      let p : IO.Promise (Except String ByteArray) ← IO.Promise.new
      awaitInto p (Wire.encode (.ref v "")) (.ref v "")
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
event loop is blocked meanwhile. Inside `f`, JavaScript calls and other host
operations that complete synchronously work; operations that complete
asynchronously in Lasm's host (Lean file and console IO, sleeping, sockets,
awaiting promises) fail with an error. -/
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

/-- Blocks the calling thread forever, for servers whose work happens in
JavaScript callbacks (stop them with `IO.Process.exit` from a callback, or a signal). -/
def waitForever : IO Unit := do
  let p : IO.Promise Unit ← IO.Promise.new
  -- Keep `p` alive: a dropped promise would resolve `result?` with `none`.
  let r ← IO.mkRef (some p)
  discard <| IO.wait p.result?
  discard <| r.get

/-- Host statistics (handles held, pending callbacks, …), for tests. -/
def stats : IO String := do return String.fromUTF8! (← hostCall 213 0 0 .empty)

end Lasm.JS
