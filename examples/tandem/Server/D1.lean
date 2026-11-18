/-
SQLite on Cloudflare Workers: D1, through the Worker's `DB` binding
(wrangler.toml `[[d1_databases]]`, a field of `ServerWorkers.lean`'s `Env`),
with Lasm.JS.Cloudflare's generated `D1Database`. D1's methods return
promises, awaited in `Async`. `batch` is D1's own `db.batch`, which runs as
one transaction: a failing statement rolls back the whole batch.
-/
import Lasm.JS.Cloudflare.D1
import Server.Sql
open Lasm.JS Lasm.JS.Cloudflare

namespace Tandem.Server.D1

/-- `db` as a `Sql`. The tables are created on the first call in each
isolate (`CREATE TABLE IF NOT EXISTS`, one batch). -/
def «open» (db : D1Database) : IO Sql := do
  let ready ← IO.mkRef false
  -- `db.prepare(sql).bind(...params)`
  let statement (sql : String) (params : Array Data) : IO D1PreparedStatement := do
    (← db.prepare sql).bind params
  -- In `IO`, where the loop compiles to a loop: an `Async` loop of a commit's
  -- thousands of statements would grow the JavaScript stack (#90).
  let prepare (stmts : Array (String × Array Data)) : IO (Array D1PreparedStatement) :=
    stmts.mapM fun (sql, params) => statement sql params
  let ensure : Async Unit := do
    unless ← ready.get do
      discard <| db.batch (← prepare (schema.toArray.map (·, #[])))
      ready.set true
  return {
    all := fun sql params => do
      ensure
      return (← (← statement sql params).all).results
    run := fun sql params => do
      ensure
      discard (← statement sql params).run
    batch := fun stmts => do
      ensure
      discard <| db.batch (← prepare stmts) }

end Tandem.Server.D1
