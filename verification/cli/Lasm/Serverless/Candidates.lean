/-
# What is tested, not yet proved, about the function platforms' HTTP mapping

Candidates: propositions in the form of `Spec.lean`, about the model of
src/serverless/ (Lasm.Serverless.Proofs.Model), that tests check of the
JavaScript on generated inputs but no theorem proves yet (the convention is
described in library/Lasm/UI/Candidates.lean and docs/TESTING_STRATEGY.md
§4). The serverless-http fuzz target checks that the JavaScript and the model
agree; the test named by each `Tested by:` line checks the statement of the
JavaScript.
-/
import Lasm.Serverless.Proofs.Model

namespace Lasm.Serverless.Candidates
open Lasm.Serverless

/-! ## Cookies -/

/-- **`joinCookies` leaves at most one Cookie field and the others in order.**
Whatever Cookie fields a request has, at most one remains, and the fields
other than Cookie are exactly the request's, in their order.
Tested by: test/serverless-shims.test.mjs -/
def join_cookies_once : Prop :=
  ∀ hs : Headers,
    ((joinCookies hs).filter (isCookie ·.1)).length ≤ 1 ∧
    (joinCookies hs).filter (!isCookie ·.1) = hs.filter (!isCookie ·.1)

end Lasm.Serverless.Candidates
