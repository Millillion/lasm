/-
The wire format: TigerBeetle's field names in snake_case. The 128- and
64-bit fields (ids, amounts, balances, `user_data_128`, `user_data_64`,
timestamps) are decimal strings, because JSON numbers lose precision past
2^53 in JavaScript; a request may also give them as JSON integers. The
32- and 16-bit fields (`user_data_32`, `ledger`, `code`) are numbers. Flags
are an object of booleans, named as TigerBeetle names them.

A request is strict: an unknown field (for example `timeout` or
`imported`, which Ledger does not implement) is an error, not ignored.
-/
import Lean.Data.Json
import Ledger.Types
import Ledger.Audit
open Lean

namespace Ledger.Wire

/-! ## Encoding -/

/-- A u128 or u64 field: a decimal string. -/
def big (n : Nat) : Json := .str (toString n)

/-- A u32 or u16 field: a number. -/
def small (n : Nat) : Json := .num (n : Int)

def accountFlags (f : AccountFlags) : Json :=
  Json.mkObj [("linked", .bool f.linked), ("debits_must_not_exceed_credits", .bool f.debitsMustNotExceedCredits),
              ("credits_must_not_exceed_debits", .bool f.creditsMustNotExceedDebits)]

def transferFlags (f : TransferFlags) : Json :=
  Json.mkObj [("linked", .bool f.linked), ("pending", .bool f.pending),
              ("post_pending_transfer", .bool f.postPendingTransfer),
              ("void_pending_transfer", .bool f.voidPendingTransfer)]

def account (a : Account) : Json :=
  Json.mkObj [("id", big a.id), ("debits_pending", big a.debitsPending), ("debits_posted", big a.debitsPosted),
    ("credits_pending", big a.creditsPending), ("credits_posted", big a.creditsPosted),
    ("user_data_128", big a.userData128), ("user_data_64", big a.userData64), ("user_data_32", small a.userData32),
    ("ledger", small a.ledger), ("code", small a.code), ("flags", accountFlags a.flags), ("timestamp", big a.timestamp)]

def transfer (t : Transfer) : Json :=
  Json.mkObj [("id", big t.id), ("debit_account_id", big t.debitAccountId),
    ("credit_account_id", big t.creditAccountId), ("amount", big t.amount), ("pending_id", big t.pendingId),
    ("user_data_128", big t.userData128), ("user_data_64", big t.userData64), ("user_data_32", small t.userData32),
    ("ledger", small t.ledger), ("code", small t.code), ("flags", transferFlags t.flags),
    ("timestamp", big t.timestamp)]

def newAccount (a : NewAccount) : Json :=
  Json.mkObj [("id", big a.id), ("user_data_128", big a.userData128), ("user_data_64", big a.userData64),
    ("user_data_32", small a.userData32), ("ledger", small a.ledger), ("code", small a.code),
    ("flags", accountFlags a.flags)]

def newTransfer (t : NewTransfer) : Json :=
  Json.mkObj [("id", big t.id), ("debit_account_id", big t.debitAccountId),
    ("credit_account_id", big t.creditAccountId), ("amount", big t.amount), ("pending_id", big t.pendingId),
    ("user_data_128", big t.userData128), ("user_data_64", big t.userData64), ("user_data_32", small t.userData32),
    ("ledger", small t.ledger), ("code", small t.code), ("flags", transferFlags t.flags)]

/-- One result per event, in order: `[{"status": "created"}, …]`. -/
def results (names : List String) : Json :=
  .arr (names.map fun n => Json.mkObj [("status", .str n)]).toArray

def error (msg : String) : Json := Json.mkObj [("error", .str msg)]

/-! ## Decoding -/

def u128Bound : Nat := u128Max
def u64Max : Nat := 2 ^ 64 - 1
def u32Max : Nat := 2 ^ 32 - 1
def u16Max : Nat := 2 ^ 16 - 1

