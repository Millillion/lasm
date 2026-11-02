/-
Where codes come from (sections B and E of the specification): every code
records a validated authorization request, the sign-in of a live session or
of a password checked in the same request, and scopes the user consented
to.
-/
import Proofs.Tokens
import Proofs.Redirects

set_option linter.unusedSimpArgs false

namespace Porter.Proofs
open Porter Text Spec

/-! ## Consents in the model -/

theorem mem_insertOrIgnore {α : Type} [DecidableEq α] (l : List α) (x y : α) :
    y ∈ insertOrIgnore id l x ↔ y ∈ l ∨ y = x := by
  unfold insertOrIgnore
  split
  · rename_i h
    simp only [List.any_eq_true, id, decide_eq_true_eq] at h
    obtain ⟨z, hz, rfl⟩ := h
    constructor
    · exact .inl
    · rintro (h | rfl) <;> assumption
  · simp

theorem mem_foldl_insert {u c : String} (sc : List String) (cs : List (String × String × String)) (y) :
    y ∈ sc.foldl (fun cs s => insertOrIgnore id cs (u, c, s)) cs ↔ y ∈ cs ∨ ∃ s ∈ sc, y = (u, c, s) := by
  induction sc generalizing cs with
  | nil => simp
  | cons s ss ih =>
    simp only [List.foldl_cons, ih, mem_insertOrIgnore, List.mem_cons]
    constructor
    · rintro ((h | h) | ⟨s', hs', rfl⟩)
      · exact .inl h
      · exact .inr ⟨s, .inl rfl, h⟩
      · exact .inr ⟨s', .inr hs', rfl⟩
    · rintro (h | ⟨s', rfl | hs', rfl⟩)
      · exact .inl (.inl h)
      · exact .inl (.inr rfl)
      · exact .inr ⟨s', hs', rfl⟩

theorem mem_consented {D : DB} {u c s : String} : s ∈ D.consented u c ↔ (u, c, s) ∈ D.consents := by
  unfold DB.consented
  simp only [List.mem_map, List.mem_filter, decide_eq_true_eq]
  constructor
  · rintro ⟨⟨u', c', s'⟩, ⟨h, rfl, rfl⟩, rfl⟩; exact h
  · intro h; exact ⟨(u, c, s), ⟨h, rfl, rfl⟩, rfl⟩

/-- Writes other than consents leave the consents alone. -/
theorem write_consents (D : DB) (w : Write) (hw : ∀ u c sc, w ≠ .consent u c sc) : (D.write w).consents = D.consents := by
  cases w <;> first | rfl | exact absurd rfl (hw _ _ _)

theorem apply_consents (D : DB) (ws : List Write) (hw : ∀ u c sc, Write.consent u c sc ∉ ws) :
    (D.apply ws).consents = D.consents := by
  induction ws generalizing D with
  | nil => rfl
  | cons w ws ih =>
    simp only [DB.apply, List.foldl_cons]
    have h1 : ∀ u c sc, w ≠ .consent u c sc := fun u c sc h => hw u c sc (h ▸ List.mem_cons_self ..)
    have h2 : ∀ u c sc, Write.consent u c sc ∉ ws := fun u c sc h => hw u c sc (List.mem_cons_of_mem _ h)
    have := ih (D.write w) h2
    unfold DB.apply at this
    rw [this, write_consents D w h1]

theorem write_keeps_consent (D : DB) (w : Write) {x} (h : x ∈ D.consents) : x ∈ (D.write w).consents := by
  cases w with
  | consent u c sc => simp only [DB.write]; exact (mem_foldl_insert sc _ x).mpr (.inl h)
  | _ => exact h

theorem apply_keeps_consent (D : DB) (ws : List Write) {x} (h : x ∈ D.consents) : x ∈ (D.apply ws).consents := by
  induction ws generalizing D with
  | nil => exact h
  | cons w ws ih => exact ih _ (write_keeps_consent D w h)

/-! ## Sessions -/

theorem currentSession_some {e : Env} {ctx r} {D : DB} {s : Session}
    (h : Id.run (currentSession e.crypto D.reads ctx r) = some s) :
    ∃ v, r.cookie? sessionCookie = some v ∧ D.session? (e.H v) = some s ∧ ctx.now < s.expires := by
  unfold currentSession at h
  split at h
  · cases h
  · rename_i v hv
    simp only [id_bind, crypto_sha256, reads_session, id_pure, id_run] at h
    split at h
    · rename_i s' hs
      split at h
      · cases h; exact ⟨v, hv, hs, ‹_›⟩
      · cases h
    · cases h

/-! ## The codes of each endpoint -/

