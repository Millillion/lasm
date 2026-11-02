/-
The ledger's rules: creating accounts and transfers, one batch at a time,
exactly as TigerBeetle's state machine does for the subset Ledger
implements (`src/state_machine.zig` at 0.17.9: `create_account`,
`create_transfer`, `post_or_void_pending_transfer`, `execute_create`). Each
check is made in TigerBeetle's order, so the same request gets the same
result code from both.

Each event is decided in two parts: `fetch…` reads what the event needs
(through `Reads m`, so from the database and the batch's own earlier
writes), and `decide…` is a pure function of what was read. A batch is cut
into linked chains (`chains`), and each chain is applied entirely or not at
all (`runChain`).
-/
import Ledger.Store

namespace Ledger

namespace Writes

/-- The writes `w`, then the writes `d`. -/
def merge (w d : Writes) : Writes :=
  { accounts := d.accounts ++ w.accounts, transfers := w.transfers ++ d.transfers, failed := w.failed ++ d.failed }

/-- The writes of a created transfer: the transfer and the new versions of its two accounts. -/
def ofTransfer (t : Transfer) (dr cr : Account) : Writes := { accounts := [cr, dr], transfers := [t] }

/-- The writes of a created account. -/
def ofAccount (a : Account) : Writes := { accounts := [a] }

end Writes

namespace Rules

/-- The status of the first check that fails, in order (none if all pass). -/
def firstFailing {σ : Type} : List (Bool × σ) → Option σ
  | [] => none
  | (b, s) :: cs => if b then some s else firstFailing cs

/-! ## Accounts -/

/-- `create_account_exists`: an account with this id exists; which field differs, if any. -/
def existsAccount (a : NewAccount) (e : Account) : AccountStatus :=
  (firstFailing [
    (a.flags != e.flags, .existsWithDifferentFlags),
    (a.userData128 != e.userData128, .existsWithDifferentUserData128),
    (a.userData64 != e.userData64, .existsWithDifferentUserData64),
    (a.userData32 != e.userData32, .existsWithDifferentUserData32),
    (a.ledger != e.ledger, .existsWithDifferentLedger),
    (a.code != e.code, .existsWithDifferentCode)]).getD .exists

/-- The checks on a new account, in TigerBeetle's order. -/
def accountChecks (a : NewAccount) : List (Bool × AccountStatus) := [
  (a.flags.debitsMustNotExceedCredits && a.flags.creditsMustNotExceedDebits, .flagsAreMutuallyExclusive),
  (a.ledger == 0, .ledgerMustNotBeZero),
  (a.code == 0, .codeMustNotBeZero)]

/-- The account created from `a` at time `ts`: all balances zero. -/
def newAccount (ts : Nat) (a : NewAccount) : Account :=
  { id := a.id, userData128 := a.userData128, userData64 := a.userData64, userData32 := a.userData32,
    ledger := a.ledger, code := a.code, flags := a.flags, timestamp := ts }

/-- `create_account`: the result of creating account `a` at time `ts`, given
the account with its id (if any), and the account created. -/
def decideAccount (existing : Option Account) (ts : Nat) (a : NewAccount) : AccountStatus × Option Account :=
  match firstFailing [(a.id == 0, .idMustNotBeZero), (a.id == u128Max, .idMustNotBeIntMax)] with
  | some s => (s, none)
  | none =>
    match existing with
    | some e => (existsAccount a e, none)
    | none =>
      match firstFailing (accountChecks a) with
      | some s => (s, none)
      | none => (.created, some (newAccount ts a))

/-- Creates one account: its status and its writes (none unless created). -/
def createAccount {m : Type → Type} [Monad m] (r : Reads m) (ts : Nat) (a : NewAccount) :
    m (AccountStatus × Writes) := do
  let existing ← r.account a.id
  return match decideAccount existing ts a with
    | (s, some acc) => (s, Writes.ofAccount acc)
    | (s, none) => (s, {})

/-! ## Transfers -/

/-- What creating a transfer reads. -/
structure TransferCtx where
  /-- The transfer with the new transfer's id. -/
  existing : Option Transfer
  /-- Whether that id already failed. -/
  failed : Bool
  /-- For a post or void: the pending transfer it names. -/
  pending : Option Transfer
  /-- For a post or void: what already posted or voided that pending transfer. -/
  resolution : Option Transfer
  /-- The debit account: the pending transfer's for a post or void, else the one named. -/
  debit : Option Account
  /-- The credit account, likewise. -/
  credit : Option Account

