# Tandem in Lean

**A collaborative text editor written in Lean 4 and compiled to WebAssembly by [Lasm](https://github.com/Millillion/lasm), with a proof that everyone ends up with the same document.**
Several people edit one plain-text document at once, and keep editing while offline; their replicas merge when they reconnect. The document is a sequence CRDT, Fugue (Weidner and Kleppmann, [arXiv:2305.00583](https://arxiv.org/abs/2305.00583)), and the same Lean runs in the browser and on the sync server.
198 theorems, checked with no `sorry` and only Lean's standard axioms, prove properties of the code that actually runs: replicas that applied the same operations hold the same document, whatever the order and however often each arrived; every insertion lands where the user typed it, and every edit of the text area yields exactly the new text; two people typing at the same place concurrently never get their text interleaved; the server never loses an operation it acknowledged; and every message, however malformed, is parsed by total, bounded parsers ([PROOFS.md](PROOFS.md); [SPEC.md](SPEC.md) maps each requirement onto them).

Tandem is an example of what Lasm can build, not a production editor: it has
no accounts, no access control and no rich text, and it keeps every
operation forever.

```sh
npm install          # Lasm (@lasm/cli)
npm run proofs       # check every theorem
```

Requirements: Node.js 24 or newer and npm. Lasm downloads Lean 4.35.0 on the
first run (cached).

This is milestone 1 of 4: the pure core and its proofs. The sync server,
the other platforms and the browser editor follow.

## The proofs

The document ([`Tandem/`](Tandem)) is pure Lean. A replica's state is the
set of operations it has seen, in a canonical form (the insertions sorted
by id, the deleted ids sorted), and the text is Fugue's traversal of the
tree those insertions form. So convergence is a property of sets: it holds
for any delivery order, any duplication, and any input, valid or not. An
insertion whose parent has not arrived waits, invisible, in the set: there
is no causal-delivery buffer to get wrong.

Every proposition is a named `def … : Prop` with a plain-English comment in
[`Proofs/Spec.lean`](Proofs/Spec.lean), without proofs: that one file is what
to review. `npm run proofs` fails unless each has its theorem, no theorem
uses an axiom beyond Lean's three, and no definition reachable from the code
that handles untrusted input is `partial`, `unsafe` or a panic.
`npm run proofs:paranoid` (Linux) replays the proofs through Lean's kernel
and the external checkers Lean ships.

| Requirement | Propositions |
| --- | --- |
| Strong eventual consistency: same operations, same document, in any order, with duplicates | `converge`, `converge_text`, `ops_commute`, `ops_idempotent`, `redelivery_ignored` |
| The local user's intent: an insertion lands between its neighbours at creation time | `insert_lands_between`, `run_lands_together`, `delete_removes_one`, `delete_in_range`, `edit_yields_text`, `local_ops_valid` |
| Non-interleaving of concurrent typing at one place | `concurrent_runs_not_interleaved`, `subtree_contiguous`, `no_duplicates` |
| The code that runs is Fugue (an explicit-stack traversal, so deep trees cannot overflow WebAssembly's stack) | `seq_is_fugue`, `text_is_traversal` |
| The server never loses an acknowledged operation | `ack_stored`, `acked_never_lost`, `log_no_duplicates`, `stored_ops_valid`, `reply_from_cursor`, `replica_matches_server` |
| Untrusted input: total, bounded parsers | `decode_request_bounded`, `decode_reply_bounded`, `accepted_ops_valid`, and the totality check of [`test/Axioms.lean`](test/Axioms.lean) |

## Why Fugue

Fugue has a published correctness argument for both properties an editor
needs: it satisfies Attiya et al.'s strong list specification (every
insertion lands between its neighbours, and all replicas agree on one
order), and it is non-interleaving, which RGA, Yjs's YATA and most other
list CRDTs are not in every case (the paper's Table 1). Its state is a
tree, which makes the proofs structural: the central lemma says that adding
new nodes below one place of the tree splices their text in there and
changes nothing else ([`Proofs/Graft.lean`](Proofs/Graft.lean)).

## The protocol

Plain text, one line per item ([`Tandem/Wire.lean`](Tandem/Wire.lean)). A
client sends `tandem 1`, `sync <cursor>` and the operations the server has
not acknowledged; the server appends those it lacks to the document's log,
commits, and answers `ops <from> <to>` with the log from the cursor on. An
operation is `i <counter> <replica> R <code point>` (a child of the root),
`i <counter> <replica> <parent counter> <parent replica> L|R <code point>`,
or `d <counter> <replica>`.

## Layout

| Path | What it is |
| --- | --- |
| [`Tandem/Basic.lean`](Tandem/Basic.lean) | Ids, nodes, operations, the canonical state and `apply` |
| [`Tandem/Tree.lean`](Tandem/Tree.lean) | The traversal: the paper's recursion (`seqSpec`) and what runs (`seq`), the text |
| [`Tandem/Edit.lean`](Tandem/Edit.lean) | Local edits: Fugue's insertion, deletion, typed runs, and `edit` for a text area's change |
| [`Tandem/Wire.lean`](Tandem/Wire.lean) | The wire format: total, bounded parsers and their printers |
| [`Tandem/Sync.lean`](Tandem/Sync.lean) | The sync server's logic, against its store's queries |
| [`Proofs/Spec.lean`](Proofs/Spec.lean) | Every proposition, in plain English, without proofs |
| [`Proofs/`](Proofs) | The proofs |
| [`test/`](test) | The proof checks |
