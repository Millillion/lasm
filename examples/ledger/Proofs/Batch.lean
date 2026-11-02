/-
What a batch returns and writes: each chain's statuses are all `created` or
none is, the writes hold exactly the transfers whose status is `created`,
and a batch of one event is that event.
-/
import Proofs.Chains

namespace Ledger.Proofs
open Ledger Rules

section Results
variable {ε ρ : Type} [DecidableEq ρ] (k : Kind ε ρ) (step : Reads Id → Nat → ε → Id (ρ × Writes))

theorem applyChain_count (r : Reads Id) :
    ∀ (es : List ε) (ts : Nat) (w : Writes),
      ((applyChain k step r es ts w).2.1 = none → (applyChain k step r es ts w).1 = es.length) ∧
      (∀ e s, (applyChain k step r es ts w).2.1 = some (e, s) → (applyChain k step r es ts w).1 < es.length ∧ s ≠ k.created)
  | [], _, _ => by simp [applyChain_nil]
  | e :: es, ts, w => by
    rw [applyChain_cons]
    split
    · obtain ⟨h1, h2⟩ := applyChain_count r es (ts + 1) (w.merge (chainStep k step r e es.isEmpty ts w).2)
      refine ⟨fun h => by simp [h1 h], fun e' s h => ?_⟩
      have := h2 e' s h
      simp only [List.length_cons]; omega
    · rename_i hs
      refine ⟨fun h => by simp at h, fun e' s h => ?_⟩
      simp at h; obtain ⟨-, rfl⟩ := h
      exact ⟨by simp, hs⟩

/-- A chain's statuses: one per event, and all `created` or none. -/
theorem runChain_results (hf : k.linkedEventFailed ≠ k.created) (ho : k.linkedEventChainOpen ≠ k.created)
    (r : Reads Id) (c : List ε) (ts : Nat) (w : Writes) :
    (runChain k step r c ts w).1.length = c.length ∧
      ((∀ x ∈ (runChain k step r c ts w).1, x = k.created) ∨ (∀ x ∈ (runChain k step r c ts w).1, x ≠ k.created)) := by
  rw [runChain_eq]
  obtain ⟨h1, h2⟩ := applyChain_count k step r c ts w
  rcases ha : applyChain k step r c ts w with ⟨n, _ | ⟨e, s⟩, w'⟩
  · rw [ha] at h1
    simp only at h1 ⊢
    have := h1 rfl
    refine ⟨by simp [this], .inl fun x hx => ?_⟩
    exact (List.mem_replicate.mp hx).2
  · rw [ha] at h2
    obtain ⟨hn, hs⟩ := h2 e s rfl
    simp only
    refine ⟨?_, .inr ?_⟩
    · split <;> simp <;> omega
    · intro x hx
      simp only [List.mem_append, List.mem_replicate, List.mem_singleton] at hx
      rcases hx with ((⟨-, rfl⟩ | rfl) | hx)
      · exact hf
      · exact hs
      · split at hx
        · simp at hx
        · simp only [List.mem_append, List.mem_replicate, List.mem_singleton] at hx
          rcases hx with ⟨-, rfl⟩ | rfl
          · exact hf
          · split
            · split
              · exact ho
              · exact hf
            · exact hf

/-- A batch's statuses: one per event, cut by chains, each chain's all `created` or none. -/
theorem runChains_results (hf : k.linkedEventFailed ≠ k.created) (ho : k.linkedEventChainOpen ≠ k.created)
    (r : Reads Id) : ∀ (cs : List (List ε)) (ts : Nat) (w : Writes),
    ∃ parts : List (List ρ), (runChains k step r cs ts w).1 = parts.flatten ∧ parts.length = cs.length ∧
      ∀ cp ∈ cs.zip parts, cp.2.length = cp.1.length ∧ ((∀ x ∈ cp.2, x = k.created) ∨ (∀ x ∈ cp.2, x ≠ k.created))
  | [], _, _ => ⟨[], rfl, rfl, by simp⟩
  | c :: cs, ts, w => by
    obtain ⟨parts, h1, h2, h3⟩ := runChains_results hf ho r cs (ts + c.length) (runChain k step r c ts w).2
    refine ⟨(runChain k step r c ts w).1 :: parts, ?_, by simp [h2], ?_⟩
    · rw [runChains_cons, h1]; rfl
    · intro cp hcp
      simp only [List.zip_cons_cons, List.mem_cons] at hcp
      rcases hcp with rfl | m
      · exact runChain_results k step hf ho r c ts w
      · exact h3 cp m

/-! ### Which writes a batch makes -/

variable (out : Writes → List Nat) (key : ε → Nat)

