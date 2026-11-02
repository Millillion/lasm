// Runs Folio's renderer on many Markdown documents at once (Batch.lean):
// the Lasm build (dist/batch/main.mjs, `npm run build:batch`) by default,
// or the native Lake build with FOLIO_BATCH=native (`lake build folio-batch`).
import { execFileSync } from 'node:child_process';
import { mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));

function command() {
  if (process.env.FOLIO_BATCH === 'native') return [join(root, '.lake', 'build', 'bin', 'folio-batch'), []];
  return [process.execPath, [join(root, 'dist', 'batch', 'main.mjs')]];
}

/** Renders each `{ markdown, unsafe }`; returns the HTML strings. */
export function renderAll(docs, { timeout = 600_000 } = {}) {
  const dir = mkdtempSync(join(tmpdir(), 'folio-batch-'));
  try {
    const input = docs.map(d => `${d.unsafe ? 'u' : 's'} ${[...d.markdown].length}\n${d.markdown}`).join('');
    writeFileSync(join(dir, 'in'), input);
    const [cmd, args] = command();
    execFileSync(cmd, [...args, join(dir, 'in'), join(dir, 'out')], { stdio: ['ignore', 'inherit', 'inherit'], timeout });
    const out = [...readFileSync(join(dir, 'out'), 'utf8')];
    const results = [];
    let i = 0;
    while (i < out.length) {
      let j = i;
      while (out[j] !== '\n') j++;
      const n = Number(out.slice(i, j).join(''));
      results.push(out.slice(j + 1, j + 1 + n).join(''));
      i = j + 1 + n;
    }
    if (results.length !== docs.length) throw new Error(`expected ${docs.length} results, got ${results.length}`);
    return results;
  } finally {
    rmSync(dir, { recursive: true, force: true });
  }
}
