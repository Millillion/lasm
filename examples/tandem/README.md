# Tandem in Lean

**A collaborative text editor written in Lean 4 and compiled to WebAssembly by [Lasm](https://github.com/Millillion/lasm), with a proof that everyone ends up with the same document.**
Several people edit one plain-text document at once, and keep editing while offline; their replicas merge when they reconnect. The document is a sequence CRDT, Fugue (Weidner and Kleppmann, [arXiv:2305.00583](https://arxiv.org/abs/2305.00583)), and the same Lean runs in the browser and on the sync server.
217 theorems, checked with no `sorry` and only Lean's standard axioms, prove properties of the code that actually runs: replicas that applied the same operations hold the same document, whatever the order and however often each arrived; every insertion lands where the user typed it, and every edit of the text area yields exactly the new text; two people typing at the same place concurrently never get their text interleaved; the server never loses an operation it acknowledged; and every message, however malformed, is parsed by total, bounded parsers ([PROOFS.md](PROOFS.md); [SPEC.md](SPEC.md) maps each requirement onto them).

Tandem is an example of what Lasm can build, not a production editor: it has
no accounts, no access control and no rich text, and it keeps every
operation forever.

```sh
npm install                 # Lasm (@lasm/cli), ws, and Yjs for the differential test
npm run build               # the Node sync server (dist/server)
npm start                   # http://localhost:3000 (PORT, HOST, DATABASE_PATH, TANDEM_POLL_SECONDS)
npm test                    # the protocol tests against a fresh server
npm run build:batch && npm run test:differential     # against Yjs (--histories N, --seed N)
npm run build:clients && npm run test:simulate       # many replicas, an unreliable network, a killed server
npm run test:fuzz           # the protocol fuzzer (--seconds N, --seed N)
npm run proofs              # check every theorem
```

Requirements: Node.js 24 or newer and npm. Lasm downloads Lean 4.35.0 and its
WebAssembly tools on the first build (cached); `node:sqlite` is part of Node.

This is milestone 2 of 4: the pure core, its proofs, and the Node sync
server with its tests. The other platforms and the browser editor follow.

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
| Strong eventual consistency: same operations, same document, in any order, with duplicates | `converge`, `converge_text`, `ops_commute`, `ops_idempotent`, `redelivery_ignored`, `apply_many` |
| The local user's intent: an insertion lands between its neighbours at creation time | `insert_lands_between`, `run_lands_together`, `delete_removes_one`, `delete_in_range`, `edit_yields_text`, `local_ops_valid` |
| Non-interleaving of concurrent typing at one place | `concurrent_runs_not_interleaved`, `subtree_contiguous`, `no_duplicates` |
| The code that runs is Fugue (an explicit-stack traversal, so deep trees cannot overflow WebAssembly's stack) | `seq_is_fugue`, `text_is_traversal` |
| The server never loses an acknowledged operation | `ack_stored`, `acked_never_lost`, `log_no_duplicates`, `stored_ops_valid`, `reply_from_cursor`, `replica_matches_server`, `replica_keeps_unacked`, `replica_edit_yields_text`, `replica_reachable` |
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

## The sync server

[`Server/App.lean`](Server/App.lean) serves `Sync.sync`, the proved logic,
on a SQL store: one table holds every document's log, an operation per row
at its position. A sync reads the log, computes what to append and the
reply, commits the new operations in one transaction, and only then
replies, so an acknowledged operation is on disk. Two commits that race for
the same positions cannot both succeed (the position is the key), and the
loser runs again on the longer log.

| Route | |
| --- | --- |
| `POST /doc/<name>/sync` | A client's message; the answer is the log from its cursor |
| `GET /doc/<name>/ws` | A WebSocket: each text frame is a sync, answered on the socket; every commit is pushed to the document's other sockets |
| `GET /doc/<name>/poll?cursor=N` | Long-poll, where there are no WebSockets: answers when the log grows past `N`, or after `TANDEM_POLL_SECONDS` |
| `GET /doc/<name>/text` | The document's text |

On Node the WebSockets come from the `ws` package
([`Server/NodeWs.lean`](Server/NodeWs.lean)): `Lasm.Fetch.serve` owns its
HTTP server and has no upgrade hook, so Tandem runs its own `node:http`
server around the same handler.

A replica ([`Tandem/Client.lean`](Tandem/Client.lean), what the browser
runs) keeps its document, the operations not yet acknowledged and its
cursor into the server's log. It can sync whenever it likes, lose replies,
go offline for as long as it likes, and send the same operations again: the
server ignores what it has, and the propositions say nothing is lost or
applied twice.

## The oracle: Yjs

There is no conformance suite for CRDTs, so [Yjs](https://github.com/yjs/yjs)
13.6.33, the most widely used one, is the oracle ([`test/differential.mjs`](test/differential.mjs)).
Random editing histories run on Tandem (the compiled Lean, through
[`Batch.lean`](Batch.lean)) and on Yjs, with the same replicas, edits and
deliveries: partitions, reordering, duplication, and in "chaos" histories
delivery out of causal order. Edits name their place by character (each
inserted character is unique), never by index. The two algorithms
legitimately order concurrent text differently, so only what both guarantee
is compared:

- every replica of each library converges (Tandem: to the same state);
- the same characters survive in both;
- every insertion is right after the character it was inserted after, in both final texts;
- an order once seen never changes, in each library;
- in sequential histories, the two texts are equal to each other and to a plain string model.

Two kinds of history count interleaving: two people typing at one place
concurrently ("typists"), and one person's backwards typing continued on a
second device while another types at the same place ("relay", the case of
the paper's Table 1 where Yjs interleaves). In CI's 2,000 histories Tandem
interleaves none; Yjs interleaves none of the typists and about four in ten
of the relays.

## The simulation

[`test/simulate.mjs`](test/simulate.mjs) runs the browser's replica logic
([`Clients.lean`](Clients.lean)) in several processes at once, each with
several replicas, against one live server: they edit at random and sync over
an unreliable network (a replica goes offline and comes back; a sync is not
sent; a reply is lost after the server committed), while the server is
killed with SIGKILL and restarted on the same database, twice per round.
Afterwards every replica of every process must hold the server's text,
with nothing left unacknowledged.

## The fuzzer

[`test/fuzz.mjs`](test/fuzz.mjs) aims random and mutated messages at the
parsers through the compiled server, over HTTP and WebSockets: broken
headers, cursors and numbers (negative, 40 digits, `1e3`, Arabic digits),
code points that are not characters, invalid parents, 5,000 operations and
more, lines of 20,000 tokens, binary junk, and valid messages mutated. Every
request must be answered in time with a well-formed reply, the server must
stay up, and afterwards every operation in every log must be valid, every
text must load and an ordinary sync must work. On pull requests it runs for
three minutes.

## Layout

| Path | What it is |
| --- | --- |
| [`Tandem/Basic.lean`](Tandem/Basic.lean) | Ids, nodes, operations, the canonical state and `apply` |
| [`Tandem/Tree.lean`](Tandem/Tree.lean) | The traversal: the paper's recursion (`seqSpec`) and what runs (`seq`), the text |
| [`Tandem/Edit.lean`](Tandem/Edit.lean) | Local edits: Fugue's insertion, deletion, typed runs, and `edit` for a text area's change |
| [`Tandem/Wire.lean`](Tandem/Wire.lean) | The wire format: total, bounded parsers and their printers |
| [`Tandem/Sync.lean`](Tandem/Sync.lean) | The sync server's logic, against its store's queries |
| [`Tandem/Client.lean`](Tandem/Client.lean) | A replica and its sync: pending operations, the cursor, replies and pushes |
| [`Tandem/Bulk.lean`](Tandem/Bulk.lean) | Applying a long log at once, by sorting |
| [`Server/`](Server), [`ServerNode.lean`](ServerNode.lean) | The SQL store, the HTTP and WebSocket glue, the SQLite bindings; the Node program |
| [`Batch.lean`](Batch.lean), [`Clients.lean`](Clients.lean) | The differential test's driver; the simulation's clients |
| [`Proofs/Spec.lean`](Proofs/Spec.lean) | Every proposition, in plain English, without proofs |
| [`Proofs/`](Proofs) | The proofs |
| [`test/`](test) | The protocol tests, the differential test, the simulation, the fuzzer, the proof checks |
