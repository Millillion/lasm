/-
Grafting: adding new nodes that hang below one place of the tree (and below
each other) changes the document only there. If the new nodes `N` attach to
the `σ`-side of the node with id `pid`, which had no children on that side,
the new document is the old one with the new subtrees' traversal `W`
inserted right after (`σ = R`) or right before (`σ = L`) that node.
-/
import Proofs.Tree

namespace Tandem.Proofs
open Tandem Doc

/-- Inserts `W` after the first node with id `pid`. -/
def insAfter (pid : Id) (W : List Node) : List Node → List Node
  | [] => []
  | y :: ys => if y.id = pid then y :: (W ++ ys) else y :: insAfter pid W ys

/-- Inserts `W` before the first node with id `pid`. -/
def insBefore (pid : Id) (W : List Node) : List Node → List Node
  | [] => []
  | y :: ys => if y.id = pid then W ++ y :: ys else y :: insBefore pid W ys

/-- Inserts `W` on side `σ` of the node with id `pid`. -/
def graft (σ : Side) (pid : Id) (W : List Node) (l : List Node) : List Node :=
  match σ with
  | .R => insAfter pid W l
  | .L => insBefore pid W l

/-- Grafting at the root (`none`) or at a node. -/
def graftAt (P : Option Id) (σ : Side) (W : List Node) (l : List Node) : List Node :=
  match P with
  | none => W ++ l
  | some pid => graft σ pid W l

/-- Whether a node with id `pid` occurs. -/
def Occurs (pid : Id) (l : List Node) : Prop := ∃ y ∈ l, y.id = pid

theorem graft_cons_ne {σ : Side} {pid : Id} {W : List Node} {y : Node} {ys : List Node} (h : y.id ≠ pid) :
    graft σ pid W (y :: ys) = y :: graft σ pid W ys := by
  cases σ <;> simp [graft, insAfter, insBefore, h]

theorem graft_none {σ : Side} {pid : Id} {W : List Node} : ∀ {l : List Node}, ¬Occurs pid l →
    graft σ pid W l = l
  | [], _ => by cases σ <;> rfl
  | y :: ys, h => by
    have hy : y.id ≠ pid := fun e => h ⟨y, by simp, e⟩
    rw [graft_cons_ne hy, graft_none (fun ⟨z, hz, e⟩ => h ⟨z, by simp [hz], e⟩)]

theorem graft_append_left {σ : Side} {pid : Id} {W : List Node} : ∀ {A : List Node} (B : List Node),
    ¬Occurs pid A → graft σ pid W (A ++ B) = A ++ graft σ pid W B
  | [], _, _ => rfl
  | y :: ys, B, h => by
    have hy : y.id ≠ pid := fun e => h ⟨y, by simp, e⟩
    rw [List.cons_append, graft_cons_ne hy, graft_append_left B (fun ⟨z, hz, e⟩ => h ⟨z, by simp [hz], e⟩)]
    rfl

