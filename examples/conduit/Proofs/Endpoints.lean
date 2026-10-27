/-
The endpoints themselves (`Conduit/Api.lean`), run on the model database
(`Proofs/Model.lean`) with any clock, hash and token functions. These are the
functions the server runs; only the store differs.
-/
import Proofs.Model

set_option linter.unusedSimpArgs false

namespace Conduit.Proofs
open Api

/-! ## Monad plumbing -/

@[simp] theorem id_bind {α β : Type} (x : α) (f : α → Id β) : (bind (m := Id) x f) = f x := rfl
@[simp] theorem id_pure {α : Type} (x : α) : (pure x : Id α) = x := rfl
@[simp] theorem id_map {α β : Type} (f : α → β) (x : Id α) : (f <$> x : Id β) = f x := rfl
@[simp] theorem except_map_ok {ε α β : Type} (f : α → β) (a : α) : Except.map f (.ok a : Except ε α) = .ok (f a) := rfl
@[simp] theorem run_liftM {α : Type} (x : S α) :
    ExceptT.run (liftM x : ExceptT ApiError S α) = Except.ok <$> x := rfl

variable (now : Nat) (hash : String → String) (check : String → String → Bool)
  (issue : Nat → String) (read : String → Option Nat)

local notation "svc" => services now hash check issue read

/-- Who is logged in depends only on the users table, and finding out
changes nothing. -/
theorem requireUser_run (r : Request) (M : Model) :
    (requireUser store svc r).run.run M = (((requireUser store svc r).run.run { users := M.users }).1, M) := by
  unfold requireUser viewer?
  cases ha : r.authorization with
  | none => simp [ha, ExceptT.run_bind, StateT.run_bind]
  | some h =>
    cases ht : tokenOf h with
    | none => simp [ha, ht, ExceptT.run_bind, StateT.run_bind]
    | some t =>
      cases hr : read t with
      | none => simp [ha, ht, hr, store, services, ExceptT.run_bind, StateT.run_bind]
      | some id =>
        simp only [ha, ht, store, services, ExceptT.run_bind, StateT.run_bind, hr, run_liftM]
        cases hu : M.users.find? (·.id == id) <;> simp [hu, StateT.run_bind, ExceptT.run_bind]

/-- The request `r` is from user `me` (its token verifies and names an existing user). -/
def LoggedIn (users : List UserRow) (r : Request) (me : UserRow) (tok : String) : Prop :=
  ((requireUser store svc r).run.run { users }).1 = .ok (me, tok)

theorem requireUser_ok {r : Request} {M : Model} {me : UserRow} {tok : String}
    (h : LoggedIn now hash check issue read M.users r me tok) :
    (requireUser store svc r).run.run M = (.ok (me, tok), M) := by
  rw [requireUser_run]; unfold LoggedIn at h; rw [h]

/-! ## Only an article's author may change or delete it -/

/-- **Deleting someone else's article is refused (403) and changes nothing.** -/
theorem deleteArticle_forbidden {r : Request} {slug : String} {M : Model} {me : UserRow} {tok : String} {a : ArticleRow}
    (hauth : LoggedIn now hash check issue read M.users r me tok)
    (ha : M.articles.find? (·.slug == slug) = some a) (hne : a.author ≠ me.id) :
    (deleteArticle store svc r slug).run.run M = (.error (.forbidden "article"), M) := by
  unfold deleteArticle
  simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok now hash check issue read hauth]
  simp [findArticle, store, ha, canEditArticle, hne, StateT.run_bind, ExceptT.run_bind]

/-- **The author's delete removes the article** with its tags, favorites and
comments, and answers 204. -/
theorem deleteArticle_author {r : Request} {slug : String} {M : Model} {me : UserRow} {tok : String} {a : ArticleRow}
    (hauth : LoggedIn now hash check issue read M.users r me tok)
    (ha : M.articles.find? (·.slug == slug) = some a) (heq : a.author = me.id) :
    (deleteArticle store svc r slug).run.run M =
      (.ok { status := 204, body := none },
       { M with articles := M.articles.filter (·.id != a.id), tags := M.tags.filter (·.1 != a.id),
                favorites := M.favorites.filter (·.2 != a.id), comments := M.comments.filter (·.article != a.id) }) := by
  unfold deleteArticle
  simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok now hash check issue read hauth]
  simp [findArticle, store, ha, canEditArticle, heq, StateT.run_bind, ExceptT.run_bind]