/-- What every code issued in writes `ws` rests on (the three propositions
of the specification about codes, for one request). -/
def CodesOk (e : Env) (ctx : Ctx) (r : Request) (D : DB) (ws : List Write) : Prop :=
  ∀ k, Write.addCode k ∈ ws →
    (∃ a c, ((∃ ps, r.params? = some ps ∧ checkAuth e.cfg ps = .ok a) ∨ (∃ i ∈ D.interactions, i.request = a)) ∧
      e.cfg.client? a.client = some c ∧ a.redirectUri ∈ c.redirectUris ∧
      k.grant.client = a.client ∧ k.redirectUri = a.redirectUri ∧ k.challenge = a.challenge ∧
      k.grant.nonce = a.nonce ∧ k.grant.scope = grantScope c a.scope ∧ k.used = false ∧
      k.expires = ctx.now + e.cfg.codeTtl) ∧
    ((∃ v s, r.cookie? sessionCookie = some v ∧ D.session? (e.H v) = some s ∧ ctx.now < s.expires ∧
      s.user = k.grant.user ∧ s.sid = k.grant.sid ∧ s.authTime = k.grant.authTime) ∨
     (∃ u ∈ e.cfg.users, ∃ ps, r.form? = some ps ∧ ((param ps "username").value?).getD "" = u.username ∧
      e.check (((param ps "password").value?).getD "") u.passwordHash = true ∧
      k.grant.user = u.sub ∧ k.grant.authTime = ctx.now)) ∧
    ∀ s ∈ k.grant.scope, s ∈ (D.apply ws).consented k.grant.user k.grant.client

theorem codesOk_of (e : Env) ctx r D ws (h : ∀ k, Write.addCode k ∉ ws) : CodesOk e ctx r D ws :=
  fun k hk => absurd hk (h k)

theorem issueCode_writes (e : Env) ctx (a : AuthRequest) (l : Login) sc code fam :
    Prod.snd (issueCode e.cfg e.crypto ctx a l sc code fam : Reply × List Write) =
      [.addCode ⟨e.H code, ⟨a.client, l.user, sc, l.authTime, l.sid, a.nonce⟩, a.redirectUri, a.challenge, fam,
        ctx.now + e.cfg.codeTtl, false⟩] := by
  simp [issueCode]

theorem codes_authorize (e : Env) ctx r (D : DB) : CodesOk e ctx r D (Id.run (authorize e.cfg e.crypto D.reads ctx r)).2 := by
  unfold authorize
  split
  · exact codesOk_of _ _ _ _ _ (by simp)
  · rename_i ps hps
    split
    · exact codesOk_of _ _ _ _ _ (by simp)
    · exact codesOk_of _ _ _ _ _ (by simp)
    · rename_i a hck
      split
      · exact codesOk_of _ _ _ _ _ (by simp)
      · rename_i c hc
        obtain ⟨c', hc', hru⟩ := checkAuth_ok hck
        rw [hc] at hc'; cases hc'
        simp only [id_bind]
        unfold authorizeValid
        split
        · rename_i s hs2
          obtain ⟨v, hv, hsv, hexp⟩ := currentSession_some hs2
          split
          · simp only [id_bind, reads_consent]
            split
            · rename_i hcons
              intro k hk
              simp only [id_run] at hk ⊢
              rw [issueCode_writes] at hk
              simp only [List.mem_singleton, Write.addCode.injEq] at hk
              subst hk
              refine ⟨⟨a, c, .inl ⟨ps, hps, hck⟩, hc, hru, rfl, rfl, rfl, rfl, rfl, rfl, rfl⟩,
                .inl ⟨v, s, hv, hsv, hexp, rfl, rfl, rfl⟩, ?_⟩
              intro x hx
              simp only [Bool.and_eq_true, Bool.not_eq_eq_eq_not, Bool.not_true, List.all_eq_true,
                decide_eq_true_eq] at hcons
              rw [issueCode_writes, mem_consented]
              exact apply_keeps_consent D _ (mem_consented.mp (hcons.2 x hx))
            · split
              · exact codesOk_of _ _ _ _ _ (by simp)
              · exact codesOk_of _ _ _ _ _ (by simp [startInteraction])
          · split
            · exact codesOk_of _ _ _ _ _ (by simp)
            · exact codesOk_of _ _ _ _ _ (by simp [startInteraction])
        · split
          · exact codesOk_of _ _ _ _ _ (by simp)
          · exact codesOk_of _ _ _ _ _ (by simp [startInteraction])

