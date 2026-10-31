/-
Supabase's Postgres, for Supabase Edge Functions: the table `conduit_kv`
(`supabase/migrations/`, `key text primary key, value text`) through
Supabase's REST API (PostgREST), as a `Lasm.KV.Store`, so Conduit's store
is `Server/Kv.lean`. No npm package: the requests are `Lasm.Fetch.fetch`.
Supabase gives every function `SUPABASE_URL` and `SUPABASE_SERVICE_ROLE_KEY`;
the service role bypasses the table's row-level security, which allows
nothing to anyone else.
-/
import Lasm.Fetch
import Lasm.KV
import Lean.Data.Json
open Lean Lasm.Fetch

namespace Conduit.Server.SupabaseKv

/-- A query parameter's value, percent-encoded (RFC 3986 unreserved characters stay). -/
def encode (s : String) : String :=
  s.toUTF8.foldl (init := "") fun out b =>
    let c := Char.ofNat b.toNat
    if c.isAlphanum || c == '-' || c == '_' || c == '.' || c == '~' then out.push c
    else
      let hex := "0123456789ABCDEF".toList
      out ++ "%" ++ (String.singleton (hex[(b / 16).toNat]!)) ++ String.singleton (hex[(b % 16).toNat]!)

def setting (name : String) : IO String := do
  match ← IO.getEnv name with
  | some v => return v
  | none => throw (IO.userError s!"{name} is not set: Supabase sets it for every function (supabase functions serve, or deployed)")

/-- The table `table` of the project's REST API. -/
def «open» (table : String := "conduit_kv") : IO Lasm.KV.Store := do
  let url := (← setting "SUPABASE_URL") ++ "/rest/v1/" ++ table
  let key ← setting "SUPABASE_SERVICE_ROLE_KEY"
  -- A legacy key is a JWT, sent as the bearer token too; a new secret key is the apikey alone.
  let headers := #[("apikey", key)] ++ (if key.startsWith "eyJ" then #[("authorization", s!"Bearer {key}")] else #[])
  let call (method target : String) (extra : Array (String × String)) (body : ByteArray := .empty) : Async Response := do
    let r ← fetch { method, url := target, headers := headers ++ extra, body }
    if r.status >= 300 then
      throw (IO.userError s!"Supabase REST {method} {table}: {r.status} {(r.text?).getD ""}")
    return r
  return {
    kind := "supabase-postgres"
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

end Conduit.Server.SupabaseKv
