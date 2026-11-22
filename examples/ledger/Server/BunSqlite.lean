/-
SQLite on Bun: the built-in `bun:sqlite` module, through the generated bindings
(`Lasm.JS.Bun.Sqlite`: `Database`, `Statement`); `db.query(sql)` caches the
prepared statement. Like node:sqlite it is synchronous; `batch` runs in
`BEGIN IMMEDIATE … COMMIT`, under a lock so that two transactions never
interleave.
-/
import Lasm.JS.Bun.Sqlite
import Std.Sync.Mutex
import Server.Sql
open Lasm.JS Lasm.JS.Bun

namespace Ledger.Server.BunSqlite

/-- Opens (or creates) the database file and its tables. -/
def «open» (path : String) : IO Sql := do
  let db ← Database.new (some path) (some (.databaseOptions { create := some true }))
  for pragma in ["PRAGMA journal_mode = WAL", "PRAGMA busy_timeout = 5000"] do
    discard <| db.run pragma
  let lock ← Std.BaseMutex.new
  let locked {α : Type} (act : IO α) : IO α := do
    lock.lock
    try act finally lock.unlock
  let runOne (sql : String) (params : Array Data) : IO Unit := do
    discard <| (← db.query sql).run params
  let sql : Sql := {
    all := fun sql params => locked do (← db.query sql).all params
    run := fun sql params => locked (runOne sql params)
    batch := fun stmts => locked do
      discard <| db.run "BEGIN IMMEDIATE"
      try
        for (sql, params) in stmts do runOne sql params
        discard <| db.run "COMMIT"
      catch e =>
        discard <| db.run "ROLLBACK"
        throw e }
  (migrate sql).block
  return sql

end Ledger.Server.BunSqlite
