/- Lasm.JS threads at start-up (scripts/ci/lasm-js-stress.mjs): a JavaScript callback
before any promise is awaited and without `waitForever` (the host starts the
interop poller), an IO-mode await, an Async await inside a callback, and a
synchronous callback that makes the program's first asynchronous runtime request
(Node's main thread then starts the completion thread for it), and a
synchronous callback that waits for JavaScript promises (each wait fails at once). -/
import Lasm.JS
import Std.Internal.UV.Timer
open Lasm.JS

def main : IO Unit := do
  let t0 ← IO.monoMsNow
  -- 1. A JavaScript callback while main sleeps (no waitForever): the host starts a poller.
  let hit ← IO.mkRef false
  let f ← Function.ofFn fun _ => do
    IO.println s!"callback after {(← IO.monoMsNow) - t0} ms"
    hit.set true
    return .undefined
  let g ← global
  let _ : Value ← g.callMethod "setTimeout" #[toJS f, toJS (10 : Nat)]
  -- Wait for the callback (up to 10 s) instead of a fixed time: a slow runner
  -- delivers it late, and every run's output must equal the first run's.
  let mut waited := 0
  while !(← hit.get) && waited < 10000 do
    IO.sleep 10
    waited := waited + 10
  IO.println s!"callback ran: {← hit.get}"
  -- 2. An IO-mode await of a promise (kind-1 event).
  let timers ← require "node:timers/promises"
  let p : Value ← timers.callMethod "setTimeout" #[toJS (20 : Nat), toJS "late"]
  let v ← p.await String
  IO.println s!"awaited {v}"
  -- 3. Async await inside a callback, then exit from JS.
  let done ← IO.Promise.new
  let cb ← Function.ofFn fun _ => do
    let w ← (← require "node:timers/promises").callMethodAwait "setTimeout" #[toJS (5 : Nat), toJS "async"] String
    IO.println s!"async {w}"
    done.resolve ()
    return .undefined
  let _ : Value ← g.callMethod "setTimeout" #[toJS cb, toJS (5 : Nat)]
  discard <| IO.wait done.result?
  -- 4. A synchronous callback that starts a timer, the first asynchronous runtime
  -- request: the completion thread starts while Node's main thread waits in the
  -- callback (it hung there before the wait ran work proxied to the main thread).
  let timer ← IO.mkRef (none : Option (IO.Promise Unit))
  let start ← Function.ofSyncFn fun _ => do
    let t ← Std.Internal.UV.Timer.mk 5 false
    timer.set (some (← t.next))
    return toJS (1 : Nat)
  let reflect : Value ← g.get "Reflect" Value
  let _ : Value ← reflect.callMethod "apply" #[toJS start, .undefined, .array #[]]
  IO.println "sync callback started a timer"
  if let some p := ← timer.get then discard <| IO.wait p.result?
  IO.println "timer fired"
  -- 5. A synchronous callback that waits for a JavaScript promise: the promise could
  -- settle only after the callback returns, so each wait fails at once with the
  -- reason (it hung before). An IO await, an awaited call, and an Async call run
  -- with `.block`.
  let explain (what : String) (r : Except IO.Error String) : String := match r with
    | .ok v => s!"{what}: returned {v}"
    | .error e => s!"{what}: failed clearly {((toString e).splitOn "inside a synchronous Lean callback").length == 2}: {e}"
  let waits ← Function.ofSyncFn fun _ => do
    let p : Value ← timers.callMethod "setTimeout" #[toJS (1 : Nat), toJS "never"]
    let a ← (p.await String).toBaseIO
    let b ← (timers.callMethodAwait "setTimeout" #[toJS (1 : Nat), toJS "never"] String : IO String).toBaseIO
    let c ← ((timers.callMethodAwait "setTimeout" #[toJS (1 : Nat), toJS "never"] String : Async String).block).toBaseIO
    return toJS s!"{explain "await" a}\n{explain "awaited call" b}\n{explain "Async call" c}"
  let answer : String ← reflect.callMethod "apply" #[toJS waits, .undefined, .array #[]] String
  IO.println answer
  IO.println "done"
