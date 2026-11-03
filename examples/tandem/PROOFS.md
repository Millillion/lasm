# What is proved about Tandem

Tandem's document, its local edits, its wire format and its sync server's
logic are ordinary Lean functions, and the browser and the server run
exactly those functions. So instead of only testing them, we prove things
about them for every document, every edit, every message and every order in
which a network delivers operations. This file lists each proved proposition
in plain English. [SPEC.md](SPEC.md) goes the other way: it takes each
requirement of a collaborative editor and says which proposition covers it,
which test covers it, or why it is out of scope.

```sh
npm run proofs              # builds Tandem/ and Proofs/, then test/Axioms.lean, then checks the documents
npm run proofs -- --write   # also regenerates the tables below from Proofs/Spec.lean
npm run proofs:paranoid     # replays the proofs through Lean's kernel and every external checker (Linux)
```

## How to review the propositions

Every proposition is a named `def … : Prop` in
[`Proofs/Spec.lean`](Proofs/Spec.lean), grouped by requirement, with a
plain-English doc comment, and with no proofs in that file. A reviewer can
read that one file and ignore the proofs: `npm run proofs` fails unless

- every proposition `Spec.x` has a theorem `Tandem.Proofs.x` whose type is
  exactly `Spec.x` (so a proof cannot quietly prove something weaker);
- every theorem uses only Lean's three standard axioms (`propext`,
  `Classical.choice`, `Quot.sound`): a `sorry` anywhere would show up as the
  axiom `sorryAx`, and CI also rejects `sorry` and `native_decide` in the sources;
- no definition reachable from the code that handles untrusted input (the
  document's operations and text, the local edits, the parsers and printers
  of the wire format, the sync server's logic) is `partial` or `unsafe`, and
  none is a panic (the totality check, below);
- the tables below match the doc comments in `Proofs/Spec.lean`, every
  `Spec.x` that SPEC.md names exists and is proved, and every proposition is
  named in SPEC.md (each one answers a requirement);
- the theorem count stated in the README is the one just checked.

## The algorithm, and why the proofs are short where they are

Tandem's sequence CRDT is Fugue (Weidner and Kleppmann, "The Art of the
Fugue", [arXiv:2305.00583](https://arxiv.org/abs/2305.00583), Algorithm 1):
every character is a node of a tree, the left or right child of its parent,
and the text is the in-order traversal, same-side siblings in the order of
their ids. A replica's state (`Doc`) is the *set* of operations it has seen,
kept in a canonical form: the insertions sorted by id (two insertions that
claim one id, which only a faulty replica sends, are resolved by keeping the
smaller one, the same on every replica) and the deleted ids, sorted. So
convergence is a property of sets, and holds for any delivery order, any
duplication and any input, valid or not ([`Proofs/Canon.lean`](Proofs/Canon.lean)).
An insertion whose parent has not arrived is kept and stays invisible until
its parent arrives: no causal-delivery buffer is needed, and none can drop
an operation.

The intent and non-interleaving theorems are about the traversal. Their core
is the graft lemma ([`Proofs/Graft.lean`](Proofs/Graft.lean)): adding new
nodes that hang below one place of the tree inserts their traversal into the
old document right there and changes nothing else. Everything else follows:
where `placeAt` hangs a new character ([`Proofs/Place.lean`](Proofs/Place.lean)),
that a typed run is its first character's whole subtree ([`Proofs/Runs.lean`](Proofs/Runs.lean)),
and that two concurrent runs at one place are two sibling subtrees, so two
blocks ([`Proofs/Typing.lean`](Proofs/Typing.lean)).

What runs is not the paper's recursion, which a long line of text (a deep
tree) would turn into a stack overflow in WebAssembly, but a loop with an
explicit stack over a hash-map index of each node's children. `seq_is_fugue`
proves the two equal on every replica's state ([`Proofs/Fast.lean`](Proofs/Fast.lean)).

Non-interleaving here is Fugue's (Section 5 of the paper): text typed
concurrently at one place by two people is never mixed character by
character. Tandem implements Fugue, not FugueMax, so it is not proved
*maximally* non-interleaving; the paper shows the two differ only in rare
cases.

<!-- BEGIN PROPOSITIONS -->
<!-- Generated from Proofs/Spec.lean by `npm run proofs -- --write`; do not edit by hand. -->

**25 propositions**, each proved by the theorem of the same name in `Proofs/` (198 theorems in all: the 25 below and the lemmas their proofs are built from). Every one uses only Lean's standard axioms.

