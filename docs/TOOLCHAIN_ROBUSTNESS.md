# Toolchain installation robustness review

Reviewed 2026-09-28 at `e64fd3000e4d5486c6b446a8e56cc26a1f7e6a7c`.

**Verdict:** the CLI has a credible six-platform compatibility baseline and good
integrity checks. It does not yet have enough fault tolerance or continuing CI
coverage to claim extremely reliable installation across developer machines.
The weaknesses below are fixable engineering and coverage gaps. This review
does not invalidate the scoped [candidate `.46` acceptance](NODE_ACCEPTANCE.md).

This is an analysis and proposed next milestone, not an implemented hardening
release. Windows 11 x86-64 remains deferred as requested. npm publication,
additional operating systems, broader Lean APIs, and other engines are outside
this review.

## Evidence and limits

- Read the actual installed-workflow code, catalogs, archive decoder, tool
  derivations, Windows execution paths, build locks, progress reporter, package
  construction, acceptance harness and all 37 workflow trigger declarations.
- Rehashed the retained `.46` archive and compared 12 relevant source files with
  the current checkout. All matched byte for byte, including the provisioner.
  The candidate archive SHA-256 remains
  `c566d2dfa621808d70b7c411ee0821da1017c3d366d0b02f1896bf8d349b70ae`.
- Ran **59 existing focused tests: 59 passed, none skipped**, with Node 26.10.0
  on Linux x86-64. Decoder fixtures used local Python; this was not a new managed
  Python bootstrap test. Earlier native acceptance covers that bootstrap.
- Ran **13 additional characterization scenarios** against real local HTTPS and
  tiny archives. These deliberately reproduce failures; completion of the probe
  program does not mean those failure cases are fixed.
- Queried GitHub: `main` had `protected: false`, and the repository ruleset list
  was empty. Every checked-in workflow used manual dispatch or reusable calls;
  none declared push, pull-request or scheduled triggers.
- Ran each workload separately through the resource guard. Peak memory was
  100.8 MiB, with no OOM, throttling or resource abort. No complete toolchain
  downloads, Lean builds or new cloud campaigns were needed.

The [recorded evidence](evidence/toolchain-robustness-2026-09-28.json) contains
errors, successful retries, resource results and source hashes. The
[characterization program](evidence/toolchain-robustness-probes-2026-09-28.mjs)
is preserved for reproduction. New fault probes ran only on Linux; Windows
locking/antivirus behavior and macOS-specific interruptions remain unmeasured.

The characterization program expects Node 26.10.0, an unprivileged Linux
account, OpenSSL and the repository's installed JavaScript dependencies. Run it
from the repository root through `scripts/full-lean/run-bounded.mjs`, passing a
new ignored output directory. It uses only local test servers and owned fixture
caches, deliberately terminates its own child processes and removes its ephemeral
TLS private key. Its dependency requirements are for this audit, not for Lasm users.

## What already works well

The installer selects platform-native artifacts with exact URLs, SHA-256 hashes,
compressed lengths and extracted-size limits. Archives stream to disk rather
than being buffered in memory. The bootstrap does not depend on system Python,
tar, Git or a compiler. Python and tool identity checks precede their use.

Installation uses a private staging directory, validates extracted paths and
links, inventories the resulting files, writes a receipt and then renames the
complete tree into its final location. Traversal, duplicate entries, escaping
links, changed bytes, unexpected files and executable-bit changes are checked.
Tool identities separate versions and platforms; project pins are not silently
changed. Cached SDK inputs are immutable and generated SDK state is separate.

The existing tests cover meaningful negative cases, not just Hello World.
Installed-package acceptance also denies access to preinstalled development
tools, blocks network access during offline reuse, exercises Unicode paths,
checks source invalidation and compares copied deployments with native Lean.
Project build locks are OS-owned and have separate-process termination tests.
The progress reporter stays responsive while compiler subprocesses block.

These mechanisms provide good evidence against executing partial or accidentally
damaged tools. Integrity, availability, recovery and performance are separate
properties: an installer can reject unsafe bytes correctly and still fail too
often for users.

## Findings, in recommended priority order

### 1. Downloads do not recover from transient failures

**Confirmed.** The [downloader](../src/managed-artifacts.mjs), lines 47–67, makes
one fetch attempt. There is no retry/backoff, `Retry-After` handling, resumable
download, or alternate source. Completed earlier tool installations remain
reusable, but the failed archive starts over when the user reruns the command.

