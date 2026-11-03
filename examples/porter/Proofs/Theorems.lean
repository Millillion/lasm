/-
The proof of every proposition of `Proofs/Spec.lean`, each by the theorem
of the same name, from the lemmas of the other files.
-/
import Proofs.Replies
import Proofs.Codes

set_option linter.unusedSimpArgs false

namespace Porter.Proofs
open Porter Text Spec

/-! ## The router, for tokens and userinfo -/

theorem run_tokens {e : Env} {ctx r} {D : DB} {t} (h : (reply e ctx r D).body = .tokens t) :
    r.path = ["token"] ∧ r.method = "POST" ∧ run e ctx r D = token e.cfg e.crypto D.reads ctx r := by
  revert h
  unfold reply
  apply run_elim e ctx r D (fun x => x.1.body = .tokens t → r.path = ["token"] ∧ r.method = "POST" ∧
    x = token e.cfg e.crypto D.reads ctx r)
  · intro x h; simp at h
  · intro h; simp at h
  · intro h; simp at h
  · intro h; simp at h
  · intro h; simp at h
  · intro _ _ h; exact absurd h ((plain_authorize e ctx r D).1 t)
  · intro hp hm _; exact ⟨hp, hm, rfl⟩
  · intro _ h; exact absurd h (userinfo_no_tokens e ctx r D t)
  · intro _ h; exact absurd h ((plain_logout e r).1 t)
  · intro id _ h; exact absurd h ((plain_interactionPage e ctx r D id).1 t)
  · intro id _ _ h; exact absurd h ((plain_login e ctx r D id).1 t)
  · intro id _ _ h; exact absurd h ((plain_consent e ctx r D id).1 t)

theorem run_userinfo {e : Env} {ctx r} {D : DB} {cs} (h : (reply e ctx r D).body = .userinfo cs) :
    run e ctx r D = userinfo e.cfg e.crypto D.reads ctx r := by
  revert h
  unfold reply
  apply run_elim e ctx r D (fun x => x.1.body = .userinfo cs → x = userinfo e.cfg e.crypto D.reads ctx r)
  · intro x h; simp at h
  · intro h; simp at h
  · intro h; simp at h
  · intro h; simp at h
  · intro h; simp at h
  · intro _ _ h; exact absurd h ((plain_authorize e ctx r D).2 cs)
  · intro _ _ h; exact absurd h (token_no_userinfo e ctx r D cs)
  · intro _ _; rfl
  · intro _ h; exact absurd h ((plain_logout e r).2 cs)
  · intro id _ h; exact absurd h ((plain_interactionPage e ctx r D id).2 cs)
  · intro id _ _ h; exact absurd h ((plain_login e ctx r D id).2 cs)
  · intro id _ _ h; exact absurd h ((plain_consent e ctx r D id).2 cs)

/-- A token response: the form, the authenticated client, and the grant. -/
theorem tokens_cases {e : Env} {ctx r} {D : DB} {t} (h : (reply e ctx r D).body = .tokens t) :
    ∃ ps cl, TokenPost r ps ∧ Authenticates e r ps cl ∧
      ((param ps "grant_type" = .one "authorization_code" ∧ run e ctx r D = codeGrant e.cfg e.crypto D.reads ctx cl ps) ∨
       (param ps "grant_type" = .one "refresh_token" ∧ "offline_access" ∈ cl.scopes ∧
        run e ctx r D = refreshGrant e.cfg e.crypto D.reads ctx cl ps)) := by
  obtain ⟨hp, hm, hrun⟩ := run_tokens h
  have h' : (token e.cfg e.crypto D.reads ctx r : Reply × List Write).1.body = .tokens t := by
    unfold reply at h; rw [hrun] at h; exact h
  obtain ⟨ps, cl, hps, hauth, hg⟩ := token_tokens e ctx r D t h'
  obtain ⟨id, secret, hca, hc, hsec⟩ := authenticate_some hauth
  refine ⟨ps, cl, ⟨hm, hp, hps⟩, ⟨id, secret, hca, hc, hsec⟩, ?_⟩
  rw [hrun]; exact hg

