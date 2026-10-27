/-
SQLite on Cloudflare Workers: D1, through the Worker's `DB` binding
(wrangler.toml `[[d1_databases]]`). No module to import: the binding is an
object in the Worker's `env`, and D1's methods return promises, awaited in
`Async`. `batch` is D1's own `db.batch`, which runs as one transaction.
-/
import Lasm.JS
import Lasm.Fetch
import Server.Sql
open Lasm.JS

namespace Conduit.Server.D1

/-- The D1 database bound as `name` in the Worker's `env` (it arrives with
each request, so it is read on every call). -/
def database (name : String) : IO Value := do
  let found : Data ← match ← Lasm.Fetch.platformEnv.get with
    | .ref env _ => (try env.get name Data catch _ => pure .undefined)
    | env@(.object _) => pure (env.field name)
    | _ => pure .undefined
  match found with
  | .ref db _ => return db
  | _ => throw (IO.userError s!"no D1 database bound as {name}: add [[d1_databases]] binding = \"{name}\" to wrangler.toml")

/-- `db.prepare(sql).bind(...params)` -/
def statement (db : Value) (sql : String) (params : Array Data) : IO Value := do
  (← db.callMethod "prepare" #[toJS sql]).callMethod "bind" params

/-- The D1 binding `name` as a `Sql`. The tables are created on the first
call in each isolate (`CREATE TABLE IF NOT EXISTS`, one batch). -/
def «open» (name : String := "DB") : IO Sql := do
  let ready ← IO.mkRef false
  let ensure : Async Value := do
    let db ← database name
    unless ← ready.get do
      let stmts ← schema.toArray.mapM fun sql => statement db sql #[]
      let _ ← db.callMethodAwait "batch" #[.array (stmts.map (.ref · ""))] Data
      ready.set true
    return db
  return {
    all := fun sql params => do
      let r ← (← statement (← ensure) sql params).callMethodAwait "all" #[] Data
      match r.field "results" with
      | .array rows => return rows
      | _ => return #[]
    run := fun sql params => do
      let r ← (← statement (← ensure) sql params).callMethodAwait "run" #[] Data
      return num (r.field "meta") "last_row_id"
    batch := fun stmts => do
      let db ← ensure
      let prepared ← stmts.mapM fun (sql, params) => statement db sql params
      let _ ← db.callMethodAwait "batch" #[.array (prepared.map (.ref · ""))] Data }

end Conduit.Server.D1
