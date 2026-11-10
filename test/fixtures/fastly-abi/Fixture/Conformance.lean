/-
Lasm.Fastly's conformance checks: each states, in its comment, the Lean
proposition it tests about the host (Viceroy in CI, scripts/wasi/wasi-ci.mjs),
and checks it for the values given. They cover the generated mapping rules of
docs/WASI_FASTLY_BINDINGS.md: scalars, handles and enums in and out, text and
bytes in, output buffers (grown on $buflen), multi-value cursors, records
passed by pointer, typed errors (`EIO FastlyStatus`), and the stores.

The service is configured by CI's fastly.toml: a backend `origin`, a Config
Store `settings` (color = "blue"), a Secret Store `secrets` (token = "s3cret")
and a KV Store `kv` (greeting = "hello kv").
-/
import Lasm.Fastly
open Lasm.Fastly

namespace Fixture

structure Check where
  name : String
  ok : Bool
  detail : String := ""

abbrev Checks := StateT (Array Check) IO

/-- Runs one check: its action's `true` is a pass; `false` or an error a failure. -/
def check (name : String) (act : IO Bool) : Checks Unit := do
  let (ok, detail) ← (try return (← act, "") catch e => return (false, toString e) : IO (Bool × String))
  modify (·.push { name, ok, detail })

/-- A body's bytes, read to its end. -/
partial def readAll (body : BodyHandle) (acc : ByteArray := .empty) : EIO FastlyStatus ByteArray := do
  let chunk ← HttpBody.read body 4096
  if chunk.isEmpty then return acc else readAll body (acc ++ chunk)

def bodyOf (bytes : ByteArray) : EIO FastlyStatus BodyHandle := do
  let b ← HttpBody.new
  discard <| HttpBody.write b bytes .back
  return b

def kvLookup (kv : KvStoreHandle) (key : String) : IO (KvError × String) := do
  -- A missing key is KvError.notFound; a host that answers $none instead counts as notFound too.
  match ← found? (KvStore.lookupWaitV2 (← KvStore.lookup kv key {} {})) with
  | some (body, _, _, .ok) => return (.ok, (String.fromUTF8? (← readAll body)).getD "")
  | some (_, _, _, error) => return (error, "")
  | none => return (.notFound, "")