theorem applyChain_out (ho : k.linkedEventChainOpen ≠ k.created)
    (hmerge : ∀ w d, out (w.merge d) = out w ++ out d)
    (hstep : ∀ E ts e, (step E.reads ts e).1 = k.created → out (step E.reads ts e).2 = [key e]) (D : DB) :
    ∀ (es : List ε) (ts : Nat) (w : Writes), (applyChain k step D.reads es ts w).2.1 = none →
      out (applyChain k step D.reads es ts w).2.2 = out w ++ es.map key
  | [], _, _, _ => by simp [applyChain_nil]
  | e :: es, ts, w, h => by
    rw [applyChain_cons] at h ⊢
    split
    · rename_i hs
      split at h
      · have := applyChain_out ho hmerge hstep D es (ts + 1) _ h
        simp only at this ⊢
        rw [this, hmerge]
        unfold chainStep at hs ⊢
        split
        · rename_i hl; rw [if_pos hl] at hs; exact absurd hs ho
        · rename_i hl; rw [if_neg hl] at hs; rw [reads_over] at hs ⊢; rw [hstep _ _ _ hs]; simp
      · contradiction
    · split at h
      · contradiction
      · simp at h

theorem runChain_out (hf : k.linkedEventFailed ≠ k.created) (ho : k.linkedEventChainOpen ≠ k.created)
    (hmerge : ∀ w d, out (w.merge d) = out w ++ out d)
    (hstep : ∀ E ts e, (step E.reads ts e).1 = k.created → out (step E.reads ts e).2 = [key e])
    (hfail : ∀ e s, out (k.onFailure e s) = []) (D : DB) (c : List ε) (ts : Nat) (w : Writes) :
    out (runChain k step D.reads c ts w).2 =
      out w ++ ((c.zip (runChain k step D.reads c ts w).1).filter (fun p => decide (p.2 = k.created))).map (key ·.1) := by
  obtain ⟨hlen, hall⟩ := runChain_results k step hf ho D.reads c ts w
  have hc := applyChain_count k step D.reads c ts w
  rw [runChain_eq] at hlen hall ⊢
  rcases ha : applyChain k step D.reads c ts w with ⟨n, _ | ⟨e, s⟩, w'⟩
  · have hout := applyChain_out k step out key ho hmerge hstep D c ts w (by rw [ha])
    rw [ha] at hout hc
    simp only at hout hc ⊢
    rw [hout, hc.1 rfl]
    congr 1
    induction c with
    | nil => rfl
    | cons x xs ih => simp [List.replicate_succ, ih]
  · rw [ha] at hall
    simp only at hall ⊢
    rw [hmerge, hfail]
    rcases hall with hall | hall
    · -- some status is not created: the failing one
      have := hall s (by simp)
      have := (hc.2 e s (by rw [ha])).2
      contradiction
    · simp only [List.append_nil]
      rw [List.filter_eq_nil_iff.mpr]
      · rfl
      · intro p hp
        have := hall p.2 (List.of_mem_zip hp).2
        simp [this]

theorem runChains_out (hf : k.linkedEventFailed ≠ k.created) (ho : k.linkedEventChainOpen ≠ k.created)
    (hmerge : ∀ w d, out (w.merge d) = out w ++ out d)
    (hstep : ∀ E ts e, (step E.reads ts e).1 = k.created → out (step E.reads ts e).2 = [key e])
    (hfail : ∀ e s, out (k.onFailure e s) = []) (D : DB) :
    ∀ (cs : List (List ε)) (ts : Nat) (w : Writes),
      out (runChains k step D.reads cs ts w).2 =
        out w ++ ((cs.flatten.zip (runChains k step D.reads cs ts w).1).filter
          (fun p => decide (p.2 = k.created))).map (key ·.1)
  | [], _, _ => by simp [runChains_nil]
  | c :: cs, ts, w => by
    rw [runChains_cons]
    simp only
    rw [runChains_out hf ho hmerge hstep hfail D cs, runChain_out k step out key hf ho hmerge hstep hfail D c ts w]
    rw [List.flatten_cons, List.zip_append (runChain_results k step hf ho D.reads c ts w).1.symm]
    simp [List.filter_append, List.append_assoc]

end Results

/-! ## Transfers: statuses and the journal -/

theorem transferKind_failed_ne : transferKind.linkedEventFailed ≠ transferKind.created := by decide
theorem transferKind_open_ne : transferKind.linkedEventChainOpen ≠ transferKind.created := by decide

