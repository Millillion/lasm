// Maintainer experiment (robustness variant `runtime`, not a candidate): fetch
// the CI-rebuilt runtime handoff pinned in runtime-overlay.json, verify its
// SHA-256 and extract it for overlay-fix.mjs. Needs GH_TOKEN (draft release).
//   node fetch-runtime-overlay.mjs NEW_OUTPUT_DIR [PIN_FILE (default runtime-overlay.json)]
import assert from 'node:assert/strict';
import { readFileSync, mkdirSync, existsSync, mkdtempSync, rmSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { execFileSync } from 'node:child_process';
import { join, resolve } from 'node:path';
import { x as untar } from 'tar';

const [outputArg, pinName = 'runtime-overlay.json'] = process.argv.slice(2);
assert.match(pinName, /^runtime-overlay(-[a-z]+)?\.json$/);
assert.ok(outputArg, 'Supply NEW_OUTPUT_DIR');
const output = resolve(outputArg);
assert.ok(!existsSync(output), 'Use a new output directory');
const pin = JSON.parse(readFileSync(new URL(`./${pinName}`, import.meta.url), 'utf8'));
assert.equal(pin.repository, 'Millillion/lasm');
for (const value of [pin.release, pin.asset]) assert.match(value, /^[a-zA-Z0-9][a-zA-Z0-9._-]+$/);
const download = mkdtempSync(join(resolve('.work'), '.runtime-overlay-'));
try {
  execFileSync('gh', ['release', 'download', pin.release, '--repo', pin.repository, '--pattern', pin.asset, '--dir', download],
    { stdio: 'inherit', timeout: 300_000, windowsHide: true });
  const archive = join(download, pin.asset);
  assert.equal(createHash('sha256').update(readFileSync(archive)).digest('hex'), pin.sha256, 'Runtime handoff digest mismatch');
  mkdirSync(output);
  await untar({ file: archive, cwd: output, strict: true, preservePaths: false });
  console.log(JSON.stringify({ release: pin.release, sha256: pin.sha256, extracted: output }));
} finally { rmSync(download, { recursive: true, force: true }); }
