/-
Proofs about writing HTML: the fast writer writes what `Html.chars` says;
escaped text has no markup; and the tokenizer of Proofs/Tokens.lean reads a
tree without raw HTML back as exactly the tree's tokens, which nest.
-/
import Proofs.Tokens

namespace Folio.Proofs
open Folio

/-! ## Escaping -/

theorem escapeList_append (a b : List Char) : escapeList (a ++ b) = escapeList a ++ escapeList b := by
  induction a with
  | nil => rfl
  | cons c cs ih => simp [escapeList, ih]

theorem escapeChar_plain (c : Char) (h1 : c ≠ '&') (h2 : c ≠ '<') (h3 : c ≠ '>') (h4 : c ≠ '"') :
    escapeChar c = [c] := by
  unfold escapeChar; split <;> simp_all

/-- Escaped text contains no `<`, `>` or `"`. -/
theorem escapeList_no_markup (l : List Char) : '<' ∉ escapeList l ∧ '>' ∉ escapeList l ∧ '"' ∉ escapeList l := by
  induction l with
  | nil => simp [escapeList]
  | cons c cs ih =>
    simp only [escapeList, List.mem_append, not_or]
    refine ⟨⟨?_, ih.1⟩, ⟨?_, ih.2.1⟩, ⟨?_, ih.2.2⟩⟩ <;>
    (by_cases h1 : c = '&'; · subst h1; decide
     by_cases h2 : c = '<'; · subst h2; decide
     by_cases h3 : c = '>'; · subst h3; decide
     by_cases h4 : c = '"'; · subst h4; decide
     rw [escapeChar_plain c h1 h2 h3 h4]; simp only [List.mem_singleton]; intro e; subst e; simp_all)

/-! ## The writer writes `Html.chars` -/

theorem writeEscaped_toList (acc s : String) :
    (writeEscaped acc s).toList = acc.toList ++ escapeList s.toList := by
  unfold writeEscaped
  rw [String.foldl_eq_foldl_toList]
  generalize s.toList = l
  induction l generalizing acc with
  | nil => simp [escapeList]
  | cons c cs ih =>
    simp only [List.foldl, escapeList]
    rw [ih]
    by_cases h1 : c = '&'; · subst h1; simp [String.toList_append, escapeChar]
    by_cases h2 : c = '<'; · subst h2; simp [String.toList_append, escapeChar]
    by_cases h3 : c = '>'; · subst h3; simp [String.toList_append, escapeChar]
    by_cases h4 : c = '"'; · subst h4; simp [String.toList_append, escapeChar]
    rw [escapeChar_plain c h1 h2 h3 h4]
    split <;> simp_all [String.toList_push]

theorem writeAttrs_toList (acc : String) (as : List (Attr × String)) :
    (writeAttrs acc as).toList = acc.toList ++ attrChars as := by
  induction as generalizing acc with
  | nil => simp [writeAttrs, attrChars]
  | cons p as ih =>
    obtain ⟨a, v⟩ := p
    simp [writeAttrs, attrChars, ih, writeEscaped_toList, String.toList_push, String.toList_append]

mutual
theorem write_toList (acc : String) : (h : Html) → (Html.write acc h).toList = acc.toList ++ h.chars
  | .text s => by simp [Html.write, Html.chars, writeEscaped_toList]
  | .raw s => by simp [Html.write, Html.chars, String.toList_append]
  | .elem t as cs => by
    simp [Html.write, Html.chars, writeList_toList, writeAttrs_toList, String.toList_push, String.toList_append]
  | .void t as => by
    simp [Html.write, Html.chars, writeAttrs_toList, String.toList_push, String.toList_append]

theorem writeList_toList (acc : String) : (hs : List Html) → (Html.writeList acc hs).toList = acc.toList ++ Html.charsList hs
  | [] => by simp [Html.writeList, Html.charsList]
  | h :: hs => by simp [Html.writeList, Html.charsList, writeList_toList, write_toList]
end

/-- `Html.serialize` writes `Html.charsList`. -/
theorem serialize_toList (hs : List Html) : (Html.serialize hs).toList = Html.charsList hs := by
  simp [Html.serialize, writeList_toList]

