/-
Specific endpoints (`Conduit/Api.lean`), run on the model database with any
clock, hash and token functions: who may delete or change what, what the
refusals answer, idempotence, and the router.
-/
import Proofs.Effects

set_option linter.unusedSimpArgs false

namespace Conduit.Proofs
open Api Spec

@[simp] theorem id_bind {α β : Type} (x : α) (f : α → Id β) : (bind (m := Id) x f) = f x := rfl
@[simp] theorem id_pure {α : Type} (x : α) : (pure x : Id α) = x := rfl
@[simp] theorem id_map {α β : Type} (f : α → β) (x : Id α) : (f <$> x : Id β) = f x := rfl
@[simp] theorem except_map_ok {ε α β : Type} (f : α → β) (a : α) : Except.map f (.ok a : Except ε α) = .ok (f a) := rfl

variable (e : Env)

/-- Who is logged in depends only on the users table. -/
theorem requireUser_run (r : Request) (D : DB) :
    (requireUser store e.svc r).run.run D = (((requireUser store e.svc r).run.run { users := D.users }).1, D) := by
  unfold requireUser viewer?
  cases ha : r.authorization with
  | none => simp [ha, ExceptT.run_bind, StateT.run_bind]
  | some h =>
    cases ht : tokenOf h with
    | none => simp [ha, ht, ExceptT.run_bind, StateT.run_bind]
    | some t =>
      cases hr : e.read t with
      | none => simp [ha, ht, store, Env.svc, hr, ExceptT.run_bind, StateT.run_bind]
      | some id =>
        simp only [ha, ht, store, Env.svc, ExceptT.run_bind, StateT.run_bind, hr, run_liftM]
        cases hu : D.users.find? (·.id == id) <;> simp [hu, StateT.run_bind, ExceptT.run_bind]

theorem requireUser_ok {r : Request} {D : DB} {me : UserRow} {tok : String} (h : LoggedIn e D r me tok) :
    (requireUser store e.svc r).run.run D = (.ok (me, tok), D) := by
  have := (requireUser_ro e r).state D
  unfold LoggedIn at h
  generalize (requireUser store e.svc r).run.run D = x at *
  obtain ⟨a, b⟩ := x
  simp only at h this; subst h this; rfl

/-- Still logged in after a change that keeps the users table. -/
theorem loggedIn_users {r : Request} {D D' : DB} {me : UserRow} {tok : String} (h : LoggedIn e D r me tok)
    (hu : D'.users = D.users) : LoggedIn e D' r me tok := by
  unfold LoggedIn at *
  have h1 := requireUser_run e r D'
  have h2 := requireUser_run e r D
  rw [hu] at h1; rw [h1]; rw [h2] at h; exact h

/-! ## Only an article's author may change or delete it -/

theorem deleteArticle_auth : Spec.deleteArticle_auth := by
  intro e r slug D me tok a hauth ha
  constructor
  · intro hne
    unfold deleteArticle
    simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok e hauth]
    simp [findArticle, store, ha, canEditArticle, hne, StateT.run_bind, ExceptT.run_bind]
  · intro heq
    unfold deleteArticle
    simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok e hauth]
    simp [findArticle, store, ha, canEditArticle, heq, StateT.run_bind, ExceptT.run_bind]

theorem updateArticle_forbidden : Spec.updateArticle_forbidden := by
  intro e r slug D me tok a hauth ha hne
  unfold updateArticle
  simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok e hauth]
  simp [findArticle, store, ha, canEditArticle, hne, StateT.run_bind, ExceptT.run_bind]

theorem deleteComment_forbidden : Spec.deleteComment_forbidden := by
  intro e r slug idText D me tok a n c hauth ha hn hc hart hne
  unfold deleteComment
  simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok e hauth]
  simp [findArticle, store, ha, hn, hc, hart, canDeleteComment, hne, StateT.run_bind, ExceptT.run_bind]

theorem follow_self : Spec.follow_self := by
  intro e r name D me u tok hauth hu hself
  unfold follow
  simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok e hauth]
  simp [store, hu, canFollow, hself.symm, StateT.run_bind, ExceptT.run_bind]

/-! ## Idempotence -/

theorem insertOrIgnore_idem {α : Type} [BEq α] [LawfulBEq α] (l : List α) (x : α) :
    insertOrIgnore (insertOrIgnore l x) x = insertOrIgnore l x := by
  unfold insertOrIgnore
  by_cases h : x ∈ l <;> simp [h]

theorem follow_state {r : Request} {name : String} {D : DB} {me u : UserRow} {tok : String}
    (hauth : LoggedIn e D r me tok) (hu : D.users.find? (·.username == name) = some u) (hne : u.id ≠ me.id) :
    ((follow store e.svc r name).run.run D).2 = D.addFollow me.id u.id := by
  unfold follow
  simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok e hauth]
  simp [store, hu, canFollow, Ne.symm hne, StateT.run_bind, ExceptT.run_bind, profileReply, follows]

theorem unfollow_state {r : Request} {name : String} {D : DB} {me u : UserRow} {tok : String}
    (hauth : LoggedIn e D r me tok) (hu : D.users.find? (·.username == name) = some u) :
    ((unfollow store e.svc r name).run.run D).2 = D.removeFollow me.id u.id := by
  unfold unfollow
  simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok e hauth]
  simp [store, hu, StateT.run_bind, ExceptT.run_bind, profileReply, follows]

