/-
SQLite on Node and Deno: the built-in `node:sqlite` module (Node 24 and later,
no npm package), through the generated bindings (`Lasm.JS.Node.Sqlite`:
`DatabaseSync`, `StatementSync`; the constructor, which Lasm 0.9.0 does not
generate, is the one binding written here until the release with
docs/api/decisions/0.4.md 0.4-46). node:sqlite is synchronous, but requests run
concurrently, so every call takes one lock: `batch` runs in
`BEGIN IMMEDIATE … COMMIT`, and no other statement on the connection (a read
included) runs in the middle of it.
-/
import Lasm.JS
import Lasm.JS.Node.Sqlite
import Std.Data.HashMap
import Std.Sync.Mutex
import Server.Sql
open Lasm.JS Lasm.JS.Node

namespace Ledger.Server.NodeSqlite

/-- `new DatabaseSync(path)`: Lasm 0.9.0's `Lasm.JS.Node.Sqlite` has no constructor
(the next release generates `DatabaseSync.new`, 0.4-46); this binding goes then. -/
@[js "node:sqlite" "new DatabaseSync"] opaque newDatabase : String → IO Value

/-- A bound value as node:sqlite takes it. Ledger binds only text (decimal numbers
included, `Sql.dec`), never NULL (which Lasm 0.9.0's binding cannot express; 0.4-45). -/
def param : Data → IO DoubleOrBigintOrBooleanOrDOMStringOrUint8Array
  | .string s => pure (.domString s)
  | .number n => pure (.double n)
  | .bigint i => pure (.bigint i)
  | .bool b => pure (.boolean b)
  | .bytes b => pure (.uint8Array b)
  | _ => throw (IO.userError "Ledger: a SQL parameter must be text, a number or bytes")

/-- No named parameters: an empty object, so that the positional values bind from `?1`
(Lasm 0.9.0 passes `namedParameters` first; 0.4-45 splits the two forms). -/
def positional : Data := .object #[]

/-- Opens (or creates) the database file and its tables. -/
def «open» (path : String) : IO Sql := do
  let db : DatabaseSync := { val := ← newDatabase path }
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
    discard <| (← prepare sql).run positional (← params.mapM param)
  let sql : Sql := {
    -- Reads take the lock too: on this one connection, a read between a
    -- batch's statements would see its uncommitted writes.
    all := fun sql params => locked do (← prepare sql).all positional (← params.mapM param)
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

end Ledger.Server.NodeSqlite
