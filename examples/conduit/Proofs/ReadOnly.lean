/-
Proof tools for the endpoints on the model database: `RO x` says that `x`
never changes the database, and the `ro` tactic proves it for a `do` block
built from reads, `pure`, `throw`, branches and other read-only blocks.
Every read-only part of `Conduit.Api` is proved `RO` here.
-/
import Proofs.Model

namespace Conduit.Proofs
open Api

/-- `x` never changes the database. -/
@[irreducible] def RO {α : Type} (x : M S α) : Prop := ∀ D, (x.run.run D).2 = D

theorem RO.bind {α β : Type} {x : M S α} {f : α → M S β} (hx : RO x) (hf : ∀ a, RO (f a)) : RO (x >>= f) := by
  unfold RO at *
  intro D
  simp only [ExceptT.run_bind, StateT.run_bind]
  have := hx D
  generalize (x.run.run D) = r at this
  obtain ⟨e, D'⟩ := r
  simp only at this; subst this
  cases e with
  | error e => rfl
  | ok a => exact hf a _
theorem RO.pure {α : Type} (a : α) : RO (pure a : M S α) := by unfold RO; exact fun _ => rfl
theorem RO.throw {α : Type} (e : ApiError) : RO (throw e : M S α) := by unfold RO; exact fun _ => rfl
theorem RO.liftM {α : Type} (x : S α) (h : ∀ D, (x.run D).2 = D) : RO (liftM x : M S α) := by
  unfold RO; intro D; show (Prod.map _ id (x.run D)).2 = D
  simpa using h D
theorem RO.map {α β : Type} (g : α → β) {x : M S α} (hx : RO x) : RO (g <$> x) := by
  rw [map_eq_pure_bind]; exact RO.bind hx fun _ => RO.pure _
theorem RO.state {α : Type} {x : M S α} (h : RO x) (D : DB) : (x.run.run D).2 = D := by
  unfold RO at h; exact h D

