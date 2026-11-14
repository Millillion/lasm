/-
What it means for a patch to conform (`confOps`), the condition under which
the applier (Lasm.UI.Applier) performs it as Lasm.UI.Model says
(Proofs/Apply.lean: `run_ofOps`), and the facts the diff's proofs use to
show that its patches conform (Proofs/Children, Proofs/TwoEnded,
Proofs/Diff: `Proofs.diff_conforms`).
-/
import Lasm.UI.Proofs.Lists
import Lasm.UI.Proofs.Applier

namespace Lasm.UI.Applier
open Lasm.UI Lasm.UI.Model Lasm.UI.Decode

variable {Msg : Type}

/-! ## Conforming patches -/

/-- `before` is a child of the parent, or the end. -/
def anchored (b : Option Nat) (k : List Dom) : Bool :=
  match b with
  | none => true
  | some x => (k.map Dom.id).contains x

/-- The ids are distinct and none is in `used`. -/
def fresh (xs used : List Nat) : Bool := decide xs.Nodup && xs.all fun x => !used.contains x

mutual
/-- Whether a patch on children `k` conforms, and the ids used after it
(`none`: it does not conform). -/
def confOps (used : List Nat) : List (Op Msg) → List Dom → Option (List Nat)
  | [], _ => some used
  | o :: os, k =>
    match confOp used o k with
    | some u => confOps u os (applyOp o k)
    | none => none
/-- Whether one op on children `k` conforms. -/
def confOp (used : List Nat) : Op Msg → List Dom → Option (List Nat)
  | .insert n b, k => if fresh (toDom n).ids used && anchored b k then some (used ++ (toDom n).ids) else none
  | .move i b, k => if (k.map Dom.id).contains i && anchored b k && b != some i then some used else none
  | .remove i, k => if (k.map Dom.id).contains i then some used else none
  | .clear, _ => some used
  | .text i _, k =>
    match findId i k with
    | some (.text ..) => some used
    | _ => none
  | .attrs i aops, k =>
    match findId i k with
    | some (.elem ..) => if aops.map AttrOp.wire == aops then some used else none
    | _ => none
  | .sub i os, k =>
    match findId i k with
    | some (.elem _ _ _ _ kk) => confOps used os kk
    | _ => none
end

/-! ## Ids -/

theorem idsIn_nil : idsIn [] = [] := by rw [idsIn]

theorem idsIn_cons (d : Dom) (ds : List Dom) : idsIn (d :: ds) = d.ids ++ idsIn ds := by rw [idsIn]

@[simp] theorem idsIn_append (l r : List Dom) : idsIn (l ++ r) = idsIn l ++ idsIn r := by
  induction l with
  | nil => simp [idsIn_nil]
  | cons d ds ih => simp [idsIn_cons, ih]

theorem ids_text (i : Nat) (s : String) : (Dom.text i s).ids = [i] := by rw [Dom.ids]

theorem ids_elem (i ns tag a cs) : (Dom.elem i ns tag a cs).ids = i :: idsIn cs := by rw [Dom.ids]

theorem mem_idsIn {x : Nat} {l : List Dom} : x ∈ idsIn l ↔ ∃ d ∈ l, x ∈ d.ids := by
  induction l with
  | nil => simp [idsIn_nil]
  | cons d ds ih => simp [idsIn_cons, ih]


end Lasm.UI.Applier

namespace Lasm.UI.Proofs
open Lasm.UI Lasm.UI.Model Lasm.UI.Applier

variable {Msg : Type}

/-! ## Unfolding -/

theorem confOps_nil (used : List Nat) (k : List Dom) : confOps (Msg := Msg) used [] k = some used := by
  rw [confOps]

theorem confOps_cons (used : List Nat) (o : Op Msg) (os : List (Op Msg)) (k : List Dom) :
    confOps used (o :: os) k = (confOp used o k).bind fun u => confOps u os (applyOp o k) := by
  rw [confOps]; cases confOp used o k <;> rfl

theorem confOps_append (xs ys : List (Op Msg)) :
    ∀ used k, confOps used (xs ++ ys) k = (confOps used xs k).bind fun u => confOps u ys (applyOps xs k) := by
  induction xs with
  | nil => intro used k; simp [confOps_nil]
  | cons x xs ih =>
    intro used k
    simp only [List.cons_append, confOps_cons, ih, applyOps_cons]
    cases confOp used x k <;> simp

theorem confOps_single (used : List Nat) (o : Op Msg) (k : List Dom) : confOps used [o] k = confOp used o k := by
  rw [confOps_cons]; cases confOp used o k <;> simp [confOps_nil]

/-! ## Conformance from bounded used ids -/

/-- The ops `xs` conform on the children `k` from any used ids below `n`,
and leave the used ids below `m`. -/
def LConf (k : List Dom) (xs : List (Op Msg)) (n m : Nat) : Prop :=
  ∀ used : List Nat, (∀ x ∈ used, x < n) → ∃ u, confOps used xs k = some u ∧ ∀ x ∈ u, x < m

