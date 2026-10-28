/-
The browser app (`Frontend/Update.lean`): it never sends a form the
server's validation would reject. Each submit either sends nothing (and
shows the validation's messages) or sends exactly the encoding of a request
that passed the same `validate…` function the server runs.
-/
import Frontend.Update
import Proofs.Validation
import Proofs.Json

namespace Conduit.Proofs
open Conduit.Frontend Lasm.UI

/-- **Registration**: nothing is sent, or a validated registration is. -/
theorem submitRegister_sends_valid (m : Model) :
    (submitRegister m).2.effects = [] ∨
    ∃ v : { v : NewUser // v.valid },
      validateNewUser { username := m.form.username, email := m.form.email, password := m.form.password } = .ok v ∧
      (submitRegister m).2 = api m "POST" "/users" (some (wrap "user" v.val.encode)) .loggedIn := by
  unfold submitRegister
  dsimp only
  cases h : validateNewUser { username := m.form.username, email := m.form.email, password := m.form.password } with
  | error e => left; rfl
  | ok v => exact Or.inr ⟨v, rfl, rfl⟩

/-- **Login**: nothing is sent, or a validated login is. -/
theorem submitLogin_sends_valid (m : Model) :
    (submitLogin m).2.effects = [] ∨
    ∃ v : { v : LoginUser // v.valid },
      validateLogin { email := m.form.email, password := m.form.password } = .ok v ∧
      (submitLogin m).2 = api m "POST" "/users/login" (some (wrap "user" v.val.encode)) .loggedIn := by
  unfold submitLogin
  dsimp only
  cases h : validateLogin { email := m.form.email, password := m.form.password } with
  | error e => left; rfl
  | ok v => exact Or.inr ⟨v, rfl, rfl⟩

/-- **Comments**: nothing is sent, or a comment with a body is. -/
theorem postComment_sends_valid (m : Model) :
    (postComment m).2.effects = [] ∨
    ∃ slug, ∃ v : { v : NewComment // v.valid },
      validateNewComment { body := m.form.comment } = .ok v ∧
      (postComment m).2 = api m "POST" s!"/articles/{encodeSegment slug}/comments" (some (wrap "comment" v.val.encode)) .commentPosted := by
  unfold postComment
  cases h : validateNewComment { body := m.form.comment } with
  | error e => left; cases m.route <;> rfl
  | ok v =>
    cases hr : m.route with
    | article slug => exact Or.inr ⟨slug, v, rfl, by simp [hr]⟩
    | _ => left; simp [hr]; rfl

/-- **Publishing**: nothing is sent, or an article that passed the server's
validation is, as a new article (`POST`) or as a full update (`PUT`). -/
theorem publish_sends_valid (m : Model) :
    (publish m).2.effects = [] ∨
    ∃ (req : NewArticle) (v : { v : NewArticle // v.valid }), validateNewArticle req = .ok v ∧
      ((publish m).2 = api (publish m).1 "POST" "/articles" (some (wrap "article" v.val.encode)) .published ∨
       ∃ slug, (publish m).2 = api (publish m).1 "PUT" s!"/articles/{encodeSegment slug}"
         (some (wrap "article" (UpdateArticle.encode {
            title := .value v.val.title, description := .value v.val.description,
            body := .value v.val.body, tagList := .value v.val.tagList }))) .published) := by
  unfold publish
  dsimp only
  generalize (if m.form.tagInput.trimAscii.isEmpty = true then m.form else _) = form
  cases h : validateNewArticle {
      title := form.title, description := form.description, body := form.body, tagList := form.tags } with
  | error e => left; rfl
  | ok v =>
    refine Or.inr ⟨_, v, h, ?_⟩
    cases hr : m.route with
    | editor slug =>
      cases slug with
      | some s => exact Or.inr ⟨s, by simp [hr]⟩
      | none => exact Or.inl (by simp [hr])
    | _ => exact Or.inl (by simp [hr])

/-! ## What the app sends, the server accepts

The server unwraps the body (`{"user": …}`), decodes it with the same
module, and validates it again. For what the app sends, each step gives back
exactly what the app validated. -/

theorem unwrap_user (j : Lean.Json) (h : ∃ kvs, j = .obj kvs) : Decode.unwrap "user" (wrap "user" j) = .ok j := by
  obtain ⟨kvs, rfl⟩ := h; rfl
theorem unwrap_article (j : Lean.Json) (h : ∃ kvs, j = .obj kvs) : Decode.unwrap "article" (wrap "article" j) = .ok j := by
  obtain ⟨kvs, rfl⟩ := h; rfl
theorem unwrap_comment (j : Lean.Json) (h : ∃ kvs, j = .obj kvs) : Decode.unwrap "comment" (wrap "comment" j) = .ok j := by
  obtain ⟨kvs, rfl⟩ := h; rfl

/-- **A registration the app sends is decoded and accepted by the server as
the very registration the app validated.** -/
theorem registration_accepted {u : NewUser} {v : { v : NewUser // v.valid }} (h : validateNewUser u = .ok v) :
    Decode.unwrap "user" (wrap "user" v.val.encode) = .ok v.val.encode ∧
    NewUser.decode v.val.encode = .ok v.val ∧ validateNewUser v.val = .ok v :=
  ⟨unwrap_user _ ⟨_, rfl⟩, NewUser.decode_encode _, validateNewUser_again h⟩

theorem login_accepted {u : LoginUser} {v : { v : LoginUser // v.valid }} (h : validateLogin u = .ok v) :
    Decode.unwrap "user" (wrap "user" v.val.encode) = .ok v.val.encode ∧
    LoginUser.decode v.val.encode = .ok v.val ∧ validateLogin v.val = .ok v :=
  ⟨unwrap_user _ ⟨_, rfl⟩, LoginUser.decode_encode _, validateLogin_again h⟩

/-- **A new article the app sends is accepted by the server as the article
the app validated.** -/
theorem article_accepted {a : NewArticle} {v : { v : NewArticle // v.valid }} (h : validateNewArticle a = .ok v) :
    Decode.unwrap "article" (wrap "article" v.val.encode) = .ok v.val.encode ∧
    NewArticle.decode v.val.encode = .ok v.val ∧ validateNewArticle v.val = .ok v :=
  ⟨unwrap_article _ ⟨_, rfl⟩, NewArticle.decode_encode _, validateNewArticle_again h⟩

theorem comment_accepted {c : NewComment} {v : { v : NewComment // v.valid }} (h : validateNewComment c = .ok v) :
    Decode.unwrap "comment" (wrap "comment" v.val.encode) = .ok v.val.encode ∧
    NewComment.decode v.val.encode = .ok v.val ∧ validateNewComment v.val = .ok v :=
  ⟨unwrap_comment _ ⟨_, rfl⟩, NewComment.decode_encode _, validateNewComment_again h⟩

end Conduit.Proofs
