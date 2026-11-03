# Tandem's requirements, one by one

Each requirement of a collaborative plain-text editor backed by a sequence
CRDT, and what covers it: a proposition of [`Proofs/Spec.lean`](Proofs/Spec.lean)
(proved; [PROOFS.md](PROOFS.md) explains each one), a test, or a reason it is
out of scope. `npm run proofs` checks that every proposition named here is
proved and that every proved proposition is named here.

The sources of the requirements are the strong list specification of
Attiya et al. ("Specification and Complexity of Collaborative Text Editing",
PODC 2016), strong eventual consistency as Gomes, Kleppmann, Mulligan and
Beresford verify it ("Verifying strong eventual consistency in distributed
systems", OOPSLA 2017, [arXiv:1707.01747](https://arxiv.org/abs/1707.01747)),
Fugue's non-interleaving (Weidner and Kleppmann, [arXiv:2305.00583](https://arxiv.org/abs/2305.00583)),
the proposal in [NEXT_EXAMPLE_APPS.md](../../docs/proposals/NEXT_EXAMPLE_APPS.md),
and claim 5 of [TESTING_STRATEGY.md](../../docs/proposals/TESTING_STRATEGY.md):
untrusted input can't crash or subvert a Lasm program.

## 1. Strong eventual consistency

| Requirement | Covered by |
| --- | --- |
| Replicas that applied the same set of operations have the same state, whatever the order and the duplication | `Spec.converge` |
| … and show the same text | `Spec.converge_text` |
| Concurrent operations commute | `Spec.ops_commute` |
| Applying an operation twice is applying it once | `Spec.ops_idempotent` |
| A re-delivered operation is ignored | `Spec.redelivery_ignored` |
| An operation whose dependencies have not arrived is neither applied early nor dropped | `Spec.converge` (the state is the set of operations: an insertion whose parent is missing stays in it, invisible, until the parent arrives) |
| Convergence holds for invalid and malicious operations too | `Spec.converge` quantifies over every list of operations; `Spec.accepted_ops_valid` and the wire format keep the invalid ones out of the log |

## 2. The local user's intent (the strong list specification)

| Requirement | Covered by |
| --- | --- |
| An insertion lands between its neighbours at creation time | `Spec.insert_lands_between` |
| A run of typed characters lands as one block | `Spec.run_lands_together` |
| A deletion removes exactly the character it names | `Spec.delete_removes_one`, `Spec.delete_in_range` |
| What the user typed is what the replica shows (any change of the text area) | `Spec.edit_yields_text` |
| Every operation the editor creates is one every replica accepts | `Spec.local_ops_valid` |
| The order of two characters never changes once both are known | `Spec.subtree_contiguous` and the graft lemma (Proofs/Graft.lean: a new subtree is spliced in at one place, everything else keeps its order); not stated as a separate proposition |
| No character appears twice | `Spec.no_duplicates` |

## 3. Non-interleaving

| Requirement | Covered by |
| --- | --- |
| Two people typing at the same place concurrently get one person's text then the other's, never mixed | `Spec.concurrent_runs_not_interleaved` |
| Everything inserted below a character stays one block | `Spec.subtree_contiguous` |
| Maximal non-interleaving (FugueMax) | Out of scope: Tandem is Fugue, which the paper shows differs from FugueMax only in rare cases |

## 4. The code that runs is Fugue

| Requirement | Covered by |
| --- | --- |
| The document order is Fugue's in-order traversal | `Spec.seq_is_fugue` (the explicit-stack traversal that runs equals the paper's recursion) |
| The text is the traversal's characters that are not deleted | `Spec.text_is_traversal` |
| A long line of text cannot overflow the stack | `Spec.seq_is_fugue` (the traversal that runs is a loop); the simulation types runs of thousands of characters |

## 5. The sync server

| Requirement | Covered by |
| --- | --- |
| The server never loses an acknowledged operation | `Spec.ack_stored`, `Spec.acked_never_lost` |
| The log is append-only | `Spec.acked_never_lost` (the log before any requests is a prefix of the log after) |
| The log holds each operation once | `Spec.log_no_duplicates` |
| The server stores only valid operations | `Spec.stored_ops_valid` |
| A client is sent everything it lacks | `Spec.reply_from_cursor` |
| A replica that catches up has the server's document | `Spec.replica_matches_server` |
| The acknowledgement is sent only after the operations are durable | Trusted: the server commits before replying (PROOFS.md, "What is trusted") |

## 6. Untrusted input

| Requirement | Covered by |
| --- | --- |
| Every message is answered: the parsers are total | The totality check of [`test/Axioms.lean`](test/Axioms.lean) (no `partial` or `unsafe` definition and no panic reachable from the parsers, the document or the server's logic) |
| A decoded client message is bounded | `Spec.decode_request_bounded` |
| A decoded server message is bounded | `Spec.decode_reply_bounded` |
| An accepted insertion is a tree node (so following parents ends at the root, and the traversal terminates) | `Spec.accepted_ops_valid` |
