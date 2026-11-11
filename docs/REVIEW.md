# Jordan's review list

Status: **kept by Claude, read by Jordan at his leisure.** Started 2026-11-09.
Nothing here blocks work. Claude decides everything except the developer-facing
surface: every Lasm API that differs from Lean, every `Lasm.*` library, the
CLI, and the example apps' code and propositions. Those are queued in §2 for
Jordan. Claude also lists the decisions he may want to walk back (§1), and the
text users read that changed recently (§3).

When Jordan is done with an item, tick it or write the answer next to it. The
decisions themselves are logged with their reasoning in
[DECISIONS.md](DECISIONS.md), and the work order is in [ROADMAP.md](../ROADMAP.md).

## 1. Decisions Claude made that Jordan may want to revisit

### MAJOR: where the Lasm.* libraries live (deferred by Jordan, 2026-11-10)
- [ ] **Major decision, deferred (not open).** Today every `Lasm.*` library ships inside `@lasm/cli`
  under the `Lasm` namespace, so there is nothing to install.
  - **The option:** bundle only the code tied to the compiler, and move or
    delete the rest.
    - Bundled:
      - `Lasm.JS`, whose externs and wire format are tied to the exact Lasm version;
      - a minimal `Lasm.Fetch` core, with the WASI, Fastly and wasi-http C glue.
    - Moved: the pure-Lean layers (`Lasm.Web`, `Lasm.UI`, `Lasm.RPC`,
      `Lasm.KV`, `Lasm.Fastly`, `Lasm.Fetch.Assets`) become separate Lake
      packages in their own repositories. They would be opt-in and versioned
      independently, likely without the `Lasm.` prefix.
    - Or some of them are deleted.
  - **The costs:**
    - Lake builds against Lasm's managed Lean.
    - First-build time, because `library/prebuilt` caching no longer covers the moved packages.
    - New repositories need your OK.
  - **Status: deferred** (Jordan, 2026-11-10). Keep everything inside `@lasm/cli` for now (the current setup). Jordan favours option D: platform-coupled code (`Lasm.JS` core, the generated standard bindings, the `Lasm.Fetch` server, platform glue) in the CLI; opinionated frameworks (`Lasm.UI`, `Lasm.RPC`, probably `Lasm.KV`) as separate lockstep-versioned `@lasm/*` npm packages from the same repository. He defers the decision until the `Lasm.*` rewrite is complete and the final APIs are decided and finished.
    Removal 16 of
    [proposals/IRREDUCIBLE.md](proposals/IRREDUCIBLE.md#3-ranked-removal-list)
    waits on it ([DECISIONS.md](DECISIONS.md), 2026-11-10).

### MAJOR: generated standard-library bindings (decided by Jordan, 2026-11-09)
- [x] **Major decision, decided (A).** The bindings are generated from
  authoritative sources:
  - WebIDL, through w3c/webref;
  - `@types/node`;
  - Deno's `lib.deno.d.ts`;
  - `bun-types`.

  They are generated into the Lasm repository and **ship inside
  `@lasm/cli`**. There is no optional download component, ever.
- They live under `Lasm.JS` and are named after the platform or standard
  they mirror:

  | Module | Mirrors |
  | --- | --- |
  | `Lasm.JS.Web` | Web standards, including the WinterTC common subset |
  | `Lasm.JS.Node` | Node core modules, for example `Lasm.JS.Node.Fs` |
  | `Lasm.JS.Deno` | Deno's APIs |
  | `Lasm.JS.Bun` | Bun's APIs |

- They are callable `@[js]` bindings and spec-faithful: standard names and
  shapes, with only Lean typing added (`Promise` → `Async`, nullable →
  `Option`, dictionaries → structures).
- Each platform has one surface, generated against the oldest supported
  version. Newer APIs are labelled with the version that added them.
- npm libraries (for example bcrypt) stay ad hoc bindings.
- The bindings are tested with web-platform-tests and official test vectors.
- The hand-written `Lasm.Web` is replaced by the generated
  `Lasm.JS.Web.Browser` (done 2026-11-10; see "The browser tier" below).
- The first piece of work is tier 1: the common web APIs (fetch,
  Request/Response, URL, `crypto.subtle`/`getRandomValues`,
  TextEncoder/TextDecoder, streams, AbortController, timers,
  `structuredClone`, console). It is in ROADMAP.md, after the current
  testing work.
- **Tier 3 adds `Lasm.JS.Cloudflare`** (Jordan, 2026-11-09). It is generated
  from Cloudflare's published workers-types: Workers KV, D1, R2, Durable
  Objects, env bindings and the rest. When it is done, it replaces the hand
  bindings in the example apps (Porter, Ledger).
- **What `Lasm.JS.*` and the host bindings replace**
  ([proposals/IRREDUCIBLE.md](proposals/IRREDUCIBLE.md#3-ranked-removal-list),
  removals 17 and 18). Decided by Jordan, 2026-11-10: `Lasm.Fetch` and
  `Lasm.Web` are deleted entirely (this supersedes the earlier note that
  `Lasm.Fetch` stays).
  - `Lasm.Fetch`: JavaScript targets serve Web `Request → Async Response`
    through `Lasm.JS.Web` (Workers and edge `export default { fetch }`,
    `Deno.serve`, `Bun.serve`, Node through an npm adapter binding); Fastly
    uses `Lasm.Fastly.*`, WASI `Lasm.WASI.Http`. Its proved
    `Request`/`Response` model moves into the test suite as the spec.
  - `Lasm.Web`: done 2026-11-10. The browser tier covers it in full (document
    and DOM, Canvas and History included); App moved to `Lasm.UI.Mount`.
  - From `Lasm.KV`: the Deno and Workers backends. The `Store` abstraction
    and the memory and Fastly backends remain, pending your KV review.
  - `Lasm.UI` and `Lasm.RPC` switch their browser side to `Lasm.JS.Web`,
    with no API change (`Lasm.UI`: done 2026-11-10, it needed only the mount
    glue; `Lasm.RPC` never used `Lasm.Web`).
- Still for Jordan to review when it lands: the generated surface and its
  naming details.
- [ ] **`Lasm.JS.Node` (tier 2, first part; 2026-11-10) is generated from
  Node's own docs, not `@types/node`.** The list above names `@types/node`;
  Claude chose Node's machine-readable docs (`doc/api/*.json`), which the Node
  project releases with each version, and lowered them to WebIDL so the tier-1
  generator and mapping serve both ([DECISIONS.md](DECISIONS.md), 2026-11-10;
  [JS_BINDINGS.md](JS_BINDINGS.md#standard-bindings-for-node-lasmjsnode)).
  API-shape choices to review:
  - **Names are the docs' own**: `fsPromises.readFile`, `path.join`,
    `child_process.spawn`, `crypto.createHash`, `Buffer.from`. Namespaces are
    lowercase as in the docs (`fs.Stats`, `stream.Readable`), not
    `Lasm.JS.Node.Fs.readFile`.
  - **Unions take their members directly**: with the `Coe` instances the
    browser tier added to the generator, `fsPromises.readFile "a.txt"` works
    (`.domString "a.txt"` still does).
  - **Encoding-dependent results are unions**: `readFile` gives
    `Uint8ArrayOrDOMString` (bytes, or a string when an encoding is passed),
    as the docs say, not two functions.
  - **Callbacks become promises**: `crypto.scrypt`, `pbkdf2`, `hkdf` are
    `Async` (through `util.promisify`); `child_process.execFile` is its
    documented promisified form (`{stdout, stderr}`), so the `ChildProcess`
    it otherwise returns comes from `spawn`.
  - **Numbers follow the docs**: `{number}` is `Float` (`crypto.randomBytes 32`,
    `FileHandle.fd`), `{integer}` is `Int`; `os.uptime` is corrected to `Float`
    because Node returns fractions.
  - **Not generated**: `node:http`/`node:net` (Node serving goes through an
    npm adapter, per your 2026-11-10 direction), and async iteration (`glob`,
    `watch`, `opendir`).

- [ ] **`Lasm.JS.Deno` and `Lasm.JS.Bun` (tier 2, second part; 2026-11-10) are
  generated from the runtimes' own TypeScript declarations** (Deno 2.9.6's
  `lib.deno.ns.d.ts`/`lib.deno_net.d.ts`, Bun 1.4.4's `bun-types`), pinned by hash
  ([DECISIONS.md](DECISIONS.md), 2026-11-10;
  [JS_BINDINGS.md](JS_BINDINGS.md#servers-on-javascript-runtimes-lasmjsdeno-lasmjsbun-and-node)).
  API-shape choices to review:
  - **Overload names follow Lasm.JS.Web's rule**: `Deno.serve handler`,
    `Deno.serveWithOptions options handler`, `Deno.serveWithTlsOptions tlsOptions handler`
    (the TLS form is the `ServeTcpOptions & TlsCertifiedKeyPem` alternative, split
    into its own function and structure `ServeTcpTlsOptions`).
  - **Callback types are named after the member** where the declaration has no
    alias: Deno's `ServeHandler` (an alias), but `ServeOptionsOnListen`,
    `ServeOptionsOnError`, and Bun's `ServeOptionsFetch`, `ServeOptionsError`.
    A hand-picked name (`Bun.FetchHandler`) would be nicer and less mechanical.
  - **Bun's `Serve.Options` is one structure `ServeOptions`** with `fetch` required
    (the TCP and `fetch` alternatives of its `XOR<…>` types); `port` is the declared
    `string | number` (`DOMStringOrUnsignedShort`, a `Nat` coerces).
  - **Plain-data results are structures, objects the runtime keeps are handles**:
    `NetAddr` and `SocketAddress` are copied structures (`(← server.addr).port`),
    `HttpServer`, `Server` and `ServeHandlerInfo` handles. Plain objects reach a
    callback copied, so they cannot be handles there. The choice is per
    declaration in `serve-tier2.mjs` (`as`), since TypeScript does not say which.
  - **Numbers the doc comments call ports, counts or sizes are `Nat`**, others
    `Float` (none in this cut).
  - **Left out**: Unix sockets, WebSockets (Tandem's proposal), Bun's `routes`,
    `tls`, `development`, the handler-inside-options overloads; experimental
    members never (Bun's `http2`/`http3`, Deno's VSOCK).
  - **Two Lasm.JS findings, not changed here**: Lasm.JS's functions are variadic
    (`length` 0), and `Deno.serve` calls a zero-length handler without its
    request, so the generated callbacks set `length` to their arity; a general
    `Function.ofFn` arity would fix it for hand-written handlers too. And
    `lasm build` checks `@[js "globalThis" "Deno.…"]` bindings on Node, where
    `Deno` does not exist, so a hand-written binding of a Deno- or Bun-only global
    fails the build (the generated ones look the global up at run time).
  - **Bun deviates from its declaration**: `server.fetch(request)` calls the handler
    without the `server` argument, so a generated handler rejects there
    (`known.json`).
  - **Node**: no Lasm API; `@hono/node-server`'s `serve({fetch})` bound with
    `@[js]` in the user's program, documented in JS_BINDINGS.md and exercised in
    CI. A user-facing helper (or a template change) is yours to decide.

### Host bindings: `Lasm.Fastly` generated, `Lasm.WASI.*` next (decided by Jordan, 2026-11-10)
- [x] **Decided.** `Lasm.Fetch` is deleted entirely. Bindings are named for
  the host interface: `Lasm.JS.*`, `Lasm.WASI.*` (generated from the official
  WIT), `Lasm.Fastly.*` (generated from Fastly's published ABI), all shipped in
  `@lasm/cli`, drift-checked, tested in local emulators only.
- [ ] **Review `Lasm.Fastly`** (current source, not released;
  [WASI_FASTLY_BINDINGS.md](WASI_FASTLY_BINDINGS.md)): 244 of the ABI's 252
  functions, generated from Viceroy v0.21.1's witx; the hand-written
  `Lasm.Fastly` (5 store calls) is gone. Points to look at:
  - **Errors are `EIO FastlyStatus α`**, lifted into `IO` automatically
    (`Fastly host call failed: <status>`); `found?` maps `$none` to `Option.none`.
    The alternatives were `IO α` with the status only in the message, or
    `IO (Except FastlyStatus α)` everywhere.
  - **Bytes vs text**: witx `char8` outputs are `String` (invalid UTF-8 becomes
    U+FFFD), `u8` are `ByteArray`; header names and values *in* are `(list u8)`,
    so `ByteArray`, with a scoped `Coe String ByteArray` under `open Lasm.Fastly`.
  - **Two generator tables come from witx comments, not witx syntax**: which
    record pointers are outputs (`$send_error_detail`,
    `$image_optimizer_error_detail`, `_out` parameters) and two 16-byte output
    arrays (`addr_octets_out`, `cja3_md5_out`).
  - **Not bound (8)**: the five `send_v2`/`v3`/`pending_req_*_v2` functions,
    whose `$send_error_detail` matters when the call fails, so they need an
    error type carrying it (`EIO (FastlyStatus × SendErrorDetail)`?); and
    three functions with output records that hold pointers.
  - Names are the witx's own (`HttpReq.headerValuesGet`, `KvStore.lookupWaitV2`,
    `Backend.«exists»`), records keep their pointer field's name
    (`cacheOverridePtr`).
- [x] **What replaces `Lasm.Fetch.serve` across targets — decided** (Jordan,
  2026-11-10). `Lasm.Fetch` is deleted entirely. There is **no single handler
  across JS and Fastly/WASI targets** (accepted trade-off): each target's
  server is written against its own host interface's generated bindings —
  JS targets serve a standard Web `Request → Async Response` through
  `Lasm.JS.Web` (Workers `export default {fetch}`, `Deno.serve`, `Bun.serve`,
  Node through an npm adapter binding); Fastly uses `Lasm.Fastly.*`; WASI
  uses `Lasm.WASI.Http`. Multi-target templates and apps get a small
  per-target entry module each, sharing pure Lean app logic.
- [ ] **The Fastly and WASI examples and templates.** `examples/fastly` is new
  (Lasm.Fastly); `examples/fetch` drops its `/fastly/stores` route. The
  multi-target `lasm init --template fetch|fullstack` projects, Conduit and
  Folio still serve one `Lasm.Fetch` handler on Fastly and wasi-http; they
  move to per-target entry modules (decision above) once `Lasm.WASI.Http` and
  the `Lasm.JS.*` serve path land.
- [ ] **`Lasm.WASI.Http` is generated** ([WASI_FASTLY_BINDINGS.md](WASI_FASTLY_BINDINGS.md#lasmwasihttp)),
  for review: the mapping rules (`result<T, E>` as `Except E T` inside `IO`,
  so the WIT's errors are values and `IO.Error` means only "not a wasi-http
  host"; resources as `structure R where handle : UInt32` with explicit
  `R.drop`, not freed by reference counting; heck names such as
  `ErrorCode.httpRequestUriInvalid`); the export as
  `IncomingHandler.serve fun request responseOut => …`; every wasi-http program
  importing all 90 functions so one component template serves them; the 2 MiB
  limit on one call's returned lists. The hand-written Lasm.Fetch glue
  (src/wasi/lasm_wasi_http.c) stays until Lasm.Fetch is deleted; it now names
  its imports through the generated header.

### The browser tier replaced `Lasm.Web` (2026-11-10, Jordan's decision; Claude's choices to review)

- **Layout.** `import Lasm.JS.Web.Browser` = tier 1 plus `Lasm.JS.Web.Geometry`,
  `Css`, `Html` (the tree, the HTML elements, `Window`, `Location`, `History`,
  `Storage`; one module because they name each other), `UiEvents`, `Canvas`,
  `WebSocket`. Tier 1 never sees a browser type
  ([JS_BINDINGS.md](JS_BINDINGS.md#the-browser-tier-lasmjswebbrowser)).
- **`Lasm.Web.App` moved to `Lasm.UI.Mount`**, unchanged except that `root`
  takes the handle type (`Mount.root Element`), so `Lasm.UI` loads nothing of
  the DOM bindings. It stays hand-written: it binds Lasm's own loader
  (`lasm:app`), not a standard. `Lasm.UI`'s API is unchanged.
- **Mapping additions (both tiers):** coercions from an interface to its parent
  and from a union's member types to the union, so `setAttribute "title" "x"`
  and `fetch "https://…"` read naturally despite Trusted Types and `RequestInfo`
  unions. Not generated in the browser tier: event handler attributes
  (`onclick`: use `addEventListener`), `[HTMLConstructor]` constructors, unnamed
  getters (`DOMStringMap`, so `dataset` has no properties: use
  `getAttribute "data-x"`).
- **What could not be expressed as a binding (no API was invented; yours to
  decide):**
  - *Unmount cleanup.* `Lasm.Web` removed an app's listeners, timers, frames and
    sockets on unmount. Generated bindings act on the page directly; apps
    remove their own in `Mount.onUnmount`. `Lasm.UI` apps are unaffected.
  - *Downcasts* are unchecked (`({ val := e.val } : HTMLInputElement)`). A
    generated checked cast (`HTMLInputElement.cast? : Value → IO (Option …)`
    through `instanceof`) would be a new generated API.
  - *Batching.* `Context2D.draw` (many drawing commands in one call) and
    `Event.info` (the usual event fields in one call) have no counterpart; each
    method is one call into JavaScript now.
  - *Not web APIs:* `encodeURIComponent`/`decodeURIComponent` (ECMAScript; call
    them through `Lasm.JS.global`), `Crypto.hex`, `Lasm.Web.background` (use
    `Async.asTask` or `Std.Async.background`).
  - *Spec ahead of browsers:* CSSOM View now types `scrollIntoView` and `scroll`
    as returning `Promise<ScrollResult>`; browsers return `undefined`, which the
    generated `Async` accepts (checked in CI).
- The old-to-new table is in [release/0.7.0-notes.md](release/0.7.0-notes.md).
- Tandem still uses `Lasm.Web.WebSocket`: it pins the published `@lasm/cli`
  0.5.1, so it migrates when it moves to the release with the browser tier
  (ROADMAP.md).

### High-priority work to define with Jordan
- [ ] **Stamp out Lasm.JS's weaknesses as far as possible** (Jordan,
  2026-11-09). The known weaknesses:
  - no inline JavaScript;
  - Symbol-keyed properties can't be reached through `get`;
  - JavaScript classes can't be defined or subclassed from Lean;
  - synchronous callbacks are limited: no async waits inside them, and the #90 depth limit;
  - each call costs about 25–35 µs.

  This is to be scoped together before work starts (ROADMAP.md, top of "Now").
  - [ ] **Symbol keys (PR #170): `get`/`set` take any `[ToJS κ]` key.**
    Before: `get (o : Value) (key : String) …` and `set [ToJS α] (o : Value) (key : String) (x : α)`.
    After: `get [ToJS κ] (o : Value) (key : κ) …` and `set [ToJS κ] [ToJS α] (o : Value) (key : κ) (x : α)`.
    A String, a number or a Symbol `Value` works, as in JavaScript's `o[key]`.
    Source compatible; no new names or types (docs/JS_BINDINGS.md, "Property keys").
  - [ ] **#90 depth limit (PR #175): fixed, no API change.** Lasm's link wraps
    Std.Async's `bindAsyncTask` (`library/c/lasm_async.c`): past 128 nested
    ready binds (16,384 on Node) the rest of the loop continues as a queued
    Lean task. CI runs 1,000,000 steps of every kind on Node, Deno, Bun,
    workerd and in Chromium, Firefox and WebKit (docs/EDGE.md, "Async loops").
  - [ ] **Waits inside synchronous callbacks stay a clear error, by design.**
    Promises cannot settle while the JavaScript caller waits (run to
    completion; JSPI cannot suspend through its frames). On Node, serving other
    Lean threads' host calls during the callback would run unrelated
    JavaScript in the middle of the caller. On the single-threaded targets,
    waiting for Lean work that needs no JavaScript event already works
    (docs/JS_BINDINGS.md, "Callbacks").
  - [ ] **Call cost (PR #171): about 5 µs per consecutive call on Node** (was
    22–24 µs), no API change; a lone call or a loaded server still costs
    20–30 µs. Review the first Stryker-disable comments in the repo (fast paths
    whose effect is speed only).
  - [ ] **Inline JavaScript and classes: proposal, not implemented**
    ([proposals/LASM_JS_GAPS.md](proposals/LASM_JS_GAPS.md), PR #169).
    Recommended: `@[js "./ffi/foo.mjs" "f"]` paths relative to the Lean file
    for inline JS, and a `Lasm.JS.Class.define` builder (real `class extends`,
    no eval) for classes; Durable Objects later, generated at build time.

### The testing strategy ([TESTING_STRATEGY.md §6](TESTING_STRATEGY.md#6-decisions))
- [ ] 1. Evidence levels keep the names L0–L3, in the README's platform table.
- [ ] 2. CI budgets, all on free runners, with no scheduled runs on Sunday:

  | Tier | Budget |
  | --- | --- |
  | PR | ≤ 20 minutes |
  | Nightly | ≤ 8 hours, Monday to Saturday |
  | Weekly | ≤ 8 runner-hours, Saturday |
  | Release | ≤ 1 hour more than today |

- [ ] 3. No OSS-Fuzz (your decision, confirmed).
- [ ] 4. A flaky test is quarantined at once, then fixed or deleted within 7 days.
- [ ] 5. The public evidence page stays generated by CI, and grows a section per method.
- [ ] 6. Model checking stays in Lean.
- [ ] 7. Glue code is reduced first, then specified by a Lean model and proved,
  and moved into Lean only where the logic is pure and a Lean program already
  runs beside it.
- [ ] 8. The order of work is: strategy → gaps closed → reduction →
  transferable property tests → rewrite assessment.
- [ ] 9. No new testing libraries (no Plausible, fast-check, Jazzer.js or TLA+).
- [ ] The property-testing convention ([§4](TESTING_STRATEGY.md#4-property-testing-convention-propositions-that-carry-over-to-proofs)):
  - Proved propositions go in `Spec.lean`.
  - Tested ones go in `Candidates.lean`, with a `Tested by:` line.
  - JavaScript and C properties name their Lean proposition and check the code
    against a Lean model.
  - In place since 2026-11-10: the lint (`scripts/propositions.mjs`) also
    requires the cited statement to be the definition's, verbatim, and a
    candidate's test to cite it. Ten candidates (Lasm.UI, Lasm.Fetch,
    Lasm.RPC) are listed in [library/PROOFS.md](../library/PROOFS.md#candidates-not-yet-proved)
    for your review with the proved ones. Three earlier prose candidates are
    listed there as "not yet stated in Lean": they need a model of JavaScript,
    the HTML parser or Lean's runtime first.
- [ ] The exit bar for "rock solid" ([§7](TESTING_STRATEGY.md#7-exit-bar-rock-solid)): eight measurable conditions.
  - How items 3, 5 and 6 are measured (2026-11-11, DECISIONS.md): a 0 % file
    fails the unit suite unless the coverage baseline names the workflows that
    run it (the baseline is now 98.05 %); the 14-day quarantine window comes
    from `test/quarantine.json`'s git history; "every platform it claims" is
    the platform tables of the five flagship apps' READMEs, each row with the
    CI jobs that run the app's outside oracle (`scripts/evidence/apps.json`).
- [ ] The reduction and verification path ([proposals/IRREDUCIBLE.md](proposals/IRREDUCIBLE.md)):
  - Lean is recommended over Rust for the rewrite.
  - Translation validation for wasm-ld and Binaryen.
  - A direct Lean IR → Wasm backend as research (M7).

### APIs and libraries
- [ ] **PR #124 is closed.** Its three drafts were `Lasm.Web.Crypto` (typed
  Web Crypto), a WebSocket upgrade in `Lasm.Fetch.serve`, and `Lasm.Markdown`
  (Folio's renderer). Each would be a new API or library, and JS bindings
  (`@[js]`) already cover what Conduit, Porter, Tandem and Folio need.
  - The drafts are kept on the `api-proposals` branch.
  - Reopen the PR to take any of them up.
  - Your related checklist items in ROADMAP.md (Porter's, Tandem's and Folio's API proposals) are unchanged.
- [ ] **Fire-and-forget `Async` in `ofSyncFn` is dropped.** Letting a
  synchronous JS callback start an `Async` task without waiting for it would be
  a new API. Waits that cannot work there fail at once, as in 0.5.0.
- [ ] **The #90 limit is fixed without an API change** (PR #175, above): long
  loops of steps that complete at once no longer overflow the JavaScript stack
  on Bun, Deno, workerd or browsers.
- [ ] **0.6.1's breaking change** (from the unpublished 0.6.0): `Lasm.JS.Wire.encode` returns `Except String ByteArray`
  instead of `ByteArray`, so a length that does not fit 32 bits fails instead
  of being misread (#154; [0.6.1-notes.md](release/0.6.1-notes.md)).
- [ ] **0.7.0's breaking changes:** `Lasm.Web` is deleted (replaced by the
  generated `Lasm.JS.Web.Browser`; its mount glue is `Lasm.UI.Mount`), and
  `Lasm.Fastly`'s five hand-written store calls give way to the generated host
  ABI. `Lasm.Fetch` still ships and is scheduled for removal in a later
  release ([0.7.0-notes.md](release/0.7.0-notes.md)).

### Process
- [ ] **The browser dev-rebuild budget is 2.5 s, was 2 s (2026-11-09).** It
  was flaky: GitHub's AMD EPYC 7763 runners rebuild the web template in
  1.8–2.3 s, the EPYC 9V74 ones in 1.2–1.6 s, so 2 s failed on the slow class
  (blocking 0.6.0). The check now takes the median of seven warm edits and
  records the CPU. README still says "about 2 s". [BROWSER.md](BROWSER.md#budgets-measured-in-ci-recorded-per-release).
- [ ] **`library-prebuilt.yml` stays,** and `library/prebuilt` (40 MB) stays
  committed. A committed copy makes the npm tarball reproducible from the
  commit alone. Generating it in CI is IRREDUCIBLE.md removal 15, deferred.
- [ ] **The Sunday policy.** There are no scheduled or automated runs on
  Sunday (US Eastern), for lasm and the website.
  - Scheduled workflows carry a runtime guard (`TZ=America/New_York date +%u`), and a test checks every cron.
  - Claude does not push, dispatch or merge on Sunday.

## 2. Jordan's review queue: APIs, libraries, examples, CLI

This is the developer-facing surface. In each item, review the code, the
docstrings, the propositions and the names.

### `Lasm.*` libraries ([library/PROOFS.md](../library/PROOFS.md) lists every proved proposition)
- [ ] `Lasm.Fetch`:
  - [Fetch.lean](../library/Lasm/Fetch.lean)
  - [Fetch/Assets.lean](../library/Lasm/Fetch/Assets.lean)
  - [Fetch/Embed.lean](../library/Lasm/Fetch/Embed.lean)
  - propositions: [Fetch/Spec.lean](../library/Lasm/Fetch/Spec.lean)
  - Its keep, narrow or remove decision is still pending with you.
- [ ] `Lasm.JS`:
  - [JS.lean](../library/Lasm/JS.lean)
  - [JS/Core.lean](../library/Lasm/JS/Core.lean)
  - [JS/Meta.lean](../library/Lasm/JS/Meta.lean) (the `@[js]` attribute)
  - [JS/Json.lean](../library/Lasm/JS/Json.lean)
  - propositions: [JS/Spec.lean](../library/Lasm/JS/Spec.lean)
- [ ] `Lasm.RPC`:
  - [RPC.lean](../library/Lasm/RPC.lean)
  - [RPC/Core.lean](../library/Lasm/RPC/Core.lean)
  - [RPC/Client.lean](../library/Lasm/RPC/Client.lean)
  - [RPC/Server.lean](../library/Lasm/RPC/Server.lean)
  - propositions: [RPC/Spec.lean](../library/Lasm/RPC/Spec.lean)
- [ ] `Lasm.KV`:
  - [KV.lean](../library/Lasm/KV.lean)
  - propositions: [KV/Spec.lean](../library/Lasm/KV/Spec.lean)
- [ ] `Lasm.UI`:
  - [UI.lean](../library/Lasm/UI.lean)
  - [App](../library/Lasm/UI/App.lean)
  - [Mount](../library/Lasm/UI/Mount.lean) (moved from `Lasm.Web.App`, 2026-11-10)
  - [Cmd](../library/Lasm/UI/Cmd.lean)
  - [Diff](../library/Lasm/UI/Diff.lean)
  - [Elements](../library/Lasm/UI/Elements.lean)
  - [Encode](../library/Lasm/UI/Encode.lean)
  - [Html](../library/Lasm/UI/Html.lean)
  - [Render](../library/Lasm/UI/Render.lean)
  - [Subs](../library/Lasm/UI/Subs.lean)
  - [Syntax](../library/Lasm/UI/Syntax.lean)
  - [Url](../library/Lasm/UI/Url.lean)
  - propositions: [UI/Spec.lean](../library/Lasm/UI/Spec.lean)
  - guide: [docs/UI.md](UI.md)
- [ ] `Lasm.JS.Web` and its browser tier (generated): the surface and its naming
  ([JS_BINDINGS.md](JS_BINDINGS.md#standard-bindings-lasmjsweb),
  [scripts/bindings/web-tier1.mjs](../scripts/bindings/web-tier1.mjs),
  [scripts/bindings/web-browser.mjs](../scripts/bindings/web-browser.mjs)).
  `Lasm.Web` was removed on 2026-11-10.
- [ ] `Lasm.Fastly` (generated): [Fastly/](../library/Lasm/Fastly), the generator [generate-fastly.mjs](../scripts/bindings/generate-fastly.mjs), the mapping rules [WASI_FASTLY_BINDINGS.md](WASI_FASTLY_BINDINGS.md), the conformance checks [Conformance.lean](../test/fixtures/fastly-abi/Fixture/Conformance.lean), the example [examples/fastly](../examples/fastly/Main.lean)
- [ ] `Lasm.Serverless` has proofs only, with no runtime API. Its propositions about the function-platform shims are in [Serverless/Spec.lean](../library/Lasm/Serverless/Spec.lean).

### Example apps: code and propositions
- [ ] Conduit:
  - [examples/conduit](../examples/conduit)
  - propositions: [Proofs/Spec.lean](../examples/conduit/Proofs/Spec.lean)
  - requirements map: [SPEC.md](../examples/conduit/SPEC.md)
- [ ] Ledger:
  - [examples/ledger](../examples/ledger)
  - propositions: [Proofs/Spec.lean](../examples/ledger/Proofs/Spec.lean)
  - requirements map: [SPEC.md](../examples/ledger/SPEC.md)
- [ ] Folio:
  - [examples/folio](../examples/folio)
  - propositions: [Proofs/Spec.lean](../examples/folio/Proofs/Spec.lean)
  - requirements map: [SPEC.md](../examples/folio/SPEC.md)
- [ ] Porter:
  - [examples/porter](../examples/porter)
  - propositions: [Proofs/Spec.lean](../examples/porter/Proofs/Spec.lean)
  - requirements map: [SPEC.md](../examples/porter/SPEC.md)
- [ ] Tandem:
  - [examples/tandem](../examples/tandem)
  - propositions: [Proofs/Spec.lean](../examples/tandem/Proofs/Spec.lean)
  - requirements map: [SPEC.md](../examples/tandem/SPEC.md)
- [ ] The small examples in [examples/](../examples):
  - `hello`
  - `fetch`
  - `edge-pure`
  - `js-crud`
  - `js-fetch`
  - `lean-server`
  - `ui`
  - `wasi-cli`
- [ ] The `lasm init` templates in [templates/](../templates):
  - `plain`
  - `fetch`
  - `std-http`
  - `express`
  - `fastify`
  - `hono`
  - `web`
  - `fullstack`

### The CLI surface
- [ ] The CLI's commands: `lasm <Main.lean>`, `lasm run`, `lasm build`, `lasm dev`, `lasm init`, `lasm package`, `lasm editor` and `lasm cache repair`.
  - Options: `--release`, `--dev`, `--output`, `--target`, `--port`, `--host`, `--no-watch`, `--no-run`, and `--` for program arguments.
  - The README's command table ([README.md](../README.md)) and the usage text in [src/cli-arguments.mjs](../src/cli-arguments.mjs).
- [ ] `npm create @lasm`, `bun create @lasm` and `deno run -A npm:@lasm/create`: [packages/create-lasm](../packages/create-lasm).
- [ ] The Vite plugin export `@lasm/cli/vite`: [src/vite/index.d.ts](../src/vite/index.d.ts).
- [ ] **`lasm init -t fullstack` refuses the function platforms** (issue #168). `--deploy lambda`, `lambda-zip`, `lambda-edge`, `vercel`, `netlify`, `azure` and `gcf` with `--template fullstack` used to write a broken project (a `build:undefined` script, no `vercel.json`/`netlify.toml`/`Dockerfile.lambda`, no platform dependency). Claude chose to refuse them (fewer combinations to keep working before 1.0): the message names the templates the target takes and the targets the template takes, for example "--deploy lambda supports the express, hono, fastify, std-http and fetch templates, not fullstack. The fullstack template supports --deploy workers, vercel-edge, netlify-edge, deno-deploy, fastly, wasi-http, spin". The other server templates keep every function platform. If you would rather support them, each needs its platform files, the client build in the package, README text and a CI deploy test ([src/init.mjs](../src/init.mjs), `deployTargets`).

## 3. User-facing text that changed recently

- [ ] `lasm dev --target browser` on a port in use: "Port N on HOST is already in use. Stop the program that uses it, or choose another port with --port." ([src/browser/static-server.mjs](../src/browser/static-server.mjs)). PR #148.
- [ ] `lasm dev` with a missing per-output source (`--target node=Server.lean,browser=Client.lean`) now fails at once, naming the file. PR #148.
- [ ] The edge stack-overflow message: "Stack overflow: the program used all of its 1 MiB C stack (deep recursion?). See …" ([src/edge/edge-start.mjs](../src/edge/edge-start.mjs)). #115 and #119.
- [ ] Lasm.UI's ["Event order"](UI.md#event-order) section, about bubble-phase delegation and what a Lean `stopPropagation` does (0.5.0).

## 4. Things only Jordan can do

- [ ] File [proposals/LEAN_UPSTREAM_JSON.md](proposals/LEAN_UPSTREAM_JSON.md) upstream at leanprover/lean4. It covers the JSON parser and printer bugs boundary fuzzing found; It goes out under the project's name, so it is yours to send.
- [ ] The GitHub Sponsors tiers and description, which is a manual edit (the suggested text was given earlier).
- [ ] Storytelling: posts, videos and launch follow-ups (issue #21).
