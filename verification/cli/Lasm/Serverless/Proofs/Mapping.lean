/-
Proofs about the model of the function platforms' HTTP mapping
(Lasm.Serverless.Proofs.Model): the lemmas behind the propositions of
Lasm/Serverless/Spec.lean. Per-character and per-byte facts (hexadecimal
digits, the bytes `URLSearchParams` writes as themselves) are checked by
`decide` over every value.
-/
import Lasm.Serverless.Proofs.Model

namespace Lasm.Serverless.Proofs.Mapping
open Lasm.Serverless

/-! ## Request targets -/

theorem hexDigit_ok : ∀ d, d < 16 → printable (hexDigit d) = true ∧ hexDigit d ≠ '#' ∧ hexDigit d ≠ '?' ∧
    unhex (hexDigit d) = some d := by decide

theorem pct_ok (b : UInt8) : ∀ c ∈ pct b, printable c = true ∧ c ≠ '#' ∧ c ≠ '?' := by
  have h1 := hexDigit_ok (b.toNat / 16) (by have := b.toNat_lt; omega)
  have h2 := hexDigit_ok (b.toNat % 16) (by omega)
  intro c hc
  simp only [pct, List.mem_cons, List.not_mem_nil, or_false] at hc
  rcases hc with rfl | rfl | rfl
  · decide
  · exact ⟨h1.1, h1.2.1, h1.2.2.1⟩
  · exact ⟨h2.1, h2.2.1, h2.2.2.1⟩

/-- Every character `escape` writes is visible ASCII, not `#`, and (escaping a
path) not `?`. -/
theorem escape_ok {bad : Char → Bool} (hbad : ∀ c, bad c = false → printable c = true ∧ c ≠ '#') (l : List Char) :
    ∀ c ∈ escape bad l, printable c = true ∧ c ≠ '#' := by
  intro c hc
  simp only [escape, List.mem_flatMap] at hc
  obtain ⟨x, _, hx⟩ := hc
  split at hx
  · simp only [List.mem_flatMap] at hx
    obtain ⟨b, _, hb⟩ := hx
    exact ⟨(pct_ok b c hb).1, (pct_ok b c hb).2.1⟩
  · simp only [List.mem_singleton] at hx
    subst hx
    rename_i h
    exact hbad _ (by simpa using h)

theorem pathUnsafe_ok : ∀ c, pathUnsafe c = false → printable c = true ∧ c ≠ '#' := by
  intro c h
  unfold pathUnsafe at h
  cases hp : printable c <;> simp_all

theorem queryUnsafe_ok : ∀ c, queryUnsafe c = false → printable c = true ∧ c ≠ '#' := by
  intro c h
  unfold queryUnsafe at h
  cases hp : printable c <;> simp_all

theorem escape_path_no_question (l : List Char) : ∀ c ∈ escape pathUnsafe l, c ≠ '?' := by
  intro c hc
  simp only [escape, List.mem_flatMap] at hc
  obtain ⟨x, _, hx⟩ := hc
  split at hx
  · simp only [List.mem_flatMap] at hx
    obtain ⟨b, _, hb⟩ := hx
    exact (pct_ok b c hb).2.2
  · simp only [List.mem_singleton] at hx
    subst hx
    rename_i h
    intro hq
    subst hq
    exact h (by decide)

theorem escape_id {bad : Char → Bool} (l : List Char) (h : ∀ c ∈ l, bad c = false) : escape bad l = l := by
  induction l with
  | nil => rfl
  | cons c r ih =>
    simp only [escape, List.flatMap_cons] at ih ⊢
    rw [ih (fun x hx => h x (List.mem_cons_of_mem _ hx))]
    simp [h c (List.mem_cons_self ..)]

theorem requestTarget_toList (p q : String) : (requestTarget p q).toList =
    escape pathUnsafe (if p.isEmpty then ['/'] else p.toList) ++
      (if q.isEmpty then [] else '?' :: escape queryUnsafe q.toList) := by
  simp [requestTarget]

theorem target_valid (p q : String) : ∀ c ∈ (requestTarget p q).toList, printable c = true ∧ c ≠ '#' := by
  rw [requestTarget_toList]
  intro c hc
  rcases List.mem_append.1 hc with h | h
  · exact escape_ok pathUnsafe_ok _ c h
  · split at h
    · simp at h
    · rcases List.mem_cons.1 h with rfl | h
      · decide
      · exact escape_ok queryUnsafe_ok _ c h

theorem takeWhile_all {l : List Char} (h : ∀ c ∈ l, c ≠ '?') : ∀ a ∈ l, (a != '?') = true := by
  intro a ha; simpa using h a ha

theorem target_path (p q : String) :
    pathOf (requestTarget p q) = String.ofList (escape pathUnsafe (if p.isEmpty then ['/'] else p.toList)) := by
  simp only [pathOf, requestTarget_toList]
  rw [List.takeWhile_append_of_pos (takeWhile_all (escape_path_no_question _))]
  have : List.takeWhile (· != '?') (if q.isEmpty then [] else '?' :: escape queryUnsafe q.toList) = [] := by
    split <;> simp
  rw [this, List.append_nil]

theorem target_query (p q : String) :
    queryOf (requestTarget p q) = if q.isEmpty then none else some (String.ofList (escape queryUnsafe q.toList)) := by
  simp only [queryOf, requestTarget_toList]
  rw [List.dropWhile_append_of_pos (takeWhile_all (escape_path_no_question _))]
  by_cases hq : q.isEmpty <;> simp [hq]