A real local server returned one HTTP 503, then valid bytes. The first command
failed after one request; a second invocation succeeded. HTTP 429 behaved the
same even with `Retry-After: 0`. A connection reset mid-body produced the bare
message `terminated`, with the useful network cause nested below it.

Each fetch has a fixed **900,000 ms total deadline**, including body download.
An accelerated-clock probe confirmed that a download still receiving bytes is
aborted at that deadline. At the current archive sizes, Lean alone requires
roughly 5.0–5.24 Mbit/s sustained throughput on five targets and **6.92 Mbit/s on
Windows ARM64** to finish within 15 minutes, before connection overhead. The
Windows x64 SDK requires about 5.82 Mbit/s. These are calculated thresholds,
not measured network benchmarks.

Recommended change: bounded automatic retries for transient network errors and
408/429/selected 5xx responses; exponential backoff with jitter and `Retry-After`;
separate connect, idle and overall budgets; cancellation and actionable final
errors. Do not repeatedly retry bad certificates, unsupported hosts, permission
failures, or checksum mismatches as if they were ordinary transient outages.
For large downloads, add resume only with carefully checked ranges, artifact
identity and a full final checksum. Never append an unchecked HTTP 200 response
to a partial file. An adjustable deadline is useful even if resume is staged
after the first hardening release.

### 2. Cache verification has a locale-dependent false failure

**Confirmed with a small archive.** Inventory sorts names with default-locale
`localeCompare`, and verification compares the serialized object order
([source](../src/managed-artifacts.mjs), lines 163–199). A cache containing `a`,
`z` and `ä`, installed under `en-US`, fails under `sv-SE` without any changed
bytes. Its error says `Changed entries (0)` and tells the user to delete it.

This proves a generic verifier defect; it does not establish the frequency of
affected filenames in each distributed compiler archive. Use locale-independent
canonical ordering and order-independent entry comparison, including compatibility
with existing receipts. Test differing locale, key insertion order and Unicode
normalization without conflating distinct paths on case-sensitive filesystems.

### 3. Termination leaks staging data; independent installs duplicate work

**Confirmed.** Killing a process during download or after extraction leaves
`.install-*` data. A new invocation installs successfully but leaves the abandoned
directory in place. With multi-gigabyte tools, repeated interruptions can consume
substantial disk space. Normal exceptions clean up; process death cannot run
the `finally` block. There is no later staging reclamation in the provisioner.

Three simultaneous processes all completed safely and published one final
artifact, which is a positive atomicity result. They nevertheless performed
three full downloads. The `pending` map only coordinates callers within one
process. Project build locks do not coordinate different projects sharing the
global tool cache. Derived SDK trees and Windows execution prefixes have similar
staging lifecycles that need their own termination tests.

Recommended change: coordinate per-artifact work across processes and reclaim
abandoned staging safely. Locks must survive slow downloads and release on owner
death. Reclamation must establish ownership/liveness, not just delete every
old-looking directory; a live slow installer must remain safe. Preserve the
current publication checks even after adding coordination. Test termination at
download, extract, receipt, rename and cleanup boundaries, including child decoders.
Atomic rename establishes visibility, not proven durability after a power loss.

### 4. The npm installation is not completely reproducible

**Confirmed by package inspection.** The release package pins `tar` to 7.5.22,
but that version declares ranges for five dependencies, including `minipass`
`^7.1.2` and `minizlib` `^3.1.0`. The
[release packer](../scripts/package-node-release.mjs), lines 60–69, includes
neither bundled installer dependencies nor a published shrinkwrap. Our root
`package-lock.json` controls repository `npm ci`, not a new consumer installing
the tarball into an empty directory. Identical Lasm tarball hashes therefore do
not guarantee identical future consumer dependency trees.

