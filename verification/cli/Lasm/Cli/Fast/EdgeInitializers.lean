import Std.Data.HashMap.Lemmas
import Std.Data.HashSet.Lemmas
import Lasm.Cli.Model.EdgeInitializers

namespace Lasm.Cli.Fast

/-- `calls` as a hash map; the first entry of a key wins, as in `List.lookup`. -/
def callsMap (calls : List (String × List String)) : Std.HashMap String (List String) :=
  calls.foldl (fun m e => m.insertIfNew e.1 e.2) ∅

/-- `Lasm.Cli.visit` with `seen` a hash set and `order` an array. -/
def visit (calls : Std.HashMap String (List String)) (keep : Std.HashSet String) :
    Nat → Std.HashSet String × Array String → String → Std.HashSet String × Array String
  | 0, st, _ => st
  | fuel + 1, (seen, order), unit =>
    if seen.contains unit then (seen, order)
    else
      let after := (calls.getD unit []).foldl (visit calls keep fuel) (seen.insert unit, order)
      (after.1, if keep.contains unit then after.2.push unit else after.2)

/-- An initializer name's word: not empty, letters, digits and `_`. -/
def word (s : List Char) : Bool := !s.isEmpty && s.all fun c => c.isAlphanum || c = '_'

/-- `initialize_` and a word. -/
def initializerRest (s : List Char) : Bool := "initialize_".toList.isPrefixOf s && word (s.drop 11)

/-- `Lasm.Cli.validInitializer` over the name's characters, testing prefixes
without copying them (the step between the model and `validInitializer`). -/
def validInitializerList (l : List Char) : Bool :=
  initializerRest l || ("runtime_".toList.isPrefixOf l && initializerRest (l.drop 8)) ||
    ("meta_".toList.isPrefixOf l && initializerRest (l.drop 5))

/-- A character of an initializer name. -/
def wordChar (c : Char) : Bool := c.isAlphanum || c = '_'

/-- `Lasm.Cli.validInitializer`, reading the string in place: every character a
word character, and one of the three prefixes followed by at least one more
(no list of characters is built). -/
def validInitializer (n : String) : Bool :=
  n.all wordChar && ((n.startsWith "initialize_" && decide (11 < n.length)) ||
    (n.startsWith "runtime_initialize_" && decide (19 < n.length)) ||
    (n.startsWith "meta_initialize_" && decide (16 < n.length)))

theorem take_beq (p l : List Char) : (l.take p.length == p) = p.isPrefixOf l := by
  apply Bool.eq_iff_iff.mpr
  rw [beq_iff_eq, List.isPrefixOf_iff_prefix, List.prefix_iff_eq_take]
  exact ⟨Eq.symm, Eq.symm⟩

theorem model_eq_list : @Lasm.Cli.validInitializer = fun n => validInitializerList n.toList := by
  funext n
  have r : ∀ s : List Char, (match s.splitAt 11 with
      | (p, w) => p == "initialize_".toList && (!w.isEmpty && w.all fun c => c.isAlphanum || c = '_')) = initializerRest s := by
    intro s
    rw [List.splitAt_eq]
    exact congrArg (· && _) (take_beq "initialize_".toList s)
  simp only [Lasm.Cli.validInitializer, validInitializerList, r]
  rw [show (8 : Nat) = "runtime_".toList.length from rfl, show (5 : Nat) = "meta_".toList.length from rfl,
    take_beq, take_beq]

/-- A prefix of word characters, then a word: all word characters, the prefix, and more. -/
theorem prefix_word (p l : List Char) (hp : p.all wordChar = true) :
    (p.isPrefixOf l && word (l.drop p.length)) = (l.all wordChar && (p.isPrefixOf l && decide (p.length < l.length))) := by
  by_cases h : p <+: l
  · obtain ⟨t, rfl⟩ := h
    have hp' : p.isPrefixOf (p ++ t) = true := List.isPrefixOf_iff_prefix.mpr (List.prefix_append p t)
    simp only [hp', List.drop_left, List.all_append, hp, word, Bool.true_and, List.length_append]
    cases t with
    | nil => simp
    | cons c t => simp; rfl
  · have : p.isPrefixOf l = false := by
      rw [Bool.eq_false_iff]; exact fun h' => h (List.isPrefixOf_iff_prefix.mp h')
    simp [this]