/-- The ops so far conform from `used0` on the children `dom0`, and leave the
used ids below `n`. -/
def Conf (used0 : List Nat) (dom0 : List Dom) (ops : List (Op Msg)) (n : Nat) : Prop :=
  ∃ u, confOps used0 ops dom0 = some u ∧ ∀ x ∈ u, x < n

theorem Conf.nil {used0 : List Nat} {dom0 : List Dom} {n : Nat} (h : ∀ x ∈ used0, x < n) :
    Conf (Msg := Msg) used0 dom0 [] n :=
  ⟨used0, confOps_nil .., h⟩

theorem Conf.mono {used0 : List Nat} {dom0 : List Dom} {ops : List (Op Msg)} {n m : Nat} (h : Conf used0 dom0 ops n)
    (hle : n ≤ m) : Conf used0 dom0 ops m := by
  obtain ⟨u, hu, hlt⟩ := h
  exact ⟨u, hu, fun x hx => Nat.lt_of_lt_of_le (hlt x hx) hle⟩

theorem Conf.step {used0 : List Nat} {dom0 k : List Dom} {ops xs : List (Op Msg)} {n m : Nat}
    (h : Conf used0 dom0 ops n) (hk : applyOps ops dom0 = k) (hx : LConf k xs n m) : Conf used0 dom0 (ops ++ xs) m := by
  obtain ⟨u, hu, hlt⟩ := h
  obtain ⟨u', hu', hlt'⟩ := hx u hlt
  exact ⟨u', by rw [confOps_append, hu]; simp [hk, hu'], hlt'⟩

theorem LConf.append {k : List Dom} {xs ys : List (Op Msg)} {n m p : Nat} (hx : LConf k xs n m)
    (hy : LConf (applyOps xs k) ys m p) : LConf k (xs ++ ys) n p := by
  intro used hu
  obtain ⟨u, h1, h2⟩ := hx used hu
  obtain ⟨u', h3, h4⟩ := hy u h2
  exact ⟨u', by rw [confOps_append, h1]; simpa using h3, h4⟩

theorem LConf.nil (k : List Dom) {n m : Nat} (h : n ≤ m) : LConf (Msg := Msg) k [] n m :=
  fun used hu => ⟨used, confOps_nil .., fun x hx => Nat.lt_of_lt_of_le (hu x hx) h⟩

theorem LConf.single {k : List Dom} {o : Op Msg} {n m : Nat}
    (h : ∀ used : List Nat, (∀ x ∈ used, x < n) → ∃ u, confOp used o k = some u ∧ ∀ x ∈ u, x < m) :
    LConf k [o] n m := by
  intro used hu
  rw [confOps_single]
  exact h used hu

theorem contains_iff {l : List Nat} {x : Nat} : l.contains x = true ↔ x ∈ l := by
  simp

theorem lconf_move {k : List Dom} {i : Nat} {b : Option Nat} (n : Nat) (hi : i ∈ k.map Dom.id)
    (hb : anchored b k = true) (hne : b ≠ some i) : LConf (Msg := Msg) k [.move i b] n n :=
  LConf.single fun used hu => ⟨used, by simp only [confOp, contains_iff.2 hi, hb]; simp [hne], hu⟩

theorem lconf_remove {k : List Dom} {i : Nat} (n : Nat) (hi : i ∈ k.map Dom.id) :
    LConf (Msg := Msg) k [.remove i] n n :=
  LConf.single fun used hu => ⟨used, by simp only [confOp, contains_iff.2 hi]; simp, hu⟩

theorem lconf_clear (k : List Dom) (n : Nat) : LConf (Msg := Msg) k [.clear] n n :=
  LConf.single fun used hu => ⟨used, by simp [confOp], hu⟩

theorem anchored_some {k : List Dom} {x : Nat} (h : x ∈ k.map Dom.id) : anchored (some x) k = true := by
  simp only [anchored, contains_iff.2 h]

theorem anchored_head (A E : List (Live Msg)) : anchored (E.head?.map Live.id) ((A ++ E).map toDom) = true := by
  cases E with
  | nil => rfl
  | cons e E => apply anchored_some; simp

theorem findId_unique {d : Dom} {l : List Dom} (hm : d ∈ l) (hu : ∀ e ∈ l, e.id = d.id → e = d) :
    findId d.id l = some d := by
  induction l with
  | nil => simp at hm
  | cons x l ih =>
    simp only [findId]
    split
    · rename_i hx; rw [hu x (by simp) hx]
    · rename_i hx
      rcases List.mem_cons.1 hm with rfl | hm
      · exact absurd rfl hx
      · exact ih hm fun e he => hu e (by simp [he])

theorem findId_modId {i : Nat} {g : Dom → Dom} (hg : ∀ e, (g e).id = e.id) {l : List Dom} {d : Dom}
    (h : findId i l = some d) : findId i (modId i g l) = some (g d) := by
  induction l with
  | nil => simp [findId] at h
  | cons x l ih =>
    simp only [modId, List.map_cons, findId] at h ⊢
    by_cases hx : x.id = i
    · simp only [hx, ↓reduceIte, Option.some.injEq] at h
      subst h
      simp [hg, hx]
    · simp only [hx, ↓reduceIte] at h ⊢
      exact ih h

