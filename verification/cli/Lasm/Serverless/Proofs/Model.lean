/-
# The function platforms' HTTP mapping, in Lean

A model of src/serverless/: how each function platform's request becomes the
web Request that the platform shim hands to the fetch handler the program
publishes, and how the handler's reply becomes the platform's response. It is
written to mirror the JavaScript function for function:

| src/serverless/                              | here                                   |
| -------------------------------------------- | -------------------------------------- |
| lasm-function.mjs `requestTarget`              | `requestTarget`, `escape`              |
| lasm-function.mjs `plainHost`                  | `plainHost`                            |
| lasm-function.mjs `joinCookies`, `cookieComma` | `joinCookies`, `commas`                |
| lasm-function.mjs `outgoingHeaders`            | `outgoing`, `keep`                     |
| lasm-function.mjs `isTextual`                  | `textualType`, `body`                  |
| lasm-function.mjs `webResponse` (Netlify)    | `webNullBody`                          |
| lasm-function.mjs `parseSetCookie`             | `parseSetCookie`, `applyAttribute`     |
| lasm-function.mjs `azureReply` (Azure)         | `azureReply`                           |
| lasm-lambda.mjs `query` (URLSearchParams)    | `formEncode`                           |
| lasm-lambda.mjs `rawQuery`, `headerPairs`    | `rawQuery`, `pairsOf`                  |
| lasm-lambda.mjs `decode`                     | `bodyIn`                               |
| lasm-lambda.mjs `handler`, REST and ALB      | `restRequest`, `restResponse`          |
| lasm-lambda.mjs `handler`, payload 2.0       | `v2Request`, `v2Response`              |
| lasm-lambda.mjs `cloudFront`                 | `cloudFrontRequest`, `cloudFrontResponse` |

Vercel and Google Cloud Functions (`pipe`, node-serve.mjs `toRequest`) and
Netlify and Azure Functions (`fetchLean`, the Azure handler) keep the
platform's own request target; Lambda's events are mapped here first.

What is left to the platform, as the JavaScript leaves it: Node's base64
codec (a body the model marks `base64` travels as Node's base64 of those
bytes), `Date.parse` (the `validDate` argument), `Number` of a Max-Age's
digits, and the order in which a JavaScript object lists its keys (header
maps are compared as maps). The texts are what the platforms deliver:
header names are HTTP tokens and reply header values Latin-1, as Node's
`http` gives them; there, `toLowerCase` is the ASCII lowering used here.
No string holds a lone surrogate (Lean strings cannot).

This is a specification, not shipped code: it is in the proofs-only target.
Lasm.Serverless.Proofs.Mapping proves its properties (Lasm/Serverless/Spec.lean),
and the serverless-http fuzz target (test/fuzz/targets/serverless-http.mjs)
runs it, through test/fuzz/support/ServerlessModel.lean, on every input and
fails when the JavaScript does anything else.
-/

namespace Lasm.Serverless

/-- Header fields in order, as `[[name, value], …]`. -/
abbrev Headers := List (String × String)

/-! ## Characters -/

/-- JavaScript's `\s` (and what `String.prototype.trim` removes). -/
def jsSpace (c : Char) : Bool :=
  c == ' ' || c == '\t' || c == '\n' || c == '\x0b' || c == '\x0c' || c == '\r' || c.toNat == 0xa0 ||
  c.toNat == 0x1680 || (0x2000 ≤ c.toNat && c.toNat ≤ 0x200a) || c.toNat == 0x2028 || c.toNat == 0x2029 ||
  c.toNat == 0x202f || c.toNat == 0x205f || c.toNat == 0x3000 || c.toNat == 0xfeff

/-- `String.prototype.trim`. -/
def trim (s : String) : String :=
  String.ofList ((s.toList.dropWhile jsSpace).reverse.dropWhile jsSpace).reverse

