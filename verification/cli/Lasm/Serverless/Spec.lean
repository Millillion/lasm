/-
# What is proved about the function platforms' HTTP mapping

Every proposition proved about the model of src/serverless/ (the shims that
run a Lasm program on AWS Lambda and Lambda@Edge, Vercel, Netlify,
Azure Functions and Google Cloud Functions), as a named `def … : Prop` with
a plain-English doc comment and no proof. Each proposition `Spec.x` is
proved by the theorem `Lasm.Serverless.Theorems.x : Spec.x`
(Theorems.lean), and `node scripts/library-proofs.mjs` fails unless every
proposition here has its theorem and every theorem uses only Lean's
standard axioms. library/PROOFS.md is generated from this file.

Reading guide. A shim takes the platform's request (a Lambda event, or a
Node or WHATWG request), hands a web Request to the fetch handler the
program publishes (`forward()`, `pipe()`), and turns the handler's reply
into the platform's response. The model (Lasm.Serverless.Proofs.Model)
mirrors the JavaScript function for function; the serverless-http fuzz
target runs both on every input and fails when they differ, so these
properties are proved of the model and tested of the shim. Vocabulary:
- `requestTarget p q`: the request target forwarded for an event's path `p`
  and query `q`; `pathOf t` and `queryOf t` are a server's reading of a
  target (up to and after the first `?`);
- `outgoing hs d`: the header fields forwarded for an event's fields `hs`,
  with `d` the Host sent when the event has no usable one;
- `Reply`: the server's reply as forward() receives it (fields with
  lowercase names, Set-Cookie repeated);
- `values n hs`: the values of the fields named `n`, in order; `lookup n m`:
  what a header map `m` holds for `n`.
The model leaves Node's base64, `Date.parse` and `Number` to the platform,
and takes the texts the platforms deliver (header names are HTTP tokens).
-/
import Lasm.Serverless.Proofs.Mapping

namespace Lasm.Serverless.Spec
open Lasm.Serverless

/-! ## Request targets: the path a server sees is the event's -/

/-- **Every target is one http.request sends.** Whatever the event's path
and query (a decoded path with spaces, `?` or `#`, an emoji, a query sent
unencoded), every character of the forwarded target is visible ASCII and
none is `#`: Node never refuses it (which was a 502), and no part of it is
a fragment. -/
def target_valid : Prop :=
  ∀ p q : String, ∀ c ∈ (requestTarget p q).toList, printable c = true ∧ c ≠ '#'

/-- **The path stays the path, the query the query.** A server reads the
forwarded target's path up to its first `?`: that is exactly the event's
path (`/` when empty), escaped, so a `?` in a decoded path cannot move part
of it into the query. After that `?` comes exactly the event's query,
escaped, and there is no `?` at all when the event has no query. -/
def target_split : Prop :=
  ∀ p q : String,
    pathOf (requestTarget p q) = String.ofList (escape pathUnsafe (if p.isEmpty then ['/'] else p.toList)) ∧
    queryOf (requestTarget p q) = if q.isEmpty then none else some (String.ofList (escape queryUnsafe q.toList))

/-- **A valid target goes through unchanged.** When the event's path holds
only what a target's path may (visible ASCII but `?` and `#`) and its query
only what a query may (visible ASCII but `#`), the target is the path, `?`
and the query, as they are: percent escapes stay escapes, `://` in a path
(`/go/https://example.com`) stays in the path, and a malformed escape in a
query (`?q=%E0`) arrives as the client sent it. -/
def target_unchanged : Prop :=
  ∀ p q : String, (∀ c ∈ p.toList, pathUnsafe c = false) → (∀ c ∈ q.toList, queryUnsafe c = false) →
    requestTarget p q = (if p.isEmpty then "/" else p) ++ (if q.isEmpty then "" else "?" ++ q)

/-- **Every target starts with `/`** when the event's path does, or is
empty. -/
def target_slash : Prop :=
  ∀ p q : String, (p.isEmpty ∨ p.toList.head? = some '/') → (requestTarget p q).toList.head? = some '/'

