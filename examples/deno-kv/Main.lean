/-
A todo API on Deno KV, served with Deno.serve, written only against Lasm.JS.Deno (generated
from Deno's own TypeScript declarations) and Lasm.JS.Web.

  npx lasm build Main.lean --target deno
  deno run -A --unstable-kv deno/main.mjs        # Deno Deploy: the entrypoint is deno/main.mjs

Routes (JSON): `GET /todos` lists the todos in id order, `POST /todos` adds one (the body is
its title) and answers 201 with it, `DELETE /todos/<id>` removes one. Ids come from a counter
in KV, taken with an atomic check-and-set, so concurrent requests never share an id.
Environment: PORT (default 8000), KV_PATH (a local database file; Deno Deploy's KV when unset).
-/
import Lasm.JS.Web.Fetch
import Lasm.JS.Web.Url
import Lasm.JS.Deno.Runtime
import Lasm.JS.Deno.Serve
import Lasm.JS.Deno.Kv
open Lasm.JS Lasm.JS.Web

def respond (body : String) (status : Nat := 200) : IO Response :=
  Response.new (some (.usvString body)) (some { status := some status, headers := some (.record ⟨#[("content-type", "application/json")]⟩) })

/-- A JSON string literal. -/
def quote (s : String) : String :=
  "\"" ++ s.foldl (fun acc c => acc ++ match c with
    | '"' => "\\\"" | '\\' => "\\\\" | '\n' => "\\n" | '\r' => "\\r" | '\t' => "\\t"
    | c => if c.toNat < 0x20 then (let h := Nat.toDigits 16 c.toNat; "\\u00" ++ (if h.length < 2 then "0" else "") ++ String.ofList h) else c.toString) "" ++ "\""

def todoKey (id : Nat) : Array Deno.KvKeyPart := #["todos", (id.toFloat : Float)]
def counterKey : Array Deno.KvKeyPart := #["meta", "nextId"]

/-- The next id: read the counter, then commit counter + 1 only if nobody changed it meanwhile. -/
partial def nextId (kv : Deno.Kv) : Async Nat := do
  let e ← kv.get counterKey none
  let n := match e.value with | .number f => f.toUInt64.toNat | _ => 0
  let op ← (← kv.atomic).check #[{ key := counterKey, versionstamp := e.versionstamp }]
  let r ← (← op.set counterKey (toJS (n + 1)) none).commit
  if r.ok then return n + 1 else nextId kv

def handle (kv : Deno.Kv) (req : Request) : Async Response := do
  let path ← (← URL.new (← req.url)).pathname
  match ← req.method, path.splitOn "/" with
  | "GET", ["", "todos"] =>
    let entries ← (← kv.list { «prefix» := some #["todos"] } none).values
    let items := entries.filterMap fun e => match (e.key[1]? : Option Deno.KvKeyPart), e.value with
      | some (.double id), .string title => some s!"\{\"id\":{id.toUInt64},\"title\":{quote title}}"
      | _, _ => none
    respond s!"[{",".intercalate items.toList}]"
  | "POST", ["", "todos"] =>
    let title ← req.text
    let id ← nextId kv
    discard <| kv.set (todoKey id) (toJS title) none
    respond s!"\{\"id\":{id},\"title\":{quote title}}" 201
  | "DELETE", ["", "todos", n] =>
    match n.toNat? with
    | some id => do
      kv.delete (todoKey id)
      respond "{}"
    | none => respond "{\"error\":\"the id is not a number\"}" 400
  | _, _ => respond "{\"error\":\"not found\"}" 404

def main : IO Unit := do
  let env ← Deno.env
  let kv ← (Deno.openKv (← env.get "KV_PATH")).block
  let port := ((← env.get "PORT").bind String.toNat?).getD 8000
  let handler ← Deno.ServeHandler.ofFn fun req _ => handle kv req
  let server ← Deno.serveWithOptions { port := some port } handler
  server.finished.block