theorem graft_append_right {σ : Side} {pid : Id} {W : List Node} : ∀ {A : List Node} (B : List Node),
    Occurs pid A → graft σ pid W (A ++ B) = graft σ pid W A ++ B
  | [], _, h => by obtain ⟨_, h, _⟩ := h; simp at h
  | y :: ys, B, h => by
    by_cases hy : y.id = pid
    · cases σ <;> simp [graft, insAfter, insBefore, hy]
    · have h' : Occurs pid ys := by
        obtain ⟨z, hz, e⟩ := h; simp at hz
        rcases hz with rfl | hz
        · exact absurd e hy
        · exact ⟨z, hz, e⟩
      rw [List.cons_append, graft_cons_ne hy, graft_cons_ne hy, graft_append_right B h']; rfl

theorem graft_flatMap {σ : Side} {pid : Id} {W : List Node} {g : Node → List Node} :
    ∀ {cs : List Node}, cs.Pairwise (fun a b => ∀ x ∈ g a, ∀ y ∈ g b, x.id ≠ y.id) →
      graft σ pid W (cs.flatMap g) = cs.flatMap (fun c => graft σ pid W (g c))
  | [], _ => by cases σ <;> rfl
  | c :: cs, h => by
    rw [List.pairwise_cons] at h
    simp only [List.flatMap_cons]
    by_cases ho : Occurs pid (g c)
    · rw [graft_append_right _ ho]
      congr 1
      have hno : ∀ c' ∈ cs, ¬Occurs pid (g c') := by
        intro c' hc' ⟨y, hy, e⟩
        obtain ⟨x, hx, e'⟩ := ho
        exact h.1 c' hc' x hx y hy (by rw [e, e'])
      rw [flatMap_congr' (fun c' hc' => graft_none (hno c' hc'))]
    · rw [graft_append_left _ ho, graft_none ho, graft_flatMap h.2]

theorem graftAt_none_occ {P : Option Id} {σ : Side} {W l : List Node}
    (h : ∀ pid, P = some pid → ¬Occurs pid l) (hP : P ≠ none) : graftAt P σ W l = l := by
  cases P with
  | none => exact absurd rfl hP
  | some pid => exact graft_none (h pid rfl)

/-- New nodes `N` grafted onto `d` at side `σ` of `P`, giving `d'`. -/
structure Graft (d d' : Doc) (N : List Node) (P : Option Id) (σ : Side) : Prop where
  wf : Wf d
  wf' : Wf d'
  mem : ∀ n, n ∈ d'.nodes ↔ n ∈ d.nodes ∨ n ∈ N
  fresh : ∀ x ∈ N, ∀ n ∈ d.nodes, x.id ≠ n.id
  noParent : ∀ n ∈ d.nodes, ∀ x ∈ N, n.parent ≠ some x.id
  attach : ∀ x ∈ N, (x.parent = P ∧ x.side = σ) ∨ ∃ z ∈ N, x.parent = some z.id
  empty : d.kids P σ = []
  rootR : P = none → σ = .R

namespace Graft
variable {d d' : Doc} {N : List Node} {P : Option Id} {σ : Side}

/-- Away from the graft, the children are the old ones. -/
theorem kids_eq (g : Graft d d' N P σ) {Q : Option Id} {s : Side} (hQ : ¬(Q = P ∧ s = σ))
    (hN : ∀ x ∈ N, Q ≠ some x.id) : d'.kids Q s = d.kids Q s := by
  apply eq_of_sortedN (kids_sorted g.wf' _ _) (kids_sorted g.wf _ _)
  intro n
  rw [mem_kids, mem_kids, g.mem]
  constructor
  · rintro ⟨hn | hn, hp, hs⟩
    · exact ⟨hn, hp, hs⟩
    · rcases g.attach n hn with ⟨hp', hs'⟩ | ⟨z, hz, e⟩
      · exact absurd ⟨by rw [← hp, hp'], by rw [← hs, hs']⟩ hQ
      · exact absurd (by rw [← hp, e]) (hN z hz)
  · rintro ⟨hn, hp, hs⟩; exact ⟨Or.inl hn, hp, hs⟩

/-- The traversal of the new subtrees. -/
abbrev W (_g : Graft d d' N P σ) : List Node := (d'.kids P σ).flatMap (T d')

theorem mem_old {g : Graft d d' N P σ} {n : Node} (h : n ∈ d.nodes) : n ∈ d'.nodes := (g.mem n).2 (Or.inl h)

/-- The two sides of a node's subtree share no id. -/
theorem lr_disjoint {e : Doc} (h : Wf e) {q x y : Node}
    (hx : x ∈ (e.kids (some q.id) .L).flatMap (T e)) (hy : y ∈ (e.kids (some q.id) .R).flatMap (T e)) :
    x.id ≠ y.id := by
  obtain ⟨a, ha, hx⟩ := List.mem_flatMap.1 hx
  obtain ⟨b, hb, hy⟩ := List.mem_flatMap.1 hy
  have ha' := mem_kids.1 ha
  have hb' := mem_kids.1 hb
  exact disjoint_ids h ha'.1 hb'.1 (fun e => by rw [e] at ha'; rw [ha'.2.2] at hb'; simp at hb')
    (by rw [ha'.2.1, hb'.2.1]) hx hy

theorem no_occ_below {e : Doc} (h : Wf e) {q : Node} {s : Side} :
    ¬Occurs q.id ((e.kids (some q.id) s).flatMap (T e)) := by
  rintro ⟨y, hy, ey⟩
  obtain ⟨c, hc, hy⟩ := List.mem_flatMap.1 hy
  have := Nat.lt_of_lt_of_le (kid_gt h hc) (trav_ge' h hy)
  rw [ey] at this; omega

/-- The graft lemma, for every old node's subtree. -/
theorem T_graft (g : Graft d d' N P σ) (pid : Id) (hP : P = some pid) :
    ∀ q ∈ d.nodes, T d' q = graft σ pid g.W (T d q) := by
  have main : ∀ q, q.id.c ≤ d'.maxCounter → q ∈ d.nodes → T d' q = graft σ pid g.W (T d q) := by
    apply measure_ind
    intro q hq' ih hq
    have hqm := node_le_max hq
    have ihk : ∀ s, (d.kids (some q.id) s).flatMap (T d') =
        (d.kids (some q.id) s).flatMap (fun c => graft σ pid g.W (T d c)) := by
      intro s
      apply flatMap_congr'
      intro c hc
      have hcn := (mem_kids.1 hc).1
      exact ih c (node_le_max (g.mem_old hcn)) (kid_gt g.wf hc) hcn
    have hN : ∀ x ∈ N, some q.id ≠ some x.id := fun x hx e => g.fresh x hx q hq (Option.some_inj.1 e).symm
    rw [T_eq g.wf' hq', T_eq g.wf hqm]
    by_cases hqp : q.id = pid
    · -- the graft point
      subst hqp
      have hother : ∀ s, s ≠ σ → d'.kids (some q.id) s = d.kids (some q.id) s := fun s hs =>
        g.kids_eq (fun ⟨_, h⟩ => hs h) hN
      have hself : d.kids (some q.id) σ = [] := by rw [← hP]; exact g.empty
      have clean : ∀ s, (d.kids (some q.id) s).flatMap (fun c => graft σ q.id g.W (T d c)) =
          (d.kids (some q.id) s).flatMap (T d) := by
        intro s
        apply flatMap_congr'
        intro c hc
        apply graft_none
        rintro ⟨y, hy, ey⟩
        have := Nat.lt_of_lt_of_le (kid_gt g.wf hc) (trav_ge' g.wf hy)
        rw [ey] at this; omega
      cases σ with
      | R =>
        rw [hother .L (by simp), ihk .L, clean .L, hself]
        simp only [List.flatMap_nil, W, hP]
        rw [graft_append_left _ (no_occ_below g.wf)]
        simp [graft, insAfter]
      | L =>
        rw [hother .R (by simp), ihk .R, clean .R, hself]
        simp only [List.flatMap_nil, W, hP, List.nil_append]
        simp [graft, insBefore]
    · have hk : ∀ s, d'.kids (some q.id) s = d.kids (some q.id) s := fun s =>
        g.kids_eq (fun ⟨h, _⟩ => hqp (Option.some_inj.1 (h.trans hP))) hN
      rw [hk .L, hk .R, ihk .L, ihk .R, ← graft_flatMap (kids_pairwise g.wf), ← graft_flatMap (kids_pairwise g.wf)]
      by_cases ho : Occurs pid ((d.kids (some q.id) .L).flatMap (T d))
      · rw [graft_append_right _ ho]
        congr 2
        apply graft_none
        rintro ⟨y, hy, ey⟩
        obtain ⟨x, hx, ex⟩ := ho
        exact lr_disjoint g.wf hx hy (by rw [ex, ey])
      · rw [graft_append_left _ ho, graft_cons_ne hqp, graft_none ho]
  exact fun q hq => main q (node_le_max (g.mem_old hq)) hq

/-- The graft lemma for the whole document. -/
theorem seq_graft (g : Graft d d' N P σ) : d'.seqSpec = graftAt P σ g.W d.seqSpec := by
  cases P with
  | none =>
    have hσ := g.rootR rfl
    subst hσ
    have : d.seqSpec = [] := by rw [seqSpec_eq, g.empty]; rfl
    rw [this, seqSpec_eq]; simp [graftAt, W]
  | some pid =>
    have hk : d'.kids none .R = d.kids none .R :=
      g.kids_eq (fun ⟨h, _⟩ => by simp at h) (fun _ _ e => by simp at e)
    rw [seqSpec_eq, seqSpec_eq, hk, graftAt, graft_flatMap (kids_pairwise g.wf)]
    apply flatMap_congr'
    intro c hc
    exact g.T_graft pid rfl c (mem_kids.1 hc).1

end Graft
end Tandem.Proofs
