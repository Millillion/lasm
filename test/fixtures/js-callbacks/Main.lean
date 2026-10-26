/- Lasm.JS threads at start-up (scripts/ci/lasm-js-stress.mjs): a JavaScript callback
before any promise is awaited and without `waitForever` (the host starts the
interop poller), an IO-mode await, and an Async await inside a callback. -/
import Lasm.JS
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
  IO.sleep 400
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
  IO.println "done"
