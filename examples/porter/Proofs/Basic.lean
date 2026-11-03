/-
Lemmas the proofs share: the model's crypto and queries unfold to the
functions of `Env` and the lists of `DB`, lookups find members, and `crush`,
the tactic that runs an endpoint on the model and splits on every branch.
-/
import Proofs.Spec

set_option linter.unusedSimpArgs false

namespace Porter.Proofs
open Porter Text Spec

@[simp] theorem crypto_sha256 (e : Env) (s : String) : e.crypto.sha256 s = e.H s := rfl
@[simp] theorem crypto_check (e : Env) (p h : String) : e.crypto.checkPassword p h = e.check p h := rfl
@[simp] theorem crypto_sign (e : Env) (a : Alg) (s : String) : e.crypto.sign a s = e.S a s := rfl

@[simp] theorem reads_code (D : DB) h : D.reads.code h = D.code? h := rfl
@[simp] theorem reads_refresh (D : DB) h : D.reads.refresh h = D.refresh? h := rfl
@[simp] theorem reads_access (D : DB) h : D.reads.access h = D.access? h := rfl
@[simp] theorem reads_revoked (D : DB) f : D.reads.revoked f = D.revoked.contains f := rfl
@[simp] theorem reads_session (D : DB) h : D.reads.session h = D.session? h := rfl
@[simp] theorem reads_interaction (D : DB) h : D.reads.interaction h = D.interaction? h := rfl
@[simp] theorem reads_consent (D : DB) u c : D.reads.consent u c = D.consented u c := rfl

theorem client?_some {cfg : Config} {id : String} {c : Client} (h : cfg.client? id = some c) :
    c ∈ cfg.clients ∧ c.id = id := by
  unfold Config.client? at h
  exact ⟨List.mem_of_find?_eq_some h, by simpa using List.find?_some h⟩

theorem userByName?_some {cfg : Config} {n : String} {u : User} (h : cfg.userByName? n = some u) :
    u ∈ cfg.users ∧ u.username = n := by
  unfold Config.userByName? at h
  exact ⟨List.mem_of_find?_eq_some h, by simpa using List.find?_some h⟩

theorem userBySub?_some {cfg : Config} {n : String} {u : User} (h : cfg.userBySub? n = some u) :
    u ∈ cfg.users ∧ u.sub = n := by
  unfold Config.userBySub? at h
  exact ⟨List.mem_of_find?_eq_some h, by simpa using List.find?_some h⟩

theorem interaction?_mem {D : DB} {h : String} {i : Interaction} (hi : D.interaction? h = some i) :
    i ∈ D.interactions := List.mem_of_find?_eq_some hi

/-- What `checkRest` answers: a request for this client and redirect URI,
or an error for this redirect URI (as an eliminator: any property of those). -/
theorem checkRest_elim (c : Client) (ru ps) (P : AuthCheck → Prop)
    (hok : ∀ a : AuthRequest, a.client = c.id → a.redirectUri = ru → P (.ok a))
    (hred : ∀ st x, P (.redirect ru st x)) : P (checkRest c ru ps) := by
  simp only [checkRest]
  repeat' split
  all_goals first | exact hred _ _ | exact hok _ rfl rfl

theorem checkRest_spec (c : Client) (ru ps) :
    (∀ a, checkRest c ru ps = .ok a → a.client = c.id ∧ a.redirectUri = ru) ∧
    (∀ uri st x, checkRest c ru ps = .redirect uri st x → uri = ru) ∧
    (∀ x, checkRest c ru ps ≠ .page x) := by
  apply checkRest_elim c ru ps (fun r => (∀ a, r = .ok a → a.client = c.id ∧ a.redirectUri = ru) ∧
    (∀ uri st x, r = .redirect uri st x → uri = ru) ∧ (∀ x, r ≠ .page x))
  · intro a h1 h2
    refine ⟨?_, ?_, ?_⟩
    · intro b h; cases h; exact ⟨h1, h2⟩
    · intro _ _ _ h; cases h
    · intro _ h; cases h
  · intro st x
    refine ⟨?_, ?_, ?_⟩
    · intro _ h; cases h
    · intro _ _ _ h; cases h; rfl
    · intro _ h; cases h

/-- What `checkAuth` answers: a request or an error redirect for a client
that is configured and a redirect URI registered for it, exactly. -/
def AuthOk (cfg : Config) : AuthCheck → Prop
  | .ok a => ∃ c, cfg.client? a.client = some c ∧ a.redirectUri ∈ c.redirectUris
  | .redirect uri _ _ => ∃ c ∈ cfg.clients, uri ∈ c.redirectUris
  | .page _ => True

theorem checkAuth_spec (cfg : Config) (ps) : AuthOk cfg (checkAuth cfg ps) := by
  unfold checkAuth
  split
  · split
    · simp [AuthOk]
    · rename_i c hc
      split
      · split
        · rename_i ru _ hru
          split
          · obtain ⟨hok, hred, hpage⟩ := checkRest_spec c ru ps
            cases h : checkRest c ru ps with
            | ok a =>
              obtain ⟨h1, h2⟩ := hok a h
              exact ⟨c, by rw [h1, (client?_some hc).2]; exact hc, by rw [h2]; exact hru⟩
            | redirect uri st x => exact ⟨c, (client?_some hc).1, by rw [hred _ _ _ h]; exact hru⟩
            | page x => exact (hpage x h).elim
          · simp [AuthOk]
        · simp [AuthOk]
      · simp [AuthOk]
  · simp [AuthOk]