/-- A created transfer writes exactly itself, with the requested id. -/
theorem createTransfer_out (E : DB) (ts : Nat) (t : NewTransfer)
    (h : (createTransfer E.reads ts t).1 = .created) :
    ((createTransfer E.reads ts t).2.transfers.map (·.id)) = [t.id] := by
  rw [createTransfer_eq] at h ⊢
  rcases hd : decideTransfer (ctxOf E t) ts t with ⟨s, _ | ⟨tr, dr, cr⟩⟩
  · rw [hd] at h; exact absurd h (decideTransfer_none hd)
  · obtain ⟨-, -, -, -, -, hc⟩ := decideTransfer_some hd
    simp only [Writes.ofTransfer, List.map_cons, List.map_nil]
    rcases hc with ⟨-, -, dr', cr', -, -, -, he⟩ | ⟨-, -, p, dr', cr', -, -, -, -, -, -, he⟩
    · have : tr = (newEffect ts t dr' cr').1 := by rw [← he]
      rw [this, newEffect_id]
    · have : tr = (resolveEffect ts t p dr' cr').1 := by rw [← he]
      rw [this]; rfl

/-- The journal after a batch: the journal before, then exactly the batch's
transfers whose status is `created`, in order. -/
theorem createTransfers_journal (D : DB) (ts : Nat) (batch : List NewTransfer) :
    ((D.apply (createTransfers D.reads ts batch).2).transfers.map (·.id)) =
      D.transfers.map (·.id) ++ ((batch.zip (createTransfers D.reads ts batch).1).filter
        (fun p => decide (p.2 = .created))).map (·.1.id) := by
  have := runChains_out transferKind createTransfer (fun w => w.transfers.map (·.id)) (·.id)
    transferKind_failed_ne transferKind_open_ne (fun w d => by simp [Writes.merge])
    (fun E ts t h => createTransfer_out E ts t h) (fun t s => by unfold transferKind; simp only; split <;> rfl)
    D (chains transferKind.linked batch) ts {}
  rw [chains_flatten] at this
  unfold createTransfers
  simp only [DB.apply, List.map_append]
  rw [this]
  rfl

/-- The statuses of a batch of transfers, cut by its linked chains. -/
theorem createTransfers_results (D : DB) (ts : Nat) (batch : List NewTransfer) :
    ∃ parts : List (List TransferStatus), (createTransfers D.reads ts batch).1 = parts.flatten ∧
      parts.length = (chains (·.flags.linked) batch).length ∧
      ∀ cp ∈ (chains (·.flags.linked) batch).zip parts, cp.2.length = cp.1.length ∧
        ((∀ s ∈ cp.2, s = .created) ∨ (∀ s ∈ cp.2, s ≠ .created)) :=
  runChains_results transferKind createTransfer transferKind_failed_ne transferKind_open_ne D.reads _ ts {}

/-! ## A batch of one -/

theorem createTransfers_one (D : DB) (ts : Nat) (t : NewTransfer) (hl : t.flags.linked = false) :
    createTransfers D.reads ts [t] =
      if (createTransfer D.reads ts t).1 = .created then ([.created], (createTransfer D.reads ts t).2)
      else ([(createTransfer D.reads ts t).1], transferKind.onFailure t (createTransfer D.reads ts t).1) := by
  unfold createTransfers
  have hc : chains transferKind.linked [t] = [[t]] := by simp [chains, transferKind, hl]
  rw [hc, runChains_cons, runChains_nil, runChain_eq, applyChain_cons, applyChain_nil]
  simp only [chainStep, List.isEmpty_nil, Bool.true_and, transferKind, hl, Bool.false_eq_true, ite_false,
    reads_over, apply_empty]
  split
  · rename_i h; rw [if_pos h]; simp [Writes.merge]
  · rename_i h; rw [if_neg h]; simp [Writes.merge]

theorem createAccounts_one (D : DB) (ts : Nat) (a : NewAccount) (hl : a.flags.linked = false) :
    createAccounts D.reads ts [a] =
      if (createAccount D.reads ts a).1 = .created then ([.created], (createAccount D.reads ts a).2)
      else ([(createAccount D.reads ts a).1], {}) := by
  unfold createAccounts
  have hc : chains accountKind.linked [a] = [[a]] := by simp [chains, accountKind, hl]
  rw [hc, runChains_cons, runChains_nil, runChain_eq, applyChain_cons, applyChain_nil]
  simp only [chainStep, List.isEmpty_nil, Bool.true_and, accountKind, hl, Bool.false_eq_true, ite_false,
    reads_over, apply_empty]
  split
  · rename_i h; rw [if_pos h]; simp [Writes.merge]
  · rename_i h; rw [if_neg h]; simp [Writes.merge]

end Ledger.Proofs
