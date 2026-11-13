/-
# Lasm.JS's framing between its C glue and the JavaScript host, in Lean

Models of both halves of the private framing Lasm.JS's host calls use,
written to mirror the code statement for statement, and checked against it
on generated inputs by test/models/cli-differential.mjs (the `cli-models`
workflow): the C half (library/c/lasm_js_framing.h, which library/c/lasm_js.c
and src/edge/lasm_js_edge.c include) compiled at both widths of `size_t`
(test/models/js-framing-harness.c), the JavaScript halves of src/node-js.mjs
and src/edge/edge-js.mjs as exported.

| code | here |
| --- | --- |
| `encodeEvents(queue)` (src/node-js.mjs, src/edge/edge-js.mjs) | `encodeEvents`, `encodeEvent` |
| `lasm_js_read_event` and the glues' loop over a batch | `readEvent`, `readEvents` |
| `lasm_js_frame_request` (with `lasm_js_request_size`) | `frameRequest` |
| `splitRequest(request)` (both hosts) | `splitRequest` |
| `lasm_js_frame_into` | `frameInto` |
| `intoPrefix(bytes)` (both hosts) | `intoPrefix` |

Integers are little-endian: four bytes (`le32`, `readNumber`, shared with
the process launcher's model) or eight (`u64le`, `readWord64`). An event's
promise and call id are `BigInt.asUintN(64, …)` on the JavaScript side
(`% 2⁶⁴` here); its function and lengths are written with `writeUInt32LE`
(Node, which throws past 2³² − 1) or `setUint32` (edge, which wraps) and
`w.bytes` throws for 2³² bytes or more: the differential draws functions
below 2³² and short payloads, and `JsEvent.Fits` states the bounds.

The C reader panics (`lean_internal_panic`) at the first malformed event,
after the glue has delivered every event before it: `readEvents` gives those
events and the message.
-/
import Lasm.Cli.Model.ProcessLauncher

namespace Lasm.Cli

/-- An interop event of op 209's batch. -/
inductive JsEvent where
  /-- A JavaScript promise Lean waits for settled: its Lean promise, whether
  it failed, the value's wire bytes or the failure's UTF-8 message. -/
  | completion (promise : Nat) (failed : Bool) (bytes : List UInt8)
  /-- JavaScript called a Lean function: the call's id, the function, the
  arguments' wire bytes. -/
  | call (call fn : Nat) (bytes : List UInt8)
  /-- JavaScript dropped a Lean function. -/
  | release (fn : Nat)
deriving DecidableEq, Repr

/-- The bounds of the format: 64-bit promises and calls, 32-bit functions
and lengths. -/
def JsEvent.Fits : JsEvent → Prop
  | .completion p _ b => p < 2 ^ 64 ∧ b.length < 2 ^ 32
  | .call c fn b => c < 2 ^ 64 ∧ fn < 2 ^ 32 ∧ b.length < 2 ^ 32
  | .release fn => fn < 2 ^ 32

/-- Eight little-endian bytes (`setBigUint64`, `memcpy` of a `uint64_t`). -/
def u64le (n : Nat) : List UInt8 := le32 (n % 4294967296) ++ le32 (n / 4294967296 % 4294967296)

/-- Eight little-endian bytes read back (`lasm_js_read_u64`, `readBigUInt64LE`). -/
def readWord64 (bs : List UInt8) : Option (Nat × List UInt8) := do
  let (lo, r) ← readNumber bs
  let (hi, r) ← readNumber r
  return (lo + 4294967296 * hi, r)

/-! ## The host's writer -/

/-- One event as `encodeEvents` writes it: the kind byte and its fields. -/
def encodeEvent : JsEvent → List UInt8
  | .completion p f b => 1 :: u64le (p % 2 ^ 64) ++ [if f then 1 else 0] ++ le32 b.length ++ b
  | .call c fn b => 2 :: u64le (c % 2 ^ 64) ++ le32 fn ++ le32 b.length ++ b
  | .release fn => 3 :: le32 fn

/-- `encodeEvents(queue)`: the batch of up to 1024 events from the front of
the queue, and what stays queued. -/
def encodeEvents (queue : List JsEvent) : List UInt8 × List JsEvent :=
  ((queue.take 1024).flatMap encodeEvent, queue.drop 1024)

/-! ## The glue's reader -/

/-- `throw message` unless the read succeeded. -/
def orThrow {α} (o : Option α) (message : String) : Except String α :=
  match o with
  | some a => .ok a
  | none => .error message

/-- `lasm_js_read_event`: the event at the front of the rest of a batch
(never empty: the loop reads while `offset < size`) and what follows it, or
the message the glue panics with. Each check is the C's (`at + n > size`,
the rest's length being `size - at`). -/
def readEvent : List UInt8 → Except String (JsEvent × List UInt8)
  | 1 :: r => do
    let malformed := "Lasm.JS: malformed completion"
    if r.length < 13 then throw malformed
    let (promise, r) ← orThrow (readWord64 r) malformed
    match r with
    | [] => throw malformed
    | failed :: r =>
      let (size, r) ← orThrow (readNumber r) malformed
      if r.length < size then throw malformed
      return (.completion promise (failed != 0) (r.take size), r.drop size)
  | 2 :: r => do
    let malformed := "Lasm.JS: malformed callback"
    if r.length < 16 then throw malformed
    let (call, r) ← orThrow (readWord64 r) malformed
    let (fn, r) ← orThrow (readNumber r) malformed
    let (size, r) ← orThrow (readNumber r) malformed
    if r.length < size then throw malformed
    return (.call call fn (r.take size), r.drop size)
  | 3 :: r => do
    let malformed := "Lasm.JS: malformed release"
    if r.length < 4 then throw malformed
    let (fn, r) ← orThrow (readNumber r) malformed
    return (.release fn, r)
  | _ => throw "Lasm.JS: unknown interop event"

/-- The glue's loop over a batch: the events it delivers, in order, and the
message it panics with at the first malformed event, if any. (What follows
an event is always shorter than the batch, as each event takes at least one
byte; the guard says so to Lean.) -/
def readEvents : List UInt8 → List JsEvent × Option String
  | [] => ([], none)
  | b :: bs =>
    match readEvent (b :: bs) with
    | .error message => ([], some message)
    | .ok (e, r) =>
      if r.length < bs.length + 1 then let (es, failure) := readEvents r; (e :: es, failure) else ([e], none)
termination_by bs => bs.length

/-! ## Requests -/

/-- `lasm_js_frame_request`: the count of released handles, the handles,
the payload. -/
def frameRequest (released : List Nat) (payload : List UInt8) : List UInt8 :=
  le32 released.length ++ released.flatMap le32 ++ payload

/-- `count` handles in a row. -/
def readNumbers : Nat → List UInt8 → Option (List Nat × List UInt8)
  | 0, bs => some ([], bs)
  | k + 1, bs => do
    let (v, r) ← readNumber bs
    let (vs, r) ← readNumbers k r
    return (v :: vs, r)

/-- `splitRequest(request)`: the released handles and the payload, or the
message of the `TypeError` it throws (as `jsFailure` words it). -/
def splitRequest (request : List UInt8) : Except String (List Nat × List UInt8) := do
  let malformed := "TypeError: Malformed Lasm.JS request"
  if request.length < 4 then throw malformed
  let (count, r) ← orThrow (readNumber request) malformed
  if request.length < 4 + 4 * count then throw malformed
  orThrow (readNumbers count r) malformed

/-- `lasm_js_frame_into`: the Lean promise, then the input. -/
def frameInto (promise : Nat) (input : List UInt8) : List UInt8 := u64le promise ++ input

/-- `intoPrefix(bytes)`: the promise and the input. -/
def intoPrefix (bytes : List UInt8) : Except String (Nat × List UInt8) := do
  let malformed := "TypeError: Malformed Lasm.JS request"
  if bytes.length < 8 then throw malformed
  orThrow (readWord64 bytes) malformed

end Lasm.Cli
