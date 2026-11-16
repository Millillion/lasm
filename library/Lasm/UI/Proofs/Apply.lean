/-
The applier performs every patch the diff writes as Lasm.UI.Model says.

Lasm.UI.Model's `applyOps` gives a patch its meaning on the children of
one node, each op looking its nodes up among that node's children (and
`.sub i ops` among the children of child `i`). The applier
(Lasm.UI.Applier, the model of src/lasm-modules/ui-dom.mjs) performs the
same patch as the flat list of operations the decoder reads
(`Decode.Wire.ofOps`), looking every node up by id in one table for the
whole document, and the DOM refuses what it refuses. The two agree when

* the ids in the document are distinct and none is the root's (0), and
* the patch conforms (`confOps`, Proofs/Conform.lean): every node an op names is a child of its
  parent where the op runs, every insert or move is before such a child (or
  at the end) and never before the moved node itself, a text change is on a
  text node and attribute changes on an element (with the slots as the
  encoder sends them: `AttrOp.wire`), and every inserted subtree brings ids
  that are new: distinct, and in no node the session has had (`used`).

`run_ofOps` proves it: from a document with distinct ids, a conforming patch
is performed (`some`), giving exactly `applyOps`' children, and the ids stay
distinct. The proof follows the patch down the tree with a context (`Ctx`:
where the parent of the current ops is, and what is around it), in which a
lookup by id in the document is a lookup among the parent's children.
-/
import Lasm.UI.Proofs
import Lasm.UI.Proofs.Wire
import Lasm.UI.Proofs.Applier

namespace Lasm.UI.Applier
open Lasm.UI Lasm.UI.Model Lasm.UI.Decode

variable {Msg : Type}

/-! ## Ids -/

theorem ifN {c : Prop} [Decidable c] {α : Sort _} {t e : α} (h : ¬c) : (if c then t else e) = e := by simp [h]
theorem ifP {c : Prop} [Decidable c] {α : Sort _} {t e : α} (h : c) : (if c then t else e) = t := by simp [h]

theorem id_mem_ids (d : Dom) : d.id ∈ d.ids := by
  cases d <;> simp [ids_text, ids_elem, Dom.id]

theorem map_id_sub (k : List Dom) : ∀ x ∈ k.map Dom.id, x ∈ idsIn k := by
  induction k with
  | nil => simp
  | cons d ds ih =>
    intro x hx
    simp only [List.map_cons, List.mem_cons] at hx
    rw [idsIn_cons, List.mem_append]
    rcases hx with rfl | hx
    · exact .inl (id_mem_ids d)
    · exact .inr (ih x hx)

/-! ## Lookups that miss -/

mutual
theorem find_none (i : Nat) : ∀ d : Dom, i ∉ d.ids → d.find i = none
  | .text j s, h => by
    rw [ids_text] at h
    simp only [List.mem_singleton] at h
    rw [Dom.find, ifN (Ne.symm h)]
  | .elem j ns tag a cs, h => by
    rw [ids_elem] at h
    simp only [List.mem_cons, not_or] at h
    rw [Dom.find, ifN (Ne.symm h.1), findIn_none i cs h.2]
theorem findIn_none (i : Nat) : ∀ l : List Dom, i ∉ idsIn l → findIn i l = none
  | [], _ => by rw [findIn]
  | d :: ds, h => by
    rw [idsIn_cons, List.mem_append, not_or] at h
    rw [findIn, find_none i d h.1, findIn_none i ds h.2]
    rfl
end

mutual
theorem update_none (i : Nat) (g : Dom → Dom) : ∀ d : Dom, i ∉ d.ids → d.update i g = d
  | .text j s, h => by
    rw [ids_text] at h
    simp only [List.mem_singleton] at h
    rw [Dom.update, ifN (Ne.symm h)]
  | .elem j ns tag a cs, h => by
    rw [ids_elem] at h
    simp only [List.mem_cons, not_or] at h
    rw [Dom.update, ifN (Ne.symm h.1), updateIn_none i g cs h.2]
theorem updateIn_none (i : Nat) (g : Dom → Dom) : ∀ l : List Dom, i ∉ idsIn l → updateIn i g l = l
  | [], _ => by rw [updateIn]
  | d :: ds, h => by
    rw [idsIn_cons, List.mem_append, not_or] at h
    rw [updateIn, update_none i g d h.1, updateIn_none i g ds h.2]
end

mutual
theorem prune_none (i : Nat) : ∀ d : Dom, i ∉ d.ids → d.prune i = d
  | .text j s, _ => by rw [Dom.prune]
  | .elem j ns tag a cs, h => by
    rw [ids_elem] at h
    simp only [List.mem_cons, not_or] at h
    rw [Dom.prune, pruneIn_none i cs h.2]
theorem pruneIn_none (i : Nat) : ∀ l : List Dom, i ∉ idsIn l → pruneIn i l = l
  | [], _ => by rw [pruneIn]
  | d :: ds, h => by
    rw [idsIn_cons, List.mem_append, not_or] at h
    have hd : d.id ≠ i := fun e => h.1 (e ▸ id_mem_ids d)
    rw [pruneIn, ifN hd, prune_none i d h.1, pruneIn_none i ds h.2]
end

theorem findIn_append (i : Nat) (l r : List Dom) : findIn i (l ++ r) = (findIn i l).or (findIn i r) := by
  induction l with
  | nil => rw [findIn]; rfl
  | cons d ds ih => rw [List.cons_append, findIn, findIn, ih, Option.or_assoc]

theorem updateIn_append (i : Nat) (g : Dom → Dom) (l r : List Dom) :
    updateIn i g (l ++ r) = updateIn i g l ++ updateIn i g r := by
  induction l with
  | nil => rw [updateIn]; rfl
  | cons d ds ih => rw [List.cons_append, updateIn, updateIn, ih]; rfl

theorem pruneIn_append (i : Nat) (l r : List Dom) : pruneIn i (l ++ r) = pruneIn i l ++ pruneIn i r := by
  induction l with
  | nil => rw [pruneIn]; rfl
  | cons d ds ih =>
    rw [List.cons_append, pruneIn, pruneIn]
    split <;> simp [ih]

