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
| `Lasm.WASI.Http` | The WASI 0.2.12 WIT that Wasmtime v49.0.4 ships (`scripts/wasi/wit/deps/`) | [`scripts/bindings/generate-wasi-http.mjs`](../scripts/bindings/generate-wasi-http.mjs) | Current source, not yet released: every stable function of the wasi:http proxy world's imports (90) and its export |

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

## Lasm.WASI.Http

`import Lasm.WASI.Http` gives the `wasi:http/proxy@0.2.12` world a
`lasm build --target wasi-http` component lives in, generated from the pinned
WASI 0.2.12 WIT (`scripts/wasi/wit/deps/`, Wasmtime v49.0.4's copy, licence in
[LICENSE_AUDIT.md](LICENSE_AUDIT.md)): one Lean module per imported interface,
with every function and resource member that is not `@unstable` (90 functions),
and the export.

| WIT interface | Lean module |
| --- | --- |
| `wasi:io/error@0.2.12` | `Lasm.WASI.Io.Error` |
| `wasi:io/poll@0.2.12` | `Lasm.WASI.Io.Poll` |
| `wasi:io/streams@0.2.12` | `Lasm.WASI.Io.Streams` |
| `wasi:clocks/monotonic-clock@0.2.12` | `Lasm.WASI.Clocks.MonotonicClock` |
| `wasi:http/types@0.2.12` | `Lasm.WASI.Http.Types` |
| `wasi:http/outgoing-handler@0.2.12` | `Lasm.WASI.Http.OutgoingHandler` |
| `wasi:http/incoming-handler@0.2.12` (the export) | `Lasm.WASI.Http.IncomingHandler` |

```lean
import Lasm.WASI.Http
open Lasm.WASI.Http Lasm.WASI.Http.Types

def main : IO Unit := IncomingHandler.serve fun request out => do
  let response ← OutgoingResponse.new (← Fields.new)
  let .ok body ← response.body | throw (IO.userError "no body")
  ResponseOutparam.set out (.ok response)
  let .ok stream ← body.write | throw (IO.userError "no stream")
  discard <| stream.blockingWriteAndFlush s!"{repr (← request.method)}\n".toUTF8
  stream.drop
  discard <| OutgoingBody.finish body none
```

`lasm build Main.lean --target wasi-http`, then `wasmtime serve
wasi-http/main.wasm` (or Spin). In every other build each call fails with an
`IO.Error` naming the function. Only the wasi:http world is bound: Lean's `IO`
already covers what `wasi:cli`, `wasi:filesystem` and `wasi:random` give
through preview 1.

### Mapping rules

- **Names**: interfaces, types and resources UpperCamel, functions, fields
  and cases lowerCamel, acronyms as words (heck's rule, as wit-bindgen):
  `DNS-error-payload` → `DnsErrorPayload`, `HTTP-request-URI-invalid` →
  `httpRequestUriInvalid`, `[method]fields.from-list` → `Fields.fromList`,
  `[constructor]fields` → `Fields.new`, `[resource-drop]fields` → `Fields.drop`,
  `%stream` → `stream`. A method's first parameter is `self`.
- **Types**: `bool`, `u8`…`u64` as `Bool`, `UInt8`…`UInt64`; `string` as
  `String` (lifted with invalid UTF-8 replaced); `list<u8>` as `ByteArray`,
  `list<T>` as `Array T`; `option<T>` as `Option T`; `result<T, E>` as
  `Except E T` (`Unit` for a missing side); `tuple<A, B>` as `A × B`; records
  as structures, variants and enums as inductives (a case's payload is its one
  field); a resource as a structure holding its `handle : UInt32`, for `own`
  and `borrow` alike. WIT `type` aliases and `use`d names are `abbrev`s
  (`Headers := Fields`, `Types.InputStream := Lasm.WASI.Io.Streams.InputStream`).
- **Calls**: every function is an `IO` action returning its WIT result
  (`IO (Except HeaderError Unit)`, `IO (Option (Except Unit (Except ErrorCode IncomingResponse)))`):
  the WIT's own errors are values; an `IO.Error` only means the host is not a
  wasi-http host (or, in the export, that its handles were taken already).
- **Ownership** is the WIT's: an `own` parameter moves the handle to the host
  (`OutgoingBody.finish`, `ResponseOutparam.set`), a `borrow` lends it, and the
  program drops what it owns with `R.drop`. Handles are not freed by Lean's
  reference counting.
- **The export**: `wasi:http/incoming-handler.handle(request, response-out)`
  runs `main` once per request (one instance per request, as `wasmtime serve`
  and Spin call it). `IncomingHandler.take` gives `main` the two handles, once;
  `IncomingHandler.serve handler` takes them and calls `handler`. If `main`
  returns without taking them the host gets a 500 response.
- **Limits**: a single call's returned lists and strings (a `blocking-read`'s
  bytes, `fields.entries`) must fit the 2 MiB scratch buffer `cabi_realloc`
  uses (src/wasi/lasm_wasi_http.c), so read bodies in chunks (64 KiB is
  plenty). `blocking-write-and-flush` takes at most 4096 bytes a call (WASI).

