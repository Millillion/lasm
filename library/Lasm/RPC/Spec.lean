/-
# What is proved about Lasm.RPC

Every proposition proved about Lasm.RPC, as a named `def … : Prop` with a
plain-English doc comment and no proof. Each proposition `Spec.x` is proved
by the theorem `Lasm.RPC.Theorems.x : Spec.x` (Theorems.lean), and
`node scripts/library-proofs.mjs` fails unless every proposition here has its
theorem and every theorem uses only Lean's standard axioms. library/PROOFS.md
is generated from this file.

Reading guide. An endpoint `e : Endpoint Req Res` has a name and a
`validate` function. On the server, `e.decodeRequest body` reads a request
body (JSON, then the request type, then `validate`), `e.serve handler` is
the route that answers `POST /rpc/<name>`, and `handler routes fallback` is
the `Lasm.Fetch` handler that dispatches to the routes. In the browser,
`e.call req handle` is the Lasm.UI command that sends the request. Every
proposition holds for every endpoint, every request type and every
`validate`. Lean's JSON parser and printer (`Json.parse`, `Json.compress`)
are not modelled: a proposition that needs them takes their result as a
hypothesis.
-/
import Lasm.RPC

namespace Lasm.RPC.Spec
open Lean Lasm.RPC Lasm.Fetch Lasm.UI

/-! ## The server only runs handlers on valid requests -/

/-- **A decoded request is valid.** Whenever `decodeRequest` accepts a body
as the request `r`, `r` passed the endpoint's `validate`. (This is the proof
that `serve` hands to every handler.) -/
def decodeRequest_valid : Prop :=
  ∀ (Req Res : Type) [FromJson Req] (e : Endpoint Req Res) (body : String) (r : Req),
    e.decodeRequest body = .ok r → e.validate r = .ok ()

/-- **A valid request is accepted.** If a body is JSON that reads as the
request `r`, and `r` passes `validate`, then `decodeRequest` accepts it as
exactly `r`: the server never refuses a well-formed, valid request. -/
def decodeRequest_accepts : Prop :=
  ∀ (Req Res : Type) [FromJson Req] (e : Endpoint Req Res) (body : String) (j : Json) (r : Req),
    parseJson body = .ok j → fromJson? j = .ok r → e.validate r = .ok () → e.decodeRequest body = .ok r

/-- **An invalid request is refused with the validation's message.** If a
body reads as the request `r` but `validate r` fails with message `m`,
`decodeRequest` refuses it with `Error.invalid m`. -/
def decodeRequest_rejects : Prop :=
  ∀ (Req Res : Type) [FromJson Req] (e : Endpoint Req Res) (body : String) (j : Json) (r : Req) (m : String),
    parseJson body = .ok j → fromJson? j = .ok r → e.validate r = .error m →
      e.decodeRequest body = .error (.invalid m)

/-- **Decoding only fails as "invalid".** Every way `decodeRequest` can
refuse a body (not JSON, not the request type, or failing `validate`) is an
`Error.invalid`, which the server answers with status 400. -/
def decodeRequest_error_invalid : Prop :=
  ∀ (Req Res : Type) [FromJson Req] (e : Endpoint Req Res) (body : String) (err : Error),
    e.decodeRequest body = .error err → ∃ m, err = .invalid m

/-- **Huge exponents are refused before parsing.** A body holding a number
whose exponent has more than four digits (`1e10000`, which would make Lean's
JSON parser compute `10 ^ 10000`) is refused as invalid without being
parsed, so such a request cannot exhaust the server's time or memory. -/
def decodeRequest_hugeExponent : Prop :=
  ∀ (Req Res : Type) [FromJson Req] (e : Endpoint Req Res) (body : String),
    hugeExponent body = true → ∃ m, e.decodeRequest body = .error (.invalid m)

/-- **An invalid request answers 400 without running the handler.** When
`decodeRequest` refuses a body, the route that `serve` builds answers status
400 with the error, and does nothing else: the handler is not called. -/
def serve_invalid : Prop :=
  ∀ (Req Res : Type) [FromJson Req] [ToJson Res] (e : Endpoint Req Res)
    (handler : (r : Req) → e.validate r = .ok () → Async (Except String Res)) (body : String) (err : Error),
    e.decodeRequest body = .error err →
      (e.serve handler).run body = pure (400, e.encodeResponse (.error err.toString))

