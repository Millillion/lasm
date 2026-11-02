/-
Proofs about the renderer's HTML tree (Folio/Render.lean): without raw HTML
enabled it holds no raw HTML; without `anyUrl` every link and image URL is
allowed; and it follows HTML's content model (Proofs/Tree.lean).
-/
import Proofs.Tree

namespace Folio.Proofs
open Folio

/-! ## Lists of nodes -/

theorem NoRawList_append : ∀ (a b : List Html), Html.NoRawList (a ++ b) ↔ Html.NoRawList a ∧ Html.NoRawList b
  | [], b => by simp [Html.NoRawList]
  | h :: t, b => by simp [Html.NoRawList, NoRawList_append t b, and_assoc]

theorem SafeUrlsList_append : ∀ (a b : List Html), Html.SafeUrlsList (a ++ b) ↔ Html.SafeUrlsList a ∧ Html.SafeUrlsList b
  | [], b => by simp [Html.SafeUrlsList]
  | h :: t, b => by simp [Html.SafeUrlsList, SafeUrlsList_append t b, and_assoc]

theorem PhrasingList_append : ∀ (a b : List Html), Html.PhrasingList (a ++ b) ↔ Html.PhrasingList a ∧ Html.PhrasingList b
  | [], b => by simp [Html.PhrasingList]
  | h :: t, b => by simp [Html.PhrasingList, PhrasingList_append t b, and_assoc]

theorem FlowList_append : ∀ (a b : List Html), Html.FlowList (a ++ b) ↔ Html.FlowList a ∧ Html.FlowList b
  | [], b => by simp [Html.FlowList]
  | h :: t, b => by simp [Html.FlowList, FlowList_append t b, and_assoc]

theorem ItemList_append : ∀ (a b : List Html), Html.ItemList a → Html.ItemList b → Html.ItemList (a ++ b)
  | [], _, _, hb => hb
  | .text _ :: t, b, ⟨h1, h2⟩, hb => ⟨h1, ItemList_append t b h2 hb⟩
  | .elem _ _ _ :: t, b, ⟨h1, h2, h3⟩, hb => ⟨h1, h2, ItemList_append t b h3 hb⟩
  | .raw _ :: _, _, ha, _ => ha.elim
  | .void _ _ :: _, _, ha, _ => ha.elim

mutual
theorem phrasing_flow : (h : Html) → Html.Phrasing h → Html.Flow h
  | .text _, _ => trivial
  | .raw _, _ => trivial
  | .elem t _ cs, ⟨h1, h2⟩ => Or.inl ⟨Or.inr (Or.inr h1), h2⟩
  | .void t _, h => by
    simp only [Html.Phrasing] at h; simp only [Html.Flow]; rcases h with h | h <;> simp [h]

theorem phrasingList_flowList : (hs : List Html) → Html.PhrasingList hs → Html.FlowList hs
  | [], _ => trivial
  | h :: hs, ⟨h1, h2⟩ => ⟨phrasing_flow h h1, phrasingList_flowList hs h2⟩
termination_by structural hs => hs
end

/-! ## What the renderer builds -/

theorem unsafeUrl_empty : unsafeUrl "" = false := by decide

/-- What holds of the nodes an inline renders to. -/
def InlineOk (o : Options) (hs : List Html) : Prop :=
  (o.rawHtml = false → Html.NoRawList hs) ∧ (o.anyUrl = false → Html.SafeUrlsList hs) ∧ Html.PhrasingList hs

/-- What holds of the nodes a block renders to. -/
def BlockOk (o : Options) (hs : List Html) : Prop :=
  (o.rawHtml = false → Html.NoRawList hs) ∧ (o.anyUrl = false → Html.SafeUrlsList hs) ∧ Html.FlowList hs

/-- What holds of the nodes a list's items render to. -/
def ItemsOk (o : Options) (hs : List Html) : Prop :=
  (o.rawHtml = false → Html.NoRawList hs) ∧ (o.anyUrl = false → Html.SafeUrlsList hs) ∧ Html.ItemList hs

