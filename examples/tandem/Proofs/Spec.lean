/-
# What is proved about Tandem

Every proposition proved about Tandem, as a named `def … : Prop`, grouped by
requirement, with no proofs in this file. The proofs are in the other files
of `Proofs/`; each proposition `Spec.x` is proved by a theorem
`Tandem.Proofs.x : Spec.x`, and `npm run proofs` fails unless every
proposition here has its theorem and every such theorem uses only Lean's
standard axioms. SPEC.md maps the requirements onto these names; PROOFS.md
is generated from this file.

Reading guide. The propositions are about the code that runs, in the browser
and on the server: the document (`Tandem.Doc`: `apply`, `applyAll`, `chars`,
the text, Tandem/Basic.lean and Tandem/Tree.lean), the local edits
(`insertNode`, `deleteAt`, `run`, `edit`, Tandem/Edit.lean), the wire format
(`Tandem.Wire`) and the sync server's logic (`Tandem.Sync.sync`). Only the
server's store is a model (`Proofs/Sync.lean`: the log as a list).

A replica's state is `Doc.empty.applyAll ops`, where `ops` are the
operations it applied, in the order it applied them, with repeats;
`Reachable d` says `d` is such a state. `d.chars` is the text it shows, as a
list of characters. `step log req` is what the server appends to its log
`log` for request `req`, and what it answers.
-/
import Proofs.Edits
import Proofs.Sync
import Proofs.Bulk
import Tandem.Client

namespace Tandem.Spec
open Tandem Doc Proofs Wire Sync

/-! ## A. Strong eventual consistency -/

/-- **Same operations, same state**: two replicas that applied the same set
of operations are in the same state, whatever the order each applied them
in and however many times each operation arrived. The operations may be
anything a network delivers, including insertions that are invalid or whose
parent has not arrived yet. -/
def converge : Prop :=
  ∀ ops₁ ops₂ : List Op, (∀ o, o ∈ ops₁ ↔ o ∈ ops₂) → Doc.empty.applyAll ops₁ = Doc.empty.applyAll ops₂

/-- **Same operations, same text**: such replicas show the same text. -/
def converge_text : Prop :=
  ∀ ops₁ ops₂ : List Op, (∀ o, o ∈ ops₁ ↔ o ∈ ops₂) → (Doc.empty.applyAll ops₁).text = (Doc.empty.applyAll ops₂).text

/-- **Operations commute**: applying two operations, in either order, to any
replica's state gives the same state. -/
def ops_commute : Prop :=
  ∀ d, Reachable d → ∀ a b : Op, (d.apply a).apply b = (d.apply b).apply a

/-- **Operations are idempotent**: applying an operation twice is applying it once. -/
def ops_idempotent : Prop :=
  ∀ d, Reachable d → ∀ a : Op, (d.apply a).apply a = d.apply a

/-- **Redelivery is ignored**: an operation a replica already applied
changes nothing when it arrives again. -/
def redelivery_ignored : Prop :=
  ∀ ops : List Op, ∀ o ∈ ops, (Doc.empty.applyAll ops).apply o = Doc.empty.applyAll ops

/-- **Many operations at once, the same state**: applying a batch of
operations by sorting (`applyMany`, what a replica does with a long log)
gives the state of applying them one at a time. -/
def apply_many : Prop :=
  ∀ ops₀ ops : List Op, (Doc.empty.applyAll ops₀).applyMany ops = Doc.empty.applyAll (ops₀ ++ ops)

/-! ## B. The local user's intent -/

/-- **An insertion lands between its neighbours**: inserting character `c`
at position `i` of the text puts `c` between the characters that were at
positions `i - 1` and `i`, and changes nothing else. -/
def insert_lands_between : Prop :=
  ∀ d, Reachable d → ∀ (r i : Nat) (c : Char), i ≤ d.chars.length →
    (d.apply (.ins (d.insertNode r i c))).chars = d.chars.take i ++ c :: d.chars.drop i

/-- **A deletion removes exactly its character**: deleting the character at
position `i` removes it and nothing else. -/
def delete_removes_one : Prop :=
  ∀ d, Reachable d → ∀ (i : Nat) (x : Id), d.deleteAt i = some x →
    (d.apply (.del x)).chars = d.chars.eraseIdx i