/-- A whole number of at most `max`, given as a JSON integer or a decimal string. -/
def nat (what : String) (max : Nat) : Json → Except String Nat
  | .str s =>
    if s.isEmpty || s.length > 40 || !s.all Char.isDigit then .error s!"{what}: expected a decimal string"
    else
      let n := s.toNat!
      if n ≤ max then .ok n else .error s!"{what}: out of range"
  | .num n =>
    if n.exponent == 0 && n.mantissa ≥ 0 then
      let v := n.mantissa.toNat
      if v ≤ max then .ok v else .error s!"{what}: out of range"
    else .error s!"{what}: expected a whole number"
  | _ => .error s!"{what}: expected a whole number"

/-- The keys of an object, which must all be among `allowed`. -/
def object (what : String) (allowed : List String) : Json → Except String (Std.TreeMap.Raw String Json compare)
  | .obj kvs => do
    let keys := kvs.foldl (fun acc k _ => acc ++ [k]) ([] : List String)
    match keys.find? (· ∉ allowed) with
    | some k => .error s!"{what}: unknown field {k} (Ledger implements a subset of TigerBeetle: see README.md)"
    | none => .ok kvs
  | _ => .error s!"{what}: expected an object"

def field (kvs : Std.TreeMap.Raw String Json compare) (what k : String) (max : Nat) : Except String Nat :=
  match kvs.get? k with
  | none => .ok 0
  | some v => nat s!"{what}.{k}" max v

def flag (kvs : Std.TreeMap.Raw String Json compare) (what k : String) : Except String Bool :=
  match kvs.get? k with
  | none => .ok false
  | some (.bool b) => .ok b
  | some _ => .error s!"{what}.{k}: expected a boolean"

def decodeAccountFlags (what : String) (j : Json) : Except String AccountFlags := do
  let kvs ← object what ["linked", "debits_must_not_exceed_credits", "credits_must_not_exceed_debits"] j
  return { linked := ← flag kvs what "linked",
           debitsMustNotExceedCredits := ← flag kvs what "debits_must_not_exceed_credits",
           creditsMustNotExceedDebits := ← flag kvs what "credits_must_not_exceed_debits" }

def decodeTransferFlags (what : String) (j : Json) : Except String TransferFlags := do
  let kvs ← object what ["linked", "pending", "post_pending_transfer", "void_pending_transfer"] j
  return { linked := ← flag kvs what "linked", pending := ← flag kvs what "pending",
           postPendingTransfer := ← flag kvs what "post_pending_transfer",
           voidPendingTransfer := ← flag kvs what "void_pending_transfer" }

def flagsOf {α : Type} [Inhabited α] (kvs : Std.TreeMap.Raw String Json compare) (what : String) (default : α)
    (dec : String → Json → Except String α) : Except String α :=
  match kvs.get? "flags" with
  | none => .ok default
  | some j => dec s!"{what}.flags" j

def decodeNewAccount (what : String) (j : Json) : Except String NewAccount := do
  let kvs ← object what ["id", "user_data_128", "user_data_64", "user_data_32", "ledger", "code", "flags"] j
  return { id := ← field kvs what "id" u128Bound, userData128 := ← field kvs what "user_data_128" u128Bound,
           userData64 := ← field kvs what "user_data_64" u64Max, userData32 := ← field kvs what "user_data_32" u32Max,
           ledger := ← field kvs what "ledger" u32Max, code := ← field kvs what "code" u16Max,
           flags := ← flagsOf kvs what {} decodeAccountFlags }

def decodeNewTransfer (what : String) (j : Json) : Except String NewTransfer := do
  let kvs ← object what ["id", "debit_account_id", "credit_account_id", "amount", "pending_id", "user_data_128",
    "user_data_64", "user_data_32", "ledger", "code", "flags"] j
  return { id := ← field kvs what "id" u128Bound, debitAccountId := ← field kvs what "debit_account_id" u128Bound,
           creditAccountId := ← field kvs what "credit_account_id" u128Bound,
           amount := ← field kvs what "amount" u128Bound, pendingId := ← field kvs what "pending_id" u128Bound,
           userData128 := ← field kvs what "user_data_128" u128Bound,
           userData64 := ← field kvs what "user_data_64" u64Max, userData32 := ← field kvs what "user_data_32" u32Max,
           ledger := ← field kvs what "ledger" u32Max, code := ← field kvs what "code" u16Max,
           flags := ← flagsOf kvs what {} decodeTransferFlags }

