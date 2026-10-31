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
import Proofs.Spec

namespace Conduit.Proofs
open Spec

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

/-- Cleaned tags are never blank … -/
theorem cleanTags_not_blank (tags : List String) : (cleanTags tags).all (!isBlank ·) = true := by
  simp only [cleanTags, List.all_eq_true, List.mem_eraseDups, List.mem_filter]
  intro t ht; exact ht.2

/-- … and never repeated. -/
theorem cleanTags_nodup (tags : List String) : (cleanTags tags).Nodup := nodup_eraseDups _

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

/-- A rejected comment is `{"errors": {"body": ["can't be blank"]}}`. -/
theorem validateNewComment_error {c : NewComment} {e : ApiError} (h : validateNewComment c = .error e) :
    e = .blank "body" := by
  unfold validateNewComment at h
  split at h <;> cases h; rfl

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

/-! ## Trimming keeps what matters -/

theorem mem_dropWhile_of_not {α : Type} (p : α → Bool) : ∀ {l : List α} {x : α}, x ∈ l → p x = false → x ∈ l.dropWhile p
  | [], _, h, _ => by simp at h
  | a :: l, x, h, hx => by
    simp only [List.dropWhile_cons]
    split
    · rename_i ha
      rcases List.mem_cons.mp h with rfl | h
      · rw [hx] at ha; cases ha
      · exact mem_dropWhile_of_not p h hx
    · exact h

/-- Trimming keeps every character that is not whitespace … -/
theorem mem_clean {s : String} {c : Char} (h : c ∈ s.toList) (hc : c.isWhitespace = false) : c ∈ (clean s).toList := by
  unfold clean
  rw [String.toList_ofList, List.mem_reverse]
  exact mem_dropWhile_of_not _ (List.mem_reverse.mpr (mem_dropWhile_of_not _ h hc)) hc

/-- … and adds nothing. -/
theorem clean_sub {s : String} {c : Char} (h : c ∈ (clean s).toList) : c ∈ s.toList := by
  unfold clean at h
  rw [String.toList_ofList, List.mem_reverse] at h
  exact (List.dropWhile_suffix _).subset (List.mem_reverse.mp ((List.dropWhile_suffix _).subset h))

/-- A text is blank exactly when its trimmed form is. -/
theorem isBlank_clean (s : String) : isBlank (clean s) = isBlank s := by
  unfold isBlank
  apply Bool.eq_iff_iff.mpr
  simp only [List.all_eq_true]
  constructor
  · intro h c hc
    cases hw : c.isWhitespace
    · exact absurd (h c (mem_clean hc hw)) (by simp [hw])
    · rfl
  · intro h c hc; exact h c (clean_sub hc)

/-! ## The specification of each validation -/

theorem validateNewUser_spec : Spec.validateNewUser_spec := by
  intro u
  refine ⟨fun v h => ?_, ?_⟩
  · unfold validateNewUser at h; dsimp only at h
    split at h
    · cases h; rfl
    · cases h
  · have hiff : (∃ v, validateNewUser u = .ok v) ↔ u.normalize.valid = true := by
      unfold validateNewUser; dsimp only
      constructor
      · rintro ⟨v, h⟩; split at h
        · assumption
        · cases h
      · intro h; exact ⟨⟨_, h⟩, dif_pos h⟩
    rw [hiff]
    simp only [NewUser.valid, NewUser.normalize, Bool.and_eq_true, usernameErrors_nil, emailErrors_nil,
      passwordErrors_nil, isBlank_clean, clean_idem]
    constructor
    · rintro ⟨⟨⟨h1, h2⟩, h3, h4⟩, h5, h6⟩; exact ⟨h1, h2, h3, h4, h5, h6⟩
    · rintro ⟨h1, h2, h3, h4, h5, h6⟩; exact ⟨⟨⟨h1, h2⟩, h3, h4⟩, h5, h6⟩

theorem validateLogin_spec : Spec.validateLogin_spec := by
  intro u
  refine ⟨fun v h => ?_, ?_⟩
  · unfold validateLogin at h; dsimp only at h
    split at h
    · cases h; rfl
    · cases h
  · have hiff : (∃ v, validateLogin u = .ok v) ↔ ({ u with email := clean u.email } : LoginUser).valid = true := by
      unfold validateLogin; dsimp only
      constructor
      · rintro ⟨v, h⟩; split at h
        · assumption
        · cases h
      · intro h; exact ⟨⟨_, h⟩, dif_pos h⟩
    rw [hiff]
    simp [LoginUser.valid, isBlank_clean, String.isEmpty_iff]

