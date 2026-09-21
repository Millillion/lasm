# Desktop shutdown diagnosis, 2026-09-19

The shutdowns had two experimentally observed causes. Both involved the local
Lasm workload; the first resource-protection attempt also caused a shutdown.
Subsequent investigations and guarded workload results are recorded below.

## Original whole-machine exhaustion

Kernel logs show global OOM episodes around 01:06, 08:36, and 11:37 Eastern.
All 2 GiB of swap were exhausted. The kernel killed ChatGPT processes repeatedly.
At 08:36 individual compiler/engine processes occupied about 1.1–5.1 GiB each;
the task table includes several Node, Deno, and Bun processes simultaneously.
An earlier episode includes three concurrent `wasm-opt` processes using about
2.8–2.9 GiB each in addition to multiple Lean engine processes.

Running separate suites and a build concurrently underestimated their total
memory: a single Lake or language-server test can start several full Wasm Lean
compilers. Small snapshots of available RAM did not bound subsequent peaks.
The recorded process names alone do not attribute every byte to Lasm, but the
overlapping Lasm process trees clearly contributed substantially. The app was
an OOM victim; these records do not establish an app memory leak.

## First guard caused ancestor pressure, despite free RAM

At 19:50:37 Eastern, a 256 MiB guard verification process was still below its
cap (about 240 MiB peak). Its `MemoryHigh` threshold caused sustained reclaim
pressure. The host monitors `user@1000.service` with
`ManagedOOMMemoryPressure=kill`. Its `systemd-oomd` log reports pressure of
86.68%, above the 50% policy threshold for over 20 seconds. The journal confirms
that both the Lasm service and the ChatGPT app scope were killed. The last
monitor sample still showed over 27 GiB available. There was no corresponding
kernel OOM: the service's kernel OOM counters stayed zero.

Thus a cgroup memory cap alone was insufficient on this desktop. The verification
itself caused the most recent app shutdown. That test is preserved as a failed
experiment, not a successful protection check.

## Corrected execution policy

- One heavy workload per checkout; one CTest job and at most two build jobs.
- A kernel cap of at most 10 GiB covers the entire descendant process tree.
- The supervisor stops the workload at 80% of its cap (normally 8 GiB).
- No `MemoryHigh` throttling. Stop instead if the workload's 10-second pressure
  average reaches 5% or host available memory drops below 8 GiB.
- Sample every 200 ms; preserve exit status, peak memory, pressure, and counters.
- Stop all descendants on exit and distinguish resource stops from Lean failures.
- Never deliberately induce OOM or sustained memory pressure on this desktop.

The corrected probe passed seven checks, including rejecting a simultaneous
launch, cleaning up descendants, and proactively stopping a below-cap allocation.
It also preserves literal command arguments, including dollar signs, quotes,
and percent signs, without systemd environment expansion. It recorded zero
kernel OOM events and zero throttling events. This verifies the
implemented controls; it does not guarantee against unrelated desktop failures.
No global OOM-daemon policy, swap configuration, or app settings were changed.

The first real Lean retry (v26, `elab/instances.lean`, 16 prestarted workers)
was proactively stopped after about 21 seconds at 8.07 GiB peak. It recorded
zero OOM/throttling events and left all 7,267 original test hashes unchanged.
This is a resource-aborted run, not a Lean conformance result. The eight-worker
derivative retained identical Wasm bytes and completed at 5.55 GiB peak, with
zero OOM/throttling events. It exposed an ordinary `_private` module lookup
failure in the allocator experiment, recorded separately from memory protection.

Raw diagnostic logs remain ignored under `.work/resource-diagnostics/`.
[Structured evidence](evidence/resource-protection-2026-09-19.json) includes the
kernel task summaries, failed first guard, corrected checks, and interrupted
suite/source-integrity records. No interrupted full suite counts as a pass.

Subsequent guarded builds and original-test comparisons completed without host
OOM or throttling. The checked allocation comparison peaked at 7.16 GiB including
suite preparation; its 8 GiB guest configuration passed the original `instances`
test. Guest capacity is an address-space limit, not permission to consume that
much host memory outside the guard. The 4 GiB guest reports a clean Lean
allocation failure. This is distinct from either a host OOM or a supervisor stop.
Kernel and systemd-oomd journals checked after that run contained no memory-kill
entries since the desktop restart at 20:10 Eastern. See
[the allocation evidence](evidence/region-allocation-2026-09-20.json).

Long suites can now use `run-campaign.mjs`, a small supervisor outside the
workload cgroup. It starts one independently guarded test at a time and retains
each attempt's logs, source-integrity result, and resource report. Completed
results are checkpointed, interrupted attempts remain alongside their retries,
and separate supervisors cannot overwrite the same campaign. A proactive
workload-budget stop is recorded separately; actual OOM, host pressure, lost
monitoring, or source drift stops the campaign for investigation. Build and suite
entry points also reject more than two build jobs or one CTest job.

Four tiny synthetic CTest controls verified batch resume, deliberate ordinary
process interruption and cleanup, preserved prior evidence, and failed-test
accounting. The intentional failing control remains failed; it was not turned
into a pass. These controls used about 25 MiB per guarded run and induced no
memory pressure or OOM. See [the checkpoint evidence](evidence/campaign-checkpoints-2026-09-20.json).

