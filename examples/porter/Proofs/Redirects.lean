/-
Where Porter redirects (section C of the specification): to a client only at
a URI registered for it, exactly, with only `code`, `state`, `iss` and
`error`; one lemma per endpoint, then the router.
-/
import Proofs.Route

set_option linter.unusedSimpArgs false

namespace Porter.Proofs
open Porter Text Spec

/-- The parameters of a redirect to a client are fine. -/
def ParamsOk (cfg : Config) (ps : List (String × String)) : Prop :=
  ∀ p ∈ ps, (p.1 = "code" ∨ p.1 = "state" ∨ p.1 = "iss" ∨ p.1 = "error") ∧ (p.1 = "iss" → p.2 = cfg.issuer) ∧
    (p.1 = "error" → ∃ a : AuthError, p.2 = a.code)

theorem codeParams_ok (cfg : Config) code st : ParamsOk cfg (codeParams cfg code st) := by
  intro p hp
  simp only [codeParams, List.mem_append, List.mem_singleton] at hp
  rcases hp with (rfl | hp) | rfl
  · simp
  · cases st <;> simp_all
  · simp

theorem errorParams_ok (cfg : Config) x st : ParamsOk cfg (errorParams cfg x st) := by
  intro p hp
  simp only [errorParams, List.mem_append, List.mem_singleton] at hp
  rcases hp with (rfl | hp) | rfl
  · exact ⟨by simp, by simp, fun _ => ⟨x, rfl⟩⟩
  · cases st <;> simp_all
  · simp

theorem stateParams_ok (cfg : Config) (st : Option String) :
    ParamsOk cfg ((st.map fun s => [("state", s)]).getD []) := by
  intro p hp
  cases st <;> simp_all

/-- A reply's redirect to a client, if any, goes to `ok` URIs with fine parameters. -/
def RedirectsTo (cfg : Config) (ok : String → Prop) (x : Reply) : Prop :=
  ∀ u ps, x.location = some (.client u ps) → ok u ∧ ParamsOk cfg ps

/-- A URI registered for some configured client. -/
def Registered (cfg : Config) (u : String) : Prop := ∃ c ∈ cfg.clients, u ∈ c.redirectUris

theorem registered_of {cfg : Config} {id : String} {c : Client} {u : String} (hc : cfg.client? id = some c)
    (hu : u ∈ c.redirectUris) : Registered cfg u := ⟨c, (client?_some hc).1, hu⟩

theorem redirects_none (cfg : Config) ok (x : Reply) (h : x.location = none) : RedirectsTo cfg ok x := by
  intro u ps hl; rw [h] at hl; cases hl

@[simp] theorem redirects_err (cfg : Config) ok x : RedirectsTo cfg ok (Reply.err x) :=
  redirects_none cfg ok _ rfl

theorem redirects_issueCode (e : Env) ctx (a : AuthRequest) l sc code fam (h : Registered e.cfg a.redirectUri) :
    RedirectsTo e.cfg (Registered e.cfg) (Id.run (issueCode e.cfg e.crypto ctx a l sc code fam)).1 := by
  intro u ps hl
  simp [issueCode, Reply.redirect] at hl
  obtain ⟨rfl, rfl⟩ := hl
  exact ⟨h, codeParams_ok _ _ _⟩

theorem redirects_errRedirect (cfg : Config) ok uri st x (h : ok uri) :
    RedirectsTo cfg ok (errRedirect cfg uri st x) := by
  intro u ps hl
  simp [errRedirect, Reply.redirect] at hl
  obtain ⟨rfl, rfl⟩ := hl
  exact ⟨h, errorParams_ok _ _ _⟩

theorem redirects_startInteraction (e : Env) ctx a l ok :
    RedirectsTo e.cfg ok (Id.run (startInteraction e.cfg e.crypto ctx a l)).1 := by
  intro u ps hl; simp [startInteraction, Reply.redirect] at hl

theorem redirects_authorizeValid (e : Env) ctx (D : DB) c a s (h : Registered e.cfg a.redirectUri) :
    RedirectsTo e.cfg (Registered e.cfg) (Id.run (authorizeValid e.cfg e.crypto D.reads ctx c a s)).1 := by
  unfold authorizeValid
  split
  · split
    · simp only [id_bind, reads_consent]
      split
      · exact redirects_issueCode e ctx a _ _ _ _ h
      · split
        · exact redirects_errRedirect _ _ _ _ _ h
        · exact redirects_startInteraction e ctx a _ _
    · split
      · exact redirects_errRedirect _ _ _ _ _ h
      · exact redirects_startInteraction e ctx a _ _
  · split
    · exact redirects_errRedirect _ _ _ _ _ h
    · exact redirects_startInteraction e ctx a _ _