/-- ASCII lowering (`toLowerCase` on the texts the platforms deliver). -/
def lower (s : String) : String := String.ofList (s.toList.map Char.toLower)

/-- A visible ASCII character, `!` to `~`: what a request target may hold. -/
def printable (c : Char) : Bool := 0x21 ≤ c.toNat && c.toNat ≤ 0x7e

/-! ## Request targets -/

/-- An uppercase hexadecimal digit. -/
def hexDigit (n : Nat) : Char := if n < 10 then Char.ofNat (48 + n) else Char.ofNat (55 + n)

/-- `%XX`, uppercase. -/
def pct (b : UInt8) : List Char := ['%', hexDigit (b.toNat / 16), hexDigit (b.toNat % 16)]

/-- What a path cannot carry in a request target: `[^\x21-\x7e]|[?#]`. -/
def pathUnsafe (c : Char) : Bool := !printable c || c == '?' || c == '#'

/-- What a query cannot carry in a request target: `[^\x21-\x7e]|#`. -/
def queryUnsafe (c : Char) : Bool := !printable c || c == '#'

/-- `escape(text, unsafe)`: each unsafe character percent-encoded as UTF-8. -/
def escape (bad : Char → Bool) (l : List Char) : List Char :=
  l.flatMap fun c => if bad c then (String.utf8EncodeChar c).flatMap pct else [c]

/-- `requestTarget(path, query)`: the target http.request sends, `path || '/'`
escaped, then `?` and the escaped query when there is one. -/
def requestTarget (path query : String) : String :=
  String.ofList (escape pathUnsafe (if path.isEmpty then ['/'] else path.toList) ++
    if query.isEmpty then [] else '?' :: escape queryUnsafe query.toList)

/-- The path of a request target as a server reads it: up to the first `?`. -/
def pathOf (t : String) : String := String.ofList (t.toList.takeWhile (· != '?'))

/-- The query of a request target: after the first `?`, if there is one. -/
def queryOf (t : String) : Option String :=
  match t.toList.dropWhile (· != '?') with
  | [] => none
  | _ :: q => some (String.ofList q)

/-! ## Query strings -/

/-- The bytes `URLSearchParams` writes as themselves: `*-._`, digits and letters. -/
def formSafe (b : UInt8) : Bool :=
  (48 ≤ b.toNat && b.toNat ≤ 57) || (65 ≤ b.toNat && b.toNat ≤ 90) || (97 ≤ b.toNat && b.toNat ≤ 122) ||
  b.toNat == 42 || b.toNat == 45 || b.toNat == 46 || b.toNat == 95

/-- One byte as `application/x-www-form-urlencoded` writes it. -/
def formByte (b : UInt8) : List Char :=
  if formSafe b then [Char.ofNat b.toNat] else if b.toNat == 32 then ['+'] else pct b

/-- A name or value as `URLSearchParams` writes it (its UTF-8 bytes). -/
def formText (s : String) : List Char := s.toUTF8.data.toList.flatMap formByte

/-- Parts joined with `sep` between them. -/
def joinWith (sep : Char) : List (List Char) → List Char
  | [] => []
  | [x] => x
  | x :: xs => x ++ sep :: joinWith sep xs

/-- `new URLSearchParams(pairs).toString()`. -/
def formEncode (pairs : List (String × String)) : String :=
  String.ofList (joinWith '&' (pairs.map fun (k, v) => formText k ++ '=' :: formText v))

/-- A hexadecimal digit's value. -/
def unhex (c : Char) : Option Nat :=
  if '0' ≤ c && c ≤ '9' then some (c.toNat - 48)
  else if 'A' ≤ c && c ≤ 'F' then some (c.toNat - 55)
  else if 'a' ≤ c && c ≤ 'f' then some (c.toNat - 87)
  else none

