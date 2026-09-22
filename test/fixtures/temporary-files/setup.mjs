import { mkdirSync, writeFileSync, symlinkSync, chmodSync } from 'node:fs';
import { join } from 'node:path';

export function setupTemporaryPaths(directory) {
  for (const name of ['plain', 'physical/nested', 'physical/temporary', 'temporary', 'guest/relative', 'denied'])
    mkdirSync(join(directory, name), { recursive: true });
  symlinkSync('physical/nested', join(directory, 'link'), 'dir');
  writeFileSync(join(directory, 'file'), 'not a directory');
  chmodSync(join(directory, 'denied'), 0o000);
}

export function temporaryCases(directory) {
  return [
    { name: 'absolute', env: { TMPDIR: join(directory, 'plain') } },
    { name: 'symlink-parent', env: { TMPDIR: directory + '/link/../temporary' } },
    { name: 'trailing-separators', env: { TMPDIR: directory + '/plain///' } },
    { name: 'relative', env: { TMPDIR: 'relative//./' } },
    { name: 'empty-first-variable', env: { TMPDIR: '', TMP: join(directory, 'plain') } },
    { name: 'empty-second-variable', env: { TMP: '', TEMP: join(directory, 'plain') } },
    { name: 'tempdir-fallback', env: { TEMPDIR: join(directory, 'plain') } },
    { name: 'missing-directory', env: { TMPDIR: join(directory, 'missing') } },
    { name: 'not-a-directory', env: { TMPDIR: join(directory, 'file') } },
    { name: 'permission-denied', env: { TMPDIR: join(directory, 'denied') } },
    { name: 'directory-buffer-limit', env: { TMPDIR: 'x'.repeat(4096) } },
  ];
}

export function temporaryEnvironment(values) {
  const env = { ...process.env };
  for (const name of ['TMPDIR', 'TMP', 'TEMP', 'TEMPDIR']) delete env[name];
  return { ...env, ...values };
}
