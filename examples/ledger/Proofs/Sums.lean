/-
Sums over lists filtered by a predicate, the pending amounts of an account,
and the totals of a ledger after accounts are replaced.
-/
import Proofs.Decide

namespace Ledger.Proofs
open Ledger Rules

/-- The sum of `f` over the elements of `l` that satisfy `P`. -/
def sumIf {α : Type} (P : α → Bool) (f : α → Nat) (l : List α) : Nat := ((l.filter P).map f).sum

theorem sumIf_nil {α : Type} (P : α → Bool) (f : α → Nat) : sumIf P f [] = 0 := rfl

theorem sumIf_cons {α : Type} (P : α → Bool) (f : α → Nat) (x : α) (l : List α) :
    sumIf P f (x :: l) = (if P x then f x else 0) + sumIf P f l := by
  unfold sumIf; cases h : P x <;> simp [List.filter_cons, h]

theorem sumIf_append_one {α : Type} (P : α → Bool) (f : α → Nat) (l : List α) (x : α) :
    sumIf P f (l ++ [x]) = sumIf P f l + (if P x then f x else 0) := by
  unfold sumIf; cases h : P x <;> simp [List.filter_append, List.filter_cons, h]

theorem sumIf_congr {α : Type} {P Q : α → Bool} (f : α → Nat) {l : List α} (h : ∀ x ∈ l, P x = Q x) :
    sumIf P f l = sumIf Q f l := by
  unfold sumIf; rw [List.filter_congr h]

theorem le_sumIf {α : Type} {P : α → Bool} (f : α → Nat) {l : List α} {x : α} (hx : x ∈ l) (hp : P x = true) :
    f x ≤ sumIf P f l := by
  induction l with
  | nil => simp at hx
  | cons y l ih =>
    rw [sumIf_cons]
    rcases List.mem_cons.mp hx with e | m
    · subst e; simp [hp]
    · have := ih m; omega

/-- Changing the predicate at one element (of a list with unique keys) changes the sum by that element. -/
theorem sumIf_change {α : Type} (key : α → Nat) {P Q : α → Bool} (f : α → Nat) {l : List α}
    (hn : (l.map key).Nodup) {x : α} (hx : x ∈ l) (hq : Q x = false)
    (h : ∀ y ∈ l, key y ≠ key x → P y = Q y) :
    sumIf Q f l + (if P x then f x else 0) = sumIf P f l := by
  induction l with
  | nil => simp at hx
  | cons y l ih =>
    simp only [List.map_cons, List.nodup_cons] at hn
    rw [sumIf_cons, sumIf_cons]
    rcases List.mem_cons.mp hx with e | m
    · subst e
      rw [hq, sumIf_congr f (P := Q) (Q := P) (fun z hz => (h z (List.mem_cons_of_mem _ hz)
        (fun k => hn.1 (k ▸ List.mem_map_of_mem hz))).symm)]
      simp; omega
    · have hy : key y ≠ key x := fun k => hn.1 (k ▸ List.mem_map_of_mem m)
      rw [h y (List.mem_cons_self ..) hy]
      have := ih hn.2 m (fun z hz => h z (List.mem_cons_of_mem _ hz))
      omega

/-! ## Pending amounts -/

/-- Whether the pending transfer with this id is posted or voided in the journal. -/
def resolvedIn (J : List Transfer) (id : Nat) : Bool := J.any (fun r => r.flags.resolves && r.pendingId == id)

/-- The amount pending on one side (`side`: the debit or credit account) of
account `id`: the sum of its pending transfers not yet posted or voided. -/
def pendingOn (side : Transfer → Nat) (J : List Transfer) (id : Nat) : Nat :=
  sumIf (fun p => p.flags.pending && side p == id && !resolvedIn J p.id) (·.amount) J

theorem resolvedIn_append (J : List Transfer) (tr : Transfer) (i : Nat) :
    resolvedIn (J ++ [tr]) i = (resolvedIn J i || (tr.flags.resolves && tr.pendingId == i)) := by
  simp [resolvedIn, List.any_append]

theorem resolvedIn_of_resolution {D : DB} {i : Nat} (h : D.resolution? i = none) : resolvedIn D.transfers i = false := by
  unfold DB.resolution? at h
  rw [List.find?_eq_none] at h
  unfold resolvedIn
  rw [List.any_eq_false]
  intro r hr; exact h r hr

/-- Adding a transfer that does not post or void: the pending amount grows by
its amount if it is pending on this side. -/
theorem pendingOn_append_new (side : Transfer → Nat) (J : List Transfer) (tr : Transfer) (i : Nat)
    (hr : tr.flags.resolves = false) (hfresh : resolvedIn J tr.id = false) :
    pendingOn side (J ++ [tr]) i = pendingOn side J i + (if tr.flags.pending && side tr == i then tr.amount else 0) := by
  unfold pendingOn
  rw [sumIf_append_one]
  congr 1
  · apply sumIf_congr
    intro x _
    simp [resolvedIn_append, hr]
  · simp [resolvedIn_append, hr, hfresh]

/-- Adding the post or void of pending transfer `p`: `p` no longer counts. -/
theorem pendingOn_append_resolve (side : Transfer → Nat) {J : List Transfer} (tr p : Transfer) (i : Nat)
    (hn : (J.map (·.id)).Nodup) (hp : p ∈ J) (hpid : tr.pendingId = p.id) (hr : tr.flags.resolves = true)
    (hnp : tr.flags.pending = false) :
    pendingOn side (J ++ [tr]) i + (if p.flags.pending && side p == i && !resolvedIn J p.id then p.amount else 0) =
      pendingOn side J i := by
  unfold pendingOn
  rw [sumIf_append_one]
  simp only [hnp, Bool.false_and, Bool.false_eq_true, ite_false, Nat.add_zero]
  apply sumIf_change (·.id) (·.amount) hn hp
  · simp [resolvedIn_append, hr, hpid]
  · intro y _ hy
    have : (tr.pendingId == y.id) = false := by rw [hpid]; exact beq_eq_false_iff_ne.mpr (Ne.symm hy)
    simp [resolvedIn_append, hr, this]

end Ledger.Proofs
