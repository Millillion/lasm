/-
Typing: what a run of typed characters does to the text, alone and next to
a concurrent run at the same place.
-/
import Proofs.Runs

namespace Tandem.Proofs
open Tandem Doc

/-- What every node of a run satisfies. -/
structure RunOK (d : Doc) (r : Nat) (P : Option Id) (σ : Side) (R : List Node) : Prop where
  each : ∀ x ∈ R, x.id.r = r ∧ d.maxCounter < x.id.c ∧ x.valid = true ∧
    ((x.parent = P ∧ x.side = σ ∧ R.head? = some x) ∨ ∃ w ∈ R, x.parent = some w.id)
  sorted : R.Pairwise fun a b => a.id.c < b.id.c
  head : ∀ x, R.head? = some x → x.parent = P ∧ x.side = σ

theorem chars_length {d : Doc} (h : Wf d) : d.chars.length = d.visibleSpec.length := by
  rw [chars_eq h]; simp


theorem run_ok {d : Doc} (h : Wf d) {i : Nat} (hi : i ≤ d.visibleSpec.length) (r : Nat) (cs : List Char) :
    RunOK d r (d.placeAt ⟨0, 0⟩ i 'a').parent (d.placeAt ⟨0, 0⟩ i 'a').side (d.run r i cs) := by
  cases cs with
  | nil => exact ⟨by simp [Doc.run], by simp [Doc.run], by simp [Doc.run]⟩
  | cons c cs =>
    rw [run_cons]
    have pl := placed h hi (d.nextId r) c
    have hps := placeAt_parent d (d.nextId r) ⟨0, 0⟩ i c 'a'
    have hid := placeAt_id d (d.nextId r) i c
    have hfv : (d.placeAt (d.nextId r) i c).valid = true := by
      unfold Node.valid
      cases hp : (d.placeAt (d.nextId r) i c).parent with
      | none => have := pl.rootR hp; simp [this]
      | some pid =>
        obtain ⟨p, hp', e⟩ := pl.parent pid hp
        have := node_le_max hp'
        rw [hid]; subst e; simp only [Doc.nextId]
        exact decide_eq_true (by omega)
    refine ⟨fun x hx => ?_, ?_, ?_⟩
    · simp only [List.mem_cons] at hx
      rcases hx with rfl | hx
      · exact ⟨by rw [hid]; rfl, by rw [hid]; simp [Doc.nextId], hfv, Or.inl ⟨hps.1, hps.2, rfl⟩⟩
      · obtain ⟨h1, h2, _, h4, h5⟩ := chain_facts hx
        refine ⟨h2, by rw [hid] at h1; simp [Doc.nextId] at h1; omega, h4, Or.inr ?_⟩
        rcases h5 with e | ⟨w, hw, e, _⟩
        · exact ⟨_, List.mem_cons_self, e⟩
        · exact ⟨w, by simp [hw], e⟩
    · simp only [List.pairwise_cons]
      exact ⟨fun x hx => (chain_facts hx).1, chain_sorted⟩
    · intro x hx; simp only [List.head?_cons, Option.some_inj] at hx; subst hx; exact hps

theorem run_chars (d : Doc) (r i : Nat) (cs : List Char) : (d.run r i cs).map (·.ch) = cs := by
  cases cs with
  | nil => rfl
  | cons c cs => rw [run_cons]; simp [placeAt_ch, chain_chars]

/-- The subtree of a run's first node is the run. -/
theorem T_run {d m : Doc} (hm : Wf m) {r i : Nat} {c : Char} {cs : List Char}
    (hin : ∀ x ∈ d.run r i (c :: cs), x ∈ m.nodes)
    (hpar : ∀ n ∈ m.nodes, ∀ z ∈ d.run r i (c :: cs), n.parent = some z.id → n ∈ d.run r i (c :: cs))
    (hroot : ∀ z ∈ d.run r i (c :: cs), (d.placeAt (d.nextId r) i c).parent ≠ some z.id) :
    T m (d.placeAt (d.nextId r) i c) = d.run r i (c :: cs) := by
  rw [run_cons] at *
  apply T_chain hm (fun z hz => node_le_max (hin z hz))
  apply allOK_of hm (fun z hz => hin z (by simp [hz]))
  intro n hn z hz hp
  have := hpar n hn z hz hp
  simp only [List.mem_cons] at this
  rcases this with rfl | this
  · exact absurd hp (hroot z hz)
  · exact this