/-! ## The exported journal (`GET /api/journal`, read by `ledger verify`) -/

def decodeAccount (what : String) (j : Json) : Except String Account := do
  let kvs ← object what ["id", "debits_pending", "debits_posted", "credits_pending", "credits_posted",
    "user_data_128", "user_data_64", "user_data_32", "ledger", "code", "flags", "timestamp"] j
  return { id := ← field kvs what "id" u128Bound,
           debitsPending := ← field kvs what "debits_pending" u128Bound,
           debitsPosted := ← field kvs what "debits_posted" u128Bound,
           creditsPending := ← field kvs what "credits_pending" u128Bound,
           creditsPosted := ← field kvs what "credits_posted" u128Bound,
           userData128 := ← field kvs what "user_data_128" u128Bound,
           userData64 := ← field kvs what "user_data_64" u64Max, userData32 := ← field kvs what "user_data_32" u32Max,
           ledger := ← field kvs what "ledger" u32Max, code := ← field kvs what "code" u16Max,
           flags := ← flagsOf kvs what {} decodeAccountFlags, timestamp := ← field kvs what "timestamp" u64Max }

def decodeTransfer (what : String) (j : Json) : Except String Transfer := do
  let kvs ← object what ["id", "debit_account_id", "credit_account_id", "amount", "pending_id", "user_data_128",
    "user_data_64", "user_data_32", "ledger", "code", "flags", "timestamp"] j
  return { id := ← field kvs what "id" u128Bound, debitAccountId := ← field kvs what "debit_account_id" u128Bound,
           creditAccountId := ← field kvs what "credit_account_id" u128Bound,
           amount := ← field kvs what "amount" u128Bound, pendingId := ← field kvs what "pending_id" u128Bound,
           userData128 := ← field kvs what "user_data_128" u128Bound,
           userData64 := ← field kvs what "user_data_64" u64Max, userData32 := ← field kvs what "user_data_32" u32Max,
           ledger := ← field kvs what "ledger" u32Max, code := ← field kvs what "code" u16Max,
           flags := ← flagsOf kvs what {} decodeTransferFlags, timestamp := ← field kvs what "timestamp" u64Max }

/-- An exported journal: its accounts and its transfers, in order. -/
def journal (text : String) : Except String (List Account × List Transfer) := do
  let mut accounts : Array Account := #[]
  let mut transfers : Array Transfer := #[]
  let mut n := 0
  for line in text.splitOn "\n" do
    n := n + 1
    if line.trimAscii.isEmpty then continue
    let j ← Json.parse line |>.mapError (fun _ => s!"line {n}: not JSON")
    let kvs ← object s!"line {n}" ["type", "data"] j
    match kvs.get? "type", kvs.get? "data" with
    | some (.str "account"), some d => accounts := accounts.push (← decodeAccount s!"line {n}" d)
    | some (.str "transfer"), some d => transfers := transfers.push (← decodeTransfer s!"line {n}" d)
    | _, _ => throw s!"line {n}: expected a \"type\" (account or transfer) and its \"data\""
  return (accounts.toList, transfers.toList)

/-- The most events in one request (TigerBeetle's batch size). -/
def maxBatch : Nat := 8189

/-- A batch: a JSON array of events. -/
def batch {α : Type} (dec : String → Json → Except String α) (body : String) : Except String (List α) := do
  let j ← Json.parse body |>.mapError (fun _ => "the body is not valid JSON")
  match j with
  | .arr a =>
    if a.size > maxBatch then throw s!"a batch has at most {maxBatch} events"
    else a.toList.zipIdx.mapM fun (x, i) => dec s!"[{i}]" x
  | _ => throw "expected a JSON array of events"

end Ledger.Wire
