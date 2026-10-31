/-
Postgres through PostgREST (Supabase's REST API is PostgREST): the table
`conduit_kv` (`key text primary key, value text`; supabase/migrations/) as a
`Lasm.KV.Store`, so Conduit's store is `Server/Kv.lean`. No npm package and
no JavaScript: the requests are `Lasm.Fetch.fetch`, so this works on every
target that sends HTTP requests, wasi-http included (outgoing-handler).
Supabase Edge Functions use it with the project's `SUPABASE_URL` and
`SUPABASE_SERVICE_ROLE_KEY` (that role bypasses the table's row-level
security, which allows nothing to anyone else).
-/
import Lasm.Fetch
import Lasm.KV
import Lean.Data.Json
open Lean Lasm.Fetch

namespace Conduit.Server.Postgrest

/-- A query parameter's value, percent-encoded (RFC 3986 unreserved characters stay). -/
def encode (s : String) : String :=
  s.toUTF8.foldl (init := "") fun out b =>
    let c := Char.ofNat b.toNat
    if c.isAlphanum || c == '-' || c == '_' || c == '.' || c == '~' then out.push c
    else
      let hex := "0123456789ABCDEF".toList
      out ++ "%" ++ (String.singleton (hex[(b / 16).toNat]!)) ++ String.singleton (hex[(b % 16).toNat]!)

/-- The table `table` at PostgREST's `url` (for Supabase: `SUPABASE_URL ++ "/rest/v1"`), with
`key` as the API key: a JWT is also sent as the bearer token (Supabase's
legacy keys, PostgREST's roles); a Supabase secret key goes alone. -/
def «open» (url : String) (key : Option String) (table : String := "conduit_kv") : IO Lasm.KV.Store := do
  let url := url ++ "/" ++ table
  let headers := match key with
    | some key => #[("apikey", key)] ++ (if key.startsWith "eyJ" then #[("authorization", s!"Bearer {key}")] else #[])
    | none => #[]
  let call (method target : String) (extra : Array (String × String)) (body : ByteArray := .empty) : Async Response := do
    let r ← fetch { method, url := target, headers := headers ++ extra, body }
    if r.status >= 300 then
      throw (IO.userError s!"PostgREST {method} {table}: {r.status} {(r.text?).getD ""}")
    return r
  return {
    kind := "postgrest"
    get := fun k => do
      let r ← call "GET" s!"{url}?select=value&key=eq.{encode k}" #[("accept", "application/json")]
      match (Json.parse ((r.text?).getD "")).toOption with
      | some (.arr rows) => return rows[0]?.bind fun row => (row.getObjValAs? String "value").toOption
      | _ => return none
    put := fun k v => do
      let body := (Json.mkObj [("key", toJson k), ("value", toJson v)]).compress.toUTF8
      discard <| call "POST" url #[("content-type", "application/json"),
        ("prefer", "resolution=merge-duplicates,return=minimal")] body
    delete := fun k => do
      discard <| call "DELETE" s!"{url}?key=eq.{encode k}" #[("prefer", "return=minimal")] }

end Conduit.Server.Postgrest
