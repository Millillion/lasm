/-
One HTTP handler in pure Lean (Lasm.Fetch, docs/FETCH.md), served unchanged on
every Lasm server target: Node (`lasm build Main.lean`), WASI and Spin
(`--target wasi`), Fastly Compute (`--target fastly`), Cloudflare Workers and
the other edge targets, Bun and Deno. CI (.github/workflows/wasi.yml) checks
every route below on each of them.
-/
import Std.Data.HashMap
import Std.Async
import Lasm.Fetch
open Lasm.Fetch

def fib : Nat → Nat
  | 0 => 0 | 1 => 1 | n + 2 => fib n + fib (n + 1)

def primes (n : Nat) : Nat := Id.run do
  let mut sieve := Array.replicate (n + 1) true
  let mut count := 0
  for i in [2:n + 1] do
    if sieve[i]! then
      count := count + 1
      let mut j := i * i
      while j ≤ n do
        sieve := sieve.set! j false
        j := j + i
  return count

def jsonString (s : String) : String :=
  "\"" ++ ((s.replace "\\" "\\\\").replace "\"" "\\\"").replace "\n" "\\n" ++ "\""

def wordCount (text : String) : List (String × Nat) :=
  let m : Std.HashMap String Nat := (text.splitOn " ").foldl (init := {}) fun m w =>
    if w.isEmpty then m else m.insert w (m.getD w 0 + 1)
  m.toList.mergeSort (fun a b => a.1 ≤ b.1)

def handle (req : Request) : Async Response := do
  match req.method, req.segments with
  | "GET", [] => return .json "{\"message\":\"Hello from Lean!\"}"
  | "GET", ["hello", name] => return .json s!"\{\"message\":{jsonString s!"Hello, {name}, from Lean!"}}"
  | "GET", ["fib", n] => return .json s!"\{\"fib\":{fib ((n.toNat?.getD 20).min 27)}}"
  | "GET", ["primes", n] => return .json s!"\{\"count\":{primes ((n.toNat?.getD 1000).min 200000)}}"
  | "GET", ["bignum"] => return .json s!"\{\"twoTo200\":\"{2 ^ 200}\"}"
  | "GET", ["query"] =>
    let fields := req.queryParams.map fun (k, v) => s!"{jsonString k}:{jsonString v}"
    return .json ("{" ++ ",".intercalate fields ++ "}")
  -- Echoes the body's bytes with the request's content type.
  | "POST", ["echo"] => return .bytes req.body ((req.header? "content-type").getD "application/octet-stream")
  | "POST", ["words"] =>
    let fields := (wordCount req.text).map fun (w, n) => s!"{jsonString w}:{n}"
    return .json ("{" ++ ",".intercalate fields ++ "}")
  -- Request headers in, response headers out (a repeated header too).
  | "GET", ["headers"] =>
    let agent := (req.header? "x-lasm-test").getD ""
    return Response.json s!"\{\"x-lasm-test\":{jsonString agent}}"
      |>.withHeader "x-lasm-reply" "from-lean" |>.withHeader "set-cookie" "a=1" |>.withHeader "set-cookie" "b=2"
  | "GET", ["status", code] => return Response.text s!"status {code}\n" (code.toNat?.getD 200).toUInt16
  | "GET", ["redirect"] => return .redirect "/hello/redirected"
  | "GET", ["empty"] => return .empty
  -- Std.Async timers: the handler waits without blocking.
  | "GET", ["asleep", n] =>
    let ms := (n.toNat?.getD 10).min 2000
    let t ← IO.monoMsNow
    let left ← Std.Async.async do Std.Async.sleep (.ofNat ms); pure (7 : Nat)
    let right ← Std.Async.async do Std.Async.sleep 1; pure (9 : Nat)
    let sum := (← Std.Async.await left) + (← Std.Async.await right)
    return .json s!"\{\"sum\":{sum},\"waited\":{decide ((← IO.monoMsNow) - t ≥ ms)}}"
  -- A blocking sleep (IO.sleep).
  | "GET", ["sleep", n] =>
    let ms := (n.toNat?.getD 10).min 2000
    let t ← IO.monoMsNow
    IO.sleep ms.toUInt32
    return .json s!"\{\"slept\":{decide ((← IO.monoMsNow) - t ≥ ms)}}"
  | "GET", ["tasks"] =>
    let ts ← (List.range 8).mapM fun i => (IO.asTask (pure (i * i)) : IO _)
    let mut total := 0
    for t in ts do total := total + (← IO.ofExcept (← (IO.wait t : IO _)))
    return .json s!"\{\"total\":{total}}"
  | "GET", ["env", name] => return .json s!"\{\"value\":{jsonString ((← IO.getEnv name).getD "")}}"
  | "GET", ["time"] => return .json s!"\{\"mono\":{decide ((← IO.monoNanosNow) > 0)},\"random\":{(← IO.getRandomBytes 8).size}}"
  | "GET", ["throw"] => throw (IO.userError "thrown from Lean")
  | _, _ => return .notFound

def main : IO Unit := serve handle
