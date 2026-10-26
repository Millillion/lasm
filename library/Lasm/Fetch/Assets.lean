/-
Static files served by a Lasm.Fetch server on every target, including those
with no file system (Workers, Vercel and Netlify Edge, Deno Deploy, Fastly
Compute, wasi-http): `embed_dir! "dist/public"` reads a directory while Lean
compiles the program and embeds its files (with their `.br` copies), and
`Assets.serve` answers `GET`/`HEAD` requests for them before the handler.
In `lasm dev` nothing is embedded (`LASM_DEV_SERVER` is set): the files are
read from the same directory at run time, so a rebuilt browser app is served
without rebuilding the server.

    def assets : Assets := embed_dir! "dist/public"
    def main : IO Unit := serve <| assets.wrap fun req => …
-/
import Lasm.Fetch

namespace Lasm.Fetch

/-- One file: its URL path (`/client/app.js`), content type, and its bytes in
base64 (decoded when first served); `br`: its Brotli copy, if any. -/
structure Asset where
  path : String
  contentType : String
  data : String
  br : Option String := none
  deriving Inhabited

/-- Embedded files, or (`dir`, in development) a directory read at run time. -/
structure Assets where
  files : Array Asset := #[]
  /-- The directory the files came from (read at run time when `files` is empty). -/
  dir : String := ""

def contentTypeOf (path : String) : String :=
  let ext := (path.splitOn ".").getLast!
  match ext with
  | "html" => "text/html; charset=utf-8"
  | "js" | "mjs" => "text/javascript; charset=utf-8"
  | "css" => "text/css; charset=utf-8"
  | "json" => "application/json; charset=utf-8"
  | "wasm" => "application/wasm"
  | "svg" => "image/svg+xml"
  | "png" => "image/png"
  | "jpg" | "jpeg" => "image/jpeg"
  | "gif" => "image/gif"
  | "webp" => "image/webp"
  | "ico" => "image/x-icon"
  | "txt" => "text/plain; charset=utf-8"
  | "woff2" => "font/woff2"
  | "woff" => "font/woff"
  | "webmanifest" => "application/manifest+json"
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

private def cacheControl (path : String) : String :=
  if immutable path then "public, max-age=31536000, immutable" else "no-cache"

/-- The URL paths a request may name: the path, and `index.html` under a directory. -/
private def candidates (path : String) : List String :=
  if path.endsWith "/" then [path ++ "index.html"] else [path]

/-- A file's bytes, if it exists (and the platform has a file system). -/
private def readFile? (file : String) : IO (Option ByteArray) := do
  try
    if ← System.FilePath.isDir file then return none
    if ← System.FilePath.pathExists file then return some (← IO.FS.readBinFile file)
    return none
  catch _ => return none

/-- The response for a static file, if `req` asks for one. -/
def Assets.serve (a : Assets) (req : Request) : Async (Option Response) := do
  if req.method != "GET" && req.method != "HEAD" then return none
  let path := req.path
  if path.splitOn "/" |>.any (fun s => s == ".." || s.startsWith ".") then return none
  let accepts := ((req.header? "accept-encoding").getD "").splitOn "," |>.any (·.trimAscii.toString.startsWith "br")
  if a.files.isEmpty then
    -- Development: read the directory (where there is a file system).
    if a.dir.isEmpty then return none
    for p in candidates path do
      let file := a.dir ++ p
      let some bytes ← readFile? file | continue
      return some (Response.bytes bytes (contentTypeOf p) |>.withHeader "cache-control" "no-cache")
    return none
  for p in candidates path do
    if let some f := a.files.find? (·.path == p) then
      let r := match f.br, accepts with
        | some br, true => Response.bytes (base64Decode br) f.contentType |>.withHeader "content-encoding" "br"
        | _, _ => Response.bytes (base64Decode f.data) f.contentType
      return some (r.withHeader "cache-control" (cacheControl p) |>.withHeader "vary" "accept-encoding")
  return none

/-- `handler` with the files served first. -/
def Assets.wrap (a : Assets) (handler : Handler) : Handler := fun req => do
  match ← a.serve req with
  | some r => return r
  | none => handler req

end Lasm.Fetch