theorem inlineOk_append (o : Options) (a b : List Html) (ha : InlineOk o a) (hb : InlineOk o b) : InlineOk o (a ++ b) :=
  ⟨fun h => (NoRawList_append a b).2 ⟨ha.1 h, hb.1 h⟩, fun h => (SafeUrlsList_append a b).2 ⟨ha.2.1 h, hb.2.1 h⟩,
   (PhrasingList_append a b).2 ⟨ha.2.2, hb.2.2⟩⟩

theorem blockOk_append (o : Options) (a b : List Html) (ha : BlockOk o a) (hb : BlockOk o b) : BlockOk o (a ++ b) :=
  ⟨fun h => (NoRawList_append a b).2 ⟨ha.1 h, hb.1 h⟩, fun h => (SafeUrlsList_append a b).2 ⟨ha.2.1 h, hb.2.1 h⟩,
   (FlowList_append a b).2 ⟨ha.2.2, hb.2.2⟩⟩

theorem itemsOk_append (o : Options) (a b : List Html) (ha : ItemsOk o a) (hb : ItemsOk o b) : ItemsOk o (a ++ b) :=
  ⟨fun h => (NoRawList_append a b).2 ⟨ha.1 h, hb.1 h⟩, fun h => (SafeUrlsList_append a b).2 ⟨ha.2.1 h, hb.2.1 h⟩,
   ItemList_append a b ha.2.2 hb.2.2⟩