theorem redirects_authorize (e : Env) ctx r (D : DB) :
    RedirectsTo e.cfg (Registered e.cfg) (Id.run (authorize e.cfg e.crypto D.reads ctx r)).1 := by
  unfold authorize
  split
  · simp
  · rename_i ps _
    split
    · simp
    · rename_i uri st x hck
      obtain ⟨c, hc, hu⟩ := checkAuth_redirect hck
      exact redirects_errRedirect _ _ _ _ _ ⟨c, hc, hu⟩
    · rename_i a hck
      obtain ⟨c, hc, hu⟩ := checkAuth_ok hck
      split
      · simp
      · simp only [id_bind]
        exact redirects_authorizeValid e ctx D _ a _ (registered_of hc hu)

/-- `interactionOf` finds an interaction whose redirect URI is registered for its client. -/
theorem interactionOf_some {e : Env} {ctx r} {D : DB} {id i c}
    (h : Id.run (interactionOf e.cfg e.crypto D.reads ctx r id) = some (i, c)) :
    e.cfg.client? i.request.client = some c ∧ i.request.redirectUri ∈ c.redirectUris ∧
    D.interaction? (e.H id) = some i ∧ ctx.now < i.expires ∧ r.cookie? interactionCookie = some id ∧
    shortState i.request.state = true := by
  unfold interactionOf at h
  split at h
  · cases h
  · rename_i hcookie
    simp only [id_bind, reads_interaction, crypto_sha256, id_pure, id_run] at h
    split at h
    · cases h
    · rename_i i' hi
      split at h
      · split at h
        · rename_i c' hc
          split at h
          · rename_i hru
            split at h
            · cases h; exact ⟨hc, hru, hi, ‹_›, by simpa using hcookie, ‹_›⟩
            · cases h
          · cases h
        · cases h
      · cases h

theorem redirects_interactionPage (e : Env) ctx r (D : DB) id ok :
    RedirectsTo e.cfg ok (Id.run (interactionPage e.cfg e.crypto D.reads ctx r id)).1 := by
  unfold interactionPage
  simp only [id_bind]
  split
  · simp
  · split <;> exact redirects_none _ _ _ rfl

theorem redirects_login (e : Env) ctx r (D : DB) id :
    RedirectsTo e.cfg (Registered e.cfg) (Id.run (login e.cfg e.crypto D.reads ctx r id)).1 := by
  simp only [login, afterLogin, id_bind, id_pure, id_run, crypto_sha256, crypto_check, reads_consent]
  repeat' split
  all_goals intro u ps hl
  all_goals simp [issueCode, Reply.redirect] at hl
  all_goals obtain ⟨rfl, rfl⟩ := hl
  all_goals obtain ⟨hc, hu, -⟩ := interactionOf_some ‹_›
  all_goals exact ⟨registered_of hc hu, codeParams_ok _ _ _⟩

theorem redirects_consent (e : Env) ctx r (D : DB) id :
    RedirectsTo e.cfg (Registered e.cfg) (Id.run (consent e.cfg e.crypto D.reads ctx r id)).1 := by
  simp only [consent, currentSession, id_bind, id_pure, id_run, crypto_sha256, reads_session]
  repeat' split
  all_goals intro u ps hl
  all_goals simp [issueCode, errRedirect, Reply.redirect] at hl
  all_goals obtain ⟨rfl, rfl⟩ := hl
  all_goals obtain ⟨hc, hu, -⟩ := interactionOf_some ‹_›
  all_goals first | exact ⟨registered_of hc hu, codeParams_ok _ _ _⟩ | exact ⟨registered_of hc hu, errorParams_ok _ _ _⟩

theorem issueTokens_location (e : Env) ctx c g fg fam wn pre :
    (Id.run (issueTokens e.cfg e.crypto ctx c g fg fam wn pre)).1.location = none := by simp [issueTokens]

theorem codeGrant_location (e : Env) ctx (D : DB) c ps :
    (Id.run (codeGrant e.cfg e.crypto D.reads ctx c ps)).1.location = none := by
  simp only [codeGrant, tokenErr]; crush
  all_goals exact issueTokens_location ..

