/- Lasm.JS end-to-end fixture: every line of output is checked (expected.txt). -/
import Lasm.JS
import Lean.Data.Json
open Lasm.JS

structure Config where
  name : String
  tags : Array String
  limits : Lean.Json
  missing : Option Nat
  deriving FromJS, ToJS

inductive Level where
  | low | high
  deriving ToJS, FromJS, BEq

@[js "local-lib" "greet"] opaque greet : String → IO String
@[js "local-lib" "sum"] opaque sum3 : Float → Float → Float → IO Float
@[js "local-lib" "later"] opaque later : String → Nat → IO String
@[js "local-lib" "later"] opaque laterTask : String → Nat → IO (Task (Except IO.Error String))
@[js "local-lib" "fail"] opaque fail : String → IO Unit
@[js "local-lib" "new Counter"] opaque newCounter : Nat → IO Value
@[js "local-lib" "nested.deep.answer"] opaque answer : IO Nat
@[js "local-lib" "mapSync"] opaque mapSync : Array Nat → Value → IO (Array Nat)
@[js "local-lib" "applyAsync"] opaque applyAsync : Value → String → IO String
@[js "node:path" "posix.join"] opaque joinPath : String → String → IO String
@[js "globalThis" "structuredClone"] opaque clone : Data → IO Data
@[js "local-lib" "later"] opaque laterAsync : String → Nat → Async String
@[js "local-lib" "fail"] opaque failAsync : String → Async Unit
@[js "local-lib" "fanOut"] opaque fanOut : Value → Nat → Async Nat

/-- Awaiting in `Async` (bindings, method calls, promises, handlers) holds no Lean thread. -/
def asyncPart (lib : Value) : Async Unit := do
  IO.println s!"async binding: {← laterAsync "async" 5}"
  try failAsync "late boom" catch e => IO.println s!"async rejection: {e}"
  IO.println s!"async method: {← lib.callMethodAwait "later" #[toJS "method", toJS 1] String}"
  let promise ← lib.callMethod "later" #[toJS "promise", toJS 1]
  IO.println s!"async await: {← promise.await String}"
  let waits ← Function.ofFn1 fun (s : String) => do return (← laterAsync s 5).toUpper
  IO.println s!"async handler: {← lib.callMethodAwait "applyAsync" #[toJS waits, toJS "waits"] String}"
  -- 500 concurrent calls of a Lean function that awaits a 100 ms timer.
  let slow ← Function.ofFn1 fun (i : Nat) => do
    let _ ← laterAsync "slow" 100
    return i
  let ms ← fanOut slow 500
  -- Blocking a Lean worker per call would take 500 / workers × 100 ms (12 s or more on 4 CPUs).
  IO.println s!"fan-out of 500 waiting handlers under 5 s: {decide (ms < 5000)}"

def main : IO Unit := do
  IO.println s!"available: {isAvailable}"
  IO.println s!"greet: {← greet "Lean"}"
  IO.println s!"sum: {← sum3 1 2 3.5}"
  IO.println s!"later: {← later "awaited" 5}"
  let t ← laterTask "as a task" 5
  IO.println s!"task: {← IO.ofExcept (← IO.wait t)}"
  try fail "boom" catch e => IO.println s!"rejection: {e}"
  let counter ← newCounter 10
  let _ : Nat ← counter.callMethod "add" #[toJS 5] Nat
  IO.println s!"counter: {← counter.get "value" Nat}"
  IO.println s!"nested: {← answer}"
  IO.println s!"path: {← joinPath "a" "b"}"
  let lib ← require "local-lib"
  let config ← lib.get "config" Config
  IO.println s!"config: {config.name} {config.tags} {config.limits.compress} {config.missing}"
  IO.println s!"clone: {(← clone (toJS config)).describe}"
  IO.println s!"enum: {match (FromJS.fromJS (Data.string "high") : Except String Level) with | .ok .high => true | _ => false}"
  try
    let _ ← lib.get "greet" Nat
  catch e => IO.println s!"mismatch: {e}"
  let double ← Function.ofSyncFn fun args => do
    let n : Nat ← decodeAs Nat "double" args[0]!
    IO.println s!"  sync callback {n}"
    return toJS (2 * n)
  IO.println s!"mapSync: {← mapSync #[1, 2, 3] double}"
  let shout ← Function.ofFn1 fun (s : String) => do
    let g ← greet s
    return g.toUpper
  IO.println s!"applyAsync: {← applyAsync shout "callbacks"}"
  let failing ← Function.ofFn fun _ => throw (IO.userError "from Lean")
  try
    let _ ← applyAsync failing "x"
  catch e => IO.println s!"lean error in JS: {e}"
  (asyncPart lib).block
  for _ in [0:2000] do discard <| lib.get "config"
  let held := ((← stats).splitOn "\"values\":" |>.getD 1 "" |>.takeWhile Char.isDigit).toNat!
  IO.println s!"handles released: {decide (held < 20)}"
