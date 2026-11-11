/-
HTTP as plain Lean data, so that one site (Site.lean) runs on every server
target: each server program (Server.lean on Node, Bun, Deno and the edge;
ServerFastly.lean; ServerWasiHttp.lean) turns its platform's request into a
`Request`, and the `Response` back into its platform's. Also the browser app's
files: `embed_dir!` (Embed.lean) puts them in the program, and `Assets.serve`
answers requests for them.
-/
namespace Http

/-- A request: the method, the URL (`https://host/path?query`, or just the
path and query), the headers and the body. -/
structure Request where
  method : String
  url : String
  headers : Array (String × String) := #[]
  body : ByteArray := .empty
  deriving Inhabited

/-- A response. -/
structure Response where
  status : UInt16 := 200
  headers : Array (String × String) := #[]
  body : ByteArray := .empty
  deriving Inhabited

/-- Decodes `%XX` escapes; text that is not valid UTF-8 afterwards is kept as it was. -/
def percentDecode (s : String) : String := Id.run do
  let hex (b : UInt8) : Option UInt8 :=
    if 48 ≤ b && b ≤ 57 then some (b - 48) else if 65 ≤ b && b ≤ 70 then some (b - 55)
    else if 97 ≤ b && b ≤ 102 then some (b - 87) else none
  let bytes := s.toUTF8
  let mut out := ByteArray.empty
  let mut i := 0
  while i < bytes.size do
    if bytes[i]! == 37 && i + 2 < bytes.size then
      if let (some h, some l) := (hex bytes[i + 1]!, hex bytes[i + 2]!) then
        out := out.push (h * 16 + l); i := i + 3; continue
    out := out.push bytes[i]!
    i := i + 1
  return (String.fromUTF8? out).getD s

namespace Request

