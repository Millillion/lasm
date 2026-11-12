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

end Lasm.Cli.Theorems
