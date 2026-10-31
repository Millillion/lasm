/-
The rendered pages (`Frontend/View.lean`): their layout, their links and
images, their form controls, and what an article body can produce. The
view is pure, so these are about every state the app or the server can
render: each element of the tree is checked, for every model.
-/
import Proofs.Spec
import Proofs.Markdown
import Proofs.Client

set_option linter.unusedSimpArgs false
set_option linter.unnecessarySimpa false
set_option linter.unusedVariables false

namespace Conduit.Proofs
open Conduit.Frontend Lasm.UI Spec

section Every
variable {Msg : Type} {P Q : String → List (Attr Msg) → Prop}

@[simp] theorem every_text (s : String) : Every P (.text s) := .text s
@[simp] theorem every_elem {ns : Ns} {tag : String} {key : Option String} {attrs : List (Attr Msg)} {cs : List (Html Msg)} :
    Every P (.elem ns tag key attrs cs) ↔ P tag attrs ∧ ∀ c ∈ cs, Every P c := by
  constructor
  · intro h; cases h; exact ⟨‹_›, ‹_›⟩
  · intro ⟨h1, h2⟩; exact .elem _ _ _ _ _ h1 h2
@[simp] theorem every_keyed (k : String) (h : Html Msg) : Every P (Html.keyed k h) ↔ Every P h := by
  cases h <;> simp [Html.keyed]

theorem Every.mono (hPQ : ∀ t a, P t a → Q t a) : ∀ {h : Html Msg}, Every P h → Every Q h
  | .text _, _ => .text _
  | .elem _ _ _ _ cs, .elem _ _ _ _ _ h1 h2 => .elem _ _ _ _ _ (hPQ _ _ h1) fun c hc => Every.mono hPQ (h2 c hc)
end Every

/-- What every element of every page satisfies: its `href`s are safe, it sets
no `innerHTML`, an image has `alt`, a link has `href`, a form control has a
placeholder. -/
def Good (tag : String) (attrs : List (Attr Msg)) : Prop :=
  (∀ v, Attr.attr "href" v ∈ attrs → Markdown.allowedHref v = true) ∧
  (∀ v, Attr.prop "innerHTML" v ∉ attrs) ∧
  (tag = "img" → ∃ v, Attr.attr "alt" v ∈ attrs) ∧
  (tag = "a" → ∃ v, Attr.attr "href" v ∈ attrs) ∧
  (tag = "input" ∨ tag = "textarea" → ∃ v, v ≠ "" ∧ Attr.attr "placeholder" v ∈ attrs)

/-! ## Links within the app have no scheme -/

theorem allowed_of_slash (s : String) : Markdown.allowedHref ("/" ++ s) = true := by
  unfold Markdown.allowedHref
  rw [String.toList_append]
  simp [Markdown.schemeOf]

theorem href_eq (r : Route) : ∃ s, r.href = "/" ++ s := ⟨_, by unfold Route.href; rw [String.append_assoc]⟩

@[simp] theorem route_href_safe (r : Route) : Markdown.allowedHref r.href = true := by
  obtain ⟨s, h⟩ := href_eq r; rw [h]; exact allowed_of_slash s

@[simp] theorem route_href_append_safe (r : Route) (t : String) : Markdown.allowedHref (r.href ++ t) = true := by
  obtain ⟨s, h⟩ := href_eq r; rw [h, String.append_assoc]; exact allowed_of_slash _

@[simp] theorem slash_safe : Markdown.allowedHref "/" = true := by decide
@[simp] theorem settings_safe : Markdown.allowedHref "/settings" = true := by decide
@[simp] theorem login_safe : Markdown.allowedHref "/login" = true := by decide
@[simp] theorem register_safe : Markdown.allowedHref "/register" = true := by decide
@[simp] theorem gh_safe : Markdown.allowedHref "https://github.com/gothinkster/realworld" = true := by decide
@[simp] theorem lasm_safe : Markdown.allowedHref "https://github.com/Millillion/lasm" = true := by decide

