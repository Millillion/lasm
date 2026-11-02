# What is proved about Ledger

Ledger's rules are ordinary Lean functions, and the server runs exactly those
functions. So instead of only testing them, we can prove things about them
for every possible input and every sequence of requests. This file lists each
proved proposition in plain English. [SPEC.md](SPEC.md) goes the other way:
it takes each requirement and says which proposition covers it, which test
covers it, or why it is out of scope.

```sh
npm run proofs              # builds Ledger/ and Proofs/, then test/Axioms.lean, then checks the documents
npm run proofs -- --write   # also regenerates the tables below from Proofs/Spec.lean
npm run proofs:paranoid     # replays the proofs through Lean's kernel and every external checker (Linux)
```

## How to review the propositions

Every proposition is a named `def … : Prop` in
[`Proofs/Spec.lean`](Proofs/Spec.lean), grouped by requirement, with a
plain-English doc comment, and with no proofs in that file. A reviewer can
read that one file and ignore the proofs: `npm run proofs` fails unless

- every proposition `Spec.x` has a theorem `Ledger.Proofs.x` whose type is
  exactly `Spec.x` (so a proof cannot quietly prove something weaker);
- every theorem uses only Lean's three standard axioms (`propext`,
  `Classical.choice`, `Quot.sound`): a `sorry` anywhere would show up as the
  axiom `sorryAx`, and CI also rejects `sorry` and `native_decide` in the sources;
- the tables below match the doc comments in `Proofs/Spec.lean`, every
  `Spec.x` that SPEC.md names exists and is proved, and every proposition is
  named in SPEC.md (each one answers a requirement);
- the theorem count stated in README.md is the one just checked.

CI runs it on every change ([ledger.yml](../../.github/workflows/ledger.yml),
job `proofs`), then replays the exported proofs through Lean's kernel and the
external checkers Lean 4.35.0 ships (`lake check --paranoid`). The proofs use
only Lean's own library (no Mathlib); those about the browser page also need
Lasm's library (`Lasm.UI`), which `npm run proofs` provides.

## How the proofs reach the real code

The rules in [`Ledger/Rules.lean`](Ledger/Rules.lean) and the API in
[`Ledger/Api.lean`](Ledger/Api.lean) are written once, against `Reads m`
and `Store m`: records of functions, one per SQL query, over any monad
([`Ledger/Store.lean`](Ledger/Store.lean)). The rules never write: a request
returns its reply and its writes, and the server commits the writes in one
transaction. The server passes SQLite; the proofs pass
[`Proofs/Model.lean`](Proofs/Model.lean): the tables as Lean lists (`DB`),
each query a function on the lists, and the commit `DB.apply`. So
`Reachable D` (some sequence of requests to `Api.handle` leads from the empty
database to `D`) is about the code the server runs, and so is every
proposition about it.

The structure of the proof, for a reader who wants it: `Proofs/Invariant.lean`
defines one invariant, `Inv`, that bundles conservation, the pending sums,
the replay, the bounds, the flags and the uniqueness of ids. It holds of the
empty database (`inv_empty`), every created account keeps it
(`inv_account`), every created transfer keeps it (`inv_transfer`, from
`inv_new` and `inv_resolve` in `Proofs/Transfer.lean`), every batch keeps it
whatever its chains do (`inv_createTransfers` in `Proofs/Chains.lean`), and
so every request keeps it (`inv_after` in `Proofs/Requests.lean`). Most
propositions are then one field of `Inv`.

## The propositions

<!-- BEGIN PROPOSITIONS -->
<!-- Generated from Proofs/Spec.lean by `npm run proofs -- --write`; do not edit by hand. -->

**30 propositions**, each proved by the theorem of the same name in `Proofs/` (185 theorems in all: the 30 below and the lemmas their proofs are built from). Every one uses only Lean's standard axioms.

### A. Money is neither created nor destroyed

