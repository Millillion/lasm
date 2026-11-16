/-
# Fast versions of Model/WasiComponent.lean, over byte arrays

The model reads a component as the list of its bytes (`drop` and `take` for
the JavaScript's `subarray`), which costs a list cell per byte: components
are megabytes. These versions read the `ByteArray` by offsets and write it
by appends, with theorems that they equal the model's, registered as
`@[csimp]`: compiled, the model's `replaceCoreModule`, `extractCore` and
`withoutComponentType` (and `componentize` and `makeTemplate`, which call
`replaceCoreModule`) run as these.
-/
import Lasm.Cli.Model.WasiComponent

namespace Lasm.Cli.Fast

open Lasm.Cli

/-- The bytes of `b` from `i`, as the model reads them. -/
abbrev from_ (b : ByteArray) (i : Nat) : List UInt8 := b.data.toList.drop i

theorem from_eq_cons (b : ByteArray) (i : Nat) (h : i < b.size) : from_ b i = b[i] :: from_ b (i + 1) := by
  simp only [from_]
  rw [List.drop_eq_getElem_cons (by simpa using h)]
  simp [ByteArray.getElem_eq_getElem_data]

theorem from_eq_nil (b : ByteArray) (i : Nat) (h : b.size ≤ i) : from_ b i = [] := by
  simp only [from_]; apply List.drop_eq_nil_of_le; simpa using h

/-- `readLebJS` of the bytes from `at`, without recursion on the stack:
`acc` and `mul` carry the value read so far and the weight of the next
byte, `n` the bytes read. -/
def readLebGo (b : ByteArray) (at_ acc mul n : Nat) : Nat × Nat :=
  if h : at_ < b.size then
    let x := b[at_].toNat
    if x < 128 then (acc + mul * x, n + 1) else readLebGo b (at_ + 1) (acc + mul * (x - 128)) (mul * 128) (n + 1)
  else (acc, n + 1)
termination_by b.size - at_

theorem readLebGo_eq (b : ByteArray) (at_ acc mul n : Nat) :
    readLebGo b at_ acc mul n = (acc + mul * (readLebJS (from_ b at_)).1, n + (readLebJS (from_ b at_)).2) := by
  fun_induction readLebGo b at_ acc mul n with
  | case1 at_ acc mul n h x hx =>
    rw [from_eq_cons b at_ h]
    simp [readLebJS, x, hx]
  | case2 at_ acc mul n h x hx ih =>
    rw [ih, from_eq_cons b at_ h]
    simp only [readLebJS, x] at hx ⊢
    simp only [hx, ↓reduceIte, Nat.mul_add, Nat.mul_assoc, Nat.add_assoc]
    congr 1; omega
  | case3 at_ acc mul n h =>
    rw [from_eq_nil b at_ (by omega)]
    simp [readLebJS]

/-- `readLebJS` of the bytes of `b` from `at`. -/
def readLebAt (b : ByteArray) (at_ : Nat) : Nat × Nat := readLebGo b at_ 0 1 0

theorem readLebAt_eq (b : ByteArray) (at_ : Nat) : readLebAt b at_ = readLebJS (from_ b at_) := by
  simp [readLebAt, readLebGo_eq]

theorem readLebJS_snd_pos (l : List UInt8) : 0 < (readLebJS l).2 := by
  cases l with
  | nil => simp [readLebJS]
  | cons b r => simp only [readLebJS]; split <;> simp

/-- The bytes of `b` from `i` to `j`, as a list. -/
theorem extract_toList (b : ByteArray) (i j : Nat) : (b.extract i j).data.toList = (from_ b i).take (j - i) := by
  simp [from_, Array.toList_extract, List.extract_eq_take_drop]

/-- A section by offsets: its id, where it starts (its id byte), where its
payload starts, and where it ends. -/
structure Sec where
  id : UInt8
  at_ : Nat
  start : Nat
  end_ : Nat

/-- The model's reading of a section. -/
def Sec.toSection (b : ByteArray) (s : Sec) : Section :=
  { id := s.id, raw := (from_ b s.at_).take (s.end_ - s.at_), body := (from_ b s.start).take (s.end_ - s.start) }

/-- `parseSections` of the bytes from `at`, by offsets. -/
def sectionsAt (b : ByteArray) (at_ : Nat) : Option (List Sec) :=
  if h : at_ < b.size then
    let p := readLebAt b (at_ + 1)
    let e := at_ + 1 + p.2 + p.1
    if e ≤ b.size then (sectionsAt b e).map (⟨b[at_], at_, at_ + 1 + p.2, e⟩ :: ·) else none
  else some []
termination_by b.size - at_
decreasing_by
  have := readLebJS_snd_pos (from_ b (at_ + 1))
  rw [← readLebAt_eq] at this
  omega

theorem sectionsAt_eq (b : ByteArray) (at_ : Nat) :
    (sectionsAt b at_).map (·.map (·.toSection b)) = parseSections (from_ b at_) := by
  fun_induction sectionsAt b at_ with
  | case1 at_ h p e he ih =>
    rw [from_eq_cons b at_ h, parseSections]
    have hp : p = readLebJS (from_ b (at_ + 1)) := readLebAt_eq b (at_ + 1)
    have hlen : (from_ b (at_ + 1)).length = b.size - (at_ + 1) := by simp [from_]
    have hcond : (readLebJS (from_ b (at_ + 1))).2 + (readLebJS (from_ b (at_ + 1))).1 ≤ (from_ b (at_ + 1)).length := by
      rw [hlen, ← hp]; omega
    simp only [hcond, ↓reduceIte]
    have hdrop : (from_ b (at_ + 1)).drop (p.2 + p.1) = from_ b e := by
      simp only [from_, List.drop_drop, e]; congr 1; omega
    rw [← hp, hdrop, ← ih]
    have hraw : (from_ b at_).take (e - at_) = b[at_] :: (from_ b (at_ + 1)).take (p.2 + p.1) := by
      rw [from_eq_cons b at_ h, show e - at_ = (p.2 + p.1) + 1 by omega, List.take_succ_cons]
    have hbody : (from_ b (at_ + 1 + p.2)).take (e - (at_ + 1 + p.2)) = ((from_ b (at_ + 1)).drop p.2).take p.1 := by
      simp only [from_, List.drop_drop]
      congr 2 <;> omega
    cases sectionsAt b e with
    | none => rfl
    | some l =>
      simp only [Option.map_some, List.map_cons, Sec.toSection, hraw, hbody]
  | case2 at_ h p e he =>
    rw [from_eq_cons b at_ h, parseSections]
    have hp : p = readLebJS (from_ b (at_ + 1)) := readLebAt_eq b (at_ + 1)
    have hlen : (from_ b (at_ + 1)).length = b.size - (at_ + 1) := by simp [from_]
    have hcond : ¬ (readLebJS (from_ b (at_ + 1))).2 + (readLebJS (from_ b (at_ + 1))).1 ≤ (from_ b (at_ + 1)).length := by
      rw [hlen, ← hp]; omega
    simp only [hcond, ↓reduceIte]
    rfl
  | case3 at_ h =>
    rw [from_eq_nil b at_ (by omega), parseSections]; rfl

/-- Every section `sectionsAt` reads lies within the array. -/
theorem sectionsAt_bounds (b : ByteArray) (at_ : Nat) :
    ∀ l, sectionsAt b at_ = some l → ∀ s ∈ l, s.at_ < s.start ∧ s.start ≤ s.end_ ∧ s.end_ ≤ b.size := by
  fun_induction sectionsAt b at_ with
  | case1 at_ h p e he ih =>
    intro l hl s hs
    cases hr : sectionsAt b e with
    | none => simp [hr] at hl
    | some r =>
      simp only [hr, Option.map_some, Option.some.injEq] at hl
      subst hl
      simp only [List.mem_cons] at hs
      rcases hs with rfl | hs
      · simp only [e]; omega
      · exact ih r hr s hs
  | case2 => intro l hl; simp at hl
  | case3 => intro l hl; simp only [Option.some.injEq] at hl; subst hl; simp

/-- The header check of `sections`, reading the array. -/
def isComponentHeaderB (c : ByteArray) : Bool :=
  c.data[0]? == some 0 && c.data[1]? == some 0x61 && c.data[2]? == some 0x73 && c.data[3]? == some 0x6d &&
    c.data[6]? == some 1 && c.data[7]? == some 0

theorem isComponentHeaderB_eq (c : ByteArray) : isComponentHeaderB c = isComponentHeader c.data.toList := by
  simp [isComponentHeaderB, isComponentHeader]

theorem prefix_take (p l : List UInt8) (k : Nat) :
    p.isPrefixOf (l.take k) = (decide (p.length ≤ k) && decide (l.take p.length = p)) := by
  apply Bool.eq_iff_iff.mpr
  simp only [List.isPrefixOf_iff_prefix, List.prefix_iff_eq_take, Bool.and_eq_true, decide_eq_true_eq, List.take_take]
  constructor
  · intro h
    have hl : p.length ≤ k := by
      have := congrArg List.length h; simp at this; omega
    refine ⟨hl, ?_⟩
    rw [Nat.min_eq_left hl] at h; exact h.symm
  · rintro ⟨hl, h⟩
    rw [Nat.min_eq_left hl, h]

/-- `pfx` is a prefix of the bytes of `c` from `s` to `e`. -/
def prefixAt (c pfx : ByteArray) (s e : Nat) : Bool :=
  decide (pfx.size ≤ e - s) && decide (c.extract s (s + pfx.size) = pfx)

theorem prefixAt_eq (c pfx : ByteArray) (s e : Nat) :
    prefixAt c pfx s e = pfx.data.toList.isPrefixOf ((from_ c s).take (e - s)) := by
  rw [prefix_take, prefixAt]
  congr 1
  have hx : (c.extract s (s + pfx.size)).data.toList = (from_ c s).take pfx.size := by
    rw [extract_toList]; congr 1; omega
  apply decide_eq_decide.mpr
  rw [show pfx.data.toList.length = pfx.size by simp, ← hx]
  constructor
  · intro h; rw [h]
  · intro h; apply ByteArray.ext; apply Array.toList_inj.mp; exact h

/-- The section `replaceCoreModule` writes for a matching section `s`: id 1,
the size, `to` and the section's bytes after the prefix. -/
def replacement (c pfx to : ByteArray) (s : Sec) : ByteArray :=
  (1 :: lebJS (to.size + (s.end_ - s.start - pfx.size))).toByteArray ++ to ++ c.extract (s.start + pfx.size) s.end_

/-- `replaceCoreModule`, by offsets and appends. -/
def replaceCoreModuleF (c pfx to : ByteArray) : Except String ByteArray :=
  if !isComponentHeaderB c then .error notAComponent else
  match sectionsAt c 8 with
  | none => .error notAComponent
  | some secs =>
    let m := fun (s : Sec) => s.id == 1 && prefixAt c pfx s.start s.end_
    let found := secs.filter m
    if found.length = 1 then
      .ok (secs.foldl (fun acc s => if m s then acc ++ replacement c pfx to s else acc ++ c.extract s.at_ s.end_) (c.extract 0 8))
    else .error s!"The component has {found.length} matching core modules (expected one)"

theorem foldl_append_toList (secs : List Sec) (f : Sec → ByteArray) (acc : ByteArray) :
    (secs.foldl (fun acc s => acc ++ f s) acc).data.toList = acc.data.toList ++ secs.flatMap (fun s => (f s).data.toList) := by
  induction secs generalizing acc with
  | nil => simp
  | cons s secs ih => simp [ih, List.append_assoc]

theorem replaceCoreModule_eq : @replaceCoreModule = @replaceCoreModuleF := by
  funext c pfx to
  simp only [replaceCoreModule, replaceCoreModuleL, replaceCoreModuleF, ← isComponentHeaderB_eq]
  cases hh : isComponentHeaderB c with
  | false => rfl
  | true =>
    simp only [Bool.not_true, Bool.false_eq_true, ↓reduceIte]
    have hp := sectionsAt_eq c 8
    simp only [from_] at hp
    rw [← hp]
    cases hs : sectionsAt c 8 with
    | none => rfl
    | some secs =>
      have hb := sectionsAt_bounds c 8 secs hs
      simp only [Option.map_some]
      -- the matcher reads the same on every section
      have hm : ∀ s ∈ secs, ((s.toSection c).id == 1 && pfx.data.toList.isPrefixOf (s.toSection c).body) =
          (s.id == 1 && prefixAt c pfx s.start s.end_) := by
        intro s _; simp [Sec.toSection, prefixAt_eq]
      have hlen : (List.filter (fun s => s.id == 1 && pfx.data.toList.isPrefixOf s.body) (secs.map (·.toSection c))).length =
          (secs.filter fun s => s.id == 1 && prefixAt c pfx s.start s.end_).length := by
        rw [List.filter_map, List.length_map]
        congr 1
        apply List.filter_congr
        intro s hs'; exact hm s hs'
      rw [hlen]
      split
      · simp only [Except.map, Except.ok.injEq]
        apply ByteArray.ext; apply Array.toList_inj.mp
        have hf : ∀ acc, secs.foldl (fun acc s => if (s.id == 1 && prefixAt c pfx s.start s.end_) then acc ++ replacement c pfx to s
            else acc ++ c.extract s.at_ s.end_) acc =
            secs.foldl (fun acc s => acc ++ (if (s.id == 1 && prefixAt c pfx s.start s.end_) then replacement c pfx to s
              else c.extract s.at_ s.end_)) acc := by
          intro acc; congr 1; funext acc s; split <;> rfl
        rw [hf, foldl_append_toList, extract_toList, List.flatMap_map]
        simp only [from_, List.drop_zero, Nat.sub_zero]
        congr 1
        rw [List.flatMap_def, List.flatMap_def]
        congr 1
        apply List.map_congr_left
        intro s hs'
        obtain ⟨h1, h2, h3⟩ := hb s hs'
        rw [hm s hs']
        split
        · simp only [replacement, ByteArray.toList_data_append, List.data_toByteArray, List.toList_toArray, extract_toList,
            Sec.toSection, List.length_append, List.length_take, List.cons_append, List.drop_take]
          simp only [List.length_drop]
          simp only [from_, Array.length_toList, ByteArray.size_data, List.drop_drop]
          rw [show min (s.end_ - s.start - pfx.size) (c.size - s.start - pfx.size) = s.end_ - s.start - pfx.size by omega,
            show s.end_ - (s.start + pfx.size) = s.end_ - s.start - pfx.size by omega, List.append_assoc]
        · simp [Sec.toSection]
      · rfl

/-! ## `withoutComponentType` -/

/-- `componentTypeBytes.isPrefixOf` the `k` bytes of `m` from `s`. -/
def componentTypeAt (m : ByteArray) (s k : Nat) : Bool :=
  decide (14 ≤ k) && decide ((m.extract s (s + 14)).data.toList = componentTypeBytes)

theorem componentTypeAt_eq (m : ByteArray) (s k : Nat) :
    componentTypeAt m s k = componentTypeBytes.isPrefixOf ((from_ m s).take k) := by
  rw [prefix_take, componentTypeAt, extract_toList, show s + 14 - s = 14 by omega]
  rfl

/-- `keepSections` of the bytes from `at`, appended to `acc`. -/
def keepAt (m : ByteArray) (at_ : Nat) (acc : ByteArray) : ByteArray :=
  if h : at_ < m.size then
    let p := readLebAt m (at_ + 1)
    let start := at_ + 1 + p.2
    let next := start + p.1
    let n := readLebAt m start
    let drop := m[at_] == 0 && componentTypeAt m (start + n.2) n.1
    keepAt m next (if drop then acc else acc ++ m.extract at_ next)
  else acc
termination_by m.size - at_
decreasing_by
  have := readLebJS_snd_pos (from_ m (at_ + 1))
  rw [← readLebAt_eq] at this
  omega

theorem keepAt_eq (m : ByteArray) (at_ : Nat) (acc : ByteArray) :
    (keepAt m at_ acc).data.toList = acc.data.toList ++ keepSections (from_ m at_) := by
  fun_induction keepAt m at_ acc with
  | case1 at_ acc h p start next n drop ih =>
    simp only [dite_eq_ite] at ih
    rw [ih, from_eq_cons m at_ h, keepSections]
    have hp : p = readLebJS (from_ m (at_ + 1)) := readLebAt_eq m (at_ + 1)
    have hpayload : (from_ m (at_ + 1)).drop p.2 = from_ m start := by simp only [from_, List.drop_drop, start]
    have hn : n = readLebJS (from_ m start) := readLebAt_eq m start
    have hname : ((from_ m start).drop n.2).take n.1 = (from_ m (start + n.2)).take n.1 := by
      simp only [from_, List.drop_drop]
    have hrest : (from_ m (at_ + 1)).drop (p.2 + p.1) = from_ m next := by
      simp only [from_, List.drop_drop, next, start]; congr 1; omega
    have hraw : (m.extract at_ next).data.toList = m[at_] :: (from_ m (at_ + 1)).take (p.2 + p.1) := by
      rw [extract_toList, from_eq_cons m at_ h, show next - at_ = (p.2 + p.1) + 1 by simp only [next, start]; omega,
        List.take_succ_cons]
    simp only [← hp, hpayload, ← hn, hname, hrest, drop, ← componentTypeAt_eq]
    split
    · simp
    · rw [ByteArray.toList_data_append, hraw]; simp [List.append_assoc]
  | case2 at_ acc h =>
    rw [from_eq_nil m at_ (by omega), keepSections]; simp

/-- `withoutComponentType`, by offsets and appends. -/
def withoutComponentTypeF (m : ByteArray) : ByteArray := keepAt m 8 (m.extract 0 8)

theorem withoutComponentType_eq : @withoutComponentType = @withoutComponentTypeF := by
  funext m
  apply ByteArray.ext; apply Array.toList_inj.mp
  rw [withoutComponentTypeF, keepAt_eq, extract_toList]
  simp [withoutComponentType, from_]

/-! ## `extractCore` -/

/-- `sectionsOf`, by offsets. -/
def sectionsOfF (c : ByteArray) : Except String (List Sec) :=
  if !isComponentHeaderB c then .error notAComponent else
  match sectionsAt c 8 with
  | none => .error notAComponent
  | some secs => .ok secs

theorem sectionsOfF_eq (c : ByteArray) : (sectionsOfF c).map (·.map (·.toSection c)) = sectionsOf c.data.toList := by
  simp only [sectionsOfF, sectionsOf, ← isComponentHeaderB_eq]
  cases isComponentHeaderB c with
  | false => rfl
  | true =>
    simp only [Bool.not_true, Bool.false_eq_true, ↓reduceIte]
    have hp := sectionsAt_eq c 8
    simp only [from_] at hp
    rw [← hp]
    cases sectionsAt c 8 <;> rfl

theorem sectionsOfF_bounds (c : ByteArray) (secs : List Sec) (h : sectionsOfF c = .ok secs) :
    ∀ s ∈ secs, s.at_ < s.start ∧ s.start ≤ s.end_ ∧ s.end_ ≤ c.size := by
  simp only [sectionsOfF] at h
  split at h
  · cases h
  · split at h
    · cases h
    · rename_i l hl; cases h; exact sectionsAt_bounds c 8 _ hl

/-- The placeholder module's bytes. -/
def placeholderB : ByteArray := placeholderModule.toByteArray

theorem placeholderB_toList : placeholderB.data.toList = placeholderModule := by simp [placeholderB]

/-- `extractCore`, by offsets. -/
def extractCoreF (component template : ByteArray) : Except String ByteArray := do
  let modules := (← sectionsOfF template).filter (·.id == 1)
  match modules.findIdx? (fun s => prefixAt template placeholderB s.start s.end_) with
  | none => .error "The component template has no placeholder module"
  | some index =>
    let t := modules.getD index ⟨0, 0, 0, 0⟩
    let suffixLength := (t.end_ - t.start) - placeholderB.size
    match ((← sectionsOfF component).filter (·.id == 1))[index]? with
    | none => .error "Cannot read properties of undefined (reading 'start')"
    | some main => .ok (component.extract main.start (main.start + ((main.end_ - main.start) - suffixLength)))

theorem extractCore_eq : @extractCore = @extractCoreF := by
  funext c t
  simp only [extractCore, extractCoreL, extractCoreF]
  rw [← sectionsOfF_eq t]
  cases ht : sectionsOfF t with
  | error e => rfl
  | ok tsecs =>
    have htb := sectionsOfF_bounds t tsecs ht
    simp only [Except.map, bind, Except.bind]
    rw [List.filter_map, List.findIdx?_map]
    have hpred : ((fun (s : Section) => placeholderModule.isPrefixOf s.body) ∘ (fun (x : Sec) => x.toSection t)) =
        (fun (s : Sec) => prefixAt t placeholderB s.start s.end_) := by
      funext s; simp [Sec.toSection, prefixAt_eq, placeholderB_toList]
    have hid : ((fun (s : Section) => s.id == 1) ∘ (fun (x : Sec) => x.toSection t)) = (fun s : Sec => s.id == 1) := by
      funext s; rfl
    rw [hid, hpred]
    cases hi : (tsecs.filter (fun s : Sec => s.id == 1)).findIdx? (fun s => prefixAt t placeholderB s.start s.end_) with
    | none => rfl
    | some index =>
      have hlt : index < (tsecs.filter (fun s : Sec => s.id == 1)).length := by
        obtain ⟨h, -⟩ := List.findIdx?_eq_some_iff_getElem.mp hi; exact h
      have hmem : (tsecs.filter (fun s : Sec => s.id == 1))[index] ∈ tsecs :=
        (List.mem_filter.mp (List.getElem_mem hlt)).1
      obtain ⟨b1, b2, b3⟩ := htb _ hmem
      simp only
      rw [← sectionsOfF_eq c]
      cases hc : sectionsOfF c with
      | error e => rfl
      | ok csecs =>
        have hcb := sectionsOfF_bounds c csecs hc
        have hidc : ((fun (s : Section) => s.id == 1) ∘ (fun (x : Sec) => x.toSection c)) = (fun s : Sec => s.id == 1) := by
          funext s; rfl
        simp only [Except.map, List.filter_map, hidc, List.getElem?_map]
        cases hm : (csecs.filter (fun s : Sec => s.id == 1))[index]? with
        | none => rfl
        | some main =>
          have hmm : main ∈ csecs := (List.mem_filter.mp (List.mem_of_getElem? hm)).1
          obtain ⟨m1, m2, m3⟩ := hcb main hmm
          simp only [Option.map_some, Except.ok.injEq]
          apply ByteArray.ext; apply Array.toList_inj.mp
          rw [List.getD_eq_getElem?_getD, List.getElem?_map, List.getElem?_eq_getElem hlt]
          simp only [Option.map_some, Option.getD_some, Sec.toSection, extract_toList, List.length_take, from_,
            List.length_drop, Array.length_toList, ByteArray.size_data, List.take_take]
          simp only [List.getD_eq_getElem?_getD, List.getElem?_eq_getElem hlt, Option.getD_some]
          congr 1
          rw [placeholderB, List.size_toByteArray]
          omega

theorem placeholder_eq : (⟨placeholderModule.toArray⟩ : ByteArray) = placeholderB := by
  apply ByteArray.ext; simp [placeholderB]

/-- `componentize` through the fast `replaceCoreModule` (the model's own
compiled code calls the model's). -/
def componentizeF (core template : ByteArray) : Except String ByteArray := replaceCoreModuleF template placeholderB core

theorem componentize_eq : @componentize = @componentizeF := by
  funext core template; simp only [componentize, componentizeF, replaceCoreModule_eq, placeholder_eq]

/-- `makeTemplate` through the fast `replaceCoreModule`. -/
def makeTemplateF (component core : ByteArray) : Except String ByteArray := replaceCoreModuleF component core placeholderB

theorem makeTemplate_eq : @makeTemplate = @makeTemplateF := by
  funext component core; simp only [makeTemplate, makeTemplateF, replaceCoreModule_eq, placeholder_eq]

attribute [csimp] replaceCoreModule_eq extractCore_eq withoutComponentType_eq componentize_eq makeTemplate_eq

end Lasm.Cli.Fast
