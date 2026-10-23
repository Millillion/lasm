# Installation hardening

Authorized 2026-09-28 following the [dated audit](TOOLCHAIN_ROBUSTNESS.md).
Candidate `.46` and its six-platform acceptance remain unchanged. This document
describes the hardened candidate and its ongoing validation, not a retroactive
claim about that archive.

**Windows ARM64 removed — 2026-10-16 (user decision).** Lasm now supports five
targets: Linux and macOS on x86-64 and ARM64, and Windows on x86-64. The fault
matrix, installed-candidate campaign and repeated-installation gate now cover
these five targets. Results below that mention six targets or Windows ARM64 are
historical records of what ran at the time and remain as written.

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
Receiving data resets only the inactivity timer. Between attempts Lasm waits
2 s, doubling to at most 60 s (75–100% jitter, or longer if the server sends
`Retry-After`): about 2.3–3 minutes over the default eight attempts (current
source; candidates up to Phase 4 made four attempts within about 10 seconds).
Every HTTP 5xx, 408 and 429 and connection resets and timeouts are retried;
other 4xx answers, certificate errors and checksum mismatches are not. The following environment
variables can be set before invoking `npx lasm Main.lean`:

| Variable | Default | Allowed range |
| --- | --- | --- |
| `LASM_DOWNLOAD_ATTEMPTS` | `8` | 1–20 attempts |
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
relevant pushes and PRs on the five supported native runners (six before the
2026-10-16 Windows ARM64 removal). It uses small TLS
fixtures, process kills, locks, repair, archive and dependency packing controls.
Damaged and incomplete-cache recovery invokes the actual `lasm cache repair`
entrypoint against tiny caches, then verifies successful replacement and offline
reuse. The full installed suite runs these same controls under network denial.
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
The integrated 116-test installer/CLI run also passed (84.6 MiB peak). The later
native results below extend this local evidence.

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
as an explicitly unaccepted draft, then fetched by exact hash by all five native
consumers. Legacy cache inputs remain optional; cache eviction is no longer the
sole-source failure mode. Draft assets do not consume Actions artifact storage.
GitHub draft visibility requires push access. A separate preparation job fetches
and hashes the retained bytes, then creates a budgeted cache handoff for read-only
native jobs. It reconstructs that handoff on every campaign, even with no prior
Actions cache. If eviction happens during a run, the error directs maintainers
to rerun the whole campaign; the durable archive remains intact. All cache writers
share the existing serialized 8 GiB ceiling below the included 10 GiB allowance.
Candidate builds run automatically for relevant product/packaging pushes and can
also be dispatched manually. All five deterministic fault jobs and native installed
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

