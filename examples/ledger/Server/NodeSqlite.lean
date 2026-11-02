/-
SQLite on Node (and Deno): the built-in `node:sqlite` module (Node 24 and
later, no npm package). One binding, the rest is method calls. node:sqlite is
synchronous; `batch` runs in `BEGIN IMMEDIATE … COMMIT`, under a lock so that
two transactions never interleave.
-/
import Lasm.JS
import Std.Data.HashMap
import Std.Sync.Mutex
import Server.Sql
open Lasm.JS

namespace Ledger.Server.NodeSqlite

/-- `new DatabaseSync(path)` from node:sqlite. -/
@[js "node:sqlite" "new DatabaseSync"] opaque openDatabase : String → IO Value

/-- Opens (or creates) the database file and its tables. -/
def «open» (path : String) : IO Sql := do
  let db ← openDatabase path
  for pragma in ["PRAGMA journal_mode = WAL", "PRAGMA busy_timeout = 5000"] do
    let _ ← db.callMethod "exec" #[toJS pragma] Data
  -- Prepared statements, by SQL text.
  let cache ← IO.mkRef ({} : Std.HashMap String Value)
  let prepare (sql : String) : IO Value := do
    if let some st := (← cache.get)[sql]? then return st
    let st ← db.callMethod "prepare" #[toJS sql]
    cache.modify (·.insert sql st)
    return st
  let lock ← Std.BaseMutex.new
  let locked {α : Type} (act : IO α) : IO α := do
    lock.lock
    try act finally lock.unlock
  let runOne (sql : String) (params : Array Data) : IO Unit := do
    let _ ← (← prepare sql).callMethod "run" params Data
  let sql : Sql := {
    all := fun sql params => do (← prepare sql).callMethod "all" params (Array Data)
    run := fun sql params => locked (runOne sql params)
    batch := fun stmts => locked do
      let _ ← db.callMethod "exec" #[toJS "BEGIN IMMEDIATE"] Data
      try
        for (sql, params) in stmts do runOne sql params
        let _ ← db.callMethod "exec" #[toJS "COMMIT"] Data
      catch e =>
        let _ ← db.callMethod "exec" #[toJS "ROLLBACK"] Data
        throw e }
  (migrate sql).block
  return sql

end Ledger.Server.NodeSqlite
