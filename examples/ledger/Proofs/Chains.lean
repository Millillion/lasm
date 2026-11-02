/-
Batches and linked chains, on the model: how `chains` cuts a batch, that a
chain is applied entirely or not at all, which writes a batch makes, and
that every batch keeps the invariant.
-/
import Proofs.Transfer

namespace Ledger.Proofs
open Ledger Rules

/-! ## How a batch is cut into chains -/

section Cut
variable {ε : Type} (linked : ε → Bool)

theorem chains_flatten : ∀ b : List ε, (chains linked b).flatten = b
  | [] => rfl
  | e :: es => by
    have ih := chains_flatten es
    unfold chains
    split
    · split
      · rename_i h; rw [h] at ih; simp at ih; subst ih; rfl
      · rename_i c cs h; rw [h] at ih; simp [← ih]
    · simp [ih]

theorem chains_ne_nil : ∀ (b : List ε), ∀ c ∈ chains linked b, c ≠ []
  | [] => by simp [chains]
  | e :: es => by
    have ih := chains_ne_nil es
    unfold chains
    split
    · split
      · simp
      · rename_i c cs h
        intro d hd
        rw [h] at ih
        simp at hd
        rcases hd with rfl | m
        · simp
        · exact ih d (List.mem_cons_of_mem _ m)
    · intro d hd
      simp at hd
      rcases hd with rfl | m
      · simp
      · exact ih d m

/-- Within a chain, every event but the last is linked. -/
theorem chains_linked : ∀ (b : List ε), ∀ c ∈ chains linked b, ∀ e ∈ c.dropLast, linked e = true
  | [] => by simp [chains]
  | e :: es => by
    have ih := chains_linked es
    have hne := chains_ne_nil linked es
    unfold chains
    split
    · rename_i hl
      split
      · simp
      · rename_i c cs h
        intro d hd x hx
        rw [h] at ih hne
        simp at hd
        rcases hd with rfl | m
        · have hc : c ≠ [] := hne c (by simp)
          rw [List.dropLast_cons_of_ne_nil hc] at hx
          simp at hx
          rcases hx with rfl | m'
          · exact hl
          · exact ih c (by simp) x m'
        · exact ih d (List.mem_cons_of_mem _ m) x hx
    · intro d hd x hx
      simp at hd
      rcases hd with rfl | m
      · simp at hx
      · exact ih d m x hx

/-- Every chain but the last ends with an event that is not linked. -/
theorem chains_closed : ∀ (b : List ε), ∀ c ∈ (chains linked b).dropLast, ∀ x, c.getLast? = some x → linked x = false
  | [] => by simp [chains]
  | e :: es => by
    have ih := chains_closed es
    unfold chains
    split
    · rename_i hl
      split
      · simp
      · rename_i c cs h
        rw [h] at ih
        intro d hd x hx
        cases cs with
        | nil => simp at hd
        | cons c' cs' =>
          rw [List.dropLast_cons_of_ne_nil (by simp)] at hd
          simp at hd
          rcases hd with rfl | m
          · have hc : c ≠ [] := (chains_ne_nil linked es) c (by rw [h]; simp)
            have := ih c (by simp) x
            cases hcl : c.getLast? with
            | none => simp [List.getLast?_eq_none_iff] at hcl; exact absurd hcl hc
            | some y => rw [List.getLast?_cons, hcl] at hx; simp at hx; subst hx; exact this hcl
          · exact ih d (by rw [List.dropLast_cons_of_ne_nil (by simp)]; exact List.mem_cons_of_mem _ m) x hx
    · rename_i hl
      intro d hd x hx
      cases h : chains linked es with
      | nil => simp [h] at hd
      | cons c' cs' =>
        rw [h, List.dropLast_cons_of_ne_nil (by simp)] at hd
        simp at hd
        rcases hd with rfl | m
        · simp at hx; subst hx; simpa using hl
        · rw [h] at ih; exact ih d m x hx

end Cut

/-! ## Running chains on the model -/

section Run
variable {ε ρ : Type} [DecidableEq ρ] (k : Kind ε ρ) (step : Reads Id → Nat → ε → Id (ρ × Writes))

/-- The status and writes of event `e` at time `ts` in a chain, after writes `w`. -/
def chainStep (r : Reads Id) (e : ε) (last : Bool) (ts : Nat) (w : Writes) : ρ × Writes :=
  if last && k.linked e then (k.linkedEventChainOpen, {}) else step (r.over w) ts e

theorem applyChain_nil (r : Reads Id) (ts : Nat) (w : Writes) : applyChain k step r [] ts w = (0, none, w) := rfl

theorem applyChain_cons (r : Reads Id) (e : ε) (es : List ε) (ts : Nat) (w : Writes) :
    applyChain k step r (e :: es) ts w =
      if (chainStep k step r e es.isEmpty ts w).1 = k.created then
        ((applyChain k step r es (ts + 1) (w.merge (chainStep k step r e es.isEmpty ts w).2)).1 + 1,
         (applyChain k step r es (ts + 1) (w.merge (chainStep k step r e es.isEmpty ts w).2)).2.1,
         (applyChain k step r es (ts + 1) (w.merge (chainStep k step r e es.isEmpty ts w).2)).2.2)
      else (0, some (e, (chainStep k step r e es.isEmpty ts w).1), w) := by
  simp only [applyChain, chainStep]
  split <;> rfl

