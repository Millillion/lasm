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

/-- `new DatabaseSync(path)` from node:sqlite. Bound by hand: the generated
`DatabaseSync` has no constructor yet (Node's docs give it only as a heading,
which Lasm.JS.Node's lowering states per class; a follow-up of milestone 0.4).
The rest is the generated binding. -/
@[js "node:sqlite" "new DatabaseSync"] opaque newDatabaseSync : String → IO Value

def openDatabase (path : String) : IO DatabaseSync := do
  return { val := ← newDatabaseSync path }

/-- A parameter as node:sqlite binds it. -/
def param : Data → DoubleOrBigintOrBooleanOrDOMStringOrUint8Array
  | .string s => .domString s
  | .number n => .double n
  | .bigint i => .bigint i
  | .bool b => .boolean b
  | .bytes b => .uint8Array b
  | _ => .domString ""

/-- Opens (or creates) the database file and its tables. -/
def «open» (path : String) : IO Sql := do
  let db ← openDatabase path
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
  -- The first argument is the named parameters (none: an empty object), then the anonymous ones.
  let runOne (sql : String) (params : Array Data) : IO Unit := do
    discard <| (← prepare sql).run (.object #[]) (params.map param)
  let sql : Sql := {
    -- Reads take the lock too: on this one connection, a read between a
    -- batch's statements would see its uncommitted writes.
    all := fun sql params => locked do (← prepare sql).all (.object #[]) (params.map param)
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
