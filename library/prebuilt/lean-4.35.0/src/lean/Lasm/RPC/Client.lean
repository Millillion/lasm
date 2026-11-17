/-
Lasm.RPC in the browser: calling an endpoint is a Lasm.UI command (`Cmd.task`
with Lasm.JS.Web's `fetch`). The request is validated first; an invalid one is
not sent, and the message arrives with `Error.invalid` at once.
-/
import Lasm.RPC.Core
import Lasm.UI.Cmd
import Lasm.JS.Web.Fetch

namespace Lasm.RPC
open Lean Lasm.UI

namespace Endpoint
variable {Req Res Msg : Type}

/-- Calls the endpoint (`POST` to `base ++ e.path`, same origin by default). -/
def call [ToJson Req] [FromJson Res] (e : Endpoint Req Res) (req : Req) (handle : Except Error Res → Msg)
    (base : String := "") : Cmd Msg :=
  match e.validate req with
  | .error m => Cmd.send (handle (.error (.invalid m)))
  | .ok () => Cmd.task do
    try
      let r ← Lasm.JS.Web.fetch (.usvString (base ++ e.path)) (some {
        method := some "POST", body := some (.usvString (e.encodeRequest req)),
        headers := some (.record ⟨#[("content-type", "application/json")]⟩) })
      let status ← r.status
      return handle (e.decodeResponse status (← r.text))
    catch err => return handle (.error (.network (toString err)))

/-- An invalid request is never sent: the command only delivers the error. -/
theorem call_invalid [ToJson Req] [FromJson Res] (e : Endpoint Req Res) (req : Req) (handle : Except Error Res → Msg)
    (base : String) (m : String) (h : e.validate req = .error m) :
    (e.call req handle base).effects = [.msg (handle (.error (.invalid m)))] := by
  simp [call, h, Cmd.send, Cmd.ofEffect]

end Endpoint

end Lasm.RPC
