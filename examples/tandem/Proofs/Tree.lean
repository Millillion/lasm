/-
The shape of the tree: every node's subtree is traversed after its smaller
ancestors, subtrees of different siblings are disjoint, no node is
traversed twice, and each subtree is one contiguous block of the document.
-/
import Proofs.Canon
import Tandem.Tree

namespace Tandem.Proofs
open Tandem Doc

/-- A well-formed document: what every replica's state is (`wf_reachable`). -/
structure Wf (d : Doc) : Prop where
  sorted : SortedN d.nodes
  valid : ∀ n ∈ d.nodes, n.valid = true
  dsorted : SortedI d.dels

/-- A state some replica can be in: the operations it applied, from empty. -/
def Reachable (d : Doc) : Prop := ∃ ops : List Op, d = Doc.empty.applyAll ops

theorem wf_reachable {d : Doc} (h : Reachable d) : Wf d := by
  obtain ⟨ops, rfl⟩ := h
  obtain ⟨h1, h2⟩ := canon_of_ops ops
  refine ⟨h1.1, fun n hn => ?_, h2.1⟩
  exact (mem_insOf.1 ((h1.2 n).1 hn).1).2

theorem flatMap_congr' {α β : Type} {f g : α → List β} : ∀ {l : List α}, (∀ x ∈ l, f x = g x) →
    l.flatMap f = l.flatMap g
  | [], _ => rfl
  | x :: xs, h => by
    simp only [List.flatMap_cons]
    rw [h x (by simp), flatMap_congr' (fun y hy => h y (by simp [hy]))]

/-! Counters -/

theorem foldl_max_ge {α : Type} (f : α → Nat) : ∀ (l : List α) (m : Nat),
    m ≤ l.foldl (fun m x => max m (f x)) m ∧ ∀ x ∈ l, f x ≤ l.foldl (fun m x => max m (f x)) m
  | [], m => by simp
  | y :: ys, m => by
    have ih := foldl_max_ge f ys (max m (f y))
    simp only [List.foldl_cons, List.mem_cons, forall_eq_or_imp]
    refine ⟨Nat.le_trans (Nat.le_max_left _ _) ih.1, Nat.le_trans (Nat.le_max_right _ _) ih.1, ih.2⟩

theorem node_le_max {d : Doc} {n : Node} (h : n ∈ d.nodes) : n.id.c ≤ d.maxCounter := by
  unfold Doc.maxCounter
  exact Nat.le_trans ((foldl_max_ge (fun n : Node => n.id.c) d.nodes 0).2 n h)
    (foldl_max_ge (fun i : Id => i.c) d.dels _).1

theorem del_le_max {d : Doc} {i : Id} (h : i ∈ d.dels) : i.c ≤ d.maxCounter := by
  unfold Doc.maxCounter
  exact (foldl_max_ge (fun i : Id => i.c) d.dels _).2 i h

/-! Children -/

theorem mem_kids {d : Doc} {p : Option Id} {s : Side} {n : Node} :
    n ∈ d.kids p s ↔ n ∈ d.nodes ∧ n.parent = p ∧ n.side = s := by
  simp [Doc.kids]

theorem kids_sorted {d : Doc} (h : Wf d) (p : Option Id) (s : Side) : SortedN (d.kids p s) :=
  List.Pairwise.filter _ h.sorted

theorem kid_gt {d : Doc} (h : Wf d) {q : Id} {s : Side} {n : Node} (hn : n ∈ d.kids (some q) s) :
    q.c < n.id.c := by
  rw [mem_kids] at hn
  have := h.valid n hn.1
  simp [Node.valid, hn.2.1] at this; exact this

theorem root_kid_side {d : Doc} (h : Wf d) {s : Side} {n : Node} (hn : n ∈ d.kids none s) : s = .R := by
  rw [mem_kids] at hn
  have := h.valid n hn.1
  simp [Node.valid, hn.2.1] at this; rw [← hn.2.2, this]

theorem uniq_of_sorted {l : List Node} (h : SortedN l) {a b : Node} (ha : a ∈ l) (hb : b ∈ l)
    (e : a.id = b.id) : a = b := by
  induction l with
  | nil => simp at ha
  | cons x xs ih =>
    rw [SortedN, List.pairwise_cons] at h
    simp at ha hb
    rcases ha with rfl | ha <;> rcases hb with rfl | hb
    · rfl
    · have := h.1 b hb; rw [e, Id.lt_irrefl] at this; simp at this
    · have := h.1 a ha; rw [e, Id.lt_irrefl] at this; simp at this
    · exact ih h.2 ha hb

theorem uniq {d : Doc} (h : Wf d) {a b : Node} (ha : a ∈ d.nodes) (hb : b ∈ d.nodes) (e : a.id = b.id) :
    a = b := uniq_of_sorted h.sorted ha hb e

/-! The traversal -/

/-- The traversal with enough fuel. -/
abbrev T (d : Doc) (n : Node) : List Node := d.trav (d.maxCounter + 1) n

theorem mem_trav_succ {d : Doc} {f : Nat} {n y : Node} :
    y ∈ d.trav (f + 1) n ↔ y = n ∨ ∃ k, (k ∈ d.kids (some n.id) .L ∨ k ∈ d.kids (some n.id) .R) ∧ y ∈ d.trav f k := by
  simp only [Doc.trav, List.mem_append, List.mem_cons, List.mem_flatMap]
  constructor
  · rintro (⟨k, hk, hy⟩ | rfl | ⟨k, hk, hy⟩)
    · exact Or.inr ⟨k, Or.inl hk, hy⟩
    · exact Or.inl rfl
    · exact Or.inr ⟨k, Or.inr hk, hy⟩
  · rintro (rfl | ⟨k, hk | hk, hy⟩)
    · exact Or.inr (Or.inl rfl)
    · exact Or.inl ⟨k, hk, hy⟩
    · exact Or.inr (Or.inr ⟨k, hk, hy⟩)

/-- Everything below a node is a node of the document with a larger counter. -/
theorem trav_ge {d : Doc} (h : Wf d) : ∀ {f : Nat} {n y : Node}, y ∈ d.trav f n →
    y = n ∨ (y ∈ d.nodes ∧ n.id.c < y.id.c)
  | 0, _, _, hy => by simp [Doc.trav] at hy
  | f + 1, n, y, hy => by
    rcases mem_trav_succ.1 hy with rfl | ⟨k, hk, hy⟩
    · exact Or.inl rfl
    · have hgt : n.id.c < k.id.c := by rcases hk with hk | hk <;> exact kid_gt h hk
      have hkn : k ∈ d.nodes := by rcases hk with hk | hk <;> exact (mem_kids.1 hk).1
      rcases trav_ge h hy with rfl | ⟨hm, hlt⟩
      · exact Or.inr ⟨hkn, hgt⟩
      · exact Or.inr ⟨hm, Nat.lt_trans hgt hlt⟩

theorem trav_ge' {d : Doc} (h : Wf d) {f : Nat} {n y : Node} (hy : y ∈ d.trav f n) : n.id.c ≤ y.id.c := by
  rcases trav_ge h hy with rfl | ⟨_, h⟩
  · exact Nat.le_refl _
  · exact Nat.le_of_lt h

/-- Everything below `n`, other than `n`, has its parent below `n` too. -/
theorem trav_parent {d : Doc} : ∀ {f : Nat} {n y : Node}, y ∈ d.trav f n →
    y = n ∨ ∃ z ∈ d.trav f n, y.parent = some z.id
  | 0, _, _, hy => by simp [Doc.trav] at hy
  | f + 1, n, y, hy => by
    rcases mem_trav_succ.1 hy with rfl | ⟨k, hk, hy'⟩
    · exact Or.inl rfl
    · right
      rcases trav_parent hy' with rfl | ⟨z, hz, e⟩
      · refine ⟨n, by simp [Doc.trav], ?_⟩
        rcases hk with hk | hk <;> exact (mem_kids.1 hk).2.1
      · exact ⟨z, mem_trav_succ.2 (Or.inr ⟨k, hk, hz⟩), e⟩

theorem self_mem_trav {d : Doc} {f : Nat} {n : Node} : n ∈ d.trav (f + 1) n := by
  simp [Doc.trav]

/-- Fuel beyond the depth changes nothing. -/
theorem trav_fuel {d : Doc} (h : Wf d) : ∀ (f g : Nat) {n : Node}, n.id.c ≤ d.maxCounter →
    d.maxCounter < f + n.id.c → d.maxCounter < g + n.id.c → d.trav f n = d.trav g n
  | 0, _, n, hn, hf, _ => by omega
  | _ + 1, 0, n, hn, _, hg => by omega
  | f + 1, g + 1, n, hn, hf, hg => by
    simp only [Doc.trav]
    have step : ∀ s, (d.kids (some n.id) s).flatMap (d.trav f) = (d.kids (some n.id) s).flatMap (d.trav g) := by
      intro s
      apply flatMap_congr'
      intro k hk
      have hgt := kid_gt h hk
      have hkm := node_le_max (mem_kids.1 hk).1
      exact trav_fuel h f g hkm (by omega) (by omega)
    rw [step .L, step .R]

theorem T_eq {d : Doc} (h : Wf d) {n : Node} (hn : n.id.c ≤ d.maxCounter) :
    T d n = (d.kids (some n.id) .L).flatMap (T d) ++ n :: (d.kids (some n.id) .R).flatMap (T d) := by
  simp only [T, Doc.trav]
  have step : ∀ s, (d.kids (some n.id) s).flatMap (d.trav d.maxCounter) =
      (d.kids (some n.id) s).flatMap (d.trav (d.maxCounter + 1)) := by
    intro s
    apply flatMap_congr'
    intro k hk
    have hgt := kid_gt h hk
    have hkm := node_le_max (mem_kids.1 hk).1
    exact trav_fuel h _ _ hkm (by omega) (by omega)
  rw [step .L, step .R]

theorem seqSpec_eq (d : Doc) : d.seqSpec = (d.kids none .R).flatMap (T d) := rfl

theorem mem_T_self {d : Doc} {n : Node} : n ∈ T d n := self_mem_trav

/-! Disjoint subtrees -/

/-- The subtrees of two different nodes with the same parent share no node. -/
theorem disjoint {d : Doc} (h : Wf d) : ∀ (k : Nat) {f g : Nat} {c₁ c₂ y : Node}, y.id.c < k →
    c₁ ∈ d.nodes → c₂ ∈ d.nodes → c₁ ≠ c₂ → c₁.parent = c₂.parent →
    y ∈ d.trav f c₁ → y ∈ d.trav g c₂ → False
  | 0, _, _, _, _, y, hk, _, _, _, _, _, _ => by omega
  | k + 1, f, g, c₁, c₂, y, hk, h1, h2, hne, hp, hy1, hy2 => by
    -- `p` below the child: `c.parent = some z.id` with `z` in `c`'s subtree is impossible.
    have noUp : ∀ {c z : Node} {f' : Nat}, c ∈ d.nodes → z ∈ d.trav f' c → c.parent = some z.id → False := by
      intro c z f' hc hz e
      have hv := h.valid c hc
      simp [Node.valid, e] at hv
      have := trav_ge' h hz
      omega
    by_cases e1 : y = c₁
    · subst e1
      rcases trav_parent hy2 with e2 | ⟨z, hz, e⟩
      · exact hne e2
      · exact noUp h2 hz (by rw [← hp, e])
    · by_cases e2 : y = c₂
      · subst e2
        rcases trav_parent hy1 with e1' | ⟨z, hz, e⟩
        · exact e1 e1'
        · exact noUp h1 hz (by rw [hp, e])
      · rcases trav_parent hy1 with e1' | ⟨z₁, hz₁, ez₁⟩
        · exact e1 e1'
        rcases trav_parent hy2 with e2' | ⟨z₂, hz₂, ez₂⟩
        · exact e2 e2'
        have hz₁n : z₁ ∈ d.nodes := by
          rcases trav_ge h hz₁ with rfl | ⟨hm, _⟩
          · exact h1
          · exact hm
        have hz₂n : z₂ ∈ d.nodes := by
          rcases trav_ge h hz₂ with rfl | ⟨hm, _⟩
          · exact h2
          · exact hm
        have hzz : z₁ = z₂ := uniq h hz₁n hz₂n (by rw [ez₁] at ez₂; exact Option.some_inj.1 ez₂)
        subst hzz
        have hyn : y ∈ d.nodes := by
          rcases trav_ge h hy1 with rfl | ⟨hm, _⟩
          · exact absurd rfl e1
          · exact hm
        have hv := h.valid y hyn
        simp [Node.valid, ez₁] at hv
        exact disjoint h k (by omega) h1 h2 hne hp hz₁ hz₂

/-! No id occurs twice -/

/-- The ids of a list are pairwise different. -/
abbrev Uniq (l : List Node) : Prop := l.Pairwise fun a b => a.id ≠ b.id

theorem uniq_flatMap {g : Node → List Node} : ∀ {cs : List Node}, (∀ c ∈ cs, Uniq (g c)) →
    cs.Pairwise (fun a b => ∀ x ∈ g a, ∀ y ∈ g b, x.id ≠ y.id) → Uniq (cs.flatMap g)
  | [], _, _ => by simp
  | c :: cs, h1, h2 => by
    rw [List.pairwise_cons] at h2
    simp only [List.flatMap_cons, Uniq, List.pairwise_append]
    refine ⟨h1 c (by simp), uniq_flatMap (fun c' hc' => h1 c' (by simp [hc'])) h2.2, ?_⟩
    intro x hx y hy
    rw [List.mem_flatMap] at hy
    obtain ⟨c', hc', hy⟩ := hy
    exact h2.1 c' hc' x hx y hy

