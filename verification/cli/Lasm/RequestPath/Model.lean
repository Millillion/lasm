/-
# The request-path model

How a server reads the path and query of an HTTP request's URL: the path
split at `/` (and `\`, as WHATWG URLs treat it in http(s) URLs), dot
segments (`.`, `..` and their escaped forms such as `%2e%2E`) resolved as a
browser resolves them, then percent-decoded; the query split at `&` and
`=`, with `+` read as a space.

This is the pure request model of Lasm's former HTTP handler library, which
the library shipped until it was removed (docs/api/decisions/0.2.md, A44–A46,
0.2-1): the code is the same,
function for function, and its proved and tested propositions moved here with
it (Spec.lean, Theorems.lean, Candidates.lean). Nothing in Lasm runs it any
more: it is the specification an application's own path handling can be held
to, as the templates' copies are (templates/fetch/Fastly.lean and
WasiHttp.lean resolve dot segments the same way), and the place to prove more
about it. test/library-proofs/RequestPath.lean checks its candidates on
generated URLs.
-/

namespace Lasm.RequestPath

/-- Decodes `%XX` escapes (and `+` as a space, with `plus`). Invalid escapes
are kept as they are; invalid UTF-8 keeps the original text. -/
def percentDecode (s : String) (plus : Bool := false) : String := Id.run do
  let hex (c : Char) : Option Nat :=
    if '0' ≤ c && c ≤ '9' then some (c.toNat - '0'.toNat)
    else if 'a' ≤ c && c ≤ 'f' then some (c.toNat - 'a'.toNat + 10)
    else if 'A' ≤ c && c ≤ 'F' then some (c.toNat - 'A'.toNat + 10)
    else none
  let bytes := s.toUTF8
  let mut out := ByteArray.empty
  let mut i := 0
  while i < bytes.size do
    let b := bytes[i]!
    if b == 37 && i + 2 < bytes.size then
      match hex (Char.ofNat bytes[i+1]!.toNat), hex (Char.ofNat bytes[i+2]!.toNat) with
      | some h, some l => out := out.push (h * 16 + l).toUInt8; i := i + 3; continue
      | _, _ => pure ()
    out := out.push (if plus && b == 43 then 32 else b)
    i := i + 1
  return (String.fromUTF8? out).getD s


/-- An HTTP request, as far as its URL goes: `url` is absolute
(`https://example.com/path?query`) where the platform supplies the host, or
the request target alone (`/path?query`). -/
structure Request where
  method : String := "GET"
  url : String
  deriving Inhabited

namespace Request

/-! ### The path, as WHATWG URLs resolve it

Every platform hands the handler the same path: Bun and the edge isolates
build `url` with a WHATWG URL parser, which removes dot segments, so Lasm
resolves the raw path the same way on every host (#27). -/

/-- Splits a raw path at `/` and at `\`, which WHATWG URLs treat as `/` in
http(s) URLs. -/
def splitPath (p : String) : List String :=
  go p.toList [] []
where
  go : List Char → List Char → List String → List String
    | [], cur, acc => (String.ofList cur.reverse :: acc).reverse
    | c :: cs, cur, acc =>
      if c == '/' || c == '\\' then go cs [] (String.ofList cur.reverse :: acc)
      else go cs (c :: cur) acc

/-- Whether a raw segment is a dot segment (`.`, `%2e`) or a double-dot
segment (`..`, `.%2e`, `%2E%2e`, …): exactly WHATWG's sets, since `%2e` and
`%2E` are the only escapes that decode to `.`. -/
def isDot (s : String) : Bool := percentDecode s == "."
def isDotDot (s : String) : Bool := percentDecode s == ".."

/-- WHATWG URL path parsing for the segments after the leading `/`
(`stack` reversed). A `..` removes the previous segment; a final `.` or `..`
leaves an empty last segment (a trailing `/`). -/
def resolve : List String → List String → List String
  | stack, [] => stack
  | stack, [s] =>
    if isDotDot s then "" :: stack.tail
    else if isDot s then "" :: stack
    else s :: stack
  | stack, s :: rest =>
    if isDotDot s then resolve stack.tail rest
    else if isDot s then resolve stack rest
    else resolve (s :: stack) rest

/-- A segment `resolve` may keep: empty, or not a dot segment. -/
def Kept (s : String) : Prop := s = "" ∨ (percentDecode s ≠ "." ∧ percentDecode s ≠ "..")

theorem resolve_kept : ∀ (stack input : List String), (∀ x ∈ stack, Kept x) →
    ∀ x ∈ resolve stack input, Kept x
  | stack, [], h => by simpa [resolve] using h
  | stack, [s], h => by
    have ht : ∀ x ∈ stack.tail, Kept x := fun x hx => h x (List.mem_of_mem_tail hx)
    simp only [resolve]
    split
    · intro x hx; cases hx with
      | head => exact Or.inl rfl
      | tail _ hx => exact ht x hx
    split
    · intro x hx; cases hx with
      | head => exact Or.inl rfl
      | tail _ hx => exact h x hx
    · rename_i h1 h2
      intro x hx; cases hx with
      | head => exact Or.inr ⟨by simpa [isDot] using h2, by simpa [isDotDot] using h1⟩
      | tail _ hx => exact h x hx
  | stack, s :: t :: rest, h => by
    have ht : ∀ x ∈ stack.tail, Kept x := fun x hx => h x (List.mem_of_mem_tail hx)
    simp only [resolve]
    split
    · exact resolve_kept _ _ ht
    split
    · exact resolve_kept _ _ h
    · rename_i h1 h2
      apply resolve_kept
      intro x hx; cases hx with
      | head => exact Or.inr ⟨by simpa [isDot] using h2, by simpa [isDotDot] using h1⟩
      | tail _ hx => exact h x hx

/-- Whether `s` is a URL scheme (`http`, `https`, `x-y+z.1`): a letter, then
letters, digits, `+`, `-` and `.`. -/
def isScheme (s : String) : Bool :=
  match s.toList with
  | c :: cs => c.isAlpha && cs.all fun c => c.isAlphanum || c == '+' || c == '-' || c == '.'
  | [] => false

/-- The raw path of `url`: from the `/` after the host, without the query. -/
def rawPath (url : String) : String :=
  -- Drop the query and fragment first: they may contain `://` (#76).
  let beforeQuery := (url.takeWhile (fun c => c != '?' && c != '#')).toString
  -- Only a scheme before the first `://` makes the URL absolute: the path
  -- itself may hold `://` (`/go/https://example.com`), which once made the
  -- whole URL the path (found by the former lean-fetch-request fuzz target).
  match beforeQuery.splitOn "://" with
    | scheme :: rest@(_ :: _) =>
      if isScheme scheme then (("://".intercalate rest).dropWhile (fun c => c != '/' && c != '\\')).toString
      else beforeQuery
    | _ => beforeQuery

/-- The path's raw segments, resolved: `\\` counts as `/`, and `.`, `..`
and their escaped forms (`%2e`, `.%2E`, …) are removed as a browser removes
them. Empty segments stay (`/a//b`, a trailing `/`). -/
def pathSegments (r : Request) : List String :=
  let raw := rawPath r.url
  let rest := match raw.toList with
    | c :: cs => if c == '/' || c == '\\' then String.ofList cs else raw
    | [] => raw
  (resolve [] (splitPath rest)).reverse

/-- The URL's path (`/a/b`), without the query; `/` when it is empty. Dot
segments are resolved as in a browser on every platform:
`/hello/../hello/Ada` is `/hello/Ada`, and `\\` counts as `/`. -/
def path (r : Request) : String :=
  "/" ++ "/".intercalate r.pathSegments

/-- The URL's query string, without `?` (empty when there is none). -/
def query (r : Request) : String :=
  match r.url.splitOn "?" with
  | _ :: rest => ((("?".intercalate rest).takeWhile (· != '#'))).toString
  | [] => ""

/-- The decoded query parameters, in order (`a=1&b=x%20y` → `[("a","1"),("b","x y")]`). -/
def queryParams (r : Request) : List (String × String) :=
  (r.query.splitOn "&").filterMap fun part =>
    if part.isEmpty then none else
    match part.splitOn "=" with
    | [k] => some (percentDecode k true, "")
    | k :: v => some (percentDecode k true, percentDecode ("=".intercalate v) true)
    | [] => none

/-- The first query parameter named `name`. -/
def queryParam? (r : Request) (name : String) : Option String :=
  r.queryParams.lookup name

/-- The path's segments: `/hello/Ada` → `["hello", "Ada"]` (decoded). Empty
segments are dropped, and dot segments are already resolved, so no segment is
ever `.` or `..` (`segments_no_dot_segments`). -/
def segments (r : Request) : List String :=
  r.pathSegments.filter (!·.isEmpty) |>.map (percentDecode ·)

/-- No segment is `.` or `..`, whatever the request: a handler that maps
segments to files or keys never sees a parent reference, on any platform. -/
theorem segments_no_dot_segments (r : Request) :
    ∀ s ∈ r.segments, s ≠ "." ∧ s ≠ ".." := by
  intro s hs
  simp only [segments, List.mem_map, List.mem_filter] at hs
  obtain ⟨x, ⟨hx, hne⟩, rfl⟩ := hs
  have hk := resolve_kept [] _ (by simp) x (by simpa [pathSegments] using hx)
  rcases hk with h | h
  · subst h; simp at hne
  · exact h

-- Checked when the library builds: a query or fragment containing `://`
-- doesn't change the path (#76), and dot segments resolve (#27).
def pathOf (url : String) : String := ({ method := "GET", url } : Request).path
#guard pathOf "http://h/hello/Ada?next=http://example.com/x#a://b" == "/hello/Ada"
#guard pathOf "/hello/Ada?next=http://example.com/x" == "/hello/Ada"
#guard pathOf "http://h:8080/x#frag://y" == "/x"
#guard pathOf "http://h" == "/"
#guard pathOf "http://h/hello/%2e%2E/hello/Ada" == "/hello/Ada"
#guard ({ method := "GET", url := "http://h/a/b?u=http://c/d" } : Request).segments == ["a", "b"]
-- `://` in the path itself (found by fuzzing).
#guard pathOf "http://h/go/https://example.com/x" == "/go/https://example.com/x"
#guard pathOf "/go/https://example.com/x" == "/go/https://example.com/x"
#guard pathOf "/a://b" == "/a://b"
#guard pathOf "http://h\\a/b" == "/a/b"

end Request

end Lasm.RequestPath
