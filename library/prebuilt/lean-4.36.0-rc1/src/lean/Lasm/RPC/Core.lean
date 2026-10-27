/-
Lasm.RPC: typed endpoints declared once, in a module both the server and the
browser import. An endpoint names its request and response types (JSON on the
wire, through `Lean.ToJson`/`Lean.FromJson`, which `deriving` writes) and a
validation function. The client checks a request before it sends it; the
server checks it again before the handler runs, and the handler receives the
proof that it passed, so a theorem about the validation holds on both sides.
Guide: docs/RPC.md.

    -- Shared.lean
    def addTodo : Endpoint AddTodo Todo where
      name := "addTodo"
      validate r := if r.title.trimAscii.isEmpty then .error "empty title" else .ok ()

    -- Server.lean:  addTodo.serve fun req ok => …      (ok : addTodo.validate req = .ok ())
    -- Client.lean:  addTodo.call { title } Msg.added   (a Cmd)
-/
import Lean.Data.Json.Basic
import Lean.Data.Json.Parser
import Lean.Data.Json.Printer
import Lean.Data.Json.FromToJson.Basic
-- `deriving ToJson, FromJson` in shared code (compile time only).
import Lean.Elab.Deriving.FromToJson

namespace Lasm.RPC
open Lean

/-- An endpoint: `POST /rpc/<name>` with a JSON `Req` body, answered with a JSON `Res`. -/
structure Endpoint (Req Res : Type) where
  /-- The name in the URL path (letters, digits, `-`, `_`, `.`). -/
  name : String
  /-- What a request must satisfy; checked by the client and again by the server. -/
  validate : Req → Except String Unit := fun _ => .ok ()

/-- Why a call produced no response. -/
inductive Error where
  /-- The request failed validation (on the client, or on the server: status 400). -/
  | invalid (message : String)
  /-- The handler failed (status 500, or another status the handler chose). -/
  | failed (status : Nat) (message : String)
  /-- The server's answer could not be read. -/
  | decode (message : String)
  /-- No answer (network failure). -/
  | network (message : String)
  deriving Repr, Inhabited, BEq

def Error.toString : Error → String
  | .invalid m => m
  | .failed s m => s!"the server failed ({s}): {m}"
  | .decode m => s!"unreadable answer: {m}"
  | .network m => s!"network error: {m}"

instance : ToString Error := ⟨Error.toString⟩

namespace Endpoint
variable {Req Res : Type}

/-- The URL path, relative to the server's origin. -/
def path (e : Endpoint Req Res) : String := "/rpc/" ++ e.name

/-- The request body. -/
def encodeRequest [ToJson Req] (_ : Endpoint Req Res) (r : Req) : String := (toJson r).compress

/-- A request body decoded and validated: what the server runs the handler on. -/
def decodeRequest [FromJson Req] (e : Endpoint Req Res) (body : String) : Except Error Req := do
  let j ← (Json.parse body).mapError fun m => Error.invalid s!"the request is not JSON: {m}"
  let r ← (fromJson? j : Except String Req).mapError fun m => Error.invalid s!"malformed request: {m}"
  match e.validate r with
  | .ok () => return r
  | .error m => throw (.invalid m)

/-- A request accepted by `decodeRequest` passed validation. -/
theorem decodeRequest_valid [FromJson Req] (e : Endpoint Req Res) {body : String} {r : Req}
    (h : e.decodeRequest body = .ok r) : e.validate r = .ok () := by
  unfold decodeRequest at h
  simp only [bind, Except.bind] at h
  split at h
  · simp at h
  · split at h
    · simp at h
    · split at h
      · rename_i hv; simp only [pure, Except.pure, Except.ok.injEq] at h; subst h; exact hv
      · simp [throw, throwThe, MonadExceptOf.throw] at h

/-- The response body for a result: `{"ok": …}` or `{"error": …}`. -/
def encodeResponse [ToJson Res] (_ : Endpoint Req Res) : Except String Res → String
  | .ok r => (Json.mkObj [("ok", toJson r)]).compress
  | .error m => (Json.mkObj [("error", Json.str m)]).compress

/-- The client's reading of an answer with this status and body. -/
def decodeResponse [FromJson Res] (_ : Endpoint Req Res) (status : Nat) (body : String) : Except Error Res :=
  match Json.parse body with
  | .error m => if 200 ≤ status && status < 300 then .error (.decode m) else .error (.failed status body)
  | .ok j =>
    match j.getObjVal? "ok", j.getObjValAs? String "error" with
    | .ok v, _ => (fromJson? v : Except String Res).mapError Error.decode
    | _, .ok m => .error (if status == 400 then .invalid m else .failed status m)
    | _, _ => .error (.decode "neither ok nor error")

end Endpoint

end Lasm.RPC