/-- **No header chooses the target.** For every Lambda event (API Gateway
REST, ALB, payload 2.0 and function URLs, CloudFront), the forwarded target
is the same whatever header fields (Host among them) and cookies the event
carries. -/
def target_ignores_headers : Prop :=
  (∀ (e : RestEvent) h m, (restRequest { e with headers := h, multiHeaders := m }).target = (restRequest e).target) ∧
  (∀ (e : V2Event) h c, (v2Request { e with headers := h, cookies := c }).target = (v2Request e).target) ∧
  (∀ (e : CloudFrontEvent) h, (cloudFrontRequest { e with headers := h }).target = (cloudFrontRequest e).target)

/-! ## Host: one, and it cannot move the path -/

/-- **Exactly one Host, a plain one.** Whatever fields an event carries
(none, several, or a forged `Host: x/admin#`), forward() and pipe() send
exactly one Host field, and its value is a plain `host[:port]`: visible
ASCII without `/ ? # \ @` (the first such Host of the event, else the
default host). -/
def host_once : Prop :=
  ∀ (hs : Headers) (d : String), plainHost d = true →
    ∃ n v, (outgoing hs d).filter (isHost ·.1) = [(n, v)] ∧ plainHost v = true

/-- **A plain Host cannot move the path.** A server that builds its URL
from the Host field and the target (`http://` + host + target, as Hono's
Node adapter and Lasm.Fetch's Node host do) reads back exactly that host and that
target, for every plain host and every target that starts with `/`. Together
with `host_once` and `target_split`: no client can change the path or query
a server sees through Host (`Host: x/admin#` once made `/public` read as
`/admin` in Lasm.Fetch). -/
def host_url : Prop :=
  ∀ h t : String, plainHost h = true → t.toList.head? = some '/' → urlHost ("http://" ++ h ++ t) = some (h, t)

/-! ## Query strings -/

/-- **What URLSearchParams writes, a server reads back.** For any names and
values (any text), the query `URLSearchParams` writes decodes, as a server
decodes `application/x-www-form-urlencoded` text, to exactly those pairs, in
order. -/
def form_roundtrip : Prop :=
  ∀ ps : List (String × String), formDecode (formEncode ps) = some ps

/-- **API Gateway REST's query values arrive with the same values.** API
Gateway REST hands over the query decoded; the forwarded target's query
decodes to exactly the event's pairs: the multi-value form when the event
has one (each value of a name, in order), else the single-value one. -/
def rest_query : Prop :=
  ∀ e : RestEvent, e.alb = false →
    formDecode ((queryOf (restRequest e).target).getD "") = some (pairsOf e.query e.multiQuery)

/-- **An ALB's query arrives as the client sent it.** An ALB hands over the
query still encoded (or malformed: `%E0`); when a target can carry it as it
is, the forwarded query is exactly `name=value` joined with `&`, unchanged
(decoding it threw `URIError` on `%E0`: a 502; test/fuzz). -/
def alb_query : Prop :=
  ∀ e : RestEvent, e.alb = true → (∀ c ∈ (rawQuery e.query e.multiQuery).toList, queryUnsafe c = false) →
    queryOf (restRequest e).target =
      if (rawQuery e.query e.multiQuery).isEmpty then none else some (rawQuery e.query e.multiQuery)

/-! ## Cookies and the other fields -/

/-- **At most one Cookie field, never an empty one.** Whatever Cookie fields
an event carries (repeated, split by HTTP/2, joined with commas by a proxy,
empty), forward() and pipe() send at most one, and it is not empty. -/
def cookie_once : Prop :=
  ∀ (hs : Headers) (d : String),
    ((outgoing hs d).filter (isCookie ·.1)).length ≤ 1 ∧ ∀ x ∈ outgoing hs d, isCookie x.1 = true → x.2 ≠ ""

/-- **A payload 2.0 event's cookies arrive once.** When an API Gateway HTTP
API or function URL event has cookies in `cookies`, the one Cookie field
sent is those cookies joined with `; ` (and commas a proxy put between
cookies made `; `), whatever Cookie fields the headers also hold (SAM's local
gateway leaves them there too: they were sent twice, #80). -/
def v2_cookies_once : Prop :=
  ∀ (e : V2Event) (d : String), e.cookies.filter (!·.isEmpty) ≠ [] →
    ((outgoing (v2Request e).headers d).filter (isCookie ·.1)).map (·.2) =
      [cookieText (String.intercalate "; " (e.cookies.filter (!·.isEmpty)))]

/-- **Every other field goes through, in order.** The fields sent other than
Cookie and Host are exactly the event's fields other than Cookie, Host, the
hop-by-hop fields and Content-Length (forward() sets the body's own), with
their names and values, in their order. -/
def other_fields : Prop :=
  ∀ (hs : Headers) (d : String),
    (outgoing hs d).filter (fun x => !isCookie x.1 && !isHost x.1) =
      hs.filter (fun x => !isCookie x.1 && !isHost x.1 && !hopByHop (lower x.1) && lower x.1 != "content-length")

/-! ## Responses -/

/-- **The body is the server's, byte for byte.** For every Lambda response
(REST and ALB, payload 2.0, CloudFront), the body stands for exactly the
reply's bytes, and it travels as text only when the reply's type is textual
and its bytes are valid UTF-8 (a Latin-1 `text/html` body went as text and
lost its accented letters), as base64 otherwise. -/
def body_kept : Prop :=
  ∀ (e : RestEvent) (r : Reply),
    (restResponse e r).body.bytes = r.body ∧ (v2Response r).body.bytes = r.body ∧ (cloudFrontResponse r).body.bytes = r.body ∧
    ((∃ s, body r.headers r.body = .text s) ↔ textualType r.headers = true ∧ (String.fromUTF8? r.body).isSome = true)

/-- **The status is the server's.** Every Lambda response carries the
reply's status. -/
def status_kept : Prop :=
  ∀ (e : RestEvent) (r : Reply),
    (restResponse e r).statusCode = r.status ∧ (v2Response r).statusCode = r.status ∧
    (cloudFrontResponse r).status = toString r.status

/-- **Every field of the reply reaches an API Gateway REST or multi-value ALB
response**, each name with all its values in order (every Set-Cookie
among them, once each). Header maps have no prototype: a field named
`__proto__` or `constructor` is a field like any other (it was dropped, or
threw a TypeError). -/
def rest_headers : Prop :=
  ∀ (e : RestEvent) (r : Reply), (e.alb = false ∨ e.multiHeaders.isSome = true) →
    ∃ m, (restResponse e r).multiValueHeaders = some m ∧
      ∀ n, lookup n m = if values n r.headers = [] then none else some (values n r.headers)

/-- **A payload 2.0 response holds every field of the reply**: each
Set-Cookie once, in order, in `cookies`, and every other name with its
values joined with `, `. -/
def v2_headers : Prop :=
  ∀ r : Reply, (v2Response r).cookies = values "set-cookie" r.headers ∧
    ∀ n, lookup n (v2Response r).headers =
      if n = "set-cookie" ∨ values n r.headers = [] then none else some (String.intercalate ", " (values n r.headers))

/-- **A CloudFront response holds every field CloudFront accepts**, each
name with all its values in order, and none it refuses in a generated
response (Content-Length, Via, `x-amz-cf-…`, …). -/
def cloudfront_headers : Prop :=
  ∀ (r : Reply) (n : String), lookup n (cloudFrontResponse r).headers =
    if cloudFrontRefused n = true ∨ values n r.headers = [] then none else some (values n r.headers)

/-- **A Netlify response to a HEAD, or with a null-body status, has no
body** (a Response with one would throw). -/
def web_null_body : Prop :=
  ∀ (status : Nat) (method : String) (length : Nat),
    (status ∈ [101, 204, 205, 304] ∨ method = "HEAD") → webNullBody status method length = true

/-- **Every cookie object Azure gets arrives unchanged** when at most one
Set-Cookie of the reply would change in Azure's `cookies` list (which
percent-encodes values and has no field for some attributes): that one stays
a Set-Cookie header, and every cookie object sent is one `cookies` carries
exactly. -/
def azure_exact : Prop :=
  ∀ (vd : String → Bool) (r : Reply),
    (∀ i j (hi : i < ((values "set-cookie" r.headers).map (parseSetCookie vd)).length)
      (hj : j < ((values "set-cookie" r.headers).map (parseSetCookie vd)).length),
      exact ((values "set-cookie" r.headers).map (parseSetCookie vd))[i] = false →
      exact ((values "set-cookie" r.headers).map (parseSetCookie vd))[j] = false → i = j) →
    ∀ c ∈ (azureReply vd r).2, ∃ c', exact (some c') = true ∧ c = { c' with dropped := [] }

end Lasm.Serverless.Spec