/-! ## Names -/

theorem tag_name_ne (t : Tag) : ∃ c cs, t.name.toList = c :: cs := by
  cases t <;> exact ⟨_, _, rfl⟩

theorem tag_name_chars (t : Tag) : ∀ c ∈ t.name.toList, isNameChar c = true := by
  cases t <;> decide

theorem tagOf_name (t : Tag) : tagOf t.name.toList = some t := by
  cases t <;> rfl

theorem attr_name_ne (a : Attr) : ∃ c cs, a.name.toList = c :: cs := by
  cases a <;> exact ⟨_, _, rfl⟩

theorem attr_name_chars (a : Attr) : ∀ c ∈ a.name.toList, isNameChar c = true := by
  cases a <;> decide

theorem attrOf_name (a : Attr) : attrOf a.name.toList = some a := by
  cases a <;> rfl

theorem notName_lt : isNameChar '<' = false := by decide
theorem notName_gt : isNameChar '>' = false := by decide
theorem notName_sp : isNameChar ' ' = false := by decide
theorem notName_eq : isNameChar '=' = false := by decide
theorem notName_slash : isNameChar '/' = false := by decide

theorem openName_name (buf n r : List Char) (h : ∀ c ∈ n, isNameChar c = true) :
    lexOpenName buf (n ++ r) = lexOpenName (n.reverse ++ buf) r := by
  induction n generalizing buf with
  | nil => rfl
  | cons c cs ih =>
    simp only [List.cons_append, List.reverse_cons, List.append_assoc]
    rw [lexOpenName, ite_eq_left (h c (by simp))]
    exact ih _ (fun d hd => h d (by simp [hd]))

theorem closeName_name (buf n r : List Char) (h : ∀ c ∈ n, isNameChar c = true) :
    lexCloseName buf (n ++ r) = lexCloseName (n.reverse ++ buf) r := by
  induction n generalizing buf with
  | nil => rfl
  | cons c cs ih =>
    simp only [List.cons_append, List.reverse_cons, List.append_assoc]
    have hc := h c (by simp)
    rw [lexCloseName, ite_eq_right (by intro e; subst e; simp [isNameChar] at hc), ite_eq_left hc]
    exact ih _ (fun d hd => h d (by simp [hd]))

theorem attrName_name (t : Tag) (as : List (Attr × String)) (buf n r : List Char) (h : ∀ c ∈ n, isNameChar c = true) :
    lexAttrName t as buf (n ++ r) = lexAttrName t as (n.reverse ++ buf) r := by
  induction n generalizing buf with
  | nil => rfl
  | cons c cs ih =>
    simp only [List.cons_append, List.reverse_cons, List.append_assoc]
    rw [lexAttrName, ite_eq_left (h c (by simp))]
    exact ih _ (fun d hd => h d (by simp [hd]))

/-! ## Reading escaped text back -/

theorem lexText_escape (l rest : List Char) :
    lexText (escapeList l ++ rest) = (lexText rest).map (l.map Tok.char ++ ·) := by
  induction l with
  | nil => simp [escapeList]
  | cons c cs ih =>
    simp only [escapeList, List.append_assoc, List.map_cons]
    by_cases h1 : c = '&'
    · subst h1; simp [escapeChar, lexText, lexRef, cons, ih, Option.map_map, Function.comp_def]
    by_cases h2 : c = '<'
    · subst h2; simp [escapeChar, lexText, lexRef, cons, ih, Option.map_map, Function.comp_def]
    by_cases h3 : c = '>'
    · subst h3; simp [escapeChar, lexText, lexRef, cons, ih, Option.map_map, Function.comp_def]
    by_cases h4 : c = '"'
    · subst h4; simp [escapeChar, lexText, lexRef, cons, ih, Option.map_map, Function.comp_def]
    rw [escapeChar_plain c h1 h2 h3 h4]
    simp [lexText, h1, h2, h3, h4, cons, ih, Option.map_map, Function.comp_def]

