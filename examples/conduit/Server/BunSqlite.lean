/-
SQLite on Bun: the built-in `bun:sqlite` module. One binding (the
`Database` class); `db.query(sql)` caches the prepared statement. Like
node:sqlite it is synchronous; writes take a lock so that a transaction
(`batch`) never interleaves with another request's writes.
-/
import Lasm.JS
import Std.Sync.Mutex
import Server.Sql
open Lasm.JS

namespace Conduit.Server.BunSqlite

/-- `new Database(path, options)` from bun:sqlite. -/
@[js "bun:sqlite" "new Database"] opaque openDatabase : String → Data → IO Value

/-- Opens (or creates) the database file and its tables. -/
def «open» (path : String) : IO Sql := do
  let db ← openDatabase path (obj [("create", toJS true)])
  for pragma in ["PRAGMA journal_mode = WAL", "PRAGMA foreign_keys = ON", "PRAGMA busy_timeout = 5000"] do
    let _ ← db.callMethod "run" #[toJS pragma] Data
  let lock ← Std.BaseMutex.new
  let locked {α : Type} (act : IO α) : IO α := do
    lock.lock
    try act finally lock.unlock
  let runOne (sql : String) (params : Array Data) : IO Nat := do
    let r ← (← db.callMethod "query" #[toJS sql]).callMethod "run" params Data
    return num r "lastInsertRowid"
  let sql : Sql := {
    all := fun sql params => do (← db.callMethod "query" #[toJS sql]).callMethod "all" params (Array Data)
    run := fun sql params => locked (runOne sql params)
    batch := fun stmts => locked do
      let _ ← db.callMethod "run" #[toJS "BEGIN IMMEDIATE"] Data
      try
        for (sql, params) in stmts do discard <| runOne sql params
        let _ ← db.callMethod "run" #[toJS "COMMIT"] Data
      catch e =>
        let _ ← db.callMethod "run" #[toJS "ROLLBACK"] Data
        throw e }
  (migrate sql).block
  return sql

end Conduit.Server.BunSqlite