/-! ## The ids of created trees -/

mutual
/-- A created tree's ids are distinct and in `[n, next)`. -/
theorem create_ids : (h : Html Msg) → (n : Nat) →
    (toDom (create h n).1).ids.Nodup ∧ ∀ x ∈ (toDom (create h n).1).ids, n ≤ x ∧ x < (create h n).2
  | .text s, n => by
    rw [create_text]
    simp [ids_text]
  | .elem ns tag key attrs cs, n => by
    rw [create_elem]
    obtain ⟨cs', heq, hnd, hr⟩ := createAux_ids cs (n + 1) #[]
    simp only [toDom_elem, ids_elem, heq, List.nil_append, List.nodup_cons, List.mem_cons]
    refine ⟨⟨fun hm => by have := hr _ hm; omega, hnd⟩, ?_⟩
    rintro x (hx | hx)
    · obtain ⟨_, _, _, _, _, _, hle⟩ := createAux_spec cs (n + 1) #[]
      exact ⟨by omega, by omega⟩
    · have := hr x hx; omega
/-- The trees `createAux` adds bring distinct ids, in `[n, next)`. -/
theorem createAux_ids : (l : List (Html Msg)) → (n : Nat) → (acc : Array (Live Msg)) →
    ∃ cs : List (Live Msg), (createAux l n acc).1.toList = acc.toList ++ cs ∧ (idsIn (cs.map toDom)).Nodup ∧
      ∀ x ∈ idsIn (cs.map toDom), n ≤ x ∧ x < (createAux l n acc).2
  | [], n, acc => by
    rw [createAux_nil]
    exact ⟨[], by simp, by simp [idsIn_nil], by simp [idsIn_nil]⟩
  | h :: t, n, acc => by
    rw [createAux_cons]
    obtain ⟨cs, heq, hnd, hr⟩ := createAux_ids t (create h n).2 (acc.push (create h n).1)
    obtain ⟨hnd1, hr1⟩ := create_ids h n
    refine ⟨(create h n).1 :: cs, by simp [heq], ?_, ?_⟩
    · simp only [List.map_cons, idsIn_cons, List.nodup_append]
      refine ⟨hnd1, hnd, fun x hx y hy hxy => ?_⟩
      have := hr1 x hx; have := hr y hy; omega
    · intro x hx
      simp only [List.map_cons, idsIn_cons, List.mem_append] at hx
      rcases hx with hx | hx
      · have := hr1 x hx
        obtain ⟨_, _, _, _, _, _, hle⟩ := createAux_spec t (create h n).2 (acc.push (create h n).1)
        omega
      · have := hr x hx; have := (create_spec h n).lt; omega
end

/-- Inserting a created tree conforms. -/
theorem lconf_insert (h : Html Msg) (n : Nat) {k : List Dom} {b : Option Nat} (hb : anchored b k = true) :
    LConf k [.insert (create h n).1 b] n (create h n).2 := by
  apply LConf.single
  intro used hu
  obtain ⟨hnd, hr⟩ := create_ids h n
  have hf : fresh (toDom (create h n).1).ids used = true := by
    simp only [fresh, Bool.and_eq_true, decide_eq_true_eq, List.all_eq_true]
    refine ⟨hnd, fun x hx => ?_⟩
    have : x ∉ used := fun hm => by have := hu x hm; have := hr x hx; omega
    simpa using this
  refine ⟨used ++ (toDom (create h n).1).ids, by simp only [confOp, hf, hb]; rfl, ?_⟩
  intro x hx
  simp only [List.mem_append] at hx
  rcases hx with hx | hx
  · have := hu x hx; have := (create_spec h n).lt; omega
  · exact (hr x hx).2

/-! ## Attribute operations as the encoder sends them -/

theorem attrSets_wire (old new : List (Attr Msg)) : (attrSets old new).map AttrOp.wire = attrSets old new := by
  induction new with
  | nil => rfl
  | cons a rest ih =>
    simp only [attrSets]
    split
    · exact ih
    · simp only [List.map_cons, ih, List.cons.injEq, and_true]
      cases a <;> simp [Attr.key, Attr.val, AttrOp.wire]

theorem attrRemoves_wire (new old : List (Attr Msg)) : (attrRemoves new old).map AttrOp.wire = attrRemoves new old := by
  induction old with
  | nil => rfl
  | cons a rest ih =>
    simp only [attrRemoves]
    split
    · exact ih
    · simp [ih, AttrOp.wire]

theorem diffAttrs_wire (old new : List (Attr Msg)) : (diffAttrs old new).map AttrOp.wire = diffAttrs old new := by
  unfold diffAttrs
  split
  · rfl
  · simp [attrSets_wire, attrRemoves_wire]

end Lasm.UI.Proofs
