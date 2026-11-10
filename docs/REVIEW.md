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
- The generated `Lasm.JS.Web` overlaps the hand-written `Lasm.Web` only in
  part. Rule: a piece is retired only when a generated binding fully replaces it.
  `Lasm.Web`'s browser features (document and DOM, Canvas, History, App) have
  no replacement until browser DOM bindings exist.
- The first piece of work is tier 1: the common web APIs (fetch,
  Request/Response, URL, `crypto.subtle`/`getRandomValues`,
  TextEncoder/TextDecoder, streams, AbortController, timers,
  `structuredClone`, console). It is in ROADMAP.md, after the current
  testing work.
- **Tier 3 adds `Lasm.JS.Cloudflare`** (Jordan, 2026-11-09). It is generated
  from Cloudflare's published workers-types: Workers KV, D1, R2, Durable
  Objects, env bindings and the rest. When it is done, it replaces the hand
  bindings in the example apps (Porter, Ledger).
- **What `Lasm.JS.*` may replace, piece by piece**
  ([proposals/IRREDUCIBLE.md](proposals/IRREDUCIBLE.md#3-ranked-removal-list),
  removal 17). Rule: a piece is retired only when a generated binding fully replaces it.
  - `Lasm.Fetch` **stays**: it is the portable HTTP server (Node, the edge,
    Bun and Deno, Fastly host calls, WASI CGI) and the pure-Lean `Request` and
    `Response` with their proofs. Only its outgoing client (`fetch`, `get`,
    `post`) overlaps `Lasm.JS.Web`; on JavaScript targets it may later become a
    thin layer over `Lasm.JS.Web`, with no API change.
  - `Lasm.Web`: only the parts a generated binding covers in full. Its browser
    features (document and DOM, Canvas, History, App) stay until browser DOM
    bindings exist.
  - From `Lasm.KV`: the Deno and Workers backends. The `Store` abstraction
    and the memory and Fastly backends remain, pending your KV review.
  - `Lasm.UI` and `Lasm.RPC` switch their browser side to `Lasm.JS.Web`,
    with no API change.
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
- [ ] `Lasm.Web`:
  - [Web.lean](../library/Lasm/Web.lean)
  - [App](../library/Lasm/Web/App.lean)
  - [Canvas](../library/Lasm/Web/Canvas.lean)
  - [Console](../library/Lasm/Web/Console.lean)
  - [Crypto](../library/Lasm/Web/Crypto.lean)
  - [Dom](../library/Lasm/Web/Dom.lean)
  - [Events](../library/Lasm/Web/Events.lean)
  - [Fetch](../library/Lasm/Web/Fetch.lean)
  - [History](../library/Lasm/Web/History.lean)
  - [Storage](../library/Lasm/Web/Storage.lean)
  - [Timers](../library/Lasm/Web/Timers.lean)
  - [Types](../library/Lasm/Web/Types.lean)
  - [Url](../library/Lasm/Web/Url.lean)
  - [WebSocket](../library/Lasm/Web/WebSocket.lean)
- [ ] `Lasm.Fastly`: [Fastly.lean](../library/Lasm/Fastly.lean)
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