/-- Two nodes below different children of one parent have different ids. -/
theorem disjoint_ids {d : Doc} (h : Wf d) {f g : Nat} {c₁ c₂ x y : Node}
    (h1 : c₁ ∈ d.nodes) (h2 : c₂ ∈ d.nodes) (hne : c₁ ≠ c₂) (hp : c₁.parent = c₂.parent)
    (hx : x ∈ d.trav f c₁) (hy : y ∈ d.trav g c₂) : x.id ≠ y.id := by
  intro e
  have hxn : x ∈ d.nodes := by rcases trav_ge h hx with rfl | ⟨hm, _⟩; exact h1; exact hm
  have hyn : y ∈ d.nodes := by rcases trav_ge h hy with rfl | ⟨hm, _⟩; exact h2; exact hm
  have := uniq h hxn hyn e; subst this
  exact disjoint h (x.id.c + 1) (Nat.lt_succ_self _) h1 h2 hne hp hx hy

theorem kids_pairwise {d : Doc} (h : Wf d) {p : Option Id} {s : Side} {g : Nat} :
    (d.kids p s).Pairwise (fun a b => ∀ x ∈ d.trav g a, ∀ y ∈ d.trav g b, x.id ≠ y.id) := by
  apply (kids_sorted h p s).imp_of_mem
  intro a b ha hb hab x hx y hy
  have ha' := mem_kids.1 ha
  have hb' := mem_kids.1 hb
  exact disjoint_ids h ha'.1 hb'.1 (fun e => by rw [e, Id.lt_irrefl] at hab; simp at hab)
    (by rw [ha'.2.1, hb'.2.1]) hx hy