Recommended change: bundle the small, locked installer dependency graph into
the release tarball, or select an equally explicit supported packaging mechanism.
Record all resolved versions and integrity hashes in acceptance evidence. Test
the installed archive with an empty npm cache and with registry access denied
after acquisition. Do not assume a dependency package's `overrides` controls its
consumer. npm documents [bundling](https://docs.npmjs.com/cli/v11/configuring-npm/package-json/#bundledependencies)
and [lockfile scope](https://docs.npmjs.com/cli/v11/configuring-npm/package-lock-json/).

### 5. CI is an acceptance campaign, not continuous protection yet

**Confirmed in source and GitHub settings.** All 37 workflows are manually
dispatched or reusable; there are no automatic push/PR/scheduled runs and no
branch protection/rulesets. Existing release retention carefully checks successful
reports and candidate hashes, but a new source change is not automatically tested.

The six native passes are valuable compatibility evidence, not repeated
reliability samples. The six cache-recovery controls in
[installed acceptance](../integration/node-cache-controls.mjs) use an injected
fetch and tiny archive. Their `interrupted` case is a stream error, not a killed
process. Damaged/incomplete caches are repaired by explicit directory removal
inside the harness. That is manual recovery, not automatic self-repair.

CI packaging also requires an exact Actions runtime cache entry with
`fail-on-cache-miss: true`. Cache eviction can stop a future campaign before
product testing begins. Use authenticated durable inputs with a cold-cache
fallback; Actions caches should accelerate work rather than be the only source.
Keep harness/dependency failures distinguishable from product failures.

### 6. Corporate network support needs explicit coverage and diagnostics

**Partially confirmed.** The local HTTPS fixture correctly rejected an untrusted
certificate and succeeded with `NODE_EXTRA_CA_CERTS`. A test specifying only
`HTTPS_PROXY` failed without contacting the proxy. Adding
`NODE_USE_ENV_PROXY=1` routed the request through the local CONNECT proxy and
succeeded. These are Node 26.10.0 provisioner probes, not full CLI/Lake proxy
acceptance.

Node documents that proxy handling is
[opt-in](https://r2.nodejs.org/docs/latest/api/cli.html#node_use_env_proxy1), and
[additional CAs](https://r2.nodejs.org/docs/latest/api/cli.html#node_extra_ca_certsfile)
are read at process startup. npm's proxy configuration does not itself prove
Lasm's Node fetch, native Git and Lake downloads are configured consistently.
Test the complete worker-based CLI through proxies, custom CA trust, `NO_PROXY`,
DNS/connection failures and blocked download hosts. Preserve certificate
validation and redact credentials from errors. Expose the useful cause: today
the top-level certificate/DNS diagnostic is usually just `fetch failed`.

### 7. Disk, permissions and cleanup failures need better recovery

**Mixed confirmed behavior and missing coverage.** Simulated ENOSPC left no
published artifact; an unwritable cache failed before downloading. These are
good failure boundaries, but diagnostics lacked tailored recovery guidance.
There is no product disk-space preflight/reservation; CI's disk guard is a
maintainer harness feature. Several GB of final cache plus temporary extraction,
archives and concurrent work must fit, and free-space checks alone cannot
guarantee later writes will succeed.

A real permissions probe denied staging cleanup after publication. The operation
reported failure even though the final artifact was valid; retry immediately
returned a cache hit. Treat post-commit garbage collection as a separate warning
and repair obligation, rather than misreporting the installation outcome.

Completed cache corruption currently requires manual removal. Add an explicit,
bounded repair path with precise ownership checks, offline behavior and no
deletion of active tools or project files. Test Windows transient file locks and
cross-volume copy fallback natively. Test missing temp/cache directories,
read-only/no-exec locations and unsupported filesystems. Never fill the host
disk or deliberately induce OOM to simulate these faults.

### 8. Broader machine coverage remains a separate claim

The package intentionally requires exact Node 26.10.0 and Lean 4.34.1. Linux
requires glibc 2.39 or newer, with Ubuntu 24.04 actually tested. Other Node/OS
versions, Alpine, WSL and Windows 11 x64 are not newly validated by this audit.
Keep the current matrix and restrictions explicit. Unknown environments should
fail early and clearly rather than download a toolchain they cannot execute.

Add user-environment profiles within the accepted matrix: ordinary permissions,
existing unrelated developer tools, supported proxy/CA settings, alternate
cache/temp volumes, Unicode home paths, locale changes, simultaneous projects,
upgrades and reuse of older cache receipts. Measure cold filesystem-cache and
slower-disk behavior: current reuse verifies file contents, and warm hosted-runner
timings do not establish latency on every laptop. Keep the integrity guarantees
when optimizing verification. Resource minima need measurements, not guesses
from whole-campaign peaks that also include native reference builds.

## Proposed CI proof structure

| Layer | When | Required evidence |
| --- | --- | --- |
| Deterministic installer faults | Every relevant push and PR; all six native targets | Real local TLS transport plus controlled clocks/filesystem failures; interrupted writes, retries, deadline semantics, checksum rejection, crash/restart, multi-process races, locale-independent receipts, proxy/CA behavior, safe cleanup and bounded resources. |
| Installed-package acceptance | Every candidate and relevant installer/catalog/packaging change | Pack once, test the same hash on all six targets; empty npm/tool caches, Node/npm-only isolation, cold build, local Lake project, offline reuse/rebuild, moved deployment, complete dependency identities and logs. |
| Live distribution checks | Scheduled across days on fresh native runners | Real pinned download endpoints, measured first-attempt and recovered outcomes, timings and transfer sizes; check that every required archive/notices asset is still available. |
| Release promotion | Before retaining/promoting a new accepted candidate | All required targets and fault suites pass for the exact artifact; preserve every attempt, unexplained failures, test-profile identities and resource aborts. Never promote solely because a rerun turned green. |

Start with three clean cold repetitions per target across at least two days as
a practical additional release check, not a statistical reliability guarantee.
Most failure exploration should use cheap deterministic fixtures, not repeatedly
download gigabytes. Rotate additional filesystem/network profiles while keeping
the core release matrix mandatory. No widening of Node/OS support without its
own acceptance evidence.

Make automatic checks and release gates enforceable while respecting the current
direct-to-`main` workflow. A push-triggered test reports a regression after it is
pushed; it does not prevent that push. If pre-merge blocking is desired, agree
on the corresponding branch/PR workflow separately. Keep ordinary validation
read-only, and keep release permissions in the promotion job.

The test oracle should specify observable invariants rather than implementation
details: no partial executable becomes visible; correct data are never rejected;
an interruption has bounded waste and a recoverable next run; concurrent callers
observe consistent state; progress stays live; recovery never weakens integrity.
Once a bug is fixed, convert its characterization into a regression asserting
the desired behavior. Do not use this audit script's expectation of current
failures as a passing release gate.

Standard GitHub-hosted runners remain
[free for public repositories](https://docs.github.com/en/actions/reference/runners/github-hosted-runners#standard-github-hosted-runners-for-public-repositories).
Use the existing native runner types, bounded concurrency, resource guards and
storage checks. Retain compact durable failure/summary evidence; avoid uploading
complete installed caches. No paid runners, upgrades or Windows 11 x64 work are
proposed here.

## What high confidence can mean

Define the promise before measuring it: for the documented Node/OS versions,
supported local storage and working network configuration, installation should
either finish automatically or fail within a bound with a precise recovery
action. A permanent upstream outage, insufficient disk or a network that forbids
downloads cannot be made into successful cold installation by testing harder.
Fully provisioned offline use can have its own stronger promise.

Report first-attempt success, success after bounded internal recovery, terminal
failures, retries/bytes, duration percentiles and cleanup/resource outcomes
separately for each profile. Preserve every failed attempt, including transient
CDN failures; those matter to user experience even if a later attempt succeeds.
An identified harness failure can be classified separately but must remain visible.

For scale, with zero failures in `n` independent, representative trials, the
one-sided 95% upper confidence bound on the failure probability is
`1 - 0.05^(1/n)`. Showing a bound below 0.1% would require about **2,995** zero-failure
trials under those assumptions. Repeating one hosted image, pooling different
platforms or selecting successful retries does not establish that rate for
developer machines. This is why a causal fault matrix, repeatable acceptance and
live observations are more useful now than a large nominal test count.

## Recommended next milestone for discussion

1. Fix locale-independent verification, network retry/deadline/error behavior,
   and reproducible installer dependency packaging; add regressions for each.
2. Add safe cross-process coordination, abandoned-staging recovery and accurate
   post-publication cleanup handling. Cover original/derived/Windows tool trees.
3. Add proxy/CA and storage diagnostics plus an explicit cache-repair path.
4. Wire the small native fault matrix to automatic checks, remove reliance on
   warm Actions caches, and run a newly packed candidate through all six targets.
5. Add scheduled live checks and a release report that records every attempt and
   states its confidence limits. Keep the previously accepted `.46` unchanged.

No production code, workflow triggers, branch rules or paid services were changed
for this review. Implementation timing is not yet estimable until the recovery
and supported-network behavior above are agreed.