/-! ## Children of one parent -/

theorem find_self (d : Dom) : d.find d.id = some d := by
  cases d <;> simp [Dom.find, Dom.id]

theorem update_self (g : Dom → Dom) (d : Dom) : d.update d.id g = g d := by
  cases d <;> simp [Dom.update, Dom.id]

theorem not_mem_of_nodup {d : Dom} {ds : List Dom} {x : Nat} (h : (idsIn (d :: ds)).Nodup) (hx : x ∈ idsIn ds) :
    x ∉ d.ids := by
  rw [idsIn_cons, List.nodup_append] at h
  exact fun hd => h.2.2 x hd x hx rfl

theorem not_mem_of_nodup' {d : Dom} {ds : List Dom} {x : Nat} (h : (idsIn (d :: ds)).Nodup) (hx : x ∈ d.ids) :
    x ∉ idsIn ds := fun h' => not_mem_of_nodup h h' hx

theorem nodup_tail {d : Dom} {ds : List Dom} (h : (idsIn (d :: ds)).Nodup) : (idsIn ds).Nodup := by
  rw [idsIn_cons, List.nodup_append] at h
  exact h.2.1

theorem findId_none (i : Nat) (k : List Dom) (h : i ∉ k.map Dom.id) : findId i k = none := by
  induction k with
  | nil => rfl
  | cons d ds ih =>
    simp only [List.map_cons, List.mem_cons, not_or] at h
    simp [findId, Ne.symm h.1, ih h.2]

theorem modId_none (i : Nat) (g : Dom → Dom) (k : List Dom) (h : i ∉ k.map Dom.id) : modId i g k = k := by
  induction k with
  | nil => rfl
  | cons d ds ih =>
    simp only [List.map_cons, List.mem_cons, not_or] at h
    simp only [modId, List.map_cons, ifN (Ne.symm h.1), List.cons.injEq, true_and]
    exact ih h.2

theorem removeId_none (i : Nat) (k : List Dom) (h : i ∉ k.map Dom.id) : removeId i k = k := by
  induction k with
  | nil => rfl
  | cons d ds ih =>
    simp only [List.map_cons, List.mem_cons, not_or] at h
    simp only [removeId, List.filter_cons, ne_eq, Ne.symm h.1, not_false_eq_true, decide_true, ↓reduceIte,
      List.cons.injEq, true_and]
    exact ih h.2

/-- A child's id, looked up in the document of distinct ids, is the child. -/
theorem findIn_child (i : Nat) (k : List Dom) (h : (idsIn k).Nodup) (hi : i ∈ k.map Dom.id) :
    findIn i k = findId i k := by
  induction k with
  | nil => simp at hi
  | cons d ds ih =>
    by_cases hd : d.id = i
    · subst hd; rw [findIn, find_self]; simp [findId]
    · simp only [List.map_cons, List.mem_cons, Ne.symm hd, false_or] at hi
      rw [findIn, find_none i d (not_mem_of_nodup h (map_id_sub ds i hi)), ih (nodup_tail h) hi]
      simp [findId, hd]