theorem lexValue_escape (t : Tag) (as : List (Attr × String)) (a : Attr) (v l rest : List Char) :
    lexValue t as a v (escapeList l ++ '"' :: rest) = lexAfterValue t ((a, String.ofList (v.reverse ++ l)) :: as) rest := by
  induction l generalizing v with
  | nil => simp [escapeList, lexValue]
  | cons c cs ih =>
    simp only [escapeList, List.append_assoc]
    by_cases h1 : c = '&'
    · subst h1; simp [escapeChar, lexValue, lexValueRef, ih]
    by_cases h2 : c = '<'
    · subst h2; simp [escapeChar, lexValue, lexValueRef, ih]
    by_cases h3 : c = '>'
    · subst h3; simp [escapeChar, lexValue, lexValueRef, ih]
    by_cases h4 : c = '"'
    · subst h4; simp [escapeChar, lexValue, lexValueRef, ih]
    rw [escapeChar_plain c h1 h2 h3 h4]
    simp [lexValue, h1, h2, h3, h4, ih]

/-! ## Reading tags back -/

theorem afterValue_attrs (t : Tag) (acc : List (Attr × String)) (as : List (Attr × String)) (X : List Char) :
    lexAfterValue t acc (attrChars as ++ '>' :: X) = cons (.open t (acc.reverse ++ as)) (lexText X) ∧
    lexAfterValue t acc (attrChars as ++ ' ' :: '/' :: '>' :: X) = cons (.void t (acc.reverse ++ as)) (lexText X) := by
  induction as generalizing acc with
  | nil => simp [attrChars, lexAfterValue, lexAfterSpace, lexSlash]
  | cons p as ih =>
    obtain ⟨a, v⟩ := p
    obtain ⟨a0, an, hn⟩ := attr_name_ne a
    have hc := attr_name_chars a
    rw [hn] at hc
    have ha0 : isNameChar a0 = true := hc a0 (by simp)
    have ha0s : a0 ≠ '/' := by intro e; subst e; simp [isNameChar] at ha0
    have key : ∀ Y, lexAfterValue t acc (attrChars ((a, v) :: as) ++ Y) =
        lexAfterValue t ((a, v) :: acc) (attrChars as ++ Y) := by
      intro Y
      simp only [attrChars, hn, List.cons_append, List.append_assoc]
      rw [lexAfterValue, ite_eq_right (by decide), ite_eq_left rfl, lexAfterSpace, ite_eq_right ha0s, ite_eq_left ha0]
      rw [attrName_name _ _ _ an _ (fun c hc' => hc c (by simp [hc']))]
      rw [lexAttrName, ite_eq_right (by simp [isNameChar]), ite_eq_left rfl]
      have : (an.reverse ++ [a0]).reverse = a.name.toList := by simp [hn]
      rw [this, attrOf_name]
      dsimp only
      rw [lexQuote, ite_eq_left rfl, lexValue_escape]
      simp [String.ofList_toList]
    constructor
    · rw [key, (ih _).1]; simp
    · rw [key, (ih _).2]; simp

theorem openName_attrs (t : Tag) (as : List (Attr × String)) (X : List Char) :
    lexOpenName t.name.toList.reverse (attrChars as ++ '>' :: X) = cons (.open t as) (lexText X) ∧
    lexOpenName t.name.toList.reverse (attrChars as ++ ' ' :: '/' :: '>' :: X) = cons (.void t as) (lexText X) := by
  cases as with
  | nil =>
    simp [attrChars, lexOpenName, notName_gt, notName_sp, tagOf_name, lexAfterSpace, lexSlash]
  | cons p as =>
    obtain ⟨a, v⟩ := p
    have e : ∀ Y, lexOpenName t.name.toList.reverse (' ' :: Y) = lexAfterValue t [] (' ' :: Y) := by
      intro Y
      rw [lexOpenName, ite_eq_right (by decide), List.reverse_reverse, tagOf_name]
      dsimp only
      rw [ite_eq_right (by decide), ite_eq_left rfl, lexAfterValue, ite_eq_right (by decide), ite_eq_left rfl]
    have h := afterValue_attrs t [] ((a, v) :: as) X
    simp only [attrChars, List.cons_append] at h ⊢
    rw [e, e]
    simpa using h