theorem target_unchanged (p q : String) (hp : ∀ c ∈ p.toList, pathUnsafe c = false)
    (hq : ∀ c ∈ q.toList, queryUnsafe c = false) :
    requestTarget p q = (if p.isEmpty then "/" else p) ++ (if q.isEmpty then "" else "?" ++ q) := by
  apply String.ext
  rw [requestTarget_toList, escape_id _ hq, String.toList_append]
  by_cases h : p.isEmpty
  · simp only [h, ite_true]
    rw [escape_id ['/'] (by decide)]
    by_cases hq' : q = "" <;> simp [hq']
  · simp only [h, ite_false, Bool.false_eq_true]
    rw [escape_id _ hp]
    by_cases hq' : q = "" <;> simp [hq']

theorem target_slash (p q : String) (h : p.isEmpty ∨ p.toList.head? = some '/') :
    (requestTarget p q).toList.head? = some '/' := by
  rw [requestTarget_toList]
  by_cases he : p.isEmpty
  · simp only [he, ite_true]
    rw [escape_id ['/'] (by decide)]
    simp
  · simp only [he, ite_false, Bool.false_eq_true, false_or] at h ⊢
    match hl : p.toList, h with
    | c :: r, h =>
      simp only [List.head?_cons, Option.some.injEq] at h
      subst h
      have : pathUnsafe '/' = false := by decide
      simp [escape, this]

/-! ## Host and the URL a server builds -/

theorem takeWhile_self {p : α → Bool} {l : List α} (h : ∀ a ∈ l, p a = true) : l.takeWhile p = l := by
  have := List.takeWhile_append_of_pos (l₂ := []) h
  simpa using this

