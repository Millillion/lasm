// The thread behind src/elapsed-ticker.mjs.
import { workerData } from 'node:worker_threads';
import { writeSync } from 'node:fs';

const { label, intervalMs } = workerData, started = Date.now();
setInterval(() => {
  const s = Math.floor((Date.now() - started) / 1000);
  try { writeSync(2, `[lasm] ${label} — ${s < 60 ? `${s}s` : `${Math.floor(s / 60)}m ${s % 60}s`} elapsed\n`); } catch {}
}, intervalMs);