The new packed candidate and full CLI/Lake network gates have passed all six
targets, as recorded below. The repeated-installation confidence gate remains separate
in [the plan](PLAN.md#installation-hardening-authorized-2026-09-28).

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
that profile is exercised by the new candidate below.

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

The updated [144-control matrix](https://github.com/Millillion/lasm/actions/runs/36516202881)
passed 141 applicable controls with three skips on each native target. Both
Windows targets additionally passed three atomic-report controls, including a
real deny-delete handle. [Compact evidence](evidence/installer-faults-guard-controls-2026-09-29.json)
records all six jobs and their resource outcomes. The complete
[Apple Silicon installed/network report](evidence/installer-hardened-darwin-arm64-2026-09-29.json)
includes an empty-cache npm installation under network denial and all six bundled
dependency identities. The confidence collector classified that real success
and the Linux resource abort correctly. The
[unchanged-archive repetition](https://github.com/Millillion/lasm/actions/runs/36515690424)
uses the corrected Linux resource profile; subsequent runs also use the corrected
Windows report writer. No failed attempt is replaced.

The corrected Linux x86-64 network control passed at 1.26 GiB peak with all
memory-event counters zero under unchanged limits. Linux ARM64, Intel macOS and
Windows x86-64 also completed both installed and network gates. These are passes
of the same archive across the original and corrected campaigns, not a claim that
the original failed campaign was green. Windows ARM64 then passed its complete
fresh repetition, with 2.50 GiB installed-suite and 1.46 GiB network-control peak
commitment, completing initial acceptance of the exact archive on all six targets.

| Target | Complete installed, deployment, network and resource evidence |
| --- | --- |
| Linux x86-64 | [Passed](evidence/installer-hardened-linux-x64-2026-09-29.json) |
| Linux ARM64 | [Passed](evidence/installer-hardened-linux-arm64-2026-09-29.json) |
| macOS x86-64 | [Passed](evidence/installer-hardened-darwin-x64-2026-09-29.json) |
| macOS ARM64 | [Passed](evidence/installer-hardened-darwin-arm64-2026-09-29.json) |
| Windows x86-64 | [Passed](evidence/installer-hardened-win32-x64-2026-09-29.json) |
| Windows ARM64 | [Passed](evidence/installer-hardened-win32-arm64-2026-09-29.json) |

The [real CLI repair matrix](https://github.com/Millillion/lasm/actions/runs/36516980143)
also passed all six native targets. No new application/compiler code was needed
for the CI resource and evidence corrections.

The first repetition subsequently hit a different CI failure on Intel macOS:
[`ps` exceeded its five-second accounting deadline](evidence/installer-macos-accounting-abort-2026-09-29.json).
Cold and Lake phases passed; the monitor stopped the later offline suite.
Peak RSS was 1.64 GiB, below the unchanged 3.20 GiB stop, with at least 8.27 GiB
host memory available. This is a failed repetition and resets that target's
sequence; the earlier complete pass remains separate evidence.

The maintainer monitor now pauses the known workload process group before one
fresh accounting attempt. It resumes only after fresh memory/reserve checks pass.
A second timeout, a detached process, an unsafe reading, more than 12 seconds
paused, or more than three recoveries fails closed; a paused unsafe workload is
killed instead of resumed. The original five-second command deadlines and memory
limits stay unchanged. Reports retain every recovery. Real process-group controls
verify that work cannot advance during accounting recovery and is killed after
a persistent failure. The [152-control native matrix](evidence/installer-faults-accounting-recovery-2026-09-29.json)
passed on all six targets: POSIX passed 149 with three inapplicable skips; Windows
passed 147 with five skips, plus its three separate atomic-report controls.
The native Mac pause/resume/termination controls passed on both architectures.
The largest matrix peak was 337.6 MiB, with no resource stop. A
[fresh full installed repetition](https://github.com/Millillion/lasm/actions/runs/36520825246)
is running against the unchanged archive with the corrected maintainer controls.
The still-queued run
`36519931807` was canceled before starting to replace its superseded controls;
that cancellation remains visible in confidence history.
The report job completed successfully and retained its
[first immutable confidence report](evidence/installer-confidence-initial-2026-09-29.json)
on the candidate draft. It correctly records the failed Mac repetition, counts
the canceled preparation as unavailable, and leaves `passed: false`. The canceled
preparation conservatively resets every platform's clean sequence.

### Repeated cold installations

[`installation-confidence.yml`](../.github/workflows/installation-confidence.yml)
is scheduled daily at 03:17 UTC and supports manual dispatch. GitHub documents
that [scheduled runs can be delayed or dropped](https://docs.github.com/en/actions/reference/workflows-and-actions/events-that-trigger-workflows#schedule).
Only actual completed observations count; a missing scheduled run is never a
successful trial. A maintainer can request a fresh run of the same reviewed
selection without changing its package:

```sh
gh workflow run installation-confidence.yml --repo Millillion/lasm --ref main
```

Its reviewed selection
[`node-robustness-candidate.json`](../scripts/ci/node-robustness-candidate.json)
selects the unchanged archive for repeated validation. Initial acceptance has
passed on all six targets; the repeated-installation gate passed separately. All native repetitions
start from fresh VMs and empty consumer tool/npm caches and use one exact archive.
The source controls also rerun; each report records their revision separately.

The gate requires three consecutive complete cold/offline/deployment/network passes on
each of the five supported targets. When older campaigns are evaluated, only
those five targets' jobs are counted; their historical Windows ARM64 jobs are
ignored. Campaigns may run back to back; the user removed the earlier requirement
of two UTC dates and 24 hours of separation on 2026-10-16, and reports still
record each sequence's dates and span for context. Duplicate job reports
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
wire traffic; retries and transport overhead can add bytes. (The Windows ARM64
source/notices companion once included in that total was removed with that
platform.)
Both the installed-suite and network-control resource reports must pass. A
regression uses the actual Linux abort (whose service exit was zero but whose
resource flag was set), alongside retained clean Linux/macOS/Windows reports.

A single green matrix can create a tested draft, but it does not satisfy this
additional gate. Any robustness release decision must require the selected
candidate's confidence report to have `passed: true`. This is a practical
regression threshold, not proof of a particular failure rate or of compatibility
with every network, filesystem, antivirus policy or machine. npm stays unpublished.

### Observed daily repetitions (2026-09-29 to 2026-10-15)

Seventeen scheduled campaigns ran against the unchanged archive and source
revision `71ed7b3`. On 2026-10-15, Linux x86-64, Linux ARM64 and Apple Silicon
had eight consecutive complete passes. Intel macOS and Windows x86-64 had one
because of the infrastructure cancellation below. Windows ARM64 had none, so
the gate stayed `passed: false`. No failure came from the installer or the
packaged CLI. Every failure is retained and still resets its sequence:

| Date | Failure | Cause |
| --- | --- | --- |
| 10-02, 10-07 | Linux fault job | Test race: the heartbeat fixture truncated before writing, and a second read saw `0` |
| 10-11, 10-15 | Windows ARM64 installed job | CI isolation race: the resource supervisor's transient `.partial` report was denied, then renamed away, so restoring its ACL failed with `WinError 2` |
| 10-14 | Intel macOS, both Windows installed jobs | GitHub Actions internal error cancelled all three simultaneously |

The heartbeat now publishes by rename, and the test reads it once (40/40 local
resume repetitions passed). Windows isolation now records denied files that
vanish during enumeration or before restoration (`vanishedBeforeDenial`,
`vanishedBeforeRestore`) instead of reporting cleanup errors. Explicit denial
targets must still exist, and every other ACL error still fails closed. A
native control removes a denied file during each restricted phase. The
candidate bytes are unchanged. Gate sequences restart from the next complete
campaign.

### Gate result (2026-10-16)

After the harness fixes, three back-to-back campaigns passed every fault job and
every native installed, offline, deployment and network job:
[38847047512](https://github.com/Millillion/lasm/actions/runs/38847047512),
[38850143704](https://github.com/Millillion/lasm/actions/runs/38850143704) and
[38850152012](https://github.com/Millillion/lasm/actions/runs/38850152012).
The final confidence report records `passed: true`, with consecutive clean
installations of 11 (Linux x86-64, Linux ARM64, Apple Silicon), 4 (Intel macOS,
Windows x86-64) and 3 (Windows ARM64). Earlier failures remain in the history.
This is a practical regression threshold for the exact archive
`0.1.0-experimental.36513318119`, not a measured failure rate; npm stays unpublished.

### Slimmed candidate gate result (2026-10-16)

Candidate `0.1.0-experimental.38930715033` (source `3dc280d`, SHA-256
`99593d597804f05e489d1f9d7c2c3da985e67906b8dbb114b7cf6300f9765dc9`) carries the
tiered Lean distribution and the Python-free Node link driver. It passed native
acceptance on all five supported targets in
[38930715033](https://github.com/Millillion/lasm/actions/runs/38930715033), then
three back-to-back confidence campaigns:
[38935405343](https://github.com/Millillion/lasm/actions/runs/38935405343),
[38935422653](https://github.com/Millillion/lasm/actions/runs/38935422653) and
[38935439348](https://github.com/Millillion/lasm/actions/runs/38935439348).
The third campaign's report job first failed on a GitHub API HTTP 502 while
collecting job lists; its rerun (no installations repeated) recorded
`passed: true` with five consecutive clean cold installations per target.

### Lean 4.35.0 candidate gate result (2026-10-16)

Candidate `0.1.0-experimental.54` (source `b34f570`, SHA-256
`567ea838eb672249d4dfd071c9e659de3dc9eedd3a503570cacc82a60c2aad77`; Lean 4.35.0,
Node 26.12.0, tiered Lean, Python-free link driver and npm artifact sources)
passed native acceptance on all five supported targets in
[38986393273](https://github.com/Millillion/lasm/actions/runs/38986393273), then
three back-to-back confidence campaigns
([38989444051](https://github.com/Millillion/lasm/actions/runs/38989444051),
[38989452544](https://github.com/Millillion/lasm/actions/runs/38989452544),
[38989461708](https://github.com/Millillion/lasm/actions/runs/38989461708)):
`passed: true`, four consecutive clean cold installations per target. Median cold
`npx lasm Main.lean` times (two samples each, CI runners): Linux x86-64 50 s,
Linux ARM64 42 s, Intel macOS 168 s, Apple Silicon 59 s, Windows x86-64 193 s.