/-- The bytes of a name or value of `application/x-www-form-urlencoded` text
(WHATWG URL, "urlencoded parsing"): `+` is a space, `%XX` a byte, a `%`
without two hexadecimal digits itself, any other character its UTF-8. -/
def formBytes : List Char → List UInt8
  | [] => []
  | c :: r =>
    if c == '+' then 32 :: formBytes r
    else if c == '%' then
      match _hr : r with
      | a :: b :: r' =>
        match unhex a, unhex b with
        | some x, some y => (16 * x + y).toUInt8 :: formBytes r'
        | _, _ => 37 :: formBytes r
      | _ => 37 :: formBytes r
    else String.utf8EncodeChar c ++ formBytes r
termination_by l => l.length
decreasing_by all_goals simp_all <;> omega

/-- A name or value decoded, when its bytes are UTF-8. -/
def formText? (l : List Char) : Option String := String.fromUTF8? ⟨(formBytes l).toArray⟩

/-- Before and after the first `sep` (`indexOf`), if there is one. -/
def splitFirst (sep : Char) (l : List Char) : Option (List Char × List Char) :=
  match l.dropWhile (· != sep) with
  | [] => none
  | _ :: after => some (l.takeWhile (· != sep), after)

/-- Splits at every `sep` (`split`). -/
def splitOn (sep : Char) : List Char → List (List Char)
  | [] => [[]]
  | c :: r =>
    if c == sep then [] :: splitOn sep r
    else match splitOn sep r with
      | p :: ps => (c :: p) :: ps
      | [] => [[c]]

/-- How a server reads a query (`new URLSearchParams(query)`): the pairs,
split at `&` and at each one's first `=`. -/
def formDecode (s : String) : Option (List (String × String)) :=
  if s.isEmpty then some []
  else (splitOn '&' s.toList).mapM fun part =>
    match splitFirst '=' part with
    | some (k, v) => do pure (← formText? k, ← formText? v)
    | none => do pure (← formText? part, "")

/-- The pairs of an object and its multi-value form (`query`, `headerPairs`):
the multi-value form when the event has one, each name once per value. -/
def pairsOf (single : Option (List (String × String))) (multi : Option (List (String × List String))) :
    List (String × String) :=
  match multi with
  | some m => m.flatMap fun (k, vs) => vs.map (k, ·)
  | none => single.getD []

/-- `rawQuery(single, multi)`: an ALB's query values as the client sent them. -/
def rawQuery (single : Option (List (String × String))) (multi : Option (List (String × List String))) : String :=
  String.intercalate "&" ((pairsOf single multi).map fun (k, v) => k ++ "=" ++ v)

/-! ## Cookies -/

/-- A token character (RFC 9110 `tchar`; the lookahead of `cookieComma`). -/
def tokenChar (c : Char) : Bool :=
  c.isAlphanum || "!#$%&'*+-.^_`|~".toList.contains c

/-- `(?=[tchar]+=)`: a `name=` starts here. -/
def startsPair (l : List Char) : Bool :=
  let name := l.takeWhile tokenChar
  !name.isEmpty && (l.drop name.length).head? == some '='

/-- `value.replace(/\s*,\s*(?=[tchar]+=)/g, '; ')`, left to right: `pending` is
the white space read since the last other character, `skip` that a comma was
just replaced (its following white space goes with it). -/
def commas (pending : List Char) (skip : Bool) : List Char → List Char
  | [] => pending
  | c :: rest =>
    if skip && jsSpace c then commas [] true rest
    else if jsSpace c then commas (pending ++ [c]) false rest
    else if c == ',' && startsPair (rest.dropWhile jsSpace) then ';' :: ' ' :: commas [] true rest
    else pending ++ c :: commas [] false rest

/-- A Cookie field's value with the commas a proxy joined cookies with made `; `. -/
def cookieText (s : String) : String := String.ofList (commas [] false s.toList)

/-- Whether a field is a Cookie field. -/
def isCookie (name : String) : Bool := lower name == "cookie"

