/-
The server as a wasi:http component, on the wasi:http proxy world's own
interfaces (Lasm.WASI.Http): `npm run build:wasi-http` writes
wasi-http/main.wasm; `wasmtime serve wasi-http/main.wasm`, Spin or any other
wasi:http host serves it. Each instance answers one request: it is passed to
the site (Site.lean) as an `Http.Request`. The proxy world has no store, so
the todos live in the instance's memory (Lasm.KV) and last one request.
-/
import Lasm.WASI.Http
import Embed
import Site
open Lasm.WASI.Http Lasm.WASI.Http.Types

/-- The browser app and public/ (dist/public), embedded in the program. -/
def assets : Http.Assets := embed_dir! "dist/public"

/-- The value of a `result`, or an error naming the call. -/
def ok! [Repr ε] (what : String) (x : IO (Except ε α)) : IO α := do
  match ← x with
  | .ok a => pure a
  | .error e => throw (IO.userError s!"{what}: {repr e}")

/-- An incoming body's bytes, read to the end. -/
partial def readAll (s : Lasm.WASI.Io.Streams.InputStream) (acc : ByteArray := .empty) : IO ByteArray := do
  match ← s.blockingRead 65536 with
  | .ok chunk => readAll s (acc ++ chunk)
  | .error .closed => return acc
  | .error e => throw (IO.userError s!"reading the body: {repr e}")

/-- Writes all of `bytes` (at most 4096 bytes a call). -/
partial def writeAll (s : Lasm.WASI.Io.Streams.OutputStream) (bytes : ByteArray) : IO Unit := do
  if bytes.isEmpty then return
  let n := min bytes.size 4096
  ok! "write" (s.blockingWriteAndFlush (bytes.extract 0 n))
  writeAll s (bytes.extract n bytes.size)

def methodName : Method → String
  | .get => "GET" | .head => "HEAD" | .post => "POST" | .put => "PUT" | .delete => "DELETE"
  | .connect => "CONNECT" | .options => "OPTIONS" | .trace => "TRACE" | .patch => "PATCH" | .other m => m

def main : IO Unit := IncomingHandler.serve fun request out => do
  let method := methodName (← request.method)
  let headers := (← (← request.headers).entries).filterMap fun (k, v) => (String.fromUTF8? v).map (k, ·)
  let incoming ← ok! "consume" request.consume
  let s ← ok! "stream" incoming.stream
  let body ← readAll s
  s.drop
  let req : Http.Request := { method, url := (← request.pathWithQuery).getD "/", headers, body }
  let r ← try (Site.respond (← Lasm.KV.open "TODOS") assets req).block
    catch e => do
      IO.eprintln s!"{method} {req.path}: {e}"
      pure (Http.Response.text "Internal Server Error\n" 500)
  let fields ← Fields.new
  for (k, v) in r.headers do ok! s!"header {k}" (fields.append k v.toUTF8)
  let response ← OutgoingResponse.new fields
  ok! "status" (response.setStatusCode r.status)
  let outgoing ← ok! "body" response.body
  ResponseOutparam.set out (.ok response)
  let w ← ok! "write" outgoing.write
  unless Http.bodyless method r.status do writeAll w r.body
  w.drop
  ok! "finish" (OutgoingBody.finish outgoing none)