/-- Reads what creating transfer `t` needs. -/
def fetchTransfer {m : Type → Type} [Monad m] (r : Reads m) (t : NewTransfer) : m TransferCtx := do
  let existing ← r.transfer t.id
  let failed ← r.failed t.id
  let pending ← if t.flags.resolves then r.transfer t.pendingId else pure none
  let resolution ← if t.flags.resolves then r.resolution t.pendingId else pure none
  let drId := match pending with | some p => p.debitAccountId | none => t.debitAccountId
  let crId := match pending with | some p => p.creditAccountId | none => t.creditAccountId
  let debit ← r.account drId
  let credit ← r.account crId
  return { existing, failed, pending, resolution, debit, credit }

/-- The amount a post or void moves: a void's zero and a post's `u128Max`
mean the pending transfer's whole amount. -/
def resolvedAmount (t : NewTransfer) (p : Transfer) : Nat :=
  if t.flags.voidPendingTransfer then (if t.amount == 0 then p.amount else t.amount)
  else (if t.amount == u128Max then p.amount else t.amount)

/-- A post's or void's user data: its own where it gives some, else the pending transfer's. -/
def orPending (mine theirs : Nat) : Nat := if mine != 0 then mine else theirs

/-- `post_or_void_pending_transfer_exists`: a post or void with this id
exists (with the same flags and pending id); which field differs, if any. -/
def existsResolution (t : NewTransfer) (e p : Transfer) : TransferStatus :=
  (firstFailing [
    (t.debitAccountId != 0 && t.debitAccountId != e.debitAccountId, .existsWithDifferentDebitAccountId),
    (t.creditAccountId != 0 && t.creditAccountId != e.creditAccountId, .existsWithDifferentCreditAccountId),
    (resolvedAmount t p != e.amount, .existsWithDifferentAmount),
    (orPending t.userData128 p.userData128 != e.userData128, .existsWithDifferentUserData128),
    (orPending t.userData64 p.userData64 != e.userData64, .existsWithDifferentUserData64),
    (orPending t.userData32 p.userData32 != e.userData32, .existsWithDifferentUserData32),
    (t.ledger != 0 && t.ledger != e.ledger, .existsWithDifferentLedger),
    (t.code != 0 && t.code != e.code, .existsWithDifferentCode)]).getD .exists

/-- `create_transfer_exists`: a transfer with this id exists; which field
differs, if any. `p` is the pending transfer `t` names, for a post or void. -/
def existsTransfer (t : NewTransfer) (e : Transfer) (p : Option Transfer) : TransferStatus :=
  if t.flags != e.flags then .existsWithDifferentFlags
  else if t.pendingId != e.pendingId then .existsWithDifferentPendingId
  else if t.flags.resolves then
    match p with
    | some p => existsResolution t e p
    | none => .exists
  else (firstFailing [
    (t.debitAccountId != e.debitAccountId, .existsWithDifferentDebitAccountId),
    (t.creditAccountId != e.creditAccountId, .existsWithDifferentCreditAccountId),
    (t.amount != e.amount, .existsWithDifferentAmount),
    (t.userData128 != e.userData128, .existsWithDifferentUserData128),
    (t.userData64 != e.userData64, .existsWithDifferentUserData64),
    (t.userData32 != e.userData32, .existsWithDifferentUserData32),
    (t.ledger != e.ledger, .existsWithDifferentLedger),
    (t.code != e.code, .existsWithDifferentCode)]).getD .exists

/-- What a created transfer writes: the transfer and its two accounts' new versions. -/
abbrev Effect := Transfer × Account × Account

/-- The checks on a new transfer before its accounts are read, in TigerBeetle's order. -/
def newChecks (t : NewTransfer) : List (Bool × TransferStatus) := [
  (t.debitAccountId == 0, .debitAccountIdMustNotBeZero),
  (t.debitAccountId == u128Max, .debitAccountIdMustNotBeIntMax),
  (t.creditAccountId == 0, .creditAccountIdMustNotBeZero),
  (t.creditAccountId == u128Max, .creditAccountIdMustNotBeIntMax),
  (t.creditAccountId == t.debitAccountId, .accountsMustBeDifferent),
  (t.pendingId != 0, .pendingIdMustBeZero),
  (t.ledger == 0, .ledgerMustNotBeZero),
  (t.code == 0, .codeMustNotBeZero)]