def checks (downstream : RequestHandle) : Checks Unit := do
  -- ∀ m, (HttpReq.methodSet r m *> HttpReq.methodGet r) = pure m
  check "method round trip" do
    let r ← HttpReq.new; HttpReq.methodSet r "PATCH"; return (← HttpReq.methodGet r) == "PATCH"
  -- ∀ u, (HttpReq.uriSet r u *> HttpReq.uriGet r) = pure u
  check "URI round trip" do
    let r ← HttpReq.new; HttpReq.uriSet r "https://example.com/a/b?c=d"; return (← HttpReq.uriGet r) == "https://example.com/a/b?c=d"
  -- ∀ v : HttpVersion, (versionSet r v *> versionGet r) = pure v   (an enum in and out)
  check "version round trip (enum)" do
    let r ← HttpReq.new; HttpReq.versionSet r .http10; return (← HttpReq.versionGet r) == .http10
  -- headerInsert r n v *> headerValueGet r n = pure v
  check "header insert then get" do
    let r ← HttpReq.new; HttpReq.headerInsert r "x-one" "1"; return (← HttpReq.headerValueGet r "x-one") == "1"
  -- headerAppend r n a *> headerAppend r n b *> headerValuesGet r n = pure #[a, b]   (a multi-value cursor)
  check "header append twice, all values" do
    let r ← HttpReq.new; HttpReq.headerAppend r "x-two" "a"; HttpReq.headerAppend r "x-two" "b"
    return (← HttpReq.headerValuesGet r "x-two") == #["a", "b"]
  -- headerValuesSet r n "a\0b\0" *> headerValuesGet r n = pure #["a", "b"]   (witx: values are NUL-terminated)
  check "header values set (NUL-separated)" do
    let r ← HttpReq.new; HttpReq.headerValuesSet r "x-set" "a\x00b\x00"
    return (← HttpReq.headerValuesGet r "x-set") == #["a", "b"]
  -- headerRemove r n *> headerNamesGet r ∌ n
  -- (Viceroy 0.21.1 answers header_value_get for an absent name with $inval, not $none,
  -- so absence is checked through the name list: docs/WASI_FASTLY_BINDINGS.md)
  check "header remove, then the name is gone" do
    let r ← HttpReq.new; HttpReq.headerInsert r "x-gone" "1"; HttpReq.headerRemove r "x-gone"
    return !(← HttpReq.headerNamesGet r).contains "x-gone"
  -- ∀ i < 200, s!"x-lasm-conformance-header-{i}" ∈ headerNamesGet r   (names longer than one buffer: cursor and growth)
  check "200 header names through the cursor" do
    let r ← HttpReq.new
    for i in [0:200] do HttpReq.headerInsert r s!"x-lasm-conformance-header-{i}" "v"
    let names ← HttpReq.headerNamesGet r
    return (List.range 200).all fun i => names.contains s!"x-lasm-conformance-header-{i}"
  -- headerInsert r n v *> headerValueGet r n = pure v, |v| = 20000 > the first buffer (8192): grown on $buflen
  check "a 20000-byte header value ($buflen, then a larger buffer)" do
    let r ← HttpReq.new
    let v := String.ofList (List.replicate 20000 'a')
    HttpReq.headerInsert r "x-long" v
    return (← HttpReq.headerValueGet r "x-long") == v
  -- (HttpResp.statusSet r s *> HttpResp.statusGet r) = pure s
  check "response status round trip" do
    let r ← HttpResp.new; HttpResp.statusSet r 418; return (← HttpResp.statusGet r) == 418
  -- HttpResp.headerAppend r n v *> HttpResp.headerValueGet r n = pure v
  check "response header round trip" do
    let r ← HttpResp.new; HttpResp.headerAppend r "content-type" "text/plain"
    return (← HttpResp.headerValueGet r "content-type") == "text/plain"
  -- readAll (bodyOf b) = pure b
  check "body write then read" do
    return (← readAll (← bodyOf "hello world".toUTF8)) == "hello world".toUTF8
  -- HttpBody.append d s *> readAll d = pure (bd ++ bs)
  check "body append" do
    let d ← bodyOf "left ".toUTF8
    HttpBody.append d (← bodyOf "right".toUTF8)
    return (← readAll d) == "left right".toUTF8
  -- found? (ConfigStore.get (open "settings") "color") = pure (some "blue")
  check "Config Store: a key" do
    return (← found? (ConfigStore.get (← ConfigStore.open "settings") "color")) == some "blue"
  -- found? (ConfigStore.get (open "settings") "nope") = pure none
  check "Config Store: a missing key is $none" do
    return (← found? (ConfigStore.get (← ConfigStore.open "settings") "nope")).isNone
  -- (ConfigStore.open "no-such-store").toBaseIO = pure (.error s) with s ≠ .ok   (typed errors)
  check "Config Store: a missing store fails with a status" do
    match ← (ConfigStore.open "no-such-store").toBaseIO with
    | .error s => return s != .ok
    | .ok _ => return false
  -- SecretStore.plaintext (SecretStore.get (open "secrets") "token") = pure "s3cret"
  check "Secret Store: plaintext" do
    return (← SecretStore.plaintext (← SecretStore.get (← SecretStore.open "secrets") "token")) == "s3cret"
  -- SecretStore.plaintext (SecretStore.fromBytes b) = pure b   (bytes in by pointer and length)
  check "Secret Store: from bytes" do
    return (← SecretStore.plaintext (← SecretStore.fromBytes "xyz".toUTF8)) == "xyz"
  -- kvLookup (open "kv") "greeting" = pure (.ok, "hello kv")   (records by pointer, a tuple of outputs)
  check "KV Store: a key from fastly.toml" do
    return (← kvLookup (← KvStore.open "kv") "greeting") == (.ok, "hello kv")
  -- insert k v; kvLookup k = (.ok, v); delete k; kvLookup k = (.notFound, "")
  check "KV Store: insert, lookup, delete" do
    let kv ← KvStore.open "kv"
    let inserted ← KvStore.insertWait (← KvStore.insert kv "conformance" (← bodyOf "v1".toUTF8) {} {})
    let found ← kvLookup kv "conformance"
    let deleted ← KvStore.deleteWait (← KvStore.delete kv "conformance" {} {})
    let gone ← kvLookup kv "conformance"
    return inserted == .ok && found == (.ok, "v1") && deleted == .ok && gone.1 == .notFound
  -- Backend.exists "origin" = pure 1 ∧ Backend.exists "nope" = pure 0
  check "backend exists" do
    return (← Backend.«exists» "origin") == 1 && (← Backend.«exists» "nope") == 0
  -- registerDynamicBackend n target {} {} *> Backend.isDynamic n = pure 1   (a record with nested records, by pointer)
  check "dynamic backend registration" do
    HttpReq.registerDynamicBackend "conformance-dynamic" "127.0.0.1:3110" BackendConfigOptions.connectTimeout { connectTimeoutMs := 1000 }
    return (← Backend.«exists» "conformance-dynamic") == 1 && (← Backend.isDynamic "conformance-dynamic") == 1
  -- a backend request: send r b "origin" = pure (resp, _) with statusGet resp = 200
  check "backend request" do
    let r ← HttpReq.new; HttpReq.methodSet r "POST"; HttpReq.uriSet r "http://127.0.0.1:3110/origin/echo"
    let (resp, body) ← HttpReq.send r (← bodyOf "ping".toUTF8) "origin"
    return (← HttpResp.statusGet resp) == 200 && (← readAll body) == "POST:ping".toUTF8
  -- AsyncIo.select #[p] t = pure 0 for the one pending request p (a list of handles in)
  check "async select over a pending request" do
    let r ← HttpReq.new; HttpReq.uriSet r "http://127.0.0.1:3110/origin/slow"
    let p ← HttpReq.sendAsync r (← HttpBody.new) "origin"
    let ready ← AsyncIo.select #[⟨p.raw⟩] 5000
    let (resp, _) ← HttpReq.pendingReqWait p
    return ready == 0 && (← HttpResp.statusGet resp) == 200
  -- (HttpReq.methodGet ⟨12345⟩).toBaseIO = pure (.error .badf)   (a bad handle's status, typed)
  check "a bad handle fails with $badf" do
    match ← (HttpReq.methodGet ⟨12345⟩).toBaseIO with
    | .error .badf => return true
    | _ => return false
  -- (HttpDownstream.downstreamClientIpAddr downstream).size ∈ [4, 16]   (a fixed 16-byte output)
  check "downstream client IP address" do
    let ip ← HttpDownstream.downstreamClientIpAddr downstream
    return ip.size == 4 || ip.size == 16
  -- Geo.lookup #[127, 0, 0, 1] starts with "{"   (bytes in by pointer and length, text out)
  check "geolocation of 127.0.0.1 (JSON)" do
    return (← Geo.lookup ⟨#[127, 0, 0, 1]⟩).startsWith "{"
  -- (ComputeRuntime.getVcpuMs).toBaseIO succeeds
  check "vCPU time" do
    discard <| ComputeRuntime.getVcpuMs; return true

/-- The checks as JSON: `{"passed":n,"failed":[{"name":…,"detail":…}]}`. -/
def run (downstream : RequestHandle) : IO String := do
  let ((), results) ← (checks downstream).run #[]
  let esc (s : String) := "\"" ++ ((s.replace "\\" "\\\\").replace "\"" "\\\"").replace "\n" "\\n" ++ "\""
  let failed := results.filter (!·.ok) |>.map fun c => s!"\{\"name\":{esc c.name},\"detail\":{esc c.detail}}"
  return s!"\{\"passed\":{(results.filter (·.ok)).size},\"total\":{results.size},\"failed\":[{",".intercalate failed.toList}]}"

end Fixture