theorem updateIn_child (i : Nat) (g : Dom → Dom) (k : List Dom) (h : (idsIn k).Nodup) (hi : i ∈ k.map Dom.id) :
    updateIn i g k = modId i g k := by
  induction k with
  | nil => simp at hi
  | cons d ds ih =>
    by_cases hd : d.id = i
    · subst hd
      have hn : d.id ∉ idsIn ds := not_mem_of_nodup' h (id_mem_ids d)
      have h' := modId_none _ g ds (fun hm => hn (map_id_sub ds _ hm))
      rw [updateIn, update_self, updateIn_none _ g ds hn]
      unfold modId at h' ⊢
      simp [h']
    · simp only [List.map_cons, List.mem_cons, Ne.symm hd, false_or] at hi
      rw [updateIn, update_none i g d (not_mem_of_nodup h (map_id_sub ds i hi)), ih (nodup_tail h) hi]
      simp [modId, hd]

theorem pruneIn_child (i : Nat) (k : List Dom) (h : (idsIn k).Nodup) (hi : i ∈ k.map Dom.id) :
    pruneIn i k = removeId i k := by
  induction k with
  | nil => simp at hi
  | cons d ds ih =>
    by_cases hd : d.id = i
    · subst hd
      have hn : d.id ∉ idsIn ds := not_mem_of_nodup' h (id_mem_ids d)
      have h' := removeId_none _ ds (fun hm => hn (map_id_sub ds _ hm))
      rw [pruneIn, ifP rfl, pruneIn_none _ ds hn]
      unfold removeId at h' ⊢
      simp only [ne_eq, decide_not] at h'
      simp [h']
    · simp only [List.map_cons, List.mem_cons, Ne.symm hd, false_or] at hi
      rw [pruneIn, ifN hd, prune_none i d (not_mem_of_nodup h (map_id_sub ds i hi)), ih (nodup_tail h) hi]
      simp [removeId, hd]

/-! ## Ids of the model's list operations -/

theorem perm_count {l l' : List Nat} (h : ∀ x, l.count x = l'.count x) : l.Perm l' := List.perm_iff_count.2 h

theorem ids_insertBefore (d : Dom) (b : Option Nat) (k : List Dom) :
    (idsIn (insertBefore d b k)).Perm (idsIn k ++ d.ids) := by
  cases b with
  | none => simp [insertBefore, idsIn_cons, idsIn_nil]
  | some x =>
    induction k with
    | nil => simp [insertBefore, idsIn_cons, idsIn_nil]
    | cons y l ih =>
      simp only [insertBefore]
      split
      · exact perm_count fun z => by simp [idsIn_cons, List.count_append]; omega
      · rw [idsIn_cons, idsIn_cons, List.append_assoc]
        exact ih.append_left _

theorem findId_mem {i : Nat} {k : List Dom} {d : Dom} (h : findId i k = some d) : d ∈ k ∧ d.id = i := by
  induction k with
  | nil => simp [findId] at h
  | cons y l ih =>
    simp only [findId] at h
    split at h
    · cases h; exact ⟨List.mem_cons_self .., by assumption⟩
    · exact ⟨List.mem_cons_of_mem _ (ih h).1, (ih h).2⟩

theorem findId_of_mem {i : Nat} {k : List Dom} (h : i ∈ k.map Dom.id) : ∃ d, findId i k = some d := by
  induction k with
  | nil => simp at h
  | cons y l ih =>
    simp only [findId]
    split
    · exact ⟨_, rfl⟩
    · simp only [List.map_cons, List.mem_cons] at h
      rcases h with h | h
      · exact absurd h.symm ‹_›
      · exact ih h

theorem ids_sub_of_mem {d : Dom} {k : List Dom} (h : d ∈ k) : ∀ x ∈ d.ids, x ∈ idsIn k := by
  induction k with
  | nil => simp at h
  | cons y l ih =>
    intro x hx
    rw [idsIn_cons, List.mem_append]
    rcases List.mem_cons.1 h with rfl | h
    · exact .inl hx
    · exact .inr (ih h x hx)

theorem ids_removeId_found {i : Nat} {k : List Dom} {n : Dom} (hnd : (idsIn k).Nodup) (h : findId i k = some n) :
    (idsIn (removeId i k) ++ n.ids).Perm (idsIn k) := by
  induction k with
  | nil => simp [findId] at h
  | cons y l ih =>
    by_cases hy : y.id = i
    · simp only [findId, hy, ↓reduceIte, Option.some.injEq] at h
      subst h
      have hn : y.id ∉ l.map Dom.id := fun hm => not_mem_of_nodup' hnd (id_mem_ids y) (map_id_sub l _ hm)
      have hr := removeId_none _ l hn
      have : removeId y.id (y :: l) = l := by
        unfold removeId at hr ⊢; simp only [ne_eq, decide_not] at hr; simp [hr]
      rw [hy] at this
      rw [this, idsIn_cons]
      exact List.perm_append_comm
    · simp only [findId, hy, ↓reduceIte] at h
      have : removeId i (y :: l) = y :: removeId i l := by simp [removeId, hy]
      rw [this, idsIn_cons, idsIn_cons, List.append_assoc]
      exact (ih (nodup_tail hnd) h).append_left _

theorem ids_removeId_sublist (i : Nat) (k : List Dom) : (idsIn (removeId i k)).Sublist (idsIn k) := by
  induction k with
  | nil => simp [removeId, idsIn_nil]
  | cons y l ih =>
    by_cases hy : y.id = i
    · have : removeId i (y :: l) = removeId i l := by simp [removeId, hy]
      rw [this, idsIn_cons]
      exact ih.trans (List.sublist_append_right _ _)
    · have : removeId i (y :: l) = y :: removeId i l := by simp [removeId, hy]
      rw [this, idsIn_cons, idsIn_cons]
      exact ih.append_left _

theorem ids_modId (i : Nat) (g : Dom → Dom) (hg : ∀ d, (g d).ids = d.ids) (k : List Dom) :
    idsIn (modId i g k) = idsIn k := by
  induction k with
  | nil => simp [modId, idsIn_nil]
  | cons y l ih =>
    have : modId i g (y :: l) = (if y.id = i then g y else y) :: modId i g l := by simp [modId]
    rw [this, idsIn_cons, idsIn_cons, ih]
    split <;> simp [hg]

theorem ids_setText (s : String) (d : Dom) : (Dom.setText s d).ids = d.ids := by
  cases d <;> simp [Dom.setText, ids_text, ids_elem]

theorem ids_modAttrs (g : Attrs → Attrs) (d : Dom) : (Dom.modAttrs g d).ids = d.ids := by
  cases d <;> simp [Dom.modAttrs, ids_text, ids_elem]

/-- A child, with the siblings before it and after it. -/
theorem findId_split {i : Nat} {k : List Dom} {d : Dom} (hnd : (idsIn k).Nodup) (h : findId i k = some d) :
    ∃ l r, k = l ++ d :: r ∧ i ∉ l.map Dom.id ∧ i ∉ r.map Dom.id := by
  induction k with
  | nil => simp [findId] at h
  | cons y t ih =>
    by_cases hy : y.id = i
    · simp only [findId, hy, ↓reduceIte, Option.some.injEq] at h
      subst h
      refine ⟨[], t, rfl, by simp, fun hm => ?_⟩
      rw [← hy] at hm
      exact not_mem_of_nodup' hnd (id_mem_ids y) (map_id_sub t _ hm)
    · simp only [findId, hy, ↓reduceIte] at h
      obtain ⟨l, r, rfl, hl, hr⟩ := ih (nodup_tail hnd) h
      exact ⟨y :: l, r, rfl, by simp [Ne.symm hy, hl], hr⟩

theorem modId_split (i : Nat) (g : Dom → Dom) (l r : List Dom) (d : Dom) (hd : d.id = i)
    (hl : i ∉ l.map Dom.id) (hr : i ∉ r.map Dom.id) : modId i g (l ++ d :: r) = l ++ g d :: r := by
  have h1 := modId_none i g l hl
  have h2 := modId_none i g r hr
  unfold modId at h1 h2 ⊢
  simp [List.map_append, h1, h2, hd]

/-! ## Contexts -/

/-- Where the parent of the current ops is: the root (`top`), or element `i`
(namespace, tag and attributes as given) between its siblings `l` and `r`
under the parent of context `c`. -/
inductive Ctx where
  | top
  | down (c : Ctx) (l : List Dom) (i : Nat) (ns : Ns) (tag : String) (a : Attrs) (r : List Dom)

/-- The root's children, with children `k` at the context's parent. -/
def Ctx.fill : Ctx → List Dom → List Dom
  | .top, k => k
  | .down c l i ns tag a r, k => c.fill (l ++ .elem i ns tag a k :: r)

/-- The parent's id (the root is 0). -/
def Ctx.pid : Ctx → Nat
  | .top => 0
  | .down _ _ i .. => i

/-- The ids outside the parent's children. -/
def Ctx.out : Ctx → List Nat
  | .top => []
  | .down c l i _ _ _ r => c.out ++ (idsIn l ++ i :: idsIn r)

/-- The ids outside the parent's children are distinct and none is 0. -/
def Ctx.Ok (c : Ctx) : Prop := c.out.Nodup ∧ 0 ∉ c.out

theorem down_ok {c : Ctx} {l : List Dom} {i ns tag a} {r : List Dom} (h : (Ctx.down c l i ns tag a r).Ok) :
    c.Ok ∧ i ∉ c.out ∧ i ∉ idsIn l ∧ i ∉ idsIn r ∧ i ≠ 0 := by
  obtain ⟨hnd, hz⟩ := h
  simp only [Ctx.out] at hnd hz
  rw [List.nodup_append] at hnd
  obtain ⟨h1, h2, h3⟩ := hnd
  rw [List.nodup_append] at h2
  obtain ⟨_, h22, h23⟩ := h2
  refine ⟨⟨h1, fun h0 => hz (List.mem_append_left _ h0)⟩, fun hi => h3 i hi i (by simp) rfl,
    fun hi => h23 i hi i (by simp) rfl, fun hi => (List.nodup_cons.1 h22).1 hi, fun h0 => hz (by simp [h0])⟩

theorem find_fill (c : Ctx) (h : c.Ok) (x : Nat) (hx : x ∉ c.out) (k : List Dom) : findIn x (c.fill k) = findIn x k := by
  induction c generalizing k with
  | top => rfl
  | down c l i ns tag a r ih =>
    have ho := down_ok h
    simp only [Ctx.out, List.mem_append, List.mem_cons, not_or] at hx
    rw [Ctx.fill, ih ho.1 hx.1, findIn_append, findIn_none x l hx.2.1, findIn, findIn_none x r hx.2.2.2, Dom.find,
      ifN (Ne.symm hx.2.2.1)]
    simp

theorem update_fill (c : Ctx) (h : c.Ok) (x : Nat) (g : Dom → Dom) (hx : x ∉ c.out) (k : List Dom) :
    updateIn x g (c.fill k) = c.fill (updateIn x g k) := by
  induction c generalizing k with
  | top => rfl
  | down c l i ns tag a r ih =>
    have ho := down_ok h
    simp only [Ctx.out, List.mem_append, List.mem_cons, not_or] at hx
    rw [Ctx.fill, ih ho.1 hx.1, updateIn_append, updateIn_none x g l hx.2.1, updateIn, updateIn_none x g r hx.2.2.2,
      Dom.update, ifN (Ne.symm hx.2.2.1)]
    rfl

theorem prune_fill (c : Ctx) (h : c.Ok) (x : Nat) (hx : x ∉ c.out) (k : List Dom) :
    pruneIn x (c.fill k) = c.fill (pruneIn x k) := by
  induction c generalizing k with
  | top => rfl
  | down c l i ns tag a r ih =>
    have ho := down_ok h
    simp only [Ctx.out, List.mem_append, List.mem_cons, not_or] at hx
    rw [Ctx.fill, ih ho.1 hx.1, pruneIn_append, pruneIn_none x l hx.2.1, pruneIn,
      ifN (show Dom.id (.elem i ns tag a k) ≠ x from Ne.symm hx.2.2.1), pruneIn_none x r hx.2.2.2, Dom.prune]
    rfl

theorem findPid_fill {c : Ctx} {l : List Dom} {i ns tag a} {r : List Dom} (h : (Ctx.down c l i ns tag a r).Ok)
    (k : List Dom) : findIn i ((Ctx.down c l i ns tag a r).fill k) = some (.elem i ns tag a k) := by
  have ho := down_ok h
  rw [Ctx.fill, find_fill c ho.1 i ho.2.1, findIn_append, findIn_none i l ho.2.2.1, findIn, findIn_none i r ho.2.2.2.1,
    Dom.find, ifP rfl]
  simp

theorem kidsOf_fill (c : Ctx) (h : c.Ok) (k : List Dom) : kidsOf c.pid (c.fill k) = some k := by
  cases c with
  | top => simp [kidsOf, Ctx.pid, Ctx.fill]
  | down c l i ns tag a r =>
    simp only [Ctx.pid, kidsOf, ifN (down_ok h).2.2.2.2, findPid_fill h]

theorem setKids_fill (c : Ctx) (h : c.Ok) (k k' : List Dom) : setKids c.pid k' (c.fill k) = c.fill k' := by
  cases c with
  | top => simp [setKids, Ctx.pid, Ctx.fill]
  | down c l i ns tag a r =>
    have ho := down_ok h
    show setKids i k' ((Ctx.down c l i ns tag a r).fill k) = _
    rw [setKids, ifN ho.2.2.2.2, Ctx.fill, update_fill c ho.1 i _ ho.2.1, updateIn_append, updateIn_none i _ l ho.2.2.1, updateIn,
      updateIn_none i _ r ho.2.2.2.1, Dom.update, ifP rfl]
    rfl

/-- What holds of the document at the context: its ids are distinct, none is
0, and every one has been used; 0 is used. -/
structure Inv (c : Ctx) (k : List Dom) (used : List Nat) : Prop where
  nd : (c.out ++ idsIn k).Nodup
  z : 0 ∉ c.out ++ idsIn k
  sub : ∀ x ∈ c.out ++ idsIn k, x ∈ used
  zu : 0 ∈ used

theorem Inv.ok {c : Ctx} {k : List Dom} {u : List Nat} (h : Inv c k u) : c.Ok :=
  ⟨(List.nodup_append.1 h.nd).1, fun h0 => h.z (List.mem_append_left _ h0)⟩

theorem Inv.knd {c : Ctx} {k : List Dom} {u : List Nat} (h : Inv c k u) : (idsIn k).Nodup :=
  (List.nodup_append.1 h.nd).2.1

theorem Inv.notOut {c : Ctx} {k : List Dom} {u : List Nat} (h : Inv c k u) {x : Nat} (hx : x ∈ idsIn k) :
    x ∉ c.out := fun ho => (List.nodup_append.1 h.nd).2.2 x ho x hx rfl

theorem Inv.ne0 {c : Ctx} {k : List Dom} {u : List Nat} (h : Inv c k u) {x : Nat} (hx : x ∈ idsIn k) : x ≠ 0 :=
  fun e => h.z (List.mem_append_right _ (e ▸ hx))

theorem Inv.pid {c : Ctx} {k : List Dom} {u : List Nat} (h : Inv c k u) : c.pid ∉ idsIn k := by
  cases c with
  | top => exact fun hm => h.z (List.mem_append_right _ hm)
  | down c l i ns tag a r =>
    exact fun hm => h.notOut hm (by simp [Ctx.out, Ctx.pid])

theorem Inv.perm {c : Ctx} {k k' : List Dom} {u : List Nat} (h : Inv c k u) (hp : (idsIn k').Perm (idsIn k)) :
    Inv c k' u :=
  have hp' := hp.append_left c.out
  ⟨hp'.nodup_iff.2 h.nd, fun h0 => h.z (hp'.mem_iff.1 h0), fun x hx => h.sub x (hp'.mem_iff.1 hx), h.zu⟩

theorem Inv.sublist {c : Ctx} {k k' : List Dom} {u : List Nat} (h : Inv c k u) (hs : (idsIn k').Sublist (idsIn k)) :
    Inv c k' u :=
  have hs' := hs.append_left c.out
  ⟨hs'.nodup h.nd, fun h0 => h.z (hs'.subset h0), fun x hx => h.sub x (hs'.subset hx), h.zu⟩

theorem Inv.insert {c : Ctx} {k k' : List Dom} {u xs : List Nat} (h : Inv c k u) (hf : fresh xs u = true)
    (hp : (idsIn k').Perm (idsIn k ++ xs)) : Inv c k' (u ++ xs) := by
  simp only [fresh, Bool.and_eq_true, decide_eq_true_eq, List.all_eq_true] at hf
  have hf2 : ∀ x ∈ xs, x ∉ u := fun x hx => by simpa using hf.2 x hx
  have hp' : (c.out ++ idsIn k').Perm ((c.out ++ idsIn k) ++ xs) := by
    rw [List.append_assoc]; exact hp.append_left c.out
  refine ⟨hp'.nodup_iff.2 (List.nodup_append.2 ⟨h.nd, hf.1, fun a ha b hb e => hf2 b hb (e ▸ h.sub a ha)⟩),
    fun h0 => ?_, fun x hx => ?_, List.mem_append_left _ h.zu⟩
  · rcases List.mem_append.1 (hp'.mem_iff.1 h0) with h0 | h0
    · exact h.z h0
    · exact hf2 0 h0 h.zu
  · rcases List.mem_append.1 (hp'.mem_iff.1 hx) with hx | hx
    · exact List.mem_append_left _ (h.sub x hx)
    · exact List.mem_append_right _ hx

theorem inv_down {c : Ctx} {l : List Dom} {j ns tag a} {r kk : List Dom} {u : List Nat} :
    Inv c (l ++ .elem j ns tag a kk :: r) u ↔ Inv (.down c l j ns tag a r) kk u := by
  have hp : ((Ctx.down c l j ns tag a r).out ++ idsIn kk).Perm (c.out ++ idsIn (l ++ .elem j ns tag a kk :: r)) :=
    perm_count fun x => by simp [Ctx.out, idsIn_cons, ids_elem, List.count_append, List.count_cons]; omega
  constructor
  · intro h
    exact ⟨hp.nodup_iff.2 h.nd, fun h0 => h.z (hp.mem_iff.1 h0), fun x hx => h.sub x (hp.mem_iff.1 hx), h.zu⟩
  · intro h
    exact ⟨hp.nodup_iff.1 h.nd, fun h0 => h.z (hp.mem_iff.2 h0), fun x hx => h.sub x (hp.mem_iff.2 hx), h.zu⟩

/-! ## The applier performs a conforming patch -/

theorem run_append (ws ws' : List Wire) (f : List Dom) : run (ws ++ ws') f = (run ws f).bind (run ws') := by
  induction ws generalizing f with
  | nil => simp [run]
  | cons w ws ih =>
    simp only [List.cons_append, run]
    cases step w f <;> simp [ih]

theorem run_single (w : Wire) (f : List Dom) : run [w] f = step w f := by
  simp only [run]
  cases step w f <;> rfl

theorem place_anchored (d : Dom) (b : Option Nat) (k : List Dom) (h : anchored b k = true) :
    place d b k = some (insertBefore d b k) := by
  cases b with
  | none => simp [place, insertBefore]
  | some x =>
    simp only [anchored, List.contains_iff_mem] at h
    simp [place, h]

mutual
theorem sim_op : ∀ (o : Op Msg) (c : Ctx) (k : List Dom) (used u : List Nat), Inv c k used →
    confOp used o k = some u →
    run (Wire.ofOp c.pid o) (c.fill k) = some (c.fill (applyOp o k)) ∧ Inv c (applyOp o k) u
  | .insert n b, c, k, used, u, hI, hc => by
    simp only [confOp] at hc
    split at hc
    · rename_i hcond
      cases hc
      simp only [Bool.and_eq_true] at hcond
      rw [Wire.ofOp, run_single, applyOp]
      refine ⟨?_, hI.insert hcond.1 (ids_insertBefore _ _ _)⟩
      simp only [step, kidsOf_fill c hI.ok, place_anchored _ _ _ hcond.2, Option.map_some, setKids_fill c hI.ok]
    · cases hc
  | .move i b, c, k, used, u, hI, hc => by
    simp only [confOp] at hc
    split at hc
    · rename_i hcond
      cases hc
      simp only [Bool.and_eq_true, List.contains_iff_mem, bne_iff_ne, ne_eq] at hcond
      obtain ⟨⟨hi, ha⟩, hb⟩ := hcond
      obtain ⟨n, hn⟩ := findId_of_mem hi
      have hik : i ∈ idsIn k := map_id_sub k i hi
      have hfind : findIn i (c.fill k) = some n := by
        rw [find_fill c hI.ok i (hI.notOut hik), findIn_child i k hI.knd hi, hn]
      have hprune : pruneIn i (c.fill k) = c.fill (removeId i k) := by
        rw [prune_fill c hI.ok i (hI.notOut hik), pruneIn_child i k hI.knd hi]
      have hp : c.pid ∉ n.ids := fun hm => hI.pid (ids_sub_of_mem (findId_mem hn).1 _ hm)
      have hres : applyOp (Msg := Msg) (.move i b) k = insertBefore n b (removeId i k) := by rw [applyOp, hn]
      rw [Wire.ofOp, run_single, hres]
      refine ⟨?_, hI.perm ((ids_insertBefore _ _ _).trans (ids_removeId_found hI.knd hn))⟩
      cases b with
      | none =>
        simp [step, hI.ne0 hik, hfind, hp, kidsOf_fill c hI.ok, hprune, setKids_fill c hI.ok, insertBefore]
      | some x =>
        simp only [anchored, List.contains_iff_mem] at ha
        have hx : x ≠ i := fun e => hb (by rw [e])
        simp [step, hI.ne0 hik, hfind, hp, kidsOf_fill c hI.ok, ha, hx, hprune, setKids_fill c hI.ok]
    · cases hc
  | .remove i, c, k, used, u, hI, hc => by
    simp only [confOp] at hc
    split at hc
    · rename_i hi
      cases hc
      simp only [List.contains_iff_mem] at hi
      obtain ⟨n, hn⟩ := findId_of_mem hi
      have hik := map_id_sub k i hi
      rw [Wire.ofOp, run_single, applyOp]
      refine ⟨?_, hI.sublist (ids_removeId_sublist i k)⟩
      simp [step, hI.ne0 hik, find_fill c hI.ok i (hI.notOut hik), findIn_child i k hI.knd hi, hn,
        prune_fill c hI.ok i (hI.notOut hik), pruneIn_child i k hI.knd hi]
    · cases hc
  | .clear, c, k, used, u, hI, hc => by
    simp only [confOp, Option.some.injEq] at hc
    subst hc
    rw [Wire.ofOp, run_single, applyOp]
    refine ⟨?_, hI.sublist (by simp [idsIn_nil])⟩
    cases c with
    | top => simp [step, Ctx.pid, Ctx.fill]
    | down c l i ns tag a r =>
      have ho := down_ok hI.ok
      have hs := setKids_fill _ hI.ok k []
      simp only [Ctx.pid] at hs
      show step (.clear i) _ = _
      simp [step, ho.2.2.2.2, findPid_fill hI.ok, hs]
  | .text i s, c, k, used, u, hI, hc => by
    simp only [confOp] at hc
    cases hfi : findId i k with
    | none => simp [hfi] at hc
    | some d =>
      cases d with
      | elem _ _ _ _ _ => simp [hfi] at hc
      | text j s0 =>
        simp only [hfi, Option.some.injEq] at hc
        subst hc
        have hm := findId_mem hfi
        have hi : i ∈ k.map Dom.id := List.mem_map.2 ⟨_, hm.1, hm.2⟩
        have hik := map_id_sub k i hi
        rw [Wire.ofOp, run_single, applyOp]
        refine ⟨?_, hI.perm (by rw [ids_modId _ _ (ids_setText s)])⟩
        simp [step, hI.ne0 hik, find_fill c hI.ok i (hI.notOut hik), findIn_child i k hI.knd hi, hfi,
          update_fill c hI.ok i _ (hI.notOut hik), updateIn_child i _ k hI.knd hi]
  | .attrs i aops, c, k, used, u, hI, hc => by
    simp only [confOp] at hc
    cases hfi : findId i k with
    | none => simp [hfi] at hc
    | some d =>
      cases d with
      | text _ _ => simp [hfi] at hc
      | elem j ns tag a kk =>
        simp only [hfi] at hc
        split at hc
        · rename_i hw
          cases hc
          have hw' : aops.map AttrOp.wire = aops := by simpa using hw
          have hm := findId_mem hfi
          have hi : i ∈ k.map Dom.id := List.mem_map.2 ⟨_, hm.1, hm.2⟩
          have hik := map_id_sub k i hi
          rw [Wire.ofOp, run_single, hw', applyOp]
          refine ⟨?_, hI.perm (by rw [ids_modId _ _ (ids_modAttrs _)])⟩
          simp [step, hI.ne0 hik, find_fill c hI.ok i (hI.notOut hik), findIn_child i k hI.knd hi, hfi,
            update_fill c hI.ok i _ (hI.notOut hik), updateIn_child i _ k hI.knd hi]
        · cases hc
  | .sub i os, c, k, used, u, hI, hc => by
    simp only [confOp] at hc
    cases hfi : findId i k with
    | none => simp [hfi] at hc
    | some d =>
      cases d with
      | text _ _ => simp [hfi] at hc
      | elem j ns tag a kk =>
        simp only [hfi] at hc
        have hm := findId_mem hfi
        have hj : j = i := hm.2
        subst hj
        obtain ⟨l, r, hk, hl, hr⟩ := findId_split hI.knd hfi
        subst hk
        have ih := sim_ops os (.down c l j ns tag a r) kk used u (inv_down.1 hI) hc
        rw [Wire.ofOp, applyOp, modId_split j _ l r (.elem j ns tag a kk) rfl hl hr]
        exact ⟨ih.1, inv_down.2 ih.2⟩
theorem sim_ops : ∀ (os : List (Op Msg)) (c : Ctx) (k : List Dom) (used u : List Nat), Inv c k used →
    confOps used os k = some u →
    run (Wire.ofOps c.pid os) (c.fill k) = some (c.fill (applyOps os k)) ∧ Inv c (applyOps os k) u
  | [], c, k, used, u, hI, hc => by
    simp only [confOps, Option.some.injEq] at hc
    subst hc
    rw [Wire.ofOps, applyOps]
    exact ⟨rfl, hI⟩
  | o :: os, c, k, used, u, hI, hc => by
    simp only [confOps] at hc
    cases h1 : confOp used o k with
    | none => simp [h1] at hc
    | some u1 =>
      simp only [h1] at hc
      have a := sim_op o c k used u1 hI h1
      have b := sim_ops os c (applyOp o k) u1 u a.2 hc
      rw [Wire.ofOps, run_append, a.1, applyOps]
      simpa using b
end

/-- **The applier performs every conforming patch as the model says.** From
a document whose ids are distinct, none 0 and all used, the operations the
decoder reads from a conforming patch on the root's children are all
performed (none throws), and leave exactly `applyOps`' children, whose ids
are again distinct, none 0 and all used. -/
theorem run_ofOps (ops : List (Op Msg)) (f : List Dom) (used u : List Nat) (hnd : (idsIn f).Nodup)
    (hz : 0 ∉ idsIn f) (hsub : ∀ x ∈ idsIn f, x ∈ used) (hzu : 0 ∈ used) (hc : confOps used ops f = some u) :
    run (Wire.ofOps 0 ops) f = some (applyOps ops f) ∧ (idsIn (applyOps ops f)).Nodup ∧
      0 ∉ idsIn (applyOps ops f) ∧ (∀ x ∈ idsIn (applyOps ops f), x ∈ u) ∧ 0 ∈ u := by
  have h := sim_ops ops .top f used u ⟨by simpa [Ctx.out] using hnd, by simpa [Ctx.out] using hz,
    by simpa [Ctx.out] using hsub, hzu⟩ hc
  exact ⟨h.1, by simpa [Ctx.out] using h.2.nd, by simpa [Ctx.out] using h.2.z, by simpa [Ctx.out] using h.2.sub, h.2.zu⟩

/-! ## Sessions: the diff, the encoding and the applier together -/

/-- The patch of each frame of a session (on the root's children) and the
DOM it should leave: each frame diffs the live tree against the next view,
as the runtime does (`Session.step`). -/
def trace : Proofs.Session Msg → List (List (Html Msg)) → List ((Array (Op Msg) × Nat) × List Dom)
  | _, [] => []
  | s, v :: vs => (((diff s.live v s.next).ops, 0), (diff s.live v s.next).live.map toDom) :: trace (s.step v) vs

theorem ids_lt_of_WFn {next : Nat} {x : Live Msg} (h : Proofs.WFn next x) : ∀ y ∈ (toDom x).ids, y < next := by
  induction h with
  | text hi => intro y hy; simp [ids_text] at hy; omega
  | elem hi _ _ ih =>
    intro y hy
    simp only [Proofs.toDom_elem, ids_elem, List.mem_cons, mem_idsIn, List.mem_map] at hy
    rcases hy with rfl | ⟨_, ⟨c, hc, rfl⟩, hy⟩
    · exact hi
    · exact ih c hc y hy

theorem ids_lt_of_WF {next : Nat} {l : List (Live Msg)} (h : Proofs.WF l next) : ∀ y ∈ idsIn (l.map toDom), y < next := by
  intro y hy
  obtain ⟨d, hd, hy⟩ := mem_idsIn.1 hy
  obtain ⟨x, hx, rfl⟩ := List.mem_map.1 hd
  exact ids_lt_of_WFn (h.1 x hx) y hy

theorem frames_trace (views : List (List (Html Msg))) :
    ∀ (s : Proofs.Session Msg) (t : Encode.Tables) (st : State), Proofs.Wire.Synced t st → Proofs.WF s.live s.next →
      0 < s.next → (idsIn (s.live.map toDom)).Nodup → 0 ∉ idsIn (s.live.map toDom) →
      frames st (s.live.map toDom) (Decode.encodeAll t ((trace s views).map Prod.fst)) =
        (trace s views).map fun x => some x.2 := by
  induction views with
  | nil => intro s t st _ _ _ _ _; simp [trace, Decode.encodeAll, frames]
  | cons v vs ih =>
    intro s t st hsy hwf hpos hnd hz
    obtain ⟨u, hu⟩ := Option.isSome_iff_exists.1 (Proofs.diff_conforms s.live v s.next hwf)
    have hd := Proofs.diff_correct s.live v s.next hwf
    have hr := run_ofOps _ _ _ _ hnd hz (fun x hx => List.mem_range.2 (ids_lt_of_WF hwf x hx))
      (List.mem_range.2 hpos) hu
    rw [hd.1] at hr
    obtain ⟨st', hdec, hsy'⟩ := Proofs.Wire.frame_decodes t st (diff s.live v s.next).ops 0 hsy
    have hframe : frame st (s.live.map toDom) (Encode.frame t (diff s.live v s.next).ops 0).1 =
        some ((diff s.live v s.next).live.map toDom, st') := by
      simp [frame, hdec, hr.1]
    simp only [trace, List.map_cons, Decode.encodeAll, frames, hframe]
    congr 1
    exact ih (s.step v) _ st' hsy' hd.2.2.1 (by have := hd.2.2.2; simp only [Proofs.Session.step]; omega)
      hr.2.1 hr.2.2.1

/-- The applier, reading every frame of a session from an empty root,
leaves after each frame the DOM of the live tree (the diff's patches
conform: `Proofs.diff_conforms`). -/
theorem session_applier (views : List (List (Html Msg))) :
    frames {} [] (Decode.encodeAll {} ((trace Proofs.Session.empty views).map Prod.fst)) =
      (trace Proofs.Session.empty views).map fun x => some x.2 :=
  frames_trace views Proofs.Session.empty {} {} Proofs.Wire.synced_empty ⟨by simp [Proofs.Session.empty], by
    simp [Proofs.Session.empty]⟩ (by simp [Proofs.Session.empty]) (by simp [Proofs.Session.empty, idsIn_nil])
    (by simp [Proofs.Session.empty, idsIn_nil])

/-! ## Hydration -/

mutual
/-- A node without its attribute slots: its id, kind, namespace, tag, text
and children. -/
def _root_.Lasm.UI.Model.Dom.bare : Dom → Dom
  | .text i s => .text i s
  | .elem i ns tag _ cs => .elem i ns tag (fun _ => none) (bareIn cs)
/-- Nodes without their attribute slots. -/
def bareIn : List Dom → List Dom
  | [] => []
  | d :: ds => d.bare :: bareIn ds
end

mutual
theorem hydrate_bare : ∀ (c : Server) (d : Dom), (hydrate c d).bare = d.bare
  | .elem ns tag a cs, .elem i ns' tag' a' ds => by
    rw [hydrate, Dom.bare, Dom.bare, hydrateIn_bare cs ds]
  | .text _, d => by rw [hydrate]; all_goals (intros; simp_all)
  | .comment, d => by rw [hydrate]; all_goals (intros; simp_all)
  | .elem .., .text .. => by rw [hydrate]; all_goals (intros; simp_all)
theorem hydrateIn_bare : ∀ (cs : List Server) (ds : List Dom), bareIn (hydrateIn cs ds) = bareIn ds
  | _, [] => by rw [hydrateIn]
  | [], d :: ds => by rw [hydrateIn]; all_goals (intros; simp_all)
  | .comment :: cs, d :: ds => by rw [hydrateIn, hydrateIn_bare cs (d :: ds)]
  | .text s :: cs, d :: ds => by
    rw [hydrateIn]
    rotate_left; · intros; simp_all
    split
    · rw [bareIn, bareIn, hydrate_bare, hydrateIn_bare cs ds]
    · rw [bareIn, bareIn, hydrateIn_bare (.text s :: cs) ds]
  | .elem ns tag a kcs :: cs, d :: ds => by
    rw [hydrateIn]
    rotate_left; · intros; simp_all
    split
    · rw [bareIn, bareIn, hydrate_bare, hydrateIn_bare cs ds]
    · rw [bareIn, bareIn, hydrateIn_bare (.elem ns tag a kcs :: cs) ds]
end

/-- A server DOM that renders the nodes `ds`: one server node for each, in
order, of the same kind (a text node, of any text; an element of the same
namespace and tag, its children rendering the element's, its attribute
slots among the element's with the same values), with comments anywhere
(Lasm.UI.render separates adjacent text nodes with them). -/
inductive Rendered : List Server → List Dom → Prop
  | nil : Rendered [] []
  | comment {cs ds} : Rendered cs ds → Rendered (.comment :: cs) ds
  | text {cs ds s' i s} : Rendered cs ds → Rendered (.text s' :: cs) (.text i s :: ds)
  | elem {cs ds ns tag a kcs i a' kds} : (∀ k v, a k = some v → a' k = some v) → Rendered kcs kds → Rendered cs ds →
      Rendered (.elem ns tag a kcs :: cs) (.elem i ns tag a' kds :: ds)

theorem merge_sub {a a' : Attrs} (h : ∀ k v, a k = some v → a' k = some v) : merge a' a = a' := by
  funext k
  simp only [merge]
  cases h' : a' k with
  | some v => rfl
  | none =>
    cases ha : a k with
    | none => rfl
    | some v => exact absurd (h k v ha) (by simp [h'])

theorem hydrateIn_rendered {cs : List Server} {ds : List Dom} (h : Rendered cs ds) : hydrateIn cs ds = ds := by
  induction h with
  | nil => rw [hydrateIn]
  | @comment cs ds _ ih =>
    cases ds with
    | nil => rw [hydrateIn]
    | cons d ds => rw [hydrateIn, ih]
  | text _ ih =>
    rw [hydrateIn]
    · simp [adopts, hydrate, ih]
    · intros; simp_all
  | elem hsub _ _ ihk ih =>
    rw [hydrateIn]
    · simp [adopts, hydrate, ih, ihk, merge_sub hsub]
    · intros; simp_all

theorem insertAll_inserts {β : Type} (val : β → Html Msg) (b : Option Nat) (bs : List β) :
    ∀ (n : Nat) (ops : Array (Op Msg)) (acc : Array (Live Msg)), ∃ cs : List (Live Msg),
      (insertAll val b bs n ops acc).1.toList = ops.toList ++ cs.map (fun c => Op.insert c b) ∧
      (insertAll val b bs n ops acc).2.1.toList = acc.toList ++ cs := by
  induction bs with
  | nil => intro n ops acc; exact ⟨[], by simp [insertAll], by simp [insertAll]⟩
  | cons x xs ih =>
    intro n ops acc
    obtain ⟨cs, h1, h2⟩ := ih (create (val x) n).2 (ops.push (.insert (create (val x) n).1 b)) (acc.push (create (val x) n).1)
    refine ⟨(create (val x) n).1 :: cs, ?_, ?_⟩
    · rw [insertAll, h1]; simp
    · rw [insertAll, h2]; simp

/-- The first render's patch only appends new nodes under the root. -/
theorem mountOps_appends (view : List (Html Msg)) (next : Nat) :
    (mountOps view next).ops.toList = (mountOps view next).live.map fun c => Op.insert c none := by
  cases view with
  | nil => simp [mountOps, diff, diffChildren]
  | cons h hs =>
    simp only [mountOps, diff, diffChildren, prefixPhase]
    obtain ⟨cs, h1, h2⟩ := insertAll_inserts id (none : Option Nat) (h :: hs) next #[] (Array.emptyWithCapacity (h :: hs).length)
    simp only [Array.emptyWithCapacity_eq, Array.toList_empty, List.nil_append] at h1 h2
    simp [h1, h2]

theorem mapM_rootAppend (l : List (Live Msg)) :
    (Wire.ofOps 0 (l.map fun c => Op.insert c none)).mapM rootAppend = some (l.map toDom) := by
  induction l with
  | nil => simp [Wire.ofOps]
  | cons c cs ih => simp [Wire.ofOps, Wire.ofOp, rootAppend, ih]

/-- Hydrating with the first frame: the applier reads the encoded first
render and adopts the server's nodes. -/
theorem hydrate_first (view : List (Html Msg)) (server : List Server) :
    ∃ ws st, Decode.frame {} (Encode.frame {} (mountOps view 1).ops 0).1 = some (ws, st) ∧
      hydrateFrame server ws = some (hydrateIn server ((mountOps view 1).live.map toDom)) := by
  obtain ⟨st, hdec, _⟩ := Proofs.Wire.frame_decodes {} {} (mountOps view 1).ops 0 Proofs.Wire.synced_empty
  refine ⟨_, st, hdec, ?_⟩
  simp [hydrateFrame, mountOps_appends, mapM_rootAppend]

end Lasm.UI.Applier
