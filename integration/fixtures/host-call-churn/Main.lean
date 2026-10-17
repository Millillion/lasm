-- Host-call churn: T dedicated threads each make N host calls (IO.currentDir,
-- IO.appPath, stdout flush) and check every reply against the first one, so a
-- reply delivered to the wrong caller is detected. Memory is sampled externally.
def worker (kind : Nat) (n : Nat) : IO Nat := do
  let expected ← if kind % 2 == 0 then IO.currentDir else IO.appPath
  let mut bad := 0
  for _ in [0:n] do
    let value ← if kind % 2 == 0 then IO.currentDir else IO.appPath
    if value != expected then bad := bad + 1
    (← IO.getStdout).flush
  return bad

def main (args : List String) : IO UInt32 := do
  let n := (args[0]?.bind String.toNat?).getD 100000
  let threads := (args[1]?.bind String.toNat?).getD 4
  let rounds := (args[2]?.bind String.toNat?).getD 5
  for r in [0:rounds] do
    let tasks ← (List.range threads).mapM fun k => IO.asTask (worker k (n / rounds)) .dedicated
    let mut bad := 0
    for t in tasks do
      match ← IO.wait t with
      | .ok b => bad := bad + b
      | .error e => throw e
    IO.println s!"round {r} calls {(r + 1) * (n / rounds) * threads * 3} mismatched {bad}"
    (← IO.getStdout).flush
  return 0
