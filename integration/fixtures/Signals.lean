import Std.Async.Signal
import Std.Async

open Std.Async

-- Supplementary Linux differential coverage, separate from upstream tests.
def supportedSignals : Array (Signal × Nat) := #[
  (.sighup, 1), (.sigint, 2), (.sigquit, 3), (.sigtrap, 5), (.sigabrt, 6),
  (.sigusr1, 10), (.sigusr2, 12), (.sigalrm, 14), (.sigterm, 15), (.sigchld, 17),
  (.sigcont, 18), (.sigtstp, 20), (.sigttin, 21), (.sigttou, 22), (.sigurg, 23),
  (.sigxcpu, 24), (.sigxfsz, 25), (.sigvtalrm, 26), (.sigprof, 27),
  (.sigwinch, 28), (.sigio, 29), (.sigsys, 31)
]

def ready (number iteration : Nat) : IO Unit := do
  IO.println s!"ready {number} {iteration}"
  (← IO.getStdout).flush

def delivery (repeating : Bool) : Async Unit := do
  for (signal, number) in supportedSignals do
    let waiter ← Signal.Waiter.mk signal repeating
    for iteration in [:(if repeating then 2 else 1)] do
      let pending ← waiter.wait
      ready number iteration
      let actual ← await pending
      unless actual == Int.ofNat number do
        throw <| IO.userError s!"Expected signal {number}, received {actual}"
      IO.println s!"received {actual} {iteration}"
    waiter.stop
  IO.println "delivery complete"

def defaultAction (number : Nat) (stopped : Bool) : IO Unit := do
  let some (signal, _) := supportedSignals.find? (fun entry => entry.2 == number)
    | throw <| IO.userError "Unknown signal"
  if stopped then
    let waiter ← Signal.Waiter.mk signal true
    discard <| waiter.wait
    waiter.stop
  -- Include Deno's delayed inspector registration in the comparison.
  IO.sleep 700
  ready number 0
  IO.sleep 500
  IO.println "default survived"

def main (args : List String) : IO Unit := do
  match args with
  | ["once"] => (delivery false).wait
  | ["repeat"] => (delivery true).wait
  | [mode, number] =>
    let some number := number.toNat? | throw <| IO.userError "Invalid signal number"
    unless mode == "default" || mode == "stopped" do throw <| IO.userError "Invalid mode"
    defaultAction number (mode == "stopped")
  | _ => throw <| IO.userError "Expected once, repeat, default NUMBER or stopped NUMBER"
