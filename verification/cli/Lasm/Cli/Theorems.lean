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
  cases r.profile? <;> simp [hc, ho, ha, hs, hb, ht, hpath, hlean, hjson]

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

/-! ## Function packages -/

theorem zip_deterministic : Spec.zip_deterministic := fun _ => rfl

end Lasm.Cli.Theorems
