/-
The store: one table, the operations of every document's log, each row an
operation's line of the wire format at its position (`seq`) in its
document's log. `Sync.Reads` is built from three queries, each doing to the
table what its model in Proofs/Sync.lean does to a list; a commit inserts a
request's new operations at the positions after the log's end, in one
transaction. Every value is bound as a parameter (`?`).

Concurrency. Two commits to one document cannot both succeed for the same
positions: `(doc, seq)` is the primary key, so the second commit fails, rolls
back, and its request runs again on the longer log. `(doc, op)` is unique
too, so an operation is never stored twice.
-/
import Lasm.JS
import Tandem.Sync
import Std.Data.HashSet
open Lasm.JS

namespace Tandem.Server

/-- A SQLite connection, as a binding module provides it. -/
structure Sql where
  /-- The rows of a query, as plain objects. -/
  all : String → Array Data → Async (Array Data)
  /-- One statement that returns no rows. -/
  run : String → Array Data → Async Unit
  /-- Several statements, all or none: a failing statement rolls back the others and throws. -/
  batch : Array (String × Array Data) → Async Unit

/-- The table, created on first start. -/
def schema : List String := [
  "CREATE TABLE IF NOT EXISTS ops (doc TEXT NOT NULL, seq INTEGER NOT NULL, op TEXT NOT NULL,
     PRIMARY KEY (doc, seq), UNIQUE (doc, op))"]

def migrate (db : Sql) : Async Unit := do
  for stmt in schema do db.run stmt #[]

def nat (d : Data) (k : String) : Nat :=
  match d.field k with
  | .number n => n.toUInt64.toNat
  | .bigint i => i.toNat
  | .string s => s.toNat?.getD 0
  | _ => 0

def str (d : Data) (k : String) : String :=
  match d.field k with
  | .string s => s
  | _ => ""

/-- The queries of `Sync.sync`, for document `doc`. -/
def reads (db : Sql) (doc : String) : Sync.Reads Async where
  count := do
    let rows ← db.all "SELECT COUNT(*) AS n FROM ops WHERE doc = ?" #[toJS doc]
    return (rows[0]?.map (nat · "n")).getD 0
  known ops := do
    -- At most 90 operations per query (D1 binds at most 100 values).
    let lines := (ops.map Wire.encodeOp).toArray
    let mut found : Array String := #[]
    let mut i := 0
    while i < lines.size do
      let part := lines.extract i (i + 90)
      let marks := ", ".intercalate (part.toList.map fun _ => "?")
      let rows ← db.all s!"SELECT op FROM ops WHERE doc = ? AND op IN ({marks})" (#[toJS doc] ++ part.map toJS)
      found := found ++ rows.map (str · "op")
      i := i + 90
    let set := Std.HashSet.ofArray found
    return ops.filter fun op => set.contains (Wire.encodeOp op)
  slice start n := do
    let rows ← db.all "SELECT op FROM ops WHERE doc = ? AND seq >= ? ORDER BY seq LIMIT ?"
      #[toJS doc, toJS start, toJS n]
    -- Decoded without a monadic loop (see `Sync.Reads.known`).
    let decoded := rows.toList.map fun r => Wire.decodeOp (str r "op").toList
    if decoded.any Option.isNone then throw (IO.userError "the store holds an invalid operation")
    return decoded.filterMap id

/-- The statements that append `ops` to the log after position `n`. -/
def commitStatements (doc : String) (n : Nat) (ops : List Op) : Array (String × Array Data) :=
  (ops.zipIdx n).toArray.map fun (op, i) =>
    ("INSERT INTO ops (doc, seq, op) VALUES (?, ?, ?)", #[toJS doc, toJS i, toJS (Wire.encodeOp op)])

end Tandem.Server
