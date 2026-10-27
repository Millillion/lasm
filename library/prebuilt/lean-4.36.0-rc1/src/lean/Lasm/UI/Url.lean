/-
URLs and routing for single-page apps, in pure Lean. `Url.parse` reads an
absolute URL (as `location.href` gives it); routes are ordinary pattern matches
on `Url.segments`:

    def route (u : Url) : Route :=
      match u.segments with
      | [] => .home
      | ["posts", id] => match id.toNat? with | some n => .post n | none => .notFound
      | _ => .notFound
-/

namespace Lasm.UI

structure Url where
  /-- `"https:"`, `"http:"`, … (with the colon, as `location.protocol`). -/
  protocol : String := "https:"
  host : String := ""
  port : Option Nat := none
  /-- The path, starting with `/` (percent-encoded, as in the URL). -/
  path : String := "/"
  /-- The query without `?` (none when absent). -/
  query : Option String := none
  /-- The fragment without `#` (none when absent). -/
  fragment : Option String := none
  deriving DecidableEq, Repr, Inhabited

namespace Url

private def hexVal (c : Char) : Option Nat :=
  if '0' ≤ c ∧ c ≤ '9' then some (c.toNat - '0'.toNat)
  else if 'a' ≤ c ∧ c ≤ 'f' then some (c.toNat - 'a'.toNat + 10)
  else if 'A' ≤ c ∧ c ≤ 'F' then some (c.toNat - 'A'.toNat + 10)
  else none

/-- Decodes `%XX` escapes (UTF-8); `none` if they are malformed. With
`plus`, `+` means a space (query strings). -/
def percentDecode (s : String) (plus : Bool := false) : Option String := Id.run do
  let cs := s.toList.toArray
  let mut out : ByteArray := .empty
  let mut i := 0
  while i < cs.size do
    let c := cs[i]!
    if c == '%' then
      match (cs[i+1]?.bind hexVal), (cs[i+2]?.bind hexVal) with
      | some h, some l => out := out.push (h * 16 + l).toUInt8; i := i + 3
      | _, _ => return none
    else
      if plus && c == '+' then out := out.push 32
      else out := out ++ c.toString.toUTF8
      i := i + 1
  return String.fromUTF8? out

private def unreserved (b : UInt8) : Bool :=
  (b ≥ 65 && b ≤ 90) || (b ≥ 97 && b ≤ 122) || (b ≥ 48 && b ≤ 57) || b == 45 || b == 46 || b == 95 || b == 126

private def hexDigit (n : Nat) : Char := "0123456789ABCDEF".toList[n]!

/-- Percent-encodes everything but unreserved characters (`encodeURIComponent`
without its `!'()*` exceptions). -/
def percentEncode (s : String) : String :=
  s.toUTF8.foldl (init := "") fun acc b =>
    if unreserved b then acc.push (Char.ofNat b.toNat)
    else acc.push '%' |>.push (hexDigit (b.toNat / 16)) |>.push (hexDigit (b.toNat % 16))

private def splitOnce (s : String) (c : Char) : String × Option String :=
  match s.splitOn c.toString with
  | [] => (s, none)
  | [a] => (a, none)
  | a :: rest => (a, some (c.toString.intercalate rest))

/-- Parses an absolute URL (`scheme://host[:port]/path?query#fragment`). -/
def parse (s : String) : Option Url := do
  let (beforeFrag, fragment) := splitOnce s '#'
  let (beforeQuery, query) := splitOnce beforeFrag '?'
  let parts := beforeQuery.splitOn "://"
  match parts with
  | [scheme, rest] =>
    if scheme.isEmpty then none
    let (authority, path) := match rest.splitOn "/" with
      | [] => ("", "/")
      | a :: segs => (a, "/" ++ "/".intercalate segs)
    let (host, port) ← match authority.splitOn ":" with
      | [h] => pure (h, none)
      | [h, p] => if p.isEmpty then pure (h, none) else do pure (h, some (← p.toNat?))
      | _ => none
    return { protocol := scheme.toLower ++ ":", host := host.toLower, port, path, query, fragment }
  | _ => none

/-- Parses a URL relative to `base` (absolute URLs, `/path`, `?query`, `#fragment`, `path`). -/
def parseRelative (base : Url) (s : String) : Option Url :=
  if (s.splitOn "://").length > 1 then parse s
  else
    let (beforeFrag, fragment) := splitOnce s '#'
    let (beforeQuery, query) := splitOnce beforeFrag '?'
    if beforeQuery.isEmpty then
      if s.startsWith "#" then some { base with fragment }
      else some { base with query, fragment }
    else if beforeQuery.startsWith "/" then some { base with path := beforeQuery, query, fragment }
    else
      let dir := match base.path.splitOn "/" with
        | [] => "/"
        | segs => "/".intercalate segs.dropLast ++ "/"
      some { base with path := dir ++ beforeQuery, query, fragment }

/-- The origin (`https://example.com:8080`). -/
def origin (u : Url) : String :=
  u.protocol ++ "//" ++ u.host ++ (match u.port with | some p => s!":{p}" | none => "")

/-- The path, query and fragment (what `pushUrl` takes for in-app links). -/
def pathAndQuery (u : Url) : String :=
  u.path ++ (match u.query with | some q => "?" ++ q | none => "") ++
    (match u.fragment with | some f => "#" ++ f | none => "")

protected def toString (u : Url) : String := u.origin ++ u.pathAndQuery

instance : ToString Url := ⟨Url.toString⟩

/-- The decoded, non-empty path segments: `/posts/12/` is `["posts", "12"]`. -/
def segments (u : Url) : List String :=
  (u.path.splitOn "/").filterMap fun seg =>
    if seg.isEmpty then none else some ((percentDecode seg).getD seg)

/-- The decoded query parameters, in order. -/
def params (u : Url) : List (String × String) :=
  match u.query with
  | none => []
  | some q =>
    (q.splitOn "&").filterMap fun kv =>
      if kv.isEmpty then none
      else
        let (k, v) := splitOnce kv '='
        let v := v.getD ""
        some ((percentDecode k true).getD k, (percentDecode v true).getD v)

/-- The first value of the query parameter `name`. -/
def param? (u : Url) (name : String) : Option String := u.params.lookup name

end Url

/-- Builds a path from segments (each percent-encoded) and query parameters:
`Url.build ["posts", "12"] [("tab", "comments")]` is `/posts/12?tab=comments`. -/
def Url.build (segments : List String) (params : List (String × String) := []) : String :=
  let path := "/" ++ "/".intercalate (segments.map Url.percentEncode)
  match params with
  | [] => path
  | ps => path ++ "?" ++ "&".intercalate (ps.map fun (k, v) => Url.percentEncode k ++ "=" ++ Url.percentEncode v)

end Lasm.UI
