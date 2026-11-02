# Ledger in Lean

**A double-entry ledger and payments API in the style of [TigerBeetle](https://tigerbeetle.com), written in Lean 4 and compiled to WebAssembly by [Lasm](https://github.com/Millillion/lasm), with proofs.**
Accounts and transfers follow TigerBeetle's data model, flags and result codes for the subset Ledger implements: two-phase (pending, post, void) transfers, linked chains that succeed or fail together, `debits_must_not_exceed_credits`, and client-chosen ids, so a retried request is never applied twice.
181 theorems, checked with no `sorry` and only Lean's standard axioms, prove properties of the code that actually runs: money is neither created nor destroyed in any ledger, each transfer moves one amount between exactly two accounts, a retried transfer answers `exists` and changes nothing, a pending transfer is posted or voided at most once, a linked chain is all or nothing, and replaying the journal reproduces every balance ([PROOFS.md](PROOFS.md); [SPEC.md](SPEC.md) maps each requirement onto them).

```sh
npm install          # Lasm (@lasm/cli)
npm run proofs       # check every theorem
```

Requirements: Node.js 24 or newer and npm. Lasm downloads Lean 4.35.0 on first use (cached).

The server on Node (`node:sqlite`) and the differential test against TigerBeetle come in the
next milestone, then the other platforms and the browser page ([ROADMAP.md](../../ROADMAP.md), "Ledger").

## The data model

| | |
| --- | --- |
| Account | `id`, `debits_pending`, `debits_posted`, `credits_pending`, `credits_posted`, `user_data_128`, `user_data_64`, `user_data_32`, `ledger`, `code`, `flags`, `timestamp` |
| Account flags | `linked`, `debits_must_not_exceed_credits`, `credits_must_not_exceed_debits` |
| Transfer | `id`, `debit_account_id`, `credit_account_id`, `amount`, `pending_id`, `user_data_128`, `user_data_64`, `user_data_32`, `ledger`, `code`, `flags`, `timestamp` |
| Transfer flags | `linked`, `pending`, `post_pending_transfer`, `void_pending_transfer` |
| Results | TigerBeetle's `CreateAccountStatus` and `CreateTransferStatus` names (`created`, `exists`, `exists_with_different_amount`, `exceeds_credits`, `id_already_failed`, …), one per event |

The rules ([`Ledger/Rules.lean`](Ledger/Rules.lean)) make TigerBeetle's checks in
TigerBeetle's order, from `src/state_machine.zig` at release 0.17.9: each check list
(`newChecks`, `balanceChecks`, `resolveChecks`, `pendingChecks`, …) reads top to bottom
like TigerBeetle's `create_transfer`.

### Differences from TigerBeetle

- **Not implemented**: imported events, balancing transfers (`balancing_debit`,
  `balancing_credit`), closing transfers and closed accounts, pending timeouts,
  account history, and the query operations. Their fields and flags do not exist in
  Ledger's API, and a request that names one is rejected (HTTP 400) instead of being
  silently ignored.
- **Balances are bounded by `2^63 - 1`**, SQLite's largest integer, not `2^128 - 1`:
  where TigerBeetle checks for u128 overflow (`overflows_debits_posted`, …), Ledger
  checks against `2^63 - 1`. Ids, `amount` in a request (for a post, `2^128 - 1` still
  means "the whole pending amount") and `user_data_128` are u128 as in TigerBeetle.
- **Timestamps** are nanoseconds from the server's clock, strictly increasing, and only
  created events use them.

## Layout

| Path | What it is |
| --- | --- |
| [`Ledger/Types.lean`](Ledger/Types.lean) | Accounts, transfers, flags and result codes |
| [`Ledger/Store.lean`](Ledger/Store.lean) | `Reads m` and `Store m`: the database, one function per query; `Writes`, what a request commits |
| [`Ledger/Rules.lean`](Ledger/Rules.lean) | `create_accounts` and `create_transfers`: the checks, the effects, and linked chains |
| [`Ledger/Audit.lean`](Ledger/Audit.lean) | The journal replay the auditor runs |
| [`Ledger/Json.lean`](Ledger/Json.lean), [`Ledger/Api.lean`](Ledger/Api.lean) | The wire format and the HTTP API, generic over the store |
| [`Proofs/Spec.lean`](Proofs/Spec.lean) | Every proposition, in plain English, without proofs |
| [`Proofs/`](Proofs) | The model of the database and the proofs |
| [`test/`](test) | The proof checks (`npm run proofs`, `npm run proofs:paranoid`) |

## The API

The API is written ([`Ledger/Api.lean`](Ledger/Api.lean)) and proved about; the server
that serves it comes in the next milestone.

| Request | |
| --- | --- |
| `POST /api/accounts` | `create_accounts`: a JSON array of accounts; the reply is one `{"status": …}` per account |
| `POST /api/transfers` | `create_transfers`: a JSON array of transfers; one `{"status": …}` per transfer |
| `GET /api/accounts`, `GET /api/accounts/:id` | Every account (`?ledger=N` for one ledger), or one |
| `GET /api/accounts/:id/transfers` | The transfers that touch an account, in journal order |
| `GET /api/transfers`, `GET /api/transfers/:id` | The journal (`?after=TIMESTAMP&limit=N`), or one transfer |
| `GET /api/journal` | The whole journal as NDJSON, for the auditor |

The 128- and 64-bit fields are decimal strings in JSON (a request may also give JSON
integers); the 32- and 16-bit fields are numbers; flags are an object of booleans.

```sh
curl -X POST localhost:3000/api/accounts -d '[
  {"id": "1", "ledger": 1, "code": 10},
  {"id": "2", "ledger": 1, "code": 10, "flags": {"debits_must_not_exceed_credits": true}}]'
curl -X POST localhost:3000/api/transfers -d '[
  {"id": "100", "debit_account_id": "1", "credit_account_id": "2", "amount": "50", "ledger": 1, "code": 1}]'
# [{"status":"created"}]
```
