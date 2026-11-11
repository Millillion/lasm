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

end Lasm.Cli.Theorems
