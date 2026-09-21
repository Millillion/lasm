// Maintainer-only Linux launcher build. Binaries ship with the npm package and
// generated apps; end users do not need Zig or a native build during execution.
import { readFileSync, writeFileSync, mkdirSync, renameSync, copyFileSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from './full-lean/resource-guard.mjs';

await ensureResourceGuard();
const root = fileURLToPath(new URL('../', import.meta.url));
const source = join(root, 'native/process-launcher.c');
const output = join(root, '.cache/native-host/process');
const zig = join(root, '.cache/zig-x86_64-linux-0.16.0/zig');
const env = { ...process.env, ZIG_GLOBAL_CACHE_DIR: join(root, '.cache/zig-global') };
const allowed = readFileSync('/proc/self/status', 'utf8').match(/^Cpus_allowed_list:\s*(.+)$/m)?.[1];
if (!allowed) throw new Error('Could not read the build CPU allowance');
const cpus = [];
for (const range of allowed.split(',')) {
  const [start, end = start] = range.split('-').map(Number);
  for (let cpu = start; cpu <= end && cpus.length < 2; cpu++) cpus.push(cpu);
  if (cpus.length === 2) break;
}
const run = args => execFileSync('taskset', ['--cpu-list', cpus.join(','), zig, ...args], {
  cwd: root, env, encoding: 'utf8', timeout: 180_000 });
if (run(['version']).trim() !== '0.16.0') throw new Error('Expected pinned Zig 0.16.0');
mkdirSync(output, { recursive: true });
const hash = bytes => createHash('sha256').update(bytes).digest('hex');
const manifest = { protocol: 1, source: 'native/process-launcher.c', sourceSha256: hash(readFileSync(source)),
  compiler: 'Zig 0.16.0', files: {},
  validation: 'Cross-compilation is not execution validation. See repository evidence for tested architectures and libc implementations.' };
for (const [arch, cpu] of [['x64', 'x86_64'], ['arm64', 'aarch64']]) {
  for (const abi of ['gnu', 'musl']) {
    const name = `linux-${arch}-${abi}`, path = join(output, name);
    const target = `${cpu}-linux-${abi}${abi === 'gnu' ? '.2.17' : ''}`;
    const flags = ['cc', '-target', target, '-O2', '-Wall', '-Wextra', '-Werror',
      ...(abi === 'musl' ? ['-static'] : []), source, '-o', path + '.partial'];
    run(flags);
    renameSync(path + '.partial', path);
    const bytes = readFileSync(path);
    manifest.files[name] = { target, sha256: hash(bytes), bytes: bytes.length };
    console.log(`Built ${name}: ${bytes.length} bytes`);
  }
}
copyFileSync(source, join(output, 'process-launcher.c'));
writeFileSync(join(output, 'THIRD_PARTY_NOTICES.txt'),
  'Private Lasm Linux process launcher. The musl variants statically link musl and Zig compiler runtime support.\n\n' +
  '=== musl ===\n' + readFileSync(join(dirname(zig), 'lib/libc/musl/COPYRIGHT'), 'utf8') +
  '\n=== Zig compiler runtime ===\n' + readFileSync(join(dirname(zig), 'LICENSE'), 'utf8'));
writeFileSync(join(output, 'manifest.json'), JSON.stringify(manifest, null, 2) + '\n');