theorem checkAuth_ok {cfg : Config} {ps a} (h : checkAuth cfg ps = .ok a) :
    ∃ c, cfg.client? a.client = some c ∧ a.redirectUri ∈ c.redirectUris := by
  have := checkAuth_spec cfg ps; rw [h] at this; exact this

theorem checkAuth_redirect {cfg : Config} {ps uri st x} (h : checkAuth cfg ps = .redirect uri st x) :
    ∃ c ∈ cfg.clients, uri ∈ c.redirectUris := by
  have := checkAuth_spec cfg ps; rw [h] at this; exact this

/-! ## `state` is bounded -/

/-- A `state`, if any, of at most `maxState` bytes. -/
def StateOk (st : Option String) : Prop := ∀ v, st = some v → v.utf8ByteSize ≤ maxState

theorem stateOk_of {st : Option String} (h : shortState st = true) : StateOk st := by
  intro v hv
  subst hv
  simpa [shortState] using h

/-- What `checkRest` answers carries the request's `state` (as an
eliminator, like `checkRest_elim`). -/
theorem checkRest_elim_state (c : Client) (ru ps) (P : AuthCheck → Prop)
    (hok : ∀ a : AuthRequest, a.state = (param ps "state").value? → P (.ok a))
    (hred : ∀ x, P (.redirect ru (param ps "state").value? x)) : P (checkRest c ru ps) := by
  simp only [checkRest]
  repeat' split
  all_goals first | exact hred _ | exact hok _ rfl

/-- The `state` of what `checkAuth` answers is bounded. -/
def AuthStateOk : AuthCheck → Prop
  | .ok a => StateOk a.state
  | .redirect _ st _ => StateOk st
  | .page _ => True

theorem checkAuth_state (cfg : Config) (ps) : AuthStateOk (checkAuth cfg ps) := by
  unfold checkAuth
  repeat' split
  all_goals first
    | (rename_i hs; exact checkRest_elim_state _ _ ps AuthStateOk
         (fun a ha => show StateOk a.state from ha ▸ stateOk_of hs) (fun _ => stateOk_of hs))
    | simp [AuthStateOk]

/-- `authenticate` on the model: the client of credentials that check. -/
theorem authenticate_some {e : Env} {ca : ClientAuth} {c : Client}
    (h : Id.run (authenticate e.cfg e.crypto ca) = some c) :
    ∃ id secret, ca = .ok id secret ∧ e.cfg.client? id = some c ∧
      ((c.secretHash = none ∧ secret = none) ∨ (∃ s, secret = some s ∧ c.secretHash = some (e.H s))) := by
  unfold authenticate at h
  split at h
  · rename_i id secret
    refine ⟨id, secret, rfl, ?_⟩
    split at h
    · rename_i c' s hc
      split at h
      · rename_i hh hs
        simp only [crypto_sha256, id_bind, id_pure, id_run] at h
        split at h
        · cases h; exact ⟨hc, .inr ⟨s, rfl, by rw [hs]; congr 1; symm; assumption⟩⟩
        · cases h
      · cases h
    · rename_i c' hc
      simp only [id_pure, id_run] at h
      split at h
      · cases h; exact ⟨hc, .inl ⟨Option.isNone_iff_eq_none.mp ‹_›, rfl⟩⟩
      · cases h
    · cases h
  all_goals cases h

/-- Authentication as `c` means `authenticate` answers `c`. -/
theorem authenticate_of {e : Env} {r : Request} {ps} {c : Client} (h : Authenticates e r ps c) :
    Id.run (authenticate e.cfg e.crypto (clientAuth r ps)) = some c := by
  obtain ⟨id, secret, h1, h2, h3⟩ := h
  rw [h1]
  unfold authenticate
  rcases h3 with ⟨hs, rfl⟩ | ⟨s, rfl, hs⟩ <;> simp [h2, hs]

@[simp] theorem err_location (x : Err) : (Reply.err x).location = none := rfl
@[simp] theorem err_body (x : Err) : (Reply.err x).body = .error x := rfl
@[simp] theorem err_cookies (x : Err) : (Reply.err x).cookies = [] := rfl
@[simp] theorem page_location (p : Page) cs : (Reply.page p cs).location = none := rfl
@[simp] theorem page_body (p : Page) cs : (Reply.page p cs).body = .page p := rfl
@[simp] theorem redirect_location (l : Location) cs : (Reply.redirect l cs).location = some l := rfl
@[simp] theorem redirect_body (l : Location) cs : (Reply.redirect l cs).body = .empty := rfl

/-- Splits on every branch of an endpoint run on the model. -/
macro "crush" : tactic =>
  `(tactic| repeat' (first | (simp_all [errRedirect, Reply.redirect, Reply.page]; done) | split | simp_all [errRedirect, Reply.redirect, Reply.page]))

end Porter.Proofs
