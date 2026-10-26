/-
TodoMVC's state and update, in pure Lean, with proofs. `update` keeps the
invariant `Inv`: todo ids are distinct and below `nextId`, titles are
non-empty, and the todo being edited exists. Theorems below also pin down
what the main actions do (toggle all, clear completed, add, delete).
-/
import Lasm.UI.Cmd

namespace Todo

structure Item where
  id : Nat
  title : String
  completed : Bool
  deriving Repr, DecidableEq, Inhabited

inductive Filter where
  | all
  | active
  | completed
  deriving Repr, DecidableEq, Inhabited

structure Model where
  todos : List Item := []
  nextId : Nat := 0
  /-- The new-todo input. -/
  field : String := ""
  /-- The todo being edited and the edit's text. -/
  editing : Option (Nat × String) := none
  filter : Filter := .all
  deriving Inhabited

inductive Msg where
  | updateField (s : String)
  | add
  | toggle (id : Nat)
  | toggleAll (completed : Bool)
  | delete (id : Nat)
  | startEdit (id : Nat)
  | updateEdit (s : String)
  | commitEdit
  | cancelEdit
  | clearCompleted
  | setFilter (f : Filter)
  /-- Todos read from storage at startup. -/
  | loaded (todos : List Item)

/-- Trimmed text (titles never start or end with whitespace). -/
def clean (s : String) : String := s.trimAscii.toString

def ids (m : Model) : List Nat := m.todos.map (·.id)

def setCompleted (id : Nat) (f : Bool → Bool) (t : Item) : Item :=
  if t.id = id then { t with completed := f t.completed } else t

def setTitle (id : Nat) (title : String) (t : Item) : Item :=
  if t.id = id then { t with title } else t

/-- Todos from storage, made valid: titles cleaned, empty ones and repeated ids dropped. -/
def sanitize (todos : List Item) : List Item :=
  let cleaned := todos.filterMap fun t => let c := clean t.title; if c = "" then none else some { t with title := c }
  cleaned.foldr (fun t acc => if acc.any (·.id == t.id) then acc else t :: acc) []

/-- Keeps the edit only while its todo exists. -/
def keepEditing (todos : List Item) : Option (Nat × String) → Option (Nat × String)
  | some (e, s) => if todos.any (·.id == e) then some (e, s) else none
  | none => none

def maxId (todos : List Item) : Nat := todos.foldr (fun t m => max (t.id + 1) m) 0

/-- The update, without effects (`update` adds saving to storage). -/
def step (msg : Msg) (m : Model) : Model :=
  match msg with
  | .updateField s => { m with field := s }
  | .add =>
    let title := clean m.field
    if title = "" then m
    else { m with todos := m.todos ++ [{ id := m.nextId, title, completed := false }], nextId := m.nextId + 1, field := "" }
  | .toggle id => { m with todos := m.todos.map (setCompleted id (!·)) }
  | .toggleAll b => { m with todos := m.todos.map fun t => { t with completed := b } }
  | .delete id =>
    let todos := m.todos.filter (·.id ≠ id)
    { m with todos, editing := keepEditing todos m.editing }
  | .startEdit id =>
    match m.todos.find? (·.id = id) with
    | some t => { m with editing := some (id, t.title) }
    | none => m
  | .updateEdit s =>
    match m.editing with
    | some (e, _) => { m with editing := some (e, s) }
    | none => m
  | .commitEdit =>
    match m.editing with
    | some (e, s) =>
      let title := clean s
      if title = "" then { m with todos := m.todos.filter (·.id ≠ e), editing := none }
      else { m with todos := m.todos.map (setTitle e title), editing := none }
    | none => m
  | .cancelEdit => { m with editing := none }
  | .clearCompleted =>
    let todos := m.todos.filter (!·.completed)
    { m with todos, editing := keepEditing todos m.editing }
  | .setFilter f => { m with filter := f }
  | .loaded todos =>
    let todos := sanitize todos
    { m with todos, nextId := max m.nextId (maxId todos), editing := none }

/-! Invariant -/

/-- What every reachable model satisfies. -/
structure Inv (m : Model) : Prop where
  nodup : (ids m).Nodup
  fresh : ∀ t ∈ m.todos, t.id < m.nextId
  titles : ∀ t ∈ m.todos, t.title ≠ ""
  editing : ∀ e s, m.editing = some (e, s) → e ∈ ids m

