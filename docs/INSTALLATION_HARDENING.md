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

## Evidence and remaining gates

The first source milestone passed 63 focused download/archive tests under the
local resource guard (52.6 MiB reported peak). It covers bounded retries,
interruptions, validated resume, ignored ranges, deadlines, cancellation,
redirect rejection, integrity rejection and old receipt ordering. Cache receipts
are compared by content rather than locale-dependent JSON key order.

Cross-process recovery, explicit repair, dependency bundling, real TLS/proxy fault
tests, automatic native CI and a new six-platform installed candidate remain
implementation gates in [the plan](PLAN.md#installation-hardening-authorized-2026-09-28).
