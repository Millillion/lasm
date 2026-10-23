/-
Phase 4 step 1 threading prototype (throwaway). One program, three commands:
  bench          Lean -> JS call costs (JSON lines)
  serve PORT M   Node `http` server on the host; every request awaits a Lean
                 callback (M = 0: queued to a Lean dispatcher thread, config A;
                 M = 1: Lean closure called directly on the main thread, config B)
  compat         compatibility checks (tasks, blocking IO, Std.Async, mutexes,
                 exceptions both ways, handle lifetime)
The JavaScript side is experiments/js-interop/host/jsproto-host.mjs.
-/
import Std.Sync
import Std.Async
open Std Async

opaque JSValuePointed : NonemptyType
def JSValue : Type := JSValuePointed.type
instance : Nonempty JSValue := JSValuePointed.property

@[extern "jsproto_noop"] opaque jsNoop : IO Unit
@[extern "jsproto_random"] opaque jsRandom : IO Float
@[extern "jsproto_global"] opaque jsGlobal : @& String → IO JSValue
@[extern "jsproto_call_json"] opaque jsCallJson : @& JSValue → @& String → IO String
@[extern "jsproto_await_block"] opaque jsAwaitBlock : @& String → IO String
@[extern "jsproto_await_into"] opaque jsAwaitInto : @& IO.Promise (Except IO.Error ByteArray) → UInt32 → @& ByteArray → IO Unit
@[extern "jsproto_throw"] opaque jsThrow : @& String → IO Unit
@[extern "jsproto_new_object"] opaque jsNewObject : IO JSValue
@[extern "jsproto_stats"] opaque jsStats : IO String
@[extern "jsproto_serve"] opaque jsServe : UInt16 → UInt32 → IO Nat
@[extern "jsproto_exchange"] opaque jsExchange : @& ByteArray → IO ByteArray
@[extern "jsproto_reply"] opaque jsReply : @& ByteArray → IO Unit
@[extern "jsproto_delay_echo"] opaque jsDelayEcho : @& String → IO String
@[extern "jsproto_sort"] opaque jsSort : @& FloatArray → @& (Float → Float → Int8) → IO FloatArray
@[extern "jsproto_register"] opaque jsRegister : UInt32 → (String → IO String) → IO Unit
@[extern "jsproto_sort_direct"] opaque jsSortDirect : @& FloatArray → (Float → Float → Int8) → IO FloatArray

/-- Await a JS promise as a Lean task (op 94 start + runtime completion thread). -/
def jsAwaitTask (op : UInt32 := 205) (input : ByteArray := ByteArray.empty) : IO (Task (Except IO.Error ByteArray)) := do
  let promise ← IO.Promise.new
  jsAwaitInto promise op input
  return promise.result!

def jsonStr (s : String) : String :=
  "\"" ++ s.foldl (fun acc c => acc ++ (if c == '"' then "\\\"" else if c == '\\' then "\\\\" else if c == '\n' then "\\n" else if c.toNat < 32 then " " else c.toString)) "" ++ "\""

def quantile (sorted : Array Nat) (q : Float) : Nat :=
  if sorted.isEmpty then 0 else sorted[min (sorted.size - 1) (q * sorted.size.toFloat).toUInt64.toNat]!

/-- Per-call samples (ns) and the batch mean, as one JSON line. -/
def bench (name : String) (n : Nat) (action : IO Unit) : IO Unit := do
  for _ in [0:n / 10] do action
  let start ← IO.monoNanosNow
  for _ in [0:n] do action
  let total := (← IO.monoNanosNow) - start
  let mut samples : Array Nat := Array.mkEmpty n
  for _ in [0:n] do
    let a ← IO.monoNanosNow
    action
    samples := samples.push ((← IO.monoNanosNow) - a)
  let sorted := samples.qsort (· < ·)
  IO.println s!"\{\"bench\":\"{name}\",\"n\":{n},\"batchMeanNs\":{total / n},\"medianNs\":{quantile sorted 0.5},\"p90Ns\":{quantile sorted 0.9},\"p99Ns\":{quantile sorted 0.99},\"maxNs\":{sorted.back!}}"
  (← IO.getStdout).flush

