/-
What a token response rests on (sections A, B, D and E of the
specification): the token endpoint, an authenticated client, and a stored,
live code or refresh token bound to that client; and what `/userinfo`
answers for.
-/
import Proofs.Once

set_option linter.unusedSimpArgs false

namespace Porter.Proofs
open Porter Text Spec

theorem issueTokens_reply (e : Env) ctx c g fg fam wn pre :
    Prod.fst (issueTokens e.cfg e.crypto ctx c g fg fam wn pre : Reply × List Write) =
      { status := 200, body := .tokens ⟨ctx.fresh.a, e.cfg.accessTtl,
          if "offline_access" ∈ fg.scope then some ctx.fresh.b else none,
          signed e c.alg (idClaims e.cfg ctx.now g wn), g.scope⟩ } := by
  simp [issueTokens, signIdToken, signed]

/-- Tokens for a code: what `codeGrant` checked. -/
theorem codeGrant_tokens (e : Env) ctx (D : DB) c ps t :
    (codeGrant e.cfg e.crypto D.reads ctx c ps : Reply × List Write).1.body = .tokens t →
    ∃ code ru ver k, (param ps "code").value? = some code ∧ (param ps "redirect_uri").value? = some ru ∧
      (param ps "code_verifier").value? = some ver ∧ D.code? (e.H code) = some k ∧ k.used = false ∧
      k.grant.client = c.id ∧ ctx.now < k.expires ∧ k.redirectUri = ru ∧ e.H ver = k.challenge ∧
      (codeGrant e.cfg e.crypto D.reads ctx c ps : Reply × List Write) =
        issueTokens e.cfg e.crypto ctx c k.grant k.grant k.family true [.useCode (e.H code)] := by
  simp only [codeGrant, tokenErr, id_bind, crypto_sha256, reads_code]
  repeat' split
  all_goals intro h
  all_goals simp_all [Reply.err]

/-- Tokens for a refresh token: what `refreshGrant` checked. -/
theorem refreshGrant_tokens (e : Env) ctx (D : DB) c ps t :
    (refreshGrant e.cfg e.crypto D.reads ctx c ps : Reply × List Write).1.body = .tokens t →
    ∃ tok x sc, (param ps "refresh_token").value? = some tok ∧ D.refresh? (e.H tok) = some x ∧ x.rotated = false ∧
      x.family ∉ D.revoked ∧ x.grant.client = c.id ∧ ctx.now < x.expires ∧ (∀ s ∈ sc, s ∈ x.grant.scope) ∧
      (refreshGrant e.cfg e.crypto D.reads ctx c ps : Reply × List Write) =
        issueTokens e.cfg e.crypto ctx c { x.grant with scope := sc } x.grant x.family false [.rotate (e.H tok)] := by
  simp only [refreshGrant, tokenErr, id_bind, crypto_sha256, reads_refresh, reads_revoked]
  repeat' split
  all_goals intro h
  all_goals simp_all [Reply.err]
  all_goals (refine ⟨_, ?_, rfl⟩; simp_all)

/-- A reply that carries neither tokens nor userinfo claims. -/
def Plain (x : Reply) : Prop := (∀ t, x.body ≠ .tokens t) ∧ (∀ cs, x.body ≠ .userinfo cs)

theorem plain_of {x : Reply} (h : x.body = .empty ∨ (∃ p, x.body = .page p) ∨ (∃ y, x.body = .error y)) : Plain x := by
  rcases h with h | ⟨p, h⟩ | ⟨y, h⟩ <;> exact ⟨fun t => by simp [h], fun cs => by simp [h]⟩

