/-
Lasm.Fastly's conformance fixture (`lasm build Main.lean --target fastly`):
`GET /conformance` runs Fixture/Conformance.lean's checks and answers their
results as JSON; `GET /abi/every-call` (never requested in CI) calls every
bound host function (Fixture/EveryCall.lean, generated), so the module imports
all of them and Viceroy checks every import's name and signature when it
loads the module.
-/
import Fixture
open Lasm.Fastly

def reply (status : UInt16) (text : String) : IO Unit := do
  let resp ← HttpResp.new
  HttpResp.statusSet resp status
  HttpResp.headerAppend resp "content-type" "application/json"
  let body ← HttpBody.new
  discard <| HttpBody.write body text.toUTF8 .back
  HttpResp.sendDownstream resp body 0

def main : IO Unit := do
  let (req, _) ← HttpReq.bodyDownstreamGet
  let uri ← HttpReq.uriGet req
  if uri.endsWith "/conformance" then reply 200 (← Fixture.run req)
  else if uri.endsWith "/abi/every-call" then
    try Fixture.everyCall; reply 200 "{}" catch e => reply 500 s!"\"{e}\""
  else reply 200 "{\"ready\":true}"
