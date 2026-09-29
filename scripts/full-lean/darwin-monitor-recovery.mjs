import assert from 'node:assert/strict';

// A failed accounting command must never let an unobserved workload continue.
// Retry one sample only while its entire known process group is stopped. Keep
// each ps/vm_stat command's existing five-second deadline; repeated failures,
// unsafe fresh samples, unknown detached children and excessive pauses fail closed.
export function recoverDarwinSample(error, {
  group, previousProcesses, recoveries, sample, stopReason,
  signal = (pid, name) => process.kill(pid, name), now = Date.now,
}) {
  assert.ok(Number.isInteger(group) && group > 0);
  if (error.code !== 'ETIMEDOUT' || recoveries.length >= 3 || !previousProcesses?.length
    || previousProcesses.some(p => p.group !== group)) throw error;
  const started = now(), recovery = { startedAt: new Date(started).toISOString(),
    error: error.message, recovered: false };
  recoveries.push(recovery);
  try {
    signal(-group, 'SIGSTOP');
    const fresh = sample();
    recovery.sample = fresh;
    if (fresh.processes.some(p => p.group !== group))
      throw new Error('Accounting recovery found a detached workload process');
    const reason = stopReason(fresh);
    if (reason) throw new Error(reason);
    if (now() - started > 12_000) throw new Error('Accounting recovery exceeded its paused deadline');
    signal(-group, 'SIGCONT');
    recovery.recovered = true;
    return fresh;
  } catch (failure) {
    recovery.failure = failure.message;
    // A stopped process cannot act on SIGTERM until continued. Kill instead of
    // resuming work whose current resource use could not be verified.
    try { signal(-group, 'SIGKILL'); }
    catch (cleanup) { if (cleanup.code !== 'ESRCH') recovery.cleanupError = cleanup.message; }
    throw failure;
  } finally { recovery.pausedMs = Math.max(0, now() - started); }
}