theorem inv_init : Inv ({} : Model) where
  nodup := by simp [ids]
  fresh := by simp
  titles := by simp
  editing := by simp

theorem map_ids_of_id_eq {f : Item → Item} (hf : ∀ t, (f t).id = t.id) (l : List Item) :
    (l.map f).map (·.id) = l.map (·.id) := by
  induction l with
  | nil => rfl
  | cons t l ih => simp [hf]

theorem sanitize_nodup (l : List Item) : ((sanitize l).map (·.id)).Nodup := by
  unfold sanitize
  generalize l.filterMap _ = c
  induction c with
  | nil => simp
  | cons t c ih =>
    simp only [List.foldr_cons]
    split
    · exact ih
    · rename_i h
      simp only [List.map_cons, List.nodup_cons, List.mem_map]
      refine ⟨?_, ih⟩
      rintro ⟨u, hu, he⟩
      exact h (List.any_eq_true.mpr ⟨u, hu, by simp [he]⟩)

theorem sanitize_sub (l : List Item) : ∀ t ∈ sanitize l, ∃ u ∈ l, clean u.title ≠ "" ∧ t = { u with title := clean u.title } := by
  unfold sanitize
  have key : ∀ (c : List Item), (∀ t ∈ c, ∃ u ∈ l, clean u.title ≠ "" ∧ t = { u with title := clean u.title }) →
      ∀ t ∈ c.foldr (fun t acc => if acc.any (·.id == t.id) then acc else t :: acc) [], ∃ u ∈ l, clean u.title ≠ "" ∧ t = { u with title := clean u.title } := by
    intro c
    induction c with
    | nil => simp
    | cons x c ih =>
      intro hc t ht
      simp only [List.foldr_cons] at ht
      split at ht
      · exact ih (fun t h => hc t (List.mem_cons_of_mem _ h)) t ht
      · rcases List.mem_cons.mp ht with rfl | ht
        · exact hc _ List.mem_cons_self
        · exact ih (fun t h => hc t (List.mem_cons_of_mem _ h)) t ht
  apply key
  intro t ht
  rcases List.mem_filterMap.mp ht with ⟨u, hu, h⟩
  by_cases hc : clean u.title = ""
  · simp [hc] at h
  · simp [hc] at h
    exact ⟨u, hu, hc, h.symm⟩

theorem lt_maxId (l : List Item) : ∀ t ∈ l, t.id < maxId l := by
  induction l with
  | nil => simp
  | cons x l ih =>
    intro t ht
    simp only [maxId, List.foldr_cons] at *
    rcases List.mem_cons.mp ht with rfl | ht
    · exact Nat.lt_of_lt_of_le (Nat.lt_succ_self _) (Nat.le_max_left _ _)
    · exact Nat.lt_of_lt_of_le (ih t ht) (Nat.le_max_right _ _)

theorem keepEditing_mem {todos : List Item} {ed : Option (Nat × String)} {e : Nat} {s : String}
    (h : keepEditing todos ed = some (e, s)) : e ∈ todos.map (·.id) := by
  unfold keepEditing at h
  split at h
  · split at h
    · rename_i hany
      simp only [Option.some.injEq, Prod.mk.injEq] at h
      obtain ⟨rfl, rfl⟩ := h
      rcases List.any_eq_true.mp hany with ⟨t, ht, he⟩
      exact List.mem_map.mpr ⟨t, ht, by simpa using he⟩
    · simp at h
  · simp at h