/-- **Updating someone else's article is refused (403) and changes nothing**,
whatever the request body says. -/
theorem updateArticle_forbidden {r : Request} {slug : String} {M : Model} {me : UserRow} {tok : String} {a : ArticleRow}
    (hauth : LoggedIn now hash check issue read M.users r me tok)
    (ha : M.articles.find? (·.slug == slug) = some a) (hne : a.author ≠ me.id) :
    (updateArticle store svc r slug).run.run M = (.error (.forbidden "article"), M) := by
  unfold updateArticle
  simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok now hash check issue read hauth]
  simp [findArticle, store, ha, canEditArticle, hne, StateT.run_bind, ExceptT.run_bind]

/-! ## Only a comment's author may delete it -/

/-- **Deleting someone else's comment is refused (403) and changes nothing.** -/
theorem deleteComment_forbidden {r : Request} {slug idText : String} {M : Model} {me : UserRow} {tok : String}
    {a : ArticleRow} {n : Nat} {c : CommentRow}
    (hauth : LoggedIn now hash check issue read M.users r me tok)
    (ha : M.articles.find? (·.slug == slug) = some a) (hn : idText.toNat? = some n)
    (hc : M.comments.find? (·.id == n) = some c) (hart : c.article = a.id) (hne : c.author ≠ me.id) :
    (deleteComment store svc r slug idText).run.run M = (.error (.forbidden "comment"), M) := by
  unfold deleteComment
  simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok now hash check issue read hauth]
  simp [findArticle, store, ha, hn, hc, hart, canDeleteComment, hne, StateT.run_bind, ExceptT.run_bind]

/-! ## Following -/

/-- **Following yourself is refused (422) and changes nothing.** -/
theorem follow_self {r : Request} {name : String} {M : Model} {me u : UserRow} {tok : String}
    (hauth : LoggedIn now hash check issue read M.users r me tok)
    (hu : M.users.find? (·.username == name) = some u) (hself : u.id = me.id) :
    (follow store svc r name).run.run M = (.error (.invalid [("profile", ["cannot follow yourself"])]), M) := by
  unfold follow
  simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok now hash check issue read hauth]
  simp [store, hu, canFollow, hself.symm, StateT.run_bind, ExceptT.run_bind]

/-- What following `u` does to the table: adds (me, u) unless it is there. -/
theorem follow_state {r : Request} {name : String} {M : Model} {me u : UserRow} {tok : String}
    (hauth : LoggedIn now hash check issue read M.users r me tok)
    (hu : M.users.find? (·.username == name) = some u) (hne : u.id ≠ me.id) :
    ((follow store svc r name).run.run M).2 = { M with follows := insertOrIgnore M.follows (me.id, u.id) } := by
  unfold follow
  simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok now hash check issue read hauth]
  simp [store, hu, canFollow, Ne.symm hne, StateT.run_bind, ExceptT.run_bind, profileReply, follows]

theorem insertOrIgnore_idem {α : Type} [BEq α] [LawfulBEq α] (l : List α) (x : α) :
    insertOrIgnore (insertOrIgnore l x) x = insertOrIgnore l x := by
  unfold insertOrIgnore
  by_cases h : x ∈ l <;> simp [h]

/-- **Following twice is the same as following once.** -/
theorem follow_idempotent {r : Request} {name : String} {M : Model} {me u : UserRow} {tok : String}
    (hauth : LoggedIn now hash check issue read M.users r me tok)
    (hu : M.users.find? (·.username == name) = some u) (hne : u.id ≠ me.id) :
    ((follow store svc r name).run.run ((follow store svc r name).run.run M).2).2 =
      ((follow store svc r name).run.run M).2 := by
  rw [follow_state now hash check issue read hauth hu hne]
  rw [follow_state now hash check issue read (M := { M with follows := insertOrIgnore M.follows (me.id, u.id) }) hauth hu hne]
  simp [insertOrIgnore_idem]