The new full Node campaign exposed aggregate memory growth inside individual
Lake tests: `deps` and `ffi` started compiler children and reached the proactive
budget at 8.11 and 8.16 GiB. Both were stopped with zero kernel OOM, high, or max
events; all 7,267 source hashes still matched afterward. The next launch was
rejected because systemd had not yet collected the prior transient unit. The
runner now waits for its own completed unit to disappear before returning.
The tiny checkpoint/interruption controls passed again after that correction.
It also records bounded per-process RSS snapshots near the memory high-water
mark, excluding command lines and unrelated desktop processes. See
[the Lake budget evidence](evidence/lake-memory-budget-2026-09-20.json). The host
cap remains unchanged while lower-worker configurations are investigated.

Reducing only the preinitialized pthread pool from eight to five was insufficient:
`deps` and `ffi` still stopped at 8.03 and 8.01 GiB, though `hello` passed at
5.76 GiB. A separate facade then set Lake's ordinary `LEAN_NUM_THREADS` default
to one, inherited by its compiler children. All three unchanged examples passed
with that setting both natively and in Node. Node peaks fell to 4.98–5.51 GiB,
with all source hashes intact and zero OOM/throttling events. Direct Lean tests
outside Lake retain four workers. This is a disclosed harness resource
adjustment; the cap was not raised. The complete Node campaign now continues
from these three recorded passes, using append-only selection history.

Older compiler probes, native-C preparation, export generation, suite preparation,
and artifact freezing now apply the same guard automatically. Previously those
commands required the caller to remember the wrapper. Three representative
entry points refused an overlapping launch before their bodies ran while a real
upstream test continued unaffected. All harness scripts passed syntax checks.
These checks used no memory exhaustion; see
[the entry-point evidence](evidence/automatic-guard-entrypoints-2026-09-20.json).

The campaign supervisor now accepts `SIGUSR2` to finish and checkpoint the
current test, then pause before launching another. This makes room for a
diagnostic without interrupting an upstream driver's cleanup. `SIGTERM` still
stops immediately when needed. Two tiny guarded CTest controls confirmed that
the active test passes, the next test remains unstarted, and resumption preserves
the first test's evidence byte-for-byte. They recorded no OOM or throttling;
see [the orderly-pause evidence](evidence/campaign-pause-2026-09-20.json).

The original guard's CPU setting (`Nice=5`) caused a separate compatibility
problem: even native Lean failed the unchanged `async_systems_info` test when
it tried to set its own and its parent's priority to 3. An unprivileged process
cannot raise priority from 5 to 3. At normal priority (`Nice=0`) the native
control passes. The guard now records and preserves that normal CPU setting;
all memory limits, pressure thresholds, swap restrictions, and concurrency
limits are unchanged. This was a harness-induced failure, not a fundamental
Lean or Wasm limit. See [the priority comparison](evidence/guard-priority-2026-09-20.json).

The resumed packaged-finalizer investigation on September 21 found a Wasm
memory-access trap, not host memory exhaustion. The probe peaked below 0.5 GiB
with zero OOM/throttling counters. Its cause was incorrect restoration of a
suspended fiber's C stack pointer. After correcting that state, fresh builds and
native/Node/Deno/Bun FIFO comparisons passed at a combined 0.41 GiB peak, still
with zero OOM, throttling, or swap use. The resource policy is unchanged; see
[the finalizer evidence](evidence/cooperative-finalizers-2026-09-21.json).

A later combined TCP/HTTP regression sequence was stopped proactively at
8.03 GiB while running Bun with five prestarted workers. The entire service was
released; memory-high/max/OOM counters and swap use all remained zero. About
1.9 GiB of the final sample was retained file cache, so the same HTTP registration
was retried alone under the unchanged guard. It finished as a real test failure
at 7.07 GiB: all 22 original cases timed out. Restoring eight prestarted workers
with identical Wasm and host code passed the unchanged registration at a
4.78 GiB combined preparation/test peak. Keep this resource abort, the isolated
failure, and the passing control distinct. The guard limits were never raised;
see [the worker-pool HTTP comparison](evidence/bun-pool-http-2026-09-21.json).

The prioritized Node campaign then reached the proactive budget in three
language-server cancellation registrations (8.05–8.11 GiB). Lowering all Lean
processes to three workers still stopped at 8.10 GiB, while one- and two-worker
settings could not complete all native cancellation controls. A separate
instrumented four-worker retry stopped at 8.12 GiB. These are retained real
workload diagnostics, not deliberate memory-exhaustion tests of the guard.
All stops released the entire service, with zero high/max/OOM counters and swap.

Emscripten was eagerly exposing all 261,062 initial function-table entries to
JavaScript in each worker. A metadata-based index preserves known addresses and
the original unknown-function fallback. With unchanged Wasm bytes and the
original four Lean workers, all three unchanged Node server tests then passed
at 7.18–7.37 GiB, with all original source hashes intact. The compiler memory
probe fell from 3.77 to 3.09 GiB. The first index attempt fell back on console
imports and saved little; it remains recorded along with the concurrency trials.
Five focused lookup tests and 54 cross-engine ABI/thread/library checks pass.
Broader server and engine campaigns remain necessary. The memory cap, proactive
stop, pressure monitor, swap restriction, and single-workload policy are unchanged.
See [the complete comparisons](evidence/function-table-index-2026-09-21.json).

The indexed Bun compiler still exceeds the proactive process-tree budget in
the original parallel-cancellation server test: 8.13 GiB with eight prestarted
workers per compiler process. The guard stopped and released the workload;
all 7,267 source hashes remained intact, and high/max/OOM counters and swap
were zero. The same original registration passed in Node and Deno. This is
a remaining resource result, not a Bun conformance failure or a fundamental
limit. See [the process comparison](evidence/process-lifetime-2026-09-21.json).
