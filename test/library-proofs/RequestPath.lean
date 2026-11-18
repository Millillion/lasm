/-
The property test of the request-path model (verification/cli/Lasm/RequestPath):
its candidates, and the properties the former lean-fetch-request fuzz target
checked of the same code, evaluated on generated URLs and strings.
`node scripts/library-proofs.mjs` runs it with `lean --run` after it compiles
the model, and fails when it reports a counterexample.

The inputs: the cases fuzzing found, then 20000 URLs drawn by a fixed
pseudo-random generator from the characters that matter to the model (`/`,
`\`, `.`, `%`, hex digits, `?`, `#`, `&`, `=`, `+`, `:`, letters, a space,
non-ASCII text and escapes of invalid UTF-8), absolute or not.
-/
import Lasm.RequestPath.Model
import Lasm.UI.Url
open Lasm.RequestPath

namespace RequestPathTest

/-- A linear congruential generator (Knuth's MMIX constants). -/
def next (seed : UInt64) : UInt64 := seed * 6364136223846793005 + 1442695040888963407

def pieces : Array String := #["/", "/", "/", "\\", ".", "..", "%2e", "%2E", "%2", "%", "%25", "%41", "%c3%a9", "%ff", "%00",
  "a", "b", "Ada", "é", "日本", "?", "#", "&", "=", "+", ":", "://", "http://h", " ", "x=1", "%20", "%2F", "%5C", ""]

/-- A string of up to `n` pieces, and the next seed. -/
def draw (seed : UInt64) (n : Nat) : String × UInt64 := Id.run do
  let mut s := next seed
  let count := (s >>> 33).toNat % (n + 1)
  let mut out := ""
  for _ in [0:count] do
    s := next s
    out := out ++ pieces[(s >>> 33).toNat % pieces.size]!
  return (out, s)

def pathOf (url : String) : String := ({ url } : Request).path

/-- "" or a description of the property `url` breaks. -/
def check (url : String) : String := Id.run do
  let req : Request := { url }
  let path := req.path
  unless path.startsWith "/" do return s!"path {path.quote} does not start with /"
  if path.any (fun c => c == '?' || c == '#' || c == '\\') then return s!"path {path.quote} holds ?, # or \\"
  let again := pathOf ("http://h" ++ path)
  if again != path then return s!"resolving {path.quote} again gives {again.quote}"
  -- (Spec.segments_no_dot_segments is proved; this checks the model still computes what it states.)
  for s in req.segments do
    if s == "." || s == ".." then return s!"a dot segment in {url.quote}"
  -- Proposition: Lasm.RequestPath.Candidates.segments_nonempty
  --   ∀ r : Request, ∀ s ∈ r.segments, s ≠ ""
  unless decide (∀ s ∈ req.segments, s ≠ "") do return s!"an empty segment in {url.quote}"
  if req.query.any (· == '#') then return s!"the query {req.query.quote} holds #"
  if req.queryParams.length > (req.query.splitOn "&").length then return s!"more parameters than parts in {url.quote}"
  if !url.any (· == '%') && percentDecode url != url then return s!"percentDecode changed {url.quote}"
  return ""

/-- "" or the string `percentDecode` does not read back. -/
def roundTrip (s : String) : String :=
  -- Proposition: Lasm.RequestPath.Candidates.percent_round_trip
  --   ∀ s : String, percentDecode (Lasm.UI.Url.percentEncode s) = s
  if decide (percentDecode (Lasm.UI.Url.percentEncode s) = s) then ""
  else s!"percentDecode does not read percentEncode {s.quote} back"

/-- The cases fuzzing found (the `://` in a path made the whole URL the path) and edge cases. -/
def found : List String := ["/go/https://example.com/x", "http://h/go/https://example.com/x", "/a://b", "http://h\\a/b",
  "http://h/hello/%2e%2E/hello/Ada", "http://h", "", "//", "/./", "/../..", "%2e%2e/x", "http://h:8080/x#frag://y",
  "/hello/Ada?next=http://example.com/x"]

end RequestPathTest

open RequestPathTest in
def main : IO UInt32 := do
  let mut failures : Array String := #[]
  for url in found do
    for problem in [check url, roundTrip url] do
      unless problem.isEmpty do failures := failures.push problem
  let mut seed : UInt64 := 2026
  let cases := 20000
  for i in [0:cases] do
    let (body, s1) := draw seed 12
    let (text, s2) := draw s1 6
    seed := s2
    let url := if i % 3 == 0 then "http://example.com" ++ body else if i % 3 == 1 then body else "https://h:8443/" ++ body
    for problem in [check url, roundTrip text, roundTrip url] do
      unless problem.isEmpty do failures := failures.push problem
  for f in failures.toList.take 20 do IO.eprintln s!"counterexample: {f}"
  if failures.isEmpty then
    IO.println s!"ok   the request-path model: {found.length + cases} URLs, every property holds"
    return 0
  else
    IO.eprintln s!"{failures.size} counterexamples"
    return 1
