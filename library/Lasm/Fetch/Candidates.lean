/-
# What is tested, not yet proved, about Lasm.Fetch

Candidates: propositions in the form of `Spec.lean` that tests check on
generated inputs but no theorem proves yet (the convention is described in
library/Lasm/UI/Candidates.lean and docs/TESTING_STRATEGY.md §4).
-/
import Lasm.Fetch
import Lasm.UI.Url

namespace Lasm.Fetch.Candidates
open Lasm.Fetch

/-! ## Request paths -/

/-- **No path segment is empty.** Whatever the request's URL (`//`,
a trailing `/`, escapes that decode to nothing printable), no segment of
`r.segments` is the empty string. Tested by: test/fuzz/native/LasmFuzz.lean -/
def segments_nonempty : Prop :=
  ∀ r : Request, ∀ s ∈ r.segments, s ≠ ""

/-- **A server decodes what a Lasm.UI page encodes.** For every string,
`Lasm.Fetch.percentDecode` reads `Lasm.UI.Url.percentEncode`'s output back
as that string: a path segment or query value a page builds reaches the
server's handler unchanged. Tested by: test/fuzz/native/LasmFuzz.lean -/
def percent_round_trip : Prop :=
  ∀ s : String, percentDecode (Lasm.UI.Url.percentEncode s) = s

/-! ## The Fastly host (src/wasi/lasm_fetch_wasi.c, `-DLASM_WASI_FASTLY`) -/

/-- The downstream request as Fastly's host holds it: method, URI, headers in
the order they arrived, body. -/
structure FastlyRequest where
  method : String
  uri : String
  headers : List (String × String)
  body : ByteArray

/-- A request Fastly's host ABI can carry (it separates names and values with
NUL): no NUL in the method, URI, names or values, and no empty name. -/
abbrev FastlyRequest.Representable (r : FastlyRequest) : Prop :=
  '\x00' ∉ r.method.toList ∧ '\x00' ∉ r.uri.toList ∧
    ∀ h ∈ r.headers, h.1 ≠ "" ∧ '\x00' ∉ h.1.toList ∧ '\x00' ∉ h.2.toList

/-- Headers as Fastly's host lists them: each name once, in the order of its
first appearance, with its values in order. -/
def groupedHeaders (hs : List (String × String)) : List (String × String) :=
  (hs.map (·.1)).eraseDups.flatMap fun n => hs.filter (·.1 == n)

/-- The choices an honest host makes within Fastly's ABI: how many header
names or values one call returns, how much of the body one read returns and
how much of a write one call takes, and when a buffer is too small (BUFLEN,
with the length it needs). -/
opaque FastlySchedule : Type

/-- `lasm_fetch_take_request`, or `lasm_fetch_take_request_head` then
`lasm_fetch_read` until the body ends, under an honest host that holds the
request and answers as the schedule chooses: (method, URL, headers, body),
or the message of the error. -/
opaque fastlyTakeRequest : FastlySchedule → FastlyRequest →
  Except String (String × String × List (String × String) × ByteArray)

/-- `lasm_fetch_send_response`, or `lasm_fetch_start_response`, writes and
`lasm_fetch_finish`, under an honest host: the status, header appends and
body bytes the host receives. -/
opaque fastlySendResponse : FastlySchedule → UInt16 → List (String × String) → ByteArray →
  Except String (UInt16 × List (String × String) × ByteArray)

/-- An http or https URL, part by part as written. -/
structure HttpUrl where
  tls : Bool
  userinfo : Option String
  host : String
  port : Option String
  path : String

/-- Whether every character of `s` is in `allowed`. -/
def uriChars (allowed s : String) : Bool := s.toList.all fun c => allowed.toList.contains c

/-- The URL's text. -/
def HttpUrl.text (u : HttpUrl) : String :=
  (if u.tls then "https" else "http") ++ "://" ++ (u.userinfo.map (· ++ "@")).getD "" ++ u.host ++
    (u.port.map (":" ++ ·)).getD "" ++ u.path

/-- The port, or the scheme's default when there is none or it is empty. -/
def HttpUrl.portOrDefault (u : HttpUrl) : String :=
  match u.port with
  | some p => if p = "" then (if u.tls then "443" else "80") else p
  | none => if u.tls then "443" else "80"

/-- The host name: an IPv6 address without its brackets. -/
def HttpUrl.hostName (u : HttpUrl) : String :=
  if u.host.startsWith "[" then String.ofList (u.host.toList.drop 1).dropLast else u.host

/-- A URL RFC 3986 allows: userinfo of unreserved characters, sub-delims,
`:` and `%`; a host that is a lowercase reg-name (or IPv4 address) or a
bracketed IPv6 address; a port of digits; a path, query and fragment of
their characters. -/
abbrev HttpUrl.Valid (u : HttpUrl) : Prop :=
  u.userinfo.all (uriChars "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-._~!$&'()*+,;=:%") ∧
  u.host ≠ "" ∧ (uriChars "abcdefghijklmnopqrstuvwxyz0123456789.-" u.host ∨
    (u.host.startsWith "[" ∧ u.host.endsWith "]" ∧ u.host.length > 2 ∧ uriChars "[]0123456789abcdef:" u.host)) ∧
  u.port.all (uriChars "0123456789") ∧
  (u.path = "" ∨ u.path.startsWith "/" ∨ u.path.startsWith "?" ∨ u.path.startsWith "#") ∧
  uriChars "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-._~!$&'()*+,;=:@/%?#" u.path

/-- `dynamic_backend` for a fetch of the URL without a named backend: the
backend's target and its host override, or `none` when it registers none. -/
opaque fastlyBackend : String → Option (String × String)

/-- **The Fastly host reads the request as Fastly holds it.** Whatever an
honest host chooses within the ABI (one name per call or many, short
reads, BUFLEN), the program gets the method, the URI, the headers grouped
as the host lists them, and the body, byte for byte.
Tested by: test/fuzz/native/fastly_driver.c -/
def fastly_request_read : Prop :=
  ∀ (s : FastlySchedule) (r : FastlyRequest), r.Representable →
    fastlyTakeRequest s r = .ok (r.method, r.uri, groupedHeaders r.headers, r.body)

/-- **The Fastly host sends the response as the program wrote it.** Whatever
part of each write an honest host takes, it receives the status, every
header in order and the body, byte for byte, sent once.
Tested by: test/fuzz/native/fastly_driver.c -/
def fastly_response_written : Prop :=
  ∀ (s : FastlySchedule) (status : UInt16) (headers : List (String × String)) (body : ByteArray),
    fastlySendResponse s status headers body = .ok (status, headers, body)

/-- **A fetch's dynamic backend is the URL's authority.** For every URL RFC
3986 allows, the backend targets its host and port (the scheme's default
when there is none, or it is empty) and overrides the Host with the host
name, whatever the userinfo, path, query or fragment hold.
Tested by: test/fuzz/native/fastly_driver.c -/
def fastly_backend_authority : Prop :=
  ∀ (u : HttpUrl), u.Valid →
    fastlyBackend u.text = some (u.host ++ ":" ++ u.portOrDefault, u.hostName)

end Lasm.Fetch.Candidates