def runBench (n : Nat) (sorts : List String) : IO Unit := do
  bench "clock" n (pure ())
  bench "noop" n jsNoop
  bench "random" n (discard jsRandom)
  let random ← jsGlobal "Math.random"
  bench "call_json_math_random" n (discard (jsCallJson random "[]"))
  bench "await_resolved_blocking" n (discard (jsAwaitBlock "x"))
  bench "await_resolved_task" n do
    let t ← jsAwaitTask
    match ← IO.wait t with
    | .ok _ => pure ()
    | .error e => throw e
  -- Synchronous JS -> Lean callback: Array.prototype.sort with a Lean comparator.
  let xs : FloatArray := Id.run do
    let mut a := FloatArray.emptyWithCapacity 2000
    for i in [0:2000] do a := a.push ((i * 7919 % 2003).toFloat)
    pure a
  let cmp : Float → Float → Int8 := fun a b => if a < b then -1 else if a > b then 1 else 0
  let sorters := [("sort_comparator_thread", fun (xs : FloatArray) => jsSort xs cmp),
                  ("sort_comparator_direct", fun (xs : FloatArray) => jsSortDirect xs cmp)]
  for (name, sorter) in sorters.filter (fun (name, _) => sorts.contains name) do
    try
      let before ← jsStats
      let start ← IO.monoNanosNow
      let mut ok := true
      for _ in [0:5] do
        let sorted ← sorter xs
        ok := ok && sorted.size == xs.size && (List.range (sorted.size - 1)).all fun i => sorted[i]! ≤ sorted[i+1]!
      let elapsed := (← IO.monoNanosNow) - start
      IO.println s!"\{\"bench\":\"{name}\",\"sorts\":5,\"elements\":{xs.size},\"sorted\":{ok},\"elapsedNs\":{elapsed},\"statsBefore\":{before},\"statsAfter\":{← jsStats}}"
    catch e => IO.println s!"\{\"bench\":\"{name}\",\"error\":{jsonStr (toString e)}}"
    (← IO.getStdout).flush

/-- The request handler both configurations call (String -> IO String). -/
def handler (request : String) : IO String :=
  pure s!"\{\"ok\":true,\"len\":{request.length}}"

/-- A handler that awaits a JavaScript promise (resolved by a 0-1 ms timer)
and checks that its own data survived the suspension. -/
def awaitingHandler (request : String) : IO String := do
  let echoed ← jsDelayEcho request
  if echoed != request then throw (IO.userError s!"corrupted: sent {request}, got {echoed}")
  pure s!"\{\"ok\":true,\"len\":{request.length}}"

def u64le (n : UInt64) : ByteArray := Id.run do
  let mut b := ByteArray.emptyWithCapacity 8
  for i in [0:8] do b := b.push (n >>> (8 * i).toUInt64).toUInt8
  pure b
def u32le (n : UInt32) : ByteArray := Id.run do
  let mut b := ByteArray.emptyWithCapacity 4
  for i in [0:4] do b := b.push (n >>> (8 * i).toUInt32).toUInt8
  pure b
def readU64 (b : ByteArray) (o : Nat) : UInt64 := Id.run do
  let mut v : UInt64 := 0
  for i in [0:8] do v := v ||| ((b.get! (o + i)).toUInt64 <<< (8 * i).toUInt64)
  pure v
def readU32 (b : ByteArray) (o : Nat) : UInt32 := Id.run do
  let mut v : UInt32 := 0
  for i in [0:4] do v := v ||| ((b.get! (o + i)).toUInt32 <<< (8 * i).toUInt32)
  pure v

/-- Configuration A dispatcher: one Lean thread long-polls the host for queued
callbacks (op 211), runs the handler, and returns the results with the next poll. -/
def encodeReply (id : UInt64) (result : Except IO.Error String) : ByteArray :=
  let (status, body) := match result with | .ok b => ((0 : UInt32), b) | .error e => (1, toString e)
  let bytes := body.toUTF8
  u64le id ++ u32le status ++ u32le bytes.size.toUInt32 ++ bytes

/-- Mode 3: one Lean task per queued callback; each task replies on its own (op 212). -/
partial def dispatchTasks : IO Unit := do
  let batch ← jsExchange ByteArray.empty
  let mut offset := 0
  while offset + 16 ≤ batch.size do
    let id := readU64 batch offset
    let length := (readU32 batch (offset + 12)).toNat
    let input := String.fromUTF8! (batch.extract (offset + 16) (offset + 16 + length))
    offset := offset + 16 + length
    discard <| IO.asTask (do
      let result ← (awaitingHandler input).toBaseIO
      discard <| (jsReply (encodeReply id result)).toBaseIO)
  dispatchTasks

partial def dispatch (replies : ByteArray) : IO Unit := do
  let batch ← jsExchange replies
  let mut out := ByteArray.empty
  let mut offset := 0
  while offset + 16 ≤ batch.size do
    let id := readU64 batch offset
    let length := (readU32 batch (offset + 12)).toNat
    let input := String.fromUTF8! (batch.extract (offset + 16) (offset + 16 + length))
    offset := offset + 16 + length
    let (status, body) ← try pure (0, ← handler input) catch e => pure (1, toString e)
    let bytes := body.toUTF8
    out := out ++ u64le id ++ u32le status ++ u32le bytes.size.toUInt32 ++ bytes
  dispatch out

