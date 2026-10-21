# Survey: outbound HTTP clients for Lean 4

**Measured:** 2026-10-20/21 (UTC). Numbers come from the GitHub REST API via `gh` (`repos/{r}`, `/contributors?anon=1`, `/commits`, `contents/lean-toolchain`), GitHub code search, the Reservoir index (`leanprover/reservoir-index`, commit of 2026-10-18), Reservoir package pages, and the public Zulip archive (leanprover-community.github.io/archive, last regenerated 2026-02-28, so it misses newer Zulip posts).

**Caveats.**
- Lean/Lake has **no download counter.** Reservoir shows no downloads either. The adoption proxies used here are stars, forks, dependents (GitHub code search plus Reservoir), and Zulip mentions.
- GitHub code search only indexes default branches, and it misses some `lakefile.toml` files. Treat dependent counts as lower bounds.
- "Last commit" is the newest commit on the default branch. "Commits" is the total count on that branch.

## Summary table (sorted by adoption)

| # | Library | Stars | Forks | Last commit | Toolchain (`lean-toolchain`) | Native dep | TLS | Dependents (code search / Reservoir) | Reservoir |
|---|---|---|---|---|---|---|---|---|---|
| 1 | [bergmannjg/leanCurl](https://github.com/bergmannjg/leanCurl) (pkg `Curl`) | 15 | 2 | 2026-02-03 | v4.27.0 (Reservoir: latest commit builds on v4.33–v4.36.0-rc1) | libcurl (C++ shim, `extern_lib` + `moreLinkArgs` path to libcurl.so) | yes (via libcurl) | 2 (juhp/curl-json-lean; argumentcomputer/ix, but only in a generated benchmark corpus) / **1** | yes |
| 2 | [theoriclabs/leanhttp](https://github.com/theoriclabs/leanhttp) | 11 | 1 | 2026-10-14 | v4.34.1 | libcurl, **dlopen'd at runtime** (C shim, `extern_lib` + `precompileModules`) | yes | 1 (theoriclabs/lean-react, same org) / not listed | no |
| 3 | Lean core `Std.Http` client ([PR stack #14546/#14547/#14548](https://github.com/leanprover/lean4/pull/14548)) | n/a | n/a | PRs opened 2026-07-25, still **open** | not in v4.35.0 or master | none (libuv TCP from Lean's runtime) | **no** (not on the roadmap, per Zulip) | n/a | n/a |
| 4 | [frenzymath/requests](https://github.com/frenzymath/requests) | 4 | 0 | 2026-04-10 | v4.26.0-rc1 | none: **shells out to `curl`** via `IO.Process.output` | yes (via curl CLI) | 1 (frenzymath/openai_client, same org; code search missed it) / not listed | no |
| 5 | [Yuras/lean4-http-client](https://github.com/Yuras/lean4-http-client) | 4 | 0 | 2024-03-23 | v4.6.0 | OpenSSL (`-lssl`) plus raw BSD sockets (own C, `extern_lib`); requires mathlib | yes (OpenSSL) | 0 / not listed | no |
| 6 | [juhp/curl-json-lean](https://github.com/juhp/curl-json-lean) (pkg `curljson`) | 3 | 0 | 2026-03-29 | v4.29.0 (Reservoir: builds on v4.32.1) | libcurl via leanCurl | yes | 0 / 0 | yes |
| 7 | [hargup/lean-http-client](https://github.com/hargup/lean-http-client) (pkg `http-client`) | 3 | 0 | 2025-12-06 | v4.25.2 (Reservoir: **fails on v4.29.1+**) | none: README says "curl via FFI", but the code **shells out to `curl`** (`IO.Process.output`) | yes (via curl CLI) | 0 / 0 | yes |
| 8 | [paulbutcher/leancurl](https://github.com/paulbutcher/leancurl) | 0 | 0 | 2026-10-20 | **v4.35.0** | libcurl (shared-lib shim via pkg-config, `moreLinkLibs` + `precompileModules`) | yes | 0 | no |
| 9 | [proofinity-it/curl-lean](https://github.com/proofinity-it/curl-lean) | 1 | 0 | 2026-10-20 | **v4.35.0** | libcurl + zlog (`extern_lib`, `moreLinkArgs -lcurl -lzlog`) | yes | 0 | no |
| 10 | [nathanial/wisp](https://github.com/nathanial/wisp) | 0 | 0 | 2026-01-29 | v4.26.0 | libcurl (easy + multi interfaces) | yes | 0 | no |
| 11 | [Qiu233/http](https://github.com/Qiu233/http) | 0 | 0 | 2026-02-22 | v4.28.0 | pure Lean (HTTP/1.1 + HTTP/2 client) | unverified | 0 | no |
| 12 | [NitheeshWorks/lean-httpx](https://github.com/NitheeshWorks/lean-httpx) | 0 | 0 | 2026-10-18 | v4.35.0 | pure Lean, transport-abstracted port of Python httpx | unverified | 0 | no |
| 13 | [argumentcomputer/Http.lean](https://github.com/argumentcomputer/Http.lean) | 12 | 3 | 2022-09-27 | nightly-2022-09-11 (dead) | xubaiw/Socket.lean (raw sockets) | no (OpenSSL listed as TODO) | 0 / 0 | yes |
| 14 | [algebraic-dev/http](https://github.com/algebraic-dev/http) (axiomed/Http; **archived**) | 56 | 6 | 2025-12-23 | 4.8.0 (Reservoir: last good v4.7.0) | libuv | no | 0 / 0 | yes |
| 15 | [algebraic-dev/requests](https://github.com/algebraic-dev/requests) (archived) | 1 | 0 | 2023-12-08 | `stable` (2023) | Socket.lean | no | 0 | no |
| 16 | [xubaiw/Curl.lean](https://github.com/xubaiw/Curl.lean) (archived) | 0 | 0 | 2022-07-10 | nightly-2022-07 | libcurl | — | 0 | no |
| — | App-embedded libcurl FFI, not reusable libraries: [RSoulatIOHK/BlockFrost-lean](https://github.com/RSoulatIOHK/BlockFrost-lean) (1★, `CurlFFI/`), [DaviRain-Su/lean-agent](https://github.com/DaviRain-Su/lean-agent) (0★), RSoulatIOHK/Dion (3★), voxgig-sdk/bluefin-payconex-sdk (0★), Avimitin/lean4-playground (0★) | | | | | libcurl | | | |

Related libraries that are not HTTP clients:
- [hargoniX/socket.lean](https://github.com/hargoniX/socket.lean): 23★, 11 forks, 8 contributors, last commit 2025-07-10, v4.19.0. Raw sockets. Code-search dependents: eviefp/lean4-http (a server), ssdurante/Redis.lean, BasisResearch/LLM-Lang-Design.
- [xubaiw/Socket.lean](https://github.com/xubaiw/Socket.lean): 27★, archived 2023.
- [JamesGallicchio/http](https://github.com/JamesGallicchio/http): 9★, HTTP types and parsing only, last commit 2024-01.
- [pb64-lean/tls13-lean](https://github.com/pb64-lean/tls13-lean) (2★) and [pb64-lean/http2-lean](https://github.com/pb64-lean/http2-lean) (0★): pure-Lean TLS 1.3 over HACL*, and HTTP/2. Both from 2026, with no adoption.
- Servers and RPC on `Std.Http`/`Std.Async`: AfonsoBitoque/LeanServer, RileyBetts/lean-grpc, i2y/connect-lean, PythonCZX/LeanHttpInterface (a libuv/llhttp server).
- The mirror carlohamalainen/leanhttp is a fork of #2.

## Per-library notes

### 1. bergmannjg/leanCurl (Reservoir `@bergmannjg/Curl`)
- MIT. Created 2023-10-20. 40 commits, 2 contributors, 0 open issues (3 issues ever).
- Forks: heartpunk/leanCurl and juhp/leanCurl.
- **FFI:** thin 1:1 binding of the libcurl **easy and multi** interfaces.
  - The C++ file `native/leancurl.cpp` is built into a static lib through `extern_lib libleancurl`.
  - The repo vendors curl-7.68.0 headers.
  - At build time the lakefile runs `ldd $(which curl)` to find `libcurl.so`.
  - Consumers must add the path to `moreLinkArgs`.
- **API:** sync, option-array style: `curl_easy_perform_with_options #[CurlOption.URL …, CurlOption.WRITEDATA ref, CurlOption.WRITEFUNCTION Curl.writeBytes]`. The response is written into an `IO.Ref IO.FS.Stream.Buffer`. A `CurlM` monad and `Multi` are also included.
- **Adoption:** the most established library, but only barely.
  - Reservoir shows **1 dependent** (curljson).
  - argumentcomputer/ix lists it in `Benchmarks/TruthMines/lakefile.lean`, a generated benchmark corpus of packages. That is not a real use.
  - Its last commit is from February, though Reservoir builds of it are green through v4.36.0-rc1.
- Zulip: no announcement thread appears in the archive's topic titles (unverified for posts after 2026-02-28).

### 2. theoriclabs/leanhttp
- MIT. Created 2026-09-03. v0.6.0, 12 commits, 2 contributors (carlohamalainen and hargup, who also wrote #7).
- The most feature-complete client:
  - Built on **`Std.Http` types** (Request, URI, Headers).
  - Supports Session (keep-alive), TLS policy, proxies, HTTP/2, SSE streaming, `Async`/`Task` variants, bounded batches, and WebSocket.
- **FFI:** `bindings/leanhttp.c` uses **`dlopen`/`dlsym`** to load `libcurl.so.4` or `libcurl.4.dylib` at runtime (override with `LEANHTTP_LIB`). Consumers need no `-lcurl`. It does not support Windows.
- The whole surface sits behind a small C function table. That makes it the easiest existing library for a (b′)-style shim: replace the extern functions, or the dlsym'd curl table.
- Adoption: 11★ after 6 weeks. Its only dependent is from the same org. Not in Reservoir as of index commit 2026-10-18.

### 3. Lean core Std.Http (v4.35.0)
- The v4.35.0 tree (`src/Std/Http/**`) has **no client**. It contains:
  - `Server/*`
  - `Protocol/H1/*`, with a sans-IO parser/writer and a pure `Redirect.lean` (RedirectPlan)
  - `Transport.lean` (a typeclass, instance for `Std.Async.TCP.Socket.Client`)
  - data types
- The `Std/Http.lean` docstring says "A low-level HTTP/1.1 server implementation". Master has no client files either (checked 2026-10-21).
- A client is in flight as a stacked PR series by Sofia Rodrigues (algebraic-dev). Foundation #14546, Connection #14547, and Client #14548 are **open**. Pool #14549 was "merged" into the stack branch, not into master. Earlier attempts #11324 and #13902 were closed.
- **No TLS.** Markus Himmel on Zulip, 2025-11-14 ([thread](https://leanprover-community.github.io/archive/stream/270676-lean4/topic/Plan.20with.20Http.20and.20Https.html)): TLS will not be added to the server (deploy behind a reverse proxy). Client HTTPS "will come eventually, but it's not on the roadmap yet".
- Implication: when this lands, a core client will be **http:// only** and built on libuv TCP. Most real uses (LLM APIs) need https.

### 4. frenzymath/requests (+ frenzymath/openai_client)
- Apache-2.0. Created 2025-07. A requests-style API that shells out to the `curl` CLI (`IO.Process.output { cmd := "curl" … }`).
- openai_client is built on it. frenzymath is a known Lean-ML group (it also publishes jixia and REAP in Reservoir). Adoption is low (4★ / 2★).

### 5. Yuras/lean4-http-client
- No license. 2024-03, 19 commits, dead since then.
- Own C code (`native/http.c`) using BSD sockets plus OpenSSL `SSL_*`. Linked with `-lssl`. Requires mathlib (for theorems).
- README: "not designed for any serious use".

### 6. juhp/curl-json-lean (`curljson`)
- One function, `curlGetJson url`, built on leanCurl. Reservoir dependents: 0.

### 7. hargup/lean-http-client (Reservoir `@hargup/http-client`)
- MIT. 6 commits, all on 2025-12-06.
- README: "vibe coded with the help of Claude Code and Cursor". It claims "built on top of curl via FFI", but `HttpClient/Connection.lean` actually defines a `Transport` whose default is `curl` via `IO.Process.output { cmd := "curl" … }`. There is no native code.
- API: `HttpClient.get/postJson`, `Client.new config`, `client.send req` returning `Except`, with `Url`, `Request`, and `Response` types.
- Reservoir: builds on v4.25.2 and **fails on v4.29.1 and later**. 0 dependents.

### 8–12. 2026 libcurl / pure-Lean newcomers
- **paulbutcher/leancurl:** Apache-2.0, v0.3.2, toolchain v4.35.0. Two layers: `Leancurl.Easy` (1:1) and `Leancurl.Curl` (idiomatic `Curl.get/post/send`). Finds libcurl with pkg-config and builds a shared shim.
- **proofinity-it/curl-lean:** HTTP and WebSocket. AI-assisted; README says "work in progress … will contain errors".
- **nathanial/wisp:** libcurl easy and multi, SSE, async via `curl_multi`.
- **Qiu233/http** and **NitheeshWorks/lean-httpx:** pure Lean. TLS unverified, presumably none.
- All have 0–1 stars, 1 contributor, and no dependents.

### 13–16. Dead or archived
- **argumentcomputer/Http.lean** (yatima/lurk lineage; Zulip announcement 2022-02-23): Socket.lean based, http:// only. Pim Otte called it "state of the art" in Aug 2023.
- **algebraic-dev/http (axiomed):** 56★, the most-starred repo in this survey. It is **archived**, with a README notice that the code "has been moved into the Lean 4 repository … `Std.Http`". It was libuv-based, last built on v4.7.0, and has 0 dependents. Its stars reflect interest, not use.
- **algebraic-dev/requests** and **xubaiw/Curl.lean:** archived toys.

## Zulip signals (public archive, through 2026-02-28)
- [lean4 › http requests](https://leanprover-community.github.io/archive/stream/270676-lean4/topic/http.20requests.html), 2023:
  - Adam Topaz asked for a requests-like library. Henrik Böving: "Such a thing does indeed not exist yet."
  - Topaz noted that Lake wraps curl.
  - socket.lean came out of this thread.
- [Is there code for X? › Library like Python's requests?](https://leanprover-community.github.io/archive/stream/217875-Is-there-code-for-X%3F/topic/Library.20like.20Python's.20requests.3F.html), 2024-03: Henrik Böving answered "Not yet no." axiomed/Http.lean and JamesGallicchio/http were mentioned as WIP.
- [general › Networking in Lean 4](https://leanprover-community.github.io/archive/stream/113488-general/topic/Networking.20in.20Lean.204.html), 2024-10: the replies point to socket.lean and axiomed/http as "still maturing".
- [general › State of HTTP (Server-side)](https://leanprover-community.github.io/archive/stream/113488-general/topic/State.20of.20HTTP.20(Server-side).html), 2025-07: the core team pointed to Std.Async TCP and Sofia's HTTP work.
- [lean4 › Plan with Http and Https](https://leanprover-community.github.io/archive/stream/270676-lean4/topic/Plan.20with.20Http.20and.20Https.html), 2025-11: no TLS in the server. Client TLS is not on the roadmap and is called a poor fit for a community contribution.
- No archived topic title mentions leanCurl, leanhttp, wisp, or hargup's client. Zulip shows no adoption discussion for any of them. Posts after 2026-02-28 could not be checked, because the Zulip API needs authentication and the archive is stale.

## The shell-out-to-`curl` pattern (the de facto standard)
GitHub code search for the literal `cmd := "curl"` in `.lean` files returns **146–160 files across 109 repositories**. That is a lower bound, since it misses variants like `cmd := curlExe` or `getCurl`. By comparison, only about 9 C files across about 7 repos call `curl_easy_perform` alongside `lean_object`. Notable users of the shell-out pattern, verified by reading the code:

| Project | Stars | Mechanism |
|---|---|---|
| leanprover/lean4: **Lake** itself (`src/lake/Lake/Util/Url.lean`, v4.35.0) | 9612 | `captureProc' {cmd := getCurl …}` (`$CURL` or `curl`) for `getUrl?`, cache and Reservoir downloads |
| leanprover-community/mathlib4 (`Cache/Requests.lean`) | 4331 | `curl` CLI (parallel mode, retry flags, `validateCurl` version gate) |
| lean-dojo/LeanCopilot (`LeanCopilot/Models/External.lean`) | 1335 | `IO.Process.output { cmd := "curl" … }` to external model servers |
| leanprover/verso (`src/multi-verso/MultiVerso.lean`) | 397 | `IO.Process.output { cmd := "curl" … }` |
| cmu-l3/llmlean (`LLMlean/API/Common.lean`) | 214 | `curl` CLI to OpenAI/Ollama/etc. |
| lean-dojo/LeanDojo-v2 | 147 | `curl` CLI |
| chasenorman/CanonicalLean (`Canonical2/LLM.lean`) | 139 | `IO.Process.spawn { cmd := "curl" … }` (streaming) |
| siddhartha-gadgil/LeanAide (`LLMClient.lean` and more) | 125 | `IO.Process.output { cmd := "curl" … }` |
| leanprover-community/LeanSearchClient | 37 (14 forks) | `curl -X POST …` for leansearch.net / Moogle. A transitive dependency of **mathlib**, so it is effectively in every mathlib project |
| cmu-l3/ntp-toolkit, jesse-michael-han/lean-gptf, zhangir-azerbayev/lean-chat, adamtopaz/lean_gpt, hargup/lean-http-client, frenzymath/requests, … | — | same pattern |

No well-known Lean project uses a native HTTP client library. Lake, mathlib, LeanCopilot, LLMLean, LeanAide, LeanSearchClient, and Verso all spawn the `curl` executable with `IO.Process` and parse stdout (often with `-w '%{json}'`).

## Conclusion
- **The ecosystem is not established.** No Lean 4 HTTP client library has meaningful adoption.
  - The most-depended-on one, leanCurl, has 15★ and exactly **1** Reservoir dependent (a 3★ wrapper).
  - Every other client has 0–1 real dependents, mostly from the same org.
  - Most are under a year old, single-author, and often AI-generated.
  - The most-starred repo (axiomed/Http, 56★) is archived and was superseded by core.
  - Core `Std.Http` in v4.35.0 has **no client**. One is pending in open PRs, with no TLS planned.
- **The de facto standard is `IO.Process` + the `curl` CLI**, used by Lake, mathlib (via its cache and LeanSearchClient), LeanCopilot, LLMLean, LeanAide, Verso, and over 100 other repos.
- **For Lasm:**
  - **(b′) for a specific library is not justified by adoption.** Emulating leanCurl or leanhttp externs would make almost no existing code work unchanged. leanhttp's dlopen'd function table is the cleanest target if it is ever wanted.
  - **The compatibility target that would unlock real code is the `curl`-subprocess pattern.** That means supporting `IO.Process.output/spawn { cmd := "curl", args := … }`, either by running a real `curl` through Node `child_process` (simplest, if subprocesses are allowed) or by intercepting `cmd = "curl"` and implementing the commonly used flag subset (`-s -L -X -H -d/--data -w %{json}/%{http_code} --user-agent -o --retry --max-time`) on Node `fetch`.
  - **Separately, (b), a small opt-in fetch-style package, is reasonable.** Ideally it would use `Std.Http` Request/Response/URI types (as leanhttp does) so it stays aligned with the upcoming core client API.

## Not verified
- Zulip discussion after 2026-02-28, because the archive is stale and the API requires login.
- TLS support in Qiu233/http and NitheeshWorks/lean-httpx.
- Whether Reservoir dependents counts beyond leanCurl's "1" are exactly zero. The other Reservoir pages show no dependents section.
- Exact first-commit dates. These come from the oldest commit on the default branch, so rebased histories may differ.
- Code-search dependent counts are lower bounds. For example, the search missed frenzymath/openai_client → requests, which was confirmed by reading its lakefile.