/-- No user follows themselves. -/
def NoSelfFollow (M : Model) : Prop := ∀ p ∈ M.follows, p.1 ≠ p.2

/-- **Following is irreflexive**: whatever the request, `follow` never makes
anyone follow themselves. -/
theorem follow_noSelf (r : Request) (name : String) (M : Model) (h : NoSelfFollow M) :
    NoSelfFollow ((follow store svc r name).run.run M).2 := by
  cases hreq : ((requireUser store svc r).run.run { users := M.users }).1 with
  | error e =>
    have : (requireUser store svc r).run.run M = (.error e, M) := by rw [requireUser_run, hreq]
    unfold follow
    simp only [ExceptT.run_bind, StateT.run_bind, this]
    simpa using h
  | ok v =>
    obtain ⟨me, tok⟩ := v
    cases hu : M.users.find? (·.username == name) with
    | none =>
      unfold follow
      simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok now hash check issue read hreq]
      simpa [store, hu, StateT.run_bind, ExceptT.run_bind] using h
    | some u =>
      by_cases hs : u.id = me.id
      · rw [follow_self now hash check issue read hreq hu hs]; exact h
      · rw [follow_state now hash check issue read hreq hu hs]
        intro p hp
        simp only [insertOrIgnore] at hp
        split at hp
        · exact h p hp
        · simp only [List.mem_append, List.mem_singleton] at hp
          rcases hp with hp | rfl
          · exact h p hp
          · exact Ne.symm hs

/-- **Unfollowing twice is the same as unfollowing once**, and leaves no
(me, them) pair. -/
theorem unfollow_state {r : Request} {name : String} {M : Model} {me u : UserRow} {tok : String}
    (hauth : LoggedIn now hash check issue read M.users r me tok)
    (hu : M.users.find? (·.username == name) = some u) :
    ((unfollow store svc r name).run.run M).2 = { M with follows := M.follows.filter (· != (me.id, u.id)) } := by
  unfold unfollow
  simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok now hash check issue read hauth]
  simp [store, hu, StateT.run_bind, ExceptT.run_bind, profileReply, follows]

theorem unfollow_idempotent {r : Request} {name : String} {M : Model} {me u : UserRow} {tok : String}
    (hauth : LoggedIn now hash check issue read M.users r me tok)
    (hu : M.users.find? (·.username == name) = some u) :
    ((unfollow store svc r name).run.run ((unfollow store svc r name).run.run M).2).2 =
      ((unfollow store svc r name).run.run M).2 := by
  rw [unfollow_state now hash check issue read hauth hu]
  rw [unfollow_state now hash check issue read (M := { M with follows := M.follows.filter (· != (me.id, u.id)) }) hauth hu]
  simp [List.filter_filter]

/-! ## Favorites -/

/-- Showing an article reads and never writes. -/
theorem articleJson_state (v : Option Nat) (a : ArticleRow) (M : Model) :
    ((articleJson store v a).run.run M).2 = M := by
  unfold articleJson load
  cases v <;> simp [store, StateT.run_bind, ExceptT.run_bind] <;> split <;> rfl

theorem store_articleBySlug (slug : String) :
    store.articleBySlug slug = (do return (← get).articles.find? (·.slug == slug)) := rfl
theorem store_favorite (u a : Nat) :
    store.favorite u a = modify fun M => { M with favorites := insertOrIgnore M.favorites (u, a) } := rfl
theorem store_unfavorite (u a : Nat) :
    store.unfavorite u a = modify fun M => { M with favorites := M.favorites.filter (· != (u, a)) } := rfl

theorem favorite_state {r : Request} {slug : String} {M : Model} {me : UserRow} {tok : String} {a : ArticleRow}
    (hauth : LoggedIn now hash check issue read M.users r me tok)
    (ha : M.articles.find? (·.slug == slug) = some a) :
    ((favorite store svc r slug).run.run M).2 = { M with favorites := insertOrIgnore M.favorites (me.id, a.id) } := by
  unfold favorite
  simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok now hash check issue read hauth]
  simp [findArticle, store_articleBySlug, store_favorite, ha, StateT.run_bind, ExceptT.run_bind]
  split <;> simp [articleJson_state]