attribute [local simp] Good Lasm.UI.div Lasm.UI.nav Lasm.UI.ul Lasm.UI.li Lasm.UI.a Lasm.UI.i Lasm.UI.img Lasm.UI.footer
  Lasm.UI.span Lasm.UI.h1 Lasm.UI.h4 Lasm.UI.p Lasm.UI.button Lasm.UI.text Lasm.UI.keyed Lasm.UI.fieldset Lasm.UI.input
  Lasm.UI.form Lasm.UI.textarea Lasm.UI.hr Lasm.UI.strong Lasm.UI.em Lasm.UI.code Lasm.UI.pre Lasm.UI.ol
  Lasm.UI.blockquote Lasm.UI.node Frontend.link class_ href src alt rel rows type_ name placeholder value disabled
  onClick onInput onSubmit onEnter on preventDefaultOn Attr.onWith

theorem header_good (m : Model) : Every Good (Frontend.header m) := by
  unfold Frontend.header navItem
  cases m.auth <;> simp

theorem footer_good : Every Good (footer_ : H) := by unfold footer_; simp

theorem tagList_good (ts : List String) : Every Good (tagList ts : H) := by unfold tagList; simp

theorem forall_cond_eq {α : Type} {c : Prop} {X : α} {Q : α → Prop} : (∀ a, (c ∧ a = X) → Q a) ↔ (c → Q X) :=
  ⟨fun h hc => h X ⟨hc, rfl⟩, fun h _ ⟨hc, he⟩ => he ▸ h hc⟩
attribute [local simp] or_imp forall_and forall_cond_eq

@[simp] theorem mem_errorList {es : List String} {a : H} :
    a ∈ errorList es ↔ (es ≠ [] ∧ a = ul [class_ "error-messages"] (es.map fun e => li [] [text e])) := by
  unfold errorList; cases es <;> simp

theorem errorList_good (es : List String) : ∀ c ∈ (errorList es : List H), Every Good c := by
  unfold errorList; split <;> simp

theorem favoriteButton_good (m : Model) (art : Article) (l : Option String) (x : String) :
    Every Good (favoriteButton m art l x) := by
  unfold favoriteButton; cases l <;> simp

theorem preview_good (m : Model) (art : Article) : Every Good (preview m art) := by
  unfold preview; simp [favoriteButton_good, tagList_good]

theorem pagination_good (count page : Nat) (f : Nat → String) (hf : ∀ n, Markdown.allowedHref (f n) = true) :
    ∀ c ∈ (pagination count page f : List H), Every Good c := by
  unfold pagination; dsimp only; intro c hc; split at hc
  · simp at hc
  · simp at hc; subst hc; simp [hf]

theorem articleList_good (m : Model) (empty : List H) (he : ∀ c ∈ empty, Every Good c) (f : Nat → String)
    (hf : ∀ n, Markdown.allowedHref (f n) = true) (page : Nat) : ∀ c ∈ articleList m empty f page, Every Good c := by
  unfold articleList
  split
  · simp
  · simp
  · split
    · simpa using he
    · intro c hc
      rcases List.mem_append.mp hc with hc | hc
      · obtain ⟨art, _, rfl⟩ := List.mem_map.mp hc; exact preview_good m art
      · exact pagination_good _ _ _ hf c hc

theorem homePage_good (m : Model) (feed : Feed) (page : Nat) : Every Good (homePage m feed page) := by
  have hl := fun e he => articleList_good m e he (fun n => (Route.home feed n).href) (fun _ => route_href_safe _) page
  unfold homePage
  cases feed <;> cases hp : m.tags <;> simp at hl ⊢ <;>
    first
    | exact hl _ (by simp)
    | exact ⟨hl _ (by simp), fun c hc => by obtain ⟨t, _, rfl⟩ := List.mem_map.mp (List.mem_of_mem_take hc); simp⟩

theorem authPage_good (m : Model) (up : Bool) : Every Good (authPage m up) := by
  unfold authPage
  cases up <;> simp [errorList_good]

theorem settingsPage_good (m : Model) : Every Good (settingsPage m) := by
  unfold settingsPage; simp [errorList_good]

theorem editorPage_good (m : Model) : Every Good (editorPage m) := by
  unfold editorPage; simp [errorList_good]

theorem notFoundPage_good : Every Good (notFoundPage) := by unfold notFoundPage; simp

theorem followButton_good (m : Model) (p : Profile) (x : String) : Every Good (followButton m p x) := by
  unfold followButton; simp

