/-
The browser app (`Frontend/Update.lean`): what `update` sends, and the
invariants of its state. `update` is pure, so these are about the very
function the browser runs.
-/
import Frontend.Update
import Proofs.Validation
import Proofs.Json

namespace Conduit.Proofs
open Conduit.Frontend Lasm.UI Spec

/-! ## The requests a command asks for -/

theorem requests_none : requests (Cmd.none : Cmd Msg) = [] := rfl
theorem requests_batch (cs : List (Cmd Msg)) : requests (Cmd.batch cs) = cs.flatMap requests := by
  unfold requests Cmd.batch
  induction cs with
  | nil => rfl
  | cons c cs ih => simp only [List.flatMap_cons, List.filterMap_append, ih]
/-- The headers `api` sends. -/
def apiHeaders (m : Model) : List (String × String) :=
  let auth : List (String × String) := match m.token with
    | some t => [("authorization", s!"Token {t}")]
    | none => []
  [("content-type", "application/json")] ++ auth

theorem requests_api (m : Model) (meth path : String) (body : Option Lean.Json) (h : Answer → Msg) :
    requests (api m meth path body h) =
      [{ method := meth, url := "/api" ++ path, headers := apiHeaders m, body := body.map (·.compress) }] := rfl
theorem requests_pushUrl (u : String) : requests (Cmd.pushUrl u : Cmd Msg) = [] := rfl
theorem requests_replaceUrl (u : String) : requests (Cmd.replaceUrl u : Cmd Msg) = [] := rfl
theorem requests_storageSet (k v : String) : requests (Cmd.storageSet k v : Cmd Msg) = [] := rfl
theorem requests_storageRemove (k : String) : requests (Cmd.storageRemove k : Cmd Msg) = [] := rfl

attribute [local simp] requests_none requests_batch requests_api requests_pushUrl requests_replaceUrl
  requests_storageSet requests_storageRemove

/-- A command whose requests have no body. -/
def NoBody (c : Cmd Msg) : Prop := ∀ req ∈ requests c, req.body = none

theorem NoBody.none : NoBody (Cmd.none : Cmd Msg) := by intro req h; simp at h
theorem NoBody.api (m : Model) (meth path : String) (h : Answer → Msg) : NoBody (api m meth path Option.none h) := by
  intro req hr; simp at hr; subst hr; rfl
theorem NoBody.nil : NoBody (Cmd.batch ([] : List (Cmd Msg))) := by intro req h; simp at h
theorem NoBody.cons {c : Cmd Msg} {cs : List (Cmd Msg)} (h1 : NoBody c) (h2 : NoBody (Cmd.batch cs)) :
    NoBody (Cmd.batch (c :: cs)) := by
  intro req hr
  simp only [requests_batch, List.flatMap_cons, List.mem_append] at hr h2
  rcases hr with hr | hr
  · exact h1 req hr
  · exact h2 req (by simpa using hr)
theorem NoBody.pushUrl (u : String) : NoBody (Cmd.pushUrl u : Cmd Msg) := by intro req h; simp at h
theorem NoBody.replaceUrl (u : String) : NoBody (Cmd.replaceUrl u : Cmd Msg) := by intro req h; simp at h
theorem NoBody.storageSet (k v : String) : NoBody (Cmd.storageSet k v : Cmd Msg) := by intro req h; simp at h
theorem NoBody.storageRemove (k : String) : NoBody (Cmd.storageRemove k : Cmd Msg) := by intro req h; simp at h

