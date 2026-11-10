# Host bindings: Lasm.Fastly and Lasm.WASI

Lasm's bindings are named for the host interface a program calls:
`Lasm.JS.*` for JavaScript hosts ([JS_BINDINGS.md](JS_BINDINGS.md)),
`Lasm.Fastly.*` for Fastly Compute's host ABI, and `Lasm.WASI.*` for standard
WASI interfaces. Like `Lasm.JS.Web`, they are **generated from the interface
definitions, not written by hand**, ship inside `@lasm/cli`, are checked for
drift in CI, and are conformance-tested only in local emulators (Viceroy for
Fastly, wasmtime for WASI), never against real cloud accounts (Jordan,
2026-11-10; [DECISIONS.md](DECISIONS.md)).

| Bindings | Generated from | Generator | Status |
| --- | --- | --- | --- |
| `Lasm.Fastly.*` | The witx of Fastly Compute's host ABI that Viceroy v0.21.1 ships (`scripts/fastly/witx/`) | [`scripts/bindings/generate-fastly.mjs`](../scripts/bindings/generate-fastly.mjs) | Current source, not yet released: 244 of 252 functions |
| `Lasm.WASI.Http` | The WASI 0.2.12 WIT (`scripts/wasi/wit/deps/`) | Not yet ([below](#lasmwasihttp-not-yet-generated)) | Planned |

`Lasm.Fetch` is being removed (Jordan, 2026-11-10): Fastly and WASI programs
move to these bindings now; its JavaScript-host parts move to `Lasm.JS.*` in a
later step. Until then `Lasm.Fetch.serve` keeps working on every target.
Nothing replaces it as a single cross-target handler (Jordan, 2026-11-10):
each target's server is a small entry module on its own bindings, sharing
pure Lean app logic.

## Lasm.Fastly

`import Lasm.Fastly` gives every function of Fastly Compute's host ABI that a
mapping rule covers, one Lean module per witx module
(`fastly_http_req` → `Lasm.Fastly.HttpReq`, `fastly_kv_store` →
`Lasm.Fastly.KvStore`, …) and their types in `Lasm.Fastly.Types`. Programs
built with `lasm build --target fastly` call the host directly; in every other
build each call fails with `FastlyStatus.unsupported`.

```lean
import Lasm.Fastly
open Lasm.Fastly

def main : IO Unit := do
  let (req, body) ← HttpReq.bodyDownstreamGet          -- this instance's request
  let method ← HttpReq.methodGet req
  let uri ← HttpReq.uriGet req
  let agent ← found? (HttpReq.headerValueGet req "user-agent")   -- none: no such header
  let color ← found? (ConfigStore.get (← ConfigStore.open "settings") "color")
  let resp ← HttpResp.new
  HttpResp.statusSet resp 200
  HttpResp.headerAppend resp "content-type" "text/plain"
  let out ← HttpBody.new
  discard <| HttpBody.write out s!"{method} {uri} {agent} {color}\n".toUTF8 .back
  HttpResp.sendDownstream resp out 0                    -- 0: whole; 1: streamed, then write and close
```

A complete server — every route of `examples/fetch`, streamed bodies, named
and dynamic backends, three backend requests at once, Config, Secret and KV
Stores — is [`examples/fastly/Main.lean`](../examples/fastly/Main.lean).

### Mapping rules

| witx | Lean |
| --- | --- |
| `(module $fastly_http_req …)` | `namespace Lasm.Fastly.HttpReq` (module name without `fastly_`, UpperCamelCase), file `library/Lasm/Fastly/HttpReq.lean` |
| function `header_names_get` | `headerNamesGet` (lowerCamelCase; keywords «quoted»: `«open»`, `«exists»`); its witx doc comment, then `ABI: fastly_http_req.header_names_get` |
| `(result $err (expected T (error $fastly_status)))` | `EIO FastlyStatus T`; `(expected (error …))` → `EIO FastlyStatus Unit`; `(expected (tuple A B))` → `A × B` |
| `$fastly_status` | `inductive FastlyStatus` (`ok`, `error`, `inval`, `badf`, `buflen`, `unsupported`, `badalign`, `httpinvalid`, …, `none`, …, `again`, in witx order) |
| `u8` `u16` `u32` `u64` `s64`, `(@witx usize)` | `UInt8` `UInt16` `UInt32` `UInt64` `Int64`; `usize` is `UInt32` (the ABI is 32-bit) |
| `(typename $http_status u16)` | `abbrev HttpStatus := UInt16` |
| `(typename $request_handle (handle))` | `structure RequestHandle where raw : UInt32` |
| `(enum …)` | `inductive` with the cases in witx order (`$http_11` → `http11`), `witxName`, `ToString` |
| `(flags …)` | `structure CacheOverrideTag where bits : UInt32`, one constant per flag (`CacheOverrideTag.pass`), `|||`, `&&&`, `has` |
| `(record …)` passed by pointer (or by value) | a `structure` with every field defaulted (`{ connectTimeoutMs := 1000 }`); a pointer and its `_len` field are one `String` (`char8`) or `ByteArray` (`u8`) field; a pointer to a record is the nested structure |
| `string`, `(list (@witx char8))` in | `@& String` |
| `(list u8)` in | `@& ByteArray`; with `open Lasm.Fastly`, a string literal coerces to its UTF-8 (`scoped instance : Coe String ByteArray`) |
| `(list $h)` of scalars or handles in | `@& Array H` |
| `(@witx const_pointer char8)` + length in, or a pointer + length the host only reads | `@& ByteArray` (IP octets, secret bytes) |
| `buf`, `buf_len`, `nwritten_out` (an output buffer) | the result: `String` (`char8`) or `ByteArray` (`u8`). The glue starts with 8 KiB and, on `$buflen`, retries with the size the host wrote to `nwritten_out` (or twice the size), up to 64 MiB |
| `buf`, `buf_len`, `cursor`, `ending_cursor_out`, `nwritten_out` (a multi-value cursor) | the result: `Array String` of every NUL-terminated item, all cursor pages read |
| `buf`, `buf_len` with the result `$num_bytes` (no `nwritten_out`) | a `bufLen : UInt32` parameter; the result is the `ByteArray` (or `String`) of the bytes written (`HttpBody.read h 65536`) |
| a 16-byte output array whose size only a witx comment gives (`addr_octets_out`, `cja3_md5_out`) | the result: the `ByteArray` of `$num_bytes` bytes |
| any other `(@witx pointer T)` of a scalar | an output: appended to the result, in parameter order, before the `expected` value |
| text out (`char8`) | `String`; bytes that are not UTF-8 become U+FFFD |

Errors: every call is an `EIO FastlyStatus` action. In `IO` it lifts
automatically (`instance : MonadLift (EIO FastlyStatus) IO`) and a failure is
the `IO.Error` `Fastly host call failed: <status>`. To handle a status, run the
action in `EIO` or with `.toBaseIO` (`Except FastlyStatus α`); `found? x`
turns `$none` (a missing header, key or value) into `Option.none`. An enum
value outside the witx's cases fails with `.error`.

Hand-written parts: none in the bindings. The generator holds two small
tables taken from witx comments rather than witx syntax — which record
pointers are outputs (`$send_error_detail`, `$image_optimizer_error_detail`,
parameters ending `_out`) and the 16-byte arrays above — listed for review in
[REVIEW.md](REVIEW.md).

### What is bound

| witx module | Lean module | Bound |
| --- | --- | --- |
| `fastly_abi` | `Lasm.Fastly.Abi` | 1 of 1 |
| `fastly_http_req` | `Lasm.Fastly.HttpReq` | 56 of 61 |
| `fastly_http_downstream` | `Lasm.Fastly.HttpDownstream` | 40 of 40 |
| `fastly_http_resp` | `Lasm.Fastly.HttpResp` | 19 of 19 |
| `fastly_http_body` | `Lasm.Fastly.HttpBody` | 11 of 11 |
| `fastly_backend` | `Lasm.Fastly.Backend` | 17 of 17 |
| `fastly_async_io` | `Lasm.Fastly.AsyncIo` | 2 of 2 |
| `fastly_kv_store` | `Lasm.Fastly.KvStore` | 10 of 10 |
| `fastly_config_store` | `Lasm.Fastly.ConfigStore` | 2 of 2 |
| `fastly_dictionary` | `Lasm.Fastly.Dictionary` | 2 of 2 |
| `fastly_secret_store` | `Lasm.Fastly.SecretStore` | 4 of 4 |
| `fastly_object_store` (deprecated) | `Lasm.Fastly.ObjectStore` | 9 of 9 |
| `fastly_cache` | `Lasm.Fastly.Cache` | 29 of 29 |
| `fastly_http_cache` | `Lasm.Fastly.HttpCache` | 25 of 26 |
| `fastly_geo` | `Lasm.Fastly.Geo` | 1 of 1 |
| `fastly_device_detection` | `Lasm.Fastly.DeviceDetection` | 1 of 1 |
| `fastly_erl` (rate limiting) | `Lasm.Fastly.Erl` | 6 of 6 |
| `fastly_acl` | `Lasm.Fastly.Acl` | 2 of 2 |
| `fastly_log` | `Lasm.Fastly.Log` | 2 of 2 |
| `fastly_shielding` | `Lasm.Fastly.Shielding` | 2 of 2 |
| `fastly_compute_runtime` | `Lasm.Fastly.ComputeRuntime` | 2 of 2 |
| `fastly_uap` (deprecated) | `Lasm.Fastly.Uap` | 1 of 1 |
| `fastly_purge` | `Lasm.Fastly.Purge` | 0 of 1 |
| `fastly_image_optimizer` | `Lasm.Fastly.ImageOptimizer` | 0 of 1 |

Not bound (8; each is a comment in its module and listed with the reason in
[`fastly-surface.json`](../scripts/bindings/fastly-surface.json)): the `_v2`/`_v3`
send and pending-request functions that fill a `$send_error_detail` record
(the record is most useful when the call *fails*, so it needs an error type
other than `FastlyStatus`: a decision for Jordan, [REVIEW.md](REVIEW.md); the
v1 functions cover sending), `http_cache.get_suggested_cache_options` (an
output record with pointers), `image_optimizer.transform_image_optimizer_request`
(an output error record with a host-written message) and
`purge.purge_surrogate_key` (an input record holding an output buffer).

### How it is built

- **Lean.** `library/Lasm/Fastly/*.lean`: `@[extern]` declarations (and, for
  record parameters, a `def` that passes the record's fields to a private
  extern).
- **C glue.** [`library/c/lasm_fastly.c`](../library/c/lasm_fastly.c), one
  function per bound host call: it converts Lean values to the ABI (pointers
  into Lean's strings and byte arrays, records laid out at their witx offsets),
  calls the import (`__attribute__((import_module("fastly_http_req"), import_name("method_get")))`),
  retries output buffers on `$buflen`, and builds the Lean result. A program
  links it only when it uses `Lasm.Fastly`. In every build it fails with
  `$unsupported`, except that `--target fastly`'s WASI link
  ([`src/wasi/wasi-link.mjs`](../src/wasi/wasi-link.mjs)) compiles it with
  `-DLASM_WASI_FASTLY`, where it imports the host. The module may import any
  `fastly_*` module.
- **Generator.** `node scripts/bindings/generate-fastly.mjs` writes the
  modules, the glue, the surface report and the conformance fixture's
  `EveryCall.lean`; `--check` fails when a committed file differs.

To move to a newer Viceroy, replace `scripts/fastly/witx/` with that tag's
files ([README](../scripts/fastly/witx/README.md)), regenerate, then
regenerate `library/prebuilt` (`gh workflow run library-prebuilt.yml --ref
<branch>`, download the `library-prebuilt` artifact into
`library/prebuilt/`).

### Tests

- [`test/fastly-bindings.test.mjs`](../test/fastly-bindings.test.mjs): the
  committed files are the generator's output for the pinned witx (digests in
  the witx README), the library ships every module in import order, every
  extern has its C function with host imports and as a stub with the same
  parameters, and the HTTP, store and backend modules are bound in full.
- [`test/fixtures/fastly-abi`](../test/fixtures/fastly-abi): 28 conformance
  checks under Viceroy, each stating its Lean proposition in a comment
  (`∀ m, (HttpReq.methodSet r m *> HttpReq.methodGet r) = pure m`, header
  values through the multi-value cursor, a 20,000-byte value through `$buflen`,
  records by pointer, typed errors, the stores, backends, `async_io.select`).
  Its module imports **every** bound host function (`Fixture/EveryCall.lean`,
  generated, never run), so Viceroy loading it checks each import's name and
  signature against the host. One check follows Viceroy rather than the witx
  comments: Viceroy 0.21.1 answers `header_value_get` for a name that is not
  present with `$inval` instead of `$none`, so header removal is checked
  through `headerNamesGet`; `found?` still maps `$none` where the host sends it.
- [`examples/fastly`](../examples/fastly/Main.lean) answers the same route
  checks as `examples/fetch` under Viceroy (`scripts/wasi/wasi-ci.mjs`, host
  `lasm-fastly`).

[`fastly-bindings.yml`](../.github/workflows/fastly-bindings.yml) runs the
drift check and the unit tests on pull requests that touch them, and
[`wasi.yml`](../.github/workflows/wasi.yml) (with the WASI targets) the Viceroy
checks.

## Lasm.WASI.Http: not yet generated

`--target wasi-http` already builds a `wasi:http/proxy@0.2.12` component
(docs/WASI.md): the core module imports `wasi:http/types`,
`outgoing-handler`, `wasi:io` and the monotonic clock, through
hand-written canonical ABI glue ([`src/wasi/lasm_wasi_http.c`](../src/wasi/lasm_wasi_http.c))
that `Lasm.Fetch.serve` uses, and `lasm build` splices it into a component
template made by wasm-tools in CI. `Lasm.WASI.Http`, generated from the same
WIT, needs:

1. A WIT reader and a canonical ABI lowering in the generator (resources and
   their handles, `option`, `result`, `variant` with payloads such as
   `error-code`, `list`, `tuple`, records, flags; flattening up to 16 core
   parameters and one result, return areas, `cabi_realloc` for returned
   strings and lists), producing Lean modules and C glue in the shape of
   Lasm.Fastly's.
2. The component template made from a core module that imports **every**
   function the bindings bind (the template supplies each import's canonical
   lowering; a program may import fewer, never more): the generated
   `EveryCall` fixture's core module, which CI's
   `make-component-template.mjs --check` then compares byte for byte.
3. An export binding for `wasi:http/incoming-handler.handle` (the program's
   `main` receives the `incoming-request` and `response-outparam` handles).
4. A conformance fixture and an `examples/wasi-http` server checked under
   `wasmtime serve`.

Only `wasi:http` (with the `wasi:io` streams, poll and error and the clock it
needs) is planned: Lean's `IO` already covers what `wasi:cli`,
`wasi:filesystem` and `wasi:random` give through preview 1.