/-- **Deletion stays in range**: there is a character to delete at position
`i` exactly when `i` is a position of the text. -/
def delete_in_range : Prop :=
  ∀ d, Reachable d → ∀ i : Nat, (d.deleteAt i).isSome ↔ i < d.chars.length

/-- **A typed run lands as one block**: typing the characters `cs` one after
another at position `i` inserts exactly `cs` there. -/
def run_lands_together : Prop :=
  ∀ d, Reachable d → ∀ (r i : Nat) (cs : List Char), i ≤ d.chars.length →
    (d.applyAll ((d.run r i cs).map .ins)).chars = d.chars.take i ++ cs ++ d.chars.drop i

/-- **The editor's edit yields the user's text**: the operations the editor
creates for any change of the text area (`edit`, from the old and the new
text) turn the replica's text into exactly the new text. -/
def edit_yields_text : Prop :=
  ∀ d, Reachable d → ∀ (r : Nat) (new : List Char), (d.applyAll (d.edit r new)).chars = new

/-- **Local operations are valid**: every insertion the editor creates is a
node that every replica accepts. -/
def local_ops_valid : Prop :=
  ∀ d, Reachable d → ∀ (r : Nat) (new : List Char), ∀ o ∈ d.edit r new, ∀ n, o = .ins n → n.valid = true

/-! ## C. Non-interleaving -/

/-- **Concurrent typing is not interleaved**: when two people (replicas
`ra ≠ rb`) type `a` and `b` at the same position `i` of the same text,
concurrently, every replica that has both runs shows `a` then `b`, or `b`
then `a`, at position `i`: never a mix of the two. -/
def concurrent_runs_not_interleaved : Prop :=
  ∀ d, Reachable d → ∀ (ra rb i : Nat) (a b : List Char), ra ≠ rb → i ≤ d.chars.length →
    let m := d.applyAll ((d.run ra i a ++ d.run rb i b).map .ins)
    m.chars = d.chars.take i ++ a ++ b ++ d.chars.drop i ∨ m.chars = d.chars.take i ++ b ++ a ++ d.chars.drop i

/-- **Subtrees are blocks**: every character's subtree (itself and
everything inserted below it) is one contiguous block of the document,
deleted characters included. This is why runs never interleave. -/
def subtree_contiguous : Prop :=
  ∀ d, Reachable d → ∀ y ∈ d.seqSpec, ∃ A B, d.seqSpec = A ++ d.trav (d.maxCounter + 1) y ++ B

/-- **No character twice**: no id occurs twice in a document. -/
def no_duplicates : Prop :=
  ∀ d, Reachable d → d.seqSpec.Pairwise fun a b => a.id ≠ b.id

/-! ## D. What runs is Fugue -/

/-- **The traversal that runs is the paper's**: the document order the code
computes, with a children index and an explicit stack (so that a long line
of text cannot overflow a WebAssembly stack), is Fugue's recursive in-order
traversal (Weidner and Kleppmann, Algorithm 1). -/
def seq_is_fugue : Prop :=
  ∀ d, Reachable d → d.seq = d.seqSpec

/-- **The text is the traversal's visible characters**: what a replica shows
is the characters of the traversal that no deletion names, in order. -/
def text_is_traversal : Prop :=
  ∀ d, Reachable d → d.chars = (d.seqSpec.filter fun n => !d.dels.contains n.id).map (·.ch)

/-! ## E. The sync server -/

/-- **An acknowledged operation is stored**: every operation of a request
the server answers with `ops` is in the log it commits. -/
def ack_stored : Prop :=
  ∀ log req a b out, (step log req).2 = .ops a b out → ∀ o ∈ req.ops, o ∈ log ++ (step log req).1

/-- **The server never loses an acknowledged operation**: serving any
sequence of requests, every operation of every request answered with `ops`
is in the final log, and the log only grows. -/
def acked_never_lost : Prop :=
  ∀ (log : List Op) (reqs : List Request) (k : Nat) (req : Request) (a b : Nat) (out : List Op),
    reqs[k]? = some req → (serve log reqs).2[k]? = some (.ops a b out) →
      (∀ o ∈ req.ops, o ∈ (serve log reqs).1) ∧ log <+: (serve log reqs).1