def serve (port : UInt16) (mode : UInt32) : IO Unit := do
  if mode == 1 then jsRegister 0 handler
  if mode == 2 then jsRegister 1 awaitingHandler
  let actual ← jsServe port mode
  IO.println s!"Listening on http://127.0.0.1:{actual}"
  (← IO.getStdout).flush
  if mode == 0 then dispatch ByteArray.empty
  else if mode == 3 then dispatchTasks
  else
    -- B: the host calls the Lean closure directly; keep main alive without blocking the event loop.
    let p : IO.Promise Unit ← IO.Promise.new
    discard <| IO.wait p.result?

def check (only : List String) (name : String) (action : IO String) : IO Unit := do
  if !only.isEmpty && !only.contains name then return
  let start ← IO.monoNanosNow
  let result ← try (do let r ← action; pure s!"\"ok\":true,\"detail\":{jsonStr r}")
    catch e => pure s!"\"ok\":false,\"detail\":{jsonStr (toString e)}"
  IO.println s!"\{\"check\":\"{name}\",{result},\"ms\":{((← IO.monoNanosNow) - start) / 1000000}}"
  (← IO.getStdout).flush

partial def deep (n : Nat) : Nat := if n == 0 then 0 else deep (n - 1) + 1

def compat (only : List String) : IO Unit := do
  let check := check only
  check "pure_task_get" do
    let t := Task.spawn fun _ => (List.range 100000).foldl (· + ·) 0
    pure s!"{t.get}"
  check "io_asTask_file_io_wait" do
    IO.FS.writeFile "compat.txt" "hello"
    let t ← IO.asTask (IO.FS.readFile "compat.txt")
    match ← IO.wait t with
    | .ok s => pure s
    | .error e => throw e
  check "many_tasks_with_js_calls" do
    let tasks ← (List.range 8).mapM fun _ => IO.asTask (do for _ in [0:100] do jsNoop; discard jsRandom)
    let mut ok := 0
    for t in tasks do if let .ok _ ← IO.wait t then ok := ok + 1
    pure s!"{ok}/8"
  check "io_sleep" do IO.sleep 20; pure "slept"
  check "mutex_contention" do
    let m ← Std.Mutex.new (0 : Nat)
    let tasks ← (List.range 4).mapM fun _ => IO.asTask (for _ in [0:200] do m.atomically (modify (· + 1)))
    for t in tasks do discard <| IO.wait t
    pure s!"{← m.atomically get}"
  check "std_async_block_pure" do
    let v ← Async.block (pure 41)
    pure s!"{v + 1}"
  check "std_async_block_async_await" do
    Async.block do
      let t ← Async.async (pure 41)
      let v ← await t
      pure s!"{v + 1}"
  check "std_async_block_sleep_only" do
    Async.block (Async.sleep 10)
    pure "slept"
  check "std_async_block_sleep" do
    Async.block do
      Async.sleep 10
      let t ← Async.async (do Async.sleep 5; pure 41)
      let v ← await t
      pure s!"{v + 1}"
  check "await_promise_as_task_in_async" do
    let t ← jsAwaitTask 205 "v".toUTF8
    match ← IO.wait t with
    | .ok b => pure s!"bytes {b.size}"
    | .error e => throw e
  check "js_exception_to_lean" do
    try jsThrow "boom from JS"; pure "no exception"
    catch e => pure s!"caught: {e}"
  check "js_promise_rejection_to_lean_task" do
    let t ← jsAwaitTask 206 "rejected".toUTF8
    match ← IO.wait t with
    | .ok _ => pure "resolved?"
    | .error e => pure s!"error: {e}"
  check "js_handles_released_by_lean_rc" do
    let before ← jsStats
    for _ in [0:20000] do discard jsNewObject
    pure s!"before {before} after {← jsStats}"
  check "deep_recursion_100k" do pure s!"{deep 100000}"
  check "deep_recursion_1m" do pure s!"{deep 1000000}"

def main (args : List String) : IO UInt32 := do
  match args with
  | "bench" :: n :: sorts => runBench n.toNat! sorts
  | ["serve", port, mode] => serve port.toNat!.toUInt16 mode.toNat!.toUInt32
  | "compat" :: only => compat only
  | _ => IO.eprintln "usage: bench N [SORT...] | serve PORT MODE | compat [CHECK...]"; return 2
  return 0