/-- The checks on a new transfer against its accounts, in TigerBeetle's
order: the same ledger, no balance past `limit`, and the accounts' flags. -/
def balanceChecks (t : NewTransfer) (dr cr : Account) : List (Bool × TransferStatus) :=
  let a := t.amount
  [(dr.ledger != cr.ledger, .accountsMustHaveTheSameLedger),
   (t.ledger != dr.ledger, .transferMustHaveTheSameLedgerAsAccounts),
   (t.flags.pending && a + dr.debitsPending > limit, .overflowsDebitsPending),
   (t.flags.pending && a + cr.creditsPending > limit, .overflowsCreditsPending),
   (a + dr.debitsPosted > limit, .overflowsDebitsPosted),
   (a + cr.creditsPosted > limit, .overflowsCreditsPosted),
   (a + (dr.debitsPending + dr.debitsPosted) > limit, .overflowsDebits),
   (a + (cr.creditsPending + cr.creditsPosted) > limit, .overflowsCredits),
   (dr.flags.debitsMustNotExceedCredits && dr.debitsPending + dr.debitsPosted + a > dr.creditsPosted,
     .exceedsCredits),
   (cr.flags.creditsMustNotExceedDebits && cr.creditsPending + cr.creditsPosted + a > cr.debitsPosted,
     .exceedsDebits)]

/-- What a new transfer writes: the transfer, and its amount added to the
debit account's debits and the credit account's credits (pending ones for
a pending transfer, posted ones otherwise). -/
def newEffect (ts : Nat) (t : NewTransfer) (dr cr : Account) : Effect :=
  let tr : Transfer :=
    { id := t.id, debitAccountId := t.debitAccountId, creditAccountId := t.creditAccountId,
      amount := t.amount, pendingId := 0, userData128 := t.userData128, userData64 := t.userData64,
      userData32 := t.userData32, ledger := t.ledger, code := t.code, flags := t.flags, timestamp := ts }
  if t.flags.pending then
    (tr, { dr with debitsPending := dr.debitsPending + t.amount }, { cr with creditsPending := cr.creditsPending + t.amount })
  else
    (tr, { dr with debitsPosted := dr.debitsPosted + t.amount }, { cr with creditsPosted := cr.creditsPosted + t.amount })

/-- A new transfer that is not a post or void (`create_transfer` after the
id checks): a single-phase transfer, or the first phase of a two-phase one. -/
def decideNew (c : TransferCtx) (ts : Nat) (t : NewTransfer) : TransferStatus × Option Effect :=
  match firstFailing (newChecks t) with
  | some s => (s, none)
  | none =>
    match c.debit, c.credit with
    | none, _ => (.debitAccountNotFound, none)
    | some _, none => (.creditAccountNotFound, none)
    | some dr, some cr =>
      match firstFailing (balanceChecks t dr cr) with
      | some s => (s, none)
      | none => (.created, some (newEffect ts t dr cr))

/-- The checks on a post or void before its pending transfer is read, in TigerBeetle's order. -/
def resolveChecks (t : NewTransfer) : List (Bool × TransferStatus) := [
  (t.flags.postPendingTransfer && t.flags.voidPendingTransfer, .flagsAreMutuallyExclusive),
  (t.flags.pending, .flagsAreMutuallyExclusive),
  (t.pendingId == 0, .pendingIdMustNotBeZero),
  (t.pendingId == u128Max, .pendingIdMustNotBeIntMax),
  (t.pendingId == t.id, .pendingIdMustBeDifferent)]