/-- **The log holds each operation once**. -/
def log_no_duplicates : Prop :=
  ∀ log req, log.Nodup → (log ++ (step log req).1).Nodup

/-- **The log holds only valid operations**: the server stores only
operations in range whose insertions are valid nodes. -/
def stored_ops_valid : Prop :=
  ∀ log req, ∀ o ∈ (step log req).1, okOp o = true

/-- **A reply is the log from the cursor**: the server answers with the
log from the client's cursor on (at most `chunk` operations), so a client
misses nothing. -/
def reply_from_cursor : Prop :=
  ∀ log req a b out, (step log req).2 = .ops a b out →
    a = min req.cursor (log ++ (step log req).1).length ∧
    out = ((log ++ (step log req).1).drop a).take chunk ∧ b = a + out.length

/-- **A replica that catches up has the server's document**: a replica
that applied, in any order, the log up to its cursor and its own
operations, then the server's reply to its sync (when the reply reaches the
end of the log), is in the state of the server's whole log. -/
def replica_matches_server : Prop :=
  ∀ (log : List Op) (req : Request) (applied : List Op) (a b : Nat) (out : List Op),
    (step log req).2 = .ops a b out → b = (log ++ (step log req).1).length → req.cursor ≤ log.length →
    (∀ o, o ∈ applied ↔ o ∈ log.take req.cursor ∨ o ∈ req.ops) →
    Doc.empty.applyAll (applied ++ out) = Doc.empty.applyAll (log ++ (step log req).1)

/-- **A replica keeps what was not acknowledged**: a reply that is an
error, or that does not continue the replica's log, changes nothing, so the
replica's unacknowledged operations are sent again. -/
def replica_keeps_unacked : Prop :=
  ∀ (rp : Replica) (sent : Nat) (reply : Reply), Sync.accept rp.cursor reply = none → rp.onReply sent reply = rp

/-- **A replica's edit yields the user's text**: in every state a replica
reaches (its local edits, and the replies and pushes of the server, in any
order), editing the text gives exactly the new text. -/
def replica_edit_yields_text : Prop :=
  ∀ (rp : Replica), Reachable rp.doc → ∀ new : List Char, (rp.edit new).doc.chars = new ∧ Reachable (rp.edit new).doc

/-- **A replica stays a replica**: applying a reply or a push keeps the
replica's state one that applying operations from empty reaches (so every
proposition about `Reachable` states holds for it). -/
def replica_reachable : Prop :=
  ∀ (rp : Replica) (sent : Nat) (reply : Reply), Reachable rp.doc →
    Reachable (rp.onReply sent reply).doc ∧ Reachable (rp.onPush reply).doc

/-! ## F. Untrusted input -/

/-- **A decoded request is bounded**: a client's message that decodes has a
cursor below `maxNum`, at most `maxOps` operations, and only operations in
range whose insertions are valid nodes. -/
def decode_request_bounded : Prop :=
  ∀ s r, decodeRequest s = .ok r → r.cursor < maxNum ∧ r.ops.length ≤ maxOps ∧ ∀ o ∈ r.ops, okOp o = true

/-- **A decoded reply is bounded**: a server's message that decodes as
`ops a b out` has `a ≤ b`, exactly `b - a` operations, at most `maxOps`,
each in range. -/
def decode_reply_bounded : Prop :=
  ∀ s a b out, decodeReply s = .ok (.ops a b out) →
    a ≤ b ∧ out.length = b - a ∧ out.length ≤ maxOps ∧ ∀ o ∈ out, okOp o = true

/-- **Accepted insertions are tree nodes**: an insertion the wire format
accepts is valid (a right child of the root, or a child of a node with a
smaller counter), so following parents always ends at the root. -/
def accepted_ops_valid : Prop :=
  ∀ n : Node, okOp (.ins n) = true → n.valid = true

end Tandem.Spec
