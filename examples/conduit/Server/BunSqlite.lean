/-
SQLite on Bun: the built-in `bun:sqlite` module, through the generated
bindings (Lasm.JS.Bun.Sqlite: `Database`, `Statement`); `db.query(sql)`
caches the prepared statement. Like node:sqlite it is synchronous, and every
call takes one lock, so no statement (a read included) runs in the middle of
a `batch`. Whole requests are isolated from each other by `Isolation`
(`Server/Http.lean`).
-/
import Lasm.JS
import Lasm.JS.Bun.Sqlite
import Std.Sync.Mutex
import Server.Sql
open Lasm.JS Lasm.JS.Bun

namespace Conduit.Server.BunSqlite

/-- The id an insert gave its row. -/
def rowId : DoubleOrBigint → Nat
  | .double n => n.toUInt64.toNat
  | .bigint i => i.toNat

/-- Opens (or creates) the database file and its tables. -/
def «open» (path : String) : IO Sql := do
  let db ← Database.new (some path) (some (.databaseOptions { create := some true }))
  for pragma in ["PRAGMA journal_mode = WAL", "PRAGMA foreign_keys = ON", "PRAGMA busy_timeout = 5000"] do
    discard <| db.run pragma
  let lock ← Std.BaseMutex.new
  let locked {α : Type} (act : IO α) : IO α := do
    lock.lock
    try act finally lock.unlock
  -- The parameters go as one array: `statement.run([a, b])` binds `a` and `b`.
  let runOne (sql : String) (params : Array Data) : IO Nat := do
    return rowId (← (← db.query sql).run #[params]).lastInsertRowid
  let sql : Sql := {
    -- Reads take the lock too: on this one connection, a read between a
    -- batch's statements would see its uncommitted writes.
    all := fun sql params => locked do (← db.query sql).all #[params]
    run := fun sql params => locked (runOne sql params)
    batch := fun stmts => locked do
      discard <| db.run "BEGIN IMMEDIATE"
      try
        for (sql, params) in stmts do discard <| runOne sql params
        discard <| db.run "COMMIT"
      catch e =>
        discard <| db.run "ROLLBACK"
        throw e }
  (migrate sql).block
  return sql

end Conduit.Server.BunSqlite
