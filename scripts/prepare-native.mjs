// Maintainer-only download of pinned, integrity-checked Node-API binaries.
// End-user installation and application execution never compile native code.
import { readFileSync, writeFileSync, mkdirSync, cpSync, existsSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { createHash } from 'node:crypto';
import { execFileSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../', import.meta.url));
const output = join(root, '.cache/native-host');
const lock = JSON.parse(readFileSync(join(root, 'package-lock.json')));
const names = ['koffi', ...['linux', 'darwin', 'win32'].flatMap(os => ['x64', 'arm64'].map(arch => `@koromix/koffi-${os}-${arch}`))];
const records = [];
for (const name of names) {
  const entry = lock.packages[`node_modules/${name}`];
  if (!entry?.integrity || entry.version !== '3.3.0' || !entry.resolved.startsWith('https://registry.npmjs.org/')) throw new Error(`Unpinned native dependency: ${name}`);
  const archive = join(root, '.cache', `${name.replaceAll('/', '-')}-${entry.version}.tgz`);
  if (!existsSync(archive)) {
    const response = await fetch(entry.resolved);
    if (!response.ok) throw new Error(`Download failed: ${response.status} ${name}`);
    writeFileSync(archive, Buffer.from(await response.arrayBuffer()));
  }
  const bytes = readFileSync(archive);
  const actual = 'sha512-' + createHash('sha512').update(bytes).digest('base64');
  if (actual !== entry.integrity) throw new Error(`Integrity mismatch: ${name}`);
  const destination = join(output, 'node_modules', name);
  mkdirSync(destination, { recursive: true });
  const paths = execFileSync('tar', ['-tzf', archive], { encoding: 'utf8' }).trim().split('\n');
  if (paths.some(path => !path.startsWith('package/') || path.split('/').includes('..'))) throw new Error('Unsafe package member');
  if (name === 'koffi') {
    execFileSync('tar', ['-xzf', archive, '--strip-components=1', '-C', destination,
      'package/index.cjs', 'package/src/koffi', 'package/package.json', 'package/LICENSE.txt']);
  } else execFileSync('tar', ['-xzf', archive, '--strip-components=1', '-C', destination]);
  records.push({ name, version: entry.version, integrity: entry.integrity, source: entry.resolved });
  console.log(`Prepared ${name} ${entry.version}`);
}
writeFileSync(join(output, 'manifest.json'), JSON.stringify({ nodeApi: 8, packages: records }, null, 2) + '\n');
await import('./build-process-launcher.mjs');
await import('./build-bun-stack.mjs');
