# Ledger's requirements, one by one

Each requirement of a double-entry ledger in the style of TigerBeetle, and
what covers it: a proposition of [`Proofs/Spec.lean`](Proofs/Spec.lean)
(proved; [PROOFS.md](PROOFS.md) explains each one), a test, or a reason it is
out of scope. `npm run proofs` checks that every `Spec.x` named here is
proved and that every proved proposition is named here.

The source of the requirements is TigerBeetle's reference
([accounts](https://docs.tigerbeetle.com/reference/account/),
[transfers](https://docs.tigerbeetle.com/reference/transfer/),
[create_transfers results](https://docs.tigerbeetle.com/reference/requests/create_transfers/))
for the subset Ledger implements, and the proposal in
[NEXT_EXAMPLE_APPS.md](../../docs/proposals/NEXT_EXAMPLE_APPS.md).

## 1. Money is neither created nor destroyed

| Requirement | Covered by |
| --- | --- |
| In every ledger, posted debits equal posted credits | `Spec.conservation_posted` |
| In every ledger, pending debits equal pending credits | `Spec.conservation_pending` |
| A transfer debits one account and credits another, both in its ledger, and changes nothing else | `Spec.transfer_two_accounts` |
| What it adds to the debits of one equals what it adds to the credits of the other | `Spec.transfer_equal_opposite` |
| Every read sees the same total while transfers run concurrently | The bank workload (milestone 2); concurrency is outside the proofs |

## 2. Client-chosen ids and idempotency

| Requirement | Covered by |
| --- | --- |
| Resubmitting an existing transfer id changes nothing and answers `exists` or an `exists_with_different_*` code | `Spec.transfer_exists` |
| `exists` exactly when every field matches; otherwise the first field that differs | `Spec.transfer_exists_iff_same` (single-phase and pending transfers; posts and voids by `Spec.transfer_retry` and the differential test) |
| A retried request is never applied twice | `Spec.transfer_retry` |
| An id that failed for a transient reason can never be used again (`id_already_failed`) | `Spec.failed_retry` (no transfer with it is ever created); the exact code by the differential test |
| The same for accounts | `Spec.account_exists`, `Spec.account_retry` |
| Ids are unique, never 0 and never `2^128 - 1` | `Spec.ids_unique` |

## 3. Balance limits

| Requirement | Covered by |
| --- | --- |
| `debits_must_not_exceed_credits` holds at all times | `Spec.debits_must_not_exceed_credits` |
| `credits_must_not_exceed_debits` holds at all times | `Spec.credits_must_not_exceed_debits` |
| No stored amount exceeds what the database's 64-bit integers hold | `Spec.within_bounds` |

## 4. Two-phase transfers

| Requirement | Covered by |
| --- | --- |
| A pending transfer is posted or voided at most once | `Spec.resolved_at_most_once` |
| A post moves at most the pending amount; a void exactly the pending amount; both keep the pending transfer's accounts and ledger | `Spec.resolution_matches_pending` |
| Pending balances are exactly the open pending transfers, so a post or void releases exactly the pending amount | `Spec.pending_balances` |
| Pending timeouts and expiry | Out of scope: Ledger has no `timeout` field (README.md, "Differences from TigerBeetle") |

## 5. Linked chains

| Requirement | Covered by |
| --- | --- |
| A chain is a run of linked events and the event that ends it | `Spec.chains_cut` |
| A chain succeeds or fails as a whole; one status per event | `Spec.chains_atomic` |
| The journal gains exactly the created transfers, in order | `Spec.journal_is_created` |
| Which code each event of a failed chain gets (`linked_event_failed`, `linked_event_chain_open`) | The differential test against TigerBeetle |

## 6. Audit

| Requirement | Covered by |
| --- | --- |
| Replaying the journal from zero reproduces every stored balance | `Spec.replay_balances` |
| Nothing is deleted, and the journal is append-only | `Spec.history_kept` |

## 7. Ledgers

| Requirement | Covered by |
| --- | --- |
| Every transfer stays within one ledger, between two different existing accounts | `Spec.same_ledger` |
| A transfer between accounts of different ledgers is rejected and changes nothing | `Spec.cross_ledger_rejected` |

## 8. The API

| Requirement | Covered by |
| --- | --- |
| Reads change nothing | `Spec.reads_change_nothing` |
| Only `POST /api/accounts` and `POST /api/transfers` write, each exactly one batch | `Spec.writes_are_batches` |
| The same request gets the same result code from Ledger and from TigerBeetle | The differential test (milestone 2) |
