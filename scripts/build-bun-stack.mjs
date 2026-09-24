// Maintainer-only build. Applications carry these helpers and never compile
// native code on the developer's or deployment machine.
import { readFileSync, writeFileSync, mkdirSync, renameSync, copyFileSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from './full-lean/resource-guard.mjs';

await ensureResourceGuard();
const native = process.argv.length === 3 && process.argv[2] === '--native';
if (process.argv.length !== (native ? 3 : 2)) throw new Error('Usage: build-bun-stack.mjs [--native]');
if (process.platform !== 'linux' || !['x64', 'arm64'].includes(process.arch)) throw new Error('Bun stack helper build currently requires Linux x64/ARM64');
const root = fileURLToPath(new URL('../', import.meta.url));
const source = join(root, 'native/bun-stack-reservation.c');
const output = join(root, '.cache/native-host/bun-stack');
const zig = join(root, '.cache/zig-x86_64-linux-0.16.0/zig');
const env = { ...process.env, ZIG_GLOBAL_CACHE_DIR: join(root, '.cache/zig-global') };
const allowed = readFileSync('/proc/self/status', 'utf8').match(/^Cpus_allowed_list:\s*(.+)$/m)?.[1];
if (!allowed) throw new Error('Could not read the build CPU allowance');
const cpu = allowed.split(',')[0].split('-')[0];
const run = args => execFileSync('taskset', ['--cpu-list', cpu, zig, ...args], {
  cwd: root, env, encoding: 'utf8', timeout: 180_000 });
const cc = args => execFileSync('cc', args, { cwd: root, env, encoding: 'utf8', timeout: 180_000 });
if (!native && run(['version']).trim() !== '0.16.0') throw new Error('Expected pinned Zig 0.16.0');
mkdirSync(output, { recursive: true });
const hash = bytes => createHash('sha256').update(bytes).digest('hex');
const manifest = { protocol: 1, source: 'native/bun-stack-reservation.c', sourceSha256: hash(readFileSync(source)),
  compiler: native ? cc(['--version']).split('\n')[0] : 'Zig 0.16.0', files: {},
  validation: native ? 'Native source-control helper; separate from shipped cross-compiled binaries.' : 'Cross-compilation is not native execution validation.' };
const architectures = native ? [[process.arch, process.arch === 'x64' ? 'x86_64' : 'aarch64']]
  : [['x64', 'x86_64'], ['arm64', 'aarch64']];
const abis = native ? [process.report.getReport().header.glibcVersionRuntime ? 'gnu' : 'musl'] : ['gnu', 'musl'];
for (const [arch, cpu] of architectures) {
  for (const abi of abis) {
    const name = `linux-${arch}-${abi}.so`, path = join(output, name);
    const target = `${cpu}-linux-${abi}${abi === 'gnu' ? '.2.17' : ''}`;
    const flags = ['-shared', '-fPIC', '-O2', '-Wall', '-Wextra', '-Werror', source, '-pthread', '-ldl', '-o', path + '.partial'];
    if (native) cc(flags); else run(['cc', '-target', target, ...flags]);
    renameSync(path + '.partial', path);
    const bytes = readFileSync(path);
    manifest.files[name] = { target, sha256: hash(bytes), bytes: bytes.length };
    console.log(`Built ${name}: ${bytes.length} bytes`);
  }
}
copyFileSync(source, join(output, 'bun-stack-reservation.c'));
writeFileSync(join(output, 'THIRD_PARTY_NOTICES.txt'), 'Private Lasm Bun pthread stack reservation helper.\n\n'
  + (native ? 'Native source-control build only; not a release-distribution artifact.\n'
    : '=== musl ===\n' + readFileSync(join(dirname(zig), 'lib/libc/musl/COPYRIGHT'), 'utf8')
      + '\n=== Zig compiler runtime ===\n' + readFileSync(join(dirname(zig), 'LICENSE'), 'utf8')));
writeFileSync(join(output, 'manifest.json'), JSON.stringify(manifest, null, 2) + '\n');
