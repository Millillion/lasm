/-
SQLite on Node (and Deno): the built-in `node:sqlite` module (Node 24 and
later, no npm package), through the generated bindings (Lasm.JS.Node.Sqlite:
`DatabaseSync`, `StatementSync`). node:sqlite is synchronous, but requests
run concurrently, so every call takes one lock: `batch` runs in
`BEGIN IMMEDIATE … COMMIT`, and no other statement on the connection (a read
included) runs in the middle of it. Whole requests are isolated from each
other by `Isolation` (`Server/Http.lean`).

Two calls are not the generated ones, because the generated module cannot
express them yet: `new DatabaseSync(path)` (Node documents the constructor,
but the bindings have none: `openDatabase` below), and running a statement
with SQL `NULL` among its parameters (`StatementSync.run`/`all` take
`(double or bigint or boolean or DOMString or Uint8Array)...`, without the
`null` Node accepts: `exec` below).
-/
import Lasm.JS
import Lasm.JS.Node.Sqlite
import Std.Data.HashMap
import Std.Sync.Mutex
import Server.Sql
open Lasm.JS Lasm.JS.Node

namespace Conduit.Server.NodeSqlite

/-- `new DatabaseSync(path)` from node:sqlite (no generated constructor yet). -/
@[js "node:sqlite" "new DatabaseSync"] opaque openDatabase : String → IO Value

/-- `statement.<method>(...params)` with any parameters, `null` included
(the generated `run` and `all` leave `null` out). -/
def exec (st : StatementSync) (method : String) (params : Array Data) : IO Data :=
  st.val.callMethod method params Data

/-- Opens (or creates) the database file and its tables. -/
def «open» (path : String) : IO Sql := do
  let db : DatabaseSync := { val := ← openDatabase path }
  for pragma in ["PRAGMA journal_mode = WAL", "PRAGMA foreign_keys = ON", "PRAGMA busy_timeout = 5000"] do
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
  let runOne (sql : String) (params : Array Data) : IO Nat := do
    return num (← exec (← prepare sql) "run" params) "lastInsertRowid"
  let sql : Sql := {
    -- Reads take the lock too: on this one connection, a read between a
    -- batch's statements would see its uncommitted writes.
    all := fun sql params => locked do
      match ← exec (← prepare sql) "all" params with
      | .array rows => return rows
      | _ => return #[]
    run := fun sql params => locked (runOne sql params)
    batch := fun stmts => locked do
      db.exec "BEGIN IMMEDIATE"
      try
        for (sql, params) in stmts do discard <| runOne sql params
        db.exec "COMMIT"
      catch e =>
        db.exec "ROLLBACK"
        throw e }
  (migrate sql).block
  return sql

/-- The database: `DATABASE_PATH`, else `conduit.db` in the working
directory, else (where that directory is read-only, as on the function
platforms) `conduit.db` in the temporary directory, which lasts only as long
as the process (the function's instance). -/
def openDefault : IO Sql := do
  if let some path ← IO.getEnv "DATABASE_PATH" then return ← «open» path
  try «open» "conduit.db"
  catch e =>
    let tmp := (← IO.getEnv "TMPDIR").getD "/tmp"
    IO.eprintln s!"conduit.db cannot be opened here ({e}); using {tmp}/conduit.db"
    «open» s!"{tmp}/conduit.db"

end Conduit.Server.NodeSqlite
