/-
Ledger's HTTP requests and responses, in pure Lean: what every platform's
server hands Ledger (`Server/JsServe.lean` on the JavaScript runtimes,
`Server/NodeServe.lean` on Node) and what Ledger answers. The request's path is read as a browser reads it (WHATWG URLs:
`.` and `..` resolved, `\` as `/`) on every platform, so a handler that maps
segments to keys never sees a parent reference (`segments_no_dot_segments`).

Written for this app when Lasm.Fetch, which used to provide these types, was
retired (Lasm 0.7.0 moved servers onto each platform's own bindings).
-/
import Std.Async.Basic

namespace Ledger.Server.Web
open Std.Async

/-- An HTTP request. `url` is absolute (`https://example.com/path?query`)
where the platform supplies the host; `body` holds the request body's bytes. -/
structure Request where
  method : String
  url : String
  headers : Array (String × String) := #[]
  body : ByteArray := .empty
  deriving Inhabited

/-- An HTTP response. -/
structure Response where
  status : UInt16 := 200
  headers : Array (String × String) := #[]
  body : ByteArray := .empty
  deriving Inhabited

/-- A request handler. -/
abbrev Handler := Request → Async Response

private def lower (s : String) : String := s.map Char.toLower

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

namespace Request

/-- Splits a raw path at `/` and at `\`, which WHATWG URLs treat as `/` in
http(s) URLs. -/
private def splitPath (p : String) : List String :=
  go p.toList [] []
where
  go : List Char → List Char → List String → List String
    | [], cur, acc => (String.ofList cur.reverse :: acc).reverse
    | c :: cs, cur, acc =>
      if c == '/' || c == '\\' then go cs [] (String.ofList cur.reverse :: acc)
      else go cs (c :: cur) acc

/-- A dot segment (`.`, `%2e`) or a double-dot segment (`..`, `.%2e`, …). -/
private def isDot (s : String) : Bool := percentDecode s == "."
private def isDotDot (s : String) : Bool := percentDecode s == ".."

/-- WHATWG URL path parsing for the segments after the leading `/`
(`stack` reversed). A `..` removes the previous segment; a final `.` or `..`
leaves an empty last segment (a trailing `/`). -/
private def resolve : List String → List String → List String
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
private def Kept (s : String) : Prop := s = "" ∨ (percentDecode s ≠ "." ∧ percentDecode s ≠ "..")

private theorem resolve_kept : ∀ (stack input : List String), (∀ x ∈ stack, Kept x) →
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

/-- Whether `s` is a URL scheme: a letter, then letters, digits, `+`, `-` and `.`. -/
private def isScheme (s : String) : Bool :=
  match s.toList with
  | c :: cs => c.isAlpha && cs.all fun c => c.isAlphanum || c == '+' || c == '-' || c == '.'
  | [] => false

/-- The raw path of `url`: from the `/` after the host, without the query. -/
private def rawPath (url : String) : String :=
  -- The query and fragment first: they may contain `://`.
  let beforeQuery := (url.takeWhile (fun c => c != '?' && c != '#')).toString
  -- Only a scheme before the first `://` makes the URL absolute: the path
  -- itself may hold `://` (`/go/https://example.com`).
  match beforeQuery.splitOn "://" with
    | scheme :: rest@(_ :: _) =>
      if isScheme scheme then (("://".intercalate rest).dropWhile (fun c => c != '/' && c != '\\')).toString
      else beforeQuery
    | _ => beforeQuery

/-- The path's raw segments, resolved as a browser resolves them. Empty
segments stay (`/a//b`, a trailing `/`). -/
private def pathSegments (r : Request) : List String :=
  let raw := rawPath r.url
  let rest := match raw.toList with
    | c :: cs => if c == '/' || c == '\\' then String.ofList cs else raw
    | [] => raw
  (resolve [] (splitPath rest)).reverse

/-- The URL's path (`/a/b`), without the query; `/` when it is empty. -/
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