/-- Extended below with each read-only lemma (`macro_rules` alternatives are tried in turn). -/
syntax "ro_ext" : tactic
macro_rules | `(tactic| ro_ext) => `(tactic| fail "no read-only lemma")
/-- Proves `RO x` by taking `x` apart. -/
macro "ro" : tactic => `(tactic| repeat' (first | with_reducible apply RO.pure | with_reducible apply RO.throw | ((with_reducible apply RO.liftM) <;> (intro _; rfl)) | (with_reducible apply RO.bind) | (with_reducible apply RO.map) | ro_ext | split | (intro _) | dsimp only))

/-- Running `x` then `f`, when `x` only reads. -/
theorem run_ro_bind {α β : Type} {x : M S α} {f : α → M S β} (hx : RO x) (D : DB) :
    (x >>= f).run.run D = match (x.run.run D).1 with
      | .ok a => (f a).run.run D
      | .error e => (.error e, D) := by
  unfold RO at hx
  simp only [ExceptT.run_bind, StateT.run_bind]
  have := hx D
  generalize (x.run.run D) = r at this
  obtain ⟨e, D'⟩ := r
  simp only at this; subst this
  cases e <;> rfl

/-- What `x` then `f` leaves, when `f` only reads. -/
theorem state_bind_ro {α β : Type} {x : M S α} {f : α → M S β} (hf : ∀ a, RO (f a)) (D : DB) :
    ((x >>= f).run.run D).2 = (x.run.run D).2 := by
  simp only [ExceptT.run_bind, StateT.run_bind]
  generalize (x.run.run D) = r
  obtain ⟨e, D'⟩ := r
  cases e with
  | error => rfl
  | ok a => exact (hf a).state D'

theorem run_liftM {α : Type} (x : S α) (D : DB) :
    (liftM x : M S α).run.run D = (.ok (x.run D).1, (x.run D).2) := rfl

variable (e : Env)

theorem viewer_ro (r : Request) : RO (viewer? store e.svc r) := by unfold viewer?; ro
macro_rules | `(tactic| ro_ext) => `(tactic| with_reducible apply viewer_ro)
theorem requireUser_ro (r : Request) : RO (requireUser store e.svc r) := by unfold requireUser; ro
macro_rules | `(tactic| ro_ext) => `(tactic| with_reducible apply requireUser_ro)
theorem bodyOf_ro {α : Type} (r : Request) (k : String) (dec : Lean.Json → Except String α) :
    RO (bodyOf (m := S) r k dec) := by unfold bodyOf; ro
macro_rules | `(tactic| ro_ext) => `(tactic| with_reducible apply bodyOf_ro)
theorem liftE_ro {α : Type} (x : Except ApiError α) : RO (liftE (m := S) x) := by unfold liftE; ro
macro_rules | `(tactic| ro_ext) => `(tactic| with_reducible apply liftE_ro)
theorem follows_ro (v : Option Nat) (t : Nat) : RO (follows store v t) := by unfold follows; ro
macro_rules | `(tactic| ro_ext) => `(tactic| with_reducible apply follows_ro)
theorem profileReply_ro (v : Option Nat) (u : UserRow) : RO (profileReply store v u) := by unfold profileReply; ro
macro_rules | `(tactic| ro_ext) => `(tactic| with_reducible apply profileReply_ro)
theorem load_ro (v : Option Nat) (rows : List ArticleRow) : RO (load store v rows) := by unfold load; ro
macro_rules | `(tactic| ro_ext) => `(tactic| with_reducible apply load_ro)
theorem articleJson_ro (v : Option Nat) (a : ArticleRow) : RO (articleJson store v a) := by unfold articleJson; ro
macro_rules | `(tactic| ro_ext) => `(tactic| with_reducible apply articleJson_ro)
theorem listPage_ro (v : Option Nat) (f : Filter) (p : Page) : RO (listPage store v f p) := by unfold listPage; ro
macro_rules | `(tactic| ro_ext) => `(tactic| with_reducible apply listPage_ro)
theorem findArticle_ro (slug : String) : RO (findArticle store slug) := by unfold findArticle; ro
macro_rules | `(tactic| ro_ext) => `(tactic| with_reducible apply findArticle_ro)
theorem freeSlug_ro (t : String) (ex : Option String) : RO (freeSlug store t ex) := by unfold freeSlug; ro
macro_rules | `(tactic| ro_ext) => `(tactic| with_reducible apply freeSlug_ro)

/-! ## The endpoints that only read -/

theorem login_ro (r : Request) : RO (login store e.svc r) := by unfold login; ro
theorem currentUser_ro (r : Request) : RO (currentUser store e.svc r) := by unfold currentUser; ro
theorem getProfile_ro (r : Request) (n : String) : RO (getProfile store e.svc r n) := by unfold getProfile; ro
theorem listArticles_ro (r : Request) : RO (listArticles store e.svc r) := by unfold listArticles; ro
theorem feed_ro (r : Request) : RO (feed store e.svc r) := by unfold feed; ro
theorem getArticle_ro (r : Request) (slug : String) : RO (getArticle store e.svc r slug) := by unfold getArticle; ro
theorem listComments_ro (r : Request) (slug : String) : RO (listComments store e.svc r slug) := by unfold listComments; ro
theorem tags_ro : RO (tags store) := by unfold tags; ro

/-- The request is from someone (`requireUser` succeeds, reading only), or it fails without a change. -/
theorem requireUser_cases (r : Request) (D : DB) :
    (∃ err, (requireUser store e.svc r).run.run D = (.error err, D)) ∨
    ∃ me tok, (requireUser store e.svc r).run.run D = (.ok (me, tok), D) := by
  have h := (requireUser_ro e r).state D
  generalize hx : (requireUser store e.svc r).run.run D = x at h
  obtain ⟨res, D'⟩ := x
  simp only at h; subst h
  cases res with
  | error err => exact Or.inl ⟨err, rfl⟩
  | ok v => exact Or.inr ⟨v.1, v.2, rfl⟩

end Conduit.Proofs
