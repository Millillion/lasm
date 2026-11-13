/-
The theorems of the propositions about the CLI's JavaScript (Spec.lean):
each `Theorems.x` has type exactly `Spec.x`, proved about the models of
`Lasm/Cli/Model/`.
-/
import Lasm.Cli.Spec

namespace Lasm.Cli.Theorems
open Lasm.Cli

/-! ## Response files -/

theorem unescape_cons {c : Char} (h : c ≠ '\\') (r : List Char) : unescape (c :: r) = c :: unescape r := by
  cases r <;> simp [unescape, h]

theorem unescape_escape (l : List Char) : unescape (l.flatMap escapeChar) = l := by
  induction l with
  | nil => rfl
  | cons c t ih =>
    by_cases h1 : c = '\\'
    · subst h1; simp [escapeChar, unescape, ih]
    · by_cases h2 : c = '"'
      · subst h2; simp [escapeChar, unescape, ih]
      · simp only [List.flatMap_cons, escapeChar, h1, h2, ite_false, List.singleton_append]
        rw [unescape_cons h1, ih]

theorem unquote_quote (a : String) : unquote (quoteArgument a) = some a := by
  simp [unquote, quoteArgument, unescape_escape]

theorem newline_not_escaped {a : String} (h : '\n' ∉ a.toList) : '\n' ∉ a.toList.flatMap escapeChar := by
  simp only [List.mem_flatMap, not_exists, not_and]
  intro c hc
  unfold escapeChar
  split
  · simp
  · split
    · simp
    · simp only [List.mem_singleton]; rintro rfl; exact h hc

