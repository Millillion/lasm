// Apply only the reviewed pinned SDK repairs. Refuse unrelated source drift.
import { readFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';

export function patchSdk(sdk) {
  const directory = join(resolve(sdk), 'upstream/emscripten');
  const version = readFileSync(join(directory, 'emscripten-version.txt'), 'utf8').trim().replaceAll('"', '');
  if (version !== '6.0.9') throw new Error(`SDK patch requires Emscripten 6.0.9, found ${version}`);
  const patch = readFileSync(new URL('patches/emscripten-6.0.9-memory64.patch', import.meta.url));
  const check = reverse => spawnSync('patch', ['--force', '--dry-run', reverse ? '--reverse' : '--forward', '-p1'],
    { cwd: directory, input: patch });
  if (check(true).status !== 0) {
    const forward = check(false);
    if (forward.status !== 0) throw new Error(`SDK source does not match the recorded patch:\n${forward.stdout}\n${forward.stderr}`);
    execFileSync('patch', ['--batch', '--forward', '-p1'], { cwd: directory, input: patch });
  }
  return createHash('sha256').update(patch).digest('hex');
}