/-- The checks of a post or void against its pending transfer `p`, in TigerBeetle's order. -/
def pendingChecks (t : NewTransfer) (p : Transfer) : List (Bool × TransferStatus) := [
  (t.debitAccountId != 0 && t.debitAccountId != p.debitAccountId, .pendingTransferHasDifferentDebitAccountId),
  (t.creditAccountId != 0 && t.creditAccountId != p.creditAccountId, .pendingTransferHasDifferentCreditAccountId),
  (t.ledger != 0 && t.ledger != p.ledger, .pendingTransferHasDifferentLedger),
  (t.code != 0 && t.code != p.code, .pendingTransferHasDifferentCode),
  (resolvedAmount t p > p.amount, .exceedsPendingTransferAmount),
  (t.flags.voidPendingTransfer && resolvedAmount t p < p.amount, .pendingTransferHasDifferentAmount)]

/-- What a post or void writes: the transfer (with the pending transfer's
accounts, ledger and code), and the pending amount released from both
accounts' pending balances; a post adds its amount to their posted balances. -/
def resolveEffect (ts : Nat) (t : NewTransfer) (p : Transfer) (dr cr : Account) : Effect :=
  let a := resolvedAmount t p
  let tr : Transfer :=
    { id := t.id, debitAccountId := p.debitAccountId, creditAccountId := p.creditAccountId, amount := a,
      pendingId := t.pendingId, userData128 := orPending t.userData128 p.userData128,
      userData64 := orPending t.userData64 p.userData64, userData32 := orPending t.userData32 p.userData32,
      ledger := p.ledger, code := p.code, flags := t.flags, timestamp := ts }
  let posted := if t.flags.postPendingTransfer then a else 0
  (tr, { dr with debitsPending := dr.debitsPending - p.amount, debitsPosted := dr.debitsPosted + posted },
       { cr with creditsPending := cr.creditsPending - p.amount, creditsPosted := cr.creditsPosted + posted })

/-- A post or void (`post_or_void_pending_transfer`). -/
def decideResolve (c : TransferCtx) (ts : Nat) (t : NewTransfer) : TransferStatus × Option Effect :=
  match firstFailing (resolveChecks t) with
  | some s => (s, none)
  | none =>
    match c.pending with
    | none => (.pendingTransferNotFound, none)
    | some p =>
      if !p.flags.pending then (.pendingTransferNotPending, none)
      else match c.debit, c.credit with
      | none, _ => (.debitAccountNotFound, none)
      | some _, none => (.creditAccountNotFound, none)
      | some dr, some cr =>
        match firstFailing (pendingChecks t p) with
        | some s => (s, none)
        | none =>
          match c.resolution with
          | some r => (if r.flags.postPendingTransfer then .pendingTransferAlreadyPosted
                       else .pendingTransferAlreadyVoided, none)
          | none => (.created, some (resolveEffect ts t p dr cr))

/-- `create_transfer`: the result of creating transfer `t` at time `ts`,
given what was read, and what it writes if created. -/
def decideTransfer (c : TransferCtx) (ts : Nat) (t : NewTransfer) : TransferStatus × Option Effect :=
  match firstFailing [(t.id == 0, .idMustNotBeZero), (t.id == u128Max, .idMustNotBeIntMax)] with
  | some s => (s, none)
  | none =>
    match c.existing with
    | some e => (existsTransfer t e c.pending, none)
    | none =>
      if c.failed then (.idAlreadyFailed, none)
      else if t.flags.resolves then decideResolve c ts t
      else decideNew c ts t

/-- Creates one transfer: its status and its writes (none unless created). -/
def createTransfer {m : Type → Type} [Monad m] (r : Reads m) (ts : Nat) (t : NewTransfer) :
    m (TransferStatus × Writes) := do
  let c ← fetchTransfer r t
  return match decideTransfer c ts t with
    | (s, some (tr, dr, cr)) => (s, Writes.ofTransfer tr dr cr)
    | (s, none) => (s, {})

/-! ## Batches and linked chains -/

/-- What the batch logic needs to know about a kind of event (accounts or transfers). -/
structure Kind (ε ρ : Type) where
  /-- Whether the event is linked to the next. -/
  linked : ε → Bool
  created : ρ
  linkedEventFailed : ρ
  linkedEventChainOpen : ρ
  /-- What a failed event writes (after its chain is rolled back): a
  transfer that failed for a transient reason records its id. -/
  onFailure : ε → ρ → Writes

/-- Cuts a batch into chains: each chain is a run of linked events and the
event that ends it, which is not linked. An event that is not linked is a
chain of one. Only the last chain can end with a linked event (an open chain). -/
def chains {ε : Type} (linked : ε → Bool) : List ε → List (List ε)
  | [] => []
  | e :: es =>
    if linked e then
      match chains linked es with
      | [] => [[e]]
      | c :: cs => (e :: c) :: cs
    else [e] :: chains linked es