theorem ok_iff_of_dite {α ε : Type} {q : α → Bool} {x : α} {e : ε} :
    (∃ v, (if h : q x = true then .ok ⟨x, h⟩ else .error e : Except ε {v // q v = true}) = .ok v) ↔ q x = true := by
  by_cases h : q x = true
  · simp [h]
  · simp [h]

theorem newArticle_valid_iff (a : NewArticle) :
    a.normalize.valid = true ↔ (isBlank a.title = false ∧ isBlank a.description = false ∧ isBlank a.body = false) := by
  have ht := cleanTags_not_blank a.tagList
  have hn := cleanTags_nodup a.tagList
  show (!isBlank (clean a.title) && !isBlank (clean a.description) && !isBlank a.body &&
    (cleanTags a.tagList).all (!isBlank ·) && decide (cleanTags a.tagList).Nodup) = true ↔ _
  rw [ht, decide_eq_true hn]
  simp only [Bool.and_true, Bool.and_eq_true, Bool.not_eq_true', isBlank_clean, and_assoc]

theorem validateNewArticle_spec : Spec.validateNewArticle_spec := by
  intro a
  refine ⟨fun v h => ?_, ?_⟩
  · unfold validateNewArticle at h; dsimp only at h
    split at h
    · cases h; rfl
    · cases h
  · rw [← newArticle_valid_iff]
    exact ok_iff_of_dite

theorem validateNewComment_spec : Spec.validateNewComment_spec := by
  intro c
  refine ⟨fun v h => ?_, ?_, fun err h => validateNewComment_error h⟩
  · unfold validateNewComment at h
    split at h
    · cases h; rfl
    · cases h
  · unfold validateNewComment
    constructor
    · rintro ⟨v, h⟩; split at h
      · rename_i hv; simpa [NewComment.valid] using hv
      · cases h
    · intro h; exact ⟨⟨c, by simpa [NewComment.valid] using h⟩, dif_pos _⟩

theorem validateLogin_error {u : LoginUser} {err : ApiError} (h : validateLogin u = .error err) : WellFormed422 err := by
  unfold validateLogin at h; dsimp only at h
  split at h
  · cases h
  · rename_i hv
    cases h
    apply invalid_wellFormed
    by_cases he : isBlank (clean u.email) = true
    · exact ⟨("email", presentErrors (clean u.email)), by simp, by simp [presentErrors, he]⟩
    · have hp : u.password.isEmpty = true := by
        cases hq : u.password.isEmpty
        · exact absurd (by simp [LoginUser.valid, hq, he]) hv
        · rfl
      exact ⟨("password", ["can't be blank"]), by simp [hp], by simp⟩

theorem validateUpdateUser_error {u : UpdateUser} {err : ApiError} (h : validateUpdateUser u = .error err) :
    WellFormed422 err := by
  unfold validateUpdateUser at h; dsimp only at h
  split at h
  · split at h
    · cases h
    · cases h; exact ⟨rfl, by simp [ApiError.invalid], by simp [ApiError.invalid]⟩
  · rename_i hne
    cases h
    refine ⟨rfl, by simpa [ApiError.invalid, List.isEmpty_iff] using hne, collect_messages⟩

theorem validateUpdateArticle_error {a : UpdateArticle} {err : ApiError} (h : validateUpdateArticle a = .error err) :
    WellFormed422 err := by
  unfold validateUpdateArticle at h; dsimp only at h
  split at h
  · split at h
    · cases h
    · cases h; exact ⟨rfl, by simp [ApiError.invalid], by simp [ApiError.invalid]⟩
  · rename_i hne
    cases h
    refine ⟨rfl, by simpa [ApiError.invalid, List.isEmpty_iff] using hne, collect_messages⟩

theorem validation_errors_wellFormed : Spec.validation_errors_wellFormed :=
  ⟨fun _ _ h => validateNewUser_error h, fun _ _ h => validateLogin_error h, fun _ _ h => validateNewArticle_error h,
   fun _ _ h => validateUpdateUser_error h, fun _ _ h => validateUpdateArticle_error h⟩

theorem mem_collect {fields : List (String × Check)} {f : String × Check} (h : f ∈ fields) (hf : f.2 ≠ []) :
    f ∈ collect fields := by
  unfold collect; simp [h, hf]

theorem blank_fields_named : Spec.blank_fields_named := by
  refine ⟨fun u hb => ?_, fun u hb => ?_, fun u hb => ?_, fun u hb => ?_, fun u hb => ?_, fun a hb => ?_,
    fun a hb => ?_, fun a hb => ?_⟩
  · have hu : usernameErrors (clean u.username) = ["can't be blank"] := by simp [usernameErrors, isBlank_clean, hb]
    have hv : ¬ u.normalize.valid = true := by simp [NewUser.valid, NewUser.normalize, hu]
    unfold validateNewUser; dsimp only; rw [dif_neg hv]
    exact ⟨_, rfl, by simp [ApiError.invalid, NewUser.errors, collect, NewUser.normalize, hu]⟩
  · have hu : emailErrors (clean u.email) = ["can't be blank"] := by simp [emailErrors, isBlank_clean, hb]
    have hv : ¬ u.normalize.valid = true := by simp [NewUser.valid, NewUser.normalize, hu]
    unfold validateNewUser; dsimp only; rw [dif_neg hv]
    exact ⟨_, rfl, by simp [ApiError.invalid, NewUser.errors, collect, NewUser.normalize, hu]⟩
  · have hu : passwordErrors u.password = ["can't be blank"] := by simp [passwordErrors, hb]
    have hv : ¬ u.normalize.valid = true := by simp [NewUser.valid, NewUser.normalize, hu]
    unfold validateNewUser; dsimp only; rw [dif_neg hv]
    exact ⟨_, rfl, by simp [ApiError.invalid, NewUser.errors, collect, NewUser.normalize, hu]⟩
  · have hu : presentErrors (clean u.email) = ["can't be blank"] := by simp [presentErrors, isBlank_clean, hb]
    have hv : ¬ ({ u with email := clean u.email } : LoginUser).valid = true := by
      simp [LoginUser.valid, isBlank_clean, hb]
    unfold validateLogin; dsimp only; rw [dif_neg hv]
    exact ⟨_, rfl, by simp [ApiError.invalid, LoginUser.errors, collect, hu]⟩
  · have hv : ¬ ({ u with email := clean u.email } : LoginUser).valid = true := by simp [LoginUser.valid, hb]
    unfold validateLogin; dsimp only; rw [dif_neg hv]
    exact ⟨_, rfl, by simp [ApiError.invalid, LoginUser.errors, collect, hb]⟩
  all_goals
    have hv : ¬ a.normalize.valid = true := by
      rw [newArticle_valid_iff]; simp [hb]
    unfold validateNewArticle; rw [dif_neg hv]
  · exact ⟨_, rfl, by simp [ApiError.invalid, NewArticle.errors, collect, NewArticle.normalize, presentErrors, isBlank_clean, hb]⟩
  · exact ⟨_, rfl, by simp [ApiError.invalid, NewArticle.errors, collect, NewArticle.normalize, presentErrors, isBlank_clean, hb]⟩
  · exact ⟨_, rfl, by simp [ApiError.invalid, NewArticle.errors, collect, NewArticle.normalize, presentErrors, hb]⟩

theorem validateUpdateUser_spec : Spec.validateUpdateUser_spec := by
  intro u
  refine ⟨fun p h => ?_, fun hn => ?_, fun hb => ?_, fun hi => ?_⟩
  · have hp := p.property
    simp only [UserPatch.valid, Bool.and_eq_true] at hp
    unfold validateUpdateUser at h; dsimp only at h
    split at h
    · split at h
      · cases h; exact ⟨rfl, hp.1.1.1.1, hp.1.1.1.2, hp.1.1.2⟩
      · cases h
    · cases h
  · have hne : u.errors.isEmpty = false := by
      rcases hn with h | h | h | h | h | h <;>
        simp [UpdateUser.errors, collect, h, requiredField, emailErrors, usernameErrors, passwordErrors, isBlank]
    unfold validateUpdateUser; dsimp only
    rw [if_neg (by simp [hne])]
    exact ⟨_, rfl, rfl⟩
  · rcases hb with h | h <;> simp [UpdateUser.toPatch, h, nullable]
  · rcases hi with h | h <;> simp [UpdateUser.toPatch, h, nullable]

theorem validateUpdateArticle_spec : Spec.validateUpdateArticle_spec := by
  intro a
  refine ⟨fun p h => ?_, fun hn => ?_⟩
  · have hpv : p.val = a.toPatch := by
      unfold validateUpdateArticle at h; dsimp only at h
      split at h
      · split at h
        · cases h; rfl
        · cases h
      · cases h
    refine ⟨hpv, fun ht => ?_, fun ts ht => ?_⟩
    · rw [hpv]; simp [UpdateArticle.toPatch, ht]
    · rw [hpv]; simp [UpdateArticle.toPatch, ht]
  · have hne : a.errors.isEmpty = false := by
      rcases hn with h | h | h | h <;> simp [UpdateArticle.errors, collect, h, requiredField]
    unfold validateUpdateArticle; dsimp only
    rw [if_neg (by simp [hne])]
    exact ⟨_, rfl, rfl⟩

theorem cleanTags_spec : Spec.cleanTags_spec := by
  intro tags
  refine ⟨cleanTags_nodup tags, fun t ht => ?_, fun t ht hb => ?_⟩
  · simp only [cleanTags, List.mem_eraseDups, List.mem_filter, List.mem_map] at ht
    obtain ⟨⟨t₀, h₀, rfl⟩, hb⟩ := ht
    exact ⟨by simpa using hb, t₀, h₀, rfl⟩
  · simp only [cleanTags, List.mem_eraseDups, List.mem_filter, List.mem_map]
    exact ⟨⟨t, ht, rfl⟩, by simp [isBlank_clean, hb]⟩

theorem validate_again : Spec.validate_again :=
  ⟨fun _ _ h => validateNewUser_again h, fun _ _ h => validateLogin_again h,
   fun _ _ h => validateNewArticle_again h, fun _ _ h => validateNewComment_again h⟩

end Conduit.Proofs