Totality (checked by test/Axioms.lean, not a theorem): the code that handles untrusted input reaches 973 definitions (139 of them Tandem's); none is `partial` or `unsafe`, none is a panic, and the only opaque ones are Lean's primitives (`System.Platform.getNumBits`, `mixHash`).

### A. Strong eventual consistency

| Proposition | In plain English |
| --- | --- |
| [`converge`](Proofs/Spec.lean#L33) | **Same operations, same state**: two replicas that applied the same set of operations are in the same state, whatever the order each applied them in and however many times each operation arrived. The operations may be anything a network delivers, including insertions that are invalid or whose parent has not arrived yet. |
| [`converge_text`](Proofs/Spec.lean#L41) | **Same operations, same text**: such replicas show the same text. |
| [`ops_commute`](Proofs/Spec.lean#L45) | **Operations commute**: applying two operations, in either order, to any replica's state gives the same state. |
| [`ops_idempotent`](Proofs/Spec.lean#L50) | **Operations are idempotent**: applying an operation twice is applying it once. |
| [`redelivery_ignored`](Proofs/Spec.lean#L54) | **Redelivery is ignored**: an operation a replica already applied changes nothing when it arrives again. |

### B. The local user's intent

| Proposition | In plain English |
| --- | --- |
| [`insert_lands_between`](Proofs/Spec.lean#L61) | **An insertion lands between its neighbours**: inserting character `c` at position `i` of the text puts `c` between the characters that were at positions `i - 1` and `i`, and changes nothing else. |
| [`delete_removes_one`](Proofs/Spec.lean#L68) | **A deletion removes exactly its character**: deleting the character at position `i` removes it and nothing else. |
| [`delete_in_range`](Proofs/Spec.lean#L74) | **Deletion stays in range**: there is a character to delete at position `i` exactly when `i` is a position of the text. |
| [`run_lands_together`](Proofs/Spec.lean#L79) | **A typed run lands as one block**: typing the characters `cs` one after another at position `i` inserts exactly `cs` there. |
| [`edit_yields_text`](Proofs/Spec.lean#L85) | **The editor's edit yields the user's text**: the operations the editor creates for any change of the text area (`edit`, from the old and the new text) turn the replica's text into exactly the new text. |
| [`local_ops_valid`](Proofs/Spec.lean#L91) | **Local operations are valid**: every insertion the editor creates is a node that every replica accepts. |

### C. Non-interleaving

| Proposition | In plain English |
| --- | --- |
| [`concurrent_runs_not_interleaved`](Proofs/Spec.lean#L98) | **Concurrent typing is not interleaved**: when two people (replicas `ra ≠ rb`) type `a` and `b` at the same position `i` of the same text, concurrently, every replica that has both runs shows `a` then `b`, or `b` then `a`, at position `i`: never a mix of the two. |
| [`subtree_contiguous`](Proofs/Spec.lean#L107) | **Subtrees are blocks**: every character's subtree (itself and everything inserted below it) is one contiguous block of the document, deleted characters included. This is why runs never interleave. |
| [`no_duplicates`](Proofs/Spec.lean#L113) | **No character twice**: no id occurs twice in a document. |

### D. What runs is Fugue

| Proposition | In plain English |
| --- | --- |
| [`seq_is_fugue`](Proofs/Spec.lean#L119) | **The traversal that runs is the paper's**: the document order the code computes, with a children index and an explicit stack (so that a long line of text cannot overflow a WebAssembly stack), is Fugue's recursive in-order traversal (Weidner and Kleppmann, Algorithm 1). |
| [`text_is_traversal`](Proofs/Spec.lean#L126) | **The text is the traversal's visible characters**: what a replica shows is the characters of the traversal that no deletion names, in order. |

### E. The sync server

| Proposition | In plain English |
| --- | --- |
| [`ack_stored`](Proofs/Spec.lean#L133) | **An acknowledged operation is stored**: every operation of a request the server answers with `ops` is in the log it commits. |
| [`acked_never_lost`](Proofs/Spec.lean#L138) | **The server never loses an acknowledged operation**: serving any sequence of requests, every operation of every request answered with `ops` is in the final log, and the log only grows. |
| [`log_no_duplicates`](Proofs/Spec.lean#L146) | **The log holds each operation once**. |
| [`stored_ops_valid`](Proofs/Spec.lean#L150) | **The log holds only valid operations**: the server stores only operations in range whose insertions are valid nodes. |
| [`reply_from_cursor`](Proofs/Spec.lean#L155) | **A reply is the log from the cursor**: the server answers with the log from the client's cursor on (at most `chunk` operations), so a client misses nothing. |
| [`replica_matches_server`](Proofs/Spec.lean#L163) | **A replica that catches up has the server's document**: a replica that applied, in any order, the log up to its cursor and its own operations, then the server's reply to its sync (when the reply reaches the end of the log), is in the state of the server's whole log. |

### F. Untrusted input

| Proposition | In plain English |
| --- | --- |
| [`decode_request_bounded`](Proofs/Spec.lean#L175) | **A decoded request is bounded**: a client's message that decodes has a cursor below `maxNum`, at most `maxOps` operations, and only operations in range whose insertions are valid nodes. |
| [`decode_reply_bounded`](Proofs/Spec.lean#L181) | **A decoded reply is bounded**: a server's message that decodes as `ops a b out` has `a ≤ b`, exactly `b - a` operations, at most `maxOps`, each in range. |
| [`accepted_ops_valid`](Proofs/Spec.lean#L188) | **Accepted insertions are tree nodes**: an insertion the wire format accepts is valid (a right child of the root, or a child of a node with a smaller counter), so following parents always ends at the root. |
<!-- END PROPOSITIONS -->

## What is trusted, not proved

- **The store.** The sync server's logic (`Sync.sync`) is proved on a model
  of its store, the log as a list ([`Proofs/Sync.lean`](Proofs/Sync.lean)).
  That each query of the server does to the table what its model does to the
  list, and that a commit appends a request's operations atomically before
  the reply is sent, is trusted.
- **Isolation.** The propositions are about one request at a time: between a
  request's reads and its commit, no other commit to the same document
  happens. The server makes that true, and the multi-replica simulation and
  the concurrent tests are the evidence.
- **The transports.** That WebSocket frames and HTTP bodies reach the parsers
  as sent. The parsers are proved bounded and are total, and the fuzzer
  attacks them through the compiled server.
- **The text area.** The editor proves that the operations it creates turn
  the replica's text into the text area's new value (`edit_yields_text`);
  that the browser reports the text area's value faithfully is trusted, and
  the end-to-end tests check it in three browsers.
- **Lean, Lasm and the JavaScript runtime**: that Lean's kernel is sound, that
  Lasm compiles the Lean faithfully to WebAssembly, and that the platform's
  SQLite, D1 and sockets behave as documented. The externally implemented
  primitives the code uses (hashing, the word size, and string and array
  operations of Lean's runtime) are trusted to match their Lean definitions.
