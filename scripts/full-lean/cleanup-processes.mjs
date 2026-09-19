// Parallel harness cleanup, never part of a Lean program's runtime semantics.
// Some upstream LSP drivers leave detached servers after failed/timed-out tests.
import { readdirSync, readFileSync } from 'node:fs';

export function cleanupTestProcesses(runId, finishedTests, signal = 'SIGTERM') {
  if (process.platform !== 'linux') return [];
  const stopped = [];
  const runMarker = `LASM_UPSTREAM_RUN_ID=${runId}`;
  for (const name of readdirSync('/proc')) {
    if (!/^\d+$/.test(name) || Number(name) === process.pid) continue;
    try {
      const environment = readFileSync(`/proc/${name}/environ`, 'utf8').split('\0');
      if (!environment.includes(runMarker)) continue;
      const test = environment.find(value => value.startsWith('LASM_UPSTREAM_TEST='))?.slice('LASM_UPSTREAM_TEST='.length);
      if (!test || finishedTests && !finishedTests.has(test)) continue;
      process.kill(Number(name), signal);
      stopped.push({ pid: Number(name), test, signal });
    } catch (error) {
      if (!['ENOENT', 'ESRCH', 'EACCES', 'EPERM'].includes(error.code)) throw error;
    }
  }
  return stopped;
}
