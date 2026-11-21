/-
SQLite on Node (and Deno): the built-in `node:sqlite` module (Node 24 and
later, no npm package), through the generated bindings (Lasm.JS.Node.Sqlite:
`DatabaseSync`, `StatementSync`). node:sqlite is synchronous, but requests
run concurrently, so every call takes one lock: `batch` runs in
`BEGIN IMMEDIATE … COMMIT`, and no other statement on the connection (a read
included) runs in the middle of it. Whole requests are isolated from each
other by `Isolation` (`Server/Http.lean`).

SQL `NULL` is a parameter of `none` (the generated `run` and `all` take
`Array (Option …)`).
-/
import Lasm.JS
import Lasm.JS.Node.Sqlite
import Std.Data.HashMap
import Std.Sync.Mutex
import Server.Sql
open Lasm.JS Lasm.JS.Node

namespace Conduit.Server.NodeSqlite

/-- A statement parameter: `none` is SQL `NULL`. -/
def param : Data → IO (Option DoubleOrBigintOrBooleanOrDOMStringOrUint8Array)
  | .null | .undefined => pure none
  | .number n => pure (some (.double n))
  | .bigint i => pure (some (.bigint i))
  | .bool b => pure (some (.boolean b))
  | .string s => pure (some (.domString s))
  | .bytes b => pure (some (.uint8Array b))
  | d => throw (IO.userError s!"node:sqlite: a statement parameter cannot be {d.describe}")

/-- Opens (or creates) the database file and its tables. -/
def «open» (path : String) : IO Sql := do
  let db ← DatabaseSync.new (.domString path)
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
    return num (← (← prepare sql).run (← params.mapM param)) "lastInsertRowid"
  let sql : Sql := {
    -- Reads take the lock too: on this one connection, a read between a
    -- batch's statements would see its uncommitted writes.
    all := fun sql params => locked do
      (← prepare sql).all (← params.mapM param)
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