| Proposition | In plain English |
| --- | --- |
| [`conservation_posted`](Proofs/Spec.lean#L58) | **Conservation of posted amounts**: in every reachable database, in every ledger, the accounts' posted debits add up to their posted credits. |
| [`conservation_pending`](Proofs/Spec.lean#L63) | **Conservation of pending amounts**: likewise for the pending debits and pending credits. |

### B. A transfer moves money between exactly two accounts

| Proposition | In plain English |
| --- | --- |
| [`transfer_two_accounts`](Proofs/Spec.lean#L70) | **A created transfer changes exactly two accounts and adds one journal entry**: the debit and credit accounts it names (for a post or void, its pending transfer's), which are different and in the transfer's ledger, get new balances and nothing else; every other account, and every earlier transfer, is unchanged. |
| [`transfer_equal_opposite`](Proofs/Spec.lean#L82) | **Equal and opposite**: in that transfer, the debit account's credits and the credit account's debits do not change, and what is added to the debit account's debits equals what is added to the credit account's credits, for the posted and for the pending balances (a post or void removes the same pending amount from both). |

### C. Client-chosen ids: idempotency

| Proposition | In plain English |
| --- | --- |
| [`transfer_exists`](Proofs/Spec.lean#L98) | **Resubmitting an existing transfer id changes nothing**: the answer is `exists` or one `exists_with_different_*` code, and the database is exactly as it was. |
| [`transfer_exists_iff_same`](Proofs/Spec.lean#L105) | **`exists` means the same transfer**: for a transfer that is not a post or void, a stored transfer with its id answers `exists` exactly when every field the client chose is the same; otherwise the code names the first field that differs (flags, pending id, accounts, amount, user data, ledger, code). |
| [`transfer_retry`](Proofs/Spec.lean#L116) | **A retried transfer is not applied twice**: once a transfer is created, submitting the same request again, in any later database, answers `exists` and changes nothing. |
| [`failed_retry`](Proofs/Spec.lean#L123) | **A failed id stays failed**: once a transfer fails for a reason that depends on the ledger's state (an account or pending transfer missing, a balance limit), no transfer with its id is ever created afterwards: resubmitting it changes nothing. |
| [`account_exists`](Proofs/Spec.lean#L132) | **Resubmitting an existing account id changes nothing**: the answer is `exists` or one `exists_with_different_*` code, and the database is exactly as it was. |
| [`account_retry`](Proofs/Spec.lean#L139) | **A retried account is not created twice**: once an account is created, submitting the same request again, in any later database, answers `exists` and changes nothing. |

### D. Balance limits

| Proposition | In plain English |
| --- | --- |
| [`debits_must_not_exceed_credits`](Proofs/Spec.lean#L148) | **`debits_must_not_exceed_credits` holds**: in every reachable database, an account with this flag has debits (pending and posted) of at most its posted credits. |
| [`credits_must_not_exceed_debits`](Proofs/Spec.lean#L155) | **`credits_must_not_exceed_debits` holds**: likewise for credits. |

### E. Two-phase transfers

| Proposition | In plain English |
| --- | --- |
| [`resolved_at_most_once`](Proofs/Spec.lean#L162) | **A pending transfer is posted or voided at most once**: in every reachable database, no two posts or voids name the same pending transfer. |
| [`resolution_matches_pending`](Proofs/Spec.lean#L167) | **Posts and voids match their pending transfer**: every post or void in the journal names a pending transfer in the journal, with the same debit and credit accounts and ledger; a post moves at most the pending amount and a void exactly the pending amount. |
| [`pending_balances`](Proofs/Spec.lean#L177) | **Pending balances are the open pending transfers**: every account's pending debits (credits) are the sum of the pending transfers that debit (credit) it and are not yet posted or voided. So posting or voiding releases exactly the pending amount. |

### F. Linked chains

| Proposition | In plain English |
| --- | --- |
| [`chains_cut`](Proofs/Spec.lean#L187) | **How a batch is cut into chains**: the chains, in order, are the batch; none is empty; within a chain every event but the last is linked; and every chain but the last ends with an event that is not linked (so a chain is a maximal run of linked events and the event after it). |
| [`chains_atomic`](Proofs/Spec.lean#L198) | **A linked chain succeeds or fails as a whole**: a batch gets one status per event, and within each chain either every event is `created` or none is. |
| [`journal_is_created`](Proofs/Spec.lean#L206) | **The journal holds exactly the created transfers**: after a batch, the journal is the journal before followed by the batch's transfers whose status is `created`, in order (by id); nothing from a failed chain is written. |

### G. The audit

| Proposition | In plain English |
| --- | --- |
| [`replay_balances`](Proofs/Spec.lean#L217) | **Replaying the journal reproduces every balance**: in every reachable database, each account's four balances are exactly what replaying the journal from zero gives (`Audit.replay`: each transfer applied in order, every account starting at zero). `ledger verify` computes the same replay for all accounts in one pass (`Audit.replayAll`). |

### H. Ledgers, ids and bounds

| Proposition | In plain English |
| --- | --- |
| [`same_ledger`](Proofs/Spec.lean#L227) | **Every transfer stays within one ledger**: in every reachable database, each transfer's debit and credit accounts exist, are different, and are in the transfer's ledger. |
| [`cross_ledger_rejected`](Proofs/Spec.lean#L235) | **A transfer between ledgers is rejected**: a transfer (not a post or void) whose two accounts exist in different ledgers is never created, and changes nothing. |
| [`within_bounds`](Proofs/Spec.lean#L243) | **Every amount fits the database**: in every reachable database, each account's debits (pending plus posted) and credits (pending plus posted), and each transfer's amount, are at most `2^63 - 1`, SQLite's largest integer, so no stored number overflows. |
| [`ids_unique`](Proofs/Spec.lean#L251) | **Ids are unique**: in every reachable database no two accounts and no two transfers share an id, and no id is 0 or `2^128 - 1`. |
| [`history_kept`](Proofs/Spec.lean#L257) | **Nothing is ever deleted or rewritten**: whatever requests follow, the journal only grows at its end, and every account stays, with the same id, user data, ledger, code, flags and timestamp (only its balances change). |

### I. Requests

| Proposition | In plain English |
| --- | --- |
| [`reads_change_nothing`](Proofs/Spec.lean#L266) | **Reads change nothing**: every `GET` request leaves the database as it was. |
| [`writes_are_batches`](Proofs/Spec.lean#L270) | **Only the two create endpoints write**, and each writes exactly what one batch (`create_accounts` or `create_transfers`) writes. |

### J. The browser page

| Proposition | In plain English |
| --- | --- |
| [`page_filter`](Proofs/Spec.lean#L278) | **The page shows exactly the chosen ledger**: an account the page has loaded is shown exactly when no ledger is chosen or it is in the chosen ledger; likewise for transfers. |
| [`page_rows`](Proofs/Spec.lean#L285) | **One row per account and per transfer**: the tables' bodies are one row for each shown account and each shown transfer, in order, each row keyed by the id and marked with it (`data-account`, `data-transfer`). |
| [`page_errors_keep_data`](Proofs/Spec.lean#L296) | **A failed load keeps what is shown**: when loading the accounts or the journal fails, the page keeps the data it had and says what went wrong. |
| [`page_refresh`](Proofs/Spec.lean#L304) | **Refresh reloads both**: the refresh button asks for the accounts and the journal again and changes nothing else but the status. |
<!-- END PROPOSITIONS -->

## What is trusted, not proved

- **The SQL.** Each query in `Server/Sql.lean` is assumed to return what its
  model in `Proofs/Model.lean` returns, and the commit to do what `DB.apply`
  does. The schema backs the important ones up: `PRIMARY KEY` ids for
  accounts and transfers, and a `UNIQUE` index on the pending id of posts and
  voids, so even a wrong statement could not store a second account with an
  id, or post a pending transfer twice.
- **Isolation.** The propositions are about one request at a time: between a
  request's reads and its commit, no other write happens. The server makes
  that true (one writer at a time, and a version check on commit where the
  store allows concurrent writers); the bank workload (concurrent transfers
  and reads, every read seeing the same total) is the evidence.
- **TigerBeetle compatibility.** The rules make TigerBeetle's checks in
  TigerBeetle's order (`src/state_machine.zig` at 0.17.9), and the result
  names and numbers are TigerBeetle's. That the two agree is tested, not
  proved: the differential test sends the same random workloads to Ledger and
  to a real TigerBeetle and compares every status and balance.
- **The auditor's fast replay.** `ledger verify` computes the replay for all
  accounts in one pass with hash maps (`Audit.replayAll`); that it equals
  `Audit.replay`, which the propositions are about, is tested (the auditor
  accepts every exported journal in CI and rejects tampered ones), not proved.
- **JSON text and HTTP.** The propositions are about the decoded requests and
  `Api.handle`; that `Lean.Json` parses the text the client sent, and that the
  HTTP layer splits the path into the segments the API matches, is not proved.
- **Lean, Lasm and the JavaScript runtime**: that Lean's kernel is sound, that
  Lasm compiles the Lean faithfully to WebAssembly, and that SQLite and the
  HTTP layer behave as documented.
