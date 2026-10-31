/-
What each endpoint writes (`Spec.handle_writes`), proved by running the
endpoint code on the model database.
-/
import Proofs.ReadOnly
import Proofs.Spec
import Proofs.Slug

namespace Conduit.Proofs
open Api Spec

variable (e : Env)

theorem run_pure {α : Type} (a : α) (D : DB) : (pure a : M S α).run.run D = (.ok a, D) := rfl
theorem run_throw {α : Type} (err : ApiError) (D : DB) : (throw err : M S α).run.run D = (.error err, D) := rfl

theorem findArticle_run (slug : String) (D : DB) :
    (findArticle store slug).run.run D =
      (match D.articles.find? (·.slug == slug) with
       | some a => .ok a
       | none => .error (.notFound "article"), D) := by
  unfold findArticle
  rw [run_ro_bind (RO.liftM _ (fun _ => rfl))]
  show (match D.articles.find? (·.slug == slug) with
    | some a => pure a
    | _ => throw (ApiError.notFound "article") : M S ArticleRow).run.run D = _
  cases D.articles.find? (·.slug == slug) <;> rfl

theorem userByUsername_run (n : String) (D : DB) :
    (liftM (store.userByUsername n) : M S _).run.run D = (.ok (D.users.find? (·.username == n)), D) := rfl

/-- Peels the login step: either it fails (nothing changes) or it names `me`. -/
theorem with_user {α : Type} (r : Request) (f : UserRow × String → M S α) (D : DB)
    (P : DB → Prop) (h0 : P D)
    (h : ∀ me tok, LoggedIn e D r me tok → P ((f (me, tok)).run.run D).2) :
    P ((requireUser store e.svc r >>= f).run.run D).2 := by
  rw [run_ro_bind (requireUser_ro e r)]
  rcases requireUser_cases e r D with ⟨err, hu⟩ | ⟨me, tok, hu⟩
  · rw [hu]; exact h0
  · rw [hu]; exact h me tok (by unfold LoggedIn; rw [hu])

/-- Peels a step that only reads. -/
theorem with_ro {α β : Type} {x : M S α} (hx : RO x) (f : α → M S β) (D : DB)
    (P : DB → Prop) (h0 : P D) (h : ∀ a, (x.run.run D).1 = .ok a → P ((f a).run.run D).2) :
    P ((x >>= f).run.run D).2 := by
  rw [run_ro_bind hx]
  cases hx' : (x.run.run D).1 with
  | error => exact h0
  | ok a => exact h a hx'

/-- Peels a write followed by reads only. -/
theorem with_write_ro {α β : Type} (x : M S α) {f : α → M S β} (hf : ∀ a, RO (f a)) (D : DB)
    (P : DB → Prop) (h : P (x.run.run D).2) : P ((x >>= f).run.run D).2 := by
  rw [state_bind_ro hf]; exact h

theorem read_bind {α β : Type} {x : S α} {a : α} {f : α → M S β} {D : DB} (hx : ∀ D', (x.run D').2 = D')
    (ha : (x.run D).1 = a) : (liftM x >>= f).run.run D = (f a).run.run D := by
  rw [run_ro_bind (RO.liftM x hx)]
  show (match (Except.ok (x.run D).1 : Except ApiError α) with
    | .ok a => (f a).run.run D | .error e => (.error e, D)) = _
  rw [ha]

theorem write_bind {α β : Type} {x : S α} {a : α} {f : α → M S β} {D D' : DB} (hx : x.run D = (a, D')) :
    (liftM x >>= f).run.run D = (f a).run.run D' := by
  simp only [ExceptT.run_bind, StateT.run_bind, run_liftM, hx]; rfl

theorem state_ro {α : Type} {x : M S α} (hx : RO x) (D : DB) (P : DB → Prop) (h : P D) : P (x.run.run D).2 := by
  rw [hx.state D]; exact h

