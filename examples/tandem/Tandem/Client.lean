/-
A replica of a document, with its link to the server: what the browser
runs (and the simulation's clients).

The replica keeps its document, the local operations the server has not
acknowledged (`pending`, in order), and its cursor: how much of the
server's log it has applied. A sync sends the cursor and the pending
operations; the reply is the log from the cursor on, which the replica
applies, and it acknowledges every operation sent (`Spec.ack_stored`), so
those leave `pending`. An error, a lost reply or a reply that does not
continue the replica's log changes nothing: the next sync sends the same
operations again, and the server ignores what it already has.
-/
import Tandem.Sync
import Tandem.Edit
import Tandem.Bulk

namespace Tandem
open Wire Sync

structure Replica where
  /-- This replica's number, part of every id it creates. -/
  replica : Nat
  doc : Doc := {}
  /-- Local operations not yet acknowledged, oldest first. -/
  pending : List Op := []
  /-- How much of the server's log this replica has applied. -/
  cursor : Nat := 0
  deriving Inhabited

namespace Replica

/-- The text the replica shows. -/
def text (rp : Replica) : String := rp.doc.text

/-- The user changed the text to `new`. -/
def edit (rp : Replica) (new : List Char) : Replica :=
  let ops := rp.doc.edit rp.replica new
  { rp with doc := rp.doc.applyAll ops, pending := rp.pending ++ ops }

/-- The next sync message: the cursor and at most `maxOps` pending operations. -/
def request (rp : Replica) : Request := { cursor := rp.cursor, ops := rp.pending.take maxOps }

/-- The reply to a sync that carried the first `sent` pending operations. -/
def onReply (rp : Replica) (sent : Nat) (reply : Reply) : Replica :=
  match accept rp.cursor reply with
  | some (ops, stop) => { rp with doc := rp.doc.applyMany ops, cursor := stop, pending := rp.pending.drop sent }
  | none => rp

/-- Operations the server pushed (over a WebSocket): applied if they
continue this replica's log, else ignored (the next sync fetches them). -/
def onPush (rp : Replica) (reply : Reply) : Replica :=
  match accept rp.cursor reply with
  | some (ops, stop) => { rp with doc := rp.doc.applyMany ops, cursor := stop }
  | none => rp

/-- Whether a reply filled a whole chunk (so there may be more to fetch). -/
def full : Reply → Bool
  | .ops _ _ ops => ops.length ≥ chunk
  | .error _ => false

end Replica
end Tandem