/-- **Favoriting twice is the same as favoriting once.** -/
theorem favorite_idempotent {r : Request} {slug : String} {M : Model} {me : UserRow} {tok : String} {a : ArticleRow}
    (hauth : LoggedIn now hash check issue read M.users r me tok)
    (ha : M.articles.find? (·.slug == slug) = some a) :
    ((favorite store svc r slug).run.run ((favorite store svc r slug).run.run M).2).2 =
      ((favorite store svc r slug).run.run M).2 := by
  rw [favorite_state now hash check issue read hauth ha]
  rw [favorite_state now hash check issue read (M := { M with favorites := insertOrIgnore M.favorites (me.id, a.id) }) hauth ha]
  simp [insertOrIgnore_idem]

theorem unfavorite_state {r : Request} {slug : String} {M : Model} {me : UserRow} {tok : String} {a : ArticleRow}
    (hauth : LoggedIn now hash check issue read M.users r me tok)
    (ha : M.articles.find? (·.slug == slug) = some a) :
    ((unfavorite store svc r slug).run.run M).2 = { M with favorites := M.favorites.filter (· != (me.id, a.id)) } := by
  unfold unfavorite
  simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok now hash check issue read hauth]
  simp [findArticle, store_articleBySlug, store_unfavorite, ha, StateT.run_bind, ExceptT.run_bind]
  split <;> simp [articleJson_state]

/-- **Unfavoriting twice is the same as unfavoriting once.** -/
theorem unfavorite_idempotent {r : Request} {slug : String} {M : Model} {me : UserRow} {tok : String} {a : ArticleRow}
    (hauth : LoggedIn now hash check issue read M.users r me tok)
    (ha : M.articles.find? (·.slug == slug) = some a) :
    ((unfavorite store svc r slug).run.run ((unfavorite store svc r slug).run.run M).2).2 =
      ((unfavorite store svc r slug).run.run M).2 := by
  rw [unfavorite_state now hash check issue read hauth ha]
  rw [unfavorite_state now hash check issue read (M := { M with favorites := M.favorites.filter (· != (me.id, a.id)) }) hauth ha]
  simp [List.filter_filter]

/-! ## The router sends each request to these endpoints -/

theorem route_deleteArticle {m : Type → Type} [Monad m] (s : Store m) (sv : Services m) (r : Request) (slug : String)
    (h1 : r.method = "DELETE") (h2 : r.path = ["articles", slug]) :
    route s sv r = deleteArticle s sv r slug := by
  unfold route; rw [h1, h2]; rfl

theorem route_updateArticle {m : Type → Type} [Monad m] (s : Store m) (sv : Services m) (r : Request) (slug : String)
    (h1 : r.method = "PUT") (h2 : r.path = ["articles", slug]) :
    route s sv r = updateArticle s sv r slug := by
  unfold route; rw [h1, h2]; rfl

theorem route_deleteComment {m : Type → Type} [Monad m] (s : Store m) (sv : Services m) (r : Request) (slug id : String)
    (h1 : r.method = "DELETE") (h2 : r.path = ["articles", slug, "comments", id]) :
    route s sv r = deleteComment s sv r slug id := by
  unfold route; rw [h1, h2]; rfl

theorem route_follow {m : Type → Type} [Monad m] (s : Store m) (sv : Services m) (r : Request) (name : String)
    (h1 : r.method = "POST") (h2 : r.path = ["profiles", name, "follow"]) :
    route s sv r = follow s sv r name := by
  unfold route; rw [h1, h2]; rfl

theorem route_favorite {m : Type → Type} [Monad m] (s : Store m) (sv : Services m) (r : Request) (slug : String)
    (h1 : r.method = "POST") (h2 : r.path = ["articles", slug, "favorite"]) :
    route s sv r = favorite s sv r slug := by
  unfold route; rw [h1, h2]; rfl

/-- Every error an endpoint raises becomes the spec's error response: its
status and `{"errors": …}`. -/
theorem handle_error {m : Type → Type} [Monad m] [LawfulMonad m] (s : Store m) (sv : Services m) (r : Request)
    (e : ApiError) (h : (route s sv r).run = pure (.error e)) :
    handle s sv r = pure { status := e.status, body := some e.encode } := by
  unfold handle; rw [h]; simp [Reply.error]

end Conduit.Proofs