theorem refreshGrant_location (e : Env) ctx (D : DB) c ps :
    (Id.run (refreshGrant e.cfg e.crypto D.reads ctx c ps)).1.location = none := by
  simp only [refreshGrant, tokenErr]; crush
  all_goals exact issueTokens_location ..

theorem token_location (e : Env) ctx r (D : DB) : (Id.run (token e.cfg e.crypto D.reads ctx r)).1.location = none := by
  unfold token; simp only [tokenErr]; crush
  all_goals first | exact codeGrant_location .. | exact refreshGrant_location ..

theorem redirects_token (e : Env) ctx r (D : DB) ok : RedirectsTo e.cfg ok (Id.run (token e.cfg e.crypto D.reads ctx r)).1 :=
  redirects_none _ _ _ (token_location ..)

theorem redirects_userinfo (e : Env) ctx r (D : DB) ok :
    RedirectsTo e.cfg ok (Id.run (userinfo e.cfg e.crypto D.reads ctx r)).1 := by
  intro u ps hl
  have : (Id.run (userinfo e.cfg e.crypto D.reads ctx r)).1.location = none := by
    unfold userinfo; crush
  rw [this] at hl; cases hl

/-- Logout's redirect target: registered for the client the request names. -/
def LogoutOk (cfg : Config) (r : Request) (u : String) : Prop :=
  ∃ c ∈ cfg.clients, ∃ qs, r.params? = some qs ∧ (param qs "client_id").value? = some c.id ∧ u ∈ c.postLogoutRedirectUris

theorem logoutParams_some {cfg : Config} {ps cid u st} (h : logoutParams cfg ps = some (cid, some u, st)) :
    ∃ c ∈ cfg.clients, (param ps "client_id").value? = some c.id ∧ u ∈ c.postLogoutRedirectUris := by
  unfold logoutParams at h
  split at h
  · cases h
  · split at h
    · simp only at h
      split at h
      · cases h
      · rename_i u' hu
        split at h
        · rename_i c hc
          split at h
          · cases h
            cases hcid : (param ps "client_id").value? with
            | none => rw [hcid] at hc; cases hc
            | some cid =>
              rw [hcid] at hc
              obtain ⟨hm, hid⟩ := client?_some hc
              exact ⟨c, hm, by rw [hid], ‹_›⟩
          · cases h
        · cases h
    · cases h

theorem redirects_logout (e : Env) r : RedirectsTo e.cfg (LogoutOk e.cfg r) (Id.run (logout e.cfg e.crypto r)).1 := by
  simp only [logout, id_bind, id_pure, id_run, crypto_sha256]
  split
  · simp
  · rename_i ps hps
    split
    · simp
    · rename_i cid uri st hlp
      repeat' split
      all_goals intro u' ps' hl
      all_goals simp [Reply.redirect, Reply.page] at hl
      all_goals obtain ⟨rfl, rfl⟩ := hl
      all_goals obtain ⟨c, hc, hcid, hu⟩ := logoutParams_some hlp
      all_goals exact ⟨⟨c, hc, ps, hps, hcid, hu⟩, stateParams_ok _ _⟩

