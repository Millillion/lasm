/-
Runs of typing. A run is a first character placed by `placeAt` and the rest
each the right child of the one before; its subtree is exactly the run, so
it shows as one block. Two runs typed concurrently at the same place by two
replicas are two such blocks side by side: never interleaved.
-/
import Proofs.Place

namespace Tandem.Proofs
open Tandem Doc

/-- The node typed after `prev`. -/
def mkNext (r : Nat) (prev : Node) (c : Char) : Node := ⟨⟨prev.id.c + 1, r⟩, some prev.id, .R, c⟩

/-- The rest of a run after `prev`. -/
def chainOf (r : Nat) : Node → List Char → List Node
  | _, [] => []
  | prev, c :: cs => mkNext r prev c :: chainOf r (mkNext r prev c) cs

theorem runGo_eq (r : Nat) : ∀ (prev : Node) (cs : List Char) (acc : List Node),
    runGo r prev cs acc = acc.reverse ++ chainOf r prev cs
  | _, [], acc => by simp [runGo, chainOf]
  | prev, c :: cs, acc => by
    simp only [runGo, chainOf]
    rw [runGo_eq r _ cs]; simp [mkNext]

theorem placeAt_id (d : Doc) (id : Id) (i : Nat) (c : Char) : (d.placeAt id i c).id = id := by
  unfold Doc.placeAt; dsimp only; split <;> (try split) <;> (try split) <;> (try split) <;> rfl

theorem placeAt_ch (d : Doc) (id : Id) (i : Nat) (c : Char) : (d.placeAt id i c).ch = c := by
  unfold Doc.placeAt; dsimp only; split <;> (try split) <;> (try split) <;> (try split) <;> rfl

theorem placeAt_parent (d : Doc) (id id' : Id) (i : Nat) (c c' : Char) :
    (d.placeAt id i c).parent = (d.placeAt id' i c').parent ∧ (d.placeAt id i c).side = (d.placeAt id' i c').side := by
  unfold Doc.placeAt; dsimp only; split <;> (try split) <;> (try split) <;> (try split) <;> exact ⟨rfl, rfl⟩

theorem run_cons (d : Doc) (r i : Nat) (c : Char) (cs : List Char) :
    d.run r i (c :: cs) = d.placeAt (d.nextId r) i c :: chainOf r (d.placeAt (d.nextId r) i c) cs := by
  simp [Doc.run, runGo_eq]

/-! Facts about a chain -/

theorem chain_facts {r : Nat} : ∀ {prev : Node} {cs : List Char} {n : Node}, n ∈ chainOf r prev cs →
    prev.id.c < n.id.c ∧ n.id.r = r ∧ n.side = .R ∧ n.valid = true ∧
      (n.parent = some prev.id ∨ ∃ w ∈ chainOf r prev cs, n.parent = some w.id ∧ prev.id.c < w.id.c)
  | _, [], _, h => by simp [chainOf] at h
  | prev, c :: cs, n, h => by
    simp only [chainOf, List.mem_cons] at h
    rcases h with rfl | h
    · exact ⟨by simp [mkNext], rfl, rfl, by simp [mkNext, Node.valid], Or.inl rfl⟩
    · obtain ⟨h1, h2, h3, h4, h5⟩ := chain_facts h
      have hc : prev.id.c < (mkNext r prev c).id.c := by simp [mkNext]
      refine ⟨Nat.lt_trans hc h1, h2, h3, h4, Or.inr ?_⟩
      rcases h5 with e | ⟨w, hw, e, hlt⟩
      · exact ⟨mkNext r prev c, by simp [chainOf], e, hc⟩
      · exact ⟨w, by simp [chainOf, hw], e, Nat.lt_trans hc hlt⟩

theorem chain_sorted {r : Nat} : ∀ {prev : Node} {cs : List Char},
    (chainOf r prev cs).Pairwise (fun a b => a.id.c < b.id.c)
  | _, [] => by simp [chainOf]
  | prev, c :: cs => by
    simp only [chainOf, List.pairwise_cons]
    exact ⟨fun n hn => (chain_facts hn).1, chain_sorted⟩