theorem profilePage_good (m : Model) (u : String) (fav : Bool) (page : Nat) : Every Good (profilePage m u fav page) := by
  unfold profilePage
  simp only [every_elem]
  simp
  refine ⟨?_, articleList_good _ _ (by simp) _ (fun _ => route_href_safe _) _⟩
  cases m.profile with
  | ready prof => simp; split <;> (try split) <;> simp [followButton_good]
  | loading => simp
  | failed e => simpa using errorList_good [e]

theorem articleMeta_good (m : Model) (art : Article) : Every Good (articleMeta m art) := by
  unfold articleMeta
  simp only [every_elem]
  simp
  split <;> (try split) <;> simp [followButton_good, favoriteButton_good]

theorem commentCard_good (m : Model) (c : Comment) : Every Good (commentCard m c) := by
  unfold commentCard; simp

theorem commentSection_good (m : Model) (art : Article) : Every Good (commentSection m art) := by
  unfold commentSection
  simp
  refine ⟨?_, ?_⟩
  · split <;> simp [String.append_assoc]
  · cases m.comments <;> simp [commentCard_good]

/-! ## Article bodies -/

/-- What the elements of an article body satisfy: `Good`, and no `h1`. -/
def BodyGood (tag : String) (attrs : List (Attr Msg)) : Prop := Good tag attrs ∧ tag ≠ "h1"

attribute [local simp] BodyGood

theorem inlines_good : ∀ (cs : List Markdown.Inline), SafeLinks cs → ∀ c ∈ cs, Every BodyGood (inlineView c)
  | [], _, c, hc => absurd hc List.not_mem_nil
  | .text s :: rest, h, c, hc => by
    rcases List.mem_cons.mp hc with rfl | hc
    · simp [inlineView]
    · exact inlines_good rest (by simpa [SafeLinks] using h) c hc
  | .code s :: rest, h, c, hc => by
    rcases List.mem_cons.mp hc with rfl | hc
    · simp [inlineView]
    · exact inlines_good rest (by simpa [SafeLinks] using h) c hc
  | .strong cs :: rest, h, c, hc => by
    simp only [SafeLinks] at h
    rcases List.mem_cons.mp hc with rfl | hc
    · simp only [inlineView, Lasm.UI.strong, every_elem]
      refine ⟨by simp, fun x hx => ?_⟩
      obtain ⟨⟨y, hy⟩, _, rfl⟩ := List.mem_map.mp hx
      exact inlines_good cs h.1 y hy
    · exact inlines_good rest h.2 c hc
  | .em cs :: rest, h, c, hc => by
    simp only [SafeLinks] at h
    rcases List.mem_cons.mp hc with rfl | hc
    · simp only [inlineView, Lasm.UI.em, every_elem]
      refine ⟨by simp, fun x hx => ?_⟩
      obtain ⟨⟨y, hy⟩, _, rfl⟩ := List.mem_map.mp hx
      exact inlines_good cs h.1 y hy
    · exact inlines_good rest h.2 c hc
  | .link u cs :: rest, h, c, hc => by
    simp only [SafeLinks] at h
    rcases List.mem_cons.mp hc with rfl | hc
    · simp only [inlineView, Lasm.UI.a, every_elem]
      refine ⟨by simp [href, rel, h.1], fun x hx => ?_⟩
      obtain ⟨⟨y, hy⟩, _, rfl⟩ := List.mem_map.mp hx
      exact inlines_good cs h.2.1 y hy
    · exact inlines_good rest h.2.2 c hc
termination_by cs => sizeOf cs
decreasing_by all_goals simp_wf <;> omega

/-- What the reader produces: links checked, headings from level 1. -/
def BlockOk : Markdown.Block → Prop
  | .para cs | .quote cs => SafeLinks cs
  | .heading n cs => 1 ≤ n ∧ SafeLinks cs
  | .list _ items => ∀ cs ∈ items, SafeLinks cs
  | .code _ | .rule => True

theorem headingOf_level {line : String} {n : Nat} {t : String} (h : Markdown.headingOf line = some (n, t)) : 1 ≤ n := by
  unfold Markdown.headingOf at h
  dsimp only at h
  split at h
  · rename_i hc; cases h; simp only [Bool.and_eq_true, decide_eq_true_eq] at hc; exact hc.1.1
  · cases h