macro "plain" : tactic => `(tactic| first
  | (apply plain_of; simp [Reply.err, Reply.page, Reply.redirect, issueCode, startInteraction, errRedirect]; done)
  | (apply plain_of; simp_all [Reply.err, Reply.page, Reply.redirect, issueCode, startInteraction, errRedirect]))

theorem plain_authorize (e : Env) ctx r (D : DB) : Plain (Id.run (authorize e.cfg e.crypto D.reads ctx r)).1 := by
  simp only [authorize, authorizeValid, currentSession, id_bind, id_run, crypto_sha256, reads_session, reads_consent]
  repeat' split
  all_goals plain

theorem plain_interactionPage (e : Env) ctx r (D : DB) id :
    Plain (Id.run (interactionPage e.cfg e.crypto D.reads ctx r id)).1 := by
  simp only [interactionPage, id_bind, id_run]
  repeat' split
  all_goals plain

theorem plain_login (e : Env) ctx r (D : DB) id : Plain (Id.run (login e.cfg e.crypto D.reads ctx r id)).1 := by
  simp only [login, afterLogin, id_bind, id_run, crypto_sha256, crypto_check, reads_consent]
  repeat' split
  all_goals plain

theorem plain_consent (e : Env) ctx r (D : DB) id : Plain (Id.run (consent e.cfg e.crypto D.reads ctx r id)).1 := by
  simp only [consent, currentSession, id_bind, id_run, crypto_sha256, reads_session]
  repeat' split
  all_goals plain

theorem plain_logout (e : Env) r : Plain (Id.run (logout e.cfg e.crypto r)).1 := by
  simp only [logout, id_bind, id_run, crypto_sha256]
  repeat' split
  all_goals plain

theorem userinfo_no_tokens (e : Env) ctx r (D : DB) t : (Id.run (userinfo e.cfg e.crypto D.reads ctx r)).1.body ≠ .tokens t := by
  simp only [userinfo, id_bind, id_run, crypto_sha256, reads_access, reads_revoked]
  repeat' split
  all_goals simp [Reply.err]

theorem codeGrant_no_userinfo (e : Env) ctx (D : DB) c ps cs :
    (Id.run (codeGrant e.cfg e.crypto D.reads ctx c ps)).1.body ≠ .userinfo cs := by
  simp only [codeGrant, tokenErr, id_bind, id_run, crypto_sha256, reads_code]
  repeat' split
  all_goals simp [Reply.err, issueTokens_reply]

theorem refreshGrant_no_userinfo (e : Env) ctx (D : DB) c ps cs :
    (Id.run (refreshGrant e.cfg e.crypto D.reads ctx c ps)).1.body ≠ .userinfo cs := by
  simp only [refreshGrant, tokenErr, id_bind, id_run, crypto_sha256, reads_refresh, reads_revoked]
  repeat' split
  all_goals simp [Reply.err, issueTokens_reply]

theorem token_no_userinfo (e : Env) ctx r (D : DB) cs : (Id.run (token e.cfg e.crypto D.reads ctx r)).1.body ≠ .userinfo cs := by
  simp only [token, tokenErr, id_bind, id_run]
  repeat' split
  all_goals first | exact codeGrant_no_userinfo e ctx D _ _ cs | exact refreshGrant_no_userinfo e ctx D _ _ cs | simp [Reply.err]

/-- Tokens from the token endpoint: the form, the client, the grant. -/
theorem token_tokens (e : Env) ctx r (D : DB) t :
    (token e.cfg e.crypto D.reads ctx r : Reply × List Write).1.body = .tokens t →
    ∃ ps cl, r.form? = some ps ∧ Id.run (authenticate e.cfg e.crypto (clientAuth r ps)) = some cl ∧
      ((param ps "grant_type" = .one "authorization_code" ∧
        (token e.cfg e.crypto D.reads ctx r : Reply × List Write) = codeGrant e.cfg e.crypto D.reads ctx cl ps) ∨
       (param ps "grant_type" = .one "refresh_token" ∧ "offline_access" ∈ cl.scopes ∧
        (token e.cfg e.crypto D.reads ctx r : Reply × List Write) = refreshGrant e.cfg e.crypto D.reads ctx cl ps)) := by
  simp only [token, tokenErr, id_bind]
  repeat' split
  all_goals intro h
  all_goals simp_all [Reply.err]

end Porter.Proofs
