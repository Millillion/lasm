/-
The router: every request's reply and writes come from one endpoint, or are
a fixed reply that writes nothing (`run_elim`). Each theorem about all
requests is proved from this and one lemma per endpoint.
-/
import Proofs.Basic

set_option linter.unusedSimpArgs false

namespace Porter.Proofs
open Porter Text Spec

theorem run_elim (e : Env) (ctx : Ctx) (r : Request) (D : DB) (P : Reply × List Write → Prop)
    (hconst : ∀ x, P (Reply.err x, []))
    (hhome : P (Reply.page .home, []))
    (hdisc : P ({ status := 200, body := .discovery }, []))
    (hjwks : P ({ status := 200, body := .jwks }, []))
    (h204 : P ({ status := 204 }, []))
    (hauth : r.path = ["authorize"] → r.method = "GET" ∨ r.method = "POST" →
      P (authorize e.cfg e.crypto D.reads ctx r))
    (htoken : r.path = ["token"] → r.method = "POST" → P (token e.cfg e.crypto D.reads ctx r))
    (huser : r.path = ["userinfo"] → P (userinfo e.cfg e.crypto D.reads ctx r))
    (hlogout : r.path = ["logout"] → P (logout e.cfg e.crypto r))
    (hpage : ∀ id, r.path = ["interaction", id] → P (interactionPage e.cfg e.crypto D.reads ctx r id))
    (hlogin : ∀ id, r.path = ["interaction", id, "login"] → r.method = "POST" →
      P (login e.cfg e.crypto D.reads ctx r id))
    (hconsent : ∀ id, r.path = ["interaction", id, "consent"] → r.method = "POST" →
      P (consent e.cfg e.crypto D.reads ctx r id)) :
    P (run e ctx r D) := by
  unfold run handle
  simp only [id_run]
  split
  · exact hconst _
  · split <;> (try split) <;> (try split) <;> simp_all [methodNotAllowed]

end Porter.Proofs
