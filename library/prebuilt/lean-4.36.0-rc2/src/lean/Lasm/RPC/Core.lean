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

/-- Whether JSON text holds a number, outside strings, whose exponent has more
than four significant digits (`1e10000`). Lean's parser computes
`10 ^ exponent` for such a number, so a 90-byte request with `1E26191701`
took the server's whole time and memory (test/fuzz, target lean-rpc). -/
def hugeExponent (text : String) : Bool := Id.run do
  let mut inString := false
  let mut escaped := false
  let mut afterDigit := false
  -- `some n`: inside an exponent, with `n` significant digits so far.
  let mut exponent : Option Nat := none
  for c in text.toList do
    if inString then
      if escaped then escaped := false
      else if c == '\\' then escaped := true
      else if c == '"' then inString := false
      continue
    if let some n := exponent then
      if c.isDigit then
        if n == 0 && c == '0' then continue
        if n + 1 > 4 then return true
        exponent := some (n + 1)
        continue
      if (c == '+' || c == '-') && n == 0 then continue
      exponent := none
    if c == '"' then
      inString := true
      afterDigit := false
    else if (c == 'e' || c == 'E') && afterDigit then
      exponent := some 0
      afterDigit := false
    else afterDigit := c.isDigit || c == '.'
  return false

/-- `j` with every zero written `0`. Lean prints a zero with more than ten
decimal places (`0e-11`, which `-0.0e-51` parses to) as `0.e-42`, which is
not JSON, so a parsed zero echoed back could not be read (#135). -/
partial def zerosAsZero : Json → Json
  | .num n => if n.mantissa == 0 then .num ⟨0, 0⟩ else .num n
  | .arr a => .arr (a.map zerosAsZero)
  | .obj kvs => .obj (kvs.foldl (fun acc k v => acc.insert k (zerosAsZero v)) kvs)
  | j => j

/-- `Json.parse`, refusing numbers with exponents of more than four digits
(`hugeExponent`), with zeros written `0` (`zerosAsZero`): use it for JSON
from the network. -/
def parseJson (text : String) : Except String Json :=
  if hugeExponent text then .error "a number's exponent has more than four digits"
  else zerosAsZero <$> Json.parse text

#guard hugeExponent "{\"a\":1e10000}" && hugeExponent "[2E+26191701]" && hugeExponent "1.5e-99999"
#guard !hugeExponent "{\"a\":1e9999,\"b\":\"1e99999\"}" && !hugeExponent "1e0000005" && !hugeExponent "[\"\\\"1e99999\"]"
#guard (parseJson "[1,2,{\"a\":[null,true,-0.0e-51]},0e-11,0.0,-2.50e-1]").toOption.map (·.compress)
  == some "[1,2,{\"a\":[null,true,0]},0,0,-0.25]"

namespace Endpoint
variable {Req Res : Type}

/-- The URL path, relative to the server's origin. -/
def path (e : Endpoint Req Res) : String := "/rpc/" ++ e.name

/-- The request body. -/
def encodeRequest [ToJson Req] (_ : Endpoint Req Res) (r : Req) : String := (toJson r).compress

/-- A request body decoded and validated: what the server runs the handler on. -/
def decodeRequest [FromJson Req] (e : Endpoint Req Res) (body : String) : Except Error Req := do
  let j ← (parseJson body).mapError fun m => Error.invalid s!"the request is not JSON: {m}"
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
  match parseJson body with
  | .error m => if 200 ≤ status && status < 300 then .error (.decode m) else .error (.failed status body)
  | .ok j =>
    match j.getObjVal? "ok", j.getObjValAs? String "error" with
    | .ok v, _ => (fromJson? v : Except String Res).mapError Error.decode
    | _, .ok m => .error (if status == 400 then .invalid m else .failed status m)
    | _, _ => .error (.decode "neither ok nor error")

end Endpoint

end Lasm.RPC