/-! ## A. An authorization code is redeemed at most once -/

theorem code_redeemed_at_most_once : Spec.code_redeemed_at_most_once :=
  fun e D rs h => trace_useCode_le e h D rs

theorem body_ok_of_form {r : Request} {ps} (h : r.form? = some ps) : ¬ r.body.utf8ByteSize > maxBody := by
  unfold Request.form? at h
  split at h
  · rename_i hc; omega
  · cases h

theorem code_replay_revokes : Spec.code_replay_revokes := by
  intro e ctx r D ps cl code ru ver k ⟨hm, hp, hps⟩ hauth hg hcode hru hver hv hl hk hu
  have ha := authenticate_of hauth
  obtain ⟨id, secret, hca, -, -⟩ := hauth
  have hb := body_ok_of_form hps
  have : run e ctx r D = (Reply.err (.token .invalidGrant), [.revoke k.family]) := by
    simp only [run, handle, hb, hp, hm, token, hps, hca, id_bind, id_run]
    simp only [hca, id_run] at ha
    simp only [ha, hg, codeGrant, hcode, hru, hver, hv, crypto_sha256, reads_code, hk, hu]
    simp [Nat.not_lt.mpr hl, hk, hu, tokenErr]
  exact ⟨by unfold reply; rw [this], by unfold writes; rw [this]⟩

/-! ## B. A code is bound to its client, its redirect URI and its PKCE verifier -/

theorem tokens_only_from_token_endpoint : Spec.tokens_only_from_token_endpoint := by
  intro e ctx r D t h
  obtain ⟨ps, cl, hpost, hauth, hg⟩ := tokens_cases h
  exact ⟨ps, cl, hpost, hauth, hg.imp (·.1) (·.1)⟩

theorem code_bound : Spec.code_bound := by
  intro e ctx r D t ps h hps hg
  obtain ⟨ps', cl, ⟨-, -, hps'⟩, hauth, hcase⟩ := tokens_cases h
  rw [hps] at hps'; cases hps'
  rcases hcase with ⟨-, hrun⟩ | ⟨hg', -⟩
  · have h' : (codeGrant e.cfg e.crypto D.reads ctx cl ps : Reply × List Write).1.body = .tokens t := by
      unfold reply at h; rw [hrun] at h; exact h
    obtain ⟨code, ru, ver, k, hc, hr, hv, hk, hu, hcl, hexp, hru, hch, heq⟩ := codeGrant_tokens e ctx D cl ps t h'
    refine ⟨code, ru, ver, k, cl, hc, hr, hv, hk, hauth, hcl, hru, hch, hu, hexp, ?_, ?_⟩
    · unfold writes; rw [hrun, heq, issueTokens_writes]; simp
    · intro a ha
      unfold writes at ha; rw [hrun, heq, issueTokens_writes] at ha
      simp at ha
      subst ha; exact ⟨rfl, rfl⟩
  · rw [hg] at hg'; simp at hg'

theorem code_records_request : Spec.code_records_request :=
  fun e ctx r D k hk => (codes_run e ctx r D k hk).1

theorem granted_scopes_allowed : Spec.granted_scopes_allowed := by
  intro c requested s hs
  unfold grantScope at hs
  have := List.mem_eraseDups.mp hs
  simp only [List.mem_filter, decide_eq_true_eq] at this
  exact ⟨this.1, this.2.1, this.2.2⟩

/-! ## C. The redirect target is always a registered URI, exactly -/

theorem redirect_registered : Spec.redirect_registered := by
  intro e ctx r D u ps hp hl
  exact ((redirects_run e ctx r D u ps hl).1.1 hp)

theorem logout_redirect_registered : Spec.logout_redirect_registered := by
  intro e ctx r D u ps hp hl
  exact ((redirects_run e ctx r D u ps hl).1.2 hp)

theorem redirect_params : Spec.redirect_params := by
  intro e ctx r D u ps hl
  exact (redirects_run e ctx r D u ps hl).2