theorem urlHost_plain (h t : String) (hh : plainHost h = true) (ht : t.toList.head? = some '/') :
    urlHost ("http://" ++ h ++ t) = some (h, t) := by
  simp only [plainHost, Bool.and_eq_true, Bool.not_eq_true', List.all_eq_true] at hh
  obtain ⟨_, hall⟩ := hh
  have stopFalse : ∀ c ∈ h.toList, (!(c == '/' || c == '\\' || c == '?' || c == '#')) = true := by
    intro c hc
    have := hall c hc
    simp only [Bool.or_eq_false_iff, beq_eq_false_iff_ne] at this
    simp only [Bool.not_eq_true', Bool.or_eq_false_iff, beq_eq_false_iff_ne]
    exact ⟨⟨⟨this.2.1.1.1.1, this.2.1.2⟩, this.2.1.1.1.2⟩, this.2.1.1.2⟩
  have noAt : ∀ c ∈ h.toList.reverse, (c != '@') = true := by
    intro c hc
    have := hall c (List.mem_reverse.1 hc)
    simp only [Bool.or_eq_false_iff, beq_eq_false_iff_ne] at this
    simpa using this.2.2
  match ht' : t.toList, ht with
  | c :: r, ht =>
    simp only [List.head?_cons, Option.some.injEq] at ht
    subst ht
    have hs : ("http://" ++ h ++ t).toList = 'h' :: 't' :: 't' :: 'p' :: ':' :: '/' :: '/' :: (h.toList ++ '/' :: r) := by
      simp [String.toList_append, ht']
    simp only [urlHost, hs]
    rw [List.takeWhile_append_of_pos stopFalse, List.dropWhile_append_of_pos stopFalse]
    simp only [List.takeWhile_cons, List.dropWhile_cons]
    have hslash : (!('/' == '/' || '/' == '\\' || '/' == '?' || '/' == '#')) = false := by decide
    simp only [hslash, Bool.false_eq_true, ite_false, List.append_nil]
    rw [takeWhile_self noAt]
    simp only [List.reverse_reverse, String.ofList_toList, Option.some.injEq, Prod.mk.injEq, true_and]
    apply String.ext
    simp [ht']

/-! ## The fields forward() sends -/

theorem cookie_lower {n : String} (h : isCookie n = true) : lower n = "cookie" := by
  simpa [isCookie] using h

theorem cookie_not_host {n : String} (h : isCookie n = true) : isHost n = false := by
  simp [isHost, cookie_lower h]

theorem keep_cookies (has : Bool) (l : Headers) : (keep has l).filter (isCookie ·.1) = l.filter (isCookie ·.1) := by
  induction l generalizing has with
  | nil => rfl
  | cons x r ih =>
    obtain ⟨n, v⟩ := x
    by_cases hc : isCookie n = true
    · have h1 : (hopByHop (lower n) || lower n == "content-length") = false := by rw [cookie_lower hc]; decide
      simp [keep, h1, cookie_not_host hc, hc, ih]
    · simp only [keep]
      split
      · simp [hc, ih]
      · split
        · split
          · simp [hc, ih]
          · simp [hc, ih]
        · simp [hc, ih]

theorem keep_true_hosts (l : Headers) : (keep true l).filter (isHost ·.1) = [] := by
  induction l with
  | nil => rfl
  | cons x r ih =>
    obtain ⟨n, v⟩ := x
    simp only [keep]
    split
    · exact ih
    · split
      · simp only [Bool.true_or, ite_true]; exact ih
      · rename_i hh
        have hh' : isHost n = false := by simpa using hh
        rw [List.filter_cons, hh']
        exact ih

theorem keep_false_hosts (l : Headers) : (keep false l).filter (isHost ·.1) = [] ∨
    ∃ n v, (keep false l).filter (isHost ·.1) = [(n, v)] ∧ plainHost v = true := by
  induction l with
  | nil => exact Or.inl rfl
  | cons x r ih =>
    obtain ⟨n, v⟩ := x
    simp only [keep]
    split
    · exact ih
    · split
      · rename_i hh
        split
        · exact ih
        · rename_i hp
          right
          refine ⟨n, v, ?_, by simpa using hp⟩
          simp [hh, keep_true_hosts]
      · rename_i hh
        simpa [hh] using ih

theorem host_once (hs : Headers) (d : String) (hd : plainHost d = true) :
    ∃ n v, (outgoing hs d).filter (isHost ·.1) = [(n, v)] ∧ plainHost v = true := by
  simp only [outgoing]
  split
  · rename_i hany
    rcases keep_false_hosts (joinCookies hs) with h | h
    · exfalso
      obtain ⟨x, hx, hxh⟩ := List.any_eq_true.1 hany
      have : x ∈ (keep false (joinCookies hs)).filter (isHost ·.1) := List.mem_filter.2 ⟨hx, hxh⟩
      rw [h] at this
      simp at this
    · exact h
  · rename_i hany
    refine ⟨"host", d, ?_, hd⟩
    rw [List.filter_append]
    have : (keep false (joinCookies hs)).filter (isHost ·.1) = [] := by
      rw [List.filter_eq_nil_iff]
      intro x hx hxh
      exact hany (List.any_eq_true.2 ⟨x, hx, hxh⟩)
    rw [this]
    have : isHost "host" = true := by decide
    simp [this]

theorem place_cookies (j : String) (hs : Headers) :
    (place j hs).filter (isCookie ·.1) = (if hs.any (isCookie ·.1) && !j.isEmpty then
      [((hs.find? (isCookie ·.1)).map (·.1) |>.getD "", j)] else []) := by
  induction hs with
  | nil => rfl
  | cons x r ih =>
    obtain ⟨n, v⟩ := x
    by_cases hc : isCookie n = true
    · simp only [place, hc, ite_true]
      rw [List.filter_append, List.filter_filter]
      have : r.filter (fun a => isCookie a.1 && !isCookie a.1) = [] := by simp
      rw [this, List.append_nil]
      by_cases hj : j.isEmpty <;> simp [hj, hc]
    · have hc' : isCookie n = false := by simpa using hc
      simp only [place, hc', Bool.false_eq_true, ite_false, List.filter_cons, List.any_cons, Bool.false_or,
        List.find?_cons]
      exact ih

theorem place_others (j : String) (hs : Headers) :
    (place j hs).filter (!isCookie ·.1) = hs.filter (!isCookie ·.1) := by
  induction hs with
  | nil => rfl
  | cons x r ih =>
    obtain ⟨n, v⟩ := x
    by_cases hc : isCookie n = true
    · simp only [place, hc, ite_true]
      rw [List.filter_append, List.filter_filter]
      by_cases hj : j.isEmpty <;> simp [hj, hc]
    · simp [place, hc, ih]

theorem intercalate_ne_empty (sep : String) (l : List String) (hl : l ≠ []) (h : ∀ x ∈ l, x ≠ "") :
    String.intercalate sep l ≠ "" := by
  match l, hl with
  | [t], _ => simpa using h t
  | t :: u :: l', _ =>
    rw [String.intercalate_cons_cons]
    intro he
    have := congrArg String.toList he
    simp only [String.toList_append] at this
    exact h t (List.mem_cons_self ..) (String.toList_eq_nil_iff.1 (List.append_eq_nil_iff.1 (List.append_eq_nil_iff.1 this).1).1)

theorem joinedCookie_ne_empty (hs : Headers) : (joinedCookie hs).isEmpty = false ∨
    joinedCookie hs = "" ∧ ((hs.filter (isCookie ·.1)).map (cookieText ·.2)).filter (!·.isEmpty) = [] := by
  by_cases h : ((hs.filter (isCookie ·.1)).map (cookieText ·.2)).filter (!·.isEmpty) = []
  · right; simp [joinedCookie, h]
  · left
    have := intercalate_ne_empty "; " _ h (by intro x hx; simpa using (List.mem_filter.1 hx).2)
    simpa [joinedCookie] using this

/-- Every field forward() sends that is a Cookie field holds the joined value, never empty, and there is at most one. -/
theorem cookie_once (hs : Headers) (d : String) :
    ((outgoing hs d).filter (isCookie ·.1)).length ≤ 1 ∧ ∀ x ∈ outgoing hs d, isCookie x.1 = true → x.2 ≠ "" := by
  have hk : (outgoing hs d).filter (isCookie ·.1) = (joinCookies hs).filter (isCookie ·.1) := by
    simp only [outgoing]
    split
    · exact keep_cookies _ _
    · rw [List.filter_append, keep_cookies]
      have : isCookie "host" = false := by decide
      simp [this]
  have hp := place_cookies (joinedCookie hs) hs
  simp only [joinCookies] at hk
  rw [hp] at hk
  constructor
  · rw [hk]; split <;> simp
  · intro x hx hc
    have : x ∈ (outgoing hs d).filter (isCookie ·.1) := List.mem_filter.2 ⟨hx, hc⟩
    rw [hk] at this
    split at this
    · rename_i hj
      simp only [List.mem_singleton] at this
      subst this
      simp only [Bool.and_eq_true, Bool.not_eq_true'] at hj
      intro he
      simp only at he
      rw [he] at hj
      exact absurd hj.2 (by decide)
    · simp at this

/-! ## Query strings: what URLSearchParams writes, a server reads back -/

/-- A character of form text: visible ASCII, and none of `# & = ?`. -/
def good (c : Char) : Bool := printable c && c != '#' && c != '&' && c != '=' && c != '?'

def safeCheck (n : Nat) : Bool :=
  !formSafe n.toUInt8 || (Char.ofNat n != '+' && Char.ofNat n != '%' &&
    String.utf8EncodeChar (Char.ofNat n) == [n.toUInt8] && good (Char.ofNat n))

theorem safe_ok : ∀ n : Fin 256, safeCheck n.val = true := by decide +kernel

theorem hex_good : ∀ n : Fin 16, good (hexDigit n.val) = true ∧ unhex (hexDigit n.val) = some n.val := by decide +kernel

theorem formByte_good (b : UInt8) : ∀ c ∈ formByte b, good c = true := by
  have hs := safe_ok ⟨b.toNat, b.toNat_lt⟩
  have h1 := hex_good ⟨b.toNat / 16, by have := b.toNat_lt; omega⟩
  have h2 := hex_good ⟨b.toNat % 16, by omega⟩
  simp only [safeCheck, Nat.toUInt8_eq, UInt8.ofNat_toNat, Bool.or_eq_true, Bool.not_eq_true', Bool.and_eq_true] at hs
  intro c hc
  simp only [formByte] at hc
  split at hc
  · rename_i hsafe
    simp only [List.mem_singleton] at hc
    subst hc
    rcases hs with hs | hs
    · simp [hs] at hsafe
    · exact hs.2
  · split at hc
    · simp only [List.mem_singleton] at hc; subst hc; decide
    · simp only [pct, List.mem_cons, List.not_mem_nil, or_false] at hc
      rcases hc with rfl | rfl | rfl
      · decide
      · exact h1.1
      · exact h2.1

theorem formBytes_plus (r : List Char) : formBytes ('+' :: r) = 32 :: formBytes r := by
  rw [formBytes.eq_def]; rfl

theorem formBytes_other (c : Char) (r : List Char) (h1 : c ≠ '+') (h2 : c ≠ '%') :
    formBytes (c :: r) = String.utf8EncodeChar c ++ formBytes r := by
  rw [formBytes.eq_def]
  have : (c == '+') = false := by simpa using h1
  have h' : (c == '%') = false := by simpa using h2
  simp only [this, h', Bool.false_eq_true, ite_false]

theorem formBytes_pct (a b : Char) (r : List Char) (x y : Nat) (ha : unhex a = some x) (hb : unhex b = some y) :
    formBytes ('%' :: a :: b :: r) = (16 * x + y).toUInt8 :: formBytes r := by
  rw [formBytes.eq_def]
  simp only [show ('%' == '+') = false by decide, show ('%' == '%') = true by decide, Bool.false_eq_true, ite_false,
    ite_true, ha, hb]

theorem formBytes_formByte (b : UInt8) (r : List Char) : formBytes (formByte b ++ r) = b :: formBytes r := by
  have hs := safe_ok ⟨b.toNat, b.toNat_lt⟩
  have h1 := hex_good ⟨b.toNat / 16, by have := b.toNat_lt; omega⟩
  have h2 := hex_good ⟨b.toNat % 16, by omega⟩
  simp only [safeCheck, Nat.toUInt8_eq, UInt8.ofNat_toNat, Bool.or_eq_true, Bool.not_eq_true', Bool.and_eq_true,
    bne_iff_ne, ne_eq, beq_iff_eq] at hs
  simp only [formByte]
  split
  · rename_i hsafe
    rcases hs with hs | ⟨⟨⟨hp, hpc⟩, he⟩, _⟩
    · simp [hs] at hsafe
    · rw [List.singleton_append, formBytes_other _ _ hp hpc, he]; rfl
  · split
    · rename_i h32
      rw [List.singleton_append, formBytes_plus]
      congr 1
      apply UInt8.toNat_inj.1
      simp at h32
      simp [h32]
    · simp only [pct, List.cons_append, List.nil_append]
      rw [formBytes_pct _ _ _ _ _ h1.2 h2.2]
      congr 1
      apply UInt8.toNat_inj.1
      simp only [Nat.toUInt8_eq, UInt8.toNat_ofNat']
      have := b.toNat_lt
      omega

theorem formBytes_bytes (bs : List UInt8) : formBytes (bs.flatMap formByte) = bs := by
  induction bs with
  | nil => rw [formBytes.eq_def]; rfl
  | cons b r ih => rw [List.flatMap_cons, formBytes_formByte, ih]

theorem formText_good (s : String) : ∀ c ∈ formText s, good c = true := by
  intro c hc
  simp only [formText, List.mem_flatMap] at hc
  obtain ⟨b, _, hb⟩ := hc
  exact formByte_good b c hb

theorem formText?_formText (s : String) : formText? (formText s) = some s := by
  simp only [formText?, formText, formBytes_bytes, Array.toArray_toList]
  unfold String.fromUTF8?
  split
  · rfl
  · rename_i h; exact absurd (by simpa using s.isValidUTF8) h

theorem good_ne {c : Char} (h : good c = true) : c ≠ '&' ∧ c ≠ '=' ∧ c ≠ '#' ∧ printable c = true := by
  simp only [good, Bool.and_eq_true, bne_iff_ne, ne_eq] at h
  exact ⟨h.1.1.2, h.1.2, h.1.1.1.2, h.1.1.1.1⟩

theorem splitOn_no (sep : Char) (x : List Char) (h : ∀ c ∈ x, c ≠ sep) : splitOn sep x = [x] := by
  induction x with
  | nil => rfl
  | cons c r ih =>
    have hc : (c == sep) = false := by simpa using h c (List.mem_cons_self ..)
    simp [splitOn, hc, ih (fun a ha => h a (List.mem_cons_of_mem _ ha))]

theorem splitOn_sep (sep : Char) (x y : List Char) (h : ∀ c ∈ x, c ≠ sep) :
    splitOn sep (x ++ sep :: y) = x :: splitOn sep y := by
  induction x with
  | nil => simp [splitOn]
  | cons c r ih =>
    have hc : (c == sep) = false := by simpa using h c (List.mem_cons_self ..)
    simp [splitOn, hc, ih (fun a ha => h a (List.mem_cons_of_mem _ ha))]

theorem splitOn_joinWith (sep : Char) (parts : List (List Char)) (hne : parts ≠ [])
    (h : ∀ p ∈ parts, ∀ c ∈ p, c ≠ sep) : splitOn sep (joinWith sep parts) = parts := by
  induction parts with
  | nil => contradiction
  | cons x xs ih =>
    match xs, ih with
    | [], _ => simpa [joinWith] using splitOn_no sep x (h x (List.mem_cons_self ..))
    | y :: ys, ih =>
      simp only [joinWith]
      rw [splitOn_sep _ _ _ (h x (List.mem_cons_self ..))]
      rw [ih (by simp) (fun p hp => h p (List.mem_cons_of_mem _ hp))]

theorem splitFirst_sep (sep : Char) (x y : List Char) (h : ∀ c ∈ x, c ≠ sep) :
    splitFirst sep (x ++ sep :: y) = some (x, y) := by
  have h' : ∀ a ∈ x, (a != sep) = true := by intro a ha; simpa using h a ha
  simp [splitFirst, List.dropWhile_append_of_pos h', List.takeWhile_append_of_pos h']

theorem joinWith_ne_nil (sep : Char) (parts : List (List Char)) (hne : parts ≠ []) (h : ∀ p ∈ parts, p ≠ []) :
    joinWith sep parts ≠ [] := by
  match parts, hne with
  | [x], _ => simpa [joinWith] using h x (by simp)
  | x :: _ :: _, _ => simp [joinWith]

/-- **What URLSearchParams writes, a server reads back.** -/
theorem form_roundtrip (ps : List (String × String)) : formDecode (formEncode ps) = some ps := by
  let part := fun (kv : String × String) => formText kv.1 ++ '=' :: formText kv.2
  have hpart : ∀ kv, splitFirst '=' (part kv) = some (formText kv.1, formText kv.2) := fun kv =>
    splitFirst_sep _ _ _ (fun c hc => (good_ne (formText_good _ c hc)).2.1)
  match ps with
  | [] => simp [formDecode, formEncode, joinWith]
  | kv :: rest =>
    have hne : (kv :: rest).map part ≠ [] := by simp
    have hsplit := splitOn_joinWith '&' ((kv :: rest).map part) hne (by
      intro p hp c hc
      simp only [List.mem_map] at hp
      obtain ⟨⟨k, v⟩, _, rfl⟩ := hp
      simp only [part, List.mem_append, List.mem_cons] at hc
      rcases hc with hc | rfl | hc
      · exact (good_ne (formText_good _ c hc)).1
      · decide
      · exact (good_ne (formText_good _ c hc)).1)
    have hnil : joinWith '&' ((kv :: rest).map part) ≠ [] := joinWith_ne_nil _ _ hne (by
      intro p hp; simp only [List.mem_map] at hp; obtain ⟨_, _, rfl⟩ := hp; simp [part])
    have henc : formEncode (kv :: rest) = String.ofList (joinWith '&' ((kv :: rest).map part)) := rfl
    rw [formDecode, henc]
    have : (String.ofList (joinWith '&' ((kv :: rest).map part))).isEmpty = false := by
      simpa [String.isEmpty_iff, String.ext_iff] using hnil
    rw [this]
    simp only [Bool.false_eq_true, ite_false, String.toList_ofList, hsplit]
    generalize kv :: rest = l
    induction l with
    | nil => rfl
    | cons x xs ih =>
      rw [List.map_cons, List.mapM_cons, hpart, ih]
      simp [formText?_formText]

/-- Form text needs no escaping in a query. -/
theorem formEncode_good (ps : List (String × String)) : ∀ c ∈ (formEncode ps).toList, queryUnsafe c = false := by
  have joinGood : ∀ (parts : List (List Char)), (∀ p ∈ parts, ∀ c ∈ p, good c = true ∨ c = '=') →
      ∀ c ∈ joinWith '&' parts, queryUnsafe c = false := by
    intro parts h c hc
    induction parts with
    | nil => simp [joinWith] at hc
    | cons x xs ih =>
      have hx := h x (List.mem_cons_self ..)
      have hq : ∀ c ∈ x, queryUnsafe c = false := by
        intro c hc'
        rcases hx c hc' with hg | rfl
        · have := good_ne hg; simp [queryUnsafe, this.2.2.2, this.2.2.1]
        · decide
      match xs, ih with
      | [], _ => exact hq c (by simpa [joinWith] using hc)
      | y :: ys, ih =>
        simp only [joinWith, List.mem_append, List.mem_cons] at hc
        rcases hc with hc | rfl | hc
        · exact hq c hc
        · decide
        · exact ih (fun p hp => h p (List.mem_cons_of_mem _ hp)) (by simpa [joinWith] using hc)
  intro c hc
  simp only [formEncode, String.toList_ofList] at hc
  refine joinGood _ ?_ c hc
  intro p hp c hc
  simp only [List.mem_map] at hp
  obtain ⟨⟨k, v⟩, _, rfl⟩ := hp
  simp only [List.mem_append, List.mem_cons] at hc
  rcases hc with hc | rfl | hc
  · exact Or.inl (formText_good _ c hc)
  · exact Or.inr rfl
  · exact Or.inl (formText_good _ c hc)

/-- **API Gateway REST's query values arrive with the same values.** -/
theorem rest_query (e : RestEvent) (h : e.alb = false) :
    formDecode ((queryOf (restRequest e).target).getD "") = some (pairsOf e.query e.multiQuery) := by
  simp only [restRequest, restQuery, h, Bool.false_eq_true, ite_false, target_query]
  split
  · rename_i he
    match hp : pairsOf e.query e.multiQuery with
    | [] => simp [formDecode]
    | kv :: rest =>
      exfalso
      rw [hp] at he
      have := form_roundtrip (kv :: rest)
      simp [formDecode, he] at this
  · simp only [Option.getD_some]
    rw [escape_id _ (formEncode_good _), String.ofList_toList, form_roundtrip]

/-- **An ALB's query arrives as the client sent it**, when a request target can carry it. -/
theorem alb_query (e : RestEvent) (h : e.alb = true)
    (hq : ∀ c ∈ (rawQuery e.query e.multiQuery).toList, queryUnsafe c = false) :
    queryOf (restRequest e).target =
      if (rawQuery e.query e.multiQuery).isEmpty then none else some (rawQuery e.query e.multiQuery) := by
  simp only [restRequest, restQuery, h, ite_true, target_query]
  rw [escape_id _ hq, String.ofList_toList]

/-! ## The v2 cookies, once -/

theorem commas_pending (p : List Char) (hp : p ≠ []) (l : List Char) : commas p false l ≠ [] := by
  induction l generalizing p with
  | nil => simpa [commas] using hp
  | cons c r ih =>
    simp only [commas, Bool.false_and, Bool.false_eq_true, ite_false]
    split
    · exact ih _ (by simp)
    · split
      · simp
      · simp

theorem commas_ne_nil (l : List Char) (hl : l ≠ []) : commas [] false l ≠ [] := by
  match l, hl with
  | c :: r, _ =>
    simp only [commas, Bool.false_and, Bool.false_eq_true, ite_false]
    split
    · exact commas_pending _ (by simp) _
    · split
      · simp
      · simp

theorem cookieText_ne_empty (s : String) (h : s ≠ "") : cookieText s ≠ "" := by
  intro he
  have := congrArg String.toList he
  simp only [cookieText, String.toList_ofList] at this
  exact commas_ne_nil s.toList (by simpa [String.toList_eq_nil_iff] using h) (by simpa using this)

theorem keep_append_cookie (has : Bool) (l : Headers) (v : String) :
    keep has (l ++ [("cookie", v)]) = keep has l ++ [("cookie", v)] := by
  induction l generalizing has with
  | nil =>
    have h1 : (hopByHop (lower "cookie") || lower "cookie" == "content-length") = false := by decide
    have h2 : isHost "cookie" = false := by decide
    simp only [List.nil_append, keep, h1, h2, Bool.false_eq_true, ite_false]
  | cons x r ih =>
    obtain ⟨n, w⟩ := x
    simp only [List.cons_append, keep]
    split
    · exact ih _
    · split
      · split
        · exact ih _
        · simp [ih]
      · simp [ih]

theorem place_append (j : String) (l : Headers) (hl : ∀ x ∈ l, isCookie x.1 = false) (hj : j ≠ "") :
    place j (l ++ [("cookie", v)]) = l ++ [("cookie", j)] := by
  induction l with
  | nil =>
    have : isCookie "cookie" = true := by decide
    simp [place, this, hj]
  | cons x r ih =>
    obtain ⟨n, w⟩ := x
    have hn : isCookie n = false := hl _ (List.mem_cons_self ..)
    simp [place, hn, ih (fun y hy => hl y (List.mem_cons_of_mem _ hy))]

/-- **A payload 2.0 event's cookies arrive once.** -/
theorem v2_cookies (e : V2Event) (d : String) (hs : e.cookies.filter (!·.isEmpty) ≠ []) :
    ((outgoing (v2Request e).headers d).filter (isCookie ·.1)).map (·.2) =
      [cookieText (String.intercalate "; " (e.cookies.filter (!·.isEmpty)))] := by
  let J := String.intercalate "; " (e.cookies.filter (!·.isEmpty))
  have hJ : J ≠ "" := intercalate_ne_empty _ _ hs (by intro x hx; simpa using (List.mem_filter.1 hx).2)
  have hT := cookieText_ne_empty J hJ
  have hH : (v2Request e).headers = e.headers.filter (!isCookie ·.1) ++ [("cookie", J)] := by
    simp only [v2Request, v2Headers]
    have : (e.cookies.filter (!·.isEmpty)).isEmpty = false := by simpa using hs
    simp [this, J]
  have hpre : ∀ x ∈ e.headers.filter (!isCookie ·.1), isCookie x.1 = false := by
    intro x hx; simpa using (List.mem_filter.1 hx).2
  have hjoined : joinedCookie (e.headers.filter (!isCookie ·.1) ++ [("cookie", J)]) = cookieText J := by
    have hc : isCookie "cookie" = true := by decide
    simp only [joinedCookie, List.filter_append, List.filter_filter]
    have : (e.headers.filter fun a => isCookie a.1 && !isCookie a.1) = [] := by simp
    rw [this]
    have hT' : (cookieText J).isEmpty = false := by simpa [String.isEmpty_iff] using hT
    simp [hc, hT']
  have hjc : joinCookies (v2Request e).headers = e.headers.filter (!isCookie ·.1) ++ [("cookie", cookieText J)] := by
    rw [hH, joinCookies, hjoined, place_append _ _ hpre hT]
  simp only [outgoing, hjc, keep_append_cookie]
  have hc : isCookie "cookie" = true := by decide
  have hhost : isCookie "host" = false := by decide
  split
  · rw [List.filter_append, keep_cookies, List.filter_filter]
    simp [hc, List.filter_eq_nil_iff, J]
  · rw [List.filter_append, List.filter_append, keep_cookies, List.filter_filter]
    simp [hc, hhost, List.filter_eq_nil_iff, J]

/-- **The other fields go through**, in order: all but Cookie, Host, the hop-by-hop fields and Content-Length. -/
theorem keep_others (has : Bool) (l : Headers) :
    (keep has l).filter (fun x => !isCookie x.1 && !isHost x.1) =
      l.filter (fun x => !isCookie x.1 && !isHost x.1 && !hopByHop (lower x.1) && lower x.1 != "content-length") := by
  induction l generalizing has with
  | nil => rfl
  | cons x r ih =>
    obtain ⟨n, v⟩ := x
    simp only [keep]
    split
    · rename_i h
      rw [ih]
      simp only [Bool.or_eq_true, beq_iff_eq] at h
      rcases h with h | h <;> simp [h]
    · rename_i h
      simp only [Bool.or_eq_true, beq_iff_eq, not_or] at h
      have h1 : hopByHop (lower n) = false := by simpa using h.1
      split
      · rename_i hh
        split
        · rw [ih]; simp [hh]
        · simp [hh, ih]
      · rename_i hh
        have hh' : isHost n = false := by simpa using hh
        simp [List.filter_cons, hh', h1, h.2, ih]

theorem other_fields (hs : Headers) (d : String) :
    (outgoing hs d).filter (fun x => !isCookie x.1 && !isHost x.1) =
      hs.filter (fun x => !isCookie x.1 && !isHost x.1 && !hopByHop (lower x.1) && lower x.1 != "content-length") := by
  have hj : (outgoing hs d).filter (fun x => !isCookie x.1 && !isHost x.1) =
      (keep false (joinCookies hs)).filter (fun x => !isCookie x.1 && !isHost x.1) := by
    simp only [outgoing]
    split
    · rfl
    · rw [List.filter_append]
      have : isHost "host" = true := by decide
      simp [this]
  rw [hj, keep_others]
  have h2 := place_others (joinedCookie hs) hs
  have : ∀ l : Headers, l.filter (fun x => !isCookie x.1 && !isHost x.1 && !hopByHop (lower x.1) && lower x.1 != "content-length") =
      (l.filter (!isCookie ·.1)).filter (fun x => !isHost x.1 && !hopByHop (lower x.1) && lower x.1 != "content-length") := by
    intro l
    rw [List.filter_filter]
    apply List.filter_congr
    intro x _
    cases isCookie x.1 <;> simp [Bool.and_assoc]
  rw [this, this hs, joinCookies, h2]

/-! ## Responses -/

theorem fromUTF8?_some {b : ByteArray} {s : String} (h : String.fromUTF8? b = some s) : s.toUTF8 = b := by
  unfold String.fromUTF8? at h
  split at h <;> simp_all [String.fromUTF8]
  cases h; rfl

theorem body_bytes (hs : Headers) (b : ByteArray) : (body hs b).bytes = b := by
  simp only [body]
  split
  · split
    · rename_i h; exact fromUTF8?_some h
    · rfl
  · rfl

theorem body_text_iff (hs : Headers) (b : ByteArray) :
    (∃ s, body hs b = .text s) ↔ textualType hs = true ∧ (String.fromUTF8? b).isSome = true := by
  simp only [body]
  split
  · rename_i ht
    split
    · rename_i s h; simp [ht, h]
    · rename_i h; simp [h]
  · rename_i ht; simp [ht]

theorem mem_names (n : String) (hs : Headers) : n ∈ names hs ↔ values n hs ≠ [] := by
  induction hs with
  | nil => simp [names, values]
  | cons x r ih =>
    obtain ⟨m, v⟩ := x
    by_cases h : m = n
    · subst h; simp [names, values]
    · have : (m == n) = false := by simpa using h
      simp only [names, List.mem_cons, List.mem_filter, bne_iff_ne, ne_eq, values, List.filter_cons, this,
        Bool.false_eq_true, ite_false] at ih ⊢
      rw [← ih]
      constructor
      · rintro (rfl | ⟨h1, _⟩)
        · exact absurd rfl h
        · exact h1
      · intro h1; exact Or.inr ⟨h1, fun h2 => h h2.symm⟩

theorem lookup_map {α} (n : String) (L : List String) (f : String → α) :
    lookup n (L.map fun m => (m, f m)) = if n ∈ L then some (f n) else none := by
  induction L with
  | nil => rfl
  | cons m r ih =>
    simp only [lookup, List.map_cons, List.find?_cons] at ih ⊢
    by_cases h : m = n
    · subst h; simp
    · have : (m == n) = false := by simpa using h
      simp only [this, ih, List.mem_cons]
      by_cases hn : n ∈ r <;> simp [hn, Ne.symm h]

theorem group_lookup (n : String) (hs : Headers) :
    lookup n (group hs) = if values n hs = [] then none else some (values n hs) := by
  rw [group, lookup_map]
  by_cases h : values n hs = [] <;> simp [h, mem_names]

theorem values_filter (n : String) (p : String → Bool) (hs : Headers) :
    values n (hs.filter (p ·.1)) = if p n then values n hs else [] := by
  induction hs with
  | nil => simp [values]
  | cons x r ih =>
    obtain ⟨m, v⟩ := x
    simp only [values] at ih ⊢
    by_cases h : m = n
    · subst h; by_cases hp : p m <;> simp_all
    · have : (m == n) = false := by simpa using h
      by_cases hp : p m <;> simp_all

/-- Every header of the reply is in a REST or multi-value ALB response, its values in order. -/
theorem rest_headers (e : RestEvent) (r : Reply) (h : e.alb = false ∨ e.multiHeaders.isSome = true) :
    ∃ m, (restResponse e r).multiValueHeaders = some m ∧
      ∀ n, lookup n m = if values n r.headers = [] then none else some (values n r.headers) := by
  refine ⟨group r.headers, ?_, fun n => group_lookup n r.headers⟩
  have : (!e.alb || e.multiHeaders.isSome) = true := by rcases h with h | h <;> simp [h]
  simp [restResponse, this]

theorem v2_headers (r : Reply) (n : String) :
    lookup n (v2Response r).headers =
      if n = "set-cookie" ∨ values n r.headers = [] then none else some (String.intercalate ", " (values n r.headers)) := by
  simp only [v2Response]
  rw [lookup_map (f := fun n => String.intercalate ", " (values n r.headers))]
  simp only [List.mem_filter, mem_names, bne_iff_ne, ne_eq]
  by_cases h1 : n = "set-cookie" <;> by_cases h2 : values n r.headers = [] <;> simp [h1, h2]

theorem cloudFront_headers (r : Reply) (n : String) :
    lookup n (cloudFrontResponse r).headers =
      if cloudFrontRefused n = true ∨ values n r.headers = [] then none else some (values n r.headers) := by
  simp only [cloudFrontResponse]
  rw [group_lookup, values_filter (p := fun n => !cloudFrontRefused n)]
  by_cases h1 : cloudFrontRefused n = true <;> by_cases h2 : values n r.headers = [] <;> simp [h1, h2]

/-! ## Azure Functions -/

theorem azure_go (parsed : List (Option Cookie)) (v i : Nat) (hs : Headers) :
    ∀ c ∈ (azureReply.go parsed v i hs).2, ∃ j c', j ≠ v ∧ parsed[j]? = some (some c') ∧ c = { c' with dropped := [] } := by
  induction hs generalizing i with
  | nil => simp [azureReply.go]
  | cons x r ih =>
    obtain ⟨n, y⟩ := x
    intro c hc
    simp only [azureReply.go] at hc
    split at hc
    · exact ih i c hc
    · split at hc
      · exact ih (i + 1) c hc
      · rename_i hiv
        split at hc
        · rename_i cookie hp
          simp only [List.mem_cons] at hc
          rcases hc with rfl | hc
          · refine ⟨i, cookie, by simpa using hiv, ?_, rfl⟩
            cases h : parsed[i]? with
            | none => simp [h] at hp
            | some o => simp [h] at hp; simp [hp]
          · exact ih (i + 1) c hc
        · exact ih (i + 1) c hc

/-- **Every cookie object Azure gets arrives unchanged**, when at most one Set-Cookie of the reply
would change in `cookies`: that one stays a header. -/
theorem azure_exact (vd : String → Bool) (r : Reply)
    (h : ∀ i j (hi : i < ((values "set-cookie" r.headers).map (parseSetCookie vd)).length)
      (hj : j < ((values "set-cookie" r.headers).map (parseSetCookie vd)).length),
      exact ((values "set-cookie" r.headers).map (parseSetCookie vd))[i] = false →
      exact ((values "set-cookie" r.headers).map (parseSetCookie vd))[j] = false → i = j) :
    ∀ c ∈ (azureReply vd r).2, ∃ c', exact (some c') = true ∧ c = { c' with dropped := [] } := by
  intro c hc
  obtain ⟨j, c', hjv, hpj, rfl⟩ := azure_go _ _ _ _ c hc
  refine ⟨c', ?_, rfl⟩
  generalize hP : (values "set-cookie" r.headers).map (parseSetCookie vd) = P at h hjv hpj
  have hjl : j < P.length := by
    rcases Nat.lt_or_ge j P.length with hl | hl
    · exact hl
    · simp [List.getElem?_eq_none hl] at hpj
  have hPj : P[j] = some c' := by simpa [List.getElem?_eq_getElem hjl] using hpj
  cases hex : exact (some c')
  · exfalso
    apply hjv
    simp only [verbatim]
    split
    · omega
    · have hj' : (!exact P[j]) = true := by simp [hPj, hex]
      cases hk : P.findIdx? (!exact ·) with
      | none =>
        rw [List.findIdx?_eq_none_iff] at hk
        have := hk P[j] (List.getElem_mem hjl)
        simp [hPj, hex] at this
      | some k =>
        obtain ⟨hkl, hkp, _⟩ := List.findIdx?_eq_some_iff_getElem.1 hk
        simp only [Option.getD_some]
        exact h j k hjl hkl (by simp [hPj, hex]) (by simpa using hkp)
  · rfl

end Lasm.Serverless.Proofs.Mapping
