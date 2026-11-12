# Tandem in Lean

**A collaborative text editor written in Lean 4 and compiled to WebAssembly by [Lasm](https://github.com/Millillion/lasm), with a proof that everyone ends up with the same document.**
Several people edit one plain-text document at once, and keep editing while offline; their replicas merge when they reconnect. The document is a sequence CRDT, Fugue (Weidner and Kleppmann, [arXiv:2305.00583](https://arxiv.org/abs/2305.00583)), and the same Lean runs in the browser and on the sync server.
218 theorems, checked with no `sorry` and only Lean's standard axioms, prove properties of the code that actually runs: replicas that applied the same operations hold the same document, whatever the order and however often each arrived; every insertion lands where the user typed it, and every edit of the text area yields exactly the new text; two people typing at the same place concurrently never get their text interleaved; the server never loses an operation it acknowledged; and every message, however malformed, is parsed by total, bounded parsers ([PROOFS.md](PROOFS.md); [SPEC.md](SPEC.md) maps each requirement onto them).

Tandem is an example of what Lasm can build, not a production editor: it has
no accounts, no access control and no rich text, and it keeps every
operation forever.

```sh
npm install                 # Lasm (@lasm/cli), ws, and Yjs for the differential test
npm run build               # the editor (dist/public/ui), then the Node sync server embedding it (dist/server)
npm start                   # open http://localhost:3000 (PORT, HOST, DATABASE_PATH, TANDEM_POLL_SECONDS)
npm test                    # the protocol tests against a fresh server
npm run build:batch && npm run test:differential     # against Yjs (--histories N, --seed N)
npm run build:clients && npm run test:simulate       # many replicas, an unreliable network, a killed server
npm run test:fuzz           # the protocol fuzzer (--seconds N, --seed N)
npm run build:sim && npm run test:dst               # the deterministic simulation: the editor and the server under faults (--seed N)
npx playwright install chromium && npm run test:e2e   # the editor in a browser (BROWSERS=chromium,firefox,webkit)
npm run proofs              # check every theorem
```

Requirements: Node.js 24 or newer and npm. Lasm downloads Lean 4.35.0 and its
WebAssembly tools on the first build (cached); `node:sqlite` is part of Node.

Open `/d/<name>` for the document `<name>` (`/` opens `welcome`); open the
same address in a second browser, or a second device, and type in both.

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

## The editor

The editor ([`Frontend/Ui.lean`](Frontend/Ui.lean), started by
[`Editor.lean`](Editor.lean)) is a `Lasm.UI` app around one
`Tandem.Replica`: the same Lean as the server's, compiled for the browser.
Each `input` event of the text area carries its new value, and `Doc.edit`
turns the change into operations (`edit_yields_text`: the replica then shows
exactly that value). It sends what the server has not acknowledged, one sync
at a time, and retries every two seconds when the network is down: the
editor keeps working offline, and merges when it is back. Other people's
operations arrive over the WebSocket, or by long-poll where the server has
none (Workers). The replica is saved in `localStorage`, so closing the page
while offline loses nothing, and each page load takes a new random replica
number, so two tabs never create the same id. When other people's text
arrives, the caret stays beside the character it was beside.

The end-to-end tests ([`test/e2e`](test/e2e), Playwright 1.63.0) run in
Chromium, Firefox and WebKit against the Node server, and in Chromium
against Workers (where the editor long-polls), with no retries: typing and
editing, two browsers at once (each sees the other live; both typing at one
place are never interleaved), one browser offline while the other edits,
then reconnecting, edits made offline surviving a closed page, the caret
kept beside its text, and no script error or Content Security Policy
violation. The page allows only Tandem's own script and WebAssembly
(`script-src 'self' 'wasm-unsafe-eval'`) and cannot be framed.

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
([`Server/NodeWs.lean`](Server/NodeWs.lean)), with Tandem's own `node:http`
server around the same handler; on Deno and Bun from `Deno.upgradeWebSocket`
and `Bun.serve`'s `websocket` handlers
([`Server/EdgeWs.lean`](Server/EdgeWs.lean)).

A replica ([`Tandem/Client.lean`](Tandem/Client.lean), what the browser
runs) keeps its document, the operations not yet acknowledged and its
cursor into the server's log. It can sync whenever it likes, lose replies,
go offline for as long as it likes, and send the same operations again: the
server ignores what it has, and the propositions say nothing is lost or
applied twice.

## Platforms

The same Lean runs on each platform below; only the SQLite binding module
([`Server/NodeSqlite.lean`](Server/NodeSqlite.lean), [`Server/BunSqlite.lean`](Server/BunSqlite.lean),
[`Server/D1.lean`](Server/D1.lean)) and the WebSocket glue
([`Server/NodeWs.lean`](Server/NodeWs.lean), [`Server/EdgeWs.lean`](Server/EdgeWs.lean))
differ. Each row is a CI job ([tandem.yml](../../.github/workflows/tandem.yml) for Node,
[tandem-platforms.yml](../../.github/workflows/tandem-platforms.yml) for the rest) that builds
Tandem, serves it with the platform's own local tooling ([`test/platforms.mjs`](test/platforms.mjs)),
and runs the protocol tests, the live simulation and a minute of fuzzing against it. No account,
nothing deployed.

| Platform | Build | Served in CI by | Store | Live updates |
| --- | --- | --- | --- | --- |
| Node 24 and 26 | `npm run build` | `node dist/server/main.mjs` | `node:sqlite`, a file | WebSockets (`ws`) |
| Bun 1.4.4 | `npm run build:bun` | `bun bun/main.mjs` | `bun:sqlite`, a file | WebSockets (Bun's) |
| Deno 2.9.6 | `npm run build:deno` | `deno run -A deno/main.mjs` | `node:sqlite` in Deno, a file | WebSockets (`Deno.upgradeWebSocket`) |
| Cloudflare Workers | `npm run build:workers` | `wrangler dev` | D1 (local) | Long-poll |
| Docker | `npm run build:docker` | `docker run --read-only` | `node:sqlite` on the `/data` volume | WebSockets (`ws`) |

On Bun, Lasm's generated entry starts `Bun.serve` without WebSocket
handlers, so Tandem installs them on the first upgrade with `server.reload`.
On Workers a WebSocket that outlives its request needs a Durable Object, and
Lasm's Workers entry cannot export one, so clients long-poll.

**Not offered: the function platforms (Lambda, Vercel, Netlify, Azure,
GCF), Fastly Compute and WASI.** A sync server needs either connections that
outlive a request or one store that every instance shares; those platforms
give each instance its own temporary files (or none).

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
interleaves none; Yjs interleaves none of the typists and about half of the
relays (840 of 1,666 in a run of 10,000 histories).

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
three minutes, and nightly for forty ([tandem-nightly.yml](../../.github/workflows/tandem-nightly.yml),
when Tandem changed that day, with 20,000 differential histories and ten
rounds of the simulation); the seed is printed first and `--seed` replays a run.

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
| [`ServerBun.lean`](ServerBun.lean), [`ServerDeno.lean`](ServerDeno.lean), [`ServerWorkers.lean`](ServerWorkers.lean), `Dockerfile`, `wrangler.toml` | The other platforms |
| [`Frontend/Ui.lean`](Frontend/Ui.lean), [`Editor.lean`](Editor.lean) | The editor's browser app (Lasm.UI) |
| [`Batch.lean`](Batch.lean), [`Clients.lean`](Clients.lean) | The differential test's driver; the simulation's clients |
| [`Proofs/Spec.lean`](Proofs/Spec.lean) | Every proposition, in plain English, without proofs |
| [`Proofs/`](Proofs) | The proofs |
| [`test/`](test) | The protocol tests, the differential test, the simulation, the fuzzer, the end-to-end tests, the proof checks |