/-- The database after a request from a logged-in user: unchanged, or one change they may make. -/
def Eff (r : Request) (D D' : DB) : Prop := D' = D ∨ ∃ me tok, LoggedIn e D r me tok ∧ Write me D D'

theorem mem_of_find {α : Type} {p : α → Bool} {l : List α} {a : α} (h : l.find? p = some a) : a ∈ l :=
  List.mem_of_find?_eq_some h

/-- Finds the article, or fails without a change. -/
theorem with_article {α : Type} (slug : String) (f : ArticleRow → M S α) (D : DB) (P : DB → Prop) (h0 : P D)
    (h : ∀ a, a ∈ D.articles → D.articles.find? (·.slug == slug) = some a → P ((f a).run.run D).2) :
    P ((findArticle store slug >>= f).run.run D).2 := by
  refine with_ro (findArticle_ro slug) _ D P h0 ?_
  intro a ha
  rw [findArticle_run] at ha
  revert ha; cases hf : D.articles.find? (·.slug == slug) <;> simp
  intro h'; subst h'; exact h _ (mem_of_find hf) hf

theorem deleteArticle_effect (r : Request) (slug : String) (D : DB) :
    Eff e r D ((deleteArticle store e.svc r slug).run.run D).2 := by
  unfold deleteArticle
  refine with_user e r _ D (Eff e r D) (Or.inl rfl) fun me tok hl => ?_
  refine with_article slug _ D (Eff e r D) (Or.inl rfl) fun a hmem _ => ?_
  dsimp only
  split
  · rename_i hed
    right; exact ⟨me, tok, hl, Write.deleteArticle a hmem (by simpa [canEditArticle] using hed)⟩
  · left; rfl

theorem follow_effect (r : Request) (name : String) (D : DB) :
    Eff e r D ((follow store e.svc r name).run.run D).2 := by
  unfold follow
  refine with_user e r _ D (Eff e r D) (Or.inl rfl) fun me tok hl => ?_
  dsimp only
  cases hu : D.users.find? (·.username == name) with
  | none => rw [read_bind (x := store.userByUsername name) (fun _ => rfl) hu]; left; rfl
  | some u =>
    rw [read_bind (x := store.userByUsername name) (fun _ => rfl) hu]
    dsimp only
    split
    · rename_i hc
      rw [write_bind (x := store.follow me.id u.id) rfl]
      refine state_ro (profileReply_ro _ _) _ (Eff e r D) ?_
      right; exact ⟨me, tok, hl, Write.follow u (mem_of_find hu) (fun h => by simp [canFollow, h] at hc)⟩
    · left; rfl

theorem unfollow_effect (r : Request) (name : String) (D : DB) :
    Eff e r D ((unfollow store e.svc r name).run.run D).2 := by
  unfold unfollow
  refine with_user e r _ D (Eff e r D) (Or.inl rfl) fun me tok hl => ?_
  dsimp only
  cases hu : D.users.find? (·.username == name) with
  | none => rw [read_bind (x := store.userByUsername name) (fun _ => rfl) hu]; left; rfl
  | some u =>
    rw [read_bind (x := store.userByUsername name) (fun _ => rfl) hu]
    dsimp only
    rw [write_bind (x := store.unfollow me.id u.id) rfl]
    refine state_ro (profileReply_ro _ _) _ (Eff e r D) ?_
    right; exact ⟨me, tok, hl, Write.unfollow u (mem_of_find hu)⟩

theorem favorite_effect (r : Request) (slug : String) (D : DB) :
    Eff e r D ((favorite store e.svc r slug).run.run D).2 := by
  unfold favorite
  refine with_user e r _ D (Eff e r D) (Or.inl rfl) fun me tok hl => ?_
  refine with_article slug _ D (Eff e r D) (Or.inl rfl) fun a hmem _ => ?_
  rw [write_bind (x := store.favorite me.id a.id) rfl]
  refine state_ro (by ro) _ (Eff e r D) ?_
  right; exact ⟨me, tok, hl, Write.favorite a hmem⟩

theorem unfavorite_effect (r : Request) (slug : String) (D : DB) :
    Eff e r D ((unfavorite store e.svc r slug).run.run D).2 := by
  unfold unfavorite
  refine with_user e r _ D (Eff e r D) (Or.inl rfl) fun me tok hl => ?_
  refine with_article slug _ D (Eff e r D) (Or.inl rfl) fun a hmem _ => ?_
  rw [write_bind (x := store.unfavorite me.id a.id) rfl]
  refine state_ro (by ro) _ (Eff e r D) ?_
  right; exact ⟨me, tok, hl, Write.unfavorite a hmem⟩

theorem with_body {α β : Type} (r : Request) (k : String) (dec : Lean.Json → Except String α)
    (f : α → M S β) (D : DB) (P : DB → Prop) (h0 : P D) (h : ∀ b, P ((f b).run.run D).2) :
    P ((bodyOf r k dec >>= f).run.run D).2 :=
  with_ro (bodyOf_ro _ _ _) _ D P h0 fun b _ => h b

theorem with_liftE {α β : Type} (x : Except ApiError α) (f : α → M S β) (D : DB) (P : DB → Prop)
    (h0 : P D) (h : ∀ a, x = .ok a → P ((f a).run.run D).2) : P ((liftE x >>= f).run.run D).2 := by
  cases hx : x with
  | error => exact h0
  | ok a => exact h a hx

/-! ## Slugs -/

theorem startsWith_append (a b : String) : (a ++ b).startsWith a = true := by
  rw [String.startsWith_eq_startsWith_toSlice, String.Slice.startsWith_string_iff]
  simp

/-- What `uniqueSlug` returns is one of the candidates `base`, `base-2`, … -/
theorem uniqueSlug_candidate (base : String) (taken : List String) : ∃ n, uniqueSlug base taken = candidate base n := by
  unfold uniqueSlug
  split
  · exact ⟨_, rfl⟩
  · exact ⟨0, rfl⟩

/-- Every candidate is among the slugs `slugsLike base` returns. -/
theorem candidate_like (base : String) (n : Nat) :
    (candidate base n == base || (candidate base n).startsWith (base ++ "-")) = true := by
  unfold candidate
  split
  · simp
  · simp only [Bool.or_eq_true]; right
    exact startsWith_append _ _

theorem fresh_of_like (base : String) (L slugs : List String) (hL : ∀ x ∈ slugs,
    (x == base || x.startsWith (base ++ "-")) = true → x ∈ L) :
    uniqueSlug base (reservedSlugs ++ L) ∉ reservedSlugs ∧ uniqueSlug base (reservedSlugs ++ L) ∉ slugs := by
  have hfresh := uniqueSlug_fresh base (reservedSlugs ++ L)
  refine ⟨fun h => hfresh (List.mem_append_left _ h), fun h => hfresh (List.mem_append_right _ (hL _ h ?_))⟩
  obtain ⟨n, hn⟩ := uniqueSlug_candidate base (reservedSlugs ++ L)
  rw [hn]; exact candidate_like base n

/-- **`freeSlug` picks a slug no other article has, and that names no route**
(`own`, when given, is the slug the article being edited already has). -/
theorem freeSlug_run_fresh (t : String) (ex : Option String) (D : DB) :
    ∃ s, (freeSlug store t ex).run.run D = (.ok s, D) ∧ s ∉ reservedSlugs ∧
      (s ∈ D.slugs → ex = some s) := by
  let like := D.slugs.filter fun s => s == slugify t || s.startsWith (slugify t ++ "-")
  cases ex with
  | none =>
    obtain ⟨h1, h2⟩ := fresh_of_like (slugify t) like D.slugs (fun x hx hl => List.mem_filter.mpr ⟨hx, hl⟩)
    exact ⟨uniqueSlug (slugify t) (reservedSlugs ++ like), rfl, h1, fun h => absurd h h2⟩
  | some own =>
    let L := like.filter (· != own)
    obtain ⟨h1, h2⟩ := fresh_of_like (slugify t) L (D.slugs.filter (· != own))
      (fun x hx hl => List.mem_filter.mpr ⟨List.mem_filter.mpr ⟨(List.mem_filter.mp hx).1, hl⟩, (List.mem_filter.mp hx).2⟩)
    refine ⟨uniqueSlug (slugify t) (reservedSlugs ++ L), rfl, h1, fun h => ?_⟩
    by_cases ho : uniqueSlug (slugify t) (reservedSlugs ++ L) = own
    · rw [ho]
    · exact absurd (List.mem_filter.mpr ⟨h, by simpa using ho⟩) h2

theorem with_fresh_slug {α : Type} (t : String) (ex : Option String) (f : String → M S α) (D : DB)
    (P : DB → Prop) (h : ∀ s, s ∉ reservedSlugs → (s ∈ D.slugs → ex = some s) → P ((f s).run.run D).2) :
    P ((freeSlug store t ex >>= f).run.run D).2 := by
  obtain ⟨s, hs, h1, h2⟩ := freeSlug_run_fresh t ex D
  rw [run_ro_bind (freeSlug_ro t ex), hs]
  exact h s h1 h2

theorem now_bind {α : Type} (f : Nat → M S α) (D : DB) :
    (liftM e.svc.now >>= f).run.run D = (f e.now).run.run D := read_bind (fun _ => rfl) rfl

theorem createArticle_effect (r : Request) (D : DB) :
    Eff e r D ((createArticle store e.svc r).run.run D).2 := by
  unfold createArticle
  refine with_user e r _ D (Eff e r D) (Or.inl rfl) fun me tok hl => ?_
  dsimp only
  refine with_body r _ _ _ D (Eff e r D) (Or.inl rfl) fun b => ?_
  refine with_liftE _ _ D (Eff e r D) (Or.inl rfl) fun v _ => ?_
  refine with_fresh_slug _ none _ D (Eff e r D) fun s hres hfree => ?_
  rw [now_bind]
  rw [write_bind (x := store.insertArticle _ _) rfl]
  refine state_ro (by ro) _ (Eff e r D) ?_
  right; exact ⟨me, tok, hl, Write.createArticle _ _ rfl (fun h => by cases hfree h) hres⟩

theorem updateArticle_effect (r : Request) (slug : String) (D : DB) :
    Eff e r D ((updateArticle store e.svc r slug).run.run D).2 := by
  unfold updateArticle
  refine with_user e r _ D (Eff e r D) (Or.inl rfl) fun me tok hl => ?_
  refine with_article slug _ D (Eff e r D) (Or.inl rfl) fun a hmem _ => ?_
  dsimp only
  split
  · rename_i hed
    have hauthor : a.author = me.id := by simpa [canEditArticle] using hed
    refine with_body r _ _ _ D (Eff e r D) (Or.inl rfl) fun b => ?_
    refine with_liftE _ _ D (Eff e r D) (Or.inl rfl) fun p _ => ?_
    -- The new slug: the old one, or a fresh one.
    have key : ∀ (ns : String), (ns = a.slug ∨ (ns ∉ D.slugs ∧ ns ∉ reservedSlugs)) →
        Eff e r D ((do
          let a' := patchArticle a p.val ns (← liftM e.svc.now)
          (liftM (store.updateArticle a') : M S Unit)
          if let some tags := p.val.tagList then (liftM (store.setTags a.id tags) : M S Unit)
          return Reply.ok (← articleJson store (some me.id) a')).run.run D).2 := by
      intro ns hns
      rw [now_bind]
      dsimp only
      rw [write_bind (x := store.updateArticle _) rfl]
      cases ht : p.val.tagList with
      | none =>
        dsimp only
        refine state_ro (by ro) _ (Eff e r D) ?_
        right; exact ⟨me, tok, hl, Write.updateArticle a _ none hmem hauthor rfl hns⟩
      | some ts =>
        dsimp only
        rw [write_bind (x := store.setTags _ _) rfl]
        refine state_ro (by ro) _ (Eff e r D) ?_
        right; exact ⟨me, tok, hl, Write.updateArticle a _ (some ts) hmem hauthor rfl hns⟩
    split
    · split
      · exact key a.slug (Or.inl rfl)
      · refine with_fresh_slug _ (some a.slug) _ D (Eff e r D) fun s hres hfree => key s ?_
        by_cases hs : s ∈ D.slugs
        · left; cases hfree hs; rfl
        · exact Or.inr ⟨hs, hres⟩
    · exact key a.slug (Or.inl rfl)
  · left; rfl

theorem addComment_effect (r : Request) (slug : String) (D : DB) :
    Eff e r D ((addComment store e.svc r slug).run.run D).2 := by
  unfold addComment
  refine with_user e r _ D (Eff e r D) (Or.inl rfl) fun me tok hl => ?_
  refine with_article slug _ D (Eff e r D) (Or.inl rfl) fun a hmem _ => ?_
  refine with_body r _ _ _ D (Eff e r D) (Or.inl rfl) fun b => ?_
  refine with_liftE _ _ D (Eff e r D) (Or.inl rfl) fun v _ => ?_
  rw [now_bind]
  rw [write_bind (x := store.insertComment _) rfl]
  refine state_ro (by ro) _ (Eff e r D) ?_
  right; exact ⟨me, tok, hl, Write.addComment _ a hmem rfl rfl⟩

theorem deleteComment_effect (r : Request) (slug idText : String) (D : DB) :
    Eff e r D ((deleteComment store e.svc r slug idText).run.run D).2 := by
  unfold deleteComment
  refine with_user e r _ D (Eff e r D) (Or.inl rfl) fun me tok hl => ?_
  refine with_article slug _ D (Eff e r D) (Or.inl rfl) fun a hmem _ => ?_
  dsimp only
  split
  · rename_i n _
    cases hc : D.comments.find? (·.id == n) with
    | none => rw [read_bind (x := store.commentById n) (fun _ => rfl) hc]; left; rfl
    | some c =>
      rw [read_bind (x := store.commentById n) (fun _ => rfl) hc]
      dsimp only
      split
      · split
        · rename_i hd
          right; exact ⟨me, tok, hl, Write.deleteComment c (mem_of_find hc) (by simpa [canDeleteComment] using hd)⟩
        · left; rfl
      · left; rfl
  · left; rfl

theorem updateUser_effect (r : Request) (D : DB) :
    Eff e r D ((updateUser store e.svc r).run.run D).2 := by
  unfold updateUser
  refine with_user e r _ D (Eff e r D) (Or.inl rfl) fun me tok hl => ?_
  dsimp only
  refine with_body r _ _ _ D (Eff e r D) (Or.inl rfl) fun b => ?_
  refine with_liftE _ _ D (Eff e r D) (Or.inl rfl) fun p _ => ?_
  -- Every path reads, then writes `me`'s row once (or fails without a change).
  repeat' (first
    | exact Or.inl rfl
    | (refine with_ro (P := Eff e r D) (D := D) ?_ _ (Or.inl rfl) fun _ _ => ?_; · ro)
    | (refine with_write_ro (P := Eff e r D) (D := D) (liftM (store.updateUser _)) (fun _ => RO.pure _) ?_
       exact Or.inr ⟨me, tok, hl, Write.updateUser _ rfl⟩)
    | split)

theorem find_none {α : Type} {p : α → Bool} {l : List α} (h : l.find? p = none) : ∀ x ∈ l, p x = false := by
  intro x hx; rw [List.find?_eq_none] at h; simpa using h x hx

theorem register_effect (r : Request) (D : DB) :
    ((register store e.svc r).run.run D).2 = D ∨ Register e D ((register store e.svc r).run.run D).2 := by
  unfold register
  refine with_body r _ _ _ D (fun D' => D' = D ∨ Register e D D') (Or.inl rfl) fun b => ?_
  refine with_liftE _ _ D (fun D' => D' = D ∨ Register e D D') (Or.inl rfl) fun v _ => ?_
  cases hu : D.users.find? (·.username == v.val.username) with
  | some _ => rw [read_bind (x := store.userByUsername _) (fun _ => rfl) hu]; left; rfl
  | none =>
  rw [read_bind (x := store.userByUsername _) (fun _ => rfl) hu]
  simp only [Option.isSome_none, Bool.false_eq_true, ↓reduceIte]
  cases he : D.users.find? (·.email == v.val.email) with
  | some _ => rw [read_bind (x := store.userByEmail _) (fun _ => rfl) he]; left; rfl
  | none =>
  rw [read_bind (x := store.userByEmail _) (fun _ => rfl) he]
  simp only [Option.isSome_none, Bool.false_eq_true, ↓reduceIte]
  right
  refine ⟨v.val.username, v.val.email, v.val.password, fun u hu' => ⟨?_, ?_⟩, rfl⟩
  · have := find_none hu u hu'; simpa using this
  · have := find_none he u hu'; simpa using this

/-- What `handle` leaves is what the endpoint leaves. -/
theorem handle_state (r : Request) (D : DB) :
    after e r D = ((route store e.svc r).run.run D).2 := by
  unfold after run handle
  simp only [StateT.run_bind]
  generalize ((route store e.svc r).run.run D) = x
  obtain ⟨res, D'⟩ := x
  cases res <;> rfl

/-- **Every change to the database is one a logged-in user may make, or a registration.** -/
theorem handle_writes : Spec.handle_writes := by
  intro e r D
  rw [handle_state]
  have hro : ∀ {α : Type} {x : M S α}, RO x → (x.run.run D).2 = D := fun h => h.state D
  have eff : ∀ {α : Type} {x : M S α}, Eff e r D ((x.run.run D).2) →
      (x.run.run D).2 = D ∨ (r.method = "POST" ∧ r.path = ["users"] ∧ Register e D (x.run.run D).2) ∨
      ∃ me tok, LoggedIn e D r me tok ∧ Write me D (x.run.run D).2 := by
    intro _ _ h; rcases h with h | h
    · exact Or.inl h
    · exact Or.inr (Or.inr h)
  unfold route
  split
  · rename_i hm hp
    rcases register_effect e r D with h | h
    · exact Or.inl h
    · exact Or.inr (Or.inl ⟨hm, hp, h⟩)
  · exact Or.inl (hro (login_ro e r))
  · exact Or.inl (hro (currentUser_ro e r))
  · exact eff (updateUser_effect e r D)
  · exact Or.inl (hro (getProfile_ro e r _))
  · exact eff (follow_effect e r _ D)
  · exact eff (unfollow_effect e r _ D)
  · exact Or.inl (hro (listArticles_ro e r))
  · exact eff (createArticle_effect e r D)
  · exact Or.inl (hro (feed_ro e r))
  · exact Or.inl (hro (getArticle_ro e r _))
  · exact eff (updateArticle_effect e r _ D)
  · exact eff (deleteArticle_effect e r _ D)
  · exact eff (favorite_effect e r _ D)
  · exact eff (unfavorite_effect e r _ D)
  · exact Or.inl (hro (listComments_ro e r _))
  · exact eff (addComment_effect e r _ D)
  · exact eff (deleteComment_effect e r _ _ D)
  · exact Or.inl (hro tags_ro)
  · exact Or.inl rfl

end Conduit.Proofs