theorem untrusted_redirect_uri_not_followed : Spec.untrusted_redirect_uri_not_followed := by
  intro e ctx r D ps hp hm hps hbad
  have hck : ∃ x, checkAuth e.cfg ps = .page x ∧ x ≠ .notFound ∧ x ≠ .methodNotAllowed := by
    unfold checkAuth
    split
    · rename_i cid hcid
      split
      · exact ⟨_, rfl, by decide, by decide⟩
      · rename_i c hc
        split
        · rename_i u hu
          simp only [hbad cid c u hcid hc hu, ite_false]
          exact ⟨_, rfl, by decide, by decide⟩
        · exact ⟨_, rfl, by decide, by decide⟩
    · exact ⟨_, rfl, by decide, by decide⟩
  obtain ⟨x, hx, hx1, hx2⟩ := hck
  have hrun : run e ctx r D = (Reply.err (.page x), []) ∨ run e ctx r D = (Reply.err (.page .badRequest), []) := by
    by_cases hb : r.body.utf8ByteSize > maxBody
    · right; simp [run, handle, hb]
    · left
      simp only [run, handle, hb, hp, id_run]
      simp only [eq_true hm, ite_true]
      simp [authorize, hps, hx]
  unfold reply
  rcases hrun with h | h <;> rw [h] <;> cases x <;> simp_all [Reply.err, Err.status, PageError.status]

theorem redirect_state_bounded : Spec.redirect_state_bounded := by
  intro e ctx r D u ps hl
  exact state_run e ctx r D u ps hl

theorem redirect_location_exact : Spec.redirect_location_exact := by
  intro iss u ps
  by_cases h : '?' ∈ u.toList
  · exact ⟨"&" ++ encodeForm ps, by simp [Location.render, h, String.append_assoc], .inr (by simp)⟩
  · exact ⟨"?" ++ encodeForm ps, by simp [Location.render, h, String.append_assoc], .inl (by simp)⟩

/-! ## D. A reused refresh token revokes its family -/

theorem refresh_bound : Spec.refresh_bound := by
  intro e ctx r D t ps h hps hg
  obtain ⟨ps', cl, ⟨-, -, hps'⟩, hauth, hcase⟩ := tokens_cases h
  rw [hps] at hps'; cases hps'
  rcases hcase with ⟨hg', -⟩ | ⟨-, -, hrun⟩
  · rw [hg] at hg'; simp at hg'
  · have h' : (refreshGrant e.cfg e.crypto D.reads ctx cl ps : Reply × List Write).1.body = .tokens t := by
      unfold reply at h; rw [hrun] at h; exact h
    obtain ⟨tok, x, sc, htok, hx, hrot, hrev, hcl, hexp, hsc, heq⟩ := refreshGrant_tokens e ctx D cl ps t h'
    have ht : t.scope = sc := by
      unfold reply at h; rw [hrun, heq, issueTokens_reply] at h; simp at h; rw [← h]
    refine ⟨tok, x, cl, htok, hx, hauth, hcl, hrot, hrev, hexp, ?_, ht ▸ hsc, ?_, ?_⟩
    · unfold writes; rw [hrun, heq, issueTokens_writes]; simp
    · intro a ha
      unfold writes at ha; rw [hrun, heq, issueTokens_writes] at ha
      simp at ha
      subst ha; exact ⟨rfl, hsc⟩
    · intro y hy
      unfold writes at hy; rw [hrun, heq, issueTokens_writes] at hy
      simp at hy
      obtain ⟨-, rfl⟩ := hy
      exact ⟨rfl, rfl⟩

theorem refresh_reuse_revokes : Spec.refresh_reuse_revokes := by
  intro e ctx r D ps cl tok x ⟨hm, hp, hps⟩ hauth hoff hg htok hsc hl hx hrot
  have ha := authenticate_of hauth
  obtain ⟨id, secret, hca, -, -⟩ := hauth
  have hb := body_ok_of_form hps
  have : run e ctx r D = (Reply.err (.token .invalidGrant), [.revoke x.family]) := by
    simp only [run, handle, hb, hp, hm, token, hps, hca, id_bind, id_run]
    simp only [hca, id_run] at ha
    simp only [ha, hg, refreshGrant, htok, crypto_sha256, reads_refresh, reads_revoked, hx, hrot, hoff]
    simp [hsc, Nat.not_lt.mpr hl, hx, hrot, tokenErr]
  exact ⟨by unfold reply; rw [this], by unfold writes; rw [this]⟩

