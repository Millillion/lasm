/-
The server as a wasi:http component, on the wasi:http proxy world's own
interfaces (Lasm.WASI.Http): `npm run build:wasi-http` writes
wasi-http/main.wasm; `wasmtime serve wasi-http/main.wasm`, Spin or any other
wasi:http host serves it. Each instance answers one request: it is passed to
the site (Site.lean) as an `Http.Request`. The proxy world has no store, so
the todos live in the instance's memory and last one request.
-/
import Lasm.WASI.Http
import Site
open Lasm.WASI.Http Lasm.WASI.Http.Types

def methodName : Method → String
  | .get => "GET" | .head => "HEAD" | .post => "POST" | .put => "PUT" | .delete => "DELETE"
  | .connect => "CONNECT" | .options => "OPTIONS" | .trace => "TRACE" | .patch => "PATCH" | .other m => m

def main : IO Unit := IncomingHandler.serve fun request out => do
  let method := methodName (← request.method)
  let headers := (← (← request.headers).entries).filterMap fun (k, v) => (String.fromUTF8? v).map (k, ·)
  let req : Http.Request := { method, url := (← request.pathWithQuery).getD "/", headers, body := ← request.readBody }
  let r ← try (Site.respond (← Site.Kv.memory) req).block
    catch e => do
      IO.eprintln s!"{method} {req.path}: {e}"
      pure (Http.Response.text "Internal Server Error\n" 500)
  -- `Lasm.WASI.Http.respond`: no body where HTTP has none (HEAD, 204, 304, …).
  respond out r.status r.headers (if Http.bodyless method r.status then .empty else r.body)