/-- The joined value: every Cookie field's `cookieText`, the empty ones left out, joined with `; `. -/
def joinedCookie (hs : Headers) : String :=
  String.intercalate "; " (((hs.filter (isCookie ·.1)).map (cookieText ·.2)).filter (!·.isEmpty))

/-- The first Cookie field holds `joined` (none when it is empty); the others go. -/
def place (joined : String) : Headers → Headers
  | [] => []
  | (n, v) :: r =>
    if isCookie n then (if joined.isEmpty then [] else [(n, joined)]) ++ r.filter (!isCookie ·.1)
    else (n, v) :: place joined r

/-- `joinCookies(pairs)`: one Cookie field, in the first one's place. -/
def joinCookies (hs : Headers) : Headers := place (joinedCookie hs) hs

/-! ## The request forward() sends -/

/-- `plainHost`: printable ASCII without `/ ? # \ @`. -/
def plainHost (v : String) : Bool :=
  !v.isEmpty && v.toList.all fun c => printable c && !(c == '/' || c == '?' || c == '#' || c == '\\' || c == '@')

/-- Hop-by-hop fields (RFC 9110 §7.6.1), never forwarded. -/
def hopByHop (n : String) : Bool :=
  ["connection", "keep-alive", "proxy-connection", "transfer-encoding", "te", "trailer", "upgrade"].contains n

/-- Whether a field is a Host field. -/
def isHost (name : String) : Bool := lower name == "host"

/-- The loop of `outgoingHeaders`: no hop-by-hop field or Content-Length, and
only the first plain Host (`hasHost`: one was kept). -/
def keep (hasHost : Bool) : Headers → Headers
  | [] => []
  | (n, v) :: r =>
    if hopByHop (lower n) || lower n == "content-length" then keep hasHost r
    else if isHost n then (if hasHost || !plainHost v then keep hasHost r else (n, v) :: keep true r)
    else (n, v) :: keep hasHost r

/-- `outgoingHeaders(headers, 0, defaultHost)`: the fields forward() and pipe()
send (a body adds its Content-Length after them). -/
def outgoing (hs : Headers) (defaultHost : String) : Headers :=
  let kept := keep false (joinCookies hs)
  if kept.any (isHost ·.1) then kept else kept ++ [("host", defaultHost)]

/-- How a server reads the URL it builds from Host and the target
(`http://` + host + target, WHATWG URL): the host (after the authority's
last `@`; the authority ends at the first `/ \ ? #`) and the rest. -/
def urlHost (url : String) : Option (String × String) :=
  match url.toList with
  | 'h' :: 't' :: 't' :: 'p' :: ':' :: '/' :: '/' :: rest =>
    let stop := fun c => c == '/' || c == '\\' || c == '?' || c == '#'
    let authority := rest.takeWhile (!stop ·)
    some (String.ofList (authority.reverse.takeWhile (· != '@')).reverse, String.ofList (rest.dropWhile (!stop ·)))
  | _ => none

/-! ## Bodies -/

/-- A request body as an event holds it: none, text (sent as its UTF-8), or
base64 text (sent as the bytes Node decodes from it). -/
inductive BodyIn where
  | none
  | text (s : String)
  | base64 (s : String)
deriving Repr, DecidableEq

/-- `decode(body, base64)`: no body for null or the empty string. -/
def bodyIn (body : Option String) (base64 : Bool) : BodyIn :=
  match body with
  | none => .none
  | some s => if s.isEmpty then .none else if base64 then .base64 s else .text s

/-- A response body: UTF-8 text, or bytes the response carries as base64. -/
inductive Body where
  | text (s : String)
  | base64 (b : ByteArray)

/-- The bytes a response body stands for. -/
def Body.bytes : Body → ByteArray
  | .text s => s.toUTF8
  | .base64 b => b

/-- The first value of a header (names of replies are lowercase), or "". -/
def get (hs : Headers) (name : String) : String := ((hs.find? (·.1 == name)).map (·.2)).getD ""

