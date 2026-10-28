// The Node server on a fresh, temporary database, for the end-to-end suite
// (test/playwright.config.ts starts it; PORT and HOST come from there).
import { spawn } from 'node:child_process';
import { mkdtempSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));
const work = mkdtempSync(join(tmpdir(), 'conduit-e2e-'));
const server = spawn(process.execPath, [join(root, 'dist/server/main.mjs')], {
  stdio: 'inherit', env: { ...process.env, DATABASE_PATH: join(work, 'conduit.db') },
});
const stop = () => server.kill('SIGTERM');
process.on('SIGTERM', stop);
process.on('SIGINT', stop);
server.on('exit', code => { rmSync(work, { recursive: true, force: true }); process.exit(code ?? 0); });
