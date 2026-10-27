/-
Request validation (`Conduit/Validation.lean`), which the server runs on
every request body and the browser app runs before it sends a form.

- What passes really satisfies the rules: the handlers take the validated
  subtypes, so they only ever see requests with these properties.
- What fails is a 422 whose body names at least one field, each field with
  at least one message (the spec's `{"errors": {"field": ["message"]}}`).
-/
import Conduit.Validation
import Proofs.Favorites

namespace Conduit.Proofs

theorem usernameErrors_nil {s : String} : (usernameErrors s).isEmpty = true ↔ isBlank s = false ∧ (clean s).length ≤ maxUsername := by
  unfold usernameErrors; split <;> (try split) <;> simp_all <;> omega

theorem emailErrors_nil {s : String} : (emailErrors s).isEmpty = true ↔ isBlank s = false ∧ emailOk (clean s) = true := by
  unfold emailErrors; split <;> (try split) <;> simp_all

theorem passwordErrors_nil {s : String} :
    (passwordErrors s).isEmpty = true ↔ minPassword ≤ s.length ∧ s.length ≤ maxPassword := by
  unfold passwordErrors minPassword maxPassword
  split
  · rename_i h; simp [String.isEmpty_iff] at h; subst h; simp
  · split <;> (try split) <;> simp_all <;> omega

/-- **A registration that passes validation is a valid one**: a username
that is not blank and at most 64 characters, a plausible email, and a
password of 8 to 128 characters. -/
theorem validateNewUser_ok {u : NewUser} {v : { v : NewUser // v.valid }} (_ : validateNewUser u = .ok v) :
    isBlank v.val.username = false ∧ (clean v.val.username).length ≤ maxUsername ∧
    emailOk (clean v.val.email) = true ∧ minPassword ≤ v.val.password.length ∧ v.val.password.length ≤ maxPassword := by
  have h := v.property
  simp only [NewUser.valid, Bool.and_eq_true] at h
  obtain ⟨⟨hu, he⟩, hp⟩ := h
  rw [usernameErrors_nil] at hu; rw [emailErrors_nil] at he; rw [passwordErrors_nil] at hp
  exact ⟨hu.1, hu.2, he.2, hp.1, hp.2⟩

/-- `collect` keeps only fields with messages. -/
theorem collect_messages {fields : List (String × Check)} : ∀ f ∈ collect fields, f.2 ≠ [] := by
  intro f hf
  simp only [collect, List.mem_filter, Bool.not_eq_eq_eq_not, Bool.not_true, List.isEmpty_eq_false_iff] at hf
  exact hf.2

theorem collect_ne_nil {fields : List (String × Check)} (h : ∃ f ∈ fields, f.2 ≠ []) : collect fields ≠ [] := by
  obtain ⟨f, hf, hne⟩ := h
  unfold collect
  intro hnil
  have : f ∈ fields.filter (fun f => !f.2.isEmpty) := by simp [hf, hne]
  rw [hnil] at this; simp at this

/-- What a well-formed validation error is: status 422, at least one field,
every field with at least one message. -/
def WellFormed422 (e : ApiError) : Prop := e.status = 422 ∧ e.errors ≠ [] ∧ ∀ f ∈ e.errors, f.2 ≠ []

theorem invalid_wellFormed {fields : List (String × Check)} (h : ∃ f ∈ fields, f.2 ≠ []) :
    WellFormed422 (.invalid (collect fields)) :=
  ⟨rfl, collect_ne_nil h, collect_messages⟩

/-- **A rejected registration says what is wrong.** -/
theorem validateNewUser_error {u : NewUser} {e : ApiError} (h : validateNewUser u = .error e) : WellFormed422 e := by
  unfold validateNewUser at h
  dsimp only at h
  split at h
  · cases h
  · rename_i hv
    cases h
    apply invalid_wellFormed
    by_cases hu : (usernameErrors u.normalize.username).isEmpty = true
    · by_cases he : (emailErrors u.normalize.email).isEmpty = true
      · have hp : (passwordErrors u.normalize.password).isEmpty = false := by
          cases hq : (passwordErrors u.normalize.password).isEmpty
          · rfl
          · exact absurd (by simp [NewUser.valid, hu, he, hq]) hv
        exact ⟨("password", passwordErrors u.normalize.password), by simp, by simpa [List.isEmpty_iff] using hp⟩
      · exact ⟨("email", emailErrors u.normalize.email), by simp, by simpa [List.isEmpty_iff] using he⟩
    · exact ⟨("username", usernameErrors u.normalize.username), by simp, by simpa [List.isEmpty_iff] using hu⟩

/-- A login that passes has an email and a password. -/
theorem validateLogin_ok {u : LoginUser} {v : { v : LoginUser // v.valid }} (_ : validateLogin u = .ok v) :
    isBlank v.val.email = false ∧ v.val.password ≠ "" := by
  have h := v.property
  simp only [LoginUser.valid, Bool.and_eq_true, Bool.not_eq_true'] at h
  exact ⟨h.1, by simpa [String.isEmpty_iff] using h.2⟩

/-- Cleaned tags are never blank … -/
theorem cleanTags_not_blank (tags : List String) : (cleanTags tags).all (!isBlank ·) = true := by
  simp only [cleanTags, List.all_eq_true, List.mem_eraseDups, List.mem_filter]
  intro t ht; exact ht.2

/-- … and never repeated. -/
theorem cleanTags_nodup (tags : List String) : (cleanTags tags).Nodup := nodup_eraseDups _

/-- **An article that passes validation has a title, a description and a
body, and its tags are neither blank nor repeated.** -/
theorem validateNewArticle_ok {a : NewArticle} {v : { v : NewArticle // v.valid }} (_ : validateNewArticle a = .ok v) :
    isBlank v.val.title = false ∧ isBlank v.val.description = false ∧ isBlank v.val.body = false ∧
    v.val.tagList.all (!isBlank ·) = true ∧ v.val.tagList.Nodup := by
  have h := v.property
  simp only [NewArticle.valid, Bool.and_eq_true, Bool.not_eq_true', decide_eq_true_eq] at h
  exact ⟨h.1.1.1.1, h.1.1.1.2, h.1.1.2, h.1.2, h.2⟩

/-- **A rejected article says what is wrong**: the tags never make an
article invalid (they are cleaned), so a missing title, description or body
is always named. -/
theorem validateNewArticle_error {a : NewArticle} {e : ApiError} (h : validateNewArticle a = .error e) : WellFormed422 e := by
  unfold validateNewArticle at h
  dsimp only at h
  split at h
  · cases h
  · rename_i hv
    cases h
    apply invalid_wellFormed
    have ht := cleanTags_not_blank a.tagList
    have hn := cleanTags_nodup a.tagList
    by_cases h1 : isBlank a.normalize.title = true
    · exact ⟨("title", ["can't be blank"]), by simp [presentErrors, h1], by simp⟩
    · by_cases h2 : isBlank a.normalize.description = true
      · exact ⟨("description", ["can't be blank"]), by simp [presentErrors, h2], by simp⟩
      · by_cases h3 : isBlank a.normalize.body = true
        · exact ⟨("body", ["can't be blank"]), by simp [presentErrors, h3], by simp⟩
        · exfalso; apply hv
          simp only [NewArticle.valid, Bool.and_eq_true, Bool.not_eq_true', decide_eq_true_eq]
          simp only [Bool.not_eq_true] at h1 h2 h3
          exact ⟨⟨⟨⟨h1, h2⟩, h3⟩, ht⟩, hn⟩

/-- A comment that passes has a body. -/
theorem validateNewComment_ok {c : NewComment} {v : { v : NewComment // v.valid }} (_ : validateNewComment c = .ok v) :
    isBlank v.val.body = false := by
  have h := v.property
  simpa [NewComment.valid] using h

/-- A rejected comment is `{"errors": {"body": ["can't be blank"]}}`. -/
theorem validateNewComment_error {c : NewComment} {e : ApiError} (h : validateNewComment c = .error e) :
    e = .blank "body" := by
  unfold validateNewComment at h
  split at h <;> cases h; rfl

/-- **A user update that passes validation only sets valid values**:
emails, usernames and passwords obey the registration rules, and `bio`/`image`
are set to text or cleared, never to `""` (the spec's normalization). -/
theorem validateUpdateUser_ok {u : UpdateUser} {p : { p : UserPatch // p.valid }} (_ : validateUpdateUser u = .ok p) :
    p.val.email.all (fun e => (emailErrors e).isEmpty) = true ∧
    p.val.username.all (fun n => (usernameErrors n).isEmpty) = true ∧
    p.val.password.all (fun s => (passwordErrors s).isEmpty) = true ∧
    p.val.bio.all (fun b => b.all (! ·.isEmpty)) = true ∧ p.val.image.all (fun i => i.all (! ·.isEmpty)) = true := by
  have h := p.property
  simp only [UserPatch.valid, Bool.and_eq_true] at h
  exact ⟨h.1.1.1.1, h.1.1.1.2, h.1.1.2, h.1.2, h.2⟩

/-- `""` and `null` both clear `bio` and `image`. -/
theorem nullable_empty : nullable (.value "") = some none ∧ nullable .null = some none := ⟨rfl, rfl⟩

/-! ## Validating twice: what passed once passes again

The browser app sends what passed validation; the server validates it again.
These show the second validation accepts it unchanged (cleaning is
idempotent), so the server stores exactly what the app validated. -/

theorem dropWhile_of_head {α : Type} (p : α → Bool) {l : List α} (h : ∀ x, l.head? = some x → p x = false) :
    l.dropWhile p = l := by
  cases l with
  | nil => rfl
  | cons x xs => simp [h x rfl]

theorem dropWhile_head_false {α : Type} (p : α → Bool) (l : List α) :
    ∀ x, (l.dropWhile p).head? = some x → p x = false := by
  intro x hx
  have := List.head?_dropWhile_not p l
  rw [hx] at this; exact this

/-- Trimming twice is trimming once. -/
theorem trim_idem {α : Type} (p : α → Bool) (l : List α) :
    ((((((l.dropWhile p).reverse.dropWhile p).reverse).dropWhile p).reverse.dropWhile p).reverse) =
      ((l.dropWhile p).reverse.dropWhile p).reverse := by
  generalize hA : l.dropWhile p = A
  generalize hB : A.reverse.dropWhile p = B
  have hpre : B.reverse <+: A := by
    have : B <:+ A.reverse := hB ▸ List.dropWhile_suffix p
    simpa using this.reverse
  have h1 : B.reverse.dropWhile p = B.reverse := by
    apply dropWhile_of_head
    intro x hx
    have hne : B.reverse ≠ [] := by intro h; simp [h] at hx
    have hAx : A.head? = some x := by
      obtain ⟨t, rfl⟩ := hpre
      cases hb : B.reverse with
      | nil => exact absurd hb hne
      | cons y ys => rw [hb] at hx; simp at hx; subst hx; simp
    exact dropWhile_head_false p l x (by rw [hA]; exact hAx)
  have h2 : B.dropWhile p = B := by
    apply dropWhile_of_head
    intro x hx
    exact dropWhile_head_false p A.reverse x (by rw [hB]; exact hx)
  rw [h1, List.reverse_reverse, h2]

theorem clean_idem (s : String) : clean (clean s) = clean s := by
  unfold clean
  rw [String.toList_ofList, trim_idem]

theorem eraseDups_of_nodup {α : Type} [BEq α] [LawfulBEq α] : ∀ (l : List α), l.Nodup → l.eraseDups = l
  | [] => fun _ => rfl
  | a :: as => fun h => by
    rw [List.eraseDups_cons]
    rw [List.nodup_cons] at h
    have hf : as.filter (fun b => !b == a) = as := by
      rw [List.filter_eq_self]
      intro b hb
      have : b ≠ a := fun e => h.1 (e ▸ hb)
      simp [this]
    have : (as.filter fun b => !b == a).length < as.length + 1 :=
      Nat.lt_add_one_of_le (List.length_filter_le _ as)
    rw [hf, eraseDups_of_nodup as h.2]
termination_by l => l.length

theorem cleanTags_idem (tags : List String) : cleanTags (cleanTags tags) = cleanTags tags := by
  have hclean : (cleanTags tags).map clean = cleanTags tags := by
    rw [List.map_congr_left (g := id) ?_, List.map_id]
    intro x hx
    simp only [cleanTags, List.mem_eraseDups, List.mem_filter, List.mem_map] at hx
    obtain ⟨⟨y, _, rfl⟩, _⟩ := hx
    exact clean_idem y
  have hfilter : (cleanTags tags).filter (!isBlank ·) = cleanTags tags := by
    rw [List.filter_eq_self]
    intro x hx
    have := cleanTags_not_blank tags
    rw [List.all_eq_true] at this
    exact this x hx
  show (((cleanTags tags).map clean).filter (!isBlank ·)).eraseDups = cleanTags tags
  rw [hclean, hfilter, eraseDups_of_nodup _ (cleanTags_nodup tags)]

/-- **A registration that passed validation passes it again, unchanged.** -/
theorem validateNewUser_again {u : NewUser} {v : { v : NewUser // v.valid }} (h : validateNewUser u = .ok v) :
    validateNewUser v.val = .ok v := by
  unfold validateNewUser at h ⊢
  dsimp only at h ⊢
  split at h
  · rename_i hv
    cases h
    have hn : (u.normalize).normalize = u.normalize := by simp [NewUser.normalize, clean_idem]
    simp only [hn, hv, dite_true]
  · cases h

/-- **A login that passed validation passes it again, unchanged.** -/
theorem validateLogin_again {u : LoginUser} {v : { v : LoginUser // v.valid }} (h : validateLogin u = .ok v) :
    validateLogin v.val = .ok v := by
  unfold validateLogin at h ⊢
  dsimp only at h ⊢
  split at h
  · rename_i hv
    cases h
    simp only [clean_idem, hv, dite_true]
  · cases h

/-- **An article that passed validation passes it again, unchanged.** -/
theorem validateNewArticle_again {a : NewArticle} {v : { v : NewArticle // v.valid }} (h : validateNewArticle a = .ok v) :
    validateNewArticle v.val = .ok v := by
  unfold validateNewArticle at h ⊢
  dsimp only at h ⊢
  split at h
  · rename_i hv
    cases h
    have hn : (a.normalize).normalize = a.normalize := by
      simp [NewArticle.normalize, clean_idem, cleanTags_idem]
    simp only [hn, hv, dite_true]
  · cases h

/-- A comment that passed validation passes it again. -/
theorem validateNewComment_again {c : NewComment} {v : { v : NewComment // v.valid }} (h : validateNewComment c = .ok v) :
    validateNewComment v.val = .ok v := by
  unfold validateNewComment at h ⊢
  split at h
  · rename_i hv; cases h; simp only [hv, dite_true]
  · cases h

end Conduit.Proofs