/-- Two runs typed at position `i` by two replicas, merged. -/
theorem two_runs {d : Doc} (h : Wf d) {ra rb i : Nat} {a b : List Char} (hr : ra ≠ rb)
    (hi : i ≤ d.chars.length) :
    Wf (d.applyAll ((d.run ra i a ++ d.run rb i b).map .ins)) ∧
    ((d.applyAll ((d.run ra i a ++ d.run rb i b).map .ins)).chars = d.chars.take i ++ a ++ b ++ d.chars.drop i ∨
     (d.applyAll ((d.run ra i a ++ d.run rb i b).map .ins)).chars = d.chars.take i ++ b ++ a ++ d.chars.drop i) := by
  have hi' : i ≤ d.visibleSpec.length := by rw [← chars_length h]; exact hi
  have pl := placed h hi' ⟨0, 0⟩ 'a'
  have okA := run_ok h hi' ra a
  have okB := run_ok h hi' rb b
  have hsubA := fun c cs' (e : a = c :: cs') => e
  have hps0 := fun r c => placeAt_parent d (d.nextId r) ⟨0, 0⟩ i c 'a'
  generalize hP : (d.placeAt ⟨0, 0⟩ i 'a').parent = P at pl okA okB hps0
  generalize hσ : (d.placeAt ⟨0, 0⟩ i 'a').side = σ at pl okA okB hps0
  generalize hRA : d.run ra i a = RA at okA ⊢
  generalize hRB : d.run rb i b = RB at okB ⊢
  have hNx : ∀ x ∈ (RA ++ RB), (x.id.r = ra ∨ x.id.r = rb) ∧ d.maxCounter < x.id.c ∧ x.valid = true ∧
      ((x.parent = P ∧ x.side = σ) ∨ ∃ w ∈ (RA ++ RB), x.parent = some w.id) := by
    intro x hx
    rcases List.mem_append.1 hx with hx | hx
    · obtain ⟨h1, h2, h3, h4⟩ := okA.each x hx
      refine ⟨Or.inl h1, h2, h3, ?_⟩
      rcases h4 with ⟨e1, e2, _⟩ | ⟨w, hw, e⟩
      · exact Or.inl ⟨e1, e2⟩
      · exact Or.inr ⟨w, List.mem_append_left _ hw, e⟩
    · obtain ⟨h1, h2, h3, h4⟩ := okB.each x hx
      refine ⟨Or.inr h1, h2, h3, ?_⟩
      rcases h4 with ⟨e1, e2, _⟩ | ⟨w, hw, e⟩
      · exact Or.inl ⟨e1, e2⟩
      · exact Or.inr ⟨w, List.mem_append_right _ hw, e⟩
  -- distinct ids
  have hpair : (RA ++ RB).Pairwise fun a b => a.id ≠ b.id := by
    rw [List.pairwise_append]
    refine ⟨okA.sorted.imp fun h e => by rw [e] at h; omega, okB.sorted.imp fun h e => by rw [e] at h; omega, ?_⟩
    intro x hx y hy e
    have := (okA.each x hx).1; have := (okB.each y hy).1
    have : x.id.r = y.id.r := by rw [e]
    omega
  have hfresh : ∀ x ∈ (RA ++ RB), ∀ n ∈ d.nodes, x.id ≠ n.id := fun x hx n hn e => by
    have := (hNx x hx).2.1; have := node_le_max hn; rw [e] at *; omega
  obtain ⟨wf', hmem, hdels⟩ := apply_fresh h hpair fun x hx => ⟨(hNx x hx).2.2.1, hfresh x hx⟩
  generalize hm : d.applyAll ((RA ++ RB).map .ins) = m at wf' hmem hdels
  -- the place is an old node or the root, never a new one
  have hPnew : ∀ x ∈ (RA ++ RB), P ≠ some x.id := by
    intro x hx e
    obtain ⟨p, hp, ep⟩ := pl.parent _ e
    exact hfresh x hx p hp ep.symm
  have g : Graft d m (RA ++ RB) P σ := {
    wf := h, wf' := wf', mem := hmem, fresh := hfresh
    noParent := fun n hn x hx e => by
      have hv := h.valid n hn
      simp [Node.valid, e] at hv
      have := (hNx x hx).2.1; have := node_le_max hn; omega
    attach := fun x hx => (hNx x hx).2.2.2
    empty := pl.empty, rootR := pl.rootR }
  -- the new nodes visible
  have hNvis : ∀ x ∈ (RA ++ RB), vis d x = true := by
    intro x hx
    simp only [vis, Bool.not_eq_true']
    cases hc : d.dels.contains x.id
    · rfl
    · have := del_le_max (List.contains_iff_mem.1 hc); have := (hNx x hx).2.1; omega
  -- the subtree of each run's first node is the run
  have hsub : ∀ (r : Nat) (cs : List Char) (R : List Node), R = d.run r i cs → (R = RA ∨ R = RB) →
      ∀ c cs', cs = c :: cs' → T m (d.placeAt (d.nextId r) i c) = R := by
    intro r cs R hR hRR c cs' hcs
    subst hcs; subst hR
    have hRN : ∀ x ∈ d.run r i (c :: cs'), x ∈ (RA ++ RB) := by
      intro x hx; rcases hRR with e | e <;> rw [e] at hx
      · exact List.mem_append_left _ hx
      · exact List.mem_append_right _ hx
    apply T_run wf' (fun x hx => (hmem x).2 (Or.inr (hRN x hx)))
    · intro n hn z hz hp
      rcases (hmem n).1 hn with hn | hn
      · exact absurd hp (g.noParent n hn z (hRN z hz))
      · -- n is in one of the runs; its parent is in its own run (or is P)
        rcases List.mem_append.1 hn with hnA | hnB
        · rcases hRR with e | e
          · rw [e]; exact hnA
          · exfalso
            rw [e] at hz
            rcases (okA.each n hnA).2.2.2 with ⟨e1, _, _⟩ | ⟨w, hw, e2⟩
            · exact hPnew z (List.mem_append_right _ hz) (by rw [← e1, hp])
            · have := (okA.each w hw).1; have := (okB.each z hz).1
              rw [hp] at e2; have e3 := Option.some_inj.1 e2
              have : z.id.r = w.id.r := by rw [e3]
              omega
        · rcases hRR with e | e
          · exfalso
            rw [e] at hz
            rcases (okB.each n hnB).2.2.2 with ⟨e1, _, _⟩ | ⟨w, hw, e2⟩
            · exact hPnew z (List.mem_append_left _ hz) (by rw [← e1, hp])
            · have := (okB.each w hw).1; have := (okA.each z hz).1
              rw [hp] at e2; have e3 := Option.some_inj.1 e2
              have : z.id.r = w.id.r := by rw [e3]
              omega
          · rw [e]; exact hnB
    · intro z hz e
      rw [(hps0 r c).1] at e
      exact hPnew z (hRN z hz) e
  -- the children at the place: the runs' first nodes
  have heads : ∀ n, n ∈ m.kids P σ ↔ n ∈ RA.head?.toList ++ RB.head?.toList := by
    intro n
    rw [mem_kids, hmem]
    constructor
    · rintro ⟨hn | hn, hp, hs⟩
      · have : n ∈ d.kids P σ := mem_kids.2 ⟨hn, hp, hs⟩
        rw [pl.empty] at this; simp at this
      · rcases List.mem_append.1 hn with hn | hn
        · rcases (okA.each n hn).2.2.2 with ⟨_, _, e⟩ | ⟨w, hw, e⟩
          · simp [e]
          · exact absurd (by rw [← hp, e]) (hPnew w (List.mem_append_left _ hw))
        · rcases (okB.each n hn).2.2.2 with ⟨_, _, e⟩ | ⟨w, hw, e⟩
          · simp [e]
          · exact absurd (by rw [← hp, e]) (hPnew w (List.mem_append_right _ hw))
    · intro hn
      rcases List.mem_append.1 hn with hn | hn
      · have hh : RA.head? = some n := by simpa using hn
        have hmA : n ∈ RA := List.mem_of_mem_head? hh
        exact ⟨Or.inr (List.mem_append_left _ hmA), okA.head n hh⟩
      · have hh : RB.head? = some n := by simpa using hn
        have hmB : n ∈ RB := List.mem_of_mem_head? hh
        exact ⟨Or.inr (List.mem_append_right _ hmB), okB.head n hh⟩
  -- the order of the two first nodes
  have hTh : ∀ (r : Nat) (cs : List Char) (R : List Node), d.run r i cs = R → (R = RA ∨ R = RB) →
      R.head?.toList.flatMap (T m) = R := by
    intro r cs R hR hRR
    cases cs with
    | nil => rw [← hR]; rfl
    | cons c cs' =>
      have e := hsub r (c :: cs') R hR.symm hRR c cs' rfl
      rw [← hR, run_cons] at *
      simp only [List.head?_cons, Option.toList_some, List.flatMap_cons, List.flatMap_nil, List.append_nil]
      exact e
  have hA := hTh ra a RA hRA (Or.inl rfl)
  have hB := hTh rb b RB hRB (Or.inr rfl)
  have hW : g.W = RA ++ RB ∨ g.W = RB ++ RA := by
    simp only [Graft.W]
    cases ha : RA.head? with
    | none =>
      have : m.kids P σ = RB.head?.toList := eq_of_sortedN (kids_sorted wf' _ _)
        (by cases RB.head? <;> simp) (fun n => by rw [heads, ha]; simp)
      rw [this, hB]; left; rw [List.head?_eq_none_iff.1 ha]; rfl
    | some x =>
      cases hb : RB.head? with
      | none =>
        have : m.kids P σ = [x] := eq_of_sortedN (kids_sorted wf' _ _) (by simp)
          (fun n => by rw [heads, ha, hb]; simp)
        rw [this]; left
        have := hA; rw [ha] at this
        rw [List.head?_eq_none_iff.1 hb, List.append_nil]; exact this
      | some y =>
        have hxy : x.id ≠ y.id := by
          have h1 := (okA.each x (List.mem_of_mem_head? ha)).1
          have h2 := (okB.each y (List.mem_of_mem_head? hb)).1
          intro e; have : x.id.r = y.id.r := by rw [e]
          omega
        have hA' : T m x = RA := by have := hA; rw [ha] at this; simpa using this
        have hB' : T m y = RB := by have := hB; rw [hb] at this; simpa using this
        rcases Id.lt_total hxy with hl | hl
        · have : m.kids P σ = [x, y] := eq_of_sortedN (kids_sorted wf' _ _) (by simp [hl])
            (fun n => by rw [heads, ha, hb]; simp)
          left; rw [this]; simp [hA', hB']
        · have : m.kids P σ = [y, x] := eq_of_sortedN (kids_sorted wf' _ _) (by simp [hl])
            (fun n => by rw [heads, ha, hb]; simp; exact Or.comm)
          right; rw [this]; simp [hA', hB']
  have hseq := g.seq_graft
  have hvm : vis m = vis d := by funext n; simp [vis, hdels]
  have htext : ∀ W', (g.W = W') → m.chars = d.chars.take i ++ W'.map (·.ch) ++ d.chars.drop i := by
    intro W' hw
    rw [chars_eq wf', chars_eq h, visibleSpec_def, hvm, hseq, pl.text g.W (fun w hw' => ?_)]
    · rw [hw]; simp [List.map_take, List.map_drop]
    · rcases hW with e | e <;> rw [e] at hw' <;> exact hNvis w (by rcases List.mem_append.1 hw' with h | h <;> simp [h])
  refine ⟨wf', ?_⟩
  have hca : RA.map (·.ch) = a := by rw [← hRA]; exact run_chars d ra i a
  have hcb : RB.map (·.ch) = b := by rw [← hRB]; exact run_chars d rb i b
  rcases hW with e | e
  · left; rw [htext _ e]; simp [hca, hcb]
  · right; rw [htext _ e]; simp [hca, hcb]

end Tandem.Proofs