theorem chain_chars {r : Nat} : ∀ {prev : Node} {cs : List Char}, (chainOf r prev cs).map (·.ch) = cs
  | _, [] => rfl
  | prev, c :: cs => by simp [chainOf, mkNext, chain_chars]

/-- The node with parent `prev` in the chain is its first. -/
theorem chain_child {r : Nat} {prev : Node} {c : Char} {cs : List Char} {n : Node}
    (hn : n ∈ chainOf r prev (c :: cs)) (hp : n.parent = some prev.id) : n = mkNext r prev c := by
  simp only [chainOf, List.mem_cons] at hn
  rcases hn with rfl | hn
  · rfl
  · exfalso
    rcases (chain_facts hn).2.2.2.2 with e | ⟨w, _, e, hlt⟩
    · rw [hp] at e; have := congrArg Id.c (Option.some_inj.1 e); simp [mkNext] at this
    · rw [hp] at e; have := congrArg Id.c (Option.some_inj.1 e); simp [mkNext] at hlt; omega

/-! The subtree of a chain is the chain -/

/-- In `e`, `prev` has no left child and only the chain's next node as a right
child, and so on down the chain. -/
def AllOK (e : Doc) (r : Nat) : Node → List Char → Prop
  | prev, [] => e.kids (some prev.id) .L = [] ∧ e.kids (some prev.id) .R = []
  | prev, c :: cs => e.kids (some prev.id) .L = [] ∧ e.kids (some prev.id) .R = [mkNext r prev c] ∧
      AllOK e r (mkNext r prev c) cs

theorem T_chain {e : Doc} (h : Wf e) {r : Nat} : ∀ {cs : List Char} {prev : Node},
    (∀ z ∈ prev :: chainOf r prev cs, z.id.c ≤ e.maxCounter) → AllOK e r prev cs →
      T e prev = prev :: chainOf r prev cs
  | [], prev, hm, ok => by
    rw [T_eq h (hm prev (by simp)), ok.1, ok.2]; simp [chainOf]
  | c :: cs, prev, hm, ok => by
    rw [T_eq h (hm prev (by simp)), ok.1, ok.2.1]
    simp only [List.flatMap_nil, List.nil_append, List.flatMap_cons, List.flatMap_nil, List.append_nil, chainOf]
    rw [T_chain h (fun z hz => hm z (List.mem_cons_of_mem _ (by simp only [chainOf]; exact hz))) ok.2.2]

theorem allOK_of {e : Doc} (h : Wf e) {r : Nat} : ∀ {cs : List Char} {prev : Node},
    (∀ z ∈ chainOf r prev cs, z ∈ e.nodes) →
    (∀ n ∈ e.nodes, ∀ z ∈ prev :: chainOf r prev cs, n.parent = some z.id → n ∈ chainOf r prev cs) →
      AllOK e r prev cs
  | [], prev, _, h2 => by
    have none : ∀ s, e.kids (some prev.id) s = [] := by
      intro s
      cases hk : e.kids (some prev.id) s with
      | nil => rfl
      | cons n _ =>
        have hn : n ∈ e.kids (some prev.id) s := by rw [hk]; simp
        have := h2 n (mem_kids.1 hn).1 prev (by simp) (mem_kids.1 hn).2.1
        simp [chainOf] at this
    exact ⟨none .L, none .R⟩
  | c :: cs, prev, h3, h2 => by
    have only : ∀ s n, n ∈ e.kids (some prev.id) s ↔ s = .R ∧ n = mkNext r prev c := by
      intro s n
      rw [mem_kids]
      constructor
      · rintro ⟨hn, hp, hs⟩
        have hm := h2 n hn prev (by simp) hp
        have := chain_child hm hp
        subst this
        exact ⟨by rw [← hs]; rfl, rfl⟩
      · rintro ⟨rfl, rfl⟩
        exact ⟨h3 _ (by simp [chainOf]), rfl, rfl⟩
    have hL : e.kids (some prev.id) .L = [] := by
      cases hk : e.kids (some prev.id) .L with
      | nil => rfl
      | cons n _ => have := (only .L n).1 (by rw [hk]; simp); simp at this
    have hR : e.kids (some prev.id) .R = [mkNext r prev c] := by
      apply eq_of_sortedN (kids_sorted h _ _) (by simp)
      intro n; rw [only]; simp
    refine ⟨hL, hR, allOK_of h (fun z hz => h3 z (by simp [chainOf, hz])) ?_⟩
    intro n hn z hz hp
    have hm := h2 n hn z (List.mem_cons_of_mem _ (by simp only [chainOf]; exact hz)) hp
    simp only [chainOf, List.mem_cons] at hm
    rcases hm with rfl | hm
    · -- the chain's first node hangs below `prev`, not below `z`
      exfalso
      simp [mkNext] at hp
      have hzc : prev.id.c < z.id.c := by
        simp at hz
        rcases hz with rfl | hz
        · simp [mkNext]
        · have := (chain_facts hz).1; simp [mkNext] at this; omega
      rw [← hp] at hzc; omega
    · exact hm