/-- The URL's path, as a URL parser resolves it on the JavaScript runtimes
(so every target sees the same path): `\` counts as `/`, and `.`, `..` and
their escaped forms (`%2e`) are removed. Still percent-encoded. -/
def path (r : Request) : String :=
  let afterScheme := match r.url.splitOn "://" with
    | _ :: rest@(_ :: _) => (("://".intercalate rest).dropWhile (fun c => c != '/' && c != '\\')).toString
    | _ => r.url
  let raw := (afterScheme.takeWhile (fun c => c != '?' && c != '#')).toString
  let parts := ((raw.splitOn "/").flatMap (·.splitOn "\\")).drop 1
  let resolved := parts.foldl (init := ([] : List String)) fun stack s =>
    match percentDecode s with
    | ".." => stack.drop 1
    | "." => stack
    | _ => s :: stack
  "/" ++ "/".intercalate resolved.reverse

/-- The path's segments, decoded: `/rpc/addTodo` → `["rpc", "addTodo"]`. -/
def segments (r : Request) : List String :=
  (r.path.splitOn "/").filter (· ≠ "") |>.map percentDecode

/-- The first header named `name`, ignoring case. -/
def header? (r : Request) (name : String) : Option String :=
  (r.headers.find? fun (k, _) => k.toLower == name.toLower).map (·.2)

/-- The body as UTF-8 text (empty if it is not valid UTF-8). -/
def text (r : Request) : String := (String.fromUTF8? r.body).getD ""

end Request

namespace Response

def withBody (body : ByteArray) (contentType : String) (status : UInt16 := 200) : Response :=
  { status, headers := #[("content-type", contentType)], body }
def html (body : String) (status : UInt16 := 200) : Response := withBody body.toUTF8 "text/html; charset=utf-8" status
def text (body : String) (status : UInt16 := 200) : Response := withBody body.toUTF8 "text/plain; charset=utf-8" status
def notFound : Response := text "Not Found\n" 404
def withHeader (r : Response) (name value : String) : Response := { r with headers := r.headers.push (name, value) }

end Response

/-- Whether a response to `method` has no body (`HEAD`, 204, 304, …). -/
def bodyless (method : String) (status : UInt16) : Bool :=
  method == "HEAD" || status == 101 || status == 204 || status == 205 || status == 304

/-! ## The browser app's files -/

/-- One file: its URL path (`/client/app.js`), content type, and its bytes in
base64 (decoded when served); `br`: its Brotli copy, if any. -/
structure Asset where
  path : String
  contentType : String
  data : String
  br : Option String := none
  deriving Inhabited

/-- Embedded files (`embed_dir!`), or, in development (`lasm dev`), the
directory they come from, read when a request asks for a file. -/
structure Assets where
  files : Array Asset := #[]
  dir : String := ""

def contentTypeOf (path : String) : String :=
  match (path.splitOn ".").getLast! with
  | "html" => "text/html; charset=utf-8"
  | "js" | "mjs" => "text/javascript; charset=utf-8"
  | "css" => "text/css; charset=utf-8"
  | "json" => "application/json; charset=utf-8"
  | "wasm" => "application/wasm"
  | "svg" => "image/svg+xml"
  | "png" => "image/png"
  | "ico" => "image/x-icon"
  | "txt" => "text/plain; charset=utf-8"
  | "woff2" => "font/woff2"
  | _ => "application/octet-stream"

private def b64val (c : UInt8) : UInt32 :=
  if c ≥ 65 && c ≤ 90 then (c - 65).toUInt32
  else if c ≥ 97 && c ≤ 122 then (c - 71).toUInt32
  else if c ≥ 48 && c ≤ 57 then (c + 4).toUInt32
  else if c == 43 then 62 else if c == 47 then 63 else 0

/-- Decodes standard base64 (with padding). -/
def base64Decode (s : String) : ByteArray := Id.run do
  let b := s.toUTF8
  let mut out := ByteArray.emptyWithCapacity (b.size / 4 * 3)
  let mut i := 0
  while i + 3 < b.size do
    let n := (b64val b[i]! <<< 18) ||| (b64val b[i+1]! <<< 12) ||| (b64val b[i+2]! <<< 6) ||| b64val b[i+3]!
    out := out.push (n >>> 16).toUInt8
    if b[i+2]! != 61 then out := out.push (n >>> 8).toUInt8
    if b[i+3]! != 61 then out := out.push n.toUInt8
    i := i + 4
  return out

/-- Content-hashed files (`app.3f2a9c1d0b7e.js`) never change. -/
def immutable (path : String) : Bool :=
  match (path.splitOn "/").getLast!.splitOn "." with
  | [_, hash, _] => hash.length == 12 && hash.all fun c => c.isDigit || ('a' ≤ c && c ≤ 'f')
  | _ => false

/-- The response for a file, if `req` asks for one (`GET` or `HEAD`; a path
ending in `/` names its `index.html`). Paths with `..` or a dotfile are refused. -/
def Assets.serve (a : Assets) (req : Request) : IO (Option Response) := do
  if req.method != "GET" && req.method != "HEAD" then return none
  let path := req.path
  if (path.splitOn "/").any (fun s => s == ".." || s.startsWith ".") then return none
  let path := if path.endsWith "/" then path ++ "index.html" else path
  if a.files.isEmpty then
    -- Development: read the directory.
    if a.dir.isEmpty then return none
    let file := a.dir ++ path
    let found ← try
        if (← System.FilePath.pathExists file) && !(← System.FilePath.isDir file) then pure (some (← IO.FS.readBinFile file))
        else pure none
      catch _ => pure none
    return found.map fun bytes => (Response.withBody bytes (contentTypeOf path)).withHeader "cache-control" "no-cache"
  let some f := a.files.find? (·.path == path) | return none
  let brotli := ((req.header? "accept-encoding").getD "").splitOn "," |>.any (·.trimAscii.toString.startsWith "br")
  let r := match f.br, brotli with
    | some br, true => (Response.withBody (base64Decode br) f.contentType).withHeader "content-encoding" "br"
    | _, _ => Response.withBody (base64Decode f.data) f.contentType
  return some ((r.withHeader "cache-control" (if immutable path then "public, max-age=31536000, immutable" else "no-cache")).withHeader "vary" "accept-encoding")

end Http