theorem blocks_ok : ∀ (fuel : Nat) (lines : List String), ∀ b ∈ Markdown.blocks fuel lines, BlockOk b
  | 0, _, b, hb => by simp [Markdown.blocks] at hb
  | _ + 1, [], b, hb => by simp [Markdown.blocks] at hb
  | fuel + 1, line :: rest, b, hb => by
    unfold Markdown.blocks at hb
    dsimp only at hb
    split at hb
    · exact blocks_ok fuel _ b hb
    split at hb
    · rcases List.mem_cons.mp hb with rfl | hb
      · exact True.intro
      · exact blocks_ok fuel _ b hb
    split at hb
    · rcases List.mem_cons.mp hb with rfl | hb
      · exact True.intro
      · exact blocks_ok fuel _ b hb
    split at hb
    · rename_i n text h
      rcases List.mem_cons.mp hb with rfl | hb
      · exact ⟨headingOf_level h, inlines_safe _⟩
      · exact blocks_ok fuel _ b hb
    split at hb
    · rcases List.mem_cons.mp hb with rfl | hb
      · intro cs hcs; obtain ⟨l, _, rfl⟩ := List.mem_map.mp hcs; exact inlines_safe _
      · exact blocks_ok fuel _ b hb
    split at hb
    · rcases List.mem_cons.mp hb with rfl | hb
      · intro cs hcs; obtain ⟨l, _, rfl⟩ := List.mem_map.mp hcs; exact inlines_safe _
      · exact blocks_ok fuel _ b hb
    split at hb
    · rcases List.mem_cons.mp hb with rfl | hb
      · exact inlines_safe _
      · exact blocks_ok fuel _ b hb
    · rcases List.mem_cons.mp hb with rfl | hb
      · exact inlines_safe _
      · exact blocks_ok fuel _ b hb

theorem blockView_good (b : Markdown.Block) (h : BlockOk b) : Every BodyGood (blockView b) := by
  cases b with
  | para cs =>
    simp only [blockView, Lasm.UI.p, every_elem]
    exact ⟨by simp, fun x hx => by obtain ⟨c, hc, rfl⟩ := List.mem_map.mp hx; exact inlines_good cs h c hc⟩
  | quote cs =>
    simp only [blockView, Lasm.UI.blockquote, Lasm.UI.p, every_elem]
    refine ⟨by simp, fun x hx => ?_⟩
    simp only [List.mem_singleton] at hx; subst hx
    simp only [every_elem]
    exact ⟨by simp, fun x hx => by obtain ⟨c, hc, rfl⟩ := List.mem_map.mp hx; exact inlines_good cs h c hc⟩
  | heading n cs =>
    simp only [blockView, Lasm.UI.node, every_elem]
    refine ⟨?_, fun x hx => by obtain ⟨c, hc, rfl⟩ := List.mem_map.mp hx; exact inlines_good cs h.2 c hc⟩
    have h1 := h.1
    have : min 6 (n + 1) = 2 ∨ min 6 (n + 1) = 3 ∨ min 6 (n + 1) = 4 ∨ min 6 (n + 1) = 5 ∨ min 6 (n + 1) = 6 := by omega
    rcases this with h | h | h | h | h <;> rw [h] <;> simp <;> decide
  | list ordered items =>
    simp only [blockView]
    cases ordered <;> simp only [Lasm.UI.ol, Lasm.UI.ul, Bool.false_eq_true, ↓reduceIte, every_elem] <;>
      refine ⟨by simp, fun x hx => ?_⟩ <;>
      obtain ⟨cs, hcs, rfl⟩ := List.mem_map.mp hx <;>
      simp only [Lasm.UI.li, every_elem] <;>
      exact ⟨by simp, fun x hx => by obtain ⟨c, hc, rfl⟩ := List.mem_map.mp hx; exact inlines_good cs (h cs hcs) c hc⟩
  | code t => simp [blockView]
  | rule => simp [blockView]

theorem parse_good (body : String) : ∀ b ∈ Markdown.parse body, Every BodyGood (blockView b) :=
  fun b hb => blockView_good b (blocks_ok _ _ b hb)

