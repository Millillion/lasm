/-
A pure-Lean request handler for edge isolates (supported from Lasm 0.2.0; see
docs/EDGE.md), with no npm package: `lasm build Main.lean --target workers`, then
`npx wrangler dev` in workers/. All routing and work is Lean code; Lasm.JS reads
the Request and makes the Response. `main` runs once per isolate at startup.
CI (.github/workflows/workers.yml) checks every route below.
-/
import Std.Data.HashMap
import Std.Async
import Std.Sync.Mutex
import Std.Time
import Lasm.JS
open Lasm.JS

def fib : Nat → Nat
  | 0 => 0 | 1 => 1 | n + 2 => fib n + fib (n + 1)

def primes (n : Nat) : Array Nat := Id.run do
  let mut sieve := Array.replicate (n + 1) true
  let mut out := #[]
  for i in [2:n + 1] do
    if sieve[i]! then
      out := out.push i
      let mut j := i * i
      while j ≤ n do
        sieve := sieve.set! j false
        j := j + i
  return out

def wordCount (text : String) : List (String × Nat) :=
  let m : Std.HashMap String Nat := (text.splitOn " ").foldl (init := {}) fun m w =>
    if w.isEmpty then m else m.insert w (m.getD w 0 + 1)
  m.toList.mergeSort (fun a b => a.1 ≤ b.1)

def jsonString (s : String) : String := "\"" ++ (s.replace "\\" "\\\\").replace "\"" "\\\"" ++ "\""

/-- Not tail recursive: uses `n` stack frames. -/
def depth : Nat → Nat
  | 0 => 0
  | n + 1 => depth n + 1

def route (method path body : String) : Async (Nat × String) := do
  match method, path.splitOn "/" with
  | "GET", ["", ""] => return (200, "{\"message\":\"Hello from pure Lean on the edge!\"}")
  | "GET", ["", "fib", n] => return (200, s!"\{\"fib\":{fib (n.toNat?.getD 20 |>.min 27)}}")
  | "GET", ["", "primes", n] =>
    let ps := primes (n.toNat?.getD 1000 |>.min 200000)
    return (200, s!"\{\"count\":{ps.size},\"last\":{ps.back?.getD 0}}")
  | "GET", ["", "bignum"] => return (200, s!"\{\"twoTo200\":\"{2 ^ 200}\"}")
  | "POST", ["", "words"] =>
    let fields := (wordCount body).map fun (w, n) => s!"{jsonString w}:{n}"
    return (200, "{" ++ ",".intercalate fields ++ "}")
  | "GET", ["", "time"] => return (200, s!"\{\"monoMs\":{← IO.monoMsNow},\"random\":{← IO.rand 0 1000000}}")
  | "GET", ["", "env"] => return (200, s!"\{\"GREETING\":{jsonString ((← IO.getEnv "GREETING").getD "")}}")
  | "GET", ["", "deep", n] => return (200, s!"\{\"depth\":{depth (n.toNat?.getD 1000)}}")
  -- Blocking IO.sleep: the Wasm stack suspends (JSPI); the isolate's other Lean work waits.
  | "GET", ["", "sleep", n] =>
    let t ← IO.monoMsNow
    IO.sleep (n.toNat?.getD 10).toUInt32
    return (200, s!"\{\"sleptMs\":{(← IO.monoMsNow) - t}}")
  -- Std.Async sleeps: no thread and no suspension; the request continues from a timer.
  | "GET", ["", "asleep", n] =>
    let ms := n.toNat?.getD 10
    let left ← Std.Async.async do Std.Async.sleep (.ofNat ms); pure (7 : Nat)
    let right ← Std.Async.async do Std.Async.sleep 1; pure (9 : Nat)
    return (200, s!"\{\"sum\":{(← Std.Async.await left) + (← Std.Async.await right)}}")
  -- A blocking wait for an Async computation (Async.block inside a handler).
  | "GET", ["", "block"] =>
    let v ← (Std.Async.Async.block (do Std.Async.sleep 2; pure (42 : Nat)) : IO Nat)
    return (200, s!"\{\"blocked\":{v}}")
  -- Task.get on unfinished work: the task sleeps, so the blocking get suspends.
  | "GET", ["", "task", n] =>
    let t ← (IO.asTask (do IO.sleep (n.toNat?.getD 10).toUInt32; pure (5 : Nat)) : IO _)
    match t.get with
    | .ok v => return (200, s!"\{\"task\":{v}}")
    | .error e => throw e
  | "GET", ["", "mutex"] =>
    let m ← Std.Mutex.new (0 : Nat)
    let ts ← (List.range 8).mapM fun _ => (IO.asTask (m.atomically (modify (· + 1))) : IO _)
    for t in ts do discard <| (IO.wait t : IO _)
    return (200, s!"\{\"count\":{← m.atomically get}}")
  | "GET", ["", "throw"] => throw (IO.userError "thrown from Lean")
  -- Std.Time's local zone: /etc/localtime from the edge's read-only file system (UTC).
  | "GET", ["", "date"] => return (200, s!"\{\"now\":\"{← Std.Time.PlainDateTime.now}\"}")
  | _, _ => return (404, "{\"error\":\"not found\"}")

/-- A Workers `fetch(request, env, ctx)` handler: reads the request through
Lasm.JS and answers with a `Response`; the routing above is plain Lean. -/
def fetchHandler : IO Value := do
  let responseClass ← (← global).get "Response"
  Function.ofFn fun args => do
    let .ref request _ := args[0]! | throw (IO.userError "expected a Request")
    let method ← request.get "method" String
    let url ← request.get "url" String
    -- The path: what follows the origin, up to a query.
    let path := ((url.splitOn "://").getLast!.dropWhile (· != '/')).toString.takeWhile (· != '?') |>.toString
    let body ← if method == "GET" || method == "HEAD" then pure "" else request.callMethodAwait "text" #[] String
    let (status, text) ← route method path body
    let headers := obj [("content-type", toJS "application/json")]
    let response ← responseClass.new #[toJS text, obj [("status", toJS status), ("headers", headers)]]
    return toJS response

def main : IO Unit := do
  IO.println s!"pure Lean edge app initialized (2^64 = {2 ^ 64})"
  let fetch ← Function.ofFn fun args => do
    let get (i : Nat) : String := match args[i]? with | some (.string s) => s | _ => ""
    let (status, body) ← route (get 0) (get 1) (get 2)
    return .array #[toJS status, toJS body]
  (← global).set "lasmFetch" fetch
  exportDefault (← fetchHandler)
