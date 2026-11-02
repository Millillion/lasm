/-
The browser page: the accounts with their balances, and the journal, read
from the API. `update` and `view` are pure (the Elm architecture), so the
proofs (`Proofs/Page.lean`) are about the functions the browser runs.
-/
import Lasm.UI
import Ledger.Json
open Lean Lasm.UI Ledger

namespace Ledger.Page

structure Model where
  accounts : List Account := []
  transfers : List Transfer := []
  /-- Show only this ledger's accounts and transfers. -/
  ledger : Option Nat := none
  /-- What the page is waiting for or what went wrong; none once loaded. -/
  status : Option String := some "Loading…"
  deriving Inhabited

inductive Msg where
  | refresh
  | gotAccounts (r : Except Http.Error String)
  | gotTransfers (r : Except Http.Error String)
  | showLedger (l : Option Nat)

/-- A JSON array of `decode`d items. -/
def decodeList {α : Type} (decode : String → Json → Except String α) (body : String) : Except String (List α) := do
  match ← Json.parse body with
  | .arr a => a.toList.mapM (decode "")
  | _ => throw "expected an array"

/-- The requests that load the page. -/
def load : Cmd Msg := Cmd.batch [
  Http.get "/api/accounts" .gotAccounts,
  Http.get "/api/transfers?limit=1000" .gotTransfers]

def errorText : Http.Error → String
  | .network e => s!"network error: {e}"
  | .status r => s!"HTTP {r.status}"
  | .body e => s!"unreadable response: {e}"

def update : Msg → Model → Model × Cmd Msg
  | .refresh, m => ({ m with status := some "Loading…" }, load)
  | .gotAccounts (.ok body), m =>
    match decodeList Wire.decodeAccount body with
    | .ok accounts => ({ m with accounts, status := none }, .none)
    | .error e => ({ m with status := some s!"Could not read the accounts: {e}" }, .none)
  | .gotTransfers (.ok body), m =>
    match decodeList Wire.decodeTransfer body with
    | .ok transfers => ({ m with transfers }, .none)
    | .error e => ({ m with status := some s!"Could not read the journal: {e}" }, .none)
  | .gotAccounts (.error e), m | .gotTransfers (.error e), m => ({ m with status := some (errorText e) }, .none)
  | .showLedger l, m => ({ m with ledger := l }, .none)

/-- The accounts and transfers the page shows: those of the chosen ledger. -/
def Model.shownAccounts (m : Model) : List Account := m.accounts.filter fun a => m.ledger.all (a.ledger == ·)
def Model.shownTransfers (m : Model) : List Transfer := m.transfers.filter fun t => m.ledger.all (t.ledger == ·)

/-- An account's balance: credits posted minus debits posted (as text, may be negative). -/
def net (a : Account) : String :=
  if a.creditsPosted ≥ a.debitsPosted then toString (a.creditsPosted - a.debitsPosted)
  else "−" ++ toString (a.debitsPosted - a.creditsPosted)

def num (n : Nat) : Html Msg := td [class_ "num"] [text (toString n)]

def accountFlags (f : AccountFlags) : String :=
  ", ".intercalate ((if f.debitsMustNotExceedCredits then ["debits ≤ credits"] else []) ++
    (if f.creditsMustNotExceedDebits then ["credits ≤ debits"] else []))

def transferKind (t : Transfer) : String :=
  if t.flags.postPendingTransfer then s!"post of {t.pendingId}"
  else if t.flags.voidPendingTransfer then s!"void of {t.pendingId}"
  else if t.flags.pending then "pending" else "posted"

def accountRow (a : Account) : Html Msg :=
  keyed (toString a.id) <| tr [data "account" (toString a.id)] [
    td [] [text (toString a.id)], num a.ledger, num a.code,
    num a.debitsPending, num a.debitsPosted, num a.creditsPending, num a.creditsPosted,
    td [class_ "num balance"] [text (net a)], td [] [text (accountFlags a.flags)]]

def transferRow (t : Transfer) : Html Msg :=
  keyed (toString t.id) <| tr [data "transfer" (toString t.id)] [
    td [] [text (toString t.id)], td [] [text (toString t.debitAccountId)], td [] [text (toString t.creditAccountId)],
    num t.amount, num t.ledger, num t.code, td [] [text (transferKind t)]]

def ledgerButton (m : Model) (label : String) (l : Option Nat) : Html Msg :=
  button [onClick (.showLedger l), aria "pressed" (if m.ledger == l then "true" else "false")] [text label]

/-- The accounts table's body: one row per shown account, in order. -/
def accountsBody (m : Model) : Html Msg := tbody [] (m.shownAccounts.map accountRow)

/-- The journal table's body: one row per shown transfer, in journal order. -/
def journalBody (m : Model) : Html Msg := tbody [] (m.shownTransfers.map transferRow)

def view (m : Model) : Html Msg :=
  let ledgers := (m.accounts.map (·.ledger)).eraseDups
  main_ [class_ "ledger"] [
    h1 [] [text "Ledger"],
    p [] [text "Accounts and transfers, in TigerBeetle's data model. Every balance here is proved to replay from the journal."],
    nav [aria "label" "Ledgers"] (ledgerButton m "All ledgers" none :: ledgers.map fun l => ledgerButton m s!"Ledger {l}" (some l)),
    button [id_ "refresh", onClick .refresh] [text "Refresh"],
    match m.status with
    | some s => p [role "status", id_ "status"] [text s]
    | none => empty,
    h2 [] [text "Accounts"],
    table [id_ "accounts"] [
      thead [] [tr [] (["Account", "Ledger", "Code", "Debits pending", "Debits posted", "Credits pending",
        "Credits posted", "Balance", "Limits"].map fun h => th [attr "scope" "col"] [text h])],
      accountsBody m],
    h2 [] [text "Journal"],
    table [id_ "journal"] [
      thead [] [tr [] (["Transfer", "Debit", "Credit", "Amount", "Ledger", "Code", "Kind"].map fun h =>
        th [attr "scope" "col"] [text h])],
      journalBody m]]

def init : Model × Cmd Msg := ({}, load)

end Ledger.Page
