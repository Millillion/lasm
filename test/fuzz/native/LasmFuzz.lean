/-
Fuzz entry points for Lasm's Lean boundaries, compiled to C with the managed
Lean and linked into libFuzzer binaries (test/fuzz/native/build.mjs,
lean_driver.c). Each takes the fuzz input and returns "" or a description of
the property it broke; the driver aborts on a non-empty answer, and a Lean
panic aborts too (lean_set_exit_on_panic). The candidates of
library/Lasm/Fetch/Candidates.lean and library/Lasm/RPC/Candidates.lean are
checked here: each is cited by a `Proposition:` line, with its statement, and
its body is evaluated on every input (docs/TESTING_STRATEGY.md §4).
-/
import Lasm.Fetch
import Lasm.RPC.Core
import Lasm.UI.Url
open Lean Lasm.Fetch

namespace LasmFuzz

/-- Text from fuzz bytes: UTF-8, or each byte as a Latin-1 character (as Node
gives raw header bytes) when they are not UTF-8. -/
def text (b : ByteArray) : String :=
  match String.fromUTF8? b with
  | some s => s
  | none => String.ofList (b.toList.map fun x => Char.ofNat x.toNat)

/-- Fields separated by 0x00. -/
def fields (b : ByteArray) : Array ByteArray := Id.run do
  let mut out := #[]
  let mut cur := ByteArray.empty
  for x in b.toList do
    if x == 0 then
      out := out.push cur
      cur := .empty
    else cur := cur.push x
  return out.push cur

private def pathOf (url : String) : String := ({ method := "GET", url } : Request).path
private def isCookie (p : String × String) : Bool := p.1.toLower == "cookie"

/-- Lasm.Fetch's request parsing as Node's host builds it (`serveNode`):
fields method, request target, Host header (empty: none), then header name
and value pairs, and the body after an odd field. Properties: the path starts
with `/` and holds no `?`, `#` or `\`; the Host header never moves the path
(the same target under `localhost` has the same path, and so does the target
alone); resolving the path again changes nothing; no segment is `.` or `..`;
the query holds no `#`; the parameters are at most the `&`-separated parts;
`header?` finds the Host; `percentDecode` leaves text without `%` alone;
`joinCookies` leaves one Cookie header and every other header in order;
`splitCookieCommas` leaves a value without commas alone. -/
@[export lasm_fuzz_fetch_request]
def fetchRequest (input : ByteArray) : String := Id.run do
  let fs := fields input
  let method := text (fs[0]?.getD .empty)
  let target := text (fs[1]?.getD .empty)
  let host := (fs[2]?.map text).filter (!·.isEmpty)
  let mut headers : Array (String × String) := match host with
    | some h => #[("Host", h)]
    | none => #[]
  let mut i := 3
  while i + 1 < fs.size do
    headers := headers.push (text fs[i]!, text fs[i+1]!)
    i := i + 2
  let body := if i < fs.size then fs[i]! else .empty
  let url := nodeRequestUrl target host 3000
  let req : Request := { method, url, headers, body }
  let path := req.path
  unless path.startsWith "/" do return s!"path {path.quote} does not start with /"
  if path.any (fun c => c == '?' || c == '#' || c == '\\') then return s!"path {path.quote} holds ?, # or \\"
  if target.startsWith "/" then
    let plain := pathOf ("http://localhost" ++ target)
    if plain != path then return s!"the Host header {host} moved the path: {path.quote}, under localhost {plain.quote}"
    let relative := pathOf target
    if relative != path then return s!"the target alone has the path {relative.quote}, the URL {url.quote} has {path.quote}"
  let again := pathOf ("http://h" ++ path)
  if again != path then return s!"resolving {path.quote} again gives {again.quote}"
  for s in req.segments do
    if s == "." || s == ".." then return s!"a dot segment in {url.quote}"
  -- Proposition: Lasm.Fetch.Candidates.segments_nonempty
  --   ∀ r : Request, ∀ s ∈ r.segments, s ≠ ""
  unless decide (∀ s ∈ req.segments, s ≠ "") do return s!"an empty segment in {url.quote}"
  -- Proposition: Lasm.Fetch.Candidates.percent_round_trip
  --   ∀ s : String, percentDecode (Lasm.UI.Url.percentEncode s) = s
  for s in [target, method, text body] do
    unless decide (percentDecode (Lasm.UI.Url.percentEncode s) = s) do
      return s!"percentDecode does not read percentEncode {s.quote} back"
  if req.query.any (· == '#') then return s!"the query {req.query.quote} holds #"
  if req.queryParams.length > (req.query.splitOn "&").length then return "more parameters than parts"
  if host.isSome && req.header? "HOST" != host then return "header? missed the Host header"
  if !target.any (· == '%') && percentDecode target != target then return s!"percentDecode changed {target.quote}"
  let joined := joinCookies req.headers
  -- (Cookie fields that are all empty are left alone.)
  if (joined.filter isCookie).size > 1 && req.headers.any (fun p => isCookie p && !(splitCookieCommas p.2).isEmpty) then
    return "joinCookies left two Cookie headers"
  if joined.filter (!isCookie ·) != req.headers.filter (!isCookie ·) then return "joinCookies changed other headers"
  for (_, v) in req.headers do
    if !v.any (· == ',') && splitCookieCommas v != v then return s!"splitCookieCommas changed {v.quote}"
  return ""