variable {m : Type → Type} [Monad m] {ε ρ : Type} [DecidableEq ρ]

/-- Applies events in order, each seeing the writes of those before, until
one fails: how many succeeded, the failing event and its status (if one
failed), and the writes of those that succeeded. The last event of an open
chain fails with `linked_event_chain_open` without being tried. -/
def applyChain (k : Kind ε ρ) (step : Reads m → Nat → ε → m (ρ × Writes)) (r : Reads m) :
    List ε → Nat → Writes → m (Nat × Option (ε × ρ) × Writes)
  | [], _, w => pure (0, none, w)
  | e :: es, ts, w => do
    let (s, d) ← if es.isEmpty && k.linked e then pure (k.linkedEventChainOpen, {}) else step (r.over w) ts e
    if s = k.created then
      let (n, f, w') ← applyChain k step r es (ts + 1) (w.merge d)
      return (n + 1, f, w')
    else return (0, some (e, s), w)

/-- Runs one chain from writes `w`: its events' statuses and the writes
after it. If every event succeeds, all are `created` and their writes are
kept. Otherwise none is kept: the failing event has its own status, every
other event `linked_event_failed` (the last of an open chain
`linked_event_chain_open`), and the only write is the failing event's
`onFailure`. -/
def runChain (k : Kind ε ρ) (step : Reads m → Nat → ε → m (ρ × Writes)) (r : Reads m)
    (chain : List ε) (ts : Nat) (w : Writes) : m (List ρ × Writes) := do
  let (n, f, w') ← applyChain k step r chain ts w
  match f with
  | none => return (List.replicate n k.created, w')
  | some (e, s) =>
    let rest := chain.length - n - 1
    let last := match chain.getLast? with
      | some l => if k.linked l then k.linkedEventChainOpen else k.linkedEventFailed
      | none => k.linkedEventFailed
    let after := if rest = 0 then [] else List.replicate (rest - 1) k.linkedEventFailed ++ [last]
    return (List.replicate n k.linkedEventFailed ++ [s] ++ after, w.merge (k.onFailure e s))

/-- Runs chains in order, each starting at the timestamp after the previous one's events. -/
def runChains (k : Kind ε ρ) (step : Reads m → Nat → ε → m (ρ × Writes)) (r : Reads m) :
    List (List ε) → Nat → Writes → m (List ρ × Writes)
  | [], _, w => pure ([], w)
  | c :: cs, ts, w => do
    let (rs, w) ← runChain k step r c ts w
    let (rs', w) ← runChains k step r cs (ts + c.length) w
    return (rs ++ rs', w)

/-- The first timestamp of a batch: after every stored one (`last`), and not before `now`. -/
def firstTimestamp (now last : Nat) : Nat := max now (last + 1)

/-- How accounts are linked and fail. -/
def accountKind : Kind NewAccount AccountStatus where
  linked a := a.flags.linked
  created := .created
  linkedEventFailed := .linkedEventFailed
  linkedEventChainOpen := .linkedEventChainOpen
  onFailure _ _ := {}

/-- How transfers are linked and fail: a transient failure records the id. -/
def transferKind : Kind NewTransfer TransferStatus where
  linked t := t.flags.linked
  created := .created
  linkedEventFailed := .linkedEventFailed
  linkedEventChainOpen := .linkedEventChainOpen
  onFailure t s := if s.transient then { failed := [t.id] } else {}

/-- `create_accounts`: a batch of accounts, the first at timestamp `ts`, one status each, and the writes. -/
def createAccounts (r : Reads m) (ts : Nat) (batch : List NewAccount) : m (List AccountStatus × Writes) :=
  runChains accountKind createAccount r (chains accountKind.linked batch) ts {}

/-- `create_transfers`: a batch of transfers, the first at timestamp `ts`, one status each, and the writes. -/
def createTransfers (r : Reads m) (ts : Nat) (batch : List NewTransfer) : m (List TransferStatus × Writes) :=
  runChains transferKind createTransfer r (chains transferKind.linked batch) ts {}

end Rules
end Ledger
