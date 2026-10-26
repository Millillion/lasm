/-
The two-ended children diff (`twoEnded`) is correct. Invariant: the DOM
children are `pre ++ (old nodes left in the window) ++ suf`, with distinct
ids, and `pre`, the new window and `suf` show the target.
-/
import Lasm.UI.Proofs.Children

namespace Lasm.UI.Proofs
open Lasm.UI Lasm.UI.Model

variable {Msg β : Type}

/-- What the fallback's key lookup returns is an old node in the window that
may be kept (checked at run time, so the key map's contents do not matter). -/
theorem found_spec (val : β → Html Msg) (oa : Array (Option (Live Msg))) (oLo oHi : Nat) (ns : β)
    (keys : Option (Std.HashMap String Nat)) (i : Nat) (x : Live Msg)
    (h : (match (val ns).key? with
      | none => (keys, none)
      | some k =>
        match (keys.getD (keyIndex oa oLo oHi ∅))[k]? with
        | some i =>
          if oLo ≤ i ∧ i < oHi then
            match oa[i]? with
            | some (some x) =>
              (some (keys.getD (keyIndex oa oLo oHi ∅)), if x.same (val ns) = true then some (i, x) else none)
            | _ => (some (keys.getD (keyIndex oa oLo oHi ∅)), none)
          else (some (keys.getD (keyIndex oa oLo oHi ∅)), none)
        | none => (some (keys.getD (keyIndex oa oLo oHi ∅)), none)).snd = some (i, x)) :
    oLo ≤ i ∧ i < oHi ∧ oa[i]? = some (some x) ∧ x.same (val ns) = true := by
  split at h
  · simp at h
  · split at h
    · split at h
      · rename_i hr
        split at h
        · rename_i y hy
          split at h
          · simp only [Option.some.injEq, Prod.mk.injEq] at h
            obtain ⟨rfl, rfl⟩ := h
            exact ⟨hr.1, hr.2, hy, by assumption⟩
          · simp at h
        · simp at h
      · simp at h
    · simp at h

theorem perm_back (A B C : List α) (x : α) : (A ++ B ++ x :: C).Perm (A ++ x :: (B ++ C)) := by
  simp only [List.append_assoc]; exact List.Perm.append_left _ List.perm_middle

theorem twoEnded_spec (val : β → Html Msg) (f : Live Msg → β → Nat → NodeResult Msg)
    (hf : ∀ o b n, WFn n o → o.same (val b) = true → NSpec o (val b) n (f o b n))
    (dom0 : List Dom) (target : List (Html Msg))
    (oa : Array (Option (Live Msg))) (oLo oHi : Nat) (na : Array β) (nLo nHi : Nat)
    (pre : Array (Live Msg)) (suf : List (Live Msg)) (ops : Array (Op Msg)) (next : Nat)
    (keys : Option (Std.HashMap String Nat))
    (hbO : oHi ≤ oa.size) (hbN : nHi ≤ na.size)
    (h1 : applyOps ops.toList dom0 = (pre.toList ++ win oa oLo oHi ++ suf).map toDom)
    (h2 : ((pre.toList ++ win oa oLo oHi ++ suf).map Live.id).Nodup)
    (h3 : ∀ x ∈ pre.toList ++ win oa oLo oHi ++ suf, WFn next x)
    (h4 : pre.toList.map Live.erase ++ (slice na.toList nLo nHi).map val ++ suf.map Live.erase = target) :
    RSpec dom0 target next (twoEnded val f oa oLo oHi na nLo nHi pre suf ops next keys) := by
  rw [twoEnded]
  by_cases hO : oLo < oHi
  · simp only [hO, ↓reduceDIte]
    by_cases hN : nLo < nHi
    · simp only [hN, ↓reduceDIte]
      obtain ⟨s1, hs1⟩ : ∃ s, oa[oLo]? = some s := ⟨oa[oLo], Array.getElem?_eq_getElem (by omega)⟩
      obtain ⟨s2, hs2⟩ : ∃ s, oa[oHi - 1]? = some s := ⟨oa[oHi - 1], Array.getElem?_eq_getElem (by omega)⟩
      obtain ⟨ns, hb1⟩ : ∃ s, na[nLo]? = some s := ⟨na[nLo], Array.getElem?_eq_getElem (by omega)⟩
      obtain ⟨ne, hb2⟩ : ∃ s, na[nHi - 1]? = some s := ⟨na[nHi - 1], Array.getElem?_eq_getElem (by omega)⟩
      have hSc : slice na.toList nLo nHi = ns :: slice na.toList (nLo + 1) nHi :=
        slice_cons _ (by rw [Array.getElem?_toList]; exact hb1) hN
      have hSs : slice na.toList nLo nHi = slice na.toList nLo (nHi - 1) ++ [ne] :=
        slice_snoc _ (by rw [Array.getElem?_toList]; exact hb2) hN
      simp only [hs1, hs2, hb1, hb2]
      rcases s1 with _ | os
      · simp only
        rw [win_cons_none hs1 hO] at h1 h2 h3
        exact twoEnded_spec val f hf dom0 target oa (oLo + 1) oHi na nLo nHi pre suf ops next keys
          hbO hbN h1 h2 h3 h4
      rcases s2 with _ | oe
      · simp only
        rw [win_snoc_none hs2 hO] at h1 h2 h3
        exact twoEnded_spec val f hf dom0 target oa oLo (oHi - 1) na nLo nHi pre suf ops next keys
          (by omega) hbN h1 h2 h3 h4
      simp only
      have hWc := win_cons_some hs1 hO
      have hWs := win_snoc_some hs2 hO
      split
      · -- the heads match
        rename_i hsame
        rw [hWc] at h1 h2 h3
        have e := reuse_step val f hf (A := pre.toList) (B := win oa (oLo + 1) oHi ++ suf)
          (by simpa using h2) (by simpa using h3) hsame
        obtain ⟨e1, e2, e3, e4, e5, e6⟩ := e
        apply RSpec.weaken _ e6
        apply twoEnded_spec val f hf dom0 target oa (oLo + 1) oHi na (nLo + 1) nHi _ suf _ _ keys hbO hbN
        · rw [applyOps_appendList, h1]; simpa using e1
        · simpa using e2
        · simpa using e3
        · rw [hSc] at h4; simpa [e4] using h4
      split
      · -- the tails match
        rename_i _ hsame
        rw [hWs] at h1 h2 h3
        have e := reuse_step val f hf (A := pre.toList ++ win oa oLo (oHi - 1)) (B := suf)
          (by simpa using h2) (by simpa using h3) hsame
        obtain ⟨e1, e2, e3, e4, e5, e6⟩ := e
        apply RSpec.weaken _ e6
        apply twoEnded_spec val f hf dom0 target oa oLo (oHi - 1) na nLo (nHi - 1) pre _ _ _ keys
          (by omega) (by omega)
        · rw [applyOps_appendList, h1]; simpa using e1
        · simpa using e2
        · simpa using e3
        · rw [hSs] at h4; simpa [e4] using h4
      split
      · -- the old head is the new tail
        rename_i _ _ hsame
        rw [hWc] at h1 h2 h3
        have e := reuse_step val f hf (A := pre.toList) (B := win oa (oLo + 1) oHi ++ suf)
          (by simpa using h2) (by simpa using h3) hsame
        obtain ⟨e1, e2, e3, e4, e5, e6⟩ := e
        have hp : (pre.toList ++ (f os ne next).live :: (win oa (oLo + 1) oHi ++ suf)).Perm
            (pre.toList ++ win oa (oLo + 1) oHi ++ (f os ne next).live :: suf) := by
          simp only [List.append_assoc]
          exact List.Perm.append_left _ (List.perm_middle.symm)
        apply RSpec.weaken _ e6
        apply twoEnded_spec val f hf dom0 target oa (oLo + 1) oHi na nLo (nHi - 1) pre _ _ _ keys hbO
          (by omega)
        · rw [applyOps_push, applyOps_appendList, h1]
          rw [show pre.toList ++ os :: win oa (oLo + 1) oHi ++ suf = pre.toList ++ os :: (win oa (oLo + 1) oHi ++ suf)
            by simp, e1, ← e5, move_forward _ _ _ _ e2]
        · exact nodup_rearrange hp e2
        · intro x hx; exact e3 x (hp.mem_iff.2 hx)
        · rw [hSs] at h4; simpa [e4] using h4
      split
      · -- the old tail is the new head
        rename_i hn1 _ _ hsame
        have hlt : oLo < oHi - 1 := by
          rcases Nat.lt_or_ge oLo (oHi - 1) with h | h
          · exact h
          · exfalso
            have : oHi - 1 = oLo := by omega
            rw [this, hs1] at hs2; cases hs2
            exact hn1 hsame
        have hW2 := win_cons_some hs1 hlt
        have hcur : pre.toList ++ win oa oLo oHi ++ suf =
            pre.toList ++ os :: win oa (oLo + 1) (oHi - 1) ++ oe :: suf := by rw [hWs, hW2]; simp
        rw [hcur] at h1 h2 h3
        have e := reuse_step val f hf (A := pre.toList ++ os :: win oa (oLo + 1) (oHi - 1)) (B := suf)
          h2 h3 hsame
        obtain ⟨e1, e2, e3, e4, e5, e6⟩ := e
        have hp := perm_back pre.toList (os :: win oa (oLo + 1) (oHi - 1)) suf (f oe ns next).live
        apply RSpec.weaken _ e6
        apply twoEnded_spec val f hf dom0 target oa oLo (oHi - 1) na (nLo + 1) nHi _ suf _ _ keys
          (by omega) hbN
        · rw [applyOps_push, applyOps_appendList, h1, e1, ← e5, move_back _ _ _ _ _ e2, hW2]
          simp
        · rw [hW2]; simpa using nodup_rearrange hp e2
        · rw [hW2]; intro x hx; exact e3 x (hp.mem_iff.2 (by simpa using hx))
        · rw [hSc] at h4; simpa [e4] using h4
      -- the fallback: a keyed match inside the window, or a new node
      rename_i hn1 hn2 hn3 hn4
      split
      · rename_i i x hfound
        obtain ⟨hi1, hi2, hix, hsame⟩ := found_spec val oa oLo oHi ns keys i x hfound
        have hne : oLo < i := by
          rcases Nat.lt_or_ge oLo i with h | h
          · exact h
          · exfalso
            have : i = oLo := by omega
            rw [this, hs1] at hix; cases hix
            exact hn1 hsame
        have hWi := win_split (lo := oLo + 1) hix hne hi2
        have hWset := win_set (lo := oLo) hix (by omega) hi2
        have hWlo := win_cons_some hs1 hne
        have hcur : pre.toList ++ win oa oLo oHi ++ suf =
            pre.toList ++ os :: win oa (oLo + 1) i ++ x :: (win oa (i + 1) oHi ++ suf) := by
          rw [hWc, hWi]; simp
        rw [hcur] at h1 h2 h3
        have e := reuse_step val f hf (A := pre.toList ++ os :: win oa (oLo + 1) i)
          (B := win oa (i + 1) oHi ++ suf) h2 h3 hsame
        obtain ⟨e1, e2, e3, e4, e5, e6⟩ := e
        have hp := perm_back pre.toList (os :: win oa (oLo + 1) i) (win oa (i + 1) oHi ++ suf) (f x ns next).live
        apply RSpec.weaken _ e6
        apply twoEnded_spec val f hf dom0 target (oa.set! i none) oLo oHi na (nLo + 1) nHi _ suf _ _ _
          (by simp [Array.set!_eq_setIfInBounds]; omega) hbN
        · rw [applyOps_push, applyOps_appendList, h1, e1, ← e5, move_back _ _ _ _ _ e2, hWset, hWlo]
          simp
        · rw [hWset, hWlo]; simpa using nodup_rearrange hp e2
        · rw [hWset, hWlo]; intro y hy; exact e3 y (hp.mem_iff.2 (by simpa using hy))
        · rw [hSc] at h4; simpa [e4] using h4
      · -- a new node, inserted before the old head
        have hc := create_spec (val ns) next
        have hcur : pre.toList ++ win oa oLo oHi ++ suf = pre.toList ++ os :: (win oa (oLo + 1) oHi ++ suf) := by
          rw [hWc]; simp
        rw [hcur] at h1 h2 h3
        have hlt : ∀ y ∈ pre.toList ++ os :: (win oa (oLo + 1) oHi ++ suf), y.id < next :=
          fun y hy => (h3 y hy).id_lt
        have hnd := nodup_fresh pre.toList (os :: (win oa (oLo + 1) oHi ++ suf)) (create (val ns) next).1 next
          h2 hlt hc.id
        apply RSpec.weaken _ (Nat.le_of_lt hc.lt)
        apply twoEnded_spec val f hf dom0 target oa oLo oHi na (nLo + 1) nHi _ suf _ _ _ hbO hbN
        · rw [applyOps_push, h1, insert_before _ _ _ _ h2, hWc]
          simp
        · rw [hWc]; simpa using hnd
        · rw [hWc]
          intro y hy
          have hm := (List.perm_middle (l₁ := pre.toList) (a := (create (val ns) next).1)
            (l₂ := os :: (win oa (oLo + 1) oHi ++ suf))).mem_iff.1 (by simpa using hy)
          rcases List.mem_cons.1 hm with rfl | hm
          · exact hc.wf
          · exact (h3 y hm).mono (Nat.le_of_lt hc.lt)
        · rw [hSc] at h4; simpa [hc.erase] using h4
    · -- the new window is empty: remove what is left of the old one
      simp only [hN, ↓reduceDIte]
      have hr := removeRange_spec dom0 pre.toList suf oa oHi oLo ops h1 h2
      refine ⟨hr, ?_, ⟨fun x hx => h3 x ?_, ?_⟩, Nat.le_refl _⟩
      · rw [slice_empty _ (by omega)] at h4; simpa using h4
      · simp only [List.mem_append] at hx ⊢; rcases hx with h | h <;> simp [h]
      · exact List.Sublist.nodup ((List.Sublist.append (List.sublist_append_left _ _) (List.Sublist.refl suf)).map _) h2
  · -- the old window is empty: create what is left of the new one
    simp only [hO, ↓reduceDIte]
    rw [win_empty oa (by omega)] at h1 h2 h3
    obtain ⟨cs, e1, e2, e3, e4, e5, e6⟩ :=
      insertRange_spec val na (suf.head?.map Live.id) dom0 suf rfl nHi hbN nLo next ops pre
        (by simpa using h1) (by simpa using h2) (by simpa using h3)
    refine ⟨e3, ?_, ⟨e5, e4⟩, e6⟩
    simp [e1, e2, ← h4]
termination_by (oHi - oLo) + (nHi - nLo)

end Lasm.UI.Proofs