/-- **A valid request runs the handler once.** When `decodeRequest` accepts
a body as `r`, the route runs the handler on `r` (with the proof that `r`
is valid), once, and answers status 200 with its result if it succeeded and
500 with its message if it failed. -/
def serve_valid : Prop :=
  ∀ (Req Res : Type) [FromJson Req] [ToJson Res] (e : Endpoint Req Res)
    (handler : (r : Req) → e.validate r = .ok () → Async (Except String Res)) (body : String) (r : Req),
    e.decodeRequest body = .ok r → ∃ hv : e.validate r = .ok (),
      (e.serve handler).run body = (handler r hv >>= fun result =>
        pure ((match result with | .ok _ => 200 | .error _ => 500 : UInt16), e.encodeResponse result))

/-! ## Dispatch: `POST /rpc/<name>` and nothing else -/

/-- **Other paths reach the fallback.** A request whose path is not
`/rpc/<name>` (one segment after `rpc`) is passed to the fallback handler
unchanged, whatever its method. -/
def handler_fallback : Prop :=
  ∀ (routes : List Route) (fallback : Handler) (req : Request),
    (∀ name, req.segments ≠ ["rpc", name]) → handler routes fallback req = fallback req

/-- **`POST /rpc/<name>` runs the route of that name.** For a `POST` to
`/rpc/<name>`, the handler runs the first route named `name` on the request
body and answers its status and JSON body, never cached. -/
def handler_route : Prop :=
  ∀ (routes : List Route) (fallback : Handler) (req : Request) (name : String) (route : Route),
    req.method = "POST" → req.segments = ["rpc", name] → routes.find? (·.name == name) = some route →
      handler routes fallback req = (route.run req.text >>= fun answer =>
        pure ((Response.json answer.2 answer.1).withHeader "cache-control" "no-store"))

/-- **An unknown endpoint answers 404.** A `POST` to `/rpc/<name>` when no
route has that name answers status 404, and runs no route and not the
fallback. -/
def handler_unknown : Prop :=
  ∀ (routes : List Route) (fallback : Handler) (req : Request) (name : String),
    req.method = "POST" → req.segments = ["rpc", name] → routes.find? (·.name == name) = none →
      handler routes fallback req =
        pure (Response.json (Json.mkObj [("error", Json.str s!"no endpoint {name}")]).compress 404)

/-- **Only `POST` reaches an endpoint.** Any other method on `/rpc/<name>`
answers 405 with `allow: POST`, and runs no route and not the fallback. -/
def handler_method : Prop :=
  ∀ (routes : List Route) (fallback : Handler) (req : Request) (name : String),
    req.method ≠ "POST" → req.segments = ["rpc", name] →
      handler routes fallback req = pure ((Response.text "Use POST\n" 405).withHeader "allow" "POST")

/-! ## The client -/

/-- **An invalid request is never sent.** When `validate` refuses a request
with message `m`, the command `call` performs no HTTP request: its only
effect delivers `Error.invalid m` to the app. -/
def call_invalid : Prop :=
  ∀ (Req Res Msg : Type) [ToJson Req] [FromJson Res] (e : Endpoint Req Res) (req : Req)
    (handle : Except Error Res → Msg) (base m : String),
    e.validate req = .error m → (e.call req handle base).effects = [.msg (handle (.error (.invalid m)))]

/-- **A valid request is sent once, as JSON, to its endpoint.** When
`validate` accepts a request, the command `call` performs exactly one effect:
a `POST` of the encoded request to `base ++ e.path` (`base` followed by
`/rpc/<name>`) with a JSON
content type. A network failure reaches the app as `Error.network`, and any
answer as the endpoint's reading of its status and body (`decodeResponse`). -/
def call_valid : Prop :=
  ∀ (Req Res Msg : Type) [ToJson Req] [FromJson Res] (e : Endpoint Req Res) (req : Req)
    (handle : Except Error Res → Msg) (base : String),
    e.validate req = .ok () → ∃ k,
      (e.call req handle base).effects =
        [.http { method := "POST", url := base ++ e.path, body := some (e.encodeRequest req),
                 headers := [("content-type", "application/json")] } k] ∧
      (∀ m, k (.error m) = handle (.error (.network m))) ∧
      (∀ resp, k (.ok resp) = handle (e.decodeResponse resp.status resp.body))

/-- **Reading an answer never claims a network failure.** Whatever status
and body the server answers, `decodeResponse` never reports
`Error.network`: that error means only that no answer arrived. -/
def decodeResponse_not_network : Prop :=
  ∀ (Req Res : Type) [FromJson Res] (e : Endpoint Req Res) (status : Nat) (body m : String),
    e.decodeResponse status body ≠ .error (.network m)

end Lasm.RPC.Spec