theorem codes_login (e : Env) ctx r (D : DB) id : CodesOk e ctx r D (Id.run (login e.cfg e.crypto D.reads ctx r id)).2 := by
  simp only [login, afterLogin, issueCode, id_bind, id_run, id_pure, crypto_sha256, crypto_check, reads_consent]
  repeat' split
  all_goals first | (apply codesOk_of; simp; done) | skip
  rename_i _ i c hio _ ps hps _ u hu hok hcons
  obtain ⟨hc, hru, hi, -, -⟩ := interactionOf_some hio
  obtain ⟨hum, huname⟩ := userByName?_some hu
  have hcid := (client?_some hc).2
  intro k hk
  simp only [List.append_assoc, List.cons_append, List.nil_append, List.mem_cons, reduceCtorEq, false_or,
    List.mem_singleton, Write.addCode.injEq, List.not_mem_nil, or_false] at hk
  subst hk
  refine ⟨⟨i.request, c, .inr ⟨i, interaction?_mem hi, rfl⟩, hc, hru, rfl, rfl, rfl, rfl, rfl, rfl, rfl⟩,
    .inr ⟨u, hum, ps, hps, huname.symm, by simpa [hu] using hok, rfl, rfl⟩, ?_⟩
  intro x hx
  simp only [Bool.and_eq_true, Bool.not_eq_eq_eq_not, Bool.not_true, List.all_eq_true, decide_eq_true_eq] at hcons
  rw [mem_consented, apply_consents _ _ (by simp)]
  rw [← hcid]
  exact mem_consented.mp (hcons.2 x hx)

theorem codes_consent (e : Env) ctx r (D : DB) id : CodesOk e ctx r D (Id.run (consent e.cfg e.crypto D.reads ctx r id)).2 := by
  simp only [consent, issueCode, id_bind, id_run, id_pure]
  repeat' split
  all_goals first | (apply codesOk_of; simp; done) | skip
  rename_i _ i c hio _ l hl _ s hs hsl _ _
  obtain ⟨hc, hru, hi, -, -⟩ := interactionOf_some hio
  obtain ⟨v, hv, hsv, hexp⟩ := currentSession_some hs
  have hcid := (client?_some hc).2
  intro k hk
  simp at hk
  subst hk
  refine ⟨⟨i.request, c, .inr ⟨i, interaction?_mem hi, rfl⟩, hc, hru, rfl, rfl, rfl, rfl, rfl, rfl, rfl⟩,
    .inl ⟨v, s, hv, hsv, hexp, rfl, rfl, rfl⟩, ?_⟩
  intro x hx
  rw [mem_consented]
  have key : (s.user, i.request.client, x) ∈ (D.write (.consent l.user c.id (grantScope c i.request.scope))).consents := by
    simp only [DB.write]; exact (mem_foldl_insert _ _ _).mpr (.inr ⟨x, hx, by simp [hsl.1, hcid]⟩)
  exact apply_keeps_consent (D.write _) [_, _] key

theorem codes_interactionPage (e : Env) ctx r (D : DB) id :
    CodesOk e ctx r D (Id.run (interactionPage e.cfg e.crypto D.reads ctx r id)).2 := by
  simp only [interactionPage, id_bind, id_run]
  repeat' split
  all_goals (apply codesOk_of; simp)

theorem codes_userinfo (e : Env) ctx r (D : DB) : CodesOk e ctx r D (Id.run (userinfo e.cfg e.crypto D.reads ctx r)).2 := by
  simp only [userinfo, id_bind, id_run]
  repeat' split
  all_goals (apply codesOk_of; simp)

theorem codes_logout (e : Env) ctx r (D : DB) : CodesOk e ctx r D (Id.run (logout e.cfg e.crypto r)).2 := by
  simp only [logout, id_bind, id_run]
  repeat' split
  all_goals (apply codesOk_of; simp)

theorem codes_token (e : Env) ctx r (D : DB) : CodesOk e ctx r D (Id.run (token e.cfg e.crypto D.reads ctx r)).2 := by
  simp only [token, codeGrant, refreshGrant, tokenErr, id_bind, id_run]
  repeat' split
  all_goals (apply codesOk_of; simp [issueTokens])

theorem codes_run (e : Env) ctx r D : CodesOk e ctx r D (writes e ctx r D) := by
  unfold writes
  apply run_elim e ctx r D (fun x => CodesOk e ctx r D x.2)
  all_goals intros
  all_goals first
    | (apply codesOk_of; simp; done)
    | exact codes_authorize e ctx r D
    | exact codes_token e ctx r D
    | exact codes_userinfo e ctx r D
    | exact codes_logout e ctx r D
    | exact codes_interactionPage e ctx r D _
    | exact codes_login e ctx r D _
    | exact codes_consent e ctx r D _

end Porter.Proofs