/-- A word character of `\b` (ASCII). -/
def wordChar (c : Char) : Bool := c.isAlphanum || c == '_'

/-- `(json|xml|javascript|ecmascript)\b` at the start. -/
def textWord (l : List Char) : Bool :=
  ["json", "xml", "javascript", "ecmascript"].any fun w =>
    w.toList.isPrefixOf l && !((l.drop w.length).head?.any wordChar)

/-- `[/+](json|xml|javascript|ecmascript)\b` somewhere. -/
def structured : List Char → Bool
  | [] => false
  | c :: r => ((c == '/' || c == '+') && textWord r) || structured r

/-- The first half of `isTextual`: no content coding, and a textual type. -/
def textualType (hs : Headers) : Bool :=
  let coding := get hs "content-encoding"
  if !coding.isEmpty && coding != "identity" then false
  else
    let t := (lower (get hs "content-type")).toList
    t.isEmpty || "text/".toList.isPrefixOf t || structured t ||
      "application/x-www-form-urlencoded".toList.isPrefixOf t || "application/graphql".toList.isPrefixOf t

/-- The body of a response: text when `isTextual(headers, body)` (a textual
type and valid UTF-8), base64 otherwise. -/
def body (hs : Headers) (b : ByteArray) : Body :=
  if textualType hs then
    match String.fromUTF8? b with
    | some s => .text s
    | none => .base64 b
  else .base64 b

/-! ## Header maps of responses -/

/-- The values of the fields named `n`, in order. -/
def values (n : String) (hs : Headers) : List String := (hs.filter (·.1 == n)).map (·.2)

/-- The names of the fields, each once, in the order they first appear. -/
def names : Headers → List String
  | [] => []
  | (n, _) :: r => n :: (names r).filter (· != n)

/-- Fields grouped by name (a multi-value header map), in first-appearance order. -/
def group (hs : Headers) : List (String × List String) := (names hs).map fun n => (n, values n hs)

/-- The value an association list holds for `n`. -/
def lookup {α} (n : String) (m : List (String × α)) : Option α := (m.find? (·.1 == n)).map (·.2)

/-! ## The server's reply -/

/-- What forward() resolves with: status, reason, fields (names lowercase,
Set-Cookie repeated), body. -/
structure Reply where
  status : Nat
  statusText : String
  headers : Headers
  body : ByteArray

/-- The request a shim hands to forward(): method, target, the event's fields
(forward() sends `outgoing` of them), body. -/
structure Forwarded where
  method : String
  target : String
  headers : Headers
  body : BodyIn
deriving Repr, DecidableEq

/-! ## AWS Lambda: API Gateway REST (payload 1.0) and ALB -/

/-- An API Gateway REST or Application Load Balancer event: every field the
handler reads. `query`, `multiQuery`, `headers`, `multiHeaders` are the
event's objects (none for null), as `Object.entries` lists them. -/
structure RestEvent where
  method : String
  path : String
  query : Option (List (String × String))
  multiQuery : Option (List (String × List String))
  headers : Option Headers
  multiHeaders : Option (List (String × List String))
  body : Option String
  base64 : Bool
  /-- `requestContext.elb` is set. -/
  alb : Bool

/-- The query a REST or ALB event forwards: API Gateway REST decoded the
values, so they are encoded again; an ALB's go as the client sent them. -/
def restQuery (e : RestEvent) : String :=
  if e.alb then rawQuery e.query e.multiQuery else formEncode (pairsOf e.query e.multiQuery)

def restRequest (e : RestEvent) : Forwarded :=
  { method := e.method, target := requestTarget e.path (restQuery e), headers := pairsOf e.headers e.multiHeaders,
    body := bodyIn e.body e.base64 }