/-! Applying fresh insertions -/

theorem apply_fresh : ∀ {N : List Node} {d : Doc}, Wf d → N.Pairwise (fun a b => a.id ≠ b.id) →
    (∀ x ∈ N, x.valid = true ∧ ∀ n ∈ d.nodes, x.id ≠ n.id) →
    Wf (d.applyAll (N.map .ins)) ∧ (∀ n, n ∈ (d.applyAll (N.map .ins)).nodes ↔ n ∈ d.nodes ∨ n ∈ N) ∧
      (d.applyAll (N.map .ins)).dels = d.dels
  | [], d, h, _, _ => by simp [Doc.applyAll, h]
  | x :: xs, d, h, hp, hx => by
    rw [List.pairwise_cons] at hp
    have hxv := (hx x (by simp)).1
    have hxf := (hx x (by simp)).2
    let d1 : Doc := { d with nodes := insNode x d.nodes }
    have hd1 : d.apply (.ins x) = d1 := by simp [Doc.apply, hxv, d1]
    have hmem : ∀ n, n ∈ d1.nodes ↔ n ∈ d.nodes ∨ n = x := by
      intro n
      simp only [d1, insNode_eq]
      rw [mem_insNodeSpec h.sorted]
      constructor
      · rintro (⟨rfl, _⟩ | ⟨hn, _⟩)
        · exact Or.inr rfl
        · exact Or.inl hn
      · rintro (hn | rfl)
        · exact Or.inr ⟨hn, fun ⟨e, _⟩ => hxf n hn e.symm⟩
        · exact Or.inl ⟨rfl, fun y hy e => absurd e.symm (hxf y hy)⟩
    have w1 : Wf d1 := ⟨by simp only [d1, insNode_eq]; exact sorted_insNodeSpec x h.sorted,
      fun n hn => by rcases (hmem n).1 hn with hn | rfl; exact h.valid n hn; exact hxv, h.dsorted⟩
    have ih := @apply_fresh xs d1 w1 hp.2 (fun y hy => ⟨(hx y (by simp [hy])).1, fun n hn => by
      rcases (hmem n).1 hn with hn | rfl
      · exact (hx y (by simp [hy])).2 n hn
      · exact fun e => hp.1 y hy e.symm⟩)
    have e : d.applyAll ((x :: xs).map .ins) = d1.applyAll (xs.map .ins) := by
      simp [Doc.applyAll, hd1]
    rw [e]
    refine ⟨ih.1, fun n => ?_, ih.2.2⟩
    rw [ih.2.1, hmem]; simp only [List.mem_cons]
    constructor
    · rintro ((h | rfl) | h) <;> simp_all
    · rintro (h | rfl | h) <;> simp_all

end Tandem.Proofs
