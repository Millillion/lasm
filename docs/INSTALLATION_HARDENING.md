# Installation hardening

Authorized 2026-09-28 following the [dated audit](TOOLCHAIN_ROBUSTNESS.md).
Candidate `.46` and its six-platform acceptance remain unchanged. This document
describes source changes awaiting a new packed candidate, not a retroactive claim
about that archive.

## Transfers

The installer streams archives to private files and verifies the entire pinned
SHA-256 and length before extraction. It tries at most four times for HTTP 408,
429, 500, 502, 503 and 504 and transient connection errors. Backoff grows with
jitter; `Retry-After` is honored within the overall deadline. Every failed attempt
is observable through the progress/event stream. DNS, TLS and nested connection
errors identify the tool and host; credentials and signed URL queries are redacted.
Bad certificates, hashes, ranges, permissions and ordinary HTTP 4xx are terminal.
Redirects are bounded and must remain credential-free HTTPS at every hop.

A retry resumes a partially written archive only with a strong ETag, `If-Range`,
and an exact matching `Content-Range`. A server returning HTTP 200 restarts the
file. The final checksum always covers the complete archive. Process termination
currently restarts the interrupted artifact; it never trusts a partial tree.

Defaults separate connection/header silence (60 seconds), body inactivity
(120 seconds), and the overall archive budget including retries (two hours).
Receiving data resets only the inactivity timer. The following environment
variables can be set before invoking `npx lasm Main.lean`:

| Variable | Default | Allowed range |
| --- | --- | --- |
| `LASM_DOWNLOAD_ATTEMPTS` | `4` | 1–10 attempts |
| `LASM_DOWNLOAD_CONNECT_MS` | `60000` | 1000–600000 ms |
| `LASM_DOWNLOAD_IDLE_MS` | `120000` | 1000–1800000 ms |
| `LASM_DOWNLOAD_TOTAL_MS` | `7200000` | 1000–86400000 ms |

For example, in a POSIX shell:

```sh
LASM_DOWNLOAD_TOTAL_MS=14400000 npx lasm Main.lean
```

In PowerShell:

```powershell
$env:LASM_DOWNLOAD_TOTAL_MS = '14400000'
npx lasm Main.lean
```

## Cache coordination and repair

Downloads and derived tools take OS-owned locks for their content identity.
Windows short execution directories use the same coordination. Separate processes
share one installation; the OS releases the lock when its owner dies. Lock files
stay in place: deleting them could split waiters across different locks. There
is no PID expiry or age threshold that could mistake a slow live install for a
dead one. Receipts from earlier installers remain readable.

Each lock owns one deterministic staging path. The next invocation reclaims that
path after a crash, including a crash after successful publication. Temporary
cleanup failures produce an actionable warning and do not turn a successfully
published tool into a reported installation failure.
Cleanup retries the whole removal at one level, with at most 5.5 seconds of
backoff. Node's per-directory recursive retry multiplier is deliberately disabled.

Current source adds:

```sh
npx lasm cache repair
```

This is an explicit offline operation on `LASM_TOOLCHAIN_CACHE` (or the default
cache). It verifies complete trees, retains valid tools, removes invalid trees
through a private quarantine, and cleans owned staging. The next build replaces
only missing tools. Project files, SDK mutable state, unknown entries and lock
files remain untouched. Shared build leases prevent repair during active builds;
repair fails promptly with a useful message. Stop older Lasm versions first,
because `.46` and earlier do not participate in these new leases. Use a local
filesystem with OS file-lock support; network filesystems are unverified.
If the CLI was forcibly killed, stop any remaining compiler subprocesses before
repair: the lease belongs to the CLI process, not to an orphaned native compiler.

Old random `.install-*` / `.derive-*` / `.prepare-*` directories do not carry the
new ownership proof and are left for manual inspection. Windows repair also
rebuilds a corrupt short compiler prefix from an intact verified Lean archive.
A killed process restarts its partial download; network retries within a live
process may resume it. Atomic publication does not promise power-loss durability;
receipts are fully checked again before reuse.

