/-
SQLite on Node (and Deno): the built-in `node:sqlite` module (Node 24 and
later, no npm package), through the generated `Lasm.JS.Node.Sqlite`
(`DatabaseSync`, `StatementSync`). node:sqlite is synchronous, but requests
run concurrently, so every call takes one lock: `batch` runs in
`BEGIN IMMEDIATE … COMMIT`, and no other statement on the connection (a read
included) runs in the middle of it.
-/
import Lasm.JS
import Lasm.JS.Node.Sqlite
import Std.Data.HashMap
import Std.Sync.Mutex
import Server.Sql
open Lasm.JS Lasm.JS.Node

namespace Tandem.Server.NodeSqlite

/-- A parameter as node:sqlite binds it: text, a number, bytes, or NULL (`none`). -/
def param : Data → Option DoubleOrBigintOrBooleanOrDOMStringOrUint8Array
  | .string s => some (.domString s)
  | .number n => some (.double n)
  | .bigint i => some (.bigint i)
  | .bool b => some (.boolean b)
  | .bytes b => some (.uint8Array b)
  | _ => none

/-- Opens (or creates) the database file and its tables. -/
def «open» (path : String) : IO Sql := do
  let db ← DatabaseSync.new (.domString path)
  for pragma in ["PRAGMA journal_mode = WAL", "PRAGMA busy_timeout = 5000"] do
    db.exec pragma
  -- Prepared statements, by SQL text.
  let cache ← IO.mkRef ({} : Std.HashMap String StatementSync)
  let prepare (sql : String) : IO StatementSync := do
    if let some st := (← cache.get)[sql]? then return st
    let st ← db.prepare sql
    cache.modify (·.insert sql st)
    return st
  let lock ← Std.BaseMutex.new
  let locked {α : Type} (act : IO α) : IO α := do
    lock.lock
    try act finally lock.unlock
  let runOne (sql : String) (params : Array Data) : IO Unit := do
    discard <| (← prepare sql).run (params.map param)
  let sql : Sql := {
    -- Reads take the lock too: on this one connection, a read between a
    -- batch's statements would see its uncommitted writes.
    all := fun sql params => locked do (← prepare sql).all (params.map param)
    run := fun sql params => locked (runOne sql params)
    batch := fun stmts => locked do
      db.exec "BEGIN IMMEDIATE"
      try
        for (sql, params) in stmts do runOne sql params
        db.exec "COMMIT"
      catch e =>
        db.exec "ROLLBACK"
        throw e }
  (migrate sql).block
  return sql

end Tandem.Server.NodeSqlite