theorem articlePage_good (m : Model) : Every Good (articlePage m) := by
  unfold articlePage
  split
  · simp
  · simp
  · rename_i art _
    simp [articleMeta_good, commentSection_good, tagList_good]
    intro b hb
    exact Every.mono (fun _ _ h => h.1) (parse_good _ b hb)

/-- Every element of every page is `Good`. -/
theorem view_good (m : Model) : Every Good (view m) := by
  unfold view
  simp only [Lasm.UI.div, every_elem]
  refine ⟨by simp, fun c hc => ?_⟩
  simp only [List.mem_cons, List.mem_nil_iff, or_false] at hc
  rcases hc with rfl | rfl | rfl
  · exact header_good m
  · split
    · exact homePage_good _ _ _
    · exact authPage_good _ _
    · exact authPage_good _ _
    · exact settingsPage_good _
    · exact editorPage_good _
    · exact articlePage_good _
    · exact profilePage_good _ _ _ _
    · exact notFoundPage_good
  · exact footer_good

theorem view_hrefs_safe : Spec.view_hrefs_safe := fun m => Every.mono (fun _ _ h => h.1) (view_good m)
theorem view_no_raw_html : Spec.view_no_raw_html := fun m => Every.mono (fun _ _ h => h.2.1) (view_good m)
theorem view_imgs_alt_links_href : Spec.view_imgs_alt_links_href :=
  fun m => Every.mono (fun _ _ h => ⟨h.2.2.1, h.2.2.2.1⟩) (view_good m)
theorem view_controls_described : Spec.view_controls_described := fun m => Every.mono (fun _ _ h => h.2.2.2.2) (view_good m)
theorem article_body_no_h1 : Spec.article_body_no_h1 := fun body b hb => Every.mono (fun _ _ h => h.2) (parse_good body b hb)

/-! ## Layout -/

theorem view_layout : Spec.view_layout := by
  intro m
  refine ⟨_, rfl, rfl, ?_⟩
  cases h : m.route <;> simp [pageClass, classOf, homePage, authPage, settingsPage, editorPage, articlePage,
    profilePage, notFoundPage, h] <;> cases m.article <;> rfl

/-! ## The server's first page is the app's first view -/

theorem view_next (m : Model) (n : Option String) : view { m with next := n } = view m := rfl

theorem hydration_agrees : Spec.hydration_agrees := by
  intro route flags next
  refine ⟨"<!doctype html><html lang=\"en\"><head>" ++ Server.head ++ "</head><body>" ++
    "<div id=\"app\" data-lasm-app data-lasm-hydrate data-lasm-flags=\"" ++ Render.escapeAttr flags.compress ++ "\">",
    "</div></body></html>", ?_⟩
  unfold Model.init
  rw [view_next]
  rfl

/-! ## Pagination links -/

theorem flatMap_attach {α β : Type} (f : α → List β) (l : List α) : (l.attach.flatMap fun x => f x.1) = l.flatMap f := by
  induction l with
  | nil => rfl
  | cons a l ih => simp [List.attach_cons, List.flatMap_cons, List.flatMap_map, ih]

@[simp] theorem hrefs_text {Msg : Type} (s : String) : hrefs (.text s : Html Msg) = [] := by rw [hrefs]

theorem hrefs_elem {Msg : Type} (ns : Ns) (tag : String) (k : Option String) (attrs : List (Attr Msg)) (cs : List (Html Msg)) :
    hrefs (.elem ns tag k attrs cs) = attrs.filterMap (fun | .attr "href" v => some v | _ => none) ++ cs.flatMap hrefs := by
  rw [hrefs]
  congr 1
  exact flatMap_attach _ _

theorem pagination_links : Spec.pagination_links := by
  intro count page f
  refine ⟨?_, by unfold pageSize; omega, fun _ => rfl⟩
  unfold pagination
  dsimp only
  split
  · rfl
  · simp only [List.flatMap_cons, List.flatMap_nil, List.append_nil, Lasm.UI.ul, Lasm.UI.li, Frontend.link,
      Lasm.UI.a, Lasm.UI.text, class_, href, hrefs_elem]
    simp [List.flatMap_map, hrefs_elem]
    induction (List.range ((count + pageSize - 1) / pageSize)) with
    | nil => rfl
    | cons a l ih => simp [List.flatMap_cons, ih]

end Conduit.Proofs
