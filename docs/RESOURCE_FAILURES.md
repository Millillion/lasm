# Desktop shutdown diagnosis, 2026-09-19

The shutdowns had two experimentally observed causes. Both involved the local
Lasm workload; the first resource-protection attempt also caused a shutdown.

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

The corrected probe passed six checks, including rejecting a simultaneous
launch, cleaning up descendants, and proactively stopping a below-cap allocation.
It recorded zero kernel OOM events and zero throttling events. This verifies the
implemented controls; it does not guarantee against unrelated desktop failures.
No global OOM-daemon policy, swap configuration, or app settings were changed.

Raw diagnostic logs remain ignored under `.work/resource-diagnostics/`.
[Structured evidence](evidence/resource-protection-2026-09-19.json) includes the
kernel task summaries, failed first guard, corrected checks, and interrupted
suite/source-integrity records. No interrupted full suite counts as a pass.