theorem inlineOk_nil (o : Options) : InlineOk o (#[] : Array Html).toList := by
  simp [InlineOk, Html.NoRawList, Html.SafeUrlsList, Html.PhrasingList]

theorem blockOk_nil (o : Options) : BlockOk o (#[] : Array Html).toList := by
  simp [BlockOk, Html.NoRawList, Html.SafeUrlsList, Html.FlowList]

theorem itemsOk_nil (o : Options) : ItemsOk o (#[] : Array Html).toList := by
  simp [ItemsOk, Html.NoRawList, Html.SafeUrlsList, Html.ItemList]

theorem blockOk_text (o : Options) (s : String) : BlockOk o [.text s] := by
  simp [BlockOk, Html.NoRawList, Html.NoRaw, Html.SafeUrlsList, Html.SafeUrls, Html.FlowList, Html.Flow]

theorem blockOk_cr (o : Options) (nl : Bool) : BlockOk o (cr nl) := by
  unfold cr; split
  · simp [BlockOk, Html.NoRawList, Html.SafeUrlsList, Html.FlowList]
  · exact blockOk_text o _

theorem itemsOk_cr (o : Options) (nl : Bool) : ItemsOk o (cr nl) := by
  unfold cr; split
  · simp [ItemsOk, Html.NoRawList, Html.SafeUrlsList, Html.ItemList]
  · simp [ItemsOk, Html.NoRawList, Html.NoRaw, Html.SafeUrlsList, Html.SafeUrls, Html.ItemList]

theorem rawOr_ok (o : Options) (s : String) :
    (o.rawHtml = false → Html.NoRaw (rawOr o s)) ∧ Html.SafeUrls (rawOr o s) ∧ Html.Phrasing (rawOr o s) ∧
      Html.Flow (rawOr o s) := by
  unfold rawOr; split <;> simp_all [Html.NoRaw, Html.SafeUrls, Html.Phrasing, Html.Flow]

theorem safeUrl_safe (o : Options) (d : String) (h : o.anyUrl = false) : unsafeUrl (safeUrl o d) = false := by
  unfold safeUrl; split <;> simp_all [unsafeUrl_empty]

theorem image_ok (o : Options) (d t : String) (cs : List Inline) : InlineOk o [image o d t cs] := by
  unfold image
  by_cases hr : (o.rawHtml && (altParts false #[] cs).1.toList.any (·.1)) = true
  · rw [ite_eq_left hr]
    refine ⟨fun h' => ?_, fun _ => ?_, ?_⟩
    · simp_all
    · simp [Html.SafeUrlsList, Html.SafeUrls]
    · simp [Html.PhrasingList, Html.Phrasing]
  · rw [ite_eq_right hr]
    refine ⟨fun _ => ?_, fun h' => ?_, ?_⟩
    · simp [Html.NoRawList, Html.NoRaw]
    · simp only [Html.SafeUrlsList, Html.SafeUrls, and_true]
      intro p hp
      simp only [List.mem_append, List.mem_cons, List.mem_nil_iff, or_false] at hp
      rcases hp with (hp | hp) | hp
      · subst hp; intro _; exact safeUrl_safe o d h'
      · subst hp; simp [UrlAttrSafe]
      · split at hp <;> simp_all [UrlAttrSafe]
    · simp [Html.PhrasingList, Html.Phrasing]

mutual
theorem inline_ok (o : Options) (nl : Bool) : (i : Inline) → InlineOk o (inline o nl i).1
  | .text s => by simp [inline, InlineOk, Html.NoRawList, Html.NoRaw, Html.SafeUrlsList, Html.SafeUrls, Html.PhrasingList, Html.Phrasing]
  | .softbreak => by simp [inline, InlineOk, Html.NoRawList, Html.NoRaw, Html.SafeUrlsList, Html.SafeUrls, Html.PhrasingList, Html.Phrasing]
  | .linebreak => by simp [inline, InlineOk, Html.NoRawList, Html.NoRaw, Html.SafeUrlsList, Html.SafeUrls, Html.PhrasingList, Html.Phrasing]
  | .code s => by simp [inline, InlineOk, Html.NoRawList, Html.NoRaw, Html.SafeUrlsList, Html.SafeUrls, Html.PhrasingList, Html.Phrasing, Tag.isPhrasing]
  | .html s => by
    have := rawOr_ok o s
    simp only [inline, InlineOk, Html.NoRawList, Html.SafeUrlsList, Html.PhrasingList, and_true]
    exact ⟨this.1, fun _ => this.2.1, this.2.2.1⟩
  | .emph cs => by
    have ih := inlinesAux_ok o false #[] (inlineOk_nil o) cs
    simp only [inline, InlineOk, Html.NoRawList, Html.NoRaw, Html.SafeUrlsList, Html.SafeUrls, Html.PhrasingList, Html.Phrasing, Tag.isPhrasing, and_true]
    exact ⟨ih.1, fun h => ⟨by simp, ih.2.1 h⟩, by simp, ih.2.2⟩
  | .strong cs => by
    have ih := inlinesAux_ok o false #[] (inlineOk_nil o) cs
    simp only [inline, InlineOk, Html.NoRawList, Html.NoRaw, Html.SafeUrlsList, Html.SafeUrls, Html.PhrasingList, Html.Phrasing, Tag.isPhrasing, and_true]
    exact ⟨ih.1, fun h => ⟨by simp, ih.2.1 h⟩, by simp, ih.2.2⟩
  | .link d t cs => by
    have ih := inlinesAux_ok o false #[] (inlineOk_nil o) cs
    simp only [inline, InlineOk, Html.NoRawList, Html.NoRaw, Html.SafeUrlsList, Html.SafeUrls, Html.PhrasingList, Html.Phrasing, Tag.isPhrasing, and_true]
    refine ⟨ih.1, fun h => ⟨?_, ih.2.1 h⟩, by simp, ih.2.2⟩
    intro p hp
    simp only [List.mem_append] at hp
    rcases hp with hp | hp
    · split at hp
      · simp at hp
      · simp only [List.mem_singleton] at hp; subst hp; intro _; simp_all
    · split at hp <;> simp_all [UrlAttrSafe]
  | .image d t cs => by simpa [inline] using image_ok o d t cs
termination_by structural i => i

theorem inlinesAux_ok (o : Options) (nl : Bool) (acc : Array Html) (hacc : InlineOk o acc.toList) :
    (is : List Inline) → InlineOk o (inlinesAux o nl acc is).1.toList
  | [] => by simpa [inlinesAux] using hacc
  | i :: is => by
    simp only [inlinesAux]
    exact inlinesAux_ok o _ _ (by rw [Array.appendList_eq_append, Array.toList_appendList]; exact inlineOk_append o _ _ hacc (inline_ok o nl i)) is
termination_by structural is => is
end

theorem inlines_ok (o : Options) (nl : Bool) (is : List Inline) : InlineOk o (inlines o nl is).1 :=
  inlinesAux_ok o nl #[] (inlineOk_nil o) is

theorem heading_isHeading (n : Nat) : (Tag.heading n).isHeading := by
  unfold Tag.heading; split <;> simp [Tag.isHeading]

theorem codeClass_safe (info : String) : ∀ p ∈ codeClass info, UrlAttrSafe p := by
  intro p hp; unfold codeClass at hp; dsimp only at hp; split at hp <;> simp_all [UrlAttrSafe]

theorem blockOk_cons_text (o : Options) (x : Html) (s : String) (h : BlockOk o [x]) : BlockOk o [x, .text s] :=
  blockOk_append o [x] [.text s] h (blockOk_text o s)

theorem inlinesOk_blockOk (o : Options) (hs : List Html) (h : InlineOk o hs) : BlockOk o hs :=
  ⟨h.1, h.2.1, phrasingList_flowList hs h.2.2⟩

/-- An element whose children are fine and whose attributes hold no URL. -/
theorem elem_ok (o : Options) (t : Tag) (as : List (Attr × String)) (cs : List Html)
    (ha : ∀ p ∈ as, UrlAttrSafe p) (hr : o.rawHtml = false → Html.NoRawList cs)
    (hu : o.anyUrl = false → Html.SafeUrlsList cs) (hf : Html.Flow (.elem t as cs)) :
    BlockOk o [.elem t as cs] :=
  ⟨fun h => ⟨hr h, trivial⟩, fun h => ⟨⟨ha, hu h⟩, trivial⟩, ⟨hf, trivial⟩⟩

mutual
theorem block_ok (o : Options) (tight nl : Bool) : (b : Block) → BlockOk o (block o tight nl b).1
  | .para cs => by
    have ih := inlines_ok o false cs
    unfold block; split
    · exact inlinesOk_blockOk o _ (inlines_ok o nl cs)
    · refine blockOk_append o _ _ (blockOk_cr o nl) (blockOk_cons_text o _ _ ?_)
      exact elem_ok o _ _ _ (by simp) ih.1 ih.2.1 (Or.inl ⟨Or.inl rfl, ih.2.2⟩)
  | .heading n cs => by
    have ih := inlines_ok o false cs
    simp only [block]
    refine blockOk_append o _ _ (blockOk_cr o nl) (blockOk_cons_text o _ _ ?_)
    exact elem_ok o _ _ _ (by simp) ih.1 ih.2.1 (Or.inl ⟨Or.inr (Or.inl (heading_isHeading n)), ih.2.2⟩)
  | .thematic => by
    simp only [block]
    refine blockOk_append o _ _ (blockOk_cr o nl) (blockOk_cons_text o _ _ ?_)
    simp [BlockOk, Html.NoRawList, Html.NoRaw, Html.SafeUrlsList, Html.SafeUrls, Html.FlowList, Html.Flow]
  | .code info lit => by
    simp only [block]
    refine blockOk_append o _ _ (blockOk_cr o nl) (blockOk_cons_text o _ _ ?_)
    refine elem_ok o _ _ _ (by simp) (fun _ => ?_) (fun _ => ?_) (Or.inr (Or.inr (Or.inr ⟨rfl, _, _, rfl⟩)))
    · simp [Html.NoRawList, Html.NoRaw]
    · simp only [Html.SafeUrlsList, Html.SafeUrls, and_true]
      exact codeClass_safe info
  | .html lit => by
    simp only [block]
    refine blockOk_append o _ _ (blockOk_append o _ _ (blockOk_cr o nl) ?_) (blockOk_cr o _)
    have := rawOr_ok o lit
    exact ⟨fun h => ⟨this.1 h, trivial⟩, fun _ => ⟨this.2.1, trivial⟩, ⟨this.2.2.2, trivial⟩⟩
  | .quote bs => by
    have ih := blocksAux_ok o false true #[] (blockOk_nil o) bs
    simp only [block]
    refine blockOk_append o _ _ (blockOk_cr o nl) (blockOk_cons_text o _ _ ?_)
    have inner := blockOk_append o _ _ (blockOk_append o _ _ (blockOk_text o "\n") ih) (blockOk_cr o (blocksAux o false true #[] bs).2)
    simp only [List.cons_append] at inner
    exact elem_ok o _ _ _ (by simp) inner.1 inner.2.1 (Or.inr (Or.inl ⟨rfl, inner.2.2⟩))
  | .list ordered start tight' items => by
    have ih := itemsAux_ok o tight' true #[] (itemsOk_nil o) items
    simp only [block]
    refine blockOk_append o _ _ (blockOk_cr o nl) (blockOk_cons_text o _ _ ?_)
    have nl0 : ItemsOk o [Html.text "\n"] := by
      simp [ItemsOk, Html.NoRawList, Html.NoRaw, Html.SafeUrlsList, Html.SafeUrls, Html.ItemList]
    have inner := itemsOk_append o _ _ (itemsOk_append o _ _ nl0 ih) (itemsOk_cr o (itemsAux o tight' true #[] items).2)
    simp only [List.cons_append] at inner
    refine elem_ok o _ _ _ ?_ inner.1 inner.2.1 (Or.inr (Or.inr (Or.inl ⟨?_, inner.2.2⟩)))
    · intro p hp; split at hp <;> simp_all [UrlAttrSafe]
    · split <;> simp
termination_by structural b => b

theorem blocksAux_ok (o : Options) (tight nl : Bool) (acc : Array Html) (hacc : BlockOk o acc.toList) :
    (bs : List Block) → BlockOk o (blocksAux o tight nl acc bs).1.toList
  | [] => by simpa [blocksAux] using hacc
  | b :: bs => by
    simp only [blocksAux]
    exact blocksAux_ok o tight _ _ (by rw [Array.appendList_eq_append, Array.toList_appendList]; exact blockOk_append o _ _ hacc (block_ok o tight nl b)) bs
termination_by structural bs => bs

theorem itemsAux_ok (o : Options) (tight nl : Bool) (acc : Array Html) (hacc : ItemsOk o acc.toList) :
    (items : List (List Block)) → ItemsOk o (itemsAux o tight nl acc items).1.toList
  | [] => by simpa [itemsAux] using hacc
  | item :: items => by
    have ih := blocksAux_ok o tight false #[] (blockOk_nil o) item
    simp only [itemsAux]
    refine itemsAux_ok o tight true _ ?_ items
    rw [Array.appendList_eq_append, Array.toList_appendList]
    refine itemsOk_append o _ _ hacc ?_
    simp only [ItemsOk, Html.NoRawList, Html.NoRaw, Html.SafeUrlsList, Html.SafeUrls, Html.ItemList, and_true]
    refine ⟨ih.1, fun h => ⟨by simp, ih.2.1 h⟩, ?_⟩
    simp_all [BlockOk]
termination_by structural items => items
end

theorem blocks_ok (o : Options) (tight nl : Bool) (bs : List Block) : BlockOk o (blocks o tight nl bs).1 :=
  blocksAux_ok o tight nl #[] (blockOk_nil o) bs

/-- The renderer's tree for any Markdown text. -/
theorem tree_ok (o : Options) (src : String) : BlockOk o (tree o src) :=
  blocks_ok o false true _

end Folio.Proofs