/-- `step` keeps the invariant. -/
theorem step_inv (msg : Msg) (m : Model) (h : Inv m) : Inv (step msg m) := by
  cases msg with
  | updateField s => exact { h with }
  | add =>
    simp only [step]
    split
    · exact h
    · rename_i hne
      refine ⟨?_, ?_, ?_, ?_⟩
      · simp only [ids, List.map_append, List.map_cons, List.map_nil]
        refine List.nodup_append.mpr ⟨h.nodup, by simp, ?_⟩
        intro a ha b hb
        simp at hb
        subst hb
        rcases List.mem_map.mp ha with ⟨t, ht, rfl⟩
        exact Nat.ne_of_lt (h.fresh t ht)
      · intro t ht
        rcases List.mem_append.mp ht with ht | ht
        · exact Nat.lt_succ_of_lt (h.fresh t ht)
        · simp at ht; subst ht; exact Nat.lt_succ_self _
      · intro t ht
        rcases List.mem_append.mp ht with ht | ht
        · exact h.titles t ht
        · simp at ht; subst ht; exact hne
      · intro e s he
        have := h.editing e s he
        simp only [ids, List.map_append, List.mem_append]
        exact Or.inl this
  | toggle id =>
    have hid : ∀ t, (setCompleted id (!·) t).id = t.id := fun t => by unfold setCompleted; split <;> rfl
    refine ⟨?_, ?_, ?_, ?_⟩
    · simp only [step, ids]; rw [map_ids_of_id_eq hid]; exact h.nodup
    · intro t ht
      simp only [step, List.mem_map] at ht
      rcases ht with ⟨u, hu, rfl⟩
      rw [hid]; exact h.fresh u hu
    · intro t ht
      simp only [step, List.mem_map] at ht
      rcases ht with ⟨u, hu, rfl⟩
      unfold setCompleted; split <;> exact h.titles u hu
    · intro e s he
      simp only [step, ids] at he ⊢
      rw [map_ids_of_id_eq hid]; exact h.editing e s he
  | toggleAll b =>
    have hid : ∀ t : Item, ({ t with completed := b } : Item).id = t.id := fun _ => rfl
    refine ⟨?_, ?_, ?_, ?_⟩
    · simp only [step, ids]; rw [map_ids_of_id_eq hid]; exact h.nodup
    · intro t ht
      simp only [step, List.mem_map] at ht
      rcases ht with ⟨u, hu, rfl⟩
      exact h.fresh u hu
    · intro t ht
      simp only [step, List.mem_map] at ht
      rcases ht with ⟨u, hu, rfl⟩
      exact h.titles u hu
    · intro e s he
      simp only [step, ids] at he ⊢
      rw [map_ids_of_id_eq hid]; exact h.editing e s he
  | delete id =>
    refine ⟨?_, ?_, ?_, ?_⟩
    · simp only [step, ids]
      exact (h.nodup.sublist (List.filter_sublist.map _))
    · intro t ht; simp only [step, List.mem_filter] at ht; exact h.fresh t ht.1
    · intro t ht; simp only [step, List.mem_filter] at ht; exact h.titles t ht.1
    · intro e s he; exact keepEditing_mem he
  | startEdit id =>
    simp only [step]
    split
    · rename_i t ht
      refine { h with editing := ?_ }
      intro e s he
      simp only [Option.some.injEq, Prod.mk.injEq] at he
      obtain ⟨rfl, rfl⟩ := he
      have := List.find?_some ht
      have hm := List.mem_of_find?_eq_some ht
      simp only [ids, List.mem_map]
      exact ⟨t, hm, by simpa using this⟩
    · exact h
  | updateEdit s =>
    simp only [step]
    split
    · rename_i e s' heq
      refine { h with editing := ?_ }
      intro e₂ s₂ he
      simp only [Option.some.injEq, Prod.mk.injEq] at he
      obtain ⟨rfl, rfl⟩ := he
      exact h.editing _ _ heq
    · exact h
  | commitEdit =>
    simp only [step]
    split
    · rename_i e s heq
      split
      · refine ⟨?_, ?_, ?_, by simp⟩
        · simp only [ids]; exact (h.nodup.sublist (List.filter_sublist.map _))
        · intro t ht; simp only [List.mem_filter] at ht; exact h.fresh t ht.1
        · intro t ht; simp only [List.mem_filter] at ht; exact h.titles t ht.1
      · rename_i hne
        have hid : ∀ t, (setTitle e (clean s) t).id = t.id := fun t => by unfold setTitle; split <;> rfl
        refine ⟨?_, ?_, ?_, by simp⟩
        · simp only [ids]; rw [map_ids_of_id_eq hid]; exact h.nodup
        · intro t ht
          simp only [List.mem_map] at ht
          rcases ht with ⟨u, hu, rfl⟩
          rw [hid]; exact h.fresh u hu
        · intro t ht
          simp only [List.mem_map] at ht
          rcases ht with ⟨u, hu, rfl⟩
          unfold setTitle; split
          · exact hne
          · exact h.titles u hu
    · exact h
  | cancelEdit => exact { h with editing := by simp [step] }
  | clearCompleted =>
    refine ⟨?_, ?_, ?_, ?_⟩
    · simp only [step, ids]
      exact (h.nodup.sublist (List.filter_sublist.map _))
    · intro t ht; simp only [step, List.mem_filter] at ht; exact h.fresh t ht.1
    · intro t ht; simp only [step, List.mem_filter] at ht; exact h.titles t ht.1
    · intro e s he; exact keepEditing_mem he
  | setFilter f => exact { h with }
  | loaded todos =>
    refine ⟨?_, ?_, ?_, by simp [step]⟩
    · exact sanitize_nodup todos
    · intro t ht
      exact Nat.lt_of_lt_of_le (lt_maxId _ t ht) (Nat.le_max_right _ _)
    · intro t ht
      rcases sanitize_sub todos t ht with ⟨u, _, hc, rfl⟩
      exact hc

