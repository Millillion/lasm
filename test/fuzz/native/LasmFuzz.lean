/-
Fuzz entry points for Lasm's Lean boundaries, compiled to C with the managed
Lean and linked into libFuzzer binaries (test/fuzz/native/build.mjs,
lean_driver.c). Each takes the fuzz input and returns "" or a description of
the property it broke; the driver aborts on a non-empty answer, and a Lean
panic aborts too (lean_set_exit_on_panic). The candidates of
library/Lasm/Fetch/Candidates.lean are
checked here: each is cited by a `Proposition:` line, with its statement, and
its body is evaluated on every input (docs/TESTING_STRATEGY.md §4).
-/
import Lasm.Fetch
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

end LasmFuzz
