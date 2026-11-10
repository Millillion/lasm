/-
# What is tested, not yet proved, about Lasm.RPC

Candidates: propositions in the form of `Spec.lean` that tests check on
generated inputs but no theorem proves yet (the convention is described in
library/Lasm/UI/Candidates.lean and docs/TESTING_STRATEGY.md §4). Each
needs Lean's JSON printer and parser to round-trip, which the library's
proofs do not model.
-/
import Lasm.RPC

namespace Lasm.RPC.Candidates
open Lean Lasm.RPC

/-! ## The wire: what one side writes, the other reads -/

/-- **A valid request's encoding decodes to itself.** For a request type
whose `ToJson` and `FromJson` round-trip, the body the client sends for a
valid request is accepted by the server as exactly that request.
Tested by: test/fuzz/native/LasmFuzz.lean -/
def request_round_trip : Prop :=
  ∀ (Req Res : Type) [ToJson Req] [FromJson Req] (e : Endpoint Req Res) (r : Req),
    (∀ x : Req, fromJson? (toJson x) = .ok x) → e.validate r = .ok () →
    e.decodeRequest (e.encodeRequest r) = .ok r

/-- **A result crosses intact.** For a response type whose `ToJson` and
`FromJson` round-trip, the client reads the server's 200 answer for the
result `r` as exactly `r`. Tested by: test/fuzz/native/LasmFuzz.lean -/
def response_round_trip : Prop :=
  ∀ (Req Res : Type) [ToJson Res] [FromJson Res] (e : Endpoint Req Res) (r : Res),
    (∀ x : Res, fromJson? (toJson x) = .ok x) →
    e.decodeResponse 200 (e.encodeResponse (.ok r)) = .ok r

/-- **A validation error reaches the client as itself.** The server's 400
answer for a validation message `m` is read by the client as
`Error.invalid m`, with the same message, and any other status as
`Error.failed` with that status and message.
Tested by: test/fuzz/native/LasmFuzz.lean -/
def error_round_trip : Prop :=
  ∀ (Req Res : Type) [ToJson Res] [FromJson Res] (e : Endpoint Req Res) (m : String) (status : Nat),
    e.decodeResponse status (e.encodeResponse (.error m)) =
      .error (if status == 400 then .invalid m else .failed status m)

/-- **Printed JSON is a normal form.** Whatever JSON `parseJson` accepts,
its printed form parses again and prints the same.
Tested by: test/fuzz/native/LasmFuzz.lean -/
def json_print_normal_form : Prop :=
  ∀ (s : String) (j : Json), parseJson s = .ok j → (parseJson j.compress).map Json.compress = .ok j.compress

end Lasm.RPC.Candidates
