/-
Lasm.WASI.Http's hand-written helpers (not generated; docs/WASI_FASTLY_BINDINGS.md,
"Helpers"): reading and writing whole bodies, and answering a request in one
call. Every wasi:http program needs them, and the WIT's own calls make each a
dozen lines: `blocking-write-and-flush` takes at most 4,096 bytes per call,
and a body is a resource with a stream, finished after the stream is dropped.

  import Lasm.WASI.Http
  open Lasm.WASI.Http

  def main : IO Unit := IncomingHandler.serve fun request out => do
    let body ← request.readBody
    respond out 200 #[("content-type", "text/plain")] s!"{body.size} bytes\n".toUTF8
-/
import Lasm.WASI.Io.Streams
import Lasm.WASI.Http.Types

namespace Lasm.WASI.Io.Streams

/-- Reads the stream to its end (`closed`), blocking for each chunk. -/
partial def InputStream.readAll (s : InputStream) (acc : ByteArray := .empty) : IO (Except StreamError ByteArray) := do
  match ← s.blockingRead 65536 with
  | .ok chunk => s.readAll (acc ++ chunk)
  | .error .closed => return .ok acc
  | .error e => return .error e

/-- Writes all of `bytes`, at most 4,096 bytes per `blocking-write-and-flush`
(the WIT's limit), and stops at the first error. -/
partial def OutputStream.writeAll (s : OutputStream) (bytes : ByteArray) : IO (Except StreamError Unit) := do
  if bytes.isEmpty then return .ok ()
  let n := min bytes.size 4096
  match ← s.blockingWriteAndFlush (bytes.extract 0 n) with
  | .ok () => s.writeAll (bytes.extract n bytes.size)
  | .error e => return .error e

end Lasm.WASI.Io.Streams

namespace Lasm.WASI.Http
open Lasm.WASI.Http.Types Lasm.WASI.Io.Streams

private def check [Repr ε] (call : String) (x : IO (Except ε α)) : IO α := do
  match ← x with
  | .ok a => pure a
  | .error e => throw (IO.userError s!"wasi:http {call}: {repr e}")

/-- The request's whole body. It consumes the request's body and finishes it
(its trailers are dropped). Fails, naming the call, if the body was consumed
already or a read fails. -/
def Types.IncomingRequest.readBody (request : IncomingRequest) : IO ByteArray := do
  let body ← check "incoming-request.consume" request.consume
  let s ← check "incoming-body.stream" body.stream
  let bytes ← check "input-stream.blocking-read" s.readAll
  s.drop
  (← IncomingBody.finish body).drop
  return bytes

/-- Answers the request with `status`, `headers` and the whole `body`, through
`out`: the response is set, then the body written (4,096 bytes per call) and
finished. A header the host refuses (a forbidden field such as `connection`,
or an invalid name or value) fails, naming it, before anything is sent; so
does every other failed call. -/
def respond (out : ResponseOutparam) (status : UInt16) (headers : Array (String × String)) (body : ByteArray) : IO Unit := do
  let fields ← Fields.new
  for (name, value) in headers do
    check s!"fields.append {repr name}" (fields.append name value.toUTF8)
  let response ← OutgoingResponse.new fields
  check "outgoing-response.set-status-code" (response.setStatusCode status)
  let outgoing ← check "outgoing-response.body" response.body
  ResponseOutparam.set out (.ok response)
  let s ← check "outgoing-body.write" outgoing.write
  check "output-stream.blocking-write-and-flush" (s.writeAll body)
  s.drop
  check "outgoing-body.finish" (OutgoingBody.finish outgoing none)

end Lasm.WASI.Http