theorem runChain_eq (r : Reads Id) (c : List ε) (ts : Nat) (w : Writes) :
    runChain k step r c ts w =
      match applyChain k step r c ts w with
      | (n, none, w') => (List.replicate n k.created, w')
      | (n, some (e, s), _) =>
        (List.replicate n k.linkedEventFailed ++ [s] ++
          (if c.length - n - 1 = 0 then [] else List.replicate (c.length - n - 1 - 1) k.linkedEventFailed ++
            [match c.getLast? with
             | some l => if k.linked l then k.linkedEventChainOpen else k.linkedEventFailed
             | none => k.linkedEventFailed]),
         w.merge (k.onFailure e s)) := by
  unfold runChain
  rcases applyChain k step r c ts w with ⟨n, _ | ⟨e, s⟩, w'⟩ <;> rfl

theorem runChains_nil (r : Reads Id) (ts : Nat) (w : Writes) : runChains k step r [] ts w = ([], w) := rfl

theorem runChains_cons (r : Reads Id) (c : List ε) (cs : List (List ε)) (ts : Nat) (w : Writes) :
    runChains k step r (c :: cs) ts w =
      ((runChain k step r c ts w).1 ++ (runChains k step r cs (ts + c.length) (runChain k step r c ts w).2).1,
       (runChains k step r cs (ts + c.length) (runChain k step r c ts w).2).2) := rfl

/-! ### Every batch keeps a property every step keeps -/

variable (P : DB → Prop)

theorem applyChain_keeps (hstep : ∀ E ts e, P E → P (E.apply (step E.reads ts e).2)) (D : DB) :
    ∀ (es : List ε) (ts : Nat) (w : Writes), P (D.apply w) → P (D.apply (applyChain k step D.reads es ts w).2.2)
  | [], _, _, h => h
  | e :: es, ts, w, h => by
    rw [applyChain_cons]
    split
    · apply applyChain_keeps hstep D es (ts + 1)
      rw [apply_merge]
      unfold chainStep
      split
      · rw [apply_empty]; exact h
      · rw [reads_over]; exact hstep _ _ _ h
    · exact h

theorem runChain_keeps (hstep : ∀ E ts e, P E → P (E.apply (step E.reads ts e).2))
    (hfail : ∀ E e s, P E → P (E.apply (k.onFailure e s))) (D : DB) (c : List ε) (ts : Nat) (w : Writes)
    (h : P (D.apply w)) : P (D.apply (runChain k step D.reads c ts w).2) := by
  rw [runChain_eq]
  have := applyChain_keeps k step P hstep D c ts w h
  rcases ha : applyChain k step D.reads c ts w with ⟨n, _ | ⟨e, s⟩, w'⟩
  · rw [ha] at this; exact this
  · show P (D.apply (w.merge (k.onFailure e s)))
    rw [apply_merge]; exact hfail _ _ _ h

theorem runChains_keeps (hstep : ∀ E ts e, P E → P (E.apply (step E.reads ts e).2))
    (hfail : ∀ E e s, P E → P (E.apply (k.onFailure e s))) (D : DB) :
    ∀ (cs : List (List ε)) (ts : Nat) (w : Writes), P (D.apply w) → P (D.apply (runChains k step D.reads cs ts w).2)
  | [], _, _, h => h
  | c :: cs, ts, w, h => by
    rw [runChains_cons]
    exact runChains_keeps hstep hfail D cs _ _ (runChain_keeps k step P hstep hfail D c ts w h)

end Run

/-! ## Every batch keeps the invariant -/

theorem inv_onFailure_transfer {E : DB} (h : Inv E) (t : NewTransfer) (s : TransferStatus) :
    Inv (E.apply (transferKind.onFailure t s)) := by
  unfold transferKind; simp only
  split
  · have := inv_failed h [t.id]; simpa [DB.apply] using this
  · rw [apply_empty]; exact h

theorem inv_createTransfers {D : DB} (hI : Inv D) (ts : Nat) (batch : List NewTransfer) :
    Inv (D.apply (createTransfers D.reads ts batch).2) := by
  unfold createTransfers
  apply runChains_keeps transferKind createTransfer Inv _ (fun E e s h => inv_onFailure_transfer h e s) D _ ts {}
  · rw [apply_empty]; exact hI
  · intro E ts t hE
    have := createTransfer_model E ts t
    rw [Prod.mk.injEq] at this
    rw [this.2]; exact inv_stepTransfer hE

theorem inv_createAccounts {D : DB} (hI : Inv D) (ts : Nat) (batch : List NewAccount) :
    Inv (D.apply (createAccounts D.reads ts batch).2) := by
  unfold createAccounts
  apply runChains_keeps accountKind createAccount Inv _ (fun E _ _ h => by
    show Inv (E.apply {}); rw [apply_empty]; exact h) D _ ts {}
  · rw [apply_empty]; exact hI
  · intro E ts a hE
    have := createAccount_model E ts a
    rw [Prod.mk.injEq] at this
    rw [this.2]; exact inv_stepAccount hE

end Ledger.Proofs
