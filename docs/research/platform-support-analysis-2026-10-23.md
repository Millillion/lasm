# Lasm platform support analysis (2026-10-23)

**Legend:**
- **[V]**: verified this session by reading code or running commands locally.
- **[D]**: taken from official docs or surveys fetched today by research agents; the URL is given.
- **[U]**: unverified.

npm download figures are for the week 2026-10-12 to 2026-10-18, fetched 2026-10-23. They include CI and transitive installs, so treat them as rough.

---

## Executive summary

- **None of Lasm's three run-time pins is what the built app actually needs.** [V]
  - **Node:** an exact-version match. The sample app requires `26.12.0`; current source pins `26.12.1` in `scripts/ci/acceptance-versions.json`. Every built app refuses the next Node patch release.
  - **glibc ≥ 2.39:** this is the compiler's build-host contract. The app's native pieces need at most:
    - GLIBC_2.25 for koffi;
    - 2.17 for Lasm's Zig-built helpers;
    - 2.28 for the official Node 24/26 binaries.
  - **Host platform:** pinned only because Lasm copies one koffi prebuilt and one set of helpers. The Lasm package already carries prebuilts for every platform.
- **What ran successfully (exit 0)** [V]:
  - the unpinned sample app and the JS-interop benchmark app;
  - on Node 24.13.1 and Node 26.12.0;
  - on Debian 11 (glibc **2.31**, older than Amazon Linux 2023's 2.34) and Debian 12 (glibc 2.36);
  - under Docker's default seccomp profile, with a 512 MB cgroup memory limit and a read-only app directory.
- **The true minimum Node version is 24.0.** Verified on 24.13.1 [V]; 24.0–24.12 are untested [U]. The Wasm module uses:
  - memory64 with a 64-bit table;
  - shared memory (threads);
  - legacy exception handling;
  - bulk memory.

  V8 shipped memory64 in V8 13.3 [D: spidermonkey.dev/blog/2025/01/15/is-memory64-actually-worth-using.html]. Node 24 has V8 13.6 [V]. Node 22 (V8 12.4) would need `--experimental-wasm-memory64` [U].
- **Pinning Node 26 locks Lasm out of most managed platforms today.** [D] Node 26 is Lambda preview only (GA targeted November 2026). It is not offered on Vercel or Azure Functions, and is preview on Cloud Run functions. Node 24 is GA on all of them.
  - Node 26 was released 2026-05-05 and becomes Active LTS 2026-10-28.
  - Node 24 moved to Maintenance LTS on 2026-10-20; its EOL is 2028-04-30.
  - Source: https://github.com/nodejs/Release/blob/main/schedule.json
- **Run-time memory is small.** [V]
  - A trivial app peaks at about 140 MB resident (RSS) and starts in about 0.3 s.
  - It reserves about 22 GB of *virtual* address space: the 8 GiB shared memory64 maximum, plus guard regions and worker stacks.
  - The macOS ARM64 "2.8 GiB" finding is **build-time** memory under the CI resource guard, not the memory of a deployed app.
- **Recommended launch-day claim:** "Node.js ≥ 24 on Linux (x64/arm64, glibc ≥ 2.28) and macOS, in any VM or container". Back it with free Docker CI.
  - This covers Docker/Kubernetes, Google Cloud Run, Fly.io, Railway, Render, Heroku and DigitalOcean App Platform.
  - Add AWS Lambda (container image or zip on `nodejs24.x`, with the Lambda Web Adapter) if one real deployment check passes.
  - It requires four small fixes, listed under Deliverable 2.
- **Later or not possible:**
  - Fast-follow: Vercel and Netlify.
  - Later: Cloudflare Workers, Fastly and Bun, which are blocked by threads or memory64.
  - Deno is technically plausible, but supporting it reverses the 2026-10-16 decision.

---

## Part 1: platform importance (market evidence)

Main sources [D]:
- Stack Overflow (SO) 2025, "Cloud development" question (base 24,473): https://survey.stackoverflow.co/2025/technology
- SO 2024 (base 46,261): https://survey.stackoverflow.co/2024/technology
- State of JS 2025 (13,002 responses, published 2026-02-03). Hosting question base 10,704; edge/serverless question base 9,593. https://2025.stateofjs.com/en-US/other-tools/
- State of JS 2024: https://2024.stateofjs.com/en-US/other-tools/
- CNCF 2025: https://www.cncf.io/announcements/2026/01/20/kubernetes-established-as-the-de-facto-operating-system-for-ai-as-production-use-hits-82-in-2025-cncf-annual-cloud-native-survey/
- Datadog State of Serverless (latest edition is still 2023): https://www.datadoghq.com/state-of-serverless/

| Rank | Platform | Evidence [D] |
|---|---|---|
| 1 | **Plain Node on VMs/containers** (Docker/K8s, ECS/GKE/EKS) | <ul><li>SO 2025: Docker 71.1%, Kubernetes 28.5% (2024: 53.9% / 19.4%); Node.js 48.7%</li><li>State of JS 2025: Node used by 90.3% of runtime respondents</li><li>CNCF 2025: 82% of container users run K8s in production</li><li>npm: express 87.4M/wk</li></ul> |
| 2 | **AWS Lambda** | <ul><li>SO 2025: AWS 43.3%</li><li>State of JS edge/serverless: Lambda 26.4% (2025), #1 in both 2024 and 2025</li><li>State of JS 2025 hosting: AWS 47.6%, #1</li><li>npm/wk: @types/aws-lambda 13.1M, @aws-sdk/client-lambda 6.8M, aws-cdk 2.7M, sst 709k, serverless 661k</li></ul> |
| 3 | **Cloudflare Workers** | <ul><li>SO: Cloudflare 20.1% (2025), up from 15.1% in 2024</li><li>State of JS edge/serverless: 17.7% (2025), up from 14.5%</li><li>npm/wk: wrangler 18.1M, @cloudflare/workers-types 8.1M</li><li>Cloudflare reports more than 10M developers on the platform (IT Brief, 2026-10-21)</li></ul> |
| 4 | **Vercel Functions** | <ul><li>State of JS 2025 hosting: 43.9% (#2)</li><li>State of JS edge/serverless: Vercel Functions 16.8%</li><li>SO 2025: 10.6%</li><li>npm/wk: @vercel/functions 5.8M, @vercel/node 3.1M, vercel 2.65M</li></ul> |
| 5 | **Google Cloud Run / Cloud Functions** | <ul><li>SO 2025: GCP 24.6%</li><li>State of JS 2025: Cloud Functions 10.4% (Cloud Run was not listed)</li><li>npm/wk: @google-cloud/functions-framework 1.54M, firebase-functions 1.81M</li><li>Datadog 2023: 66% of GCP serverless orgs use container-based serverless</li></ul> |
| 6 | **Azure Functions** | <ul><li>SO 2025: Azure 26.3%</li><li>State of JS 2025: Azure Functions 6.6%</li><li>npm: @azure/functions 906k/wk</li></ul> |
| 7 | **Netlify Functions / Edge** | <ul><li>State of JS 2025 hosting: 29.7%</li><li>Netlify Edge: 6.3%</li><li>SO 2025: 5.9%</li><li>npm/wk: @netlify/functions 535k, netlify-cli 231k</li><li>Netlify reports 10M developers (2025-12-24)</li></ul> |
| 8 | **Bun** (runtime) | <ul><li>State of JS: 20.8% (2025), up from 16.4%</li><li>SO 2025: 5.5%</li><li>npm: bun 2.56M/wk</li><li>96k GitHub stars</li><li>Acquired by Anthropic 2025-12-02</li></ul> |
| 9 | **PaaS group** | <ul><li>DigitalOcean: SO 10.7%; State of JS hosting 18.1%</li><li>Heroku: SO 5.4% (falling); State of JS hosting 19.1%</li><li>Railway: SO 1.5%; @railway/cli 263k/wk</li><li>Render: State of JS 2024 hosting 7.0%</li><li>Fly.io: State of JS edge 2.6%</li></ul> |
| 10 | **Deno / Deno Deploy** | <ul><li>State of JS runtimes: 11.2%</li><li>SO 2025: 4.0%</li><li>npm: deno 215k/wk</li><li>Deploy-specific share [U]</li></ul> |
| 11 | **Fastly Compute / Lambda@Edge** | <ul><li>Fastly: not in any survey top list; @fastly/js-compute 275k/wk</li><li>Lambda@Edge: no separate data found [U]</li></ul> |

Hono's npm downloads (45.2M/wk; @hono/node-server 42.6M/wk) show that its Node adapter is used at least as much as its edge targets.

---

## Part 2a: platform technical facts [D unless marked] and Lasm fit

**What Lasm needs** [V]:
- Node ≥ 24 (not Bun or workerd);
- `worker_threads`, SharedArrayBuffer and `Atomics.wait` in workers;
- a Node-API native add-on (koffi) plus two small native ELF helpers;
- glibc ≥ 2.28 on Linux;
- about 150–350 MB RSS;
- a long-running process listening on a port, or a shim that exports a handler.

**Cross-cutting facts:**
- glibc by OS [D]:
  - AL2023: 2.34 (https://docs.aws.amazon.com/linux/al2023/ug/glibc-gcc-and-binutils.html);
  - Debian 12: 2.36;
  - Ubuntu 22.04: 2.35;
  - Ubuntu 24.04: 2.39.
- Address space: V8 reserves a shared memory's full declared maximum up front. No platform doc mentions `ulimit -v` or overcommit limits [U]; cold-start test each target.
- Lambda caps processes/threads at 1,024 and file descriptors at 1,024 [D].

| Platform | Node 24 / 26 | OS / glibc | Arch | Threads + native add-ons | Key limits | Docker? | Lasm fit today | Effort |
|---|---|---|---|---|---|---|---|---|
| **Node on VM / Docker / K8s** | any | any glibc distro; Alpine is musl | x64/arm64 | yes / yes | none | yes | **Works after launch fixes**: [V] glibc 2.31/2.36, Node 24/26, default seccomp, 512 MB, read-only | S |
| **AWS Lambda** ([runtimes](https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html), [limits](https://docs.aws.amazon.com/lambda/latest/dg/gettingstarted-limits.html)) | `nodejs24.x` GA; `nodejs26.x` **public preview**, GA targeted Nov 2026; `nodejs22.x` | AL2023, 2.34 | x86_64 + arm64 | yes / yes | <ul><li>zip: 50 MB direct, 250 MB unzipped incl. layers</li><li>image: 10 GB</li><li>128–10,240 MB memory</li><li>900 s</li><li>/tmp: 512 MB–10 GB; rest read-only</li></ul> | yes (OCI, matching arch) | **Works after launch fixes A–C** plus the Lambda Web Adapter (Lasm apps are HTTP servers). The Hono example (14 MB) fits a zip. Exec bit on `host/native/process/*` must survive zipping | S–M |
| **Lambda@Edge** ([restrictions](https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/lambda-at-edge-function-restrictions.html)) | latest Lambda Node | AL2023 | **x86_64 only** | yes / yes | <ul><li>50 MB compressed</li><li>30 s timeout</li><li>no layers, images or env vars</li><li>us-east-1 only</li></ul> | no | **Needs major work**: request/response event model, no LWA. Poor fit | L |
| **Vercel Functions** ([versions](https://vercel.com/docs/functions/runtimes/node-js/node-js-versions), [limits](https://vercel.com/docs/functions/limitations)) | **24 default**, 22; no 26 | AL2023 build image; Lambda-based runtime | x86_64 [U] | yes / "full Node.js coverage" | <ul><li>250 MB uncompressed</li><li>2 GB (Hobby) / 4 GB memory</li><li>300–800 s</li><li>1,024 file descriptors</li></ul> | OCI via `Dockerfile.vercel` (published 2026-07-01, amd64; GA status unclear) | **Works after fixes**: Node/glibc pins; a handler shim or zero-config Hono/Express detection; `includeFiles` so file tracing keeps `program.wasm`, `host/**` and `.so`. The Docker route may be the fast path [U] | M |
| **Vercel Edge** ([docs](https://vercel.com/docs/functions/runtimes/edge)) | isolate | — | — | no `worker_threads`, no native modules | 1–4 MB gzipped | no | **Not possible**; Vercel itself now recommends Node | — |
| **Netlify Functions** ([config](https://docs.netlify.com/build/functions/configuration/)) | build's Node if Lambda-valid, else 24 | Lambda (AL2023 [U]) | x86_64 [U] | yes [U] | <ul><li>1,024 MB default (up to 4,096 MB)</li><li>**60 s synchronous**</li><li>6 MB buffered / 20 MB streamed payload</li><li>Lambda-compatibility mode ends 2027-07-01</li></ul> | no | **Works after fixes**: like Vercel, plus `included_files` | M |
| **Netlify Edge** ([limits](https://docs.netlify.com/build/edge-functions/limits/)) | Deno | — | — | no | 20 MB; 512 MB memory; 50 ms CPU | no | **Not possible** | — |
| **Cloudflare Workers** ([limits](https://developers.cloudflare.com/workers/platform/limits/)) | workerd | — | — | "Threading is not possible in Workers"; no native add-ons | <ul><li>**64 MiB uncompressed** (new)</li><li>**128 MB memory per isolate**</li><li>1 s startup</li></ul> | — | **Needs major work**: single-threaded, FFI-free runtime; must fit in 128 MB | L |
| **Cloudflare Containers** ([limits](https://developers.cloudflare.com/containers/platform-details/limits/)) | any | own image | **amd64** [U] | yes | up to 4 vCPU / 12 GiB; Workers Paid plan; GA status [U] | yes | **Works after launch fixes** (Docker) | S |
| **Google Cloud Run** ([contract](https://docs.cloud.google.com/run/docs/container-contract)) | any | own image | **linux/amd64 only** | yes; **gen1 uses gVisor**, gen2 is full Linux | 32 GiB memory; 8 vCPU; 60 min; in-memory filesystem | yes | **Works after launch fixes**. Test gen1; recommend gen2 | S |
| **Cloud Run functions** ([runtimes](https://docs.cloud.google.com/functions/docs/runtime-support)) | `nodejs24` (Ubuntu 24.04, 2.39), `nodejs22` (22.04, 2.35); `nodejs26` preview | see left | amd64 | yes / yes [U] | as Cloud Run | no (use Cloud Run) | **Works after fix**: a Functions Framework handler shim. Point users to Cloud Run | M |
| **Azure Functions** ([versions](https://learn.microsoft.com/en-us/azure/azure-functions/functions-versions), [Flex](https://learn.microsoft.com/en-us/azure/azure-functions/flex-consumption-plan)) | **22 and 24 GA**; no 26 | Flex OS [U] (container template is Debian 12, 2.36) | x64 | yes [U] | <ul><li>Flex: 512 MB / 2 / 4 GB; HTTP 230 s; code-only, no custom containers</li><li>Premium: containers, up to 14 GB</li></ul> | Premium/Dedicated; Container Apps | **Works after fix**: custom handler or v4-model shim. Azure Container Apps works like Docker | M |
| **Fly.io** ([sizing](https://docs.fly.io/machines/guides-examples/machine-sizing)) | any | own image | x86_64 only [U] | yes | full VM | yes | **Works after launch fixes** | S |
| **Railway** ([scaling](https://docs.railway.com/deployments/scaling)) | any | own image | amd64 [U] | yes | Pro: up to 24 vCPU / 24 GB | yes | **Works after launch fixes** | S |
| **Render** ([runtimes](https://render.com/docs/native-runtimes), [Node version](https://render.com/docs/node-version)) | any; default 24.22.1 | native runtime: Debian 12 (2.36) | [U] | yes | [U] | yes | **Works after launch fixes**, natively or with Docker | S |
| **Heroku** ([stacks](https://devcenter.heroku.com/articles/stack), [generations](https://devcenter.heroku.com/articles/generations)) | any via buildpack | heroku-24 (Ubuntu 24.04, 2.39), heroku-26 | Cedar x86_64; Fir x86_64/arm64 | yes | dyno-dependent | Cedar `container` stack; Fir uses buildpacks | **Works after launch fixes** (heroku-24 even meets the current 2.39 pin) | S |
| **DigitalOcean App Platform** ([limits](https://docs.digitalocean.com/products/app-platform/details/limits/)) | any | own image | **AMD64 only** | yes; **gVisor sandbox** | 4 GiB local filesystem | yes | **Works after launch fixes** [U under gVisor: koffi syscalls, `sigaction`] | S |
| **Fastly Compute** ([limits](https://docs.fastly.com/products/compute-resource-limits)) | none (JS runs inside Wasm) | — | — | no | 128 MB heap; 50 ms CPU | no | **Not possible** | — |
| **Deno Deploy** ([runtime](https://docs.deno.com/deploy/reference/runtime/)) | Deno 2.5 (memory64 OK) | Linux | x64/arm64 | Node add-ons and FFI **supported**; `worker_threads` [U]; no custom flags | [U] | — | **Plausible but untested**; **re-adding Deno reverses the 2026-10-16 decision** | M |
| **Deno CLI** | Deno 2.9.8 (V8 ≥ 13.4) | — | — | worker_threads via Node compat | — | yes | Deno 2.9.7 passed the *old* cooperative runtime [V, git history]; the current memory64/pthread runtime is untested. **Reverses the decision** | M |
| **Bun** | 1.4.4 | — | — | worker_threads yes | — | yes | **Blocked**: <ul><li>JSC memory64 is off by default (oven-sh/bun#35706; enabling PR #35740 open)</li><li>shared i64 memory arrives in workers as i32 (#45739; fix PR #45916 open)</li></ul> Lasm's `memoryMode 2` (memory64 lowered to wasm32, 4 GiB maximum; `src/application-link.mjs`) is a possible route. **Reverses the decision** | M–L |

**Constraints that matter most:**
- Several container platforms are **amd64-only**: Cloud Run, DigitalOcean, Cloudflare Containers, and probably Fly.io.
- A Mac (arm64) user deploying there needs the multi-target native bundle (fix C). They also need `docker build --platform linux/amd64`.

---

## Part 2b: Lasm's actual runtime requirements [V]

### Built output
The sample app is in `compiler/.work/l23/case/dist`. Its layout:
- `main.mjs` (launcher plus pins)
- `program.cjs` (Emscripten glue, 244 KB)
- `program.wasm` (1.5 MB)
- `host/` (1.5 MB: about 30 host JS modules plus `host/native/`)
- `build-info.json`, `.lasm-application.json` (hash manifest), `THIRD_PARTY_NOTICES.txt`.

Size and contents:
- Total size is **3.4 MB**. The JS-interop Express+Hono example (`.work/jsint/crud/dist-Hono`) is **14 MB**, because the project's `node_modules` (82 packages) is copied into `dist/`.
- The output is already **one self-contained directory**. It ran from a read-only bind mount. Function platforms need only that directory, and the Node runtime.

### Wasm features
Found by inspecting `program.wasm` with binaryen 132:
- imported shared memory, `memory i64 2048 131072 shared`: memory64, initial 128 MiB, maximum 8 GiB
- a 64-bit table (`table i64`, table64)
- atomics and `memory.atomic.wait`
- bulk memory
- legacy exception handling (`try`/`catch`/`rethrow`; no `try_table`)
- a `dylink.0` section (`-sMAIN_MODULE=2`).

Link flags in `src/application-link.mjs:231-236`:
- `-pthread`, `-fwasm-exceptions`, `-sMEMORY64=1`, `-sMALLOC=mimalloc`
- `-sPROXY_TO_PTHREAD=1`, `-sPTHREAD_POOL_SIZE=4`
- `-sINITIAL_MEMORY=134217728`, `-sMAXIMUM_MEMORY=8589934592`, `-sSTACK_SIZE=67108864`.

The JS side uses:
- `Atomics.wait`, `Atomics.waitAsync`, `Atomics.notify`
- `worker_threads` with `resourceLimits.stackSizeMb = 64`, set in `scripts/full-lean/emscripten-pre.js` and overridable with `LASM_VM_STACK_MB`
- `util.getSystemErrorMessage`, which needs Node ≥ 22.12/23.1.

### Measurements on Linux x64 (this machine)

| App | Node | Wall time | Max RSS | VmPeak (virtual) |
|---|---|---|---|---|
| l23 trivial `main` | 26.12.0 | 0.28–0.35 s | ~140 MB | ~22.8 GB |
| l23 | 24.13.1 | 0.34 s | ~151 MB | — |
| JS-interop bench (heavy loop) | 24.13.1 | 3.9 s | ~355 MB | — |

The 22 GB VmPeak is reserved address space, not used memory. Lambda and containers do not limit virtual memory by default. A host with `ulimit -v` or `vm.overcommit_memory=2` would fail [U]. The 2.8 GiB macOS figure (`docs/PLAN.md:440`, `docs/LANGUAGE_COVERAGE.md:128,293`) is the **build-time** peak under the CI resource guard ("these builds peak near 3 GiB"), not the deployed app's RSS. The 128 MB Lambda tier is too small. Recommend **≥ 512 MB** (verified working in a 512 MB cgroup), and 1 GB for real servers.

### Pin 1: exact Node version
- **Where it's set:** `src/application-output.mjs:29-44` generates `main.mjs`.
- **Where the value comes from:** `applicationSupport().node`. `src/application-support.mjs` reads `application-support.json`, which `scripts/package-node-release.mjs:68` writes from `scripts/ci/acceptance-versions.json` (now `"node": "26.12.1"`).
- **Same check in the compiler:** `requireApplicationSupport` in `src/application-support.mjs:15-16` applies the identical exact check to the *compiler*, and so does `engines` in the packed `package.json` (`package-node-release.mjs`).
- **Research checkouts:** these have no `application-support.json`, so the bench app's `main.mjs` shows `expectedNode = null`.
- **What the app truly needs:** memory64 and table64 unflagged (V8 ≥ 13.3, i.e. **Node ≥ 24.0**), shared memory and threads, legacy Wasm EH, `Atomics.waitAsync` (Node ≥ 16), worker `resourceLimits`, `getSystemErrorMessage` (Node ≥ 22.12), and `process.report` (used only for the glibc check).
- **Tested:** both apps passed on 24.13.1 and 26.12.0, natively and in containers [V]. 24.0–24.12 are untested [U].
- **Recommendation:** change the app check to `major >= 24`. Set `engines: { node: ">=24" }` for apps; whether the compiler can also relax is a separate question, see the open questions.

### Pin 2: host platform pin and koffi
- **Where it's set:**
  - `expectedHost` is `${platform}-${arch}` at build time (`src/application-output.mjs:34`).
  - `copyApplicationHost` calls `copyApplicationNativeBundle` (`src/native-bundle.mjs:7-48`). That copies `koffi` 3.3.0 plus **only** `@koromix/koffi-<buildplatform>-<arch>` and **only** that platform's `process/` and `signals/` helpers.
- **What koffi does:** koffi is a libc FFI used throughout the host. It is **not optional today**. Removing it made the trivial app fail [V]:
  - first at `prepareApplicationSignals` (`host/application-signals.mjs` → `native-signals.mjs`, SIGUSR1 disposition through a Zig-built `.so`)
  - then, with signals skipped, at `native-files.mjs`, because stdout writes go through it.
- **What it binds:**
  - `native-files.mjs`: libc `open`, `fcntl`, `pipe`, `getdelim`, `faccessat`, `scandir`, `getgrgid_r`, locks (Lean `IO.FS` with POSIX-exact semantics, stdio)
  - `native-clock.mjs`: `clock_gettime`
  - `thread-id.cjs`: `gettid`
  - `native-dns.mjs`: `getaddrinfo`/`getnameinfo`
  - `native-tcp.mjs`: raw `socket`/`bind`/`poll` for Lean `Std.Net`
  - `native-process.mjs`: `posix_spawn`
  - `native-abort.cjs`: `abort`
  - `native-signals.mjs`: `sigaction`, `dladdr`
  - `native-pthread-factory.cjs`: `unshare(CLONE_FS)`. This is copied into the output but is only referenced by the wasmtime probes, so it's dead for Node deployments. That matters because Docker's default seccomp blocks `unshare` [U].
- **Can it be pure Node?** Partly. Clock (`process.hrtime`), thread ID, DNS (`node:dns`), abort (`process.abort`), and much of the file I/O (`fs`) have pure-Node equivalents, but with weaker POSIX fidelity, which is why koffi was chosen. Signals, `getdelim` on FILE streams and raw sockets don't. Making koffi optional with fallbacks is **L** and risks the conformance results.
- **Better path to build on a Mac and deploy to Linux:** keep koffi and ship more prebuilts. `.cache/native-host` (the package's `src/native`) already contains:
  - koffi prebuilts for linux-x64/arm64 (glibc and musl), darwin-x64/arm64 and win32-x64/arm64
  - Zig-built `process`/`signals` helpers for linux-x64/arm64 gnu+musl and darwin [V].

  Everything else in the output (`program.wasm`, `program.cjs`, host JS) is already host-independent; it branches at run time on `process.platform` [V by reading].
- **Fix:** add a deployment-target option, or by default include linux-x64 + linux-arm64 (+ the build host). That adds about 2.3 MB per Linux koffi build plus about 35 KB of helpers. Then replace the exact host check with "is the native bundle present for this host". **Effort S–M.** A Mac→Linux run was not tested [U].

### Pin 3: glibc ≥ 2.39
- **Where it comes from:** the hard-coded `minimumGlibc: '2.39'` in `scripts/package-node-release.mjs:68`, which is copied into `build-info.json` and `main.mjs`. It describes the compiler package's tested build host (Ubuntu 24.04). The managed native Lean, clang and other tool binaries that the compiler downloads are presumably built there [U].
- **What the app's native parts actually need:**
  - koffi.node (x64 and arm64): **GLIBC_2.25** max
  - signals `.so` and process launcher: built by Zig for `x86_64-linux-gnu.2.17`, using GLIBC_2.2.5/2.9 (x64) and 2.17 (arm64)
  - Node 24/26 official binaries: GLIBC_2.28 [V via objdump]. Node 26.12.0's official binary also needs `libatomic.so.1`, which is missing in bare Debian images [V].
- **Tested:** apps ran on glibc **2.31** and 2.36 [V].
- **Recommendation:** remove the app-side check, or set it to 2.28 to match Node. Amazon Linux 2023 (2.34) is fine. Keep 2.39 for the compiler host only if its native toolchains really need it; checking that is a separate task. musl/Alpine (`node:24-alpine`, a popular base image) would need the musl koffi and helper variants, which already exist; mark Alpine fast-follow.

---

## Deliverable 1: ranked table (importance × fit)

| # | Platform | Fit today | Specific blockers | Effort |
|---|---|---|---|---|
| 1 | Node on VM/Docker/K8s (glibc) | works after launch fixes A–D | <ul><li>exact Node pin</li><li>glibc pin</li><li>host pin (cross-builds)</li><li>`0.0.0.0`/`$PORT` in templates</li></ul> | S |
| 2 | AWS Lambda (image or zip on `nodejs24.x`, with Lambda Web Adapter) | works after A–C + LWA recipe | <ul><li>Node 26 is preview only, so the pin must allow 24</li><li>glibc 2.34</li><li>arm64 needs fix C</li><li>exec bit</li><li>≥ 512 MB memory</li></ul> | S–M |
| 3 | Cloudflare Workers | needs major work | no threads, no FFI, 128 MB isolate | L |
| 4 | Vercel Functions (Node 24) | works after fix | <ul><li>handler/zero-config shim</li><li>`includeFiles`</li><li>pins</li></ul> | M |
| 5 | Google Cloud Run | works after A–D | amd64 only; gVisor in gen1 | S |
| 6 | Azure Functions | works after fix; Container Apps works | handler model; Flex is code-only | M |
| 7 | Netlify Functions | works after fix | like Vercel; 60 s synchronous limit | M |
| 8 | Bun | blocked | JSC memory64 (open PRs); reverses decision | M–L |
| 9 | Fly / Railway / Render / Heroku / DO | works after A–D | amd64; DO uses gVisor | S |
| 10 | Deno CLI / Deno Deploy | plausible, untested | reverses decision | M |
| 11 | Cloud Run functions | works after fix | handler shim | M |
| 12 | Lambda@Edge, Vercel/Netlify Edge, Fastly | not possible / L | isolates, event model, limits | L / — |

## Deliverable 2: support lists

**Launch day (1–2 days).** Advertise "Node.js 24+ on Linux (x64, arm64; glibc ≥ 2.28) and macOS" with these documented deployment recipes:
- Docker (`node:24-bookworm-slim` / `node:26-bookworm-slim`)
- Kubernetes (same image)
- Google Cloud Run
- Fly.io, Railway, Render, Heroku (heroku-24) (Docker)
- These platforms are amd64-only: Cloud Run, Fly and DigitalOcean. Mac users need fix C plus `docker build --platform linux/amd64`.
- **AWS Lambda via container image** (`public.ecr.aws/lambda/nodejs:24` + Lambda Web Adapter), *if* the one real deployment check passes. Otherwise move Lambda to fast-follow.

Windows stays a build host as today. Windows deployment claims follow the existing acceptance results.

**Fast-follow (days to weeks):**
- Lambda zip on `nodejs24.x` + LWA layer, both arches
- Vercel Functions (Node runtime)
- Netlify Functions
- Azure Container Apps / Azure Functions (custom handler)
- Google Cloud Functions (shim)
- DigitalOcean App Platform (verify under gVisor)
- Alpine/musl
- a `lasm init` template per platform.

**Later:**
- Cloudflare Workers, which needs a single-threaded, FFI-free runtime (possibly building on `memoryMode 2`). Cloudflare Containers may be an earlier route [U].
- Bun: blocked until JSC memory64 lands (oven-sh/bun PRs #35740, #45916), or via a wasm32 `memoryMode 2` build. Deno CLI and Deno Deploy, which supports native add-ons: plausible. Both reverse the 2026-10-16 decision.
- Vercel/Netlify Edge, Lambda@Edge, Fastly Compute: not planned.

### Launch-day fixes, in order

**A. Relax the app Node check to `>= 24`.**
- Files:
  - `src/application-output.mjs:36,42-44` (generate a minimum-major comparison, e.g. `minimumNode = "24"`)
  - `src/application-build.mjs:118,153` and `scripts/link-driver/record-emcc.mjs:206` (pass a minimum, not `support.node`)
  - `scripts/package-node-release.mjs:68` (add `minimumAppNode: '24.0.0'`)
  - tests that assert the message.
- Risk: low. The Wasm features are fixed at link time, and 24.13.1 and 26.12.0 both pass [V]. Unknown behavior on 24.0–24.12.
- Test: run the generated `main.mjs` on Node 24.0.0, the latest 24.x, 26.x, and 22.x (expect a clear error) in CI with `actions/setup-node`.
- Separately decide whether the **compiler** keeps an exact pin (`src/application-support.mjs:15`). A range there (`>=24` or `^26`) is also recommended; otherwise every Node patch release breaks `npx @lasm/cli`.

**B. Drop or lower the app glibc check.**
- Files: `scripts/package-node-release.mjs:68` (split into `minimumGlibc` for the compiler host and either none or `2.28` for apps); `src/application-output.mjs:37,45`.
- Risk: low. Verified on 2.31 and 2.36.
- Test: Docker matrix (below), including `amazonlinux:2023` (2.34) and `debian:bullseye`.

**C. Multi-target native bundle, to remove the host pin.**
- Files:
  - `src/native-bundle.mjs:7-48`: loop over targets `linux-x64`, `linux-arm64` plus the host, and write a manifest listing every target
  - `src/application-output.mjs:19-27,34,39-41`: replace the exact host check with "a native bundle exists for `process.platform-process.arch`"
  - the koffi loaders already choose the platform package via `index.cjs` [U: confirm that koffi's `index.cjs` resolves `@koromix/koffi-linux-arm64` from the bundled `node_modules`]
  - `native-signals.mjs` already picks `${platform}-${arch}${abi}` at run time [V]
  - the hash manifest `.lasm-application.json`.
- Risk: medium. It changes deployment layout tests (`08f8786 "Pin the platform in native bundle layout tests"`).
- Test: build on linux-x64 and run on a linux-arm64 GitHub runner (`ubuntu-24.04-arm`). Build on macOS and run on linux-x64. Run in `public.ecr.aws/lambda/nodejs:24` for both arches.

**D. Deployment hygiene.**
- Stop copying the unused `native-pthread-factory.cjs` into deployments (`src/application-output.mjs:12`). It calls `unshare`, which Docker seccomp blocks.
- Have templates and docs bind `0.0.0.0` and use `$PORT`. The crud example binds `127.0.0.1` (`.work/jsint/crud/Hono.lean`).
- Document a ≥ 512 MB memory recommendation and the `libatomic1` requirement for Node 26 on minimal images.
- Copy only production `node_modules`.
- Risk: low.

**E. (For the Lambda launch claim) a Lambda Web Adapter recipe and a Dockerfile.**
- Recipe: `FROM public.ecr.aws/lambda/nodejs:24`, `COPY --from=public.ecr.aws/awsguides/aws-lambda-adapter:<ver> /lambda-adapter /opt/extensions/`, copy `dist/`, and set the `CMD` to the run script [U: check the LWA docs for the exact path and env vars, such as `AWS_LWA_PORT`].
- Risk: medium (this hasn't been run).
- Test: local Lambda emulator (RIE, included in the base image) in CI; one real deployment.

## Deliverable 3: CI test matrix

Free in GitHub Actions (no accounts needed):

| Claim | Job |
|---|---|
| Node 24 & 26 minimum/latest | `ubuntu-24.04` + `ubuntu-24.04-arm` × `setup-node` {24.0.0, 24.x, 26.x}; plus 22.x expecting the clean error |
| Debian/Ubuntu containers, glibc floor | `docker run` of the built `dist` in `node:24-bookworm-slim`, `node:26-bookworm-slim`, `node:24-bullseye-slim` (glibc 2.31), `ubuntu:22.04` + Node tarball |
| Amazon Linux 2023 / Lambda | `public.ecr.aws/lambda/nodejs:24` (x64 + arm64 runners): invoke through the built-in Runtime Interface Emulator with LWA; `amazonlinux:2023` + Node 24 tarball |
| Docker default seccomp, read-only rootfs, memory cap | `docker run --read-only --tmpfs /tmp --memory=512m` (already shown to work [V]) |
| Cross-build portability | build on `macos-15` (arm64) and `ubuntu-24.04` (x64); upload `dist` as an artifact; run it on the other OS/arch |
| Cloud Run / Fly / Railway / Render | covered by the container jobs (they run the same image); no account needed for the claim |
| Vercel / Netlify (fast-follow) | `vercel build` + `vercel dev`, and `netlify dev` / `netlify functions:serve` locally. Both need no deployment, but `vercel build` may need a project link [U]; check this catches file-tracing misses |
| Alpine (fast-follow) | `node:24-alpine` |

Needs real accounts (user approval and credentials required). Worth it, in order:
1. **AWS Lambda** (container + zip, x64 + arm64): highest value, and the free tier covers it.
2. **Vercel** (hobby).
3. **Cloud Run** (one smoke deploy, since local Docker already covers it).
4. Netlify.
5. Azure.

Fly, Railway and Render add little beyond the Docker evidence.

## Deliverable 4: open questions for the user

1. Should the **compiler itself** also accept a Node range (e.g. `>=24` or `^26`) instead of exactly 26.12.1? With the exact pin, every Node patch release breaks `npx @lasm/cli`, independent of the app-side fix.
2. Do you accept "Node 24+" for *deployed apps* (needed for Lambda, Vercel and Netlify today) even though the compiler is tested on 26?
3. Should multi-arch native bundles be the default (+~2.5 MB per extra Linux arch), or opt-in through a `--target linux-arm64` style flag?
4. Should the launch list include AWS Lambda? That needs one real deployment with your AWS account. Which other real-account deployments (Vercel, Cloud Run, Netlify) do you approve?
5. For function platforms, do you prefer "run your HTTP server behind an adapter" (LWA, zero-config detection) or a Lasm-provided `export handler` shim (more work, better cold starts)?
6. Should Alpine/musl be supported (popular `node:*-alpine` images)? The prebuilts already exist.
7. Bun and Deno: keep them dropped (the 2026-10-16 decision) or revisit after launch? Bun would likely need the wasm32 (`memoryMode 2`) build.
8. Is the 512 MB minimum memory recommendation acceptable, or should startup memory (`INITIAL_MEMORY`, 64 MB worker stacks × 4 pool threads, Wasm reservation) be tuned before launch?

## Files referenced
- `/home/lastmjs/development/lasm/compiler/src/application-output.mjs`
- `/home/lastmjs/development/lasm/compiler/src/application-support.mjs`
- `/home/lastmjs/development/lasm/compiler/src/native-bundle.mjs`
- `/home/lastmjs/development/lasm/compiler/src/application-link.mjs`
- `/home/lastmjs/development/lasm/compiler/scripts/package-node-release.mjs`
- `/home/lastmjs/development/lasm/compiler/scripts/ci/acceptance-versions.json`
- `/home/lastmjs/development/lasm/compiler/scripts/full-lean/emscripten-pre.js`
- `/home/lastmjs/development/lasm/compiler/src/native-*.mjs`, `native-pthread-factory.cjs`, `thread-id.cjs`, `application-signals.mjs`
- Sample output: `/home/lastmjs/development/lasm/compiler/.work/l23/case/dist`
- Test copies and the container test script are in the scratchpad: `l23/`, `bench/`, `glibc-test.sh`.