theorem ne_of_c {a b : Node} (h : a.id.c ≠ b.id.c) : a.id ≠ b.id := fun e => h (by rw [e])

/-- Induction over a document's nodes, from the largest counter down. -/
theorem measure_ind {d : Doc} (P : Node → Prop)
    (step : ∀ n, n.id.c ≤ d.maxCounter → (∀ k, k.id.c ≤ d.maxCounter → n.id.c < k.id.c → P k) → P n) :
    ∀ n, n.id.c ≤ d.maxCounter → P n := by
  have : ∀ m n, d.maxCounter - n.id.c < m → n.id.c ≤ d.maxCounter → P n := by
    intro m
    induction m with
    | zero => intro n h; omega
    | succ m ih =>
      intro n hm hn
      exact step n hn fun k hk hlt => ih k (by omega) hk
  exact fun n hn => this _ n (Nat.lt_succ_self _) hn

theorem uniq_T {d : Doc} (h : Wf d) : ∀ n, n.id.c ≤ d.maxCounter → Uniq (T d n) := by
  apply measure_ind
  intro n hn ih
  rw [T_eq h hn]
  have hk : ∀ s, ∀ c ∈ d.kids (some n.id) s, Uniq (T d c) := fun s c hc =>
    ih c (node_le_max (mem_kids.1 hc).1) (kid_gt h hc)
  have below : ∀ s, ∀ x ∈ (d.kids (some n.id) s).flatMap (T d), n.id.c < x.id.c := by
    intro s x hx
    rw [List.mem_flatMap] at hx
    obtain ⟨c, hc, hx⟩ := hx
    exact Nat.lt_of_lt_of_le (kid_gt h hc) (trav_ge' h hx)
  simp only [Uniq, List.pairwise_append, List.pairwise_cons]
  refine ⟨uniq_flatMap (hk .L) kids_pairwise', ⟨fun x hx => ne_of_c (by have := below .R x hx; omega),
    uniq_flatMap (hk .R) kids_pairwise'⟩, ?_⟩
  · intro x hx y hy
    simp at hy
    rcases hy with rfl | hy
    · exact ne_of_c (by have := below .L x hx; omega)
    · obtain ⟨a, ha, hx⟩ := List.mem_flatMap.1 hx
      obtain ⟨b, hb, hy⟩ := hy
      have ha' := mem_kids.1 ha
      have hb' := mem_kids.1 hb
      exact disjoint_ids h ha'.1 hb'.1 (fun e => by rw [e] at ha'; rw [ha'.2.2] at hb'; simp at hb')
        (by rw [ha'.2.1, hb'.2.1]) hx hy