theorem favorite_state {r : Request} {slug : String} {D : DB} {me : UserRow} {tok : String} {a : ArticleRow}
    (hauth : LoggedIn e D r me tok) (ha : D.articles.find? (·.slug == slug) = some a) :
    ((favorite store e.svc r slug).run.run D).2 = D.addFavorite me.id a.id := by
  unfold favorite
  rw [run_ro_bind (requireUser_ro e r), requireUser_ok e hauth]
  dsimp only
  rw [run_ro_bind (findArticle_ro slug), findArticle_run, ha]
  dsimp only
  rw [write_bind (x := store.favorite _ _) rfl]
  exact (RO.bind (articleJson_ro _ _) fun _ => RO.pure _).state _

theorem unfavorite_state {r : Request} {slug : String} {D : DB} {me : UserRow} {tok : String} {a : ArticleRow}
    (hauth : LoggedIn e D r me tok) (ha : D.articles.find? (·.slug == slug) = some a) :
    ((unfavorite store e.svc r slug).run.run D).2 = D.removeFavorite me.id a.id := by
  unfold unfavorite
  rw [run_ro_bind (requireUser_ro e r), requireUser_ok e hauth]
  dsimp only
  rw [run_ro_bind (findArticle_ro slug), findArticle_run, ha]
  dsimp only
  rw [write_bind (x := store.unfavorite _ _) rfl]
  exact (RO.bind (articleJson_ro _ _) fun _ => RO.pure _).state _

/-- An endpoint that is idempotent whenever it changes something is idempotent. -/
theorem twice_of {f : M S Reply} {D : DB}
    (h : ((f.run.run D).2 ≠ D) → (f.run.run (f.run.run D).2).2 = (f.run.run D).2) :
    (f.run.run (f.run.run D).2).2 = (f.run.run D).2 := by
  by_cases hc : (f.run.run D).2 = D
  · rw [hc]; exact hc
  · exact h hc

theorem relations_idempotent : Spec.relations_idempotent := by
  intro e r x D
  refine ⟨twice_of fun hc => ?_, twice_of fun hc => ?_, twice_of fun hc => ?_, twice_of fun hc => ?_⟩
  · -- follow
    rcases requireUser_cases e r D with ⟨err, h⟩ | ⟨me, tok, h⟩
    · exfalso; apply hc; unfold follow; rw [run_ro_bind (requireUser_ro e r), h]
    have hl : LoggedIn e D r me tok := by unfold LoggedIn; rw [h]
    cases hu : D.users.find? (·.username == x) with
    | none =>
      exfalso; apply hc; unfold follow; rw [run_ro_bind (requireUser_ro e r), h]; dsimp only
      rw [read_bind (x := store.userByUsername x) (fun _ => rfl) hu]; rfl
    | some u =>
      by_cases hs : u.id = me.id
      · exfalso; apply hc; rw [follow_self e r x D me u tok hl hu hs]
      rw [follow_state e hl hu hs, follow_state e (D := D.addFollow me.id u.id) (loggedIn_users e hl rfl) hu hs]
      simp [DB.addFollow, insertOrIgnore_idem]
  · -- unfollow
    rcases requireUser_cases e r D with ⟨err, h⟩ | ⟨me, tok, h⟩
    · exfalso; apply hc; unfold unfollow; rw [run_ro_bind (requireUser_ro e r), h]
    have hl : LoggedIn e D r me tok := by unfold LoggedIn; rw [h]
    cases hu : D.users.find? (·.username == x) with
    | none =>
      exfalso; apply hc; unfold unfollow; rw [run_ro_bind (requireUser_ro e r), h]; dsimp only
      rw [read_bind (x := store.userByUsername x) (fun _ => rfl) hu]; rfl
    | some u =>
      rw [unfollow_state e hl hu, unfollow_state e (D := D.removeFollow me.id u.id) (loggedIn_users e hl rfl) hu]
      simp [DB.removeFollow, List.filter_filter]
  · -- favorite
    rcases requireUser_cases e r D with ⟨err, h⟩ | ⟨me, tok, h⟩
    · exfalso; apply hc; unfold favorite; rw [run_ro_bind (requireUser_ro e r), h]
    have hl : LoggedIn e D r me tok := by unfold LoggedIn; rw [h]
    cases ha : D.articles.find? (·.slug == x) with
    | none =>
      exfalso; apply hc; unfold favorite; rw [run_ro_bind (requireUser_ro e r), h]; dsimp only
      rw [run_ro_bind (findArticle_ro x), findArticle_run, ha]
    | some a =>
      rw [favorite_state e hl ha, favorite_state e (D := D.addFavorite me.id a.id) (loggedIn_users e hl rfl) ha]
      simp [DB.addFavorite, insertOrIgnore_idem]
  · -- unfavorite
    rcases requireUser_cases e r D with ⟨err, h⟩ | ⟨me, tok, h⟩
    · exfalso; apply hc; unfold unfavorite; rw [run_ro_bind (requireUser_ro e r), h]
    have hl : LoggedIn e D r me tok := by unfold LoggedIn; rw [h]
    cases ha : D.articles.find? (·.slug == x) with
    | none =>
      exfalso; apply hc; unfold unfavorite; rw [run_ro_bind (requireUser_ro e r), h]; dsimp only
      rw [run_ro_bind (findArticle_ro x), findArticle_run, ha]
    | some a =>
      rw [unfavorite_state e hl ha, unfavorite_state e (D := D.removeFavorite me.id a.id) (loggedIn_users e hl rfl) ha]
      simp [DB.removeFavorite, List.filter_filter]

/-! ## The router -/

theorem route_table : Spec.route_table := by
  intro m _ s sv r
  refine ⟨?_, ?_, ?_, ?_, ?_, ?_, ?_, ?_, ?_, ?_, ?_, ?_, ?_, ?_, ?_, ?_, ?_, ?_, ?_⟩ <;>
    (intros; unfold route; simp_all)

theorem handle_error : Spec.handle_error := by
  intro m _ _ s sv r err h
  unfold handle; rw [h]; simp [Reply.error]

end Conduit.Proofs