/-- Proves `NoBody c` by taking `c` apart. -/
macro "nobody" : tactic => `(tactic| repeat' (first | apply NoBody.none | apply NoBody.api | apply NoBody.nil | apply NoBody.cons | apply NoBody.pushUrl | apply NoBody.replaceUrl | apply NoBody.storageSet | apply NoBody.storageRemove | split | dsimp only))

theorem loadPage_noBody (m : Model) : NoBody (loadPage m) := by unfold loadPage; nobody

theorem enter_noBody (m : Model) : NoBody (enter m).2 := by
  unfold enter; split <;> (try split) <;> (try split) <;> dsimp only <;> first | apply loadPage_noBody | nobody

theorem goTo_noBody (m : Model) (r : Route) : NoBody (goTo m r).2 := enter_noBody _

/-! ## What each form sends -/

theorem unwrap_user (j : Lean.Json) (h : ∃ kvs, j = .obj kvs) : Decode.unwrap "user" (wrap "user" j) = .ok j := by
  obtain ⟨kvs, rfl⟩ := h; rfl
theorem unwrap_article (j : Lean.Json) (h : ∃ kvs, j = .obj kvs) : Decode.unwrap "article" (wrap "article" j) = .ok j := by
  obtain ⟨kvs, rfl⟩ := h; rfl
theorem unwrap_comment (j : Lean.Json) (h : ∃ kvs, j = .obj kvs) : Decode.unwrap "comment" (wrap "comment" j) = .ok j := by
  obtain ⟨kvs, rfl⟩ := h; rfl

theorem url_users : "/api" ++ "/users" = "/api/users" := by decide
theorem url_login : "/api" ++ "/users/login" = "/api/users/login" := by decide
theorem url_user : "/api" ++ "/user" = "/api/user" := by decide
theorem url_articles : "/api" ++ "/articles" = "/api/articles" := by decide

theorem submitRegister_accepted (m : Model) : ∀ req ∈ requests (submitRegister m).2, AcceptedBody req := by
  intro req hr
  unfold submitRegister at hr; dsimp only at hr
  split at hr
  · simp at hr
  · rename_i v h
    simp only [requests_api, List.mem_singleton] at hr; subst hr
    exact Or.inr (Or.inl ⟨v.val, rfl, url_users, rfl, ⟨unwrap_user _ ⟨_, rfl⟩, NewUser.decode_encode _⟩,
      v.property, validateNewUser_again h⟩)

theorem submitLogin_accepted (m : Model) : ∀ req ∈ requests (submitLogin m).2, AcceptedBody req := by
  intro req hr
  unfold submitLogin at hr; dsimp only at hr
  split at hr
  · simp at hr
  · rename_i v h
    simp only [requests_api, List.mem_singleton] at hr; subst hr
    exact Or.inr (Or.inr (Or.inl ⟨v.val, rfl, url_login, rfl, ⟨unwrap_user _ ⟨_, rfl⟩, LoginUser.decode_encode _⟩,
      v.property, validateLogin_again h⟩))

theorem submitSettings_accepted (m : Model) : ∀ req ∈ requests (submitSettings m).2, AcceptedBody req := by
  intro req hr
  unfold submitSettings at hr; dsimp only at hr
  split at hr
  · simp at hr
  · rename_i p h
    simp only [requests_api, List.mem_singleton] at hr; subst hr
    exact Or.inr (Or.inr (Or.inr (Or.inl ⟨_, rfl, url_user, rfl,
      ⟨unwrap_user _ ⟨_, rfl⟩, UpdateUser.decode_encode _⟩, p, h⟩)))

/-- The update the editor sends for a validated article: every field, and the tag list. -/
def fullUpdate (a : NewArticle) : UpdateArticle :=
  { title := .value a.title, description := .value a.description, body := .value a.body, tagList := .value a.tagList }

/-- A full update of a validated article passes the update validation. -/
theorem validateUpdateArticle_of_valid (v : { v : NewArticle // v.valid }) :
    ∃ p, validateUpdateArticle (fullUpdate v.val) = .ok p := by
  have hv := v.property
  simp only [NewArticle.valid, Bool.and_eq_true, Bool.not_eq_true', decide_eq_true_eq] at hv
  obtain ⟨⟨⟨⟨h1, h2⟩, h3⟩, _⟩, _⟩ := hv
  have herr : (fullUpdate v.val).errors.isEmpty = true := by
    simp [fullUpdate, UpdateArticle.errors, collect, requiredField, presentErrors, h1, h2, h3]
  have hp : (fullUpdate v.val).toPatch.valid = true := by
    have ht := cleanTags_not_blank v.val.tagList
    have hn := cleanTags_nodup v.val.tagList
    simp only [fullUpdate, UpdateArticle.toPatch, ArticlePatch.valid, Option.all, isBlank_clean, h1, h2, h3, ht,
      decide_eq_true hn, Functor.map, Option.map, Bool.not_false, Bool.and_self]
  unfold validateUpdateArticle
  exact ⟨_, by rw [if_pos herr, dif_pos hp]⟩

theorem url_article (slug : String) :
    "/api" ++ s!"/articles/{encodeSegment slug}" = s!"/api/articles/{encodeSegment slug}" := by
  simp only [toString, ← String.append_assoc]; rfl
theorem url_comments (slug : String) :
    "/api" ++ s!"/articles/{encodeSegment slug}/comments" = s!"/api/articles/{encodeSegment slug}/comments" := by
  simp only [toString, ← String.append_assoc]; rfl

theorem publish_accepted (m : Model) : ∀ req ∈ requests (publish m).2, AcceptedBody req := by
  intro req hr
  unfold publish at hr; dsimp only at hr
  split at hr
  · simp at hr
  · rename_i v h
    split at hr
    · rename_i slug _
      simp only [requests_api, List.mem_singleton] at hr; subst hr
      obtain ⟨p, hp⟩ := validateUpdateArticle_of_valid v
      exact Or.inr (Or.inr (Or.inr (Or.inr (Or.inr (Or.inl ⟨slug, fullUpdate v.val, rfl, url_article slug, rfl,
        ⟨unwrap_article _ ⟨_, rfl⟩, UpdateArticle.decode_encode _⟩, p, hp⟩)))))
    · simp only [requests_api, List.mem_singleton] at hr; subst hr
      exact Or.inr (Or.inr (Or.inr (Or.inr (Or.inl ⟨v.val, rfl, url_articles, rfl,
        ⟨unwrap_article _ ⟨_, rfl⟩, NewArticle.decode_encode _⟩, v.property, validateNewArticle_again h⟩))))

theorem postComment_accepted (m : Model) : ∀ req ∈ requests (postComment m).2, AcceptedBody req := by
  intro req hr
  unfold postComment at hr
  split at hr
  · rename_i _ _ slug v _ h
    simp only [requests_api, List.mem_singleton] at hr; subst hr
    exact Or.inr (Or.inr (Or.inr (Or.inr (Or.inr (Or.inr ⟨slug, v.val, rfl, url_comments slug, rfl,
      ⟨unwrap_comment _ ⟨_, rfl⟩, NewComment.decode_encode _⟩, v.property, validateNewComment_again h⟩)))))
  · simp at hr
  · simp at hr

theorem signedIn_noBody (m : Model) (u : User) : NoBody (signedIn m u).2 := by
  unfold signedIn; nobody

/-- **The app never sends what the server would reject.** -/
theorem update_sends_accepted : Spec.update_sends_accepted := by
  intro msg m req hreq
  have nb : ∀ {c : Cmd Msg}, NoBody c → req ∈ requests c → AcceptedBody req := fun h hr => Or.inl (h _ hr)
  cases msg with
  | submitRegister =>
    simp only [update] at hreq; split at hreq
    · simp at hreq
    · exact submitRegister_accepted m req hreq
  | submitLogin =>
    simp only [update] at hreq; split at hreq
    · simp at hreq
    · exact submitLogin_accepted m req hreq
  | submitSettings =>
    simp only [update] at hreq; split at hreq
    · simp at hreq
    · exact submitSettings_accepted m req hreq
  | publish =>
    simp only [update] at hreq; split at hreq
    · simp at hreq
    · exact publish_accepted m req hreq
  | postComment =>
    simp only [update] at hreq; split at hreq
    · simp at hreq
    · exact postComment_accepted m req hreq
  | userLoaded r =>
    simp only [update] at hreq
    split at hreq
    · exact nb (enter_noBody _) hreq
    · exact nb (NoBody.cons (NoBody.storageRemove _) (NoBody.cons (enter_noBody _) NoBody.nil)) hreq
  | loggedIn r =>
    simp only [update] at hreq
    split at hreq
    · exact nb (NoBody.cons (signedIn_noBody _ _) (NoBody.cons (NoBody.pushUrl _) NoBody.nil)) hreq
    · simp at hreq
  | settingsSaved r =>
    simp only [update] at hreq
    split at hreq
    · exact nb (NoBody.cons (signedIn_noBody _ _) (NoBody.cons (NoBody.pushUrl _) NoBody.nil)) hreq
    · simp at hreq
  | tokenLoaded t =>
    cases t with
    | none => exact nb (enter_noBody _) hreq
    | some t => exact nb (NoBody.api _ _ _ _) hreq
  | urlChanged route next =>
    simp only [update] at hreq
    split at hreq
    · simp at hreq
    · exact nb (goTo_noBody _ _) hreq
  | _ =>
    simp only [update] at hreq
    (repeat' split at hreq) <;> simp at hreq <;> (subst hreq; exact Or.inl rfl)

/-! ## The state's invariants -/

theorem busy_blocks_submit : Spec.busy_blocks_submit := by
  intro m h
  simp [update, h]

deriving instance ReflBEq, LawfulBEq for Feed
deriving instance ReflBEq, LawfulBEq for Route

theorem stale_answers_ignored : Spec.stale_answers_ignored := by
  intro m route a h
  have : (route != m.route) = true := bne_iff_ne.mpr h
  simp [update, this]

theorem enter_auth (m : Model) : (enter m).1.auth = m.auth ∧ (enter m).1.token = m.token := by
  unfold enter; split <;> (try split) <;> (try split) <;> simp

theorem token_agrees_preserved : Spec.token_agrees_preserved := by
  intro msg m h hload u hu
  cases msg with
  | tokenLoaded t =>
    cases t with
    | none => simp [update, enter_auth] at hu
    | some t => simp [update, hload _ rfl] at hu
  | userLoaded r =>
    simp only [update] at hu ⊢
    split at hu
    · rw [(enter_auth _).1] at hu; rw [(enter_auth _).2]; simp at hu ⊢; subst hu; rfl
    · rename_i heq; simp only at hu ⊢
      generalize hx : enter _ = x at hu ⊢
      have := enter_auth { m with auth := .guest, token := none }
      rw [hx] at this; obtain ⟨x1, x2⟩ := x; simp only at hu this; rw [this.1] at hu; cases hu
  | urlChanged route next =>
    simp only [update] at hu ⊢
    by_cases hr : (route == m.route) = true
    · simp only [hr, ↓reduceIte] at hu ⊢; exact h u hu
    · simp only [hr, Bool.false_eq_true, ↓reduceIte] at hu ⊢
      unfold goTo at hu ⊢; rw [(enter_auth _).1] at hu; rw [(enter_auth _).2]; exact h u hu
  | loggedIn r =>
    simp only [update] at hu ⊢
    split at hu
    · simp [signedIn] at hu ⊢; subst hu; rfl
    · exact h u hu
  | settingsSaved r =>
    simp only [update] at hu ⊢
    split at hu
    · simp [signedIn] at hu ⊢; subst hu; rfl
    · exact h u hu
  | logout => simp [update] at hu
  | _ =>
    simp only [update] at hu ⊢
    (repeat' split at hu) <;> (repeat' split) <;>
      simp_all [TokenAgrees, submitLogin, submitRegister, submitSettings, publish, postComment, replaceArticle, replaceProfile] <;>
      (repeat' split at hu) <;> (try simp_all)

theorem logout_forgets : Spec.logout_forgets := fun _ => ⟨rfl, rfl, rfl⟩

theorem guards : Spec.guards := by
  intro m
  refine ⟨fun hg hn => ?_, fun u hu hg => ?_⟩
  · unfold enter
    split
    · simp_all
    · simp [hn]
    · simp_all
  · unfold enter; rw [hu]; simp [hg]

theorem hydrated_only_enables : Spec.hydrated_only_enables := fun _ => rfl

end Conduit.Proofs