/-- Two prefixes, one after the other, are their concatenation. -/
theorem prefix_prefix (p q l : List Char) :
    (p.isPrefixOf l && q.isPrefixOf (l.drop p.length)) = (p ++ q).isPrefixOf l := by
  by_cases h : p <+: l
  · obtain ⟨t, rfl⟩ := h
    have hp' : p.isPrefixOf (p ++ t) = true := List.isPrefixOf_iff_prefix.mpr (List.prefix_append p t)
    apply Bool.eq_iff_iff.mpr
    simp [hp', List.isPrefixOf_iff_prefix, List.prefix_append_right_inj]
  · have : p.isPrefixOf l = false := by
      rw [Bool.eq_false_iff]; exact fun h' => h (List.isPrefixOf_iff_prefix.mp h')
    have : (p ++ q).isPrefixOf l = false := by
      rw [Bool.eq_false_iff]
      exact fun h' => h ((List.prefix_append p q).trans (List.isPrefixOf_iff_prefix.mp h'))
    simp [*]

theorem list_eq_string (n : String) : validInitializerList n.toList = validInitializer n := by
  have hi : "initialize_".toList.all wordChar = true := by decide
  have hr : ("runtime_".toList ++ "initialize_".toList).all wordChar = true := by decide
  have hm : ("meta_".toList ++ "initialize_".toList).all wordChar = true := by decide
  have rest : ∀ l : List Char, initializerRest l = (l.all wordChar && ("initialize_".toList.isPrefixOf l &&
      decide ("initialize_".toList.length < l.length))) := fun l => prefix_word _ l hi
  have nested : ∀ (p : List Char) (l : List Char),
      (p.isPrefixOf l && initializerRest (l.drop p.length)) =
        ((p ++ "initialize_".toList).isPrefixOf l && word (l.drop (p ++ "initialize_".toList).length)) := by
    intro p l
    simp only [initializerRest, ← Bool.and_assoc, prefix_prefix, List.length_append, List.drop_drop]
    rw [show "initialize_".toList.length = 11 from rfl, Nat.add_comm]
  have hrl : ("runtime_".toList ++ "initialize_".toList) = "runtime_initialize_".toList := by decide
  have hml : ("meta_".toList ++ "initialize_".toList) = "meta_initialize_".toList := by decide
  simp only [validInitializerList, validInitializer]
  rw [show (8 : Nat) = "runtime_".toList.length from rfl, show (5 : Nat) = "meta_".toList.length from rfl,
    nested, nested, prefix_word _ _ hr, prefix_word _ _ hm, rest, hrl, hml]
  simp only [String.all_bool_eq, String.length_toList.symm]
  have sw : ∀ p : String, n.startsWith p = p.toList.isPrefixOf n.toList := by
    intro p
    apply Bool.eq_iff_iff.mpr
    rw [String.startsWith_string_iff, List.isPrefixOf_iff_prefix]
  simp only [sw]
  rw [show "initialize_".toList.length = 11 from rfl, show "runtime_initialize_".toList.length = 19 from rfl,
    show "meta_initialize_".toList.length = 16 from rfl]
  cases n.toList.all wordChar <;> simp

@[csimp] theorem validInitializer_eq : @Lasm.Cli.validInitializer = @validInitializer := by
  rw [model_eq_list]
  funext n
  exact list_eq_string n