/-! What the actions do -/

theorem toggleAll_sets (b : Bool) (m : Model) : ∀ t ∈ (step (.toggleAll b) m).todos, t.completed = b := by
  intro t ht
  simp only [step, List.mem_map] at ht
  rcases ht with ⟨u, _, rfl⟩
  rfl

theorem toggleAll_keeps (b : Bool) (m : Model) : ids (step (.toggleAll b) m) = ids m := by
  simp only [step, ids]
  exact map_ids_of_id_eq (f := fun t => { t with completed := b }) (fun _ => rfl) _

theorem clearCompleted_clears (m : Model) : ∀ t ∈ (step .clearCompleted m).todos, t.completed = false := by
  intro t ht
  simp only [step, List.mem_filter] at ht
  simpa using ht.2

theorem clearCompleted_keeps_active (m : Model) : ∀ t ∈ m.todos, t.completed = false → t ∈ (step .clearCompleted m).todos := by
  intro t ht hc
  simp [step, List.mem_filter, ht, hc]

theorem add_appends (m : Model) (h : clean m.field ≠ "") :
    (step .add m).todos = m.todos ++ [{ id := m.nextId, title := clean m.field, completed := false }] := by
  simp [step, h]

theorem add_ignores_blank (m : Model) (h : clean m.field = "") : (step .add m).todos = m.todos := by
  simp [step, h]

theorem delete_removes (id : Nat) (m : Model) : ∀ t ∈ (step (.delete id) m).todos, t.id ≠ id := by
  intro t ht
  simp only [step, List.mem_filter] at ht
  simpa using ht.2

theorem delete_keeps_others (id : Nat) (m : Model) : ∀ t ∈ m.todos, t.id ≠ id → t ∈ (step (.delete id) m).todos := by
  intro t ht hne
  simp [step, List.mem_filter, ht, hne]

theorem toggle_flips (m : Model) (t : Item) (ht : t ∈ m.todos) :
    { t with completed := !t.completed } ∈ (step (.toggle t.id) m).todos := by
  simp only [step, List.mem_map]
  exact ⟨t, ht, by simp [setCompleted]⟩

/-- Storage key (shared with other TodoMVC implementations' conventions). -/
def storageKey : String := "todos-lasm"

/-- The update: `step`, and saving the todos whenever they change. `save`
encodes them for storage (the view module passes a JSON encoder). -/
def update (save : List Item → String) (msg : Msg) (m : Model) : Model × Lasm.UI.Cmd Msg :=
  let m' := step msg m
  (m', if m'.todos == m.todos then .none else Lasm.UI.Cmd.storageSet storageKey (save m'.todos))

theorem update_inv (save : List Item → String) (msg : Msg) (m : Model) (h : Inv m) : Inv (update save msg m).1 :=
  step_inv msg m h

/-- Every model the app can reach (from the initial model, by any messages) satisfies `Inv`. -/
theorem reachable_inv (save : List Item → String) (msgs : List Msg) :
    Inv (msgs.foldl (fun m msg => (update save msg m).1) {}) := by
  suffices ∀ m, Inv m → Inv (msgs.foldl (fun m msg => (update save msg m).1) m) from this _ inv_init
  induction msgs with
  | nil => intro m h; exact h
  | cons msg msgs ih => intro m h; exact ih _ (update_inv save msg m h)

end Todo