theorem refresh_rotated_at_most_once : Spec.refresh_rotated_at_most_once :=
  fun e D rs h => trace_rotate_le e h D rs

theorem revocation_permanent : Spec.revocation_permanent :=
  fun _ _ _ D f hf => apply_keeps_revoked D _ f hf

/-! ## E. Every issued token's claims match the session and the client -/

theorem id_token_for_code : Spec.id_token_for_code := by
  intro e ctx r D t ps h hps hg
  obtain ⟨ps', cl, ⟨-, -, hps'⟩, hauth, hcase⟩ := tokens_cases h
  rw [hps] at hps'; cases hps'
  rcases hcase with ⟨-, hrun⟩ | ⟨hg', -⟩
  · have h' : (codeGrant e.cfg e.crypto D.reads ctx cl ps : Reply × List Write).1.body = .tokens t := by
      unfold reply at h; rw [hrun] at h; exact h
    obtain ⟨code, ru, ver, k, hc, -, -, hk, -, hcl, -, -, -, heq⟩ := codeGrant_tokens e ctx D cl ps t h'
    unfold reply at h; rw [hrun, heq, issueTokens_reply] at h; simp at h
    refine ⟨code, k, cl, _, hc, hk, hauth, hcl, by rw [← h], ?_⟩
    simp [idClaims]
  · rw [hg] at hg'; simp at hg'

theorem id_token_for_refresh : Spec.id_token_for_refresh := by
  intro e ctx r D t ps h hps hg
  obtain ⟨ps', cl, ⟨-, -, hps'⟩, hauth, hcase⟩ := tokens_cases h
  rw [hps] at hps'; cases hps'
  rcases hcase with ⟨hg', -⟩ | ⟨-, -, hrun⟩
  · rw [hg] at hg'; simp at hg'
  · have h' : (refreshGrant e.cfg e.crypto D.reads ctx cl ps : Reply × List Write).1.body = .tokens t := by
      unfold reply at h; rw [hrun] at h; exact h
    obtain ⟨tok, x, sc, htok, hx, -, -, hcl, -, -, heq⟩ := refreshGrant_tokens e ctx D cl ps t h'
    unfold reply at h; rw [hrun, heq, issueTokens_reply] at h; simp at h
    refine ⟨tok, x, cl, _, htok, hx, hauth, hcl, by rw [← h], ?_⟩
    simp [idClaims]

theorem code_requires_signin : Spec.code_requires_signin :=
  fun e ctx r D k hk => (codes_run e ctx r D k hk).2.1

theorem code_requires_consent : Spec.code_requires_consent :=
  fun e ctx r D k hk => (codes_run e ctx r D k hk).2.2

theorem userinfo_claims : Spec.userinfo_claims := by
  intro e ctx r D cs h
  have hrun := run_userinfo h
  unfold reply at h; rw [hrun] at h
  revert h
  simp only [userinfo, id_bind, id_run, crypto_sha256, reads_access, reads_revoked]
  repeat' split
  all_goals intro h
  all_goals simp_all [Reply.err]
  rename_i v hv _ a _ u _ hacc hlive hu
  obtain ⟨hdr, hdr', hb⟩ : ∃ hdr, r.header? "authorization" = some hdr ∧ authorization? hdr "Bearer" = some v := by
    cases hh : r.header? "authorization" with
    | none => simp [hh] at hv
    | some hdr => simp only [hh, Option.bind_some] at hv; exact ⟨hdr, rfl, hv⟩
  obtain ⟨hum, hsub⟩ := userBySub?_some hu
  exact ⟨hdr, hdr', v, hb, a, hacc, hlive.1, hlive.2, u, hum, hsub, h.symm⟩

/-! ## F. No endpoint reveals secrets in errors -/

theorem errors_reveal_nothing : Spec.errors_reveal_nothing :=
  fun e ctx r D h => (fine_run e ctx r D).2 h