/-- A REST or ALB response: `multiValueHeaders` or (single-value ALB) `headers`. -/
structure RestResponse where
  statusCode : Nat
  body : Body
  statusDescription : Option String
  multiValueHeaders : Option (List (String × List String))
  headers : Option (List (String × String))

/-- A single-value ALB header map: repeats joined with `, `, except Set-Cookie,
of which the last one is kept (one value per name is all it holds). -/
def singleAlb (hs : Headers) : List (String × String) :=
  (names hs).map fun n => (n, if n == "set-cookie" then ((values n hs).getLast?).getD "" else String.intercalate ", " (values n hs))

def restResponse (e : RestEvent) (r : Reply) : RestResponse :=
  let multi := !e.alb || e.multiHeaders.isSome
  { statusCode := r.status, body := body r.headers r.body,
    statusDescription := if e.alb then some (toString r.status ++ " " ++ r.statusText) else none,
    multiValueHeaders := if multi then some (group r.headers) else none,
    headers := if multi then none else some (singleAlb r.headers) }

/-! ## AWS Lambda: API Gateway HTTP API (payload 2.0) and function URLs -/

structure V2Event where
  method : String
  rawPath : String
  rawQuery : String
  headers : Headers
  cookies : List String
  body : Option String
  base64 : Bool