structure Todo where
  title : String
  done : Bool
  tags : Array String
  priority : Nat
  note : Option String
  deriving FromJson, ToJson, BEq, Repr

def addTodo : Lasm.RPC.Endpoint Todo Todo where
  name := "addTodo"
  validate r := if r.title.isEmpty then .error "empty title" else if r.tags.size > 8 then .error "too many tags" else .ok ()

/-- Lasm.RPC's decoding (`Endpoint.decodeRequest`, `decodeResponse`) of a
request body. Properties: a body is accepted only when it passes `validate`,
and is otherwise refused as `invalid` (the server's 400); an accepted request
survives `encodeRequest` and decoding again; `encodeResponse` and
`decodeResponse` round-trip results and errors (400: invalid, others:
failed); and Lean's JSON printer's output parses and prints again unchanged. -/
@[export lasm_fuzz_rpc]
def rpc (input : ByteArray) : String := Id.run do
  -- The server reads the body as `Request.text`: empty when it is not UTF-8.
  let body := (String.fromUTF8? input).getD ""
  -- Todo's ToJson and FromJson round-trip (the candidates' hypothesis).
  match addTodo.decodeRequest body with
  | .ok r =>
    if !(addTodo.validate r matches .ok ()) then return "decodeRequest accepted a request that fails validate"
    -- Proposition: Lasm.RPC.Candidates.request_round_trip
    --   ∀ (Req Res : Type) [ToJson Req] [FromJson Req] (e : Endpoint Req Res) (r : Req),
    --     (∀ x : Req, fromJson? (toJson x) = .ok x) → e.validate r = .ok () →
    --     e.decodeRequest (e.encodeRequest r) = .ok r
    match addTodo.decodeRequest (addTodo.encodeRequest r) with
    | .ok r' => if r' != r then return s!"the request changed in a round trip: {repr r} → {repr r'}"
    | .error e => return s!"the re-encoded request was refused: {e}"
    -- Proposition: Lasm.RPC.Candidates.response_round_trip
    --   ∀ (Req Res : Type) [ToJson Res] [FromJson Res] (e : Endpoint Req Res) (r : Res),
    --     (∀ x : Res, fromJson? (toJson x) = .ok x) →
    --     e.decodeResponse 200 (e.encodeResponse (.ok r)) = .ok r
    match addTodo.decodeResponse 200 (addTodo.encodeResponse (.ok r)) with
    | .ok r' => if r' != r then return "the response changed in a round trip"
    | .error e => return s!"the encoded response was refused: {e}"
  | .error (.invalid m) =>
    -- Proposition: Lasm.RPC.Candidates.error_round_trip
    --   ∀ (Req Res : Type) [ToJson Res] [FromJson Res] (e : Endpoint Req Res) (m : String) (status : Nat),
    --     e.decodeResponse status (e.encodeResponse (.error m)) =
    --       .error (if status == 400 then .invalid m else .failed status m)
    for status in [400, 500, 200, input.size % 600] do
      match addTodo.decodeResponse status (addTodo.encodeResponse (.error m)) with
      | .error e => if e != (if status == 400 then .invalid m else .failed status m) then
          return s!"a {status} answer with the message {m.quote} was read as {repr e}"
      | .ok _ => return s!"a {status} answer with the message {m.quote} was read as a result"
  | .error e => return s!"decodeRequest refused with {e}, not as invalid"
  -- Printing is a normal form: what it prints parses and prints the same
  -- (`-0.0e-5` and `0` are equal numbers with different representations).
  -- Proposition: Lasm.RPC.Candidates.json_print_normal_form
  --   ∀ (s : String) (j : Json), parseJson s = .ok j → (parseJson j.compress).map Json.compress = .ok j.compress
  match Lasm.RPC.parseJson body with
  | .ok j =>
    match Lasm.RPC.parseJson j.compress with
    | .ok j' => if j'.compress != j.compress then return s!"JSON changed in a round trip: {j.compress} → {j'.compress}"
    | .error e => return s!"compressed JSON does not parse: {e}"
  | .error _ => pure ()
  return ""

end LasmFuzz
