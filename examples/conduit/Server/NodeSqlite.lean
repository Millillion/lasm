/-
SQLite on Node: the built-in `node:sqlite` module (Node 24 and later, no npm
package). Two bindings, the rest is method calls. node:sqlite is synchronous,
so each call returns at once; writes take a lock so that a transaction
(`batch`) never interleaves with another request's writes.
-/
import Lasm.JS
import Std.Data.HashMap
import Std.Sync.Mutex
import Server.Sql
open Lasm.JS

namespace Conduit.Server.NodeSqlite

/-- `new DatabaseSync(path)` from node:sqlite. -/
@[js "node:sqlite" "new DatabaseSync"] opaque openDatabase : String → IO Value

def «open» (path : String) : IO Sql := do
  let db ← openDatabase path
  for pragma in ["PRAGMA journal_mode = WAL", "PRAGMA foreign_keys = ON", "PRAGMA busy_timeout = 5000"] do
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
  let runOne (sql : String) (params : Array Data) : IO Nat := do
    let r ← (← prepare sql).callMethod "run" params Data
    return num r "lastInsertRowid"
  return {
    all := fun sql params => do (← prepare sql).callMethod "all" params (Array Data)
    run := fun sql params => locked (runOne sql params)
    batch := fun stmts => locked do
      let _ ← db.callMethod "exec" #[toJS "BEGIN IMMEDIATE"] Data
      try
        for (sql, params) in stmts do discard <| runOne sql params
        let _ ← db.callMethod "exec" #[toJS "COMMIT"] Data
      catch e =>
        let _ ← db.callMethod "exec" #[toJS "ROLLBACK"] Data
        throw e }

end Conduit.Server.NodeSqlite