theorem error_wire_fixed : Spec.error_wire_fixed := by
  intro x cfg cfg'
  simp [Reply.render, Reply.err, Body.wire]

/-- A sign-in that fails: the same page, or the same error, whatever the form. -/
theorem login_failed (e : Env) ctx r (D : DB) id (hf : r.form?.isSome)
    (hs : ∀ s, Write.addSession s ∉ (login e.cfg e.crypto D.reads ctx r id : Reply × List Write).2) :
    (login e.cfg e.crypto D.reads ctx r id : Reply × List Write) =
      match (interactionOf e.cfg e.crypto D.reads ctx r id : Option (Interaction × Client)) with
      | none => (Reply.err (.page .interactionExpired), [])
      | some (_, c) => (Reply.page (.login id c.name true), []) := by
  revert hs
  simp only [login, afterLogin, issueCode, id_bind, id_pure, crypto_sha256, crypto_check, reads_consent]
  generalize (interactionOf e.cfg e.crypto D.reads ctx r id : Option (Interaction × Client)) = io
  cases io with
  | none => simp
  | some p =>
    obtain ⟨i, c⟩ := p
    simp only
    repeat' split
    all_goals intro hs
    all_goals simp_all

theorem failed_signin_uniform : Spec.failed_signin_uniform := by
  intro e ctx r b D id hp hf hf' hs hs'
  have hb := (show ¬ r.body.utf8ByteSize > maxBody by
    cases h : r.form? with
    | none => rw [h] at hf; cases hf
    | some ps => exact body_ok_of_form h)
  have hb' := (show ¬ ({ r with body := b } : Request).body.utf8ByteSize > maxBody by
    cases h : ({ r with body := b } : Request).form? with
    | none => rw [h] at hf'; cases hf'
    | some ps => exact body_ok_of_form h)
  have hio : (interactionOf e.cfg e.crypto D.reads ctx { r with body := b } id : Option (Interaction × Client)) =
      interactionOf e.cfg e.crypto D.reads ctx r id := rfl
  by_cases hm : r.method = "POST"
  · have h1 : run e ctx r D = login e.cfg e.crypto D.reads ctx r id := by
      simp [run, handle, hb, hp, hm]
    have h2 : run e ctx { r with body := b } D = login e.cfg e.crypto D.reads ctx { r with body := b } id := by
      simp [run, handle, hb', hp, hm]
    have l1 := login_failed e ctx r D id hf (by unfold writes at hs; rw [h1] at hs; exact hs)
    have l2 := login_failed e ctx { r with body := b } D id hf' (by unfold writes at hs'; rw [h2] at hs'; exact hs')
    rw [hio] at l2
    unfold reply writes
    rw [h1, h2, l1, l2]
    split <;> simp
  · have h1 : run e ctx r D = methodNotAllowed := by simp [run, handle, hb, hp, hm]
    have h2 : run e ctx { r with body := b } D = methodNotAllowed := by simp [run, handle, hb', hp, hm]
    unfold reply writes
    rw [h1, h2]
    simp [methodNotAllowed]

/-! ## G. Request handlers are total -/

theorem replies_well_formed : Spec.replies_well_formed :=
  fun e ctx r D => (fine_run e ctx r D).1

/-! ## H. Expiry, for every clock -/

theorem expired_code_refused : Spec.expired_code_refused := by
  intro e ctx r D t ps code k h hps hg hc hk hle
  obtain ⟨code', ru, ver, k', cl, hc', -, -, hk', -, -, -, -, -, hexp, -⟩ := code_bound e ctx r D t ps h hps hg
  rw [hc] at hc'; cases hc'
  rw [hk] at hk'; cases hk'
  omega

theorem dead_refresh_refused : Spec.dead_refresh_refused := by
  intro e ctx r D t ps tok x h hps hg htok hx
  obtain ⟨tok', x', cl, htok', hx', -, -, -, hrev, hexp, -⟩ := refresh_bound e ctx r D t ps h hps hg
  rw [htok] at htok'; cases htok'
  rw [hx] at hx'; cases hx'
  exact ⟨by omega, hrev⟩

end Porter.Proofs