/-! ## The round trip -/

theorem lexText_open (t : Tag) (Y : List Char) :
    lexText ('<' :: (t.name.toList ++ Y)) = lexOpenName t.name.toList.reverse Y := by
  obtain ⟨c, cs, hn⟩ := tag_name_ne t
  have hc := tag_name_chars t
  rw [hn] at hc ⊢
  have h0 : isNameChar c = true := hc c (by simp)
  have hs : c ≠ '/' := by intro e; subst e; simp [isNameChar] at h0
  simp only [List.cons_append]
  rw [lexText, ite_eq_left rfl, lexTag, ite_eq_right hs, ite_eq_left h0, openName_name _ _ _ (fun d hd => hc d (by simp [hd]))]
  simp

theorem lexText_close (t : Tag) (rest : List Char) :
    lexText ('<' :: '/' :: (t.name.toList ++ '>' :: rest)) = cons (.close t) (lexText rest) := by
  rw [lexText, ite_eq_left rfl, lexTag, ite_eq_left rfl, closeName_name _ _ _ (tag_name_chars t)]
  rw [lexCloseName, ite_eq_left rfl]
  simp [tagOf_name]

mutual
theorem lex_chars : (h : Html) → h.NoRaw → ∀ rest, lexText (h.chars ++ rest) = (lexText rest).map (h.tokens ++ ·)
  | .text s, _, rest => by simp [Html.chars, Html.tokens, lexText_escape]
  | .raw _, hr, _ => absurd hr (by simp [Html.NoRaw])
  | .elem t as cs, hr, rest => by
    simp only [Html.chars, Html.tokens, List.cons_append, List.append_assoc]
    rw [lexText_open, (openName_attrs t as _).1, lex_charsList cs hr, lexText_close]
    simp [cons, Option.map_map, Function.comp_def]
  | .void t as, _, rest => by
    simp only [Html.chars, Html.tokens, List.cons_append, List.append_assoc]
    rw [lexText_open]
    simpa [cons] using (openName_attrs t as rest).2

theorem lex_charsList : (hs : List Html) → Html.NoRawList hs → ∀ rest,
    lexText (Html.charsList hs ++ rest) = (lexText rest).map (Html.tokensList hs ++ ·)
  | [], _, rest => by simp [Html.charsList, Html.tokensList]
  | h :: hs, ⟨h1, h2⟩, rest => by
    simp only [Html.charsList, Html.tokensList, List.append_assoc]
    rw [lex_chars h h1, lex_charsList hs h2]
    simp [Option.map_map, Function.comp_def]
end

/-- A tree without raw HTML, written out, reads back as its tokens. -/
theorem tokenize_serialize (hs : List Html) (h : Html.NoRawList hs) :
    tokenize (Html.serialize hs) = some (Html.tokensList hs) := by
  have := lex_charsList hs h []
  simp [tokenize, serialize_toList, lexText] at this ⊢
  simpa using this

/-! ## Nesting -/

mutual
theorem nests_tokens : (h : Html) → ∀ rest stack, nests (h.tokens ++ rest) stack = nests rest stack
  | .text s, rest, stack => by
    simp only [Html.tokens]
    generalize s.toList = l
    induction l with
    | nil => rfl
    | cons c cs ih => simp [nests, ih]
  | .raw s, rest, stack => by
    simp only [Html.tokens]
    generalize s.toList = l
    induction l with
    | nil => rfl
    | cons c cs ih => simp [nests, ih]
  | .elem t as cs, rest, stack => by
    simp [Html.tokens, nests, nests_tokensList]
  | .void t as, rest, stack => by simp [Html.tokens, nests]

theorem nests_tokensList : (hs : List Html) → ∀ rest stack, nests (Html.tokensList hs ++ rest) stack = nests rest stack
  | [], rest, stack => by simp [Html.tokensList]
  | h :: hs, rest, stack => by simp [Html.tokensList, nests_tokens, nests_tokensList]
end

theorem tokens_nest (hs : List Html) : nests (Html.tokensList hs) [] = true := by
  have := nests_tokensList hs [] []
  simpa [nests] using this

end Folio.Proofs
