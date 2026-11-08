/-
The Lean model of the function platforms' HTTP mapping
(library/Lasm/Serverless/Proofs/Model.lean) as an oracle for the
serverless-http fuzz target: one JSON case per line on stdin (an event of one
kind, the server's reply, the `Date.parse`-valid strings of its Set-Cookie
values), one JSON line of what the model says on stdout. Run by
test/fuzz/support/serverless-model.mjs (`lean --run`, after it compiles the
model).
-/
import Lean.Data.Json
import Lasm.Serverless.Proofs.Model

open Lean Lasm.Serverless

def field [FromJson α] (j : Json) (name : String) : Except String α := j.getObjValAs? α name

def restEvent (j : Json) : Except String RestEvent := do
  return { method := ← field j "method", path := ← field j "path", query := ← field j "query",
           multiQuery := ← field j "multiQuery", headers := ← field j "headers", multiHeaders := ← field j "multiHeaders",
           body := ← field j "body", base64 := ← field j "base64", alb := ← field j "alb" }

def v2Event (j : Json) : Except String V2Event := do
  return { method := ← field j "method", rawPath := ← field j "rawPath", rawQuery := ← field j "rawQuery",
           headers := ← field j "headers", cookies := ← field j "cookies", body := ← field j "body", base64 := ← field j "base64" }

def cloudFrontEvent (j : Json) : Except String CloudFrontEvent := do
  return { method := ← field j "method", uri := ← field j "uri", querystring := ← field j "querystring",
           headers := ← field j "headers", body := ← field j "body" }

def reply (j : Json) : Except String Reply := do
  let bytes : Array Nat ← field j "body"
  return { status := ← field j "status", statusText := ← field j "statusText", headers := ← field j "headers",
           body := ⟨bytes.map (·.toUInt8)⟩ }

def bodyInJson : BodyIn → Json
  | .none => .null
  | .text s => Json.mkObj [("text", s)]
  | .base64 s => Json.mkObj [("base64", s)]

def bodyJson : Body → Json
  | .text s => Json.mkObj [("text", s)]
  | .base64 b => Json.mkObj [("base64", toJson (b.data.map (·.toNat)))]

def pairs (hs : List (String × String)) : Json := toJson (hs.map fun (n, v) => #[n, v])
def groups (hs : List (String × List String)) : Json := Json.arr (hs.toArray.map fun (n, vs) => Json.arr #[toJson n, toJson vs])

def cookieJson (c : Cookie) : Json :=
  Json.mkObj <| [("name", toJson c.name), ("value", toJson c.value)] ++
    (c.domain.map fun v => [("domain", toJson v)]).getD [] ++ (c.path.map fun v => [("path", toJson v)]).getD [] ++
    (c.expires.map fun v => [("expires", toJson v)]).getD [] ++ (c.maxAge.map fun v => [("maxAge", toJson v)]).getD [] ++
    (if c.secure then [("secure", toJson true)] else []) ++ (if c.httpOnly then [("httpOnly", toJson true)] else []) ++
    (c.sameSite.map fun v => [("sameSite", toJson v)]).getD [] ++ [("dropped", toJson c.dropped)]

def forwardedJson (f : Forwarded) : Json :=
  Json.mkObj [("method", f.method), ("target", f.target), ("headers", pairs (outgoing f.headers "127.0.0.1:0")),
    ("body", bodyInJson f.body)]

def answer (j : Json) : Except String Json := do
  let kind : String ← field j "kind"
  let e ← j.getObjVal? "event"
  let r ← reply (← j.getObjVal? "reply")
  let dates : List String ← field j "dates"
  let validDate := fun d => dates.contains d
  let (request, response) ← match kind with
    | "rest" => do
      let e ← restEvent e
      let o := restResponse e r
      pure (restRequest e, Json.mkObj <| [("statusCode", toJson o.statusCode), ("body", bodyJson o.body)] ++
        (o.statusDescription.map fun d => [("statusDescription", toJson d)]).getD [] ++
        (o.multiValueHeaders.map fun m => [("multiValueHeaders", groups m)]).getD [] ++
        (o.headers.map fun m => [("headers", pairs m)]).getD [])
    | "v2" => do
      let e ← v2Event e
      let o := v2Response r
      pure (v2Request e, Json.mkObj [("statusCode", toJson o.statusCode), ("headers", pairs o.headers),
        ("cookies", toJson o.cookies), ("body", bodyJson o.body)])
    | "cloudfront" => do
      let e ← cloudFrontEvent e
      let o := cloudFrontResponse r
      pure (cloudFrontRequest e, Json.mkObj [("status", toJson o.status), ("statusDescription", toJson o.statusDescription),
        ("headers", groups o.headers), ("body", bodyJson o.body)])
    | k => throw s!"unknown kind {k}"
  let (azureHeaders, azureCookies) := azureReply validDate r
  let parsed := (values "set-cookie" r.headers).map fun v => ((parseSetCookie validDate v).map cookieJson).getD .null
  return Json.mkObj [("request", forwardedJson request), ("response", response),
    ("azure", Json.mkObj [("headers", pairs azureHeaders), ("cookies", toJson (azureCookies.map cookieJson))]),
    ("setCookies", Json.arr parsed.toArray),
    ("webNullBody", toJson (webNullBody r.status request.method r.body.size)),
    ("textual", toJson (match body r.headers r.body with | .text _ => true | .base64 _ => false))]

partial def loop (stdin : IO.FS.Stream) (stdout : IO.FS.Stream) : IO Unit := do
  let line ← stdin.getLine
  if line.isEmpty then return
  let out := match Json.parse line >>= answer with
    | .ok j => j
    | .error message => Json.mkObj [("error", message)]
  stdout.putStrLn out.compress
  stdout.flush
  loop stdin stdout

def main : IO Unit := do
  loop (← IO.getStdin) (← IO.getStdout)
