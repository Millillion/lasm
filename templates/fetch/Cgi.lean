/-
The routes of Main.lean as a CGI program (WAGI), in plain Lean IO: `npm run
build:wasi` writes wasi/main.wasm, a WASI (preview 1) module that answers one
request per run. The request comes from the CGI environment variables
(REQUEST_METHOD, X_FULL_URL or PATH_INFO, CONTENT_TYPE) and standard input; the
response goes to standard output (`Status:`, the headers, a blank line, the body):
  REQUEST_METHOD=GET PATH_INFO=/hello/Ada wasmtime run --env REQUEST_METHOD --env PATH_INFO wasi/main.wasm
-/
import App
import Lean.Data.Json
open Lean

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

/-- The path's segments (from a path, or a full URL `http://host/a/b?q`),
decoded, as a URL parser resolves them on the JavaScript runtimes: `\` counts
as `/`, and `.`, `..` and their escaped forms (`%2e`) are removed. -/
def segments (url : String) : List String :=
  let afterScheme := match url.splitOn "://" with
    | _ :: rest@(_ :: _) => ("://".intercalate rest).dropWhile (fun c => c != '/' && c != '\\') |>.toString
    | _ => url
  let path := (afterScheme.takeWhile (fun c => c != '?' && c != '#')).toString
  let raw := (path.splitOn "/").flatMap (·.splitOn "\\")
  let resolved := raw.foldl (init := ([] : List String)) fun stack s =>
    match percentDecode s with
    | ".." => stack.drop 1
    | "." => stack
    | _ => s :: stack
  resolved.reverse.filter (· ≠ "") |>.map percentDecode

/-- Standard input, read to its end. -/
partial def readStdin (stdin : IO.FS.Stream) (acc : ByteArray := .empty) : IO ByteArray := do
  let chunk ← stdin.read 65536
  if chunk.isEmpty then return acc else readStdin stdin (acc ++ chunk)

def json (fields : List (String × Json)) : Nat × String × ByteArray :=
  (200, "application/json", (Json.mkObj fields).compress.toUTF8)

def main : IO Unit := do
  let method := (← IO.getEnv "REQUEST_METHOD").getD "GET"
  let path := (← IO.getEnv "SCRIPT_NAME").getD "" ++ (← IO.getEnv "PATH_INFO").getD "/"
  let url := (← IO.getEnv "X_FULL_URL").getD path
  let (status, contentType, body) ← match (if method == "HEAD" then "GET" else method), segments url with
    | "GET", [] => pure (json [("message", "Hello from Lean!")])
    | "GET", ["hello", name] => pure (json [("message", App.greet name)])
    | "POST", ["echo"] =>
      let contentType := (← IO.getEnv "CONTENT_TYPE").getD "application/octet-stream"
      pure (200, contentType, ← readStdin (← IO.getStdin))
    | "GET", ["health"] => pure (json [("ok", true)])
    | _, _ => pure (404, "text/plain; charset=utf-8", "Not Found\n".toUTF8)
  let stdout ← IO.getStdout
  stdout.write s!"Status: {status}\r\ncontent-type: {contentType}\r\n\r\n".toUTF8
  unless method == "HEAD" do stdout.write body
  stdout.flush