/-- The path's segments: `/articles/a-b` → `["articles", "a-b"]` (decoded).
Empty segments are dropped and dot segments are resolved. -/
def segments (r : Request) : List String :=
  r.pathSegments.filter (!·.isEmpty) |>.map (percentDecode ·)

/-- No segment is `.` or `..`, whatever the request: a handler that maps
segments to keys or files never sees a parent reference, on any platform. -/
theorem segments_no_dot_segments (r : Request) :
    ∀ s ∈ r.segments, s ≠ "." ∧ s ≠ ".." := by
  intro s hs
  simp only [segments, List.mem_map, List.mem_filter] at hs
  obtain ⟨x, ⟨hx, hne⟩, rfl⟩ := hs
  have hk := resolve_kept [] _ (by simp) x (by simpa [pathSegments] using hx)
  rcases hk with h | h
  · subst h; simp at hne
  · exact h

private def pathOf (url : String) : String := ({ method := "GET", url } : Request).path
#guard pathOf "http://h/hello/Ada?next=http://example.com/x#a://b" == "/hello/Ada"
#guard pathOf "/hello/Ada?next=http://example.com/x" == "/hello/Ada"
#guard pathOf "http://h" == "/"
#guard pathOf "http://h/hello/%2e%2E/hello/Ada" == "/hello/Ada"
#guard pathOf "http://h/go/https://example.com/x" == "/go/https://example.com/x"
#guard pathOf "http://h\\a/b" == "/a/b"
#guard ({ method := "GET", url := "http://h/a/b?u=http://c/d" } : Request).segments == ["a", "b"]

/-- The first header named `name`, ignoring case. -/
def header? (r : Request) (name : String) : Option String :=
  let n := lower name
  (r.headers.find? fun (k, _) => lower k == n).map (·.2)

/-- The body as UTF-8 text (empty if it is not valid UTF-8). -/
def text (r : Request) : String := (String.fromUTF8? r.body).getD ""

end Request

namespace Response

/-- A response with a body and a content type. -/
def withBody (body : ByteArray) (contentType : String) (status : UInt16 := 200) : Response :=
  { status, headers := #[("content-type", contentType)], body }

/-- `text/plain; charset=utf-8` -/
def text (body : String) (status : UInt16 := 200) : Response :=
  withBody body.toUTF8 "text/plain; charset=utf-8" status
/-- `text/html; charset=utf-8` -/
def html (body : String) (status : UInt16 := 200) : Response :=
  withBody body.toUTF8 "text/html; charset=utf-8" status
/-- `application/json` (the body is JSON text). -/
def json (body : String) (status : UInt16 := 200) : Response :=
  withBody body.toUTF8 "application/json" status
/-- Bytes with a content type. -/
def bytes (body : ByteArray) (contentType : String := "application/octet-stream") (status : UInt16 := 200) : Response :=
  withBody body contentType status
/-- An empty response with this status. -/
def empty (status : UInt16 := 204) : Response := { status }
/-- 404, as text. -/
def notFound : Response := text "Not Found\n" 404
/-- Adds a header. -/
def withHeader (r : Response) (name value : String) : Response :=
  { r with headers := r.headers.push (name, value) }

/-- The body as UTF-8 text, if it is valid UTF-8. -/
def text? (r : Response) : Option String := String.fromUTF8? r.body

end Response

/-- Runs the handler; an error becomes a 500 response (and a line on
stderr). A `HEAD` request runs the handler as `GET` (its body is not sent). -/
def respond (handler : Handler) (req : Request) : Async Response := do
  try handler (if req.method == "HEAD" then { req with method := "GET" } else req)
  catch e =>
    IO.eprintln s!"Ledger: the handler failed for {req.method} {req.path}: {e}"
    return Response.text "Internal Server Error\n" 500

/-- Whether a response to `method` with `status` has no body. -/
def bodyless (method : String) (status : UInt16) : Bool :=
  method == "HEAD" || status == 101 || status == 204 || status == 205 || status == 304

end Ledger.Server.Web
