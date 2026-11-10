/-
Lasm.WASI.Http's conformance fixture (`lasm build Main.lean --target wasi-http`):
`GET /conformance?origin=HOST:PORT` runs Fixture/Conformance.lean's checks and
answers their results as JSON; `GET /abi/every-call` (never requested in CI)
calls every bound function (Fixture/EveryCall.lean, generated), so the program
references every extern of the bindings. Every wasi-http module imports every
bound host function (library/c/lasm_wasi_http_bindings.c), so `wasmtime serve`
checks each import's name and type when it instantiates the component.
-/
import Fixture
open Lasm.WASI.Http
open Lasm.WASI.Http.Types

def reply (out : ResponseOutparam) (status : UInt16) (text : String) : IO Unit := do
  let headers ← Fields.new
  discard <| headers.append "content-type" "application/json".toUTF8
  let response ← OutgoingResponse.new headers
  discard <| response.setStatusCode status
  let .ok body ← response.body | throw (IO.userError "outgoing-response.body")
  ResponseOutparam.set out (.ok response)
  let .ok s ← body.write | throw (IO.userError "outgoing-body.write")
  Fixture.writeAll s text.toUTF8
  s.drop
  discard <| OutgoingBody.finish body none

def main : IO Unit := IncomingHandler.serve fun request out => do
  let path := (← request.pathWithQuery).getD "/"
  if path.startsWith "/conformance" then
    let origin := (((path.splitOn "origin=").getD 1 "").splitOn "&").headD ""
    reply out 200 (← Fixture.run request origin)
  else if path.startsWith "/abi/every-call" then
    try Fixture.everyCall; reply out 200 "{}" catch e => reply out 500 s!"\"{e}\""
  else reply out 200 "{\"ready\":true}"
