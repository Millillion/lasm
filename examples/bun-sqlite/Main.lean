/-
A todo API on bun:sqlite, served with Bun.serve, written only against Lasm.JS.Bun (generated
from Bun's own TypeScript declarations) and Lasm.JS.Web.

  npx lasm build Main.lean --target bun
  bun bun/main.mjs

Routes (JSON): `GET /todos` lists the todos in id order, `POST /todos` adds one (the body is its
title) and answers 201 with it, `DELETE /todos/<id>` removes one. Environment: PORT (default
3000), DB_PATH (the SQLite file; `:memory:` when unset).
-/
import Lasm.JS.Web
import Lasm.JS.Bun
open Lasm.JS Lasm.JS.Web

def respond (body : String) (status : Nat := 200) : IO Response :=
  Response.new (some (.usvString body)) (some { status := some status, headers := some (.record ⟨#[("content-type", "application/json")]⟩) })

/-- A JSON string literal. -/
def quote (s : String) : String :=
  "\"" ++ s.foldl (fun acc c => acc ++ match c with
    | '"' => "\\\"" | '\\' => "\\\\" | '\n' => "\\n" | '\r' => "\\r" | '\t' => "\\t"
    | c => if c.toNat < 0x20 then (let h := Nat.toDigits 16 c.toNat; "\\u00" ++ (if h.length < 2 then "0" else "") ++ String.ofList h) else c.toString) "" ++ "\""

def todoJson (d : Data) : String :=
  let id := match d.field "id" with | .number n => toString n.toUInt64 | _ => "0"
  let title := match d.field "title" with | .string s => s | _ => ""
  s!"\{\"id\":{id},\"title\":{quote title}}"

def handle (db : Bun.Database) (req : Request) : Async Response := do
  let path ← (← URL.new (← req.url)).pathname
  match ← req.method, path.splitOn "/" with
  | "GET", ["", "todos"] =>
    let rows ← (← db.query "select id, title from todos order by id").all
    respond s!"[{",".intercalate (rows.map todoJson).toList}]"
  | "POST", ["", "todos"] =>
    let title ← req.text
    let rows ← (← db.query "insert into todos (title) values (?) returning id, title").all #[#[toJS title]]
    respond (todoJson (rows[0]?.getD .null)) 201
  | "DELETE", ["", "todos", n] =>
    match n.toNat? with
    | some id => do
      discard <| (← db.query "delete from todos where id = ?").run #[#[toJS id]]
      respond "{}"
    | none => respond "{\"error\":\"the id is not a number\"}" 400
  | _, _ => respond "{\"error\":\"not found\"}" 404

def main : IO Unit := do
  let env ← Bun.env
  let get k := env.entries.find? (·.1 == k) |>.map (·.2)
  let db ← Bun.Database.new (some ((get "DB_PATH").getD ":memory:")) none
  discard <| db.run "create table if not exists todos (id integer primary key autoincrement, title text not null)"
  let port := ((get "PORT").bind String.toNat?).getD 3000
  let fetch ← Bun.ServeOptionsFetch.ofFn fun req _ => handle db req
  let server ← Bun.serve { fetch := some fetch, port := some (.unsignedShort port) }
  IO.println s!"listening on {← (← server.url).href}"
  -- Serve until the process is stopped: wait on a promise nothing resolves.
  let forever : IO.Promise Unit ← IO.Promise.new
  (Std.Async.await forever : Async Unit).block