where
  kids_pairwise' {p s} := kids_pairwise (d := d) h (p := p) (s := s) (g := d.maxCounter + 1)

theorem uniq_seqSpec {d : Doc} (h : Wf d) : Uniq d.seqSpec := by
  rw [seqSpec_eq]
  exact uniq_flatMap (fun c hc => uniq_T h c (node_le_max (mem_kids.1 hc).1)) (kids_pairwise h)

/-! Each subtree is a contiguous block -/

theorem append_of_mem' {α : Type} {a : α} : ∀ {l : List α}, a ∈ l → ∃ s t, l = s ++ a :: t
  | [], h => by simp at h
  | x :: xs, h => by
    simp at h
    rcases h with rfl | h
    · exact ⟨[], xs, rfl⟩
    · obtain ⟨s, t, e⟩ := append_of_mem' h
      exact ⟨x :: s, t, by rw [e]; rfl⟩

theorem flatMap_split {g : Node → List Node} {l : List Node} {a : Node} (h : a ∈ l) :
    ∃ A B, l.flatMap g = A ++ g a ++ B := by
  obtain ⟨s, t, rfl⟩ := append_of_mem' h
  exact ⟨s.flatMap g, t.flatMap g, by simp [List.flatMap_append]⟩

theorem T_context {d : Doc} (h : Wf d) : ∀ k, k.id.c ≤ d.maxCounter → ∀ y ∈ T d k,
    ∃ A B, T d k = A ++ T d y ++ B := by
  apply measure_ind
  intro k hk ih y hy
  rcases mem_trav_succ.1 hy with rfl | ⟨c, hc, hy'⟩
  · exact ⟨[], [], by simp⟩
  · have hcn : c ∈ d.nodes := by rcases hc with hc | hc <;> exact (mem_kids.1 hc).1
    have hcm := node_le_max hcn
    have hgt : k.id.c < c.id.c := by rcases hc with hc | hc <;> exact kid_gt h hc
    have hT : d.trav d.maxCounter c = T d c := trav_fuel h _ _ hcm (by omega) (by omega)
    rw [hT] at hy'
    obtain ⟨A, B, e⟩ := ih c hcm hgt y hy'
    rw [T_eq h hk]
    rcases hc with hc | hc
    · obtain ⟨X, Y, e'⟩ := flatMap_split (g := T d) hc
      exact ⟨X ++ A, B ++ Y ++ k :: (d.kids (some k.id) .R).flatMap (T d), by rw [e', e]; simp⟩
    · obtain ⟨X, Y, e'⟩ := flatMap_split (g := T d) hc
      exact ⟨(d.kids (some k.id) .L).flatMap (T d) ++ k :: X ++ A, B ++ Y, by rw [e', e]; simp⟩

theorem seq_context {d : Doc} (h : Wf d) {y : Node} (hy : y ∈ d.seqSpec) :
    ∃ A B, d.seqSpec = A ++ T d y ++ B := by
  rw [seqSpec_eq] at *
  rw [List.mem_flatMap] at hy
  obtain ⟨r, hr, hy⟩ := hy
  obtain ⟨A, B, e⟩ := T_context h r (node_le_max (mem_kids.1 hr).1) y hy
  obtain ⟨X, Y, e'⟩ := flatMap_split (g := T d) hr
  exact ⟨X ++ A, B ++ Y, by rw [e', e]; simp⟩

/-- The first node of a subtree has no left children. -/
theorem head_noL {d : Doc} (h : Wf d) : ∀ k, k.id.c ≤ d.maxCounter → ∀ hd rest, T d k = hd :: rest →
    d.kids (some hd.id) .L = [] := by
  apply measure_ind
  intro k hk ih hd rest e
  rw [T_eq h hk] at e
  cases hL : d.kids (some k.id) .L with
  | nil => rw [hL] at e; simp at e; rw [← e.1]; exact hL
  | cons a as =>
    rw [hL] at e
    have ha : a ∈ d.kids (some k.id) .L := by rw [hL]; simp
    have ham := node_le_max (mem_kids.1 ha).1
    cases hTa : T d a with
    | nil => have := @mem_T_self d a; rw [hTa] at this; simp at this
    | cons x xs =>
      rw [List.flatMap_cons, hTa] at e
      simp at e
      rw [← e.1]
      exact ih a ham (kid_gt h ha) x xs hTa

end Tandem.Proofs