### How it is built

[`scripts/bindings/wit.mjs`](../scripts/bindings/wit.mjs) reads the WIT
(packages, interfaces, `use`, aliases, records, variants, enums, flags,
resources, functions, docs and `@since`/`@unstable`/`@deprecated` gates);
[`scripts/bindings/generate-wasi-http.mjs`](../scripts/bindings/generate-wasi-http.mjs)
resolves the bound interfaces and writes:

- `library/Lasm/WASI/**/*.lean`, whose doc comments quote the WIT (licence:
  `library/Lasm/WASI/WIT-LICENSE.txt`), and `library/Lasm/WASI/Http.lean`;
- [`library/c/lasm_wasi_http_bindings.c`](../library/c/lasm_wasi_http_bindings.c):
  the canonical ABI for the module's 32-bit memory, one lift (memory → Lean),
  store (Lean → memory) and lower (Lean → core values) helper per type, which
  follow Lean's object layout (object fields first, then scalars by size;
  one-field structures and handles unboxed, payload-free variants as `uint8`).
  Parameters are flattened (at most 16 core values), variants into their
  joined core types; a result of more than one core value comes back through
  a return area; lists passed in are copied to temporary memory (strings and
  byte lists are passed in place); a result holding lists or strings is
  allocated by `cabi_realloc`, armed around that call only;
- `src/wasi/lasm_wasi_http_imports.h`, the same import declarations for the
  hand-written Lasm.Fetch glue ([`src/wasi/lasm_wasi_http.c`](../src/wasi/lasm_wasi_http.c),
  which keeps the export, `cabi_realloc` and Lasm.Fetch's own calls until
  Lasm.Fetch is deleted), so both name each import by one symbol;
- `test/fixtures/wasi-http-abi/Fixture/EveryCall.lean` and
  `scripts/bindings/wasi-http-surface.json`.

Every `--target wasi-http` program links the glue with `-DLASM_WASI_HTTP`
([`src/wasi/wasi-link.mjs`](../src/wasi/wasi-link.mjs)), and the glue
references every import (`lasm_wasi_http_bound_imports`), so every program's
core module imports the same 90 functions and the one component template
(`src/wasi/component/proxy-template.wasm`) serves them all: CI's
`make-component-template.mjs --check` requires the template, and each build of
`examples/fetch`, `examples/wasi-http` and the fixture, to be byte for byte what
wasm-tools makes. Other builds of a program that imports Lasm.WASI.Http link
the glue's failing stubs.

To move to a newer WASI release, replace `scripts/wasi/wit/deps/` (with its
README and licence), regenerate, regenerate the component template in CI
(wasi.yml keeps `proxy-template.wasm` in its `wasi-results` artifact when the
check fails) and `library/prebuilt`.

### Tests

- [`test/wasi-http-bindings.test.mjs`](../test/wasi-http-bindings.test.mjs):
  the committed files are the generator's output; the library ships every
  module in import order; every extern has its C function with host imports
  and as a stub with the same parameters; the surface report counts every
  import; and the core signatures equal wit-bindgen 0.63's for the 45
  functions the hand-written glue declared before.
- [`test/fixtures/wasi-http-abi`](../test/fixtures/wasi-http-abi): 35
  conformance checks under `wasmtime serve`, each stating its Lean proposition
  in a comment (`∀ n v, (Fields.new >>= fun f => f.append n v *> f.get n) = pure #[v]`,
  lists of lists and of tuples both ways, typed `header-error`s, immutable
  request headers, variant round trips such as `.other "PURGE"`, `option<u64>`
  timeouts, nested `option<result<result<…>>>` futures, `poll`, the clock, a
  full outgoing exchange, a 300,000-byte body, `connection-refused`).
- [`examples/wasi-http`](../examples/wasi-http/Main.lean) answers the same
  route checks as `examples/fetch` under `wasmtime serve`
  (`scripts/wasi/wasi-ci.mjs`, host `lasm-wasi-http`).

[`wasi-http-bindings.yml`](../.github/workflows/wasi-http-bindings.yml) runs
the drift check and the unit tests on pull requests that touch them, and
[`wasi.yml`](../.github/workflows/wasi.yml) the `wasmtime serve` checks.
