/-
The ledger's data: accounts, transfers and the result codes, following
TigerBeetle's data model (https://docs.tigerbeetle.com/reference/) for the
subset Ledger implements. Field names, flag names, result names and result
numbers are TigerBeetle's, so a client written for one reads the other.

What is left out (README.md, "Differences from TigerBeetle"): imported
events, balancing and closing transfers, pending timeouts, account history
and closed accounts. Their fields and flags do not exist here, so a request
cannot name them.

Every number is a `Nat`. The JSON decoder (`Ledger/Json.lean`) bounds each
field by its TigerBeetle width (ids, amounts and `user_data_128` are u128,
`user_data_64` u64, `user_data_32` and `ledger` u32, `code` u16); balances
and stored amounts are bounded by `limit`, SQLite's largest integer.
-/
namespace Ledger

/-- `2^128 - 1`, the largest u128: an id may not be this value, and a post
with this amount posts the whole pending amount (TigerBeetle's `amount_max`). -/
def u128Max : Nat := 2 ^ 128 - 1

/-- The largest balance, and so the largest amount, Ledger stores: SQLite's
largest `INTEGER` (`2^63 - 1`). TigerBeetle's balances are u128; Ledger's
must fit the database's 64-bit integers, so where TigerBeetle checks for
u128 overflow (`overflows_*`), Ledger checks against this bound. -/
def limit : Nat := 2 ^ 63 - 1

/-- Account flags (TigerBeetle's `AccountFlags`, the bits Ledger implements). -/
structure AccountFlags where
  /-- This event and the next succeed or fail together. -/
  linked : Bool := false
  /-- Debits (pending and posted) may never exceed posted credits. -/
  debitsMustNotExceedCredits : Bool := false
  /-- Credits (pending and posted) may never exceed posted debits. -/
  creditsMustNotExceedDebits : Bool := false
  deriving Repr, DecidableEq, Inhabited

/-- Transfer flags (TigerBeetle's `TransferFlags`, the bits Ledger implements). -/
structure TransferFlags where
  /-- This event and the next succeed or fail together. -/
  linked : Bool := false
  /-- The first phase of a two-phase transfer: reserve the amount. -/
  pending : Bool := false
  /-- Post (complete) the pending transfer `pending_id`. -/
  postPendingTransfer : Bool := false
  /-- Void (cancel) the pending transfer `pending_id`. -/
  voidPendingTransfer : Bool := false
  deriving Repr, DecidableEq, Inhabited

/-- An account, as stored. -/
structure Account where
  id : Nat
  debitsPending : Nat := 0
  debitsPosted : Nat := 0
  creditsPending : Nat := 0
  creditsPosted : Nat := 0
  userData128 : Nat := 0
  userData64 : Nat := 0
  userData32 : Nat := 0
  ledger : Nat
  code : Nat
  flags : AccountFlags := {}
  /-- When it was created (nanoseconds since the epoch, unique). -/
  timestamp : Nat := 0
  deriving Repr, DecidableEq, Inhabited

/-- A request to create an account. -/
structure NewAccount where
  id : Nat
  userData128 : Nat := 0
  userData64 : Nat := 0
  userData32 : Nat := 0
  ledger : Nat
  code : Nat
  flags : AccountFlags := {}
  deriving Repr, DecidableEq, Inhabited

/-- A transfer, as stored in the journal. -/
structure Transfer where
  id : Nat
  debitAccountId : Nat
  creditAccountId : Nat
  amount : Nat
  /-- For a post or void: the pending transfer it resolves; else 0. -/
  pendingId : Nat := 0
  userData128 : Nat := 0
  userData64 : Nat := 0
  userData32 : Nat := 0
  ledger : Nat
  code : Nat
  flags : TransferFlags := {}
  timestamp : Nat := 0
  deriving Repr, DecidableEq, Inhabited

/-- A request to create a transfer. For a post or void, a zero
`debit_account_id`, `credit_account_id`, `ledger`, `code` or `user_data_*`
means "the pending transfer's". -/
structure NewTransfer where
  id : Nat
  debitAccountId : Nat := 0
  creditAccountId : Nat := 0
  amount : Nat := 0
  pendingId : Nat := 0
  userData128 : Nat := 0
  userData64 : Nat := 0
  userData32 : Nat := 0
  ledger : Nat := 0
  code : Nat := 0
  flags : TransferFlags := {}
  deriving Repr, DecidableEq, Inhabited

/-- Whether a transfer posts or voids a pending transfer. -/
def TransferFlags.resolves (f : TransferFlags) : Bool := f.postPendingTransfer || f.voidPendingTransfer

/-- The result of creating one account (TigerBeetle's `CreateAccountStatus`,
the codes Ledger can return). -/
inductive AccountStatus where
  | created
  | linkedEventFailed
  | linkedEventChainOpen
  | idMustNotBeZero
  | idMustNotBeIntMax
  | existsWithDifferentFlags
  | existsWithDifferentUserData128
  | existsWithDifferentUserData64
  | existsWithDifferentUserData32
  | existsWithDifferentLedger
  | existsWithDifferentCode
  | «exists»
  | flagsAreMutuallyExclusive
  | ledgerMustNotBeZero
  | codeMustNotBeZero
  deriving Repr, DecidableEq, Inhabited

/-- The result of creating one transfer (TigerBeetle's `CreateTransferStatus`,
the codes Ledger can return). -/
inductive TransferStatus where
  | created
  | linkedEventFailed
  | linkedEventChainOpen
  | idMustNotBeZero
  | idMustNotBeIntMax
  | existsWithDifferentFlags
  | existsWithDifferentPendingId
  | existsWithDifferentDebitAccountId
  | existsWithDifferentCreditAccountId
  | existsWithDifferentAmount
  | existsWithDifferentUserData128
  | existsWithDifferentUserData64
  | existsWithDifferentUserData32
  | existsWithDifferentLedger
  | existsWithDifferentCode
  | «exists»
  | idAlreadyFailed
  | flagsAreMutuallyExclusive
  | debitAccountIdMustNotBeZero
  | debitAccountIdMustNotBeIntMax
  | creditAccountIdMustNotBeZero
  | creditAccountIdMustNotBeIntMax
  | accountsMustBeDifferent
  | pendingIdMustBeZero
  | pendingIdMustNotBeZero
  | pendingIdMustNotBeIntMax
  | pendingIdMustBeDifferent
  | ledgerMustNotBeZero
  | codeMustNotBeZero
  | debitAccountNotFound
  | creditAccountNotFound
  | accountsMustHaveTheSameLedger
  | transferMustHaveTheSameLedgerAsAccounts
  | pendingTransferNotFound
  | pendingTransferNotPending
  | pendingTransferHasDifferentDebitAccountId
  | pendingTransferHasDifferentCreditAccountId
  | pendingTransferHasDifferentLedger
  | pendingTransferHasDifferentCode
  | exceedsPendingTransferAmount
  | pendingTransferHasDifferentAmount
  | pendingTransferAlreadyPosted
  | pendingTransferAlreadyVoided
  | overflowsDebitsPending
  | overflowsCreditsPending
  | overflowsDebitsPosted
  | overflowsCreditsPosted
  | overflowsDebits
  | overflowsCredits
  | exceedsCredits
  | exceedsDebits
  deriving Repr, DecidableEq, Inhabited

namespace AccountStatus

/-- TigerBeetle's name for the code. -/
def name : AccountStatus → String
  | .created => "created"
  | .linkedEventFailed => "linked_event_failed"
  | .linkedEventChainOpen => "linked_event_chain_open"
  | .idMustNotBeZero => "id_must_not_be_zero"
  | .idMustNotBeIntMax => "id_must_not_be_int_max"
  | .existsWithDifferentFlags => "exists_with_different_flags"
  | .existsWithDifferentUserData128 => "exists_with_different_user_data_128"
  | .existsWithDifferentUserData64 => "exists_with_different_user_data_64"
  | .existsWithDifferentUserData32 => "exists_with_different_user_data_32"
  | .existsWithDifferentLedger => "exists_with_different_ledger"
  | .existsWithDifferentCode => "exists_with_different_code"
  | .exists => "exists"
  | .flagsAreMutuallyExclusive => "flags_are_mutually_exclusive"
  | .ledgerMustNotBeZero => "ledger_must_not_be_zero"
  | .codeMustNotBeZero => "code_must_not_be_zero"

/-- Whether the code says the id was already taken (`exists` or an
`exists_with_different_*`). -/
def isExists : AccountStatus → Bool
  | .existsWithDifferentFlags | .existsWithDifferentUserData128 | .existsWithDifferentUserData64
  | .existsWithDifferentUserData32 | .existsWithDifferentLedger | .existsWithDifferentCode | .exists => true
  | _ => false

end AccountStatus

namespace TransferStatus

/-- TigerBeetle's name for the code. -/
def name : TransferStatus → String
  | .created => "created"
  | .linkedEventFailed => "linked_event_failed"
  | .linkedEventChainOpen => "linked_event_chain_open"
  | .idMustNotBeZero => "id_must_not_be_zero"
  | .idMustNotBeIntMax => "id_must_not_be_int_max"
  | .existsWithDifferentFlags => "exists_with_different_flags"
  | .existsWithDifferentPendingId => "exists_with_different_pending_id"
  | .existsWithDifferentDebitAccountId => "exists_with_different_debit_account_id"
  | .existsWithDifferentCreditAccountId => "exists_with_different_credit_account_id"
  | .existsWithDifferentAmount => "exists_with_different_amount"
  | .existsWithDifferentUserData128 => "exists_with_different_user_data_128"
  | .existsWithDifferentUserData64 => "exists_with_different_user_data_64"
  | .existsWithDifferentUserData32 => "exists_with_different_user_data_32"
  | .existsWithDifferentLedger => "exists_with_different_ledger"
  | .existsWithDifferentCode => "exists_with_different_code"
  | .exists => "exists"
  | .idAlreadyFailed => "id_already_failed"
  | .flagsAreMutuallyExclusive => "flags_are_mutually_exclusive"
  | .debitAccountIdMustNotBeZero => "debit_account_id_must_not_be_zero"
  | .debitAccountIdMustNotBeIntMax => "debit_account_id_must_not_be_int_max"
  | .creditAccountIdMustNotBeZero => "credit_account_id_must_not_be_zero"
  | .creditAccountIdMustNotBeIntMax => "credit_account_id_must_not_be_int_max"
  | .accountsMustBeDifferent => "accounts_must_be_different"
  | .pendingIdMustBeZero => "pending_id_must_be_zero"
  | .pendingIdMustNotBeZero => "pending_id_must_not_be_zero"
  | .pendingIdMustNotBeIntMax => "pending_id_must_not_be_int_max"
  | .pendingIdMustBeDifferent => "pending_id_must_be_different"
  | .ledgerMustNotBeZero => "ledger_must_not_be_zero"
  | .codeMustNotBeZero => "code_must_not_be_zero"
  | .debitAccountNotFound => "debit_account_not_found"
  | .creditAccountNotFound => "credit_account_not_found"
  | .accountsMustHaveTheSameLedger => "accounts_must_have_the_same_ledger"
  | .transferMustHaveTheSameLedgerAsAccounts => "transfer_must_have_the_same_ledger_as_accounts"
  | .pendingTransferNotFound => "pending_transfer_not_found"
  | .pendingTransferNotPending => "pending_transfer_not_pending"
  | .pendingTransferHasDifferentDebitAccountId => "pending_transfer_has_different_debit_account_id"
  | .pendingTransferHasDifferentCreditAccountId => "pending_transfer_has_different_credit_account_id"
  | .pendingTransferHasDifferentLedger => "pending_transfer_has_different_ledger"
  | .pendingTransferHasDifferentCode => "pending_transfer_has_different_code"
  | .exceedsPendingTransferAmount => "exceeds_pending_transfer_amount"
  | .pendingTransferHasDifferentAmount => "pending_transfer_has_different_amount"
  | .pendingTransferAlreadyPosted => "pending_transfer_already_posted"
  | .pendingTransferAlreadyVoided => "pending_transfer_already_voided"
  | .overflowsDebitsPending => "overflows_debits_pending"
  | .overflowsCreditsPending => "overflows_credits_pending"
  | .overflowsDebitsPosted => "overflows_debits_posted"
  | .overflowsCreditsPosted => "overflows_credits_posted"
  | .overflowsDebits => "overflows_debits"
  | .overflowsCredits => "overflows_credits"
  | .exceedsCredits => "exceeds_credits"
  | .exceedsDebits => "exceeds_debits"

/-- Whether the code says the id was already taken (`exists` or an
`exists_with_different_*`). -/
def isExists : TransferStatus → Bool
  | .existsWithDifferentFlags | .existsWithDifferentPendingId | .existsWithDifferentDebitAccountId
  | .existsWithDifferentCreditAccountId | .existsWithDifferentAmount | .existsWithDifferentUserData128
  | .existsWithDifferentUserData64 | .existsWithDifferentUserData32 | .existsWithDifferentLedger
  | .existsWithDifferentCode | .exists => true
  | _ => false

/-- Whether a failure depends on the state of the ledger at the time (an
account or pending transfer missing, a limit reached), so that the id may
not be reused: a later attempt with the same id gets `id_already_failed`
(TigerBeetle's `CreateTransferStatus.transient`). -/
def transient : TransferStatus → Bool
  | .debitAccountNotFound | .creditAccountNotFound | .pendingTransferNotFound
  | .exceedsCredits | .exceedsDebits => true
  | _ => false

end TransferStatus

end Ledger
