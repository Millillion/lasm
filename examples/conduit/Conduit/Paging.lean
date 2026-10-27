/-
Pagination of article lists (`?limit=&offset=`). The server sorts the ids of
all matching articles newest first and takes one window of them, so the
window is a contiguous run of that order: `Proofs/Paging.lean` proves that
consecutive pages never skip or repeat an article and keep the order.
-/
import Conduit.Types

namespace Conduit

/-- One page: at most `limit` items after skipping `offset`. -/
structure Page where
  limit : Nat := 20
  offset : Nat := 0
  deriving Repr, BEq, DecidableEq, Inhabited

/-- The largest page the server returns. -/
def maxLimit : Nat := 100

/-- The items of one page. -/
def Page.window {α : Type} (p : Page) (l : List α) : List α :=
  (l.drop p.offset).take p.limit

/-- `?limit=` and `?offset=`: `limit` 1–100 (default 20), `offset` ≥ 0 (default 0). -/
def parsePage (param : String → Option String) : Except ApiError Page := do
  let limit ← match param "limit" with
    | none => pure 20
    | some s => match s.toNat? with
      | some n => if n = 0 then throw (.invalid [("limit", ["must be greater than 0"])]) else pure (min n maxLimit)
      | none => throw (.invalid [("limit", ["is not a number"])])
  let offset ← match param "offset" with
    | none => pure 0
    | some s => match s.toNat? with
      | some n => pure n
      | none => throw (.invalid [("offset", ["is not a number"])])
  return { limit, offset }

/-- Newest first: article ids grow with time, so a larger id is newer. -/
def newestFirst (ids : List Nat) : List Nat := ids.mergeSort (fun a b => decide (a ≥ b))

end Conduit
