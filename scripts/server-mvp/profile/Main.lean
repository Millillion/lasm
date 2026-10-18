/-
Server MVP profiling micro-benchmarks (no network). Built natively and with Lasm
by scripts/server-mvp/build-profile.mjs, run by scripts/server-mvp/profile.mjs.

  rpc N            N × IO.currentDir (one asynchronous Lasm host RPC each; getcwd natively)
  clock N          N × IO.monoNanosNow (one synchronous Lasm host RPC each; clock_gettime natively)
  date N           N × Std.Time.DateTime.nowAt "UTC" (what Std.Http does per response for `Date`)
  http K R         R mock connections, each K pipelined `GET /health` through
                   Std.Http.Server.serveConnection over Std.Http's in-memory
                   Mock transport: H1 parse, routing, JSON, serialize, tasks
  json N           N × (Json.parse + compute + compress) of the fixture's /json body
  alloc N          N × build and fold a 1,000-element List Nat (RC + allocation)
  sleep N          N × Async.sleep 0 (one Lean timer round trip each)
Each prints one line: `<mode> <count> <nanoseconds>`.
-/
import Std.Http
import Lean.Data.Json
open Std Async Http Lean

def respondJson (status : Http.Status) (json : Json) : Async (Response Body.Any) := do
  let response ← Response.new |>.status status |>.json json.compress
  return { response with body := Body.Any.ofBody response.body }

def compute (json : Json) : Except String Json := do
  let name ← (← json.getObjVal? "name").getStr?
  let numbers : Array Int ← (← (← json.getObjVal? "numbers").getArr?).mapM (·.getInt?)
  let some first := numbers[0]? | throw "numbers must be non-empty"
  let sum : Int := numbers.foldl (· + ·) 0
  let max : Int := numbers.foldl (fun a b => if b > a then b else a) first
  let min : Int := numbers.foldl (fun a b => if b < a then b else a) first
  return Json.mkObj [("name", .str name), ("count", toJson numbers.size), ("sum", toJson sum), ("max", toJson max),
    ("min", toJson min), ("reversed", .arr (numbers.reverse.map (fun (n : Int) => toJson n)))]

structure Health where
  dummy : Unit := ()

instance : Std.Http.Server.Handler Health where
  onRequest _ request := do
    let path := (toString request.line.uri.path).splitOn "/" |>.filter (· != "")
    match path with
    | ["health"] => respondJson .ok (Json.mkObj [("ok", .bool true)])
    | _ => respondJson .notFound (Json.mkObj [("error", .str "Route not found")])

def httpRound (raw : ByteArray) : IO Nat := do
  let (client, server) ← Std.Http.Internal.Mock.new
  Async.block do
    client.send raw
    client.getSendChan.close
    Std.Http.Server.serveConnection server ({} : Health)
      { maxBodySize := 1048576, maxHeaderBytes := 16384, maxHeaders := 50,
        headerTimeout := 2000, lingeringTimeout := 3000, keepAliveTimeout := ⟨5000, by decide⟩,
        maxConnections := 512, maxRequests := 1000000 } |>.run
  let mut total := 0
  repeat
    match ← client.tryRecv? with
    | none => break
    | some chunk => total := total + chunk.size
  return total

def timed (mode : String) (count : Nat) (action : IO Unit) : IO Unit := do
  let start ← IO.monoNanosNow
  action
  let stop ← IO.monoNanosNow
  IO.println s!"{mode} {count} {stop - start}"

def main (args : List String) : IO UInt32 := do
  let mode := args[0]?.getD "rpc"
  let n := (args[1]?.bind String.toNat?).getD 10000
  let r := (args[2]?.bind String.toNat?).getD 10
  match mode with
  | "rpc" =>
    let first ← IO.currentDir
    timed "rpc" n do
      for _ in [0:n] do
        let d ← IO.currentDir
        if d != first then throw (IO.userError "currentDir changed")
  | "clock" =>
    let mut acc := 0
    let start ← IO.monoNanosNow
    for _ in [0:n] do
      acc := acc + (← IO.monoNanosNow) % 2
    let stop ← IO.monoNanosNow
    IO.println s!"clock {n} {stop - start} parity {acc}"
  | "date" =>
    let mut acc := 0
    let start ← IO.monoNanosNow
    for _ in [0:n] do
      discard <| Std.Time.DateTime.nowAt "UTC"
      acc := acc + 1
    let stop ← IO.monoNanosNow
    IO.println s!"date {n} {stop - start} parity {acc}"
  | "http" =>
    let one := "GET /health HTTP/1.1\r\nHost: localhost\r\nUser-Agent: bench\r\n\r\n"
    let raw := String.join (List.replicate n one) |>.toUTF8
    let bytes ← httpRound raw -- warm up
    IO.println s!"response bytes per round {bytes}"
    timed "http" (n * r) do
      for _ in [0:r] do
        let b ← httpRound raw
        if b != bytes then throw (IO.userError s!"response size {b} != {bytes}")
  | "json" =>
    let prefix_ := "{\"name\":\"bench\",\"numbers\":[" ++ ",".intercalate ((List.range 63).map toString) ++ ","
    let mut size := 0
    let start ← IO.monoNanosNow
    for i in [0:n] do
      -- Depends on `i`, so the parse is not hoisted as a closed term.
      match Json.parse (prefix_ ++ toString (i % 7) ++ "]}") with
      | .error e => throw (IO.userError e)
      | .ok json => match compute json with
        | .error e => throw (IO.userError e)
        | .ok out => size := size + out.compress.length
    let stop ← IO.monoNanosNow
    IO.println s!"json {n} {stop - start} chars {size}"
  | "alloc" =>
    let mut acc := 0
    let start ← IO.monoNanosNow
    for i in [0:n] do
      let xs := (List.range 1000).map (· + i)
      acc := acc + xs.foldl (· + ·) 0
    let stop ← IO.monoNanosNow
    IO.println s!"alloc {n} {stop - start} sum {acc}"
  | "sleep" =>
    timed "sleep" n do
      Async.block do
        for _ in [0:n] do
          Async.sleep 0
  | _ => throw (IO.userError s!"unknown mode {mode}")
  return 0