The installer checks archive free space before downloading and accounts for
extracted bytes and filesystem allocation rounding while reading archive headers.
This is not a disk reservation: quotas or other writers can still exhaust space.
ENOSPC, quota, read-only and permission errors explain how to relocate the cache.
Tests inject insufficient-space errors without filling a disk or inducing OOM.

## Evidence and remaining gates

The candidate packer now bundles the six packages in the installer's exact
committed npm dependency graph. `installer-dependencies.json` records versions,
registry integrity values, graph edges and every bundled file hash; provenance
includes its digest. Packing twice must produce identical bytes. The tiny packing
control passed installation with an empty npm cache, `--offline`, and an unusable
registry. Full candidate acceptance additionally repeats installation under OS
network denial. No dependency lifecycle script is needed.

The [automatic fault workflow](../.github/workflows/installer-faults.yml) runs on
relevant pushes and PRs on the existing six native runners. It uses small TLS
fixtures, process kills, locks, repair, archive and dependency packing controls.
Standard public runners are [free](https://docs.github.com/en/actions/reference/runners/github-hosted-runners);
this workflow uploads no artifacts/caches. All outcomes remain in logs and job
summaries. It observes direct pushes to main; it is not a pre-push branch gate.
Fault concurrency groups include the calling workflow, so a standalone check
cannot replace a candidate's pending fault job. Relevant workflows use GitHub's
[`queue: max`](https://docs.github.com/en/actions/how-tos/write-workflows/choose-when-workflows-run/control-workflow-concurrency)
to retain queued attempts instead of the default single pending slot.

### Corporate networks

Real loopback HTTPS/CONNECT tests verify untrusted-CA rejection, trusted startup
CA configuration, proxy credentials and `NO_PROXY` through the build-worker
transport. No system trust settings are modified. Node's [startup settings](https://github.com/nodejs/node/blob/main/doc/api/cli.md)
must be present before the CLI starts:

```sh
NODE_USE_ENV_PROXY=1 HTTPS_PROXY=http://proxy.example:8080 \
  NODE_EXTRA_CA_CERTS=/path/to/company-ca.pem npx lasm Main.lean
```

```powershell
$env:NODE_USE_ENV_PROXY = '1'
$env:HTTPS_PROXY = 'http://proxy.example:8080'
$env:NODE_EXTRA_CA_CERTS = 'C:\certificates\company-ca.pem'
npx lasm Main.lean
```

`NO_PROXY` controls exclusions. npm configuration alone does not configure Node's
fetch. Git uses its ordinary proxy/CA configuration; set `GIT_SSL_CAINFO` to the
appropriate CA bundle when Lake dependencies use a private Git server. Do not
disable certificate verification. Complete CLI/Lake corporate-network validation
is an additional installed-candidate gate; the tiny worker tests do not establish
compatibility with every proxy appliance or corporate policy.

The first source milestone passed 63 focused download/archive tests under the
local resource guard (52.6 MiB reported peak). It covers bounded retries,
interruptions, validated resume, ignored ranges, deadlines, cancellation,
redirect rejection, integrity rejection and old receipt ordering. Cache receipts
are compared by content rather than locale-dependent JSON key order.

The cache milestone passed 76 focused tests, including independent processes,
kill/restart at download/extraction/verification/publication boundaries, active
lease protection, locale changes and offline repair (84.2 MiB reported peak).
The integrated 116-test installer/CLI run also passed (84.6 MiB peak). Native
platform acceptance is pending.

The combined automatic suite passed all 127 tests locally under the guard
(126.2 MiB peak). The [first native automatic run](https://github.com/Millillion/lasm/actions/runs/36509526628)
passed: Linux and macOS passed 127 tests per architecture; Windows passed 124 per
architecture with three POSIX-only symlink tests skipped. Native Windows junction
and compiler-prefix tests passed. [Machine-readable evidence](evidence/installer-faults-2026-09-29.json)
preserves job identities and accounting. A further real-Git private-CA/proxy
fixture passed locally before adding the full installed CLI/Lake control.

## Candidate inputs and release gates

Runtime inputs now come from a pinned retained release asset, with its archive
and runtime manifest independently verified. The first source reference reuses
only authenticated runtime/native bytes from `.46`; it does not reuse `.46`'s
installer code. Future source runtime builds retain their handoffs as draft
release assets as well as optional caches. The reviewed reference is
[`node-runtime-source.json`](../scripts/ci/node-runtime-source.json).

Each new candidate is packed once (with a second identical pack check), retained
as an explicitly unaccepted draft, then fetched by exact hash by all six native
consumers. Legacy cache inputs remain optional; cache eviction is no longer the
sole-source failure mode. Draft assets do not consume Actions artifact storage.
GitHub draft visibility requires push access. A separate preparation job fetches
and hashes the retained bytes, then creates a budgeted cache handoff for read-only
native jobs. It reconstructs that handoff on every campaign, even with no prior
Actions cache. If eviction happens during a run, the error directs maintainers
to rerun the whole campaign; the durable archive remains intact. All cache writers
share the existing serialized 8 GiB ceiling below the included 10 GiB allowance.
Candidate builds run automatically for relevant product/packaging pushes and can
also be dispatched manually. All six deterministic fault jobs and native installed
jobs gate creation of the tested-candidate draft. The native jobs additionally
exercise the installed CLI -> Lake -> managed Git path against an authenticated
loopback proxy and private CA. Its loopback fixture runs separately from the
OS-isolated prerequisite proof; both gates must pass.
Draft retention is idempotent: an interrupted upload can add only missing
assets after checking all existing identities. Published releases, conflicting
checksums and different source revisions are rejected. Original packing
measurements are retained even when a retry records a different timestamp.
Two regression controls cover partial upload recovery and conflict rejection;
a read-only probe verified reuse of the actual retained candidate without writes.

The new packed candidate, full CLI/Lake network results, and observed multi-day
confidence remain gates in [the plan](PLAN.md#installation-hardening-authorized-2026-09-28).

The first `.47` attempt ([36510234373](https://github.com/Millillion/lasm/actions/runs/36510234373))
stopped before packaging: the compiler guard's minimal environment omitted
`GH_TOKEN`, so the draft runtime asset was invisible. The correction downloads
with CI authentication first, then independently hashes/extracts under the
unchanged guard. No candidate archive was produced by that attempt.

The second `.47` attempt ([36510489581](https://github.com/Millillion/lasm/actions/runs/36510489581))
packed reproducibly and passed all six fault jobs, but read-only consumers could
not see the draft package. Native installation did not start. The separate input
job above fixes that authorization boundary without granting test jobs write
access. The `.47` archive is preserved as unaccepted; a later candidate also
includes the reserved-filename inventory regression and its own version in the
packed README's installation command.

That local suite passed 133 of 135 controls, with two Windows-only controls
correctly skipped on Linux (132.8 MiB guard peak, no resource abort). New native
Windows controls use a real deny-delete file handle and a disposable 64 MiB NTFS
volume to exercise cleanup warnings and actual cross-volume prefix copies.
Its subsequent native results are recorded below.

The next automatic fault run ([36512182510](https://github.com/Millillion/lasm/actions/runs/36512182510))
passed Linux/macOS but timed out on Windows. The new real-file-lock control
exposed recursive deletion retries and a fixture cleanup ordering issue; a
separate packaged-README control exposed Windows checkout line endings.
The correction bounds retry backoff at one level, closes the fixture handle
before cleanup even after failure, and normalizes README newlines. Both Windows
temporary volumes were detached; the x64 guard peak was 285.7 MiB with no memory
stop. The original timeout remains visible rather than being relabeled a pass.
The candidate input job succeeded in [36512182772](https://github.com/Millillion/lasm/actions/runs/36512182772),
proving the authenticated draft-to-read-only handoff. Linux workspace cleanup now
follows the full CLI/Lake network check, which needs the installed package.

The corrected [137-control matrix](https://github.com/Millillion/lasm/actions/runs/36512703131)
passed all six targets: POSIX passed 135 with two Windows-only skips; Windows
passed 134 with three POSIX-only skips. The real Windows x64 locked-file case
completed in 5.6 seconds, and actual cross-volume copying passed on both Windows
architectures. A subsequent environment review corrected `Path`/`PATH` composition
and mixed-case Lean/Lake/Elan overrides in Windows workers. Installed acceptance
now also runs the Lake project offline with unrelated developer settings present;
that additional profile awaits its new candidate.

The final source [139-control matrix](https://github.com/Millillion/lasm/actions/runs/36513317821)
also passed all six targets, including the environment controls. Each platform
passed 136 applicable checks with three explicitly inapplicable skips and no
resource stop. [Exact job identities, OS versions, accounting and memory](evidence/installer-faults-final-2026-09-29.json)
are retained. The corresponding reproducible candidate is
`0.1.0-experimental.36513318119`, SHA-256
`ea43b7bc35cb665efe24b7341682c863e2073ab4b1cf7f065cb91585da5ae16b`,
from `e4bb15165042a439b9cabdcd1678fafdc2e99f35`. Its
[full installed campaign](https://github.com/Millillion/lasm/actions/runs/36513318119)
is separate. Linux x86-64 passed the full installed/deployment suite, then its
additional network control reached the unchanged proactive memory stop. The
[resource evidence](evidence/installer-network-resource-abort-2026-09-29.json)
records about 4.86 GiB of file pages versus 189 MiB of anonymous memory, zero OOM
events and no pressure throttling. The network control now uses the primary
consumer's scoped completed-cache advice sidecar; limits and package bytes stay
unchanged. This attempt remains a resource abort, not an installed/network pass.
Apple Silicon subsequently passed the complete installed and network gates. The
[original Windows ARM64 attempt](evidence/installer-windows-report-contention-2026-09-29.json)
passed cold and Lake builds, then its CI guard encountered access denied while
atomically replacing its evidence file. Peak commitment was 2.02 GiB, with no
memory stop. The supervisor now tolerates brief Windows sharing contention during
periodic saves without sleeping or pausing resource checks. Persistent contention
fails closed after five seconds; final retries happen after the workload job is
closed. A native deny-delete-handle control exercises recovery and bounded failure.
These are maintainer-control changes; the candidate bytes remain unchanged.

### Repeated cold installations

[`installation-confidence.yml`](../.github/workflows/installation-confidence.yml)
runs daily at 03:17 UTC and supports manual dispatch. Its reviewed selection
[`node-robustness-candidate.json`](../scripts/ci/node-robustness-candidate.json)
selects the unchanged archive for initial and repeated validation. Activation is
not acceptance: the corrected controls must first complete all six targets, and
the multi-day gate remains separate. All native repetitions
start from fresh VMs and empty consumer tool/npm caches and use one exact archive.
The source controls also rerun; each report records their revision separately.

The gate requires three consecutive complete cold/offline/deployment/network passes per
target, at least two UTC dates and 24 hours of separation. Duplicate job reports
do not count twice. All original job attempts are collected; failed preparation,
missing evidence, later failures and missing fault jobs prevent a passing latest
campaign. Compact immutable reports stay with the retained draft; the last 30
workflow runs are evaluated, and older report files remain preserved. First-run
retry messages and cold timings remain distinct from final success.
A later failed or unverified installation restarts that platform's clean sequence;
a single green retry cannot reuse passes recorded before the failure. The live
collector was also checked against the original failed `.47` campaign: it retained
all five started native jobs as failed/unverified and refused the confidence gate.
Preparation failures with missing native jobs also reset the affected sequences,
without claiming that an installer ran. Regression controls cover a failed input
followed by one green retry. Reports separate downloads without retries from
successful recovery, and provide observed median/p95/max cold timings with their
sample counts. Artifact byte totals are pinned compressed lengths, not measured
wire traffic; retries and transport overhead can add bytes. New controls include
the mandatory Lean source/notices companion in that catalog total.
Both the installed-suite and network-control resource reports must pass. A
regression uses the actual Linux abort (whose service exit was zero but whose
resource flag was set), alongside retained clean Linux/macOS/Windows reports.

A single green matrix can create a tested draft, but it does not satisfy this
additional gate. Any robustness release decision must require the selected
candidate's confidence report to have `passed: true`. This is a practical
regression threshold, not proof of a particular failure rate or of compatibility
with every network, filesystem, antivirus policy or machine. npm stays unpublished.
