/-
The Lean HTTP handler of test/fixtures/js-serve: one `Request → Async Response`
function on Lasm.JS.Web, served unchanged by Deno.serve (Lasm.JS.Deno), Bun.serve
(Lasm.JS.Bun) and Node through the npm package @hono/node-server (an `@[js]`
binding in Main.lean and Serve.lean). Routes:

- `GET /hello`: 200, `hello from Lean`, text/plain; `HEAD /hello` the same
  response (the server sends no body for HEAD);
- `POST /echo`: 200, the request's body, with its content type and the header
  `x-lasm-method` (the request's method);
- `GET /square?n=k`: 200, `{"n":k,"square":k²}`, application/json; 400 if `n` is
  not a natural number;
- `GET /slow?ms=k`: 200 after waiting k milliseconds (a timer; no Lean thread held);
- `GET /throw`: the handler throws (the runtime's error handling answers);
- anything else: 404, `not found: <path>`.
-/
import Lasm.JS
import Lasm.JS.Web
open Lasm.JS Lasm.JS.Web

namespace App

/-- Waits `ms` milliseconds with `setTimeout` (holding no Lean thread). -/
def sleep (ms : Nat) : Async Unit := do
  let p : IO.Promise Unit ← IO.Promise.new
  let f ← JSFunction.ofFn fun _ => do p.resolve (); return .undefined
  discard <| setTimeout (.jsFunction f) (some ms)
  Std.Async.await p

def text (body : String) (status : Nat := 200) (contentType := "text/plain; charset=utf-8") (extra : Array (String × String) := #[]) : IO Response :=
  Response.new (some (.usvString body)) (some { status := some status, headers := some (.record ⟨#[("content-type", contentType)] ++ extra⟩) })

/-- The handler. -/
def handle (request : Request) : Async Response := do
  let url ← URL.new (← request.url)
  let method ← request.method
  match method, ← url.pathname with
  | "GET", "/hello" | "HEAD", "/hello" => text "hello from Lean"
  | "POST", "/echo" =>
    let body ← request.text
    let contentType := (← (← request.headers).get "content-type").getD "application/octet-stream"
    text body (contentType := contentType) (extra := #[("x-lasm-method", method)])
  | "GET", "/square" =>
    match (← (← url.searchParams).get "n").bind String.toNat? with
    | some n => text s!"\{\"n\":{n},\"square\":{n * n}}" (contentType := "application/json")
    | none => text "n must be a natural number" (status := 400)
  | "GET", "/slow" =>
    let ms := ((← (← url.searchParams).get "ms").bind String.toNat?).getD 0
    sleep ms
    text s!"slept {ms}"
  | "GET", "/throw" => throw (IO.userError "the handler threw")
  | _, path => text s!"not found: {path}" (status := 404)

end App