theorem redirects_mono {cfg : Config} {ok ok' : String → Prop} {x : Reply} (h : RedirectsTo cfg ok x)
    (hm : ∀ u, ok u → ok' u) : RedirectsTo cfg ok' x := fun u ps hl => let ⟨a, b⟩ := h u ps hl; ⟨hm u a, b⟩

/-- Outside logout, a redirect target is registered (as for the endpoints but logout). -/
theorem redirects_not_logout {cfg : Config} {r : Request} {x : Reply} {p : List String} (hp : r.path = p)
    (hne : p ≠ ["logout"]) (h : RedirectsTo cfg (Registered cfg) x) :
    RedirectsTo cfg (fun u => (r.path ≠ ["logout"] → Registered cfg u) ∧ (r.path = ["logout"] → LogoutOk cfg r u)) x :=
  redirects_mono h fun _ hu => ⟨fun _ => hu, fun h' => absurd (hp ▸ h') hne⟩

theorem redirects_run (e : Env) ctx r D :
    RedirectsTo e.cfg (fun u => (r.path ≠ ["logout"] → Registered e.cfg u) ∧ (r.path = ["logout"] → LogoutOk e.cfg r u))
      (run e ctx r D).1 := by
  apply run_elim e ctx r D (fun x => RedirectsTo e.cfg _ x.1)
  · intro x; simp
  · exact redirects_none _ _ _ rfl
  · exact redirects_none _ _ _ rfl
  · exact redirects_none _ _ _ rfl
  · exact redirects_none _ _ _ rfl
  · intro hp _; exact redirects_not_logout hp (by simp) (redirects_authorize e ctx r D)
  · intro hp _; exact redirects_not_logout hp (by simp) (redirects_token e ctx r D _)
  · intro hp; exact redirects_not_logout hp (by simp) (redirects_userinfo e ctx r D _)
  · intro hp; exact redirects_mono (redirects_logout e r) fun u hu => ⟨fun h => absurd hp h, fun _ => hu⟩
  · intro id hp; exact redirects_not_logout hp (by simp) (redirects_interactionPage e ctx r D id _)
  · intro id hp _; exact redirects_not_logout hp (by simp) (redirects_login e ctx r D id)
  · intro id hp _; exact redirects_not_logout hp (by simp) (redirects_consent e ctx r D id)

/-! ## Redirects reflect no unbounded input

A redirect's `Location` header is the registered URI (above), a fresh code,
the issuer, a fixed error code and `state`; `state` is the only part taken
from the request, and it is at most `maxState` bytes. -/

/-- The `state` parameters of a redirect are at most `maxState` bytes. -/
def StateIn (ps : List (String × String)) : Prop := ∀ p ∈ ps, p.1 = "state" → p.2.utf8ByteSize ≤ maxState

/-- A reply's redirect to a client, if any, carries a bounded `state`. -/
def StateBounded (x : Reply) : Prop := ∀ u ps, x.location = some (.client u ps) → StateIn ps

theorem stateParams_state {st : Option String} (h : StateOk st) : StateIn ((st.map fun s => [("state", s)]).getD []) := by
  intro p hp _
  cases st with
  | none => simp at hp
  | some v =>
    simp at hp
    rw [hp]
    exact h v rfl

theorem codeParams_state (cfg : Config) code {st : Option String} (h : StateOk st) : StateIn (codeParams cfg code st) := by
  intro p hp hs
  simp only [codeParams, List.mem_append, List.mem_singleton] at hp
  rcases hp with (rfl | hp) | rfl
  · simp at hs
  · exact stateParams_state h p hp hs
  · simp at hs

theorem errorParams_state (cfg : Config) x {st : Option String} (h : StateOk st) : StateIn (errorParams cfg x st) := by
  intro p hp hs
  simp only [errorParams, List.mem_append, List.mem_singleton] at hp
  rcases hp with (rfl | hp) | rfl
  · simp at hs
  · exact stateParams_state h p hp hs
  · simp at hs

theorem state_none {x : Reply} (h : x.location = none) : StateBounded x := by
  intro u ps hl; rw [h] at hl; cases hl

@[simp] theorem state_err x : StateBounded (Reply.err x) := state_none rfl

theorem state_issueCode (e : Env) ctx (a : AuthRequest) l sc code fam (h : StateOk a.state) :
    StateBounded (Id.run (issueCode e.cfg e.crypto ctx a l sc code fam)).1 := by
  intro u ps hl
  simp [issueCode, Reply.redirect] at hl
  obtain ⟨rfl, rfl⟩ := hl
  exact codeParams_state _ _ h

theorem state_errRedirect (cfg : Config) uri st x (h : StateOk st) : StateBounded (errRedirect cfg uri st x) := by
  intro u ps hl
  simp [errRedirect, Reply.redirect] at hl
  obtain ⟨rfl, rfl⟩ := hl
  exact errorParams_state _ _ h

theorem state_startInteraction (e : Env) ctx a l : StateBounded (Id.run (startInteraction e.cfg e.crypto ctx a l)).1 := by
  intro u ps hl; simp [startInteraction, Reply.redirect] at hl

theorem state_authorizeValid (e : Env) ctx (D : DB) c a s (h : StateOk a.state) :
    StateBounded (Id.run (authorizeValid e.cfg e.crypto D.reads ctx c a s)).1 := by
  unfold authorizeValid
  split
  · split
    · simp only [id_bind, reads_consent]
      split
      · exact state_issueCode e ctx a _ _ _ _ h
      · split
        · exact state_errRedirect _ _ _ _ h
        · exact state_startInteraction e ctx a _
    · split
      · exact state_errRedirect _ _ _ _ h
      · exact state_startInteraction e ctx a _
  · split
    · exact state_errRedirect _ _ _ _ h
    · exact state_startInteraction e ctx a _

theorem state_authorize (e : Env) ctx r (D : DB) : StateBounded (Id.run (authorize e.cfg e.crypto D.reads ctx r)).1 := by
  unfold authorize
  split
  · simp
  · rename_i ps _
    split
    · simp
    · rename_i uri st x hck
      have hs := checkAuth_state e.cfg ps
      rw [hck] at hs
      exact state_errRedirect _ uri st x hs
    · rename_i a hck
      have hs := checkAuth_state e.cfg ps
      rw [hck] at hs
      split
      · simp
      · simp only [id_bind]
        exact state_authorizeValid e ctx D _ a _ hs

theorem state_interactionPage (e : Env) ctx r (D : DB) id :
    StateBounded (Id.run (interactionPage e.cfg e.crypto D.reads ctx r id)).1 := by
  unfold interactionPage
  simp only [id_bind]
  split
  · simp
  · split <;> exact state_none rfl

theorem state_login (e : Env) ctx r (D : DB) id : StateBounded (Id.run (login e.cfg e.crypto D.reads ctx r id)).1 := by
  simp only [login, afterLogin, id_bind, id_pure, id_run, crypto_sha256, crypto_check, reads_consent]
  repeat' split
  all_goals intro u ps hl
  all_goals simp [issueCode, Reply.redirect] at hl
  all_goals obtain ⟨rfl, rfl⟩ := hl
  all_goals obtain ⟨-, -, -, -, -, hs⟩ := interactionOf_some ‹_›
  all_goals exact codeParams_state _ _ (stateOk_of hs)

theorem state_consent (e : Env) ctx r (D : DB) id : StateBounded (Id.run (consent e.cfg e.crypto D.reads ctx r id)).1 := by
  simp only [consent, currentSession, id_bind, id_pure, id_run, crypto_sha256, reads_session]
  repeat' split
  all_goals intro u ps hl
  all_goals simp [issueCode, errRedirect, Reply.redirect] at hl
  all_goals obtain ⟨rfl, rfl⟩ := hl
  all_goals obtain ⟨-, -, -, -, -, hs⟩ := interactionOf_some ‹_›
  all_goals first | exact codeParams_state _ _ (stateOk_of hs) | exact errorParams_state _ _ (stateOk_of hs)

theorem state_userinfo (e : Env) ctx r (D : DB) : StateBounded (Id.run (userinfo e.cfg e.crypto D.reads ctx r)).1 := by
  apply state_none
  unfold userinfo; crush

theorem logoutParams_state {cfg : Config} {ps cid uri st} (h : logoutParams cfg ps = some (cid, uri, st)) : StateOk st := by
  unfold logoutParams at h
  split at h
  · cases h
  · split at h
    · rename_i hs
      simp only at h
      repeat' split at h
      all_goals (cases h <;> exact stateOk_of hs)
    · cases h

theorem state_logout (e : Env) r : StateBounded (Id.run (logout e.cfg e.crypto r)).1 := by
  simp only [logout, id_bind, id_pure, id_run, crypto_sha256]
  split
  · simp
  · rename_i ps hps
    split
    · simp
    · rename_i cid uri st hlp
      repeat' split
      all_goals intro u' ps' hl
      all_goals simp [Reply.redirect, Reply.page] at hl
      all_goals obtain ⟨rfl, rfl⟩ := hl
      all_goals exact stateParams_state (logoutParams_state hlp)

theorem state_run (e : Env) ctx r D : StateBounded (run e ctx r D).1 := by
  apply run_elim e ctx r D (fun x => StateBounded x.1)
  · intro x; simp
  · exact state_none rfl
  · exact state_none rfl
  · exact state_none rfl
  · exact state_none rfl
  · intro _ _; exact state_authorize e ctx r D
  · intro _ _; exact state_none (token_location e ctx r D)
  · intro _; exact state_userinfo e ctx r D
  · intro _; exact state_logout e r
  · intro id _; exact state_interactionPage e ctx r D id
  · intro id _ _; exact state_login e ctx r D id
  · intro id _ _; exact state_consent e ctx r D id

end Porter.Proofs
