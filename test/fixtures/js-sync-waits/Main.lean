/- Waits inside synchronous Lasm.JS callbacks (Function.ofSyncFn), one numbered
part per line (scripts/ci/lasm-js-stress.mjs runs every part, and each alone:
`main.mjs 4`). Node's main thread waits for such a callback, so a wait there
that needs it can't finish. Each one now fails at once with the reason
(parts 2-8: before, parts 2-6 never finished); a wait for a task that finishes
by itself still works (1); a promise kept for later settles after the callback
returns (9); and callbacks still work after the failures (10). -/
import Lasm.JS
import Std.Internal.UV.Timer
import Std.Internal.UV.DNS
import Std.Internal.UV.TCP
open Lasm.JS

/-- Calls `f` synchronously from JavaScript: what it returned, or its error. -/
def callSync (f : Value) : IO String := do
  let reflect : Value ← (← global).get "Reflect" Value
  match ← (reflect.callMethod "apply" #[toJS f, .undefined, .array #[]] String).toBaseIO with
  | .ok v => return s!"returned {v}"
  | .error e => return s!"failed: {e}"

def sumTo (n : Nat) : Nat := Id.run do
  let mut acc := 0
  for i in [0:n+1] do acc := acc + i
  return acc

def main (args : List String) : IO Unit := do
  let want (n : Nat) := args.isEmpty || args.contains (toString n)
  let part (n : Nat) (label : String) (f : Array Data → IO Data) : IO Unit := do
    if want n then IO.println s!"{n}. {label}: {← callSync (← Function.ofSyncFn f)}"
  let g ← global
  let timers ← require "node:timers/promises"
  part 1 "a task that finishes by itself" fun _ => do
    -- Computed at run time (not a closed term the compiler evaluates once at start-up).
    let t ← IO.asTask (do return sumTo (3000000 + (← IO.monoNanosNow) % 1))
    return toJS (← IO.ofExcept (← IO.wait t))
  part 2 "a task that makes a JavaScript call" fun _ => do
    let t ← IO.asTask (g.callMethod "String" #[toJS (7 : Nat)] String)
    return toJS (← IO.ofExcept (← IO.wait t))
  part 3 "Async run with .block" fun _ => do
    let work : Async String := do return (← g.callMethod "String" #[toJS (8 : Nat)] String)
    return toJS (← work.block)
  part 4 "a timer started in the callback" fun _ => do
    let timer ← Std.Internal.UV.Timer.mk 5 false
    discard <| IO.wait (← timer.next).result?
    return toJS "fired"
  part 5 "a DNS lookup started in the callback" fun _ => do
    discard <| IO.wait (← Std.Internal.UV.DNS.getAddrInfo "localhost" "" 0).result?
    return toJS "resolved"
  -- A connection to a local server that sends nothing: a read waits for good.
  if want 6 then
    let net ← require "node:net"
    let events ← require "node:events"
    let server : Value ← net.callMethod "createServer" #[]
    let listening : Value ← events.callMethod "once" #[toJS server, toJS "listening"]
    let _ : Value ← server.callMethod "listen" #[toJS (0 : Nat), toJS "127.0.0.1"]
    discard <| listening.await Data
    let port : Nat ← (← server.callMethod "address" #[]).get "port" Nat
    let socket ← Std.Internal.UV.TCP.Socket.new
    let connected ← socket.connect (.v4 { addr := Std.Net.IPv4Addr.ofParts 127 0 0 1, port := port.toUInt16 })
    discard <| IO.wait connected.result?
    part 6 "a socket read started in the callback" fun _ => do
      discard <| IO.wait (← socket.recv? 64).result?
      return toJS "read"
    let _ : Value ← server.callMethod "unref" #[]
  part 7 "a JavaScript promise's task (Value.toTask)" fun _ => do
    let p : Value ← timers.callMethod "setTimeout" #[toJS (1 : Nat), toJS "never"]
    return toJS (← IO.ofExcept (← IO.wait (← p.toTask String)))
  part 8 "a JavaScript promise (Value.await)" fun _ => do
    let p : Value ← timers.callMethod "setTimeout" #[toJS (1 : Nat), toJS "never"]
    return toJS (← p.await String)
  if want 9 then
    let kept ← IO.mkRef (none : Option (Task (Except IO.Error String)))
    part 9 "a promise kept for later (Value.toTask)" fun _ => do
      let p : Value ← timers.callMethod "setTimeout" #[toJS (5 : Nat), toJS "late"]
      kept.set (some (← p.toTask String))
      return toJS "started"
    if let some t := ← kept.get then IO.println s!"9. after the callback returned, the promise settled: {← IO.ofExcept (← IO.wait t)}"
  part 10 "a callback after those" fun _ => return toJS "still works"
