/-
The sync server's logic, for one document: an append-only log of the
operations it has accepted, in arrival order, each once.

A client sends its cursor (how much of the log it has) and the operations
it has not had acknowledged; the server appends the ones it lacks and
answers with the log from the cursor on. Every operation of a request the
server answers with `ops` is in the log it committed (`Spec.ack_stored`),
and the log only ever grows (`Spec.acked_never_lost`).

`sync` is written against `Reads m`, the store's queries, so the server runs
it on SQLite (or D1) and the proofs on a list (Proofs/Sync.lean). It
returns the operations to append; the server commits them in one
transaction, and only then sends the reply.
-/
import Tandem.Wire

namespace Tandem.Sync
open Wire

/-- What `sync` reads from the store, for one document. -/
structure Reads (m : Type → Type) where
  /-- How many operations the log holds. -/
  count : m Nat
  /-- Whether the log holds this operation. -/
  contains : Op → m Bool
  /-- The log from position `start`, at most `n` operations. -/
  slice : (start n : Nat) → m (List Op)

/-- A log holds at most this many operations. -/
def maxLog : Nat := 2000000

/-- A reply carries at most this many operations; a client whose reply is
full asks again. -/
def chunk : Nat := maxOps

/-- The operations of a batch the log lacks, each once, in order. -/
def fresh {m : Type → Type} [Monad m] (rd : Reads m) : List Op → List Op → m (List Op)
  | [], acc => pure acc.reverse
  | o :: os, acc => do
    if acc.contains o then fresh rd os acc
    else if ← rd.contains o then fresh rd os acc
    else fresh rd os (o :: acc)

/-- Handles one request: the operations to append to the log, and the reply. -/
def sync {m : Type → Type} [Monad m] (rd : Reads m) (req : Request) : m (List Op × Reply) := do
  if !req.ops.all okOp then return ([], .error "invalid operation")
  let n ← rd.count
  let new ← fresh rd req.ops []
  if n + new.length > maxLog then return ([], .error "document full")
  let start := min req.cursor (n + new.length)
  let old ← rd.slice start chunk
  let out := (old ++ new.drop (start - n)).take chunk
  return (new, .ops start (start + out.length) out)

/-- What a client does with a reply: `none` if it does not continue its
log from `cursor`, else the operations to apply and the new cursor. -/
def accept (cursor : Nat) : Reply → Option (List Op × Nat)
  | .ops start stop ops => if start ≤ cursor && cursor ≤ stop then some (ops.drop (cursor - start), stop) else none
  | .error _ => none

end Tandem.Sync
