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

Dependency bundling, real TLS/proxy fault tests, automatic native CI and a new six-platform installed candidate remain
implementation gates in [the plan](PLAN.md#installation-hardening-authorized-2026-09-28).