/-- The schedule of `name` over prepared tables. -/
def scheduleWith (m : Std.HashMap String (List String)) (ks : Std.HashSet String) (fuel : Nat) (name : String) : List String :=
  ((m.getD name []).foldl (visit m ks fuel) ((∅ : Std.HashSet String).insert name, #[])).2.toList

/-- `Lasm.Cli.initializationSchedule`, in time linear in the plan. -/
def initializationSchedule (name : String) (calls : List (String × List String)) (keep : List String) : List String :=
  scheduleWith (callsMap calls) (Std.HashSet.ofList keep) (calls.length + 1) name

theorem callsMap_getElem? (l : List (String × List String)) (m : Std.HashMap String (List String)) (u : String) :
    (l.foldl (fun m e => m.insertIfNew e.1 e.2) m)[u]? = (m[u]?).or (l.lookup u) := by
  induction l generalizing m with
  | nil => simp
  | cons e l ih =>
    rw [List.foldl_cons, ih, Std.HashMap.getElem?_insertIfNew]
    obtain ⟨k, v⟩ := e
    simp only [List.lookup]
    by_cases hk : k = u
    · subst hk
      by_cases hm : k ∈ m
      · have : (m[k]?).isSome := Std.HashMap.mem_iff_isSome_getElem?.mp hm
        obtain ⟨w, hw⟩ := Option.isSome_iff_exists.mp this
        simp [hm]
      · have : m[k]? = none := Std.HashMap.getElem?_eq_none hm
        simp [hm]
    · have : (u == k) = false := by simp; exact fun h => hk h.symm
      simp [hk, this]

theorem callsMap_getD (calls : List (String × List String)) (u : String) :
    (callsMap calls).getD u [] = edgesOf calls u := by
  rw [Std.HashMap.getD_eq_getD_getElem?, callsMap, callsMap_getElem?]
  simp [edgesOf]

/-- The model's walk state and the fast one agree. -/
def Agree (s : List String × List String) (f : Std.HashSet String × Array String) : Prop :=
  (∀ x, f.1.contains x = decide (x ∈ s.1)) ∧ f.2.toList = s.2

section
variable {calls : List (String × List String)} {keep : List String}
  {m : Std.HashMap String (List String)} {ks : Std.HashSet String}

theorem visit_agree (hm : ∀ u, m.getD u [] = edgesOf calls u) (hk : ∀ u, ks.contains u = decide (u ∈ keep)) :
    ∀ fuel st fs u, Agree st fs → Agree (Lasm.Cli.visit calls keep fuel st u) (visit m ks fuel fs u) := by
  intro fuel
  induction fuel with
  | zero => intro st fs u h; exact h
  | succ fuel ih =>
    have fold : ∀ (vs : List String) st fs, Agree st fs →
        Agree (vs.foldl (Lasm.Cli.visit calls keep fuel) st) (vs.foldl (visit m ks fuel) fs) := by
      intro vs
      induction vs with
      | nil => intro st fs h; exact h
      | cons v vs ihv => intro st fs h; exact ihv _ _ (ih st fs v h)
    rintro ⟨seen, order⟩ ⟨hs, ho⟩ u ⟨h1, h2⟩
    simp only at h1 h2
    simp only [Lasm.Cli.visit, visit, h1]
    by_cases hu : u ∈ seen
    · simp [hu, Agree, h1, h2]
    · simp only [hu, decide_false, Bool.false_eq_true, ↓reduceIte, hm]
      have hstart : Agree (u :: seen, order) (hs.insert u, ho) := by
        refine ⟨fun x => ?_, h2⟩
        simp only [Std.HashSet.contains_insert, h1, List.mem_cons]
        by_cases hx : u = x
        · subst hx; simp
        · have : x ≠ u := fun h => hx h.symm
          simp [hx, this]
      obtain ⟨a1, a2⟩ := fold (edgesOf calls u) _ _ hstart
      refine ⟨a1, ?_⟩
      simp only [hk]
      by_cases hku : u ∈ keep <;> simp [hku, a2]

end

theorem ofList_contains (keep : List String) (u : String) :
    (Std.HashSet.ofList keep).contains u = decide (u ∈ keep) := by
  rw [Std.HashSet.contains_ofList]; simp

theorem scheduleWith_eq {calls : List (String × List String)} {keep : List String}
    {m : Std.HashMap String (List String)} {ks : Std.HashSet String}
    (hm : ∀ u, m.getD u [] = edgesOf calls u) (hk : ∀ u, ks.contains u = decide (u ∈ keep)) (name : String) :
    scheduleWith m ks (calls.length + 1) name = Lasm.Cli.initializationSchedule name calls keep := by
  have hstart : Agree ([name], []) ((∅ : Std.HashSet String).insert name, #[]) := by
    refine ⟨fun x => ?_, rfl⟩
    by_cases hx : name = x
    · subst hx; simp
    · have : x ≠ name := fun h => hx h.symm
      simp [Std.HashSet.contains_insert, hx, this]
  have fold : ∀ (vs : List String) st fs, Agree st fs →
      Agree (vs.foldl (Lasm.Cli.visit calls keep (calls.length + 1)) st)
        (vs.foldl (visit m ks (calls.length + 1)) fs) := by
    intro vs
    induction vs with
    | nil => intro st fs h; exact h
    | cons v vs ihv => intro st fs h; exact ihv _ _ (visit_agree hm hk _ st fs v h)
  simp only [Lasm.Cli.initializationSchedule, scheduleWith, hm]
  exact (fold _ _ _ hstart).2

theorem initializationSchedule_eq : @Lasm.Cli.initializationSchedule = @initializationSchedule := by
  funext name calls keep
  exact (scheduleWith_eq (callsMap_getD calls) (ofList_contains keep) name).symm

/-- A kept initializer's wrapper over prepared tables. -/
def keptWrapperWith (m : Std.HashMap String (List String)) (ks : Std.HashSet String) (fuel : Nat) (name : String) : String :=
  let schedule := scheduleWith m ks fuel name
  String.intercalate "\n" <|
    [s!"lean_object* __wrap_{name}(uint8_t builtin) \{", "  static bool done = false;",
      "  if (done) return lean_io_result_mk_ok(lean_box(0));", "  done = true;"] ++
    (if schedule.isEmpty then [] else ["  lean_object* res;"]) ++
    schedule.map (fun unit => s!"  res = __wrap_{unit}(builtin); if (lean_io_result_is_error(res)) return res; lean_dec_ref(res);") ++
    [s!"  return __real_{name}(builtin);", "}"]

/-- The declaration lines of one closure unit. -/
def declarationsWith (ks : Std.HashSet String) (name : String) : List String :=
  if ks.contains name then [s!"lean_object* __real_{name}(uint8_t);", s!"lean_object* __wrap_{name}(uint8_t);"]
  else [s!"lean_object* __wrap_{name}(uint8_t) __attribute__((alias(\"lasm_initializer_skip\")));"]

/-- `Lasm.Cli.compactInitializerWrappers`, with the tables built once. -/
def compactInitializerWrappers (p : Plan) : Except String String :=
  match p.closure.find? (!Lasm.Cli.validInitializer ·) with
  | some n => .error s!"Unexpected initializer name {n}"
  | none =>
    let m := callsMap p.calls
    let ks := Std.HashSet.ofList p.keep
    let lines := ["// Generated by Lasm: compact runtime initialization (src/edge/edge-initializers.mjs).",
      "#include <lean/lean.h>", "#include <stdbool.h>",
      "lean_object* lasm_initializer_skip(uint8_t builtin) { (void)builtin; return lean_io_result_mk_ok(lean_box(0)); }"] ++
      p.closure.flatMap (declarationsWith ks) ++
      (p.closure.filter ks.contains).map (keptWrapperWith m ks (p.calls.length + 1))
    .ok (String.intercalate "\n" lines ++ "\n")

@[csimp] theorem compactInitializerWrappers_eq : @Lasm.Cli.compactInitializerWrappers = @compactInitializerWrappers := by
  funext p
  have hm := callsMap_getD p.calls
  have hk := ofList_contains p.keep
  have hw : ∀ name, Lasm.Cli.keptWrapper p name = keptWrapperWith (callsMap p.calls) (Std.HashSet.ofList p.keep) (p.calls.length + 1) name := by
    intro name
    simp only [Lasm.Cli.keptWrapper, keptWrapperWith, scheduleWith_eq hm hk]
  have hd : ∀ name, (if name ∈ p.keep then [s!"lean_object* __real_{name}(uint8_t);", s!"lean_object* __wrap_{name}(uint8_t);"]
      else [s!"lean_object* __wrap_{name}(uint8_t) __attribute__((alias(\"lasm_initializer_skip\")));"]) =
      declarationsWith (Std.HashSet.ofList p.keep) name := by
    intro name
    by_cases h : name ∈ p.keep <;> simp [declarationsWith, hk, h]
  have hf : p.closure.filter (· ∈ p.keep) = p.closure.filter (Std.HashSet.ofList p.keep).contains := by
    apply List.filter_congr; intro x _; simp [hk]
  rw [Lasm.Cli.compactInitializerWrappers, compactInitializerWrappers]
  cases p.closure.find? (!Lasm.Cli.validInitializer ·) with
  | some n => rfl
  | none => simp only [hd, hf, show Lasm.Cli.keptWrapper p = _ from funext hw]

attribute [csimp] initializationSchedule_eq

end Lasm.Cli.Fast
