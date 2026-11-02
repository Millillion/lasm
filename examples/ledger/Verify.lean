/- The journal auditor: `ledger verify journal.ndjson`. Built for WASI
(`npm run build:wasi`, wasi/main.wasm), it runs on wasmtime, wasmer and
`node:wasi`; it reads a journal exported by `GET /api/journal`, replays every
transfer from zero and checks the ledger's rules (`Ledger.Audit.verify`).
Exit status: 0 consistent, 1 problems found, 2 unreadable input. -/
import Ledger

def usage : String := "usage: ledger verify JOURNAL.ndjson"

def main (args : List String) : IO UInt32 := do
  let path ← match args with
    | ["verify", p] | [p] => pure p
    | _ => IO.eprintln usage; return 2
  let text ← try IO.FS.readFile path catch e => IO.eprintln s!"{path}: {e}"; return 2
  match Ledger.Wire.journal text with
  | .error e => IO.eprintln s!"{path}: {e}"; return 2
  | .ok (accounts, transfers) =>
    match Ledger.Audit.verify accounts transfers with
    | [] =>
      IO.println s!"ok: {accounts.length} accounts and {transfers.length} transfers; every balance is the journal's, every ledger balances"
      return 0
    | problems =>
      for p in problems do IO.println p
      IO.println s!"{problems.length} problems in {accounts.length} accounts and {transfers.length} transfers"
      return 1
