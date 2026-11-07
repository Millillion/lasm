# Ledger in Lean

**A double-entry ledger and payments API in the style of [TigerBeetle](https://tigerbeetle.com), written in Lean 4 and compiled to WebAssembly by [Lasm](https://github.com/Millillion/lasm), with proofs.**
Accounts and transfers follow TigerBeetle's data model, flags and result codes for the subset Ledger implements: two-phase (pending, post, void) transfers, linked chains that succeed or fail together, `debits_must_not_exceed_credits`, and client-chosen ids, so a retried request is never applied twice.
191 theorems, checked with no `sorry` and only Lean's standard axioms, prove properties of the code that actually runs: money is neither created nor destroyed in any ledger, each transfer moves one amount between exactly two accounts, a retried transfer answers `exists` and changes nothing, a pending transfer is posted or voided at most once, a linked chain is all or nothing, and replaying the journal reproduces every balance ([PROOFS.md](PROOFS.md); [SPEC.md](SPEC.md) maps each requirement onto them).

```sh
npm install          # Lasm (@lasm/cli)
npm run build        # the Node server (dist/server)
npm start            # http://localhost:3000: the page, and the API under /api (PORT, HOST, DATABASE_PATH)
npm test             # the API test against a fresh server
npm run test:bank    # the bank workload: concurrent transfers and reads, every read sees the same total
npm run build:sim && npm run test:dst    # the deterministic simulation: the bank workload under faults, crashes and racing commits (--seed N)
npx playwright install chromium && npm run test:e2e   # the browser page's end-to-end tests (BROWSERS=chromium,firefox,webkit)
npm run proofs       # check every theorem
```

Requirements: Node.js 24 or newer and npm. Lasm downloads Lean 4.35.0 and its WebAssembly tools
on the first build (cached); `node:sqlite` is part of Node.

## Platforms

The same Lean runs on each platform below; only the SQLite binding module differs
([`Server/NodeSqlite.lean`](Server/NodeSqlite.lean), [`Server/BunSqlite.lean`](Server/BunSqlite.lean),
[`Server/D1.lean`](Server/D1.lean)). Each row is a CI job
([ledger.yml](../../.github/workflows/ledger.yml) for Node,
[ledger-platforms.yml](../../.github/workflows/ledger-platforms.yml) for the rest) that builds
Ledger, serves it with the platform's own local tooling ([`test/platforms.mjs`](test/platforms.mjs))
and runs the API test and the bank workload against it. No account, nothing deployed.

| Platform | Build | Served in CI by | Store |
| --- | --- | --- | --- |
| Node 24 and 26 | `npm run build` | `node dist/server/main.mjs` | `node:sqlite`, a file |
| Bun 1.4.4 | `npm run build:bun` | `bun bun/main.mjs` | `bun:sqlite`, a file |
| Deno 2.9.6 | `npm run build:deno` | `deno run -A deno/main.mjs` | `node:sqlite` in Deno, a file |
| Cloudflare Workers | `npm run build:workers` | `wrangler dev` | D1 (local), whose `batch` is one transaction |
| Docker | `npm run build:docker` | `docker run --read-only` | `node:sqlite` on the `/data` volume |
| AWS Lambda (.zip and container image) | `npm run build:lambda`, `build:lambda-image` | `sam local start-api` | `node:sqlite` in `/tmp`, per instance |
| Vercel Functions | `vercel build` | Vercel's Node launcher | `node:sqlite` in `/tmp`, per instance |
| Netlify Functions | `netlify build` | Netlify's bootstrap in the Lambda image | `node:sqlite` in `/tmp`, per instance |
| Azure Functions | `npm run build:azure` | `func start` | `node:sqlite` in the temporary directory, per instance |
| Google Cloud Functions | `npm run build:gcf` | Functions Framework | `node:sqlite` in the temporary directory, per instance |
| WASI (the auditor) | `npm run build:wasi` | wasmtime 49.0.4, wasmer 7.4.2, `node:wasi` | reads an exported journal |

On the function platforms the database lives as long as the function's instance: that is
enough to run and test Ledger there, but a real deployment needs a durable database the
platform does not provide on its own (put Ledger in a container with a volume, or on Workers
with D1).

**Not offered: Fastly Compute.** Its KV store is eventually consistent: two requests can read
the same balance and both commit, which would break conservation. The edge platforms whose only
store is eventually consistent are left out for the same reason.

**The auditor** (`ledger verify journal.ndjson`, [`Verify.lean`](Verify.lean)) is a WASI
command: export the journal (`curl localhost:3000/api/journal > journal.ndjson`) and run
`wasmtime run --dir . wasi/main.wasm verify journal.ndjson`. It replays every transfer from zero
and checks every balance and rule; exit 0 means consistent, 1 problems found, 2 unreadable.
CI runs it on all three engines against a journal from the bank workload and against tampered
copies, which it must reject ([`test/verify.mjs`](test/verify.mjs)).

## The oracles

There is no official test suite for ledgers, so Ledger is checked against two oracles
([ledger.yml](../../.github/workflows/ledger.yml)):

- **TigerBeetle itself** ([`test/tigerbeetle.mjs`](test/tigerbeetle.mjs), CI only): the
  official 0.17.9 release binary, pinned by SHA-256, as a single-replica development cluster,
  and the official `tigerbeetle-node` client. Seeded random workloads (unknown and repeated
  ids, retries with one field changed, both limit flags, cross-ledger and same-account
  transfers, posts and voids of every kind, linked chains that succeed, fail and stay open)
  go to both; every status and every final balance must agree. The seed is printed first;
  `--seed N` replays a run.
- **A bank workload** in the manner of Jepsen's bank test ([`test/bank.mjs`](test/bank.mjs)):
  concurrent writers move money between accounts that may not go below zero while readers
  read every account at once; every read must show the same total, balanced ledgers and no
  negative customer, and at the end the exported journal must replay to every balance.

## Concurrency

The proofs are about one request at a time; the server makes that true. A request reads,
then commits its writes in one transaction that first checks the database's version (a
`CHECK` constraint that rolls the transaction back if another commit came first, after
which the request runs again), so a commit never rests on stale reads, on any store. Within
one process, create requests also take turns (a semaphore), and every statement on the
`node:sqlite` connection takes its lock, so a read never sees half a batch. The bank
workload found both of those: without them, reads saw totals off by a partial batch, and
concurrent writers retried until they gave up.

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
| [`Frontend/Page.lean`](Frontend/Page.lean), [`Client.lean`](Client.lean) | The browser page (Lasm.UI) |
| [`Server/`](Server), [`ServerNode.lean`](ServerNode.lean) | The SQL, the HTTP glue and the `node:sqlite` binding; the Node program |
| [`Verify.lean`](Verify.lean) | The journal auditor, `ledger verify journal.ndjson` |
| [`test/`](test) | The API test, the bank workload, the TigerBeetle differential test, the proof checks |

## The browser page

`http://localhost:3000/` is a small `Lasm.UI` page ([`Frontend/Page.lean`](Frontend/Page.lean),
started by [`Client.lean`](Client.lean)): every account with its four balances and its balance
(credits posted − debits posted), the journal, a filter by ledger, and a refresh button. Its
`update` and `view` are pure Lean, so four propositions are about them (section J of
[PROOFS.md](PROOFS.md)); the end-to-end tests ([`test/e2e`](test/e2e)) drive it in Chromium,
Firefox and WebKit in CI.

## The API

The API ([`Ledger/Api.lean`](Ledger/Api.lean)) is what the proofs are about; the server
([`Server/App.lean`](Server/App.lean)) serves it on SQLite ([`Server/Sql.lean`](Server/Sql.lean)).

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