theorem intercalate_concat {sep m : List Char} : ∀ ls : List (List Char), ls ≠ [] →
    sep.intercalate (ls ++ [m]) = sep.intercalate ls ++ sep ++ m
  | [], h => absurd rfl h
  | [l], _ => by simp [List.intercalate_cons_cons]
  | l :: l' :: t, _ => by
    rw [List.cons_append, List.cons_append, List.intercalate_cons_cons, ← List.cons_append,
      intercalate_concat (l' :: t) (by simp), List.intercalate_cons_cons]
    simp

theorem response_file_round_trip : Spec.response_file_round_trip := by
  intro args hargs
  have hsafe : args.any unsafeArgument = false := by
    rw [List.any_eq_false]
    intro a ha
    have := hargs a ha
    rw [unsafeArgument, Bool.not_eq_true, List.any_eq_false]
    intro c hc h
    simp only [Bool.or_eq_true, decide_eq_true_eq] at h
    rcases h with (rfl | rfl) | rfl
    · exact this.2.2 hc
    · exact this.2.1 hc
    · exact this.1 hc
  by_cases hnil : args = []
  · subst hnil
    exact ⟨"\n", [""], rfl, by decide, by simp⟩
  · refine ⟨String.intercalate "\n" (args.map quoteArgument) ++ "\n", args.map quoteArgument, by simp [responseFile, hsafe], ?_, ?_⟩
    · have hq : ((args.map quoteArgument).map String.toList) ≠ [] := by simpa using hnil
      simp only [String.toList_append, String.toList_intercalate]
      rw [show "\n".toList = ['\n'] from rfl, ← List.append_nil (['\n'].intercalate _ ++ ['\n']), ← intercalate_concat _ hq, List.splitOn_intercalate]
      · simp [List.map_map, Function.comp_def]
      · simp only [List.mem_append, List.mem_map, List.mem_singleton]
        rintro l (⟨q, ⟨a, ha, rfl⟩, rfl⟩ | rfl)
        · simp [quoteArgument, newline_not_escaped (hargs a ha).1]
        · simp
      · simp
    · simp [hnil, List.map_map, Function.comp_def, unquote_quote]

/-! ## Development server -/

theorem lookup_of_mem {l : List (String × Option String)} {k : String} {h : Option String}
    (hn : (l.map (·.1)).Nodup) (hm : (k, h) ∈ l) : l.lookup k = some h := by
  induction l with
  | nil => simp at hm
  | cons p t ih =>
    obtain ⟨a, b⟩ := p
    simp only [List.map_cons, List.nodup_cons] at hn
    rw [List.lookup_cons]
    rcases List.mem_cons.1 hm with he | ht
    · cases he; simp
    · have hka : k ≠ a := by
        rintro rfl; exact hn.1 (List.mem_map_of_mem (f := (·.1)) ht)
      have : (k == a) = false := by simpa using hka
      simp only [this, ih hn.2 ht]

theorem changed_files_exact : Spec.changed_files_exact := by
  intro a b ha hb
  have mem : ∀ k, k ∈ changedFiles a b ↔ (k ∈ a.map (·.1) ∨ k ∈ b.map (·.1)) ∧ a.lookup k ≠ b.lookup k := by
    intro k
    constructor
    · intro hk
      simp only [changedFiles, List.mem_append, List.mem_map, List.mem_filter] at hk
      rcases hk with ⟨⟨f, h⟩, ⟨hm, hne⟩, rfl⟩ | ⟨⟨f, h⟩, ⟨hm, hnb⟩, rfl⟩
      · refine ⟨Or.inr (List.mem_map_of_mem (f := (·.1)) hm), ?_⟩
        rw [lookup_of_mem hb hm]; simpa using hne
      · refine ⟨Or.inl (List.mem_map_of_mem (f := (·.1)) hm), ?_⟩
        have : b.lookup f = none := by
          simp only [Bool.not_eq_true', List.any_eq_false, beq_iff_eq] at hnb
          simp only [List.lookup_eq_none_iff, bne_iff_ne, ne_eq]
          exact fun p hp e => hnb p hp e.symm
        rw [this, lookup_of_mem ha hm]; simp
    · rintro ⟨hk, hne⟩
      simp only [changedFiles, List.mem_append, List.mem_map, List.mem_filter]
      by_cases hkb : k ∈ b.map (·.1)
      · obtain ⟨⟨f, h⟩, hm, rfl⟩ := List.mem_map.1 hkb
        rw [lookup_of_mem hb hm] at hne
        exact Or.inl ⟨(f, h), ⟨hm, by simpa using hne⟩, rfl⟩
      · obtain ⟨⟨f, h⟩, hm, rfl⟩ := List.mem_map.1 (hk.resolve_right hkb)
        refine Or.inr ⟨(f, h), ⟨hm, ?_⟩, rfl⟩
        simp only [Bool.not_eq_true', List.any_eq_false, beq_iff_eq]
        intro p hp e
        exact hkb (e ▸ List.mem_map_of_mem (f := (·.1)) hp)
  refine ⟨?_, mem⟩
  rw [changedFiles, List.nodup_append]
  refine ⟨hb.sublist (List.filter_sublist.map _), ha.sublist (List.filter_sublist.map _), ?_⟩
  intro x hx y hy e
  subst e
  obtain ⟨p, hp, rfl⟩ := List.mem_map.1 hx
  obtain ⟨q, hq, hqp⟩ := List.mem_map.1 hy
  have hq' := (List.mem_filter.1 hq).2
  simp only [Bool.not_eq_true', List.any_eq_false, beq_iff_eq] at hq'
  exact hq' p (List.mem_filter.1 hp).1 hqp.symm

/-! ## The Node host -/

theorem numbers_le64 : Spec.numbers_le64 := fun _ => rfl

/-! ## Lean versions -/

theorem digitChar_sub (d : Nat) (h : d < 10) : d.digitChar.toNat - '0'.toNat = d := by
  match d, h with
  | 0, _ | 1, _ | 2, _ | 3, _ | 4, _ | 5, _ | 6, _ | 7, _ | 8, _ | 9, _ => rfl

theorem decimalValue_toDigits (n : Nat) : decimalValue (Nat.toDigits 10 n) = n := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
    rw [Nat.toDigits_eq_ite (by decide)]
    split
    · rename_i h
      simp only [decimalValue, List.foldl_cons, List.foldl_nil, Nat.zero_mul, Nat.zero_add]
      exact digitChar_sub n h
    · have := ih (n / 10) (by omega)
      simp only [decimalValue, List.foldl_append, List.foldl_cons, List.foldl_nil] at this ⊢
      rw [this, digitChar_sub _ (Nat.mod_lt _ (by decide))]
      omega

theorem jsNumber_toString (n : Nat) : jsNumber (toString n).toList = .num n := by
  have hl : (toString n).toList = Nat.toDigits 10 n := Nat.toList_repr
  rw [hl, jsNumber, if_neg Nat.toDigits_ne_nil, decimalValue_toDigits]
  have : (Nat.toDigits 10 n).all Char.isDigit = true := by
    rw [List.all_eq_true]; intro c hc; exact Nat.isDigit_of_mem_toDigits (by decide) (by decide) hc
  simp [this]

theorem versionText_toList (a : Nat × Nat × Nat) :
    (versionText a).toList = Nat.toDigits 10 a.1 ++ '.' :: (Nat.toDigits 10 a.2.1 ++ '.' :: Nat.toDigits 10 a.2.2) := by
  have h : (toString ".").toList = ['.'] := rfl
  simp [versionText, h]

theorem digits_not_mem {c : Char} (hc : c.isDigit = false) (n : Nat) : c ∉ Nat.toDigits 10 n := by
  intro h
  have := Nat.isDigit_of_mem_toDigits (by decide) (by decide) h
  simp_all

theorem jsNumber_digits (n : Nat) : jsNumber (Nat.toDigits 10 n) = .num n := by
  have := jsNumber_toString n
  rwa [show (toString n).toList = Nat.toDigits 10 n from Nat.toList_repr] at this

theorem versionParts_text (a : Nat × Nat × Nat) (s : String) (hs : s.toList = [] ∨ s.toList.head? = some '-') :
    versionParts (versionText a ++ s) = [.num a.1, .num a.2.1, .num a.2.2] := by
  have hd : ∀ n, '-' ∉ Nat.toDigits 10 n := digits_not_mem (by decide)
  have hdot : ∀ n, '.' ∉ Nat.toDigits 10 n := digits_not_mem (by decide)
  have hp : '-' ∉ Nat.toDigits 10 a.1 ++ '.' :: (Nat.toDigits 10 a.2.1 ++ '.' :: Nat.toDigits 10 a.2.2) := by
    simp [hd]
  have head : (((Nat.toDigits 10 a.1 ++ '.' :: (Nat.toDigits 10 a.2.1 ++ '.' :: Nat.toDigits 10 a.2.2)) ++ s.toList).splitOn '-').headD [] =
      Nat.toDigits 10 a.1 ++ '.' :: (Nat.toDigits 10 a.2.1 ++ '.' :: Nat.toDigits 10 a.2.2) := by
    rcases hs with hs | hs
    · rw [hs, List.append_nil, List.splitOn_eq_singleton hp]; rfl
    · obtain ⟨t, ht⟩ : ∃ t, s.toList = '-' :: t := by
        cases h : s.toList with
        | nil => simp [h] at hs
        | cons c t => simp [h] at hs; exact ⟨t, by rw [hs]⟩
      rw [ht, List.splitOn_append_cons_self_of_not_mem hp]; rfl
  rw [versionParts, String.toList_append, versionText_toList, head,
    List.splitOn_append_cons_self_of_not_mem (hdot _), List.splitOn_append_cons_self_of_not_mem (hdot _),
    List.splitOn_eq_singleton (hdot _)]
  simp [jsNumber_digits]

theorem atLeast_parts (a b : Nat × Nat × Nat) :
    leanAtLeastModel.go [.num a.1, .num a.2.1, .num a.2.2] [.num b.1, .num b.2.1, .num b.2.2]
      (fun l i => l[i]?.getD .undef) [0, 1, 2] = true ↔ LexGe a b := by
  obtain ⟨a1, a2, a3⟩ := a
  obtain ⟨b1, b2, b3⟩ := b
  simp only [leanAtLeastModel.go, JsNum.strictNe, JsNum.gt, LexGe]
  by_cases h1 : a1 = b1 <;> by_cases h2 : a2 = b2 <;> by_cases h3 : a3 = b3 <;> simp_all <;> omega

theorem suffix_shape (rc : Option Nat) :
    ((rc.map (s!"-rc{·}")).getD "").toList = [] ∨ ((rc.map (s!"-rc{·}")).getD "").toList.head? = some '-' := by
  cases rc with
  | none => left; rfl
  | some n => right; simp; exact Or.inl rfl

theorem lean_at_least_lexicographic : Spec.lean_at_least_lexicographic := by
  intro a b rc
  have parts : ∀ c, versionParts (versionText c) = [.num c.1, .num c.2.1, .num c.2.2] := fun c => by
    simpa using versionParts_text c "" (Or.inl rfl)
  have ha := versionParts_text a _ (suffix_shape rc)
  refine ⟨?_, ?_⟩
  · simp only [leanAtLeast, leanAtLeastModel, ha, parts]
    exact atLeast_parts a b
  · simp only [leanAtLeast, leanAtLeastModel, ha, parts]
    exact (atLeast_parts a a).2 (by obtain ⟨x, y, z⟩ := a; simp [LexGe])

/-! ## The link driver's Python semantics -/

theorem comparePython_go_sign : ∀ x y : List Char,
    (comparePythonStrings.go x y).sign = if x < y then -1 else if x = y then 0 else 1
  | [], [] => by simp [comparePythonStrings.go]
  | [], _ :: _ => by simp [comparePythonStrings.go, List.nil_lt_cons]
  | _ :: _, [] => by simp [comparePythonStrings.go, List.not_lt_nil]
  | a :: as, b :: bs => by
    have ih := comparePython_go_sign as bs
    by_cases h : a.val.toNat = b.val.toNat
    · have hab : a = b := Char.ext (UInt32.toNat_inj.mp h)
      subst hab
      simp [comparePythonStrings.go, ih]
    · simp only [comparePythonStrings.go, if_pos h]
      have e1 : a.toNat = a.val.toNat := rfl
      have e2 : b.toNat = b.val.toNat := rfl
      have hne : a ≠ b := fun e => h (e ▸ rfl)
      rcases Nat.lt_or_gt_of_ne h with hl | hl
      · have : a < b := hl
        simp [List.cons_lt_cons_iff, this, hne]; omega
      · have hba : b < a := hl
        have hnab : ¬ a < b := fun h' => absurd (Nat.lt_trans hl h') (Nat.lt_irrefl _)
        simp [List.cons_lt_cons_iff, hnab, hne]; omega

theorem python_order_code_points : Spec.python_order_code_points := by
  intro a b
  simp only [comparePythonStrings, comparePython_go_sign, String.lt_iff, String.toList_inj]

/-- Printable ASCII. -/
def printable (c : Char) : Bool := ' ' ≤ c && c ≤ '~'

theorem digitChar_printable (d : Nat) (h : d < 16) : printable d.digitChar = true := by
  match d, h with
  | 0, _ | 1, _ | 2, _ | 3, _ | 4, _ | 5, _ | 6, _ | 7, _ | 8, _ | 9, _ | 10, _ | 11, _ | 12, _ | 13, _ | 14, _ | 15, _ => decide
  | _ + 16, h => exact absurd h (by omega)

theorem toDigits16_printable (n : Nat) : ∀ c ∈ Nat.toDigits 16 n, printable c = true := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
    rw [Nat.toDigits_eq_ite (by decide)]
    split
    · rename_i h; intro c hc; simp at hc; subst hc; exact digitChar_printable n h
    · intro c hc
      rcases List.mem_append.mp hc with hc | hc
      · exact ih (n / 16) (by omega) c hc
      · simp at hc; subst hc; exact digitChar_printable _ (Nat.mod_lt _ (by decide))

theorem escapeUnit_printable (u : Nat) : ∀ c ∈ escapeUnit u, printable c = true := by
  intro c hc
  unfold escapeUnit at hc
  split at hc; · simp at hc; rcases hc with rfl | rfl <;> decide
  split at hc; · simp at hc; rcases hc with rfl | rfl <;> decide
  split at hc; · simp at hc; rcases hc with rfl | rfl <;> decide
  split at hc; · simp at hc; rcases hc with rfl | rfl <;> decide
  split at hc; · simp at hc; rcases hc with rfl | rfl <;> decide
  split at hc; · simp at hc; rcases hc with rfl | rfl <;> decide
  split at hc; · simp at hc; rcases hc with rfl | rfl <;> decide
  split at hc
  · simp only [List.mem_cons, hex4, List.mem_append, List.mem_replicate] at hc
    rcases hc with rfl | rfl | ⟨_, rfl⟩ | hc
    · decide
    · decide
    · decide
    · exact toDigits16_printable u c hc
  · rename_i h
    simp at hc; subst hc
    have hu : u < 0xd800 := by omega
    have hv : (Char.ofNat u).val.toNat = u := by
      simp [Char.ofNat, Char.ofNatAux, Nat.isValidChar, hu]
    simp only [printable, Bool.and_eq_true, decide_eq_true_eq, Char.le_def, UInt32.le_iff_toNat_le, hv]
    exact ⟨by simp; omega, by simp; omega⟩

theorem json_string_printable : Spec.json_string_printable := by
  intro s
  rw [String.all_bool_eq, pythonJsonString, String.toList_ofList]
  simp only [List.all_cons, List.all_append, List.all_flatMap, List.all_eq_true, Bool.and_eq_true]
  refine ⟨⟨by decide, fun x _ u _ c hc => ?_⟩, by simp⟩
  simpa [printable] using escapeUnit_printable u c hc

/-! ## WebAssembly sections -/

theorem lebJS_eq_leb (n : Nat) : lebJS n = leb n := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
    rw [lebJS, leb]
    by_cases h : n < 128
    · have : n / 128 = 0 := by omega
      simp [this, h, Nat.mod_eq_of_lt h]
    · have : n / 128 ≠ 0 := by omega
      simp only [this, h, dite_false]
      rw [ih _ (by omega)]

theorem readLebJS_leb (n : Nat) (rest : List UInt8) : readLebJS (leb n ++ rest) = (n, (leb n).length) := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
    rw [leb]
    by_cases h : n < 128
    · simp only [h, dite_true, List.singleton_append, readLebJS, Nat.toUInt8_eq, UInt8.toNat_ofNat',
        List.length_singleton]
      have : n % 2 ^ 8 = n := Nat.mod_eq_of_lt (by omega)
      simp [this, h]
    · simp only [h, dite_false, List.cons_append, readLebJS, Nat.toUInt8_eq, UInt8.toNat_ofNat',
        List.length_cons]
      have e : (n % 128 + 128) % 2 ^ 8 = n % 128 + 128 := Nat.mod_eq_of_lt (by omega)
      rw [e, ih _ (by omega)]
      have : ¬ n % 128 + 128 < 128 := by omega
      simp only [this, ite_false, Prod.mk.injEq, and_true]
      omega

theorem readLebJS_leb_append (n : Nat) (body rest : List UInt8) :
    readLebJS (leb n ++ body ++ rest) = (n, (leb n).length) := by
  rw [List.append_assoc, readLebJS_leb]

/-- A section's bytes parse as that section. -/
theorem parseSections_section (id : UInt8) (body rest : List UInt8) :
    parseSections (sectionOf id body ++ rest) =
      (parseSections rest).map ({ id, raw := sectionOf id body, body } :: ·) := by
  have e : sectionOf id body ++ rest = id :: (leb body.length ++ (body ++ rest)) := by simp [sectionOf]
  rw [e, parseSections.eq_def]
  dsimp only
  rw [readLebJS_leb]
  dsimp only
  have hlen : (leb body.length).length + body.length ≤ (leb body.length ++ (body ++ rest)).length := by
    simp
  simp only [hlen, ↓reduceIte]
  have h1 : (leb body.length ++ (body ++ rest)).drop ((leb body.length).length + body.length) = rest := by
    simp [List.drop_append]
  have h2 : (leb body.length ++ (body ++ rest)).take ((leb body.length).length + body.length) = leb body.length ++ body := by
    simp [List.take_append, List.take_of_length_le (Nat.le_add_right _ _)]
  have h3 : ((leb body.length ++ (body ++ rest)).drop (leb body.length).length).take body.length = body := by
    simp
  rw [h1, h2, h3]
  simp [sectionOf]

theorem parseSections_nil : parseSections [] = some [] := by
  rw [parseSections.eq_def]

/-- The section a pair (id, payload) encodes. -/
def sec (s : UInt8 × List UInt8) : Section := { id := s.1, raw := sectionOf s.1 s.2, body := s.2 }

theorem parseSections_flatMap (xs : List (UInt8 × List UInt8)) (rest : List UInt8) :
    parseSections (xs.flatMap (fun s => sectionOf s.1 s.2) ++ rest) = (parseSections rest).map (xs.map sec ++ ·) := by
  induction xs with
  | nil => simp
  | cons x xs ih =>
    rw [List.flatMap_cons, List.append_assoc, parseSections_section, ih, Option.map_map]
    rfl

theorem flatMap_congr' {α β} {l : List α} {f g : α → List β} (h : ∀ a ∈ l, f a = g a) :
    l.flatMap f = l.flatMap g := by
  induction l <;> simp_all

theorem replace_one_core_module : Spec.replace_one_core_module := by
  intro before after unrelated pfx tail to hba hu
  let f := fun (s : UInt8 × List UInt8) => sectionOf s.1 s.2
  let L := before ++ unrelated.map (fun u => ((1 : UInt8), u)) ++ [((1 : UInt8), pfx ++ tail)] ++ after
  let L' := before ++ unrelated.map (fun u => ((1 : UInt8), u)) ++ [((1 : UInt8), to ++ tail)] ++ after
  have hin : componentHeader ++ before.flatMap (fun s => sectionOf s.1 s.2) ++ unrelated.flatMap (sectionOf 1) ++
      sectionOf 1 (pfx ++ tail) ++ after.flatMap (fun s => sectionOf s.1 s.2) = componentHeader ++ L.flatMap f := by
    simp [L, f, List.flatMap_append, List.flatMap_map, List.append_assoc]
  have hout : componentHeader ++ before.flatMap (fun s => sectionOf s.1 s.2) ++ unrelated.flatMap (sectionOf 1) ++
      sectionOf 1 (to ++ tail) ++ after.flatMap (fun s => sectionOf s.1 s.2) = componentHeader ++ L'.flatMap f := by
    simp [L', f, List.flatMap_append, List.flatMap_map, List.append_assoc]
  rw [hin, hout]
  let m := fun (s : Section) => s.id == 1 && pfx.isPrefixOf s.body
  have hfound : (L.map sec).filter m = [sec (1, pfx ++ tail)] := by
    simp only [L, List.map_append, List.filter_append, List.map_map]
    have hb : (before.map sec).filter m = [] := by
      simp only [List.filter_eq_nil_iff, List.mem_map]
      rintro _ ⟨s, hs, rfl⟩
      simp [m, sec, hba s (List.mem_append_left _ hs)]
    have ha : (after.map sec).filter m = [] := by
      simp only [List.filter_eq_nil_iff, List.mem_map]
      rintro _ ⟨s, hs, rfl⟩
      simp [m, sec, hba s (List.mem_append_right _ hs)]
    have hu' : (unrelated.map (sec ∘ fun u => ((1 : UInt8), u))).filter m = [] := by
      simp only [List.filter_eq_nil_iff, List.mem_map]
      rintro _ ⟨u, hu1, rfl⟩
      simp [m, sec, hu u hu1]
    rw [hb, ha, hu']
    simp [m, sec]
  have hrepl : (L.map sec).flatMap (fun s => if m s then
        1 :: lebJS (to ++ s.body.drop pfx.length).length ++ (to ++ s.body.drop pfx.length) else s.raw) =
      L'.flatMap f := by
    simp only [L, L', List.map_append, List.flatMap_append, List.flatMap_map]
    congr 1
    · congr 1
      · congr 1
        · apply flatMap_congr'
          intro s hs
          simp [m, sec, f, hba s (List.mem_append_left _ hs)]
        · apply flatMap_congr'
          intro u hu1
          simp [m, sec, f, hu u hu1]
      · simp [m, sec, f, sectionOf, lebJS_eq_leb]
    · apply flatMap_congr'
      intro s hs
      simp [m, sec, f, hba s (List.mem_append_right _ hs)]
  have hparse : parseSections (L.flatMap f) = some (L.map sec) := by
    have := parseSections_flatMap L []
    simpa [f, parseSections_nil] using this
  simp only [replaceCoreModule, bytes, replaceCoreModuleL]
  have hhead : isComponentHeader (componentHeader ++ L.flatMap f) = true := by
    simp [isComponentHeader, componentHeader]
  have hd : (componentHeader ++ L.flatMap f).drop 8 = L.flatMap f := by simp [componentHeader]
  have ht : (componentHeader ++ L.flatMap f).take 8 = componentHeader := by simp [componentHeader]
  simp only [hhead, Bool.not_true, Bool.false_eq_true, ↓reduceIte, hd, hparse]
  have hfound' : List.filter (fun s => s.id == 1 && pfx.isPrefixOf s.body) (L.map sec) = [sec (1, pfx ++ tail)] :=
    hfound
  have hrepl' : (L.map sec).flatMap (fun s => if (s.id == 1 && pfx.isPrefixOf s.body) = true then
        1 :: lebJS (to ++ s.body.drop pfx.length).length ++ (to ++ s.body.drop pfx.length) else s.raw) =
      L'.flatMap f := hrepl
  simp only [hfound', List.length_singleton, ↓reduceIte, ht]
  erw [hrepl']
  rfl

/-! ## Splicing a program into the component template -/

/-- `replaceCoreModule` on a component of encoded sections whose one core
module starting with `pfx` is `pfx ++ tail`: that section becomes
`to ++ tail`. -/
theorem replaceCoreModuleL_sections (before after : List (UInt8 × List UInt8)) (pfx tail to : List UInt8)
    (h : ∀ s ∈ before ++ after, s.1 = 1 → ¬ pfx <+: s.2) :
    replaceCoreModuleL (componentHeader ++ (before ++ (1, pfx ++ tail) :: after).flatMap fun s => sectionOf s.1 s.2) pfx to =
      .ok (componentHeader ++ (before ++ (1, to ++ tail) :: after).flatMap fun s => sectionOf s.1 s.2) := by
  let f := fun (s : UInt8 × List UInt8) => sectionOf s.1 s.2
  let L := before ++ (1, pfx ++ tail) :: after
  let m := fun (s : Section) => s.id == 1 && pfx.isPrefixOf s.body
  have hm : ∀ s ∈ before ++ after, m (sec s) = false := by
    intro s hs
    simp only [m, sec, Bool.and_eq_false_iff, beq_eq_false_iff_ne]
    by_cases h1 : s.1 = 1
    · right; exact Bool.eq_false_iff.mpr fun h' => h s hs h1 (List.isPrefixOf_iff_prefix.mp h')
    · left; exact h1
  have hfound : (L.map sec).filter m = [sec (1, pfx ++ tail)] := by
    simp only [L, List.map_append, List.map_cons, List.filter_append, List.filter_cons]
    have hb : (before.map sec).filter m = [] := by
      simp only [List.filter_eq_nil_iff, List.mem_map]
      rintro _ ⟨s, hs, rfl⟩; simp [hm s (List.mem_append_left _ hs)]
    have ha : (after.map sec).filter m = [] := by
      simp only [List.filter_eq_nil_iff, List.mem_map]
      rintro _ ⟨s, hs, rfl⟩; simp [hm s (List.mem_append_right _ hs)]
    rw [hb, ha]
    simp [m, sec, List.isPrefixOf_iff_prefix]
  have hrepl : (L.map sec).flatMap (fun s => if m s = true then
        1 :: lebJS (to ++ s.body.drop pfx.length).length ++ (to ++ s.body.drop pfx.length) else s.raw) =
      (before ++ (1, to ++ tail) :: after).flatMap f := by
    simp only [L, List.map_append, List.map_cons, List.flatMap_append, List.flatMap_cons, List.flatMap_map]
    congr 1
    · apply flatMap_congr'
      intro s hs
      have := hm s (List.mem_append_left _ hs)
      simp only [sec] at this
      simp [this, sec, f]
    · congr 1
      · simp [m, sec, f, sectionOf, lebJS_eq_leb, List.isPrefixOf_iff_prefix]
      · apply flatMap_congr'
        intro s hs
        have := hm s (List.mem_append_right _ hs)
        simp only [sec] at this
        simp [this, sec, f]
  have hparse : parseSections (L.flatMap f) = some (L.map sec) := by
    have := parseSections_flatMap L []
    simpa [f, parseSections_nil] using this
  show replaceCoreModuleL (componentHeader ++ L.flatMap f) pfx to = .ok (componentHeader ++ (before ++ (1, to ++ tail) :: after).flatMap f)
  simp only [replaceCoreModuleL]
  have hhead : isComponentHeader (componentHeader ++ L.flatMap f) = true := by
    simp [isComponentHeader, componentHeader]
  have hd : (componentHeader ++ L.flatMap f).drop 8 = L.flatMap f := by simp [componentHeader]
  have ht : (componentHeader ++ L.flatMap f).take 8 = componentHeader := by simp [componentHeader]
  simp only [hhead, Bool.not_true, Bool.false_eq_true, ↓reduceIte, hd, hparse]
  change (if ((L.map sec).filter m).length = 1 then _ else _) = _
  rw [hfound]
  simp only [List.length_singleton, ↓reduceIte, ht]
  erw [hrepl]

theorem sectionsOf_sections (L : List (UInt8 × List UInt8)) :
    sectionsOf (componentHeader ++ L.flatMap fun s => sectionOf s.1 s.2) = .ok (L.map sec) := by
  have hparse := parseSections_flatMap L []
  simp only [List.append_nil, parseSections_nil, Option.map_some, List.append_nil] at hparse
  have hd : (componentHeader ++ L.flatMap fun s => sectionOf s.1 s.2).drop 8 = L.flatMap fun s => sectionOf s.1 s.2 := by
    simp [componentHeader]
  have hhead : isComponentHeader (componentHeader ++ L.flatMap fun s => sectionOf s.1 s.2) = true := by
    simp [isComponentHeader, componentHeader]
  simp only [sectionsOf, hhead, Bool.not_true, Bool.false_eq_true, ↓reduceIte, hd, hparse]

/-- The core modules of encoded sections, around one module `body`. -/
theorem modules_around (before after : List (UInt8 × List UInt8)) (body : List UInt8) :
    ((before ++ (1, body) :: after).map sec).filter (·.id == 1) =
      (before.map sec).filter (·.id == 1) ++ sec (1, body) :: (after.map sec).filter (·.id == 1) := by
  simp [List.filter_append, sec]

theorem bytes_toList (l : List UInt8) : (bytes l).data.toList = l := by simp [bytes]

theorem componentize_inverse : Spec.componentize_inverse := by
  intro before after tail core h
  have hc := replaceCoreModuleL_sections before after placeholderModule tail core (fun s hs h1 => (h s hs h1).1)
  have ht := replaceCoreModuleL_sections before after core tail placeholderModule (fun s hs h1 => (h s hs h1).2)
  refine ⟨bytes (componentHeader ++ (before ++ (1, core ++ tail) :: after).flatMap fun s => sectionOf s.1 s.2), ?_, ?_, ?_⟩
  · simp only [componentize, replaceCoreModule, bytes_toList]
    erw [hc]; rfl
  · simp only [extractCore, extractCoreL, bytes_toList, sectionsOf_sections]
    simp only [bind, Except.bind, modules_around]
    have hnone : List.findIdx? (fun s => placeholderModule.isPrefixOf s.body) ((before.map sec).filter (·.id == 1)) = none := by
      rw [List.findIdx?_eq_none_iff]
      intro x hx
      simp only [List.mem_filter, List.mem_map] at hx
      obtain ⟨⟨s, hs, rfl⟩, hid⟩ := hx
      have := (h s (List.mem_append_left _ hs) (by simpa [sec] using hid)).1
      exact Bool.eq_false_iff.mpr fun h' => this (List.isPrefixOf_iff_prefix.mp h')
    rw [List.findIdx?_append, hnone, List.findIdx?_cons]
    have hp : placeholderModule.isPrefixOf (sec (1, placeholderModule ++ tail)).body = true := by
      simp [sec, List.isPrefixOf_iff_prefix]
    simp only [hp, ↓reduceIte, Option.map_some, Nat.zero_add, Option.none_or]
    rw [List.getD_eq_getElem?_getD, List.getElem?_append_right (Nat.le_refl _), Nat.sub_self,
      List.getElem?_append_right (by simp), Nat.sub_self]
    simp [sec, Except.map, bytes]
  · simp only [makeTemplate, replaceCoreModule, bytes_toList]
    erw [ht]; rfl

/-! ## Custom section names -/

/-- The first byte of a character's UTF-8 encoding: the character itself
below 128, otherwise at least 0xc0. -/
theorem utf8EncodeChar_head (d : Char) : ∃ b bs, String.utf8EncodeChar d = b :: bs ∧
    (d.toNat < 128 → b.toNat = d.toNat ∧ bs = []) ∧ (128 ≤ d.toNat → 192 ≤ b.toNat) := by
  unfold String.utf8EncodeChar
  simp only [Char.toNat]
  split
  · refine ⟨_, _, rfl, fun _ => ⟨?_, rfl⟩, fun h => by omega⟩
    simp only [UInt8.toNat_ofNat']; omega
  · split
    · refine ⟨_, _, rfl, fun h => by omega, fun _ => ?_⟩
      simp only [UInt8.toNat_ofNat']; omega
    · split
      · refine ⟨_, _, rfl, fun h => by omega, fun _ => ?_⟩
        simp only [UInt8.toNat_ofNat']; omega
      · refine ⟨_, _, rfl, fun h => by omega, fun _ => ?_⟩
        simp only [UInt8.toNat_ofNat']; omega

/-- For an ASCII pattern, comparing UTF-8 bytes is comparing characters. -/
theorem ascii_isPrefixOf (p : List Char) (hp : ∀ c ∈ p, c.toNat < 128) (l : List Char) :
    (p.flatMap String.utf8EncodeChar).isPrefixOf (l.flatMap String.utf8EncodeChar) = p.isPrefixOf l := by
  induction p generalizing l with
  | nil => simp [List.isPrefixOf]
  | cons c p ih =>
    obtain ⟨b, bs, hc, hca, -⟩ := utf8EncodeChar_head c
    obtain ⟨hb, rfl⟩ := hca (hp c (by simp))
    have ih' := ih (fun x hx => hp x (by simp [hx]))
    cases l with
    | nil => simp [List.isPrefixOf, hc]
    | cons d l =>
      obtain ⟨b', bs', hd, hda, hdn⟩ := utf8EncodeChar_head d
      simp only [List.flatMap_cons, hc, hd, List.cons_append, List.isPrefixOf]
      by_cases h : d.toNat < 128
      · obtain ⟨hb', rfl⟩ := hda h
        simp only [List.nil_append, ih']
        congr 1
        apply Bool.eq_iff_iff.mpr
        simp only [beq_iff_eq]
        constructor
        · intro e
          have : b.toNat = b'.toNat := by rw [e]
          exact Char.ext (UInt32.toNat_inj.mp (by simp only [Char.toNat] at hb hb'; omega))
        · rintro rfl; exact UInt8.toNat_inj.mp (by omega)
      · have h1 : (b == b') = false := by
          simp only [beq_eq_false_iff_ne, ne_eq]
          intro e; have := hdn (by omega); rw [e] at hb; have := hp c (by simp); omega
        have h2 : (c == d) = false := by
          simp only [beq_eq_false_iff_ne, ne_eq]
          rintro rfl; exact h (hp c (by simp))
        simp [h1, h2]

theorem componentTypeBytes_eq : componentTypeBytes = "component-type".toList.flatMap String.utf8EncodeChar := by
  decide

theorem toUTF8_toList (s : String) : s.toUTF8.data.toList = s.toList.flatMap String.utf8EncodeChar := by
  rw [String.toUTF8_eq_toByteArray, ← String.utf8Encode_toList, List.utf8Encode, List.toList_data_toByteArray]

theorem componentType_bytes (n : String) :
    componentTypeBytes.isPrefixOf n.toUTF8.data.toList = n.startsWith "component-type" := by
  rw [componentTypeBytes_eq, toUTF8_toList, ascii_isPrefixOf _ (by decide)]
  apply Bool.eq_iff_iff.mpr
  rw [List.isPrefixOf_iff_prefix, String.startsWith_string_iff]

/-! ## Dropping component-type sections -/

theorem keepSections_nil : keepSections [] = [] := by
  rw [keepSections.eq_def]

theorem keepSections_section (id : UInt8) (body rest : List UInt8) :
    keepSections (sectionOf id body ++ rest) =
      (if id == 0 && componentTypeBytes.isPrefixOf
          (((body ++ rest).drop (readLebJS (body ++ rest)).2).take (readLebJS (body ++ rest)).1)
        then [] else sectionOf id body) ++ keepSections rest := by
  have e : sectionOf id body ++ rest = id :: (leb body.length ++ (body ++ rest)) := by simp [sectionOf]
  rw [e, keepSections.eq_def]
  dsimp only
  rw [readLebJS_leb]
  dsimp only
  have h1 : (leb body.length ++ (body ++ rest)).drop ((leb body.length).length + body.length) = rest := by
    simp [List.drop_append]
  have h2 : (leb body.length ++ (body ++ rest)).take ((leb body.length).length + body.length) = leb body.length ++ body := by
    simp [List.take_append, List.take_of_length_le (Nat.le_add_right _ _)]
  have h3 : (leb body.length ++ (body ++ rest)).drop (leb body.length).length = body ++ rest := by simp
  rw [h1, h2, h3]
  simp [sectionOf]

theorem keepSections_sec (s : Sec) (hs : ∀ id b, s = .other id b → id ≠ 0) (rest : List UInt8) :
    keepSections (s.encoding ++ rest) = (if s.componentType then [] else s.encoding) ++ keepSections rest := by
  cases s with
  | other id b =>
    have : (id == 0) = false := by simpa using hs id b rfl
    simp [Sec.encoding, Sec.componentType, keepSections_section, this]
  | custom n c =>
    simp only [Sec.encoding, Sec.componentType, keepSections_section, name, vec, List.append_assoc,
      readLebJS_leb]
    have : ((leb n.toUTF8.data.toList.length ++ (n.toUTF8.data.toList ++ (c ++ rest))).drop
        (leb n.toUTF8.data.toList.length).length).take n.toUTF8.data.toList.length = n.toUTF8.data.toList := by
      simp
    rw [this, componentType_bytes]
    simp

theorem drops_only_component_type : Spec.drops_only_component_type := by
  intro ss hss
  have key : ∀ ss : List Sec, (∀ s ∈ ss, ∀ id b, s = .other id b → id ≠ 0) →
      keepSections (ss.flatMap Sec.encoding) = (ss.filter (!·.componentType)).flatMap Sec.encoding := by
    intro ss h
    induction ss with
    | nil => simp [keepSections_nil]
    | cons s ss ih =>
      rw [List.flatMap_cons, keepSections_sec s (h s (by simp)), ih (fun x hx => h x (by simp [hx]))]
      by_cases hc : s.componentType <;> simp [hc]
  simp only [withoutComponentType, bytes]
  have hd : (moduleHeader ++ ss.flatMap Sec.encoding).drop 8 = ss.flatMap Sec.encoding := by simp [moduleHeader]
  have ht : (moduleHeader ++ ss.flatMap Sec.encoding).take 8 = moduleHeader := by simp [moduleHeader]
  rw [hd, ht, key ss hss]

/-! ## The initialization schedule -/

theorem reaches_snoc {e : String → List String} {a b c : String} (h : Reaches e a b) (hc : c ∈ e b) :
    Reaches e a c := by
  induction h with
  | edge hb => exact .trans hb (.edge hc)
  | trans hb _ ih => exact .trans hb (ih hc)

/-- The keys of `calls` not yet seen: what bounds the depth of nested visits. -/
def unseen (calls : List (String × List String)) (S : List String) : Nat :=
  ((calls.map (·.1)).filter fun k => decide (k ∉ S)).length

theorem filter_cons_len (K : List String) (k : String) (S : List String) :
    ((k :: K).filter fun k => decide (k ∉ S)).length =
      (K.filter fun k => decide (k ∉ S)).length + if k ∈ S then 0 else 1 := by
  by_cases h : k ∈ S
  · simp only [List.filter_cons, h, not_true_eq_false, decide_false, Bool.false_eq_true, ↓reduceIte, Nat.add_zero]
  · simp only [List.filter_cons, h, not_false_eq_true, decide_true, ↓reduceIte, List.length_cons]

theorem unseen_mono (K : List String) {S S' : List String} (h : ∀ s ∈ S, s ∈ S') :
    (K.filter fun k => decide (k ∉ S')).length ≤ (K.filter fun k => decide (k ∉ S)).length := by
  induction K with
  | nil => simp
  | cons k K ih =>
    rw [filter_cons_len, filter_cons_len]
    by_cases h1 : k ∈ S' <;> by_cases h2 : k ∈ S
    · simp only [h1, h2, ↓reduceIte]; omega
    · simp only [h1, h2, ↓reduceIte]; omega
    · exact absurd (h k h2) h1
    · simp only [h1, h2, ↓reduceIte]; omega

theorem unseen_lt (K : List String) {u : String} {S : List String} (hu : u ∈ K) (hS : u ∉ S) :
    (K.filter fun k => decide (k ∉ u :: S)).length < (K.filter fun k => decide (k ∉ S)).length := by
  induction K with
  | nil => simp at hu
  | cons k K ih =>
    rw [filter_cons_len, filter_cons_len]
    have hm := unseen_mono K (S := S) (S' := u :: S) (fun s hs => List.mem_cons_of_mem _ hs)
    by_cases hk : k = u
    · subst hk
      rw [ite_eq_left List.mem_cons_self, ite_eq_right hS]; omega
    · have hu' : u ∈ K := by
        rcases List.mem_cons.mp hu with h | h
        · exact absurd h.symm hk
        · exact h
      have := ih hu'
      by_cases h2 : k ∈ S
      · rw [ite_eq_left (List.mem_cons_of_mem _ h2), ite_eq_left h2]; omega
      · have : k ∉ u :: S := by
          intro h; rcases List.mem_cons.mp h with h | h
          · exact hk h
          · exact h2 h
        rw [ite_eq_right this, ite_eq_right h2]; omega

theorem mem_keys_of_edges {calls : List (String × List String)} {u : String} (h : edgesOf calls u ≠ []) :
    u ∈ calls.map (·.1) := by
  unfold edgesOf at h
  cases hl : calls.lookup u with
  | none => simp [hl] at h
  | some l =>
    have : (calls.lookup u).isSome := by simp [hl]
    obtain ⟨p, hp, he⟩ := List.lookup_isSome_iff.mp this
    exact List.mem_map.mpr ⟨p, hp, (beq_iff_eq.mp he).symm⟩

section
variable (calls : List (String × List String)) (keep : List String) (name : String)

/-- What holds of the walk's state (`seen`, `order`) between visits, with `T`
the units whose visit is in progress (`name` and the stack). -/
structure Inv (T : List String) (st : List String × List String) : Prop where
  closed : ∀ x ∈ st.1, x ∉ T → ∀ y ∈ edgesOf calls x, y ∈ st.1
  stack : ∀ t ∈ T, t ∈ st.1
  reach : ∀ s ∈ st.1, s = name ∨ Reaches (edgesOf calls) name s
  out : ∀ y, y ∈ st.2 ↔ y ∈ st.1 ∧ y ∉ T ∧ y ∈ keep
  nodup : st.2.Nodup
  order : ∀ x ∈ st.2, ∀ y ∈ st.2, Reaches (edgesOf calls) x y → st.2.idxOf y < st.2.idxOf x
  noback : ∀ s ∈ st.1, s ∉ T → ∀ t ∈ T, ¬ Reaches (edgesOf calls) s t

/-- From a finished unit, the walk has seen everything reachable, none of it in progress. -/
theorem Inv.reached {calls keep name T st} (h : Inv calls keep name T st) {s z : String}
    (hs : s ∈ st.1) (hsT : s ∉ T) (hr : Reaches (edgesOf calls) s z) : z ∈ st.1 ∧ z ∉ T := by
  induction hr with
  | @edge a b hb =>
    exact ⟨h.closed a hs hsT b hb, fun hbT => h.noback a hs hsT b hbT (.edge hb)⟩
  | @trans a b c hb _ ih =>
    have hbS := h.closed a hs hsT b hb
    have hbT : b ∉ T := fun hbT => h.noback a hs hsT b hbT (.edge hb)
    exact ih hbS hbT

/-- The conditions under which `visit` of `u` keeps the invariant. -/
def Pre (T : List String) (u : String) : Prop :=
  (u = name ∨ Reaches (edgesOf calls) name u) ∧ ∀ t ∈ T, t ≠ u ∧ ¬ Reaches (edgesOf calls) u t

/-- What `visit` of `u` with fuel `F` guarantees. -/
def VisitSpec (F : Nat) : Prop :=
  ∀ (T : List String) (st : List String × List String) (u : String),
    Inv calls keep name T st → Pre calls name T u → unseen calls st.1 + 1 ≤ F → name ∈ T →
    Inv calls keep name T (visit calls keep F st u) ∧ u ∈ (visit calls keep F st u).1 ∧
      ∀ s ∈ st.1, s ∈ (visit calls keep F st u).1

theorem fold_spec {F : Nat} (hF : VisitSpec calls keep name F) (T : List String) :
    ∀ (vs : List String) (st : List String × List String),
      Inv calls keep name T st → (∀ v ∈ vs, Pre calls name T v) → unseen calls st.1 + 1 ≤ F → name ∈ T →
      Inv calls keep name T (vs.foldl (visit calls keep F) st) ∧ (∀ v ∈ vs, v ∈ (vs.foldl (visit calls keep F) st).1) ∧
        ∀ s ∈ st.1, s ∈ (vs.foldl (visit calls keep F) st).1
  | [], st, hi, _, _, _ => ⟨hi, by simp, fun _ h => h⟩
  | v :: vs, st, hi, hp, hu, hn => by
    obtain ⟨hi1, hv1, hm1⟩ := hF T st v hi (hp v (by simp)) hu hn
    have hu1 : unseen calls (visit calls keep F st v).1 + 1 ≤ F :=
      Nat.le_trans (Nat.succ_le_succ (unseen_mono _ hm1)) hu
    obtain ⟨hi2, hv2, hm2⟩ := fold_spec hF T vs _ hi1 (fun w hw => hp w (by simp [hw])) hu1 hn
    refine ⟨hi2, ?_, fun s hs => hm2 s (hm1 s hs)⟩
    intro w hw
    rcases List.mem_cons.mp hw with rfl | hw
    · exact hm2 _ hv1
    · exact hv2 w hw

theorem visit_spec (hac : Acyclic (edgesOf calls)) : ∀ F, VisitSpec calls keep name F := by
  intro F
  induction F with
  | zero => intro T st u _ _ hF _; omega
  | succ F ih =>
    intro T st u hi hp hF hn
    obtain ⟨S, O⟩ := st
    by_cases huS : u ∈ S
    · rw [show visit calls keep (F + 1) (S, O) u = (S, O) by simp [visit, huS]]
      exact ⟨hi, huS, fun _ h => h⟩
    simp only [visit, huS, ↓reduceIte]
    obtain ⟨hreach, hT⟩ := hp
    -- Entering u: u joins the stack.
    have hi1 : Inv calls keep name (u :: T) (u :: S, O) := by
      refine ⟨?_, ?_, ?_, ?_, hi.nodup, hi.order, ?_⟩
      · intro x hx hxT y hy
        have hxS : x ∈ S := by
          rcases List.mem_cons.mp hx with rfl | h
          · exact absurd List.mem_cons_self hxT
          · exact h
        exact List.mem_cons_of_mem _ (hi.closed x hxS (fun h => hxT (List.mem_cons_of_mem _ h)) y hy)
      · intro t ht
        rcases List.mem_cons.mp ht with rfl | h
        · exact List.mem_cons_self
        · exact List.mem_cons_of_mem _ (hi.stack t h)
      · intro s hs
        rcases List.mem_cons.mp hs with rfl | h
        · exact hreach
        · exact hi.reach s h
      · intro y
        rw [hi.out y]
        constructor
        · rintro ⟨hyS, hyT, hk⟩
          refine ⟨List.mem_cons_of_mem _ hyS, ?_, hk⟩
          intro h; rcases List.mem_cons.mp h with rfl | h
          · exact huS hyS
          · exact hyT h
        · rintro ⟨hyS, hyT, hk⟩
          refine ⟨?_, fun h => hyT (List.mem_cons_of_mem _ h), hk⟩
          rcases List.mem_cons.mp hyS with rfl | h
          · exact absurd List.mem_cons_self hyT
          · exact h
      · intro s hs hsT t ht hr
        have hsS : s ∈ S := by
          rcases List.mem_cons.mp hs with rfl | h
          · exact absurd List.mem_cons_self hsT
          · exact h
        have hsT' : s ∉ T := fun h => hsT (List.mem_cons_of_mem _ h)
        rcases List.mem_cons.mp ht with rfl | h
        · exact huS (hi.reached hsS hsT' hr).1
        · exact hi.noback s hsS hsT' t h hr
    -- Its calls satisfy the conditions of a visit.
    have hpre : ∀ v ∈ edgesOf calls u, Pre calls name (u :: T) v := by
      intro v hv
      refine ⟨?_, ?_⟩
      · rcases hreach with rfl | h
        · exact Or.inr (.edge hv)
        · exact Or.inr (reaches_snoc h hv)
      · intro t ht
        rcases List.mem_cons.mp ht with rfl | h
        · exact ⟨fun e => by subst e; exact hac _ (.edge hv), fun r => hac _ (.trans hv r)⟩
        · obtain ⟨htu, hnr⟩ := hT t h
          exact ⟨fun e => by subst e; exact hnr (.edge hv), fun r => hnr (.trans hv r)⟩
    have hn1 : name ∈ u :: T := List.mem_cons_of_mem _ hn
    -- The calls, visited in turn.
    have hfold : Inv calls keep name (u :: T) ((edgesOf calls u).foldl (visit calls keep F) (u :: S, O)) ∧
        (∀ v ∈ edgesOf calls u, v ∈ ((edgesOf calls u).foldl (visit calls keep F) (u :: S, O)).1) ∧
        ∀ s ∈ u :: S, s ∈ ((edgesOf calls u).foldl (visit calls keep F) (u :: S, O)).1 := by
      by_cases hnil : edgesOf calls u = []
      · rw [hnil]; exact ⟨hi1, by simp, fun _ h => h⟩
      · have hlt := unseen_lt (calls.map (·.1)) (mem_keys_of_edges hnil) huS
        exact fold_spec calls keep name ih (u :: T) _ _ hi1 hpre (by unfold unseen at hF ⊢; dsimp only at hF ⊢; omega) hn1
    obtain ⟨hi2, hv2, hm2⟩ := hfold
    generalize hst : (edgesOf calls u).foldl (visit calls keep F) (u :: S, O) = st2 at hi2 hv2 hm2
    obtain ⟨S2, O2⟩ := st2
    simp only at hi2 hv2 hm2 ⊢
    have huS2 : u ∈ S2 := hm2 u List.mem_cons_self
    have huO2 : u ∉ O2 := fun h => ((hi2.out u).mp h).2.1 List.mem_cons_self
    have huT : u ∉ T := fun h => (hT u h).1 rfl
    -- Leaving u.
    refine ⟨⟨?_, ?_, hi2.reach, ?_, ?_, ?_, ?_⟩, huS2, fun s hs => hm2 s (List.mem_cons_of_mem _ hs)⟩
    · intro x hx hxT y hy
      by_cases hxu : x = u
      · subst hxu; exact hv2 y hy
      · exact hi2.closed x hx (fun h => by rcases List.mem_cons.mp h with h | h; exact hxu h; exact hxT h) y hy
    · intro t ht; exact hi2.stack t (List.mem_cons_of_mem _ ht)
    · intro y
      by_cases hk : u ∈ keep
      · simp only [hk, ↓reduceIte, List.mem_append, List.mem_singleton, hi2.out y]
        constructor
        · rintro (⟨hyS, hyT, hyk⟩ | rfl)
          · exact ⟨hyS, fun h => hyT (List.mem_cons_of_mem _ h), hyk⟩
          · exact ⟨huS2, huT, hk⟩
        · rintro ⟨hyS, hyT, hyk⟩
          by_cases hyu : y = u
          · exact Or.inr hyu
          · exact Or.inl ⟨hyS, fun h => by rcases List.mem_cons.mp h with h | h; exact hyu h; exact hyT h, hyk⟩
      · simp only [hk, ↓reduceIte, hi2.out y]
        constructor
        · rintro ⟨hyS, hyT, hyk⟩
          exact ⟨hyS, fun h => hyT (List.mem_cons_of_mem _ h), hyk⟩
        · rintro ⟨hyS, hyT, hyk⟩
          have hyu : y ≠ u := by rintro rfl; exact hk hyk
          exact ⟨hyS, fun h => by rcases List.mem_cons.mp h with h | h; exact hyu h; exact hyT h, hyk⟩
    · by_cases hk : u ∈ keep
      · simp only [hk, ↓reduceIte]
        exact List.nodup_append.mpr ⟨hi2.nodup, by simp, by simp only [List.mem_singleton]; rintro a ha b rfl rfl; exact huO2 ha⟩
      · simp only [hk, ↓reduceIte]; exact hi2.nodup
    · by_cases hk : u ∈ keep
      · simp only [hk, ↓reduceIte]
        intro x hx y hy hr
        have hidx : ∀ z ∈ O2, (O2 ++ [u]).idxOf z = O2.idxOf z := fun z hz => by
          rw [List.idxOf_append, ite_eq_left hz]
        have hidxu : (O2 ++ [u]).idxOf u = O2.length := by
          rw [List.idxOf_append, ite_eq_right huO2]; simp
        rcases List.mem_append.mp hx with hx1 | hx1 <;> rcases List.mem_append.mp hy with hy1 | hy1
        · rw [hidx x hx1, hidx y hy1]; exact hi2.order x hx1 y hy1 hr
        · have hyu : y = u := List.mem_singleton.mp hy1
          have hxS := (hi2.out x).mp hx1
          exact absurd (hyu ▸ hr) (hi2.noback x hxS.1 hxS.2.1 u List.mem_cons_self)
        · have hxu : x = u := List.mem_singleton.mp hx1
          rw [hidx y hy1, hxu, hidxu]; exact List.idxOf_lt_length_of_mem hy1
        · have hxu : x = u := List.mem_singleton.mp hx1
          have hyu : y = u := List.mem_singleton.mp hy1
          rw [hxu, hyu] at hr; exact absurd hr (hac _)
      · simp only [hk, ↓reduceIte]; exact hi2.order
    · intro s hs hsT t ht hr
      by_cases hsu : s = u
      · subst hsu; exact (hT t ht).2 hr
      · exact hi2.noback s hs (fun h => by rcases List.mem_cons.mp h with h | h; exact hsu h; exact hsT h) t
          (List.mem_cons_of_mem _ ht) hr

end

theorem schedule_reached_kept_first : Spec.schedule_reached_kept_first := by
  intro calls keep n hac
  -- The start: `n` seen and in progress, nothing scheduled.
  have hi0 : Inv calls keep n [n] ([n], []) := by
    refine ⟨?_, by simp, by simp, ?_, by simp, by simp, ?_⟩
    · intro x hx hxT; exact absurd hx hxT
    · intro y; simp only [List.not_mem_nil, false_iff, not_and]; intro h1 h2; exact absurd h1 h2
    · intro s hs hsT; exact absurd hs hsT
  have hpre : ∀ v ∈ edgesOf calls n, Pre calls n [n] v := by
    intro v hv
    refine ⟨Or.inr (.edge hv), ?_⟩
    intro t ht
    simp only [List.mem_singleton] at ht; subst ht
    exact ⟨fun e => by subst e; exact hac _ (.edge hv), fun r => hac _ (.trans hv r)⟩
  have hF : unseen calls [n] + 1 ≤ calls.length + 1 := by
    unfold unseen
    have := List.length_filter_le (fun k => decide (k ∉ [n])) (calls.map (·.1))
    simp only [List.length_map] at this; omega
  obtain ⟨hi, hv, -⟩ := fold_spec calls keep n (visit_spec calls keep n hac _) [n] _ _ hi0 hpre hF List.mem_cons_self
  unfold initializationSchedule
  generalize (edgesOf calls n).foldl (visit calls keep (calls.length + 1)) ([n], []) = st at hi hv
  obtain ⟨S, O⟩ := st
  simp only at hi hv ⊢
  -- Everything reachable from `n` has been seen.
  have hall : ∀ x ∈ S, ∀ y ∈ edgesOf calls x, y ∈ S := by
    intro x hx y hy
    by_cases hxn : x = n
    · subst hxn; exact hv y hy
    · exact hi.closed x hx (by simpa using hxn) y hy
  have hreach : ∀ x y, Reaches (edgesOf calls) x y → x ∈ S → y ∈ S := by
    intro x y hr
    induction hr with
    | edge hb => exact fun hx => hall _ hx _ hb
    | trans hb _ ih => exact fun hx => ih (hall _ hx _ hb)
  have hnS : n ∈ S := hi.stack n List.mem_cons_self
  have hmem : ∀ y, y ∈ O ↔ y ∈ keep ∧ y ≠ n ∧ Reaches (edgesOf calls) n y := by
    intro y
    rw [hi.out y]
    simp only [List.mem_singleton]
    constructor
    · rintro ⟨hyS, hyn, hk⟩
      exact ⟨hk, hyn, (hi.reach y hyS).resolve_left hyn⟩
    · rintro ⟨hk, hyn, hr⟩
      exact ⟨hreach _ _ hr hnS, hyn, hk⟩
  refine ⟨hi.nodup, hmem, ?_⟩
  intro x hx y hk hyn hr
  have hxS := ((hi.out x).mp hx).1
  have hy : y ∈ O := (hi.out y).mpr ⟨hreach _ _ hr hxS, by simpa using hyn, hk⟩
  exact hi.order x hx y hy hr

/-! ## The builtin module closure -/

section
variable (calls : List (String × List String)) (R : String → Prop)

/-- What holds of the walk's state (`seen`, `order`) between visits, with `T`
the specifiers whose visit is in progress. -/
structure CInv (T : List String) (st : List String × List String) : Prop where
  closed : ∀ x ∈ st.1, x ∉ T → ∀ y ∈ edgesOf calls x, y ∈ st.1
  stack : ∀ t ∈ T, t ∈ st.1
  reach : ∀ s ∈ st.1, R s
  out : ∀ y, y ∈ st.2 ↔ y ∈ st.1 ∧ y ∉ T
  nodup : st.2.Nodup
  order : ∀ x ∈ st.2, ∀ y ∈ st.2, Reaches (edgesOf calls) x y → st.2.idxOf y < st.2.idxOf x
  noback : ∀ s ∈ st.1, s ∉ T → ∀ t ∈ T, ¬ Reaches (edgesOf calls) s t

/-- From a finished unit, the walk has seen everything reachable, none of it in progress. -/
theorem CInv.reached {calls R T st} (h : CInv calls R T st) {s z : String}
    (hs : s ∈ st.1) (hsT : s ∉ T) (hr : Reaches (edgesOf calls) s z) : z ∈ st.1 ∧ z ∉ T := by
  induction hr with
  | @edge a b hb =>
    exact ⟨h.closed a hs hsT b hb, fun hbT => h.noback a hs hsT b hbT (.edge hb)⟩
  | @trans a b c hb _ ih =>
    have hbS := h.closed a hs hsT b hb
    have hbT : b ∉ T := fun hbT => h.noback a hs hsT b hbT (.edge hb)
    exact ih hbS hbT

/-- The conditions under which `visit` of `u` keeps the invariant. -/
def CPre (T : List String) (u : String) : Prop :=
  R u ∧ ∀ t ∈ T, t ≠ u ∧ ¬ Reaches (edgesOf calls) u t

/-- What `visit` of `u` with fuel `F` guarantees. -/
def CVisitSpec (F : Nat) : Prop :=
  ∀ (T : List String) (st : List String × List String) (u : String),
    CInv calls R T st → CPre calls R T u → unseen calls st.1 + 1 ≤ F →
    CInv calls R T (closureVisit calls F st u) ∧ u ∈ (closureVisit calls F st u).1 ∧
      ∀ s ∈ st.1, s ∈ (closureVisit calls F st u).1

theorem cfold_spec {F : Nat} (hF : CVisitSpec calls R F) (T : List String) :
    ∀ (vs : List String) (st : List String × List String),
      CInv calls R T st → (∀ v ∈ vs, CPre calls R T v) → unseen calls st.1 + 1 ≤ F →
      CInv calls R T (vs.foldl (closureVisit calls F) st) ∧ (∀ v ∈ vs, v ∈ (vs.foldl (closureVisit calls F) st).1) ∧
        ∀ s ∈ st.1, s ∈ (vs.foldl (closureVisit calls F) st).1
  | [], st, hi, _, _ => ⟨hi, by simp, fun _ h => h⟩
  | v :: vs, st, hi, hp, hu => by
    obtain ⟨hi1, hv1, hm1⟩ := hF T st v hi (hp v (by simp)) hu
    have hu1 : unseen calls (closureVisit calls F st v).1 + 1 ≤ F :=
      Nat.le_trans (Nat.succ_le_succ (unseen_mono _ hm1)) hu
    obtain ⟨hi2, hv2, hm2⟩ := cfold_spec hF T vs _ hi1 (fun w hw => hp w (by simp [hw])) hu1
    refine ⟨hi2, ?_, fun s hs => hm2 s (hm1 s hs)⟩
    intro w hw
    rcases List.mem_cons.mp hw with rfl | hw
    · exact hm2 _ hv1
    · exact hv2 w hw

theorem cvisit_spec (hR : ∀ x y, R x → y ∈ edgesOf calls x → R y) (hac : Acyclic (edgesOf calls)) : ∀ F, CVisitSpec calls R F := by
  intro F
  induction F with
  | zero => intro T st u _ _ hF; omega
  | succ F ih =>
    intro T st u hi hp hF
    obtain ⟨S, O⟩ := st
    by_cases huS : u ∈ S
    · rw [show closureVisit calls (F + 1) (S, O) u = (S, O) by simp [closureVisit, huS]]
      exact ⟨hi, huS, fun _ h => h⟩
    simp only [closureVisit, huS, ↓reduceIte]
    obtain ⟨hreach, hT⟩ := hp
    -- Entering u: u joins the stack.
    have hi1 : CInv calls R (u :: T) (u :: S, O) := by
      refine ⟨?_, ?_, ?_, ?_, hi.nodup, hi.order, ?_⟩
      · intro x hx hxT y hy
        have hxS : x ∈ S := by
          rcases List.mem_cons.mp hx with rfl | h
          · exact absurd List.mem_cons_self hxT
          · exact h
        exact List.mem_cons_of_mem _ (hi.closed x hxS (fun h => hxT (List.mem_cons_of_mem _ h)) y hy)
      · intro t ht
        rcases List.mem_cons.mp ht with rfl | h
        · exact List.mem_cons_self
        · exact List.mem_cons_of_mem _ (hi.stack t h)
      · intro s hs
        rcases List.mem_cons.mp hs with rfl | h
        · exact hreach
        · exact hi.reach s h
      · intro y
        rw [hi.out y]
        constructor
        · rintro ⟨hyS, hyT⟩
          refine ⟨List.mem_cons_of_mem _ hyS, ?_⟩
          intro h; rcases List.mem_cons.mp h with rfl | h
          · exact huS hyS
          · exact hyT h
        · rintro ⟨hyS, hyT⟩
          refine ⟨?_, fun h => hyT (List.mem_cons_of_mem _ h)⟩
          rcases List.mem_cons.mp hyS with rfl | h
          · exact absurd List.mem_cons_self hyT
          · exact h
      · intro s hs hsT t ht hr
        have hsS : s ∈ S := by
          rcases List.mem_cons.mp hs with rfl | h
          · exact absurd List.mem_cons_self hsT
          · exact h
        have hsT' : s ∉ T := fun h => hsT (List.mem_cons_of_mem _ h)
        rcases List.mem_cons.mp ht with rfl | h
        · exact huS (hi.reached hsS hsT' hr).1
        · exact hi.noback s hsS hsT' t h hr
    -- Its calls satisfy the conditions of a visit.
    have hpre : ∀ v ∈ edgesOf calls u, CPre calls R (u :: T) v := by
      intro v hv
      refine ⟨?_, ?_⟩
      · exact hR u v hreach hv
      · intro t ht
        rcases List.mem_cons.mp ht with rfl | h
        · exact ⟨fun e => by subst e; exact hac _ (.edge hv), fun r => hac _ (.trans hv r)⟩
        · obtain ⟨htu, hnr⟩ := hT t h
          exact ⟨fun e => by subst e; exact hnr (.edge hv), fun r => hnr (.trans hv r)⟩
    -- The calls, visited in turn.
    have hfold : CInv calls R (u :: T) ((edgesOf calls u).foldl (closureVisit calls F) (u :: S, O)) ∧
        (∀ v ∈ edgesOf calls u, v ∈ ((edgesOf calls u).foldl (closureVisit calls F) (u :: S, O)).1) ∧
        ∀ s ∈ u :: S, s ∈ ((edgesOf calls u).foldl (closureVisit calls F) (u :: S, O)).1 := by
      by_cases hnil : edgesOf calls u = []
      · rw [hnil]; exact ⟨hi1, by simp, fun _ h => h⟩
      · have hlt := unseen_lt (calls.map (·.1)) (mem_keys_of_edges hnil) huS
        exact cfold_spec calls R ih (u :: T) _ _ hi1 hpre (by unfold unseen at hF ⊢; dsimp only at hF ⊢; omega)
    obtain ⟨hi2, hv2, hm2⟩ := hfold
    generalize hst : (edgesOf calls u).foldl (closureVisit calls F) (u :: S, O) = st2 at hi2 hv2 hm2
    obtain ⟨S2, O2⟩ := st2
    simp only at hi2 hv2 hm2 ⊢
    have huS2 : u ∈ S2 := hm2 u List.mem_cons_self
    have huO2 : u ∉ O2 := fun h => ((hi2.out u).mp h).2 List.mem_cons_self
    have huT : u ∉ T := fun h => (hT u h).1 rfl
    -- Leaving u.
    refine ⟨⟨?_, ?_, hi2.reach, ?_, ?_, ?_, ?_⟩, huS2, fun s hs => hm2 s (List.mem_cons_of_mem _ hs)⟩
    · intro x hx hxT y hy
      by_cases hxu : x = u
      · subst hxu; exact hv2 y hy
      · exact hi2.closed x hx (fun h => by rcases List.mem_cons.mp h with h | h; exact hxu h; exact hxT h) y hy
    · intro t ht; exact hi2.stack t (List.mem_cons_of_mem _ ht)
    · intro y
      simp only [List.mem_append, List.mem_singleton, hi2.out y]
      constructor
      · rintro (⟨hyS, hyT⟩ | rfl)
        · exact ⟨hyS, fun h => hyT (List.mem_cons_of_mem _ h)⟩
        · exact ⟨huS2, huT⟩
      · rintro ⟨hyS, hyT⟩
        by_cases hyu : y = u
        · exact Or.inr hyu
        · exact Or.inl ⟨hyS, fun h => by rcases List.mem_cons.mp h with h | h; exact hyu h; exact hyT h⟩
    · exact List.nodup_append.mpr ⟨hi2.nodup, by simp, by simp only [List.mem_singleton]; rintro a ha b rfl rfl; exact huO2 ha⟩
    · intro x hx y hy hr
      have hidx : ∀ z ∈ O2, (O2 ++ [u]).idxOf z = O2.idxOf z := fun z hz => by
        rw [List.idxOf_append, ite_eq_left hz]
      have hidxu : (O2 ++ [u]).idxOf u = O2.length := by
        rw [List.idxOf_append, ite_eq_right huO2]; simp
      rcases List.mem_append.mp hx with hx1 | hx1 <;> rcases List.mem_append.mp hy with hy1 | hy1
      · rw [hidx x hx1, hidx y hy1]; exact hi2.order x hx1 y hy1 hr
      · have hyu : y = u := List.mem_singleton.mp hy1
        have hxS := (hi2.out x).mp hx1
        exact absurd (hyu ▸ hr) (hi2.noback x hxS.1 hxS.2 u List.mem_cons_self)
      · have hxu : x = u := List.mem_singleton.mp hx1
        rw [hidx y hy1, hxu, hidxu]; exact List.idxOf_lt_length_of_mem hy1
      · have hxu : x = u := List.mem_singleton.mp hx1
        have hyu : y = u := List.mem_singleton.mp hy1
        rw [hxu, hyu] at hr; exact absurd hr (hac _)
    · intro s hs hsT t ht hr
      by_cases hsu : s = u
      · subst hsu; exact (hT t ht).2 hr
      · exact hi2.noback s hs (fun h => by rcases List.mem_cons.mp h with h | h; exact hsu h; exact hsT h) t
          (List.mem_cons_of_mem _ ht) hr

end

theorem builtin_closure : Spec.builtin_closure := by
  intro imports requested hac
  let roots := requested.filter isBuiltinModule
  let R := fun s => ∃ r ∈ requested, r.startsWith "lasm:" ∧ (s = r ∨ Reaches (edgesOf imports) r s)
  have hR : ∀ x y, R x → y ∈ edgesOf imports x → R y := by
    rintro x y ⟨r, hr, hb, hx⟩ hy
    refine ⟨r, hr, hb, Or.inr ?_⟩
    rcases hx with rfl | hx
    · exact .edge hy
    · exact reaches_snoc hx hy
  have hi0 : CInv imports R [] ([], []) := ⟨by simp, by simp, by simp, by simp, by simp, by simp, by simp⟩
  have hpre : ∀ v ∈ roots, CPre imports R [] v := by
    intro v hv
    have := List.mem_filter.mp hv
    exact ⟨⟨v, this.1, this.2, Or.inl rfl⟩, by simp⟩
  have hF : unseen imports [] + 1 ≤ imports.length + 1 := by
    unfold unseen
    have := List.length_filter_le (fun k => decide (k ∉ ([] : List String))) (imports.map (·.1))
    simp only [List.length_map] at this; omega
  obtain ⟨hi, hv, -⟩ := cfold_spec imports R (cvisit_spec imports R hR hac _) [] roots _ hi0 hpre hF
  unfold builtinModuleClosure
  generalize roots.foldl (closureVisit imports (imports.length + 1)) ([], []) = st at hi hv
  obtain ⟨S, O⟩ := st
  simp only at hi hv ⊢
  have hall : ∀ x ∈ S, ∀ y ∈ edgesOf imports x, y ∈ S := fun x hx => hi.closed x hx (by simp)
  have hreach : ∀ x y, Reaches (edgesOf imports) x y → x ∈ S → y ∈ S := by
    intro x y hr
    induction hr with
    | edge hb => exact fun hx => hall _ hx _ hb
    | trans hb _ ih => exact fun hx => ih (hall _ hx _ hb)
  have hOS : ∀ y, y ∈ O ↔ y ∈ S := fun y => by simpa using hi.out y
  refine ⟨hi.nodup, ?_, ?_⟩
  · intro m
    rw [hOS m]
    constructor
    · exact hi.reach m
    · rintro ⟨r, hr, hb, hm⟩
      have hrS : r ∈ S := hv r (List.mem_filter.mpr ⟨hr, hb⟩)
      rcases hm with rfl | hm
      · exact hrS
      · exact hreach _ _ hm hrS
  · intro x hx y hy hyO
    exact hi.order x hx y hyO (.edge hy)

/-! ## The command line: suggestions and the parser -/

/-- The Levenshtein distance, by its recurrence on the last characters (the
lists are words reversed). -/
def lev : List Char → List Char → Nat
  | [], ys => ys.length
  | _ :: xs, [] => xs.length + 1
  | x :: xs, y :: ys => min (min (lev xs (y :: ys) + 1) (lev (x :: xs) ys + 1)) (lev xs ys + if x = y then 0 else 1)

theorem lev_nil_left (ys : List Char) : lev [] ys = ys.length := by cases ys <;> simp [lev]
theorem lev_nil_right (xs : List Char) : lev xs [] = xs.length := by cases xs <;> simp [lev]
theorem lev_cons_cons (x y : Char) (xs ys : List Char) :
    lev (x :: xs) (y :: ys) = min (min (lev xs (y :: ys) + 1) (lev (x :: xs) ys + 1)) (lev xs ys + if x = y then 0 else 1) := by
  simp [lev]

/-- The cells of a row after the first column: for the reversed prefix `r`
of `a`, `p` the reversed prefix of `b` filled so far and `ys` the rest of `b`. -/
def cols (r : List Char) : List Char → List Char → List Nat
  | _, [] => []
  | p, y :: ys => lev r (y :: p) :: cols r (y :: p) ys

theorem nextCells_cols (x : Char) (r : List Char) : ∀ (p ys : List Char),
    nextCells x ys (cols r p ys) (lev r p) (lev (x :: r) p) = cols (x :: r) p ys
  | _, [] => by simp [cols, nextCells]
  | p, y :: ys => by
    simp only [cols, nextCells]
    rw [← lev_cons_cons, nextCells_cols x r (y :: p) ys]

theorem cols_nil (p : List Char) : ∀ ys : List Char, cols [] p ys = List.range' (p.length + 1) ys.length
  | [] => rfl
  | y :: ys => by simp [cols, lev_nil_left, cols_nil (y :: p) ys, List.range'_succ]

theorem getLastD_cols (r : List Char) : ∀ (d : Nat) (p ys : List Char),
    (lev r p :: cols r p ys).getLastD d = lev r (ys.reverse ++ p)
  | _, p, [] => by simp [cols]
  | d, p, y :: ys => by
    rw [cols, List.getLastD_cons, getLastD_cols r _ (y :: p) ys]
    simp

theorem editDistance_lev (a b : String) : editDistance a b = lev a.toList.reverse b.toList.reverse := by
  unfold editDistance
  have fold : ∀ (l r : List Char), l.foldl (fun (s : Nat × List Nat) x => (s.1 + 1, (s.1 + 1) :: nextCells x b.toList s.2.tail (s.2.headD 0) (s.1 + 1)))
      (r.length, lev r [] :: cols r [] b.toList) = (r.length + l.length, lev (l.reverse ++ r) [] :: cols (l.reverse ++ r) [] b.toList) := by
    intro l
    induction l with
    | nil => intro r; simp
    | cons x l ih =>
      intro r
      rw [List.foldl_cons]
      have h : nextCells x b.toList (cols r [] b.toList) (lev r []) (r.length + 1) = cols (x :: r) [] b.toList := by
        rw [← nextCells_cols x r [] b.toList, lev_nil_right, lev_nil_right]; rfl
      simp only [List.tail_cons, List.headD_cons]
      rw [h, show (r.length + 1, (r.length + 1) :: cols (x :: r) [] b.toList) = ((x :: r).length, lev (x :: r) [] :: cols (x :: r) [] b.toList) by
        simp [lev_nil_right], ih (x :: r)]
      simp; omega
  have first : List.range (b.toList.length + 1) = lev [] [] :: cols [] [] b.toList := by
    rw [cols_nil, lev_nil_left, List.range_eq_range', List.range'_succ]; simp
  have := fold a.toList []
  simp only [List.length_nil, List.append_nil, Nat.zero_add] at this
  show (List.foldl (fun (s : Nat × List Nat) x => (s.1 + 1, (s.1 + 1) :: nextCells x b.toList s.2.tail (s.2.headD 0) (s.1 + 1)))
    (0, List.range (b.toList.length + 1)) a.toList).2.getLastD 0 = _
  rw [first, this, getLastD_cols]
  simp

theorem lev_self : ∀ l : List Char, lev l l = 0
  | [] => lev_nil_left []
  | x :: l => by rw [lev_cons_cons, lev_self l]; simp

theorem cost_comm (x y : Char) : (if x = y then 0 else 1) = (if y = x then 0 else 1) := by
  by_cases h : x = y <;> simp [h, Ne.symm]

theorem cost_le (x y : Char) : (if x = y then 0 else 1) ≤ 1 := by split <;> simp

theorem cost_triangle (x y z : Char) : (if x = z then 0 else 1) ≤ (if x = y then 0 else 1) + (if y = z then 0 else 1) := by
  by_cases h1 : x = y <;> by_cases h2 : y = z <;> simp_all <;> split <;> simp

theorem cost_zero {x y : Char} (h : (if x = y then 0 else 1) = 0) : x = y := by
  by_cases h' : x = y
  · exact h'
  · simp [h'] at h

theorem lev_comm : ∀ a b : List Char, lev a b = lev b a
  | [], b => by rw [lev_nil_left, lev_nil_right]
  | x :: a, [] => by rw [lev_nil_left, lev_nil_right]
  | x :: a, y :: b => by
    rw [lev_cons_cons, lev_cons_cons, lev_comm a (y :: b), lev_comm (x :: a) b, lev_comm a b, cost_comm x y]
    omega
termination_by a b => a.length + b.length

theorem lev_ge : ∀ a b : List Char, a.length ≤ lev a b + b.length ∧ b.length ≤ lev a b + a.length
  | [], b => by rw [lev_nil_left]; simp
  | x :: a, [] => by rw [lev_nil_right]; simp
  | x :: a, y :: b => by
    have h1 := lev_ge a (y :: b)
    have h2 := lev_ge (x :: a) b
    have h3 := lev_ge a b
    simp only [List.length_cons] at *
    rw [lev_cons_cons]
    omega
termination_by a b => a.length + b.length

theorem lev_le_max : ∀ a b : List Char, lev a b ≤ max a.length b.length
  | [], b => by rw [lev_nil_left]; simp
  | x :: a, [] => by rw [lev_nil_right]; simp
  | x :: a, y :: b => by
    have h := lev_le_max a b
    have := cost_le x y
    simp only [List.length_cons]
    rw [lev_cons_cons]
    omega

theorem lev_eq_zero : ∀ a b : List Char, lev a b = 0 → a = b
  | [], b, h => by rw [lev_nil_left] at h; exact (List.length_eq_zero_iff.mp h).symm
  | x :: a, [], h => by rw [lev_nil_right] at h; simp at h
  | x :: a, y :: b, h => by
    rw [lev_cons_cons] at h
    have h' : lev a b + (if x = y then 0 else 1) = 0 := by omega
    have hxy : x = y := cost_zero (by omega)
    rw [hxy, lev_eq_zero a b (by omega)]

theorem lev_triangle : ∀ a b c : List Char, lev a c ≤ lev a b + lev b c
  | [], b, c => by have := (lev_ge b c).2; rw [lev_nil_left, lev_nil_left]; omega
  | x :: a, b, [] => by have := (lev_ge (x :: a) b).1; rw [lev_nil_right, lev_nil_right]; omega
  | x :: a, [], z :: c => by
    have := lev_le_max (x :: a) (z :: c)
    rw [lev_nil_right, lev_nil_left]
    omega
  | x :: a, y :: b, z :: c => by
    have t1 := lev_triangle a (y :: b) (z :: c)
    have t2 := lev_triangle (x :: a) (y :: b) c
    have t3 := lev_triangle (x :: a) b (z :: c)
    have t4 := lev_triangle (x :: a) b c
    have t5 := lev_triangle a b (z :: c)
    have t6 := lev_triangle a b c
    have := cost_triangle x y z
    have e1 := lev_cons_cons x y a b
    have e2 := lev_cons_cons y z b c
    have e3 := lev_cons_cons x z a c
    omega
termination_by a b c => a.length + b.length + c.length

theorem edit_distance_metric : Spec.edit_distance_metric := by
  intro a b c
  have len : ∀ s : String, s.toList.reverse.length = s.length := fun s => by
    rw [List.length_reverse, String.length_toList]
  have inj : ∀ s t : String, s ≠ t → s.toList.reverse ≠ t.toList.reverse := by
    intro s t h h'
    exact h (String.toList_inj.mp (List.reverse_inj.mp h'))
  simp only [editDistance_lev, ← len, String.toList_empty, List.reverse_nil]
  refine ⟨lev_self _, lev_nil_right _, lev_nil_left _, lev_comm _ _, lev_triangle _ _ _, ?_, ?_, lev_le_max _ _, ?_⟩
  · have := (lev_ge a.toList.reverse b.toList.reverse).1; omega
  · have := (lev_ge a.toList.reverse b.toList.reverse).2; omega
  · intro h
    have := inj a b h
    exact Nat.pos_of_ne_zero fun h0 => this (lev_eq_zero _ _ h0)

/-- One step of `closest`'s loop, with the distance `D`. -/
def closestStep (D : String → Nat) (s : Option String × Option Nat) (c : String) : Option String × Option Nat :=
  if s.2.all (D c < ·) then (some c, some (D c)) else s

theorem closest_fold (D : String → Nat) : ∀ (cs : List String) (s : Option String × Option Nat),
    cs.foldl (closestStep D) s = match nearestFirst D cs with
      | some c => if s.2.all (D c < ·) then (some c, some (D c)) else s
      | none => s
  | [], s => rfl
  | c :: cs, (best, dist) => by
    rw [List.foldl_cons, closest_fold D cs, nearestFirst]
    cases h : nearestFirst D cs with
    | none => rfl
    | some c' =>
      simp only [closestStep]
      by_cases h1 : D c' < D c
      · simp only [h1, ↓reduceIte]
        cases dist with
        | none => simp [h1]
        | some d =>
          by_cases h2 : D c < d
          · simp [h1, h2]; omega
          · simp [h2]
      · simp only [h1, ↓reduceIte]
        cases dist with
        | none => simp [h1]
        | some d =>
          by_cases h2 : D c < d
          · simp [h1, h2]
          · simp [h2]; omega

theorem toLower_of_isLower {c : Char} (h : c.isLower = true) : c.toLower = c := by
  unfold Char.toLower
  apply dite_eq_right_iff.mpr
  intro hu
  exfalso
  unfold Char.isLower at h
  have h1 : 'a'.val ≤ c.val := by simp_all
  have h2 := hu.2
  rw [UInt32.le_iff_toNat_le] at h1 h2
  simp at h1 h2
  omega

theorem asciiLower_lower {s : String} (h : s.all Char.isLower) : asciiLower s = s := by
  apply String.ext
  rw [asciiLower, String.toList_map]
  rw [String.all_bool_eq] at h
  conv => rhs; rw [← List.map_id s.toList]
  apply List.map_congr_left
  intro c hc
  exact toLower_of_isLower (List.all_eq_true.mp h c hc)

theorem closest_nearest_first : Spec.closest_nearest_first := by
  intro word cs hw hcs
  have step : cs.foldl (init := ((none : Option String), (none : Option Nat)))
      (fun (s : Option String × Option Nat) c =>
        if s.2.all (editDistance (asciiLower word) (asciiLower c) < ·) then (some c, some (editDistance (asciiLower word) (asciiLower c))) else s) =
      cs.foldl (closestStep (editDistance word)) (none, none) := by
    have congr : ∀ (l : List String) (s : Option String × Option Nat), (∀ c ∈ l, c.all Char.isLower) →
        l.foldl (fun (s : Option String × Option Nat) c =>
          if s.2.all (editDistance (asciiLower word) (asciiLower c) < ·) then (some c, some (editDistance (asciiLower word) (asciiLower c))) else s) s =
        l.foldl (closestStep (editDistance word)) s := by
      intro l
      induction l with
      | nil => intro s _; rfl
      | cons c l ih =>
        intro s hl
        have e : (if s.2.all (editDistance (asciiLower word) (asciiLower c) < ·) then (some c, some (editDistance (asciiLower word) (asciiLower c)))
            else s) = closestStep (editDistance word) s c := by
          rw [asciiLower_lower hw, asciiLower_lower (hl c (by simp))]; rfl
        simp only [List.foldl_cons]
        rw [e]
        exact ih _ fun c' h' => hl c' (by simp [h'])
    exact congr cs _ hcs
  show (match cs.foldl (init := ((none : Option String), (none : Option Nat))) (fun (s : Option String × Option Nat) c =>
        if s.2.all (editDistance (asciiLower word) (asciiLower c) < ·) then (some c, some (editDistance (asciiLower word) (asciiLower c))) else s) with
      | (best, distance) => if distance.any (· ≤ max 2 ((best.map String.length).getD 0 / 3)) then best else none) = _
  rw [step, closest_fold]
  cases nearestFirst (editDistance word) cs with
  | none => rfl
  | some c => simp only [Option.all, Option.any, Option.filter, threshold]; split <;> simp_all

theorem unknown_flag_refused : Spec.unknown_flag_refused := by
  intro flag hdash hknown hvalued
  simp only [knownFlags, List.mem_cons, List.not_mem_nil, or_false, not_or] at hknown
  simp only [valuedForm, valuedFlags, List.any_cons, List.any_nil, Bool.or_false, Bool.or_eq_false_iff] at hvalued
  obtain ⟨h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11, h12⟩ := hknown
  obtain ⟨v1, v2, v3⟩ := hvalued
  have hv : valuedOf flag = none := by
    simp at v1 v2 v3
    simp [valuedOf, valuedOption, h10, h11, h12, v1, v2, v3]
  have hm : valuedOf "Main.lean" = none := by simp [valuedOf, valuedOption]
  constructor
  · simp [parseLasmArguments, parseLasmArgumentsWith, parseLasmArgumentsWith.rest, parseLasmArgumentsWith.program, optionLoop, hm,
      h1, h2, h3, h4, h5, h6, h7, h8, h9, hv, hdash]
  · simp [parseLasmArguments, parseLasmArgumentsWith, parseLasmArgumentsWith.rest, parseLasmArgumentsWith.program, optionLoop,
      h1, h2, h3, h4, h5, h6, h7, h8, h9, hv, hdash]

theorem endsWith_iff {s t : String} : s.endsWith t = true ↔ t.toList <:+ s.toList := by
  rw [← String.endsWith_toSlice, String.Slice.endsWith_string_iff, String.copy_toSlice]

/-- The options of running a program that take no value, applied in order. -/
def runFlags (r : Parsed) : List String → Parsed
  | [] => r
  | f :: fs => runFlags (if f = "--rebuild" then { r with rebuild? := some true }
      else if f = "--verbose" then { r with verbose? := some true } else if f = "--release" then { r with profile? := some "release" } else r) fs

theorem optionLoop_runFlags (pos sup rest : List String) : ∀ (flags : List String) (r : Parsed),
    (∀ f ∈ flags, f ∈ ["--rebuild", "--verbose", "--release"]) → r.profile? = none ∨ r.profile? = some "release" →
    optionLoop r pos sup (flags ++ rest) = optionLoop (runFlags r flags) pos sup rest
  | [], r, _, _ => rfl
  | f :: fs, r, hf, hp => by
    have hf' : f = "--rebuild" ∨ f = "--verbose" ∨ f = "--release" := by simpa using hf f (by simp)
    have hfs : ∀ f ∈ fs, f ∈ ["--rebuild", "--verbose", "--release"] := fun g hg => hf g (by simp [hg])
    rw [List.cons_append, optionLoop, runFlags]
    rcases hf' with rfl | rfl | rfl
    · simp; exact optionLoop_runFlags pos sup rest fs _ hfs hp
    · simp; exact optionLoop_runFlags pos sup rest fs _ hfs hp
    · have hd : ("--release".drop 2).copy = "release" := by decide
      rcases hp with hp | hp <;> simp [hd, hp] <;> exact optionLoop_runFlags pos sup rest fs _ hfs (Or.inr rfl)

theorem runFlags_fields : ∀ (flags : List String) (r : Parsed),
    (runFlags r flags).command = r.command ∧ (runFlags r flags).args? = r.args? ∧ (runFlags r flags).input? = r.input? ∧
    (runFlags r flags).output? = r.output? ∧ (runFlags r flags).allowDev? = r.allowDev? ∧
    (runFlags r flags).suspend? = r.suspend? ∧ (runFlags r flags).bundler? = r.bundler? ∧
    (runFlags r flags).target? = r.target? ∧
    (runFlags r flags).rebuild? = (if flags.contains "--rebuild" then some true else r.rebuild?) ∧
    (runFlags r flags).verbose? = (if flags.contains "--verbose" then some true else r.verbose?) ∧
    (runFlags r flags).profile? = (if flags.contains "--release" then some "release" else r.profile?)
  | [], r => by simp [runFlags]
  | f :: fs, r => by
    rw [runFlags]
    have := runFlags_fields fs (if f = "--rebuild" then { r with rebuild? := some true }
      else if f = "--verbose" then { r with verbose? := some true } else if f = "--release" then { r with profile? := some "release" } else r)
    by_cases h1 : f = "--rebuild"
    · subst h1; simp_all
    · by_cases h2 : f = "--verbose"
      · subst h2; simp_all
      · by_cases h3 : f = "--release"
        · subst h3; simp_all
        · simp only [h1, h2, h3, ite_false] at this ⊢
          simp_all [eq_comm]

/-- A word that does not start with `-` is no option: the loop takes it as
the input, and then `--` ends it, keeping what follows. -/
theorem optionLoop_source {src : String} (hdash : ¬ src.startsWith "-") (r : Parsed) (args : List String) (hr : r.command = "run") :
    optionLoop r [] [] (src :: "--" :: args) = .ok (some ({ r with args? := some args }, [src])) := by
  have hd : ¬ ['-'] <+: src.toList := by simpa using hdash
  have pfx : ∀ l : List Char, ¬ ('-' :: l) <+: src.toList := fun l h =>
    hd ((List.cons_prefix_cons.mpr ⟨rfl, List.nil_prefix⟩).trans h)
  have ne : ∀ lit : String, lit.startsWith "-" = true → src ≠ lit := by rintro lit h rfl; exact hdash h
  have hv : valuedOf src = none := by
    simp [valuedOf, valuedOption, pfx, ne "--target" (by simp), ne "--suspend" (by simp), ne "--output" (by simp)]
  rw [optionLoop]
  simp [ne "--" (by simp), ne "--help" (by simp), ne "-h" (by simp), ne "--rebuild" (by simp), ne "--verbose" (by simp),
    ne "--dev" (by simp), ne "--release" (by simp), ne "--allow-dev" (by simp), ne "--bundler" (by simp), hv, hd]
  rw [optionLoop]
  simp [hr]

theorem finish_run (env : ArgumentsEnv) {src : String} (r : Parsed) (hc : r.command = "run") (ho : r.output? = none)
    (ha : r.allowDev? = none) (hs : r.suspend? = none) (hb : r.bundler? = none) (ht : r.target? = none)
    (hpath : pathLike src = true) (hlean : src.endsWith ".lean" = true) (hjson : src.endsWith ".json" = false) :
    finish env r [src] = .ok { r with input? := some src, profile? := some (r.profile?.getD "dev") } := by
  unfold finish
  cases r.profile? <;> simp [hc, ho, ha, hs, hb, ht, hpath, hlean, hjson, placeOutput, defaultProfile, checkOptions]

theorem run_args_kept : Spec.run_args_kept := by
  intro src flags args hlean hdash hflags
  have suffix := endsWith_iff.mp hlean
  have hpath : pathLike src = true := by
    rw [pathLike, List.any_eq_true]
    exact ⟨'.', suffix.subset (by simp), by decide⟩
  have hjson : src.endsWith ".json" = false := by
    rw [Bool.eq_false_iff]; intro h
    have := List.suffix_of_suffix_length_le suffix (endsWith_iff.mp h) (by simp)
    have := this.eq_of_length (by simp)
    simp at this
  have notWord : ∀ w : String, ¬ ".lean".toList <:+ w.toList → src ≠ w := by rintro w h rfl; exact h suffix
  let env : ArgumentsEnv := ⟨fileExists, jsRuntime, parseInitArguments, parseDevArguments, parsePackageArguments⟩
  have hprog : parseLasmArguments (flags ++ [src, "--"] ++ args) =
      parseLasmArgumentsWith.program env parseLasmArgumentsWith.start (flags ++ src :: "--" :: args) := by
    cases flags with
    | nil =>
      simp [parseLasmArguments, parseLasmArgumentsWith, parseLasmArgumentsWith.rest, notWord "init" (by decide),
        notWord "dev" (by decide), notWord "package" (by decide), notWord "editor" (by decide), notWord "cache" (by decide),
        notWord "build" (by decide), notWord "run" (by decide)]
      rfl
    | cons f fs =>
      have hf : f = "--rebuild" ∨ f = "--verbose" ∨ f = "--release" := by simpa using hflags f (by simp)
      rcases hf with rfl | rfl | rfl <;>
        simp [parseLasmArguments, parseLasmArgumentsWith, parseLasmArgumentsWith.rest] <;> rfl
  have fields := runFlags_fields flags parseLasmArgumentsWith.start
  rw [hprog, parseLasmArgumentsWith.program, optionLoop_runFlags _ _ _ flags _ hflags (Or.inl rfl),
    optionLoop_source hdash _ args (by rw [fields.1]; rfl)]
  obtain ⟨f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11⟩ := fields
  dsimp only
  rw [finish_run env { runFlags parseLasmArgumentsWith.start flags with args? := some args } f1 f4 f5 f6 f7 f8 hpath hlean hjson]
  refine ⟨_, rfl, f1, rfl, rfl, ?_, ?_, ?_⟩
  · simp only [Parsed.rebuild, f9]; split <;> simp_all [parseLasmArgumentsWith.start]
  · simp only [Parsed.verbose, f10]; split <;> simp_all [parseLasmArgumentsWith.start]
  · simp only [Parsed.profile, f11]; split <;> simp_all [parseLasmArgumentsWith.start]

/-! ## The command line: every parse is known, or refused readably

Each parser's errors are messages with a character that is not whitespace
(`NB`, decided on the literal that starts each message), and each loop keeps
an invariant of what it has accepted (`LoopOK`). -/

/-- A text with a character that is not whitespace. -/
abbrev NB (s : String) : Prop := ∃ c ∈ s.toList, c.isWhitespace = false

theorem nb_left {a : String} (b : String) (h : NB a) : NB (a ++ b) := by
  obtain ⟨c, hc, hw⟩ := h; exact ⟨c, by simp [hc], hw⟩
theorem nb_right (a : String) {b : String} (h : NB b) : NB (a ++ b) := by
  obtain ⟨c, hc, hw⟩ := h; exact ⟨c, by simp [hc], hw⟩

theorem nb_initUsage : NB initUsage := by
  unfold initUsage; repeat (with_reducible apply nb_left)
  decide
theorem nb_devUsage : NB devUsage := by
  unfold devUsage; repeat (with_reducible apply nb_left)
  decide
theorem nb_packageUsage : NB packageUsage := by
  unfold packageUsage; repeat (with_reducible apply nb_left)
  decide
theorem nb_cliUsage : NB cliUsage := by
  unfold cliUsage; repeat (with_reducible apply nb_left)
  decide

syntax "nb" : tactic
macro_rules
  | `(tactic| nb) => `(tactic| first
    | with_reducible exact nb_initUsage | with_reducible exact nb_devUsage
    | with_reducible exact nb_packageUsage | with_reducible exact nb_cliUsage
    | (with_reducible apply nb_left; nb) | (with_reducible apply nb_right; nb) | decide)

def LoopOK {α} (P : α → Prop) : Except String (Option α) → Prop
  | .ok (some a) => P a
  | .ok none => True
  | .error m => NB m

theorem initLoop_spec (toks : List String) (st : InitState) (h : ∀ d ∈ st.deploy, d ∈ deployTargets) :
    LoopOK (fun st' : InitState => ∀ d ∈ st'.deploy, d ∈ deployTargets) (initLoop st toks) := by
  fun_induction initLoop st toks <;> simp only [LoopOK] at *
  all_goals first
    | exact h
    | (with_reducible show NB _; nb)
    | (rename_i ih; exact ih h)
    | (rename_i ih; apply ih; intro d hd; split at hd
       · exact h d hd
       · simp only [List.mem_append, List.mem_singleton] at hd
         rcases hd with hd | rfl
         · exact h _ hd
         · rename_i hv _; exact Decidable.not_not.mp hv)

theorem deployChecks_nb (template : String) (deploy : List String) :
    ∀ (ts : List DeployTarget) (m : String), deployChecks template deploy ts = .error m → NB m
  | [], m, h => by simp [deployChecks] at h
  | t :: ts, m, h => by
    unfold deployChecks at h
    split at h
    · cases h; nb
    · split at h
      · cases h; nb
      · exact deployChecks_nb template deploy ts m h

/-- What a parse of `lasm init` gives. -/
def InitOK : Except String Parsed → Prop
  | .ok p => (p.command = "init" ∧ p.template ∈ templates ∧ ∀ d ∈ p.deploy, d ∈ deployTargets) ∨ p.command = "init-help"
  | .error m => NB m

theorem parseInit_spec (toks : List String) : InitOK (parseInitArguments toks) := by
  have hl := initLoop_spec toks {} (by simp)
  unfold parseInitArguments
  split
  · rename_i e he; rw [he] at hl; exact hl
  · simp [InitOK]
  · rename_i st hst
    rw [hst] at hl
    simp only [LoopOK] at hl
    unfold initFinish initFinish.finishChecks
    split
    · simp only [InitOK]; nb
    · split
      · simp only [InitOK]; nb
      · rename_i t ht
        have htm : st.template ∈ templates := by
          have := List.find?_some ht; have hm := List.mem_of_find?_eq_some ht
          simp at this; simp only [templates, List.mem_map]; exact ⟨t, hm, this⟩
        dsimp only
        repeat' split
        all_goals first
          | (simp only [InitOK]; nb)
          | (simp only [InitOK]; exact deployChecks_nb _ _ _ _ ‹_›)
          | (simp only [InitOK, Parsed.template, Parsed.deploy, Option.getD]; exact Or.inl ⟨trivial, htm, hl⟩)

/-! ### `lasm package` -/

/-- What a parse of `lasm package` gives. -/
def PackageOK : Except String Parsed → Prop
  | .ok p => (p.command = "package" ∧ (p.target ∈ packageTargets ∨ p.target = "browser")) ∨ p.command = "package-help"
  | .error m => NB m

theorem packageLoop_spec (toks : List String) (r : Parsed) (pos : List String) (h : r.command = "package") :
    LoopOK (fun x : Parsed × List String => x.1.command = "package") (packageLoop r pos toks) := by
  fun_induction packageLoop r pos toks <;> simp only [LoopOK] at *
  all_goals first
    | exact h
    | (with_reducible show NB _; nb)
    | (rename_i ih; exact ih h)
    | (rename_i ih; apply ih; split <;> exact h)

theorem parsePackage_spec (toks : List String) : PackageOK (parsePackageArguments toks) := by
  have hl := packageLoop_spec toks { command := "package" } [] rfl
  unfold parsePackageArguments
  split
  · rename_i e he; rw [he] at hl; exact hl
  · simp [PackageOK]
  · rename_i r pos hst
    rw [hst] at hl
    simp only [LoopOK] at hl
    repeat' split
    all_goals first
      | (simp only [PackageOK]; nb)
      | (simp only [PackageOK, Parsed.target, Option.getD]; refine Or.inl ⟨hl, ?_⟩; simp_all
         exact Decidable.or_iff_not_imp_left.mpr ‹_›)

/-! ### `lasm dev` -/

/-- What a parse of `lasm dev` gives. -/
def DevOK : Except String Parsed → Prop
  | .ok p => (p.command = "dev" ∧ ∀ o ∈ p.outputs, o.1 ∈ devTargets ∧ o.2.endsWith ".lean") ∨ p.command = "dev-help"
  | .error m => NB m

/-- An output of `--target` as the loop keeps it. -/
def OutputOK (o : String × Option String) : Prop := o.1 ∈ devTargets ∧ ∀ i, o.2 = some i → i.endsWith ".lean"

theorem devOutput_err {item m : String} (h : devOutput item = .error m) : NB m := by
  unfold devOutput at h
  dsimp only at h
  split at h
  · cases h; nb
  · split at h
    · cases h; nb
    · cases h

theorem devOutput_ok {item : String} {o : String × Option String} (h : devOutput item = .ok o) : OutputOK o := by
  unfold devOutput at h
  dsimp only at h
  split at h
  · cases h
  · split at h
    · cases h
    · rename_i h1 h2
      cases h
      refine ⟨Decidable.not_not.mp h1, fun i hi => ?_⟩
      cases hj : (item.splitOn "=")[1]? with
      | none => simp [hj] at hi
      | some j =>
        simp only [hj, Option.filter] at hi h2
        split at hi
        · cases hi; simpa using h2
        · cases hi

theorem mapM_devOutput_ok : ∀ (items : List String) (os : List (String × Option String)),
    items.mapM devOutput = .ok os → ∀ o ∈ os, OutputOK o
  | [], os, h => by simp [pure, Except.pure] at h; subst h; simp
  | item :: items, os, h => by
    rw [List.mapM_cons] at h
    cases hd : devOutput item <;> rw [hd] at h
    · cases h
    · cases hm : items.mapM devOutput <;> rw [hm] at h
      · cases h
      · simp only [bind, Except.bind, pure, Except.pure, Except.ok.injEq] at h
        subst h
        intro o ho
        simp only [List.mem_cons] at ho
        rcases ho with rfl | ho
        · exact devOutput_ok hd
        · exact mapM_devOutput_ok items _ hm o ho

theorem mapM_devOutput_err : ∀ (items : List String) (m : String), items.mapM devOutput = .error m → NB m
  | [], m, h => by simp [pure, Except.pure] at h
  | item :: items, m, h => by
    rw [List.mapM_cons] at h
    cases hd : devOutput item <;> rw [hd] at h
    · cases h; exact devOutput_err hd
    · cases hm : items.mapM devOutput <;> rw [hm] at h
      · cases h; exact mapM_devOutput_err items _ hm
      · cases h

/-- The loop's invariant. -/
def DevInv (st : DevState) : Prop :=
  st.result.command = "dev" ∧ (∀ os, st.outputs = some os → ∀ o ∈ os, OutputOK o) ∧ (st.outputs = none → st.result.target? = none)

theorem devSetValued_err {st : DevState} {name : String} {v : Option String} {m : String}
    (h : devSetValued st name v = .error m) : NB m := by
  unfold devSetValued at h
  repeat' split at h
  all_goals first
    | (cases h; done)
    | (cases h; nb)
    | (rename_i hm; cases h; exact mapM_devOutput_err _ _ hm)

theorem devSetValued_ok {st st' : DevState} {name : String} {v : Option String} (hi : DevInv st)
    (h : devSetValued st name v = .ok st') : DevInv st' := by
  unfold devSetValued at h
  repeat' split at h
  all_goals first
    | (cases h; done)
    | (cases h; exact ⟨hi.1, hi.2.1, hi.2.2⟩)
    | (rename_i hm _; cases h; exact ⟨hi.1, fun os' h' => by cases h'; exact mapM_devOutput_ok _ _ hm, fun h' => by cases h'⟩)

theorem devLoop_spec (toks : List String) (st : DevState) (h : DevInv st) :
    LoopOK DevInv (devLoop st toks) := by
  fun_induction devLoop st toks <;> simp only [LoopOK] at *
  all_goals first
    | exact h
    | (with_reducible show NB _; nb)
    | exact ⟨h.1, h.2.1, h.2.2⟩
    | (rename_i ih; exact ih ⟨h.1, h.2.1, h.2.2⟩)
    | (rename_i hs ih; exact ih (devSetValued_ok h hs))
    | (rename_i hs; exact devSetValued_err hs)

theorem jsRuntime_dev : jsRuntime ∈ devTargets := by
  rcases jsRuntimeOf.property with h | h | h <;> simp [jsRuntime, h, devTargets, runtimeTargets]

theorem devFinal (st : DevState) (hl : DevInv st) (input : String) (hin : input.endsWith ".lean" = true) :
    ∀ o ∈ (st.outputs.getD [(st.result.target?.getD jsRuntime, none)]).map (fun x => (x.1, x.2.getD input)),
      o.1 ∈ devTargets ∧ o.2.endsWith ".lean" = true := by
  intro o ho
  simp only [List.mem_map] at ho
  obtain ⟨⟨t, i⟩, hti, rfl⟩ := ho
  cases hos : st.outputs with
  | none =>
    rw [hos] at hti
    simp only [Option.getD, List.mem_singleton, Prod.mk.injEq] at hti
    obtain ⟨rfl, rfl⟩ := hti
    simp only [hl.2.2 hos, Option.getD]
    exact ⟨jsRuntime_dev, hin⟩
  | some os =>
    rw [hos] at hti
    have := hl.2.1 os hos _ hti
    refine ⟨this.1, ?_⟩
    cases i with
    | none => exact hin
    | some i => exact this.2 i rfl

theorem parseDev_spec (toks : List String) : DevOK (parseDevArguments toks) := by
  have hl := devLoop_spec toks { result := { command := "dev", profile? := some "dev", args? := some [], run? := some true, verbose? := some false } }
    ⟨rfl, (fun _ h => nomatch h), fun _ => rfl⟩
  unfold parseDevArguments parseDevArgumentsWith
  dsimp only
  split
  · rename_i e he; rw [he] at hl; exact hl
  · simp [DevOK]
  · rename_i st hst
    rw [hst] at hl
    simp only [LoopOK] at hl
    unfold devFinish
    split
    · simp only [DevOK]; nb
    · dsimp only
      split
      · simp only [DevOK]; nb
      · rename_i hin
        have hin' : (st.positional.head?.getD (((st.outputs.getD []).findSome? (·.2)).getD "Main.lean")).endsWith ".lean" = true := by
          simpa using hin
        repeat' split
        all_goals first
          | (simp only [DevOK]; nb)
          | exact Or.inl ⟨hl.1, devFinal st hl _ hin'⟩

/-! ### `lasm build` and running a program -/

/-- The option loop's invariant. -/
def ProgInv (r : Parsed) : Prop := (r.command = "run" ∨ r.command = "build") ∧ ∀ t, r.target? = some t → t ∈ buildTargets

theorem setValued_err {r : Parsed} {sup : List String} {name : String} {v : Option String} {m : String}
    (h : setValued r sup name v = .error m) : NB m := by
  unfold setValued at h
  repeat' split at h
  all_goals first
    | (cases h; done)
    | (cases h; nb)

theorem setValued_ok {r r' : Parsed} {sup : List String} {name : String} {v : Option String} (hi : ProgInv r)
    (h : setValued r sup name v = .ok r') : ProgInv r' := by
  unfold setValued at h
  repeat' split at h
  all_goals first
    | (cases h; done)
    | (cases h; exact hi)
    | (cases h; exact ⟨hi.1, fun t ht => by cases ht; exact Decidable.not_not.mp ‹_›⟩)

theorem optionLoop_spec (toks : List String) (r : Parsed) (pos sup : List String) (h : ProgInv r) :
    LoopOK (fun x : Parsed × List String => ProgInv x.1) (optionLoop r pos sup toks) := by
  fun_induction optionLoop r pos sup toks <;> simp only [LoopOK] at *
  all_goals first
    | exact h
    | (with_reducible show NB _; nb)
    | exact ⟨h.1, h.2⟩
    | (rename_i ih; exact ih ⟨h.1, h.2⟩)
    | (rename_i hs ih; exact ih (setValued_ok h hs))
    | (rename_i hs; exact setValued_err hs)

/-- What `finish` gives. -/
def FinishOK : Except String Parsed → Prop
  | .ok p => (p.command = "run" ∨ p.command = "build") ∧ (p.command = "build" → p.target ∈ buildTargets) ∧
      (p.input.endsWith ".lean" ∨ p.input.endsWith ".json")
  | .error m => NB m

theorem jsRuntime_build : jsRuntime ∈ buildTargets := by
  rcases jsRuntimeOf.property with h | h | h <;> simp [jsRuntime, h, buildTargets, edgeBuildTargets, wasiBuildTargets]

theorem placeOutput_fields (r : Parsed) (more : List String) :
    (placeOutput r more).1.command = r.command ∧ (placeOutput r more).1.target? = r.target? ∧
      (placeOutput r more).1.input? = r.input? := by
  unfold placeOutput; split
  · split <;> exact ⟨rfl, rfl, rfl⟩
  · exact ⟨rfl, rfl, rfl⟩

theorem defaultProfile_fields (r : Parsed) (first : String) :
    (defaultProfile r first).command = r.command ∧ (defaultProfile r first).target? = r.target? ∧
      (defaultProfile r first).input? = r.input? := by
  unfold defaultProfile; split <;> exact ⟨rfl, rfl, rfl⟩

theorem checkOptions_spec (r : Parsed) (first : String) (hc : r.command = "run" ∨ r.command = "build")
    (ht : ∀ t, r.target? = some t → t ∈ buildTargets) (hi : r.input? = some first)
    (hf : first.endsWith ".lean" = true ∨ first.endsWith ".json" = true) :
    FinishOK (checkOptions ⟨fileExists, jsRuntime, parseInitArguments, parseDevArguments, parsePackageArguments⟩ r first) := by
  have hin : (r.input?.getD "").endsWith ".lean" = true ∨ (r.input?.getD "").endsWith ".json" = true := by simpa [hi] using hf
  have hdef : (r.target?.getD (if jsRuntime = "node" ∨ first.endsWith ".json" = true then "node" else jsRuntime)) ∈ buildTargets := by
    cases hrt : r.target? with
    | some t => exact ht t hrt
    | none => simp only [Option.getD]; split
              · simp [buildTargets]
              · exact jsRuntime_build
  unfold checkOptions
  dsimp only
  generalize r.target?.getD (if jsRuntime = "node" ∨ first.endsWith ".json" = true then "node" else jsRuntime) = T at hdef ⊢
  repeat' split
  all_goals first
    | (show NB _; nb)
    | exact ⟨hc, fun _ => hdef, hin⟩
    | exact ⟨hc, fun hb => absurd hb ‹_›, hin⟩

theorem finish_spec (r : Parsed) (pos : List String) (h : ProgInv r) :
    FinishOK (finish ⟨fileExists, jsRuntime, parseInitArguments, parseDevArguments, parsePackageArguments⟩ r pos) := by
  unfold finish
  cases pos with
  | nil => show NB _; nb
  | cons first more =>
    dsimp only
    split
    · show NB _; nb
    · obtain ⟨h1, h2, h3⟩ := placeOutput_fields { r with input? := some first } more
      generalize placeOutput { r with input? := some first } more = q at h1 h2 h3
      obtain ⟨r', more'⟩ := q
      dsimp only at h1 h2 h3 ⊢
      split
      · show NB _; nb
      · split
        · show NB _; nb
        · split
          · show NB _; nb
          · split
            · show NB _; nb
            · rename_i hx _
              obtain ⟨d1, d2, d3⟩ := defaultProfile_fields r' first
              apply checkOptions_spec
              · rw [d1, h1]; exact h.1
              · rw [d2, h2]; exact h.2
              · rw [d3, h3]
              · simp only [Bool.not_eq_true', Bool.or_eq_false_iff] at hx
                cases hl : first.endsWith ".lean"
                · cases hj : first.endsWith ".json"
                  · simp_all
                  · exact Or.inr rfl
                · exact Or.inl rfl

theorem all_whitespace_of_trimAscii (s : String) (h : s.trimAscii.toString = "") : s.toList.all Char.isWhitespace = true := by
  have h1 : (s.toSlice.dropWhile Char.isWhitespace |>.dropEndWhile Char.isWhitespace).isEmpty = true := by
    have : s.trimAscii.toString = s.trimAscii.copy := rfl
    rw [this, String.Slice.copy_eq_empty_iff] at h
    exact h
  rw [String.Slice.isEmpty_dropEndWhile, String.Slice.revAll_bool_eq] at h1
  have h2 := String.Slice.takeWhile_append_dropWhile (pat := Char.isWhitespace) (s := s.toSlice)
  have h3 : (s.toSlice.takeWhile Char.isWhitespace).copy.toList.all Char.isWhitespace = true := by
    rw [← String.Slice.all_bool_eq]; exact String.Slice.all_takeWhile
  have : s.toList = (s.toSlice.takeWhile Char.isWhitespace).copy.toList ++ (s.toSlice.dropWhile Char.isWhitespace).copy.toList := by
    rw [← String.toList_append, h2]; simp
  rw [this, List.all_append, h1, h3]; rfl

theorem readable_of_nb {m : String} (h : NB m) : m.trimAscii.toString ≠ "" := by
  intro he
  obtain ⟨c, hc, hw⟩ := h
  have := List.all_eq_true.mp (all_whitespace_of_trimAscii m he) c hc
  rw [hw] at this; cases this

/-- What the proposition asks of a parse. -/
def Outcome : Except String Parsed → Prop
  | .ok p => p.command ∈ commands ∧
        (p.command = "build" → p.target ∈ buildTargets) ∧
        ((p.command = "build" ∨ p.command = "run") → p.input.endsWith ".lean" ∨ p.input.endsWith ".json") ∧
        (p.command = "init" → p.template ∈ templates ∧ ∀ d ∈ p.deploy, d ∈ deployTargets) ∧
        (p.command = "package" → p.target ∈ packageTargets ∨ p.target = "browser") ∧
        (p.command = "dev" → ∀ o ∈ p.outputs, o.1 ∈ devTargets ∧ o.2.endsWith ".lean")
  | .error m => m.trimAscii.toString ≠ ""

/-- A parse of a command with no checked fields. -/
theorem outcome_plain (p : Parsed) (h : p.command ∈ ["version", "help", "editor", "cache-repair", "init-help", "dev-help", "package-help"]) :
    Outcome (.ok p) := by
  simp only [List.mem_cons, List.not_mem_nil, or_false] at h
  refine ⟨?_, ?_, ?_, ?_, ?_, ?_⟩ <;> rcases h with h | h | h | h | h | h | h <;> simp [h, commands]

theorem outcome_init (r : Except String Parsed) (h : InitOK r) : Outcome r := by
  cases r with
  | error m => exact readable_of_nb h
  | ok p =>
    rcases h with ⟨hc, ht, hd⟩ | h
    · refine ⟨?_, ?_, ?_, fun _ => ⟨ht, hd⟩, ?_, ?_⟩ <;> simp [hc, commands]
    · exact outcome_plain p (by simp [h])

theorem outcome_dev (r : Except String Parsed) (h : DevOK r) : Outcome r := by
  cases r with
  | error m => exact readable_of_nb h
  | ok p =>
    rcases h with ⟨hc, ho⟩ | h
    · refine ⟨?_, ?_, ?_, ?_, ?_, fun _ => ho⟩ <;> simp [hc, commands]
    · exact outcome_plain p (by simp [h])

theorem outcome_package (r : Except String Parsed) (h : PackageOK r) : Outcome r := by
  cases r with
  | error m => exact readable_of_nb h
  | ok p =>
    rcases h with ⟨hc, ht⟩ | h
    · refine ⟨?_, ?_, ?_, ?_, fun _ => ht, ?_⟩ <;> simp [hc, commands]
    · exact outcome_plain p (by simp [h])

theorem outcome_finish (r : Except String Parsed) (h : FinishOK r) : Outcome r := by
  cases r with
  | error m => exact readable_of_nb h
  | ok p =>
    obtain ⟨hc, ht, hi⟩ := h
    refine ⟨?_, ht, fun _ => hi, ?_, ?_, ?_⟩ <;> rcases hc with hc | hc <;> simp [hc, commands]

theorem parse_known_or_refused : Spec.parse_known_or_refused := by
  intro argv
  show Outcome (parseLasmArguments argv)
  unfold parseLasmArguments parseLasmArgumentsWith
  have hrest : ∀ tokens, Outcome (parseLasmArgumentsWith.rest
      ⟨fileExists, jsRuntime, parseInitArguments, parseDevArguments, parsePackageArguments⟩ tokens) := by
    have hprog : ∀ r toks, ProgInv r → Outcome (parseLasmArgumentsWith.program
        ⟨fileExists, jsRuntime, parseInitArguments, parseDevArguments, parsePackageArguments⟩ r toks) := by
      intro r toks hr
      have hl := optionLoop_spec toks r [] [] hr
      unfold parseLasmArgumentsWith.program
      split
      · rename_i e he; rw [he] at hl; exact readable_of_nb hl
      · exact outcome_plain _ (by simp)
      · rename_i r' pos hst; rw [hst] at hl; exact outcome_finish _ (finish_spec r' pos hl)
    have hstart : ProgInv parseLasmArgumentsWith.start := ⟨Or.inl rfl, fun _ h => nomatch h⟩
    intro tokens
    unfold parseLasmArgumentsWith.rest
    split
    · rename_i c more
      split
      · exact outcome_init _ (parseInit_spec more)
      · split
        · exact outcome_dev _ (parseDev_spec more)
        · split
          · exact outcome_package _ (parsePackage_spec more)
          · split
            · split
              · exact outcome_plain _ (by simp)
              · split
                · exact readable_of_nb (by nb)
                · exact outcome_plain _ (by simp)
            · split
              · split
                · exact outcome_plain _ (by simp)
                · split
                  · exact readable_of_nb (by nb)
                  · exact outcome_plain _ (by simp)
              · split
                · rename_i hc
                  exact hprog _ _ ⟨by rcases hc with hc | hc <;> simp [hc], fun _ h => nomatch h⟩
                · exact hprog _ _ hstart
    · exact hprog _ _ hstart
  split
  · split
    · exact outcome_plain _ (by simp)
    · exact hrest _
  · exact hrest _

/-! ## The command line: build options commute

The loop reads each option group as one `Item` (`itemOf`, `loop_item`); a
group it cannot read stops the build with an error (`loop_no_item`). Two
items that both succeed can be applied in either order to the same effect,
up to the order in which the loop records the options it has seen
(`stepItem_comm`, `Equiv`), so a permutation of the items gives the same
parse (`runItems_perm`); `--flag=value` is the same item as `--flag value`
(`itemOf_joined`). -/

/-- One option group as the loop reads it. -/
inductive Item where
  | flag (f : String)
  | valued (name value : String)
  | pos (w : String)

def flagNames : List String := ["--rebuild", "--verbose", "--dev", "--release", "--allow-dev", "--bundler"]

/-- The item a group is, when it is one the loop accepts without stopping. -/
def itemOf : List String → Option Item
  | [f, v] => match valuedOf f with
    | some (n, none) => some (.valued n v)
    | _ => none
  | [w] =>
    if w = "--" ∨ w = "--help" ∨ w = "-h" then none
    else if w ∈ flagNames then some (.flag w)
    else match valuedOf w with
      | some (n, some v) => some (.valued n v)
      | some (_, none) => none
      | none => if w.startsWith "-" then none else some (.pos w)
  | _ => none

abbrev St := Parsed × List String × List String

/-- What the loop does with an item. -/
def stepItem (s : St) : Item → Except String St
  | .flag f =>
    if f = "--rebuild" then .ok ({ s.1 with rebuild? := some true }, s.2)
    else if f = "--verbose" then .ok ({ s.1 with verbose? := some true }, s.2)
    else if f = "--dev" ∨ f = "--release" then
      let profile := (f.drop 2).toString
      if s.1.profile?.any (· ≠ profile) then .error "Choose one of --dev and --release"
      else .ok ({ s.1 with profile? := some profile }, s.2)
    else if f = "--allow-dev" then .ok ({ s.1 with allowDev? := some true }, s.2)
    else .ok ({ s.1 with bundler? := some true }, s.2)
  | .valued n v => (setValued s.1 s.2.2 n (some v)).map fun r => (r, s.2.1, n :: s.2.2)
  | .pos w => .ok (s.1, s.2.1 ++ [w], s.2.2)

theorem valuedOf_bare {f n : String} (h : valuedOf f = some (n, none)) :
    (f = "--target" ∧ n = "target") ∨ (f = "--suspend" ∧ n = "suspend") ∨ (f = "--output" ∧ n = "output") := by
  simp only [valuedOf, valuedOption] at h
  repeat' split at h
  all_goals simp_all

theorem loop_item (r : Parsed) (pos sup : List String) (g rest : List String) (it : Item) (h : itemOf g = some it) :
    optionLoop r pos sup (g ++ rest) = match stepItem (r, pos, sup) it with
      | .ok s => optionLoop s.1 s.2.1 s.2.2 rest
      | .error e => .error e := by
  match g, h with
  | [f, v], h =>
    simp only [itemOf] at h
    split at h
    · rename_i n hv
      cases h
      have hf := valuedOf_bare hv
      have hne : f ≠ "--" ∧ ¬(f = "--help" ∨ f = "-h") ∧ f ≠ "--rebuild" ∧ f ≠ "--verbose" ∧ ¬(f = "--dev" ∨ f = "--release") ∧
          f ≠ "--allow-dev" ∧ f ≠ "--bundler" := by
        rcases hf with ⟨rfl, -⟩ | ⟨rfl, -⟩ | ⟨rfl, -⟩ <;> decide
      obtain ⟨n1, n2, n3, n4, n5, n6, n7⟩ := hne
      rw [List.cons_append, List.cons_append, optionLoop]
      simp only [n1, n2, n3, n4, n5, n6, n7, ite_false, hv, takeValue, stepItem, List.nil_append]
      cases setValued r sup n (some v) <;> rfl
    · cases h
  | [w], h =>
    simp only [itemOf] at h
    split at h
    · cases h
    · rename_i hw
      split at h
      · cases h
        rename_i hf
        simp only [flagNames, List.mem_cons, List.not_mem_nil, or_false] at hf
        rw [List.cons_append, List.nil_append, optionLoop]
        rcases hf with rfl | rfl | rfl | rfl | rfl | rfl
        all_goals simp only [stepItem]
        all_goals first | (simp; done) | (simp; split <;> rfl)
      · rename_i hf
        split at h
        · rename_i n v hv
          cases h
          have hne : w ≠ "--rebuild" ∧ w ≠ "--verbose" ∧ ¬(w = "--dev" ∨ w = "--release") ∧
              w ≠ "--allow-dev" ∧ w ≠ "--bundler" := by
            simp only [flagNames, List.mem_cons, List.not_mem_nil, or_false, not_or] at hf; simp [hf]
          simp only [not_or] at hw
          obtain ⟨n1, n2, n3, n4, n5⟩ := hne
          rw [List.cons_append, List.nil_append, optionLoop]
          simp only [hw.1, hw.2.1, hw.2.2, n1, n2, n3, n4, n5, false_or, or_self, ite_false, hv, takeValue, stepItem]
          cases setValued r sup n (some v) <;> rfl
        · cases h
        · split at h
          · cases h
          · cases h
            rename_i hv hd
            have hne : w ≠ "--rebuild" ∧ w ≠ "--verbose" ∧ ¬(w = "--dev" ∨ w = "--release") ∧
                w ≠ "--allow-dev" ∧ w ≠ "--bundler" := by
              simp only [flagNames, List.mem_cons, List.not_mem_nil, or_false, not_or] at hf; simp [hf]
            simp only [not_or] at hw
            obtain ⟨n1, n2, n3, n4, n5⟩ := hne
            rw [List.cons_append, List.nil_append, optionLoop]
            simp [hw.1, hw.2.1, hw.2.2, n1, n2, n3, n4, n5, hv, hd, stepItem]

theorem startsWith_iff' {s t : String} : s.startsWith t = true ↔ t.toList <+: s.toList := by
  rw [← String.startsWith_toSlice, String.Slice.startsWith_string_iff, String.copy_toSlice]

theorem sw_true {p q : String} (v : String) (h : q.toList <+: p.toList) : (p ++ v).startsWith q = true := by
  rw [startsWith_iff', String.toList_append]; exact h.trans (List.prefix_append _ _)

theorem sw_false {p q : String} (v : String) (h : ¬ q.toList <+: p.toList) (h' : ¬ p.toList <+: q.toList) :
    (p ++ v).startsWith q = false := by
  rw [← Bool.not_eq_true, startsWith_iff', String.toList_append]
  intro hq
  have hp : p.toList <+: p.toList ++ v.toList := List.prefix_append _ _
  rcases Nat.le_total q.toList.length p.toList.length with hl | hl
  · exact h (List.prefix_of_prefix_length_le hq hp hl)
  · exact h' (List.prefix_of_prefix_length_le hp hq hl)

theorem app_ne {p q : String} (v : String) (h : ¬ p.toList <+: q.toList) : p ++ v ≠ q := by
  intro he; apply h; rw [← he, String.toList_append]; exact List.prefix_append _ _

theorem drop_app (p v : String) : ((p ++ v).drop p.length).copy = v := by
  apply String.toList_inj.mp
  rw [String.toList_copy_drop, String.toList_append, ← String.length_toList, List.drop_left]


/-- `--flag=value` reads as `--flag value`. -/
theorem valuedOf_joined {f n : String} (v : String) (h : valuedOf f = some (n, none)) :
    valuedOf (f ++ "=" ++ v) = some (n, some v) := by
  rcases valuedOf_bare h with ⟨rfl, rfl⟩ | ⟨rfl, rfl⟩ | ⟨rfl, rfl⟩
  · have e : "--target" ++ "=" = "--target=" := by decide
    rw [e]; unfold valuedOf valuedOption
    rw [if_neg (app_ne v (by decide)), if_pos (sw_true v (by decide))]
    exact congrArg (fun x => some ("target", some x)) (drop_app "--target=" v)
  · have e : "--suspend" ++ "=" = "--suspend=" := by decide
    rw [e]; unfold valuedOf valuedOption
    rw [if_neg (app_ne v (by decide)), if_neg (by rw [sw_false v (by decide) (by decide)]; decide)]
    simp only []
    rw [if_neg (app_ne v (by decide)), if_pos (sw_true v (by decide))]
    exact congrArg (fun x => some ("suspend", some x)) (drop_app "--suspend=" v)
  · have e : "--output" ++ "=" = "--output=" := by decide
    rw [e]; unfold valuedOf valuedOption
    rw [if_neg (app_ne v (by decide)), if_neg (by rw [sw_false v (by decide) (by decide)]; decide)]
    simp only []
    rw [if_neg (app_ne v (by decide)), if_neg (by rw [sw_false v (by decide) (by decide)]; decide)]
    simp only []
    rw [if_neg (app_ne v (by decide)), if_pos (sw_true v (by decide))]
    exact congrArg (fun x => some ("output", some x)) (drop_app "--output=" v)

theorem itemOf_joined (g : List String) (hg : OptionGroup g) : itemOf (joined g) = itemOf g := by
  match g, hg with
  | [f, v], hg =>
    simp only [OptionGroup, valuedFlags, List.mem_cons, List.not_mem_nil, or_false] at hg
    have hv : ∃ n, valuedOf f = some (n, none) := by
      rcases hg with rfl | rfl | rfl
      · exact ⟨"target", by simp [valuedOf, valuedOption]⟩
      · exact ⟨"suspend", by simp [valuedOf, valuedOption]⟩
      · exact ⟨"output", by simp [valuedOf, valuedOption]⟩
    obtain ⟨n, hv⟩ := hv
    have hj : joined [f, v] = [f ++ "=" ++ v] := by
      simp only [joined, valuedFlags, List.mem_cons, List.not_mem_nil, or_false]; rw [if_pos hg]
    rw [hj]
    simp only [itemOf, hv]
    have hne : ∀ t ∈ ["--", "--help", "-h", "--rebuild", "--verbose", "--dev", "--release", "--allow-dev", "--bundler"],
        f ++ "=" ++ v ≠ t := by
      intro t ht
      rcases hg with rfl | rfl | rfl <;>
        simp only [List.mem_cons, List.not_mem_nil, or_false] at ht <;>
        rcases ht with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl <;>
        exact app_ne v (by decide)
    simp only [List.mem_cons, List.not_mem_nil, or_false, forall_eq_or_imp, forall_eq] at hne
    obtain ⟨h1, h2, h3, h4, h5, h6, h7, h8, h9⟩ := hne
    simp [h1, h2, h3, flagNames, h4, h5, h6, h7, h8, h9, valuedOf_joined v hv]
  | [w], _ => rfl


/-- The loop over items. -/
def runItems (s : St) : List Item → Except String St
  | [] => .ok s
  | it :: its => match stepItem s it with
    | .ok s' => runItems s' its
    | .error e => .error e

theorem loop_items : ∀ (gs : List (List String)) (its : List Item) (r : Parsed) (pos sup : List String),
    gs.mapM itemOf = some its →
    optionLoop r pos sup gs.flatten = match runItems (r, pos, sup) its with
      | .ok s => .ok (some (s.1, s.2.1))
      | .error e => .error e
  | [], its, r, pos, sup, h => by
    simp only [List.mapM_nil, pure, Option.some.injEq] at h; subst h
    simp [runItems, optionLoop]
  | g :: gs, its, r, pos, sup, h => by
    rw [List.mapM_cons] at h
    cases hg : itemOf g with
    | none => simp [hg] at h
    | some it =>
      cases hm : gs.mapM itemOf with
      | none => simp [hg, hm] at h
      | some its' =>
        simp only [hg, hm, Option.bind_some, Option.pure_def, bind, Option.some.injEq] at h
        subst h
        rw [List.flatten_cons, loop_item r pos sup g _ it hg]
        simp only [runItems]
        cases stepItem (r, pos, sup) it with
        | error e => rfl
        | ok s => exact loop_items gs its' s.1 s.2.1 s.2.2 hm

theorem stepItem_command {s s' : St} {it : Item} (h : stepItem s it = .ok s') : s'.1.command = s.1.command := by
  cases it with
  | flag f =>
    simp only [stepItem] at h
    repeat' split at h
    all_goals (first | (cases h; rfl) | cases h)
  | valued n v =>
    simp only [stepItem] at h
    cases hv : setValued s.1 s.2.2 n (some v) with
    | error e => rw [hv] at h; cases h
    | ok r =>
      rw [hv] at h; cases h
      simp only [setValued] at hv
      repeat' split at hv
      all_goals (first | (cases hv; rfl) | cases hv)
  | pos w => simp only [stepItem] at h; cases h; rfl

/-- A group the loop has no item for stops a build with an error. -/
theorem loop_no_item (r : Parsed) (pos sup g rest : List String) (hr : r.command = "build") (hg : OptionGroup g)
    (hh : g ≠ ["--help"] ∧ g ≠ ["-h"]) (h : itemOf g = none) : ∃ e, optionLoop r pos sup (g ++ rest) = .error e := by
  match g, hg with
  | [f, v], hg =>
    simp only [OptionGroup, valuedFlags, List.mem_cons, List.not_mem_nil, or_false] at hg
    rcases hg with rfl | rfl | rfl <;> simp [itemOf, valuedOf, valuedOption] at h
  | [w], hg =>
    simp only [OptionGroup, valuedFlags, List.mem_cons, List.not_mem_nil, or_false, not_or] at hg
    simp only [ne_eq, List.cons.injEq, and_true] at hh
    simp only [itemOf] at h
    rw [List.cons_append, List.nil_append, optionLoop]
    by_cases h1 : w = "--"
    · subst h1; simp [hr]
    · rw [if_neg h1, if_neg (by simp [hh.1, hh.2])]
      have hf : w ∉ flagNames := by
        intro hf; simp [h1, hh.1, hh.2, hf] at h
      simp only [flagNames, List.mem_cons, List.not_mem_nil, or_false, not_or] at hf
      simp only [hf.1, hf.2.1, hf.2.2.1, hf.2.2.2.1, hf.2.2.2.2.1, hf.2.2.2.2.2, false_or, or_self, ite_false]
      cases hv : valuedOf w with
      | some x =>
        obtain ⟨n, inl⟩ := x
        cases inl with
        | none =>
          rcases valuedOf_bare hv with ⟨rfl, -⟩ | ⟨rfl, -⟩ | ⟨rfl, -⟩
          · exact absurd rfl hg.1
          · exact absurd rfl hg.2.1
          · exact absurd rfl hg.2.2
        | some v =>
          simp [h1, hh.1, hh.2, flagNames, hf.1, hf.2.1, hf.2.2.1, hf.2.2.2.1, hf.2.2.2.2.1, hf.2.2.2.2.2, hv] at h
      | none =>
        simp [h1, hh.1, hh.2, flagNames, hf.1, hf.2.1, hf.2.2.1, hf.2.2.2.1, hf.2.2.2.2.1, hf.2.2.2.2.2, hv] at h
        simp [h]

theorem items_of_ok : ∀ (gs : List (List String)) (r : Parsed) (pos sup : List String) (x : Parsed × List String),
    r.command = "build" → (∀ g ∈ gs, OptionGroup g ∧ g ≠ ["--help"] ∧ g ≠ ["-h"]) →
    optionLoop r pos sup gs.flatten = .ok (some x) → ∃ its, gs.mapM itemOf = some its
  | [], _, _, _, _, _, _, _ => ⟨[], rfl⟩
  | g :: gs, r, pos, sup, x, hr, hall, h => by
    have hg := hall g (by simp)
    cases hi : itemOf g with
    | none =>
      obtain ⟨e, he⟩ := loop_no_item r pos sup g gs.flatten hr hg.1 hg.2 hi
      rw [List.flatten_cons, he] at h; cases h
    | some it =>
      rw [List.flatten_cons, loop_item r pos sup g _ it hi] at h
      cases hs : stepItem (r, pos, sup) it with
      | error e => rw [hs] at h; cases h
      | ok s =>
        rw [hs] at h
        obtain ⟨its, hits⟩ := items_of_ok gs s.1 s.2.1 s.2.2 x (by rw [stepItem_command hs]; exact hr)
          (fun g' hg' => hall g' (by simp [hg'])) h
        exact ⟨it :: its, by simp [List.mapM_cons, hi, hits]⟩


/-- Two loop states that differ at most in the order of the options seen. -/
def Equiv (s t : St) : Prop := s.1 = t.1 ∧ s.2.1 = t.2.1 ∧ ∀ n, n ∈ s.2.2 ↔ n ∈ t.2.2

theorem Equiv.refl (s : St) : Equiv s s := ⟨rfl, rfl, fun _ => Iff.rfl⟩
theorem Equiv.trans {s t u : St} (h1 : Equiv s t) (h2 : Equiv t u) : Equiv s u :=
  ⟨h1.1.trans h2.1, h1.2.1.trans h2.2.1, fun n => (h1.2.2 n).trans (h2.2.2 n)⟩

theorem setValued_congr (r : Parsed) {sup sup' : List String} (name : String) (v : Option String)
    (h : ∀ n, n ∈ sup ↔ n ∈ sup') : setValued r sup name v = setValued r sup' name v := by
  unfold setValued
  simp only [h "target", h "suspend", h "output"]

theorem stepItem_congr {s t s' : St} (it : Item) (he : Equiv s t) (h : stepItem s it = .ok s') :
    ∃ t', stepItem t it = .ok t' ∧ Equiv s' t' := by
  obtain ⟨r, pos, sup⟩ := s
  obtain ⟨r', pos', sup'⟩ := t
  obtain ⟨h1, h2, h3⟩ := he
  dsimp only at h1 h2 h3
  subst h1 h2
  cases it with
  | flag f =>
    simp only [stepItem] at h ⊢
    repeat' split at h
    all_goals first
      | (cases h; done)
      | (cases h; simp_all [Equiv])
  | valued n v =>
    simp only [stepItem, setValued_congr r n (some v) h3] at h ⊢
    cases hv : setValued r sup' n (some v) with
    | error e => rw [hv] at h; cases h
    | ok q =>
      rw [hv] at h; cases h
      exact ⟨_, rfl, rfl, rfl, fun m => by simp [h3 m]⟩
  | pos w =>
    simp only [stepItem] at h ⊢; cases h
    exact ⟨_, rfl, rfl, rfl, h3⟩

theorem runItems_congr : ∀ (its : List Item) {s t x : St}, Equiv s t → runItems s its = .ok x →
    ∃ y, runItems t its = .ok y ∧ Equiv x y
  | [], s, t, x, he, h => by simp only [runItems] at h ⊢; cases h; exact ⟨t, rfl, he⟩
  | it :: its, s, t, x, he, h => by
    simp only [runItems] at h ⊢
    cases hs : stepItem s it with
    | error e => rw [hs] at h; cases h
    | ok s' =>
      rw [hs] at h
      obtain ⟨t', ht, he'⟩ := stepItem_congr it he hs
      rw [ht]
      exact runItems_congr its he' h


def Item.isPos : Item → Bool
  | .pos _ => true
  | _ => false

/-- The option names items carry. -/
def ItemOK : Item → Prop
  | .valued n _ => n = "target" ∨ n = "suspend" ∨ n = "output"
  | _ => True

/-- What setting a valued option does, when it succeeds. -/
def setF (r : Parsed) (n v : String) : Parsed :=
  if n = "target" then { r with target? := some v }
  else if n = "suspend" then { r with suspend? := some v }
  else { r with output? := some v }

/-- Whether setting a valued option succeeds, apart from its being seen. -/
def okVal (r : Parsed) (n v : String) : Prop :=
  if n = "target" then r.command = "build" ∧ missingValue (some v) = false ∧ v ∈ buildTargets
  else if n = "suspend" then v ∈ suspendModes
  else missingValue (some v) = false

theorem setValued_ok_iff {r r' : Parsed} {sup : List String} {n v : String} (hn : n = "target" ∨ n = "suspend" ∨ n = "output") :
    setValued r sup n (some v) = .ok r' ↔ n ∉ sup ∧ okVal r n v ∧ r' = setF r n v := by
  rcases hn with rfl | rfl | rfl
  all_goals
    unfold setValued okVal setF
    simp only [ite_true, ite_false, show ("suspend" = "target") = False by decide, show ("output" = "target") = False by decide,
      show ("output" = "suspend") = False by decide]
    repeat' split
    all_goals simp only [reduceCtorEq, false_iff, Except.ok.injEq, not_and]
    all_goals first
      | (intro a b _
         first
           | exact absurd ‹_ ∈ sup› a
           | exact absurd b.1 ‹_›
           | exact Bool.noConfusion (b.2.1.symm.trans ‹missingValue (some v) = true›)
           | exact absurd b.2.2 ‹_›
           | exact absurd b ‹_›
           | exact Bool.noConfusion (b.symm.trans ‹missingValue (some v) = true›))
      | (constructor
         · intro hh; subst hh; simp_all only [ne_eq, Decidable.not_not, not_false_eq_true, Bool.not_eq_true, true_and, and_true, and_self]
         · rintro ⟨-, -, rfl⟩; rfl)


/-- What a flag does to the parse. -/
def flagRes (r : Parsed) (f : String) : Except String Parsed :=
  if f = "--rebuild" then .ok { r with rebuild? := some true }
  else if f = "--verbose" then .ok { r with verbose? := some true }
  else if f = "--dev" ∨ f = "--release" then
    let profile := (f.drop 2).toString
    if r.profile?.any (· ≠ profile) then .error "Choose one of --dev and --release"
    else .ok { r with profile? := some profile }
  else if f = "--allow-dev" then .ok { r with allowDev? := some true }
  else .ok { r with bundler? := some true }

theorem stepItem_flag (s : St) (f : String) : stepItem s (.flag f) = (flagRes s.1 f).map fun r => (r, s.2) := by
  simp only [stepItem, flagRes]
  repeat' split
  all_goals rfl

theorem stepItem_valued {s s' : St} {n v : String} (hn : n = "target" ∨ n = "suspend" ∨ n = "output") :
    stepItem s (.valued n v) = .ok s' ↔ n ∉ s.2.2 ∧ okVal s.1 n v ∧ s' = (setF s.1 n v, s.2.1, n :: s.2.2) := by
  simp only [stepItem]
  cases hv : setValued s.1 s.2.2 n (some v) with
  | error e =>
    simp only [Except.map, reduceCtorEq, false_iff]
    rintro ⟨a, b, -⟩
    have := (setValued_ok_iff hn).mpr ⟨a, b, rfl⟩
    rw [hv] at this; cases this
  | ok r =>
    have := (setValued_ok_iff hn).mp hv
    simp only [Except.map, Except.ok.injEq]
    constructor
    · rintro rfl; exact ⟨this.1, this.2.1, by rw [this.2.2]⟩
    · rintro ⟨-, -, rfl⟩; rw [this.2.2]

theorem setF_command (r : Parsed) (n v : String) : (setF r n v).command = r.command := by
  unfold setF; split
  · rfl
  · split <;> rfl

theorem okVal_setF (r : Parsed) (n v m w : String) : okVal (setF r n v) m w ↔ okVal r m w := by
  unfold okVal; rw [setF_command]

theorem flagRes_command {r r' : Parsed} {f : String} (h : flagRes r f = .ok r') : r'.command = r.command := by
  unfold flagRes at h
  dsimp only at h
  repeat' split at h
  all_goals first | (cases h; done) | (cases h; rfl)

theorem okVal_flag {r r' : Parsed} {f : String} (h : flagRes r f = .ok r') (m w : String) : okVal r' m w ↔ okVal r m w := by
  unfold okVal; rw [flagRes_command h]

theorem setF_comm (r : Parsed) {n m : String} (v w : String) (hn : n = "target" ∨ n = "suspend" ∨ n = "output")
    (hm : m = "target" ∨ m = "suspend" ∨ m = "output") (hne : n ≠ m) : setF (setF r n v) m w = setF (setF r m w) n v := by
  rcases hn with rfl | rfl | rfl <;> rcases hm with rfl | rfl | rfl <;> first | exact absurd rfl hne | rfl

theorem flagRes_setF (r : Parsed) (f n v : String) (hn : n = "target" ∨ n = "suspend" ∨ n = "output") :
    flagRes (setF r n v) f = (flagRes r f).map fun r' => setF r' n v := by
  rcases hn with rfl | rfl | rfl <;>
  · simp only [flagRes, setF]
    repeat' split
    all_goals first | rfl | (simp_all; done)

theorem flagRes_comm {r r1 r2 : Parsed} {f g : String} (h1 : flagRes r f = .ok r1) (h2 : flagRes r1 g = .ok r2) :
    ∃ q1, flagRes r g = .ok q1 ∧ flagRes q1 f = .ok r2 := by
  unfold flagRes at h1 h2 ⊢
  dsimp only at h1 h2 ⊢
  repeat' split at h1
  all_goals (try (cases h1; done))
  all_goals cases h1
  all_goals dsimp only at h2
  all_goals (repeat' split at h2)
  all_goals (try (cases h2; done))
  all_goals cases h2
  all_goals (repeat' split)
  all_goals simp_all


theorem flag_ok {r : Parsed} {pos sup : List String} {f : String} {s' : St} (h : stepItem (r, pos, sup) (.flag f) = .ok s') :
    ∃ r', flagRes r f = .ok r' ∧ s' = (r', pos, sup) := by
  rw [stepItem_flag] at h
  cases hf : flagRes r f with
  | error e => rw [hf] at h; cases h
  | ok r' => rw [hf] at h; cases h; exact ⟨r', rfl, rfl⟩

theorem stepItem_comm {s s1 s2 : St} {a b : Item} (ha : ItemOK a) (hb : ItemOK b) (hp : ¬(a.isPos = true ∧ b.isPos = true))
    (h1 : stepItem s a = .ok s1) (h2 : stepItem s1 b = .ok s2) :
    ∃ t1 t2, stepItem s b = .ok t1 ∧ stepItem t1 a = .ok t2 ∧ Equiv s2 t2 := by
  obtain ⟨r, pos, sup⟩ := s
  cases a with
  | flag f =>
    obtain ⟨r1, hf, rfl⟩ := flag_ok h1
    cases b with
    | flag g =>
      obtain ⟨r2, hg, rfl⟩ := flag_ok h2
      obtain ⟨q1, hq1, hq2⟩ := flagRes_comm hf hg
      exact ⟨(q1, pos, sup), (r2, pos, sup), by rw [stepItem_flag, hq1]; rfl, by rw [stepItem_flag, hq2]; rfl, Equiv.refl _⟩
    | valued m w =>
      obtain ⟨hm1, hm2, rfl⟩ := (stepItem_valued hb).mp h2
      refine ⟨(setF r m w, pos, m :: sup), (setF r1 m w, pos, m :: sup), (stepItem_valued hb).mpr ⟨hm1, (okVal_flag hf m w).mp hm2, rfl⟩,
        ?_, Equiv.refl _⟩
      rw [stepItem_flag, flagRes_setF r f m w hb, hf]; rfl
    | pos w =>
      simp only [stepItem] at h2; cases h2
      exact ⟨(r, pos ++ [w], sup), (r1, pos ++ [w], sup), rfl, by rw [stepItem_flag, hf]; rfl, Equiv.refl _⟩
  | valued n v =>
    obtain ⟨hn1, hn2, rfl⟩ := (stepItem_valued ha).mp h1
    cases b with
    | flag g =>
      obtain ⟨r2, hg, rfl⟩ := flag_ok h2
      rw [flagRes_setF r g n v ha] at hg
      cases hq : flagRes r g with
      | error e => rw [hq] at hg; cases hg
      | ok q =>
        rw [hq] at hg; cases hg
        refine ⟨(q, pos, sup), (setF q n v, pos, n :: sup), by rw [stepItem_flag, hq]; rfl,
          (stepItem_valued ha).mpr ⟨hn1, (okVal_flag hq n v).mpr hn2, rfl⟩, Equiv.refl _⟩
    | valued m w =>
      obtain ⟨hm1, hm2, rfl⟩ := (stepItem_valued hb).mp h2
      simp only [List.mem_cons, not_or] at hm1
      have hne : n ≠ m := fun h => hm1.1 h.symm
      refine ⟨(setF r m w, pos, m :: sup), (setF (setF r m w) n v, pos, n :: m :: sup),
        (stepItem_valued hb).mpr ⟨hm1.2, (okVal_setF r n v m w).mp hm2, rfl⟩,
        (stepItem_valued ha).mpr ⟨by simp [hne, hn1], (okVal_setF r m w n v).mpr hn2, rfl⟩, ?_⟩
      refine ⟨setF_comm r v w ha hb hne, rfl, fun x => ?_⟩
      simp only [List.mem_cons]; constructor <;> intro hx <;> rcases hx with hx | hx | hx <;> simp [hx]
    | pos w =>
      simp only [stepItem] at h2; cases h2
      exact ⟨(r, pos ++ [w], sup), (setF r n v, pos ++ [w], n :: sup), rfl,
        (stepItem_valued ha).mpr ⟨hn1, hn2, rfl⟩, Equiv.refl _⟩
  | pos w =>
    simp only [stepItem] at h1; cases h1
    cases b with
    | flag g =>
      obtain ⟨r2, hg, rfl⟩ := flag_ok h2
      exact ⟨(r2, pos, sup), (r2, pos ++ [w], sup), by rw [stepItem_flag, hg]; rfl, rfl, Equiv.refl _⟩
    | valued m w' =>
      obtain ⟨hm1, hm2, rfl⟩ := (stepItem_valued hb).mp h2
      exact ⟨(setF r m w', pos, m :: sup), (setF r m w', pos ++ [w], m :: sup),
        (stepItem_valued hb).mpr ⟨hm1, hm2, rfl⟩, rfl, Equiv.refl _⟩
    | pos w' => exact absurd ⟨rfl, rfl⟩ hp


theorem runItems_perm {l1 l2 : List Item} (hp : l1.Perm l2) :
    (∀ it ∈ l1, ItemOK it) → (l1.filter Item.isPos).length ≤ 1 → ∀ (s x : St), runItems s l1 = .ok x →
      ∃ y, runItems s l2 = .ok y ∧ Equiv x y := by
  induction hp with
  | nil => intro _ _ s x h; exact ⟨x, h, Equiv.refl _⟩
  | cons a p ih =>
    intro hok hpos s x h
    simp only [runItems] at h ⊢
    cases hs : stepItem s a with
    | error e => rw [hs] at h; cases h
    | ok s' =>
      rw [hs] at h
      exact ih (fun it hit => hok it (by simp [hit])) (by
        refine Nat.le_trans ?_ hpos
        simp only [List.filter_cons]; split <;> simp) s' x h
  | swap a b l =>
    intro hok hpos s x h
    simp only [runItems] at h ⊢
    cases h1 : stepItem s b with
    | error e => rw [h1] at h; cases h
    | ok s1 =>
      rw [h1] at h; dsimp only at h
      cases h2 : stepItem s1 a with
      | error e => rw [h2] at h; cases h
      | ok s2 =>
        rw [h2] at h
        have hp' : ¬(b.isPos = true ∧ a.isPos = true) := by
          rintro ⟨hb, ha⟩
          simp [List.filter_cons, hb, ha] at hpos
        obtain ⟨t1, t2, ht1, ht2, he⟩ := stepItem_comm (hok b (by simp)) (hok a (by simp)) hp' h1 h2
        rw [ht1]; dsimp only; rw [ht2]; dsimp only
        exact runItems_congr l he h
  | trans p1 p2 ih1 ih2 =>
    intro hok hpos s x h
    obtain ⟨y, hy, he1⟩ := ih1 hok hpos s x h
    have hok' : ∀ it ∈ _, ItemOK it := fun it hit => hok it (p1.mem_iff.mpr hit)
    have hpos' := (p1.filter Item.isPos).length_eq ▸ hpos
    obtain ⟨z, hz, he2⟩ := ih2 hok' hpos' s y hy
    exact ⟨z, hz, he1.trans he2⟩

theorem mapM_some {α β : Type} (f : α → Option β) (g : α → β) : ∀ l : List α, (∀ x ∈ l, f x = some (g x)) →
    l.mapM f = some (l.map g)
  | [], _ => rfl
  | x :: l, h => by
    rw [List.mapM_cons, h x (by simp), mapM_some f g l (fun y hy => h y (by simp [hy]))]
    rfl

theorem filter_length_mono {α : Type} (p q : α → Bool) : ∀ l : List α, (∀ x ∈ l, p x = true → q x = true) →
    (l.filter p).length ≤ (l.filter q).length
  | [], _ => by simp
  | x :: l, h => by
    have ih := filter_length_mono p q l (fun y hy => h y (by simp [hy]))
    simp only [List.filter_cons]
    by_cases hp : p x = true
    · simp [hp, h x (by simp) hp, ih]
    · by_cases hq : q x = true
      · simp [hp, hq]; omega
      · simp [hp, hq]; omega

theorem valuedOf_name {w n : String} {v : Option String} (h : valuedOf w = some (n, v)) :
    n = "target" ∨ n = "suspend" ∨ n = "output" := by
  unfold valuedOf at h
  cases h1 : valuedOption "target" w with
  | some x => rw [h1] at h; cases h; simp
  | none =>
    rw [h1] at h; dsimp only at h
    cases h2 : valuedOption "suspend" w with
    | some x => rw [h2] at h; cases h; simp
    | none =>
      rw [h2] at h; dsimp only at h
      cases h3 : valuedOption "output" w with
      | some x => rw [h3] at h; cases h; simp
      | none => rw [h3] at h; cases h

theorem itemOf_ok {g : List String} {it : Item} (h : itemOf g = some it) : ItemOK it := by
  match g with
  | [f, v] =>
    simp only [itemOf] at h; split at h
    · cases h; exact valuedOf_name ‹_›
    · cases h
  | [w] =>
    simp only [itemOf] at h
    repeat' split at h
    all_goals first | (cases h; done) | (cases h; trivial) | (cases h; exact valuedOf_name ‹_›)

theorem itemOf_pos {g : List String} {it : Item} (h : itemOf g = some it) (hp : it.isPos = true) :
    (g.length == 1 && !(g.headD "").startsWith "-") = true := by
  match g with
  | [f, v] =>
    simp only [itemOf] at h; split at h
    · cases h; simp [Item.isPos] at hp
    · cases h
  | [w] =>
    simp only [itemOf] at h
    repeat' split at h
    all_goals first | (cases h; done) | (cases h; simp [Item.isPos] at hp; done) | (cases h; simp_all)

theorem items_or_error : ∀ (gs : List (List String)) (r : Parsed) (pos sup : List String),
    r.command = "build" → (∀ g ∈ gs, OptionGroup g ∧ g ≠ ["--help"] ∧ g ≠ ["-h"]) →
    (∃ e, optionLoop r pos sup gs.flatten = .error e) ∨ (∀ g ∈ gs, (itemOf g).isSome)
  | [], _, _, _, _, _ => Or.inr (by simp)
  | g :: gs, r, pos, sup, hr, hall => by
    have hg := hall g (by simp)
    cases hi : itemOf g with
    | none =>
      obtain ⟨e, he⟩ := loop_no_item r pos sup g gs.flatten hr hg.1 hg.2 hi
      exact Or.inl ⟨e, by rw [List.flatten_cons, he]⟩
    | some it =>
      rw [List.flatten_cons, loop_item r pos sup g _ it hi]
      cases hs : stepItem (r, pos, sup) it with
      | error e => exact Or.inl ⟨e, rfl⟩
      | ok s =>
        rcases items_or_error gs s.1 s.2.1 s.2.2 (by rw [stepItem_command hs]; exact hr) (fun g' hg' => hall g' (by simp [hg'])) with
          ⟨e, he⟩ | h
        · exact Or.inl ⟨e, he⟩
        · exact Or.inr (by intro g' hg'; simp only [List.mem_cons] at hg'; rcases hg' with rfl | hg' <;> simp_all)

/-- What `parseLasmArguments` imports. -/
def realEnv : ArgumentsEnv := ⟨fileExists, jsRuntime, parseInitArguments, parseDevArguments, parsePackageArguments⟩
/-- The parse `lasm build` starts from. -/
def buildStart : Parsed := { parseLasmArgumentsWith.start with command := "build" }

theorem parse_build (toks : List String) : parseLasmArguments ("build" :: toks) =
    match optionLoop buildStart [] [] toks with
    | .error e => .error e
    | .ok none => .ok { command := "help" }
    | .ok (some (r, positional)) => finish realEnv r positional := by
  unfold parseLasmArguments parseLasmArgumentsWith
  have hrest : parseLasmArgumentsWith.rest realEnv ("build" :: toks) =
      parseLasmArgumentsWith.program realEnv buildStart toks := by
    simp [parseLasmArgumentsWith.rest, buildStart]
  split
  · rename_i t h; cases h; simp only [List.mem_cons, List.not_mem_nil, or_false]
    rw [if_neg (by decide)]; exact hrest
  · exact hrest

theorem build_options_commute : Spec.build_options_commute := by
  intro opts opts' forms hgood hpos _ hperm hforms hok
  have hr0 : buildStart.command = "build" := rfl
  rw [parse_build] at hok
  rw [parse_build, parse_build]
  -- Every group of `opts` is an item: otherwise the loop, and the parse, fail.
  have hall : ∀ g ∈ opts, (itemOf g).isSome := by
    rcases items_or_error opts buildStart [] [] hr0 hgood with ⟨e, he⟩ | h
    · rw [he] at hok; cases hok
    · exact h
  let g : List String → Item := fun o => (itemOf o).getD (.pos "")
  have hg : ∀ o ∈ opts, itemOf o = some (g o) := by
    intro o ho; have := hall o ho; simp only [g]; cases h : itemOf o <;> simp_all
  have hgood' : ∀ o ∈ opts', OptionGroup o := fun o ho => (hgood o (hperm.mem_iff.mpr ho)).1
  have hg' : ∀ o ∈ opts', itemOf o = some (g o) := fun o ho => hg o (hperm.mem_iff.mpr ho)
  have hm1 : opts.mapM itemOf = some (opts.map g) := mapM_some _ _ _ hg
  have hm2 : ((opts'.zip forms).map fun (o, j) => if j then joined o else o).mapM itemOf = some (opts'.map g) := by
    have hB2 : ∀ o ∈ ((opts'.zip forms).map fun (o, j) => if j then joined o else o), itemOf o = some (g o) := by
      intro o ho
      simp only [List.mem_map] at ho
      obtain ⟨⟨o', j⟩, hp, rfl⟩ := ho
      have ho' := (List.of_mem_zip hp).1
      cases j
      · exact hg' o' ho'
      · simp only [ite_true]; rw [itemOf_joined o' (hgood' o' ho'), hg' o' ho']
        simp [g, itemOf_joined o' (hgood' o' ho')]
    have hB1 : ((opts'.zip forms).map fun (o, j) => if j then joined o else o).map g = opts'.map g := by
      rw [List.map_map]
      have : ∀ p ∈ opts'.zip forms, (g ∘ fun (x : List String × Bool) => if x.2 then joined x.1 else x.1) p = (g ∘ Prod.fst) p := by
        rintro ⟨o, j⟩ hp
        have ho := (List.of_mem_zip hp).1
        cases j
        · rfl
        · simp [g, itemOf_joined o (hgood' o ho)]
      rw [List.map_congr_left this, ← List.map_map, List.map_fst_zip (by omega)]
    rw [mapM_some _ _ _ hB2, hB1]
  rw [loop_items opts _ buildStart [] [] hm1] at hok ⊢
  rw [loop_items _ _ buildStart [] [] hm2]
  cases hx : runItems (buildStart, [], []) (opts.map g) with
  | error e => rw [hx] at hok; cases hok
  | ok x =>
    have hokI : ∀ it ∈ opts.map g, ItemOK it := by
      intro it hit; simp only [List.mem_map] at hit; obtain ⟨o, ho, rfl⟩ := hit; exact itemOf_ok (hg o ho)
    have hposI : ((opts.map g).filter Item.isPos).length ≤ 1 := by
      rw [List.filter_map, List.length_map]
      exact Nat.le_trans (filter_length_mono _ _ opts fun o ho hp => itemOf_pos (hg o ho) hp) hpos
    obtain ⟨y, hy, he⟩ := runItems_perm (hperm.map g) hokI hposI _ x hx
    rw [hy]
    simp only [he.1, he.2.1]

/-! ## The process launcher -/

theorem readNumber_le32 {n : Nat} (h : n < 4294967296) (r : List UInt8) : readNumber (le32 n ++ r) = some (n, r) := by
  simp only [le32, List.cons_append, List.nil_append, readNumber, Option.some.injEq, Prod.mk.injEq, and_true]
  simp only [Nat.toUInt8_eq, UInt8.toNat_ofNat']
  omega

theorem readString_some {b : List UInt8} (h0 : 0 ∉ b) (hl : b.length < 0xffffffff) (opt : Bool) (r : List UInt8) :
    readString opt (le32 b.length ++ b ++ r) = some (some b, r) := by
  rw [readString, List.append_assoc, readNumber_le32 (by omega)]
  simp [Nat.ne_of_lt hl, h0]

theorem readString_none (r : List UInt8) : readString true (le32 0xffffffff ++ r) = some (none, r) := by
  rw [readString, readNumber_le32 (by omega)]
  simp

theorem encodeString_some {b : List UInt8} (h0 : 0 ∉ b) : encodeString (some b) = .ok (le32 b.length ++ b) := by
  simp [encodeString, h0]

/-- Text whose UTF-8 has no NUL byte and fits the format. -/
def Fits (b : List UInt8) : Prop := 0 ∉ b ∧ b.length < 0xffffffff

theorem readStrings_encoded : ∀ (vs : List (List UInt8)) (r : List UInt8), (∀ v ∈ vs, Fits v) →
    readStrings vs.length ((vs.map fun v => le32 v.length ++ v).flatten ++ r) = some (vs, r)
  | [], r, _ => by simp [readStrings]
  | v :: vs, r, h => by
    have hv := h v (by simp)
    simp only [List.length_cons, List.map_cons, List.flatten_cons, List.append_assoc, readStrings]
    rw [← List.append_assoc, readString_some hv.1 hv.2]
    simp only [bind, Option.bind]
    rw [readStrings_encoded vs r fun w hw => h w (by simp [hw])]
    rfl

theorem readPairs_encoded : ∀ (ps : List (List UInt8 × List UInt8)) (r : List UInt8), (∀ p ∈ ps, Fits p.1 ∧ Fits p.2) →
    readPairs ps.length ((ps.map fun p => le32 p.1.length ++ (p.1 ++ (le32 p.2.length ++ p.2))).flatten ++ r) = some (ps, r)
  | [], r, _ => by simp [readPairs]
  | p :: ps, r, h => by
    have hp := h p (by simp)
    simp only [List.length_cons, List.map_cons, List.flatten_cons, List.append_assoc, readPairs]
    rw [← List.append_assoc, readString_some hp.1.1 hp.1.2]
    simp only [bind, Option.bind]
    rw [← List.append_assoc, readString_some hp.2.1 hp.2.2]
    dsimp only
    rw [readPairs_encoded ps r fun w hw => h w (by simp [hw])]
    rfl

theorem mapM_encodeString : ∀ (vs : List (List UInt8)), (∀ v ∈ vs, 0 ∉ v) →
    vs.mapM (fun v => encodeString (some v)) = .ok (vs.map fun v => le32 v.length ++ v)
  | [], _ => rfl
  | v :: vs, h => by
    rw [List.mapM_cons, encodeString_some (h v (by simp)), mapM_encodeString vs fun w hw => h w (by simp [hw])]
    rfl

/-- An optional string as `string` writes it. -/
def encOpt : Option (List UInt8) → List UInt8
  | none => le32 0xffffffff
  | some b => le32 b.length ++ b

theorem encodeString_opt {x : Option (List UInt8)} (h : ∀ b ∈ x, 0 ∉ b) : encodeString x = .ok (encOpt x) := by
  cases x with
  | none => rfl
  | some b => exact encodeString_some (h b rfl)

theorem readString_opt {x : Option (List UInt8)} (h : ∀ b ∈ x, Fits b) (r : List UInt8) :
    readString true (encOpt x ++ r) = some (x, r) := by
  cases x with
  | none => exact readString_none r
  | some b => exact readString_some (h b rfl).1 (h b rfl).2 true r

theorem mapM_pairs : ∀ (ps : List (List UInt8 × List UInt8)), (∀ p ∈ ps, 0 ∉ p.1 ∧ 0 ∉ p.2) →
    ps.mapM (fun (p : List UInt8 × List UInt8) => do return (← encodeString (some p.1)) ++ (← encodeString (some p.2))) =
      .ok (ps.map fun p => le32 p.1.length ++ (p.1 ++ (le32 p.2.length ++ p.2)))
  | [], _ => rfl
  | p :: ps, h => by
    rw [List.mapM_cons, encodeString_some (h p (by simp)).1, encodeString_some (h p (by simp)).2,
      mapM_pairs ps fun w hw => h w (by simp [hw])]
    simp [bind, pure, Except.bind, Except.pure]

theorem launcher_config_round_trip : Spec.launcher_config_round_trip := by
  intro o hbytes h3 htexts hargs henv
  obtain ⟨command, args, env, directory, requestedCwd, stdioFlags, directoryFd, inh, setsid, envBytes⟩ := o
  simp only at hbytes h3 htexts hargs henv ⊢
  subst hbytes
  match stdioFlags, h3 with
  | [a, b, c], _ =>
  have fits : ∀ s ∈ command :: args ++ env.flatMap (fun (k, v) => [k, v]) ++ directory.toList ++ requestedCwd.toList, Fits (utf8Bytes s) := htexts
  have hdir : ∀ x ∈ directory.map utf8Bytes, Fits x := by
    intro x hx; simp only [Option.mem_def, Option.map_eq_some_iff] at hx; obtain ⟨d, rfl, rfl⟩ := hx; exact fits _ (by simp)
  have hreq : ∀ x ∈ requestedCwd.map utf8Bytes, Fits x := by
    intro x hx; simp only [Option.mem_def, Option.map_eq_some_iff] at hx; obtain ⟨d, rfl, rfl⟩ := hx; exact fits _ (by simp)
  have hargv : ∀ x ∈ (command :: args).map utf8Bytes, Fits x := by
    intro x hx; simp only [List.mem_map] at hx; obtain ⟨d, hd, rfl⟩ := hx; exact fits _ (by simp at hd ⊢; rcases hd with h | h <;> simp [h])
  have henv' : ∀ p ∈ env.map (fun (k, v) => (utf8Bytes k, utf8Bytes v)), Fits p.1 ∧ Fits p.2 := by
    intro p hp; simp only [List.mem_map] at hp; obtain ⟨⟨k, v⟩, hkv, rfl⟩ := hp
    have hk : k ∈ env.flatMap (fun (k, v) => [k, v]) := List.mem_flatMap.mpr ⟨(k, v), hkv, by simp⟩
    have hv : v ∈ env.flatMap (fun (k, v) => [k, v]) := List.mem_flatMap.mpr ⟨(k, v), hkv, by simp⟩
    exact ⟨fits _ (by simp only [List.mem_append]; exact Or.inl (Or.inl (Or.inr hk))),
      fits _ (by simp only [List.mem_append]; exact Or.inl (Or.inl (Or.inr hv)))⟩
  have nul : ∀ {x : Option (List UInt8)}, (∀ b ∈ x, Fits b) → ∀ b ∈ x, 0 ∉ b := fun h b hb => (h b hb).1
  have henc : encodeProcessConfiguration (LaunchOptions.mk command args env directory requestedCwd [a, b, c] directoryFd inh setsid none) = .ok ⟨(launcherMagic ++
        le32 ((if directoryFd.isNone then 0 else 1) + (if inh then 2 else 0) + (if setsid then 4 else 0)) ++
        (le32 (uint32Of a) ++ le32 (uint32Of b) ++ le32 (uint32Of c)) ++ encOpt (directory.map utf8Bytes) ++
        encOpt (requestedCwd.map utf8Bytes) ++ le32 (args.length + 1) ++
        (((command :: args).map utf8Bytes).map fun v => le32 v.length ++ v).flatten ++ le32 env.length ++
        ((env.map fun (k, v) => (utf8Bytes k, utf8Bytes v)).map fun p => le32 p.1.length ++ (p.1 ++ (le32 p.2.length ++ p.2))).flatten).toArray⟩ := by
    have e1 := encodeString_opt (nul hdir)
    have e2 := encodeString_opt (nul hreq)
    have e3 := mapM_encodeString ((command :: args).map utf8Bytes) fun v hv => (hargv v hv).1
    have e4 := mapM_pairs (env.map fun (k, v) => (utf8Bytes k, utf8Bytes v)) fun p hp => ⟨(henv' p hp).1.1, (henv' p hp).2.1⟩
    rw [List.mapM_map] at e3
    simp only [encodeProcessConfiguration, Option.getD_none, e1, e2]
    erw [e3, e4]
    simp [bind, Except.bind, pure, Except.pure, List.append_assoc]
  refine ⟨_, henc, ?_⟩
  have u32 : ∀ x : Int, uint32Of x < 4294967296 := fun x => by unfold uint32Of; omega
  have hflags : ((if directoryFd.isNone = true then 0 else 1) + (if inh = true then 2 else 0) + (if setsid = true then 4 else 0)) < 8 := by
    split <;> split <;> split <;> omega
  have rf := readNumber_le32 (Nat.lt_trans hflags (by omega))
  have ra := readNumber_le32 (u32 a)
  have rb := readNumber_le32 (u32 b)
  have rc := readNumber_le32 (u32 c)
  have rn := readNumber_le32 hargs
  have re := readNumber_le32 (n := env.length) henv
  have rd := readString_opt hdir
  have rr := readString_opt hreq
  have rs := readStrings_encoded ((command :: args).map utf8Bytes)
  have rp := readPairs_encoded (env.map fun (k, v) => (utf8Bytes k, utf8Bytes v))
  simp only [List.length_map, List.length_cons] at rs rp
  have hm1 : ∀ r : List UInt8, (decide ((launcherMagic ++ r).length < 8) || (launcherMagic ++ r).take 8 != launcherMagic) = false := by
    intro r
    rw [Bool.or_eq_false_iff]
    constructor
    · apply decide_eq_false; simp only [launcherMagic, List.length_append, List.length_cons, List.length_nil]; omega
    · simp [launcherMagic]
  have hm2 : ∀ r : List UInt8, (launcherMagic ++ r).drop 8 = r := by intro r; simp [launcherMagic]
  simp only [List.append_assoc] at rs rp ⊢
  have hf' : ¬ ((if directoryFd.isNone = true then 0 else 1) + (if inh = true then 2 else 0) + (if setsid = true then 4 else 0)) ≥ 8 := by omega
  have hn' : ¬ args.length + 1 = 0 := by omega
  simp only [launcherRead, hm1, hm2, rf, Option.bind_eq_bind, Option.bind_some, hf', ↓reduceIte, ra, rb, rc, rd, rr, rn, hn', re,
    rs _ hargv, Bool.false_eq_true]
  have rp' := rp [] henv'
  simp only [List.append_nil] at rp'
  rw [rp']
  simp [pure]

/-! ## Lasm.JS's framing -/

theorem le32_length (n : Nat) : (le32 n).length = 4 := rfl
theorem u64le_length (n : Nat) : (u64le n).length = 8 := rfl

theorem readWord64_u64le {n : Nat} (h : n < 2 ^ 64) (r : List UInt8) : readWord64 (u64le n ++ r) = some (n, r) := by
  have h1 := readNumber_le32 (n := n % 4294967296) (by omega) (le32 (n / 4294967296 % 4294967296) ++ r)
  have h2 := readNumber_le32 (n := n / 4294967296 % 4294967296) (by omega) r
  simp only [readWord64, u64le, List.append_assoc, h1, h2, Option.pure_def, Option.bind_eq_bind, Option.bind_some,
    Option.some.injEq, Prod.mk.injEq, and_true]
  omega

theorem readEvent_encode {e : JsEvent} (h : e.Fits) (r : List UInt8) : readEvent (encodeEvent e ++ r) = .ok (e, r) := by
  cases e with
  | completion p f b =>
    obtain ⟨hp, hb⟩ := h
    have hn := readNumber_le32 (show b.length < 4294967296 from hb) (b ++ r)
    cases f
    · have hw := readWord64_u64le hp ((0 : UInt8) :: (le32 b.length ++ (b ++ r)))
      simp [encodeEvent, readEvent, Nat.mod_eq_of_lt hp, u64le_length, le32_length, orThrow, hw, hn,
        bind, Except.bind, pure, Except.pure]
      rw [if_neg (by omega), if_neg (by omega)]
    · have hw := readWord64_u64le hp ((1 : UInt8) :: (le32 b.length ++ (b ++ r)))
      simp [encodeEvent, readEvent, Nat.mod_eq_of_lt hp, u64le_length, le32_length, orThrow, hw, hn,
        bind, Except.bind, pure, Except.pure]
      rw [if_neg (by omega), if_neg (by omega)]
  | call c fn b =>
    obtain ⟨hc, hfn, hb⟩ := h
    have hw := readWord64_u64le hc (le32 fn ++ (le32 b.length ++ (b ++ r)))
    have hf := readNumber_le32 (show fn < 4294967296 from hfn) (le32 b.length ++ (b ++ r))
    have hn := readNumber_le32 (show b.length < 4294967296 from hb) (b ++ r)
    simp [encodeEvent, readEvent, Nat.mod_eq_of_lt hc, u64le_length, le32_length, orThrow, hw, hf, hn,
      bind, Except.bind, pure, Except.pure]
    rw [if_neg (by omega), if_neg (by omega)]
  | release fn =>
    have hf := readNumber_le32 (show fn < 4294967296 from h) r
    simp [encodeEvent, readEvent, le32_length, orThrow, hf, bind, Except.bind, pure, Except.pure]

theorem encodeEvent_cons (e : JsEvent) : ∃ k t, encodeEvent e = k :: t := by
  cases e <;> simp [encodeEvent]

theorem readEvents_encode {e : JsEvent} (h : e.Fits) (rest : List UInt8) :
    readEvents (encodeEvent e ++ rest) = (e :: (readEvents rest).1, (readEvents rest).2) := by
  obtain ⟨k, t, he⟩ := encodeEvent_cons e
  have hr := readEvent_encode h rest
  rw [he] at hr ⊢
  have hlen : rest.length < (t ++ rest).length + 1 := by simp; omega
  simp only [List.cons_append] at hr ⊢
  rw [readEvents, hr]
  simp only [List.length_append] at hlen
  simp [hlen]

theorem readEvents_encodeAll (es : List JsEvent) (h : ∀ e ∈ es, e.Fits) (rest : List UInt8) :
    readEvents (es.flatMap encodeEvent ++ rest) = (es ++ (readEvents rest).1, (readEvents rest).2) := by
  induction es with
  | nil => simp
  | cons e es ih =>
    rw [List.flatMap_cons, List.append_assoc, readEvents_encode (h e (by simp)), ih (fun x hx => h x (by simp [hx]))]
    simp

theorem readNumbers_le32 (ids : List Nat) (h : ∀ i ∈ ids, i < 4294967296) (r : List UInt8) :
    readNumbers ids.length (ids.flatMap le32 ++ r) = some (ids, r) := by
  induction ids with
  | nil => rfl
  | cons i ids ih =>
    simp only [List.length_cons, List.flatMap_cons, List.append_assoc, readNumbers]
    rw [readNumber_le32 (h i (by simp))]
    simp [ih (fun x hx => h x (by simp [hx]))]

theorem events_read_back : Spec.events_read_back :=
  fun _ rest h => ⟨rfl, readEvents_encodeAll _ (fun e he => h e (List.mem_of_mem_take he)) rest⟩

theorem flatMap_le32_length (l : List Nat) : (l.flatMap le32).length = 4 * l.length := by
  induction l with
  | nil => rfl
  | cons i is ih => rw [List.flatMap_cons, List.length_append, ih, le32_length, List.length_cons]; omega

theorem request_read_back : Spec.request_read_back := by
  intro released payload hl h
  have hn := readNumber_le32 (show released.length < 4294967296 from hl) (released.flatMap le32 ++ payload)
  have hs := readNumbers_le32 released h payload
  have hlen := flatMap_le32_length released
  simp only [splitRequest, frameRequest, List.append_assoc, hn, orThrow, hs, bind, Except.bind]
  simp [le32_length, hlen]
  rw [if_neg (by omega), if_neg (by omega)]

theorem into_read_back : Spec.into_read_back := by
  intro promise input h
  simp [intoPrefix, frameInto, u64le_length, orThrow, readWord64_u64le h, bind, Except.bind]

/-! ## Host handles -/

theorem allocateLoop_fresh (start : Nat) (value : String) : ∀ (fuel : Nat) (t t' : HandleTable) (id : Nat),
    HandleTable.allocateLoop start value fuel t = .ok (id, t') →
    t.has id = false ∧ t'.entries = t.entries ++ [(id, value)] ∧ t'.first = t.first ∧ t'.last = t.last ∧
    (t.first ≤ t.next → t.next ≤ t.last → t.first ≤ id ∧ id ≤ t.last ∧ t'.first ≤ t'.next ∧ t'.next ≤ t'.last)
  | 0, t, t', id, h => by simp [HandleTable.allocateLoop] at h
  | fuel + 1, t, t', id, h => by
    simp only [HandleTable.allocateLoop] at h
    generalize hn : (if t.next = t.last then t.first else t.next + 1) = n at h
    have hr : t.first ≤ t.next → t.next ≤ t.last → t.first ≤ n ∧ n ≤ t.last := by
      intro a b; subst hn; split <;> omega
    have hhas : ({ t with next := n } : HandleTable).has = t.has := rfl
    rw [hhas] at h
    by_cases hfree : t.has t.next = true
    · simp only [hfree, Bool.not_true, Bool.false_eq_true, ↓reduceIte] at h
      by_cases hs : n = start
      · simp [hs] at h
      · simp only [ne_eq, hs, not_false_eq_true, ↓reduceIte] at h
        have := allocateLoop_fresh start value fuel _ t' id h
        exact ⟨this.1, this.2.1, this.2.2.1, this.2.2.2.1, fun h1 h2 => this.2.2.2.2 (hr h1 h2).1 (hr h1 h2).2⟩
    · simp only [Bool.not_eq_true] at hfree
      simp only [hfree, Bool.not_false, ↓reduceIte, Except.ok.injEq, Prod.mk.injEq] at h
      obtain ⟨rfl, rfl⟩ := h
      have hset : ({ t with next := n } : HandleTable).set t.next value = { t with next := n, entries := t.entries ++ [(t.next, value)] } := by
        simp [HandleTable.set, hhas, hfree]
      rw [hset]
      exact ⟨hfree, rfl, rfl, rfl, fun h1 h2 => ⟨h1, h2, (hr h1 h2).1, (hr h1 h2).2⟩⟩

theorem handle_fresh_in_range : Spec.handle_fresh_in_range :=
  fun t t' _ id h => allocateLoop_fresh _ _ _ t t' id h

/-! ## Function packages -/

theorem zip_deterministic : Spec.zip_deterministic := fun _ => rfl

end Lasm.Cli.Theorems
