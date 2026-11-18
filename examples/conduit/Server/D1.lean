/-
SQLite on Cloudflare Workers: D1, through the generated bindings
(Lasm.JS.Cloudflare.D1). The database is the Worker's `DB` binding
(wrangler.toml `[[d1_databases]]`), which `ServerWorkers.lean` receives,
typed, with every request. D1's methods return promises, awaited in
`Async`. `batch` is D1's own `db.batch`, which runs as one transaction.
-/
import Lasm.JS
import Lasm.JS.Cloudflare.D1
import Server.Sql
open Lasm.JS Lasm.JS.Cloudflare

namespace Conduit.Server.D1

/-- Whether this isolate has created the tables. -/
initialize created : IO.Ref Bool ← IO.mkRef false

/-- `db.prepare(sql).bind(...params)` -/
def statement (db : D1Database) (sql : String) (params : Array Data) : IO D1PreparedStatement := do
  (← db.prepare sql).bind params

/-- The tables, created on the first call in each isolate
(`CREATE TABLE IF NOT EXISTS`, one batch). -/
def ensure (db : D1Database) : Async Unit := do
  unless ← created.get do
    discard <| db.batch (← schema.toArray.mapM fun sql => statement db sql #[])
    created.set true

/-- The D1 database `db` as a `Sql`. -/
def sql (db : D1Database) : Sql where
  all sql params := do
    ensure db
    return (← (← statement db sql params).all).results
  run sql params := do
    ensure db
    return (← (← statement db sql params).run).«meta».last_row_id.toUInt64.toNat
  batch stmts := do
    ensure db
    discard <| db.batch (← stmts.mapM fun (sql, params) => statement db sql params)

end Conduit.Server.D1