/-- The event's `cookies` (the empty ones left out) as one Cookie field, in
place of any Cookie field the headers also hold (#80). -/
def v2Headers (e : V2Event) : Headers :=
  let sent := e.cookies.filter (!·.isEmpty)
  if sent.isEmpty then e.headers
  else e.headers.filter (!isCookie ·.1) ++ [("cookie", String.intercalate "; " sent)]

def v2Request (e : V2Event) : Forwarded :=
  { method := e.method, target := requestTarget e.rawPath e.rawQuery, headers := v2Headers e, body := bodyIn e.body e.base64 }

structure V2Response where
  statusCode : Nat
  headers : List (String × String)
  cookies : List String
  body : Body

def v2Response (r : Reply) : V2Response :=
  { statusCode := r.status,
    headers := ((names r.headers).filter (· != "set-cookie")).map fun n => (n, String.intercalate ", " (values n r.headers)),
    cookies := values "set-cookie" r.headers, body := body r.headers r.body }

/-! ## AWS Lambda: CloudFront (Lambda@Edge) -/

structure CloudFrontEvent where
  method : String
  uri : String
  querystring : String
  /-- `Object.values(request.headers)`: each name's list of `{key, value}`. -/
  headers : List Headers
  /-- `request.body`: its `data` and whether `encoding` is base64. -/
  body : Option (String × Bool)

def cloudFrontRequest (e : CloudFrontEvent) : Forwarded :=
  { method := e.method, target := requestTarget e.uri e.querystring, headers := e.headers.flatten,
    body := match e.body with | some (d, b) => bodyIn (some d) b | none => .none }

/-- Fields CloudFront rejects or ignores in a generated response. -/
def cloudFrontRefused (n : String) : Bool :=
  ["content-length", "via", "x-cache", "x-real-ip", "x-forwarded-proto", "expect", "proxy-authenticate",
    "proxy-authorization"].contains n || n.startsWith "x-amz-cf-" || n.startsWith "x-edge-" || n.startsWith "x-accel-"

structure CloudFrontResponse where
  status : String
  statusDescription : String
  headers : List (String × List String)
  body : Body

def cloudFrontResponse (r : Reply) : CloudFrontResponse :=
  { status := toString r.status, statusDescription := r.statusText,
    headers := group (r.headers.filter (!cloudFrontRefused ·.1)), body := body r.headers r.body }

/-! ## Netlify (`webResponse`) -/

/-- Whether the WHATWG Response has no body: a null-body status, a HEAD, or nothing to send. -/
def webNullBody (status : Nat) (method : String) (length : Nat) : Bool :=
  [101, 204, 205, 304].contains status || method == "HEAD" || length == 0

/-! ## Azure Functions (`parseSetCookie`, `azureReply`) -/

/-- A Set-Cookie as Azure's cookie object; `expires` and `maxAge` as written
(the JavaScript makes them a `Date` and a `Number`). -/
structure Cookie where
  name : String
  value : String
  domain : Option String := none
  path : Option String := none
  expires : Option String := none
  maxAge : Option String := none
  secure : Bool := false
  httpOnly : Bool := false
  sameSite : Option String := none
  dropped : List String := []
deriving Repr, DecidableEq

/-- `/^-?\d+$/`. -/
def integer (s : String) : Bool :=
  let digits := match s.toList with | '-' :: r => r | l => l
  !digits.isEmpty && digits.all Char.isDigit

/-- One attribute of a Set-Cookie applied to the cookie. -/
def applyAttribute (validDate : String → Bool) (c : Cookie) (a : List Char) : Cookie :=
  let (k, v) := match splitFirst '=' a with
    | some (k, v) => (k, trim (String.ofList v))
    | none => (a, "")
  let key := lower (trim (String.ofList k))
  if key.isEmpty then c
  else if key == "domain" && !v.isEmpty then { c with domain := some v }
  else if key == "path" && !v.isEmpty then { c with path := some v }
  else if key == "expires" && validDate v then { c with expires := some v }
  else if key == "max-age" && integer v then { c with maxAge := some v }
  else if key == "secure" then { c with secure := true }
  else if key == "httponly" then { c with httpOnly := true }
  else if key == "samesite" && lower v == "strict" then { c with sameSite := some "Strict" }
  else if key == "samesite" && lower v == "lax" then { c with sameSite := some "Lax" }
  else if key == "samesite" && lower v == "none" then { c with sameSite := some "None" }
  else { c with dropped := c.dropped ++ [trim (String.ofList a)] }

/-- `parseSetCookie(header)`: none when there is no `name=`. -/
def parseSetCookie (validDate : String → Bool) (h : String) : Option Cookie :=
  match splitOn ';' h.toList with
  | [] => none
  | pair :: attributes =>
    match splitFirst '=' pair with
    | none => none
    | some (k, v) =>
      if k.isEmpty then none
      else
        let name := trim (String.ofList k)
        if name.isEmpty then none
        else some (attributes.foldl (applyAttribute validDate) { name, value := trim (String.ofList v) })

/-- A cookie `cookies` carries as it is: its value only `[A-Za-z0-9\-._~]`
(the host percent-encodes the rest) and no attribute without a field. -/
def exact : Option Cookie → Bool
  | some c => c.value.toList.all (fun ch => ch.isAlphanum || ch == '-' || ch == '.' || ch == '_' || ch == '~') && c.dropped.isEmpty
  | none => false

/-- The index of the Set-Cookie that stays a header: with fewer than two, the
first; otherwise the first that `cookies` would change, or the first. -/
def verbatim (parsed : List (Option Cookie)) : Nat :=
  if parsed.length < 2 then 0 else (parsed.findIdx? (!exact ·)).getD 0

/-- `azureReply(reply)`: the fields appended to its Headers, and `cookies`. -/
def azureReply (validDate : String → Bool) (r : Reply) : Headers × List Cookie :=
  let parsed := (values "set-cookie" r.headers).map (parseSetCookie validDate)
  let v := verbatim parsed
  let rec go (i : Nat) : Headers → Headers × List Cookie
    | [] => ([], [])
    | (n, x) :: rest =>
      if n != "set-cookie" then let (h, c) := go i rest; ((n, x) :: h, c)
      else if i == v then let (h, c) := go (i + 1) rest; ((n, x) :: h, c)
      else
        let (h, c) := go (i + 1) rest
        match parsed[i]?.join with
        | some cookie => (h, { cookie with dropped := [] } :: c)
        | none => (h, c)
  go 0 r.headers

end Lasm.Serverless
