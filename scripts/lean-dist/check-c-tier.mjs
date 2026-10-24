#!/usr/bin/env node
// Native check of the C tier: extracts the binaries and C tier archives into one
// prefix and, with Lasm's own compiler environment (src/application-sources.mjs),
//  - requires `cc` on PATH to be Lean's clang from the prefix;
//  - compiles C that uses the C library, POSIX or Windows APIs and compiler
//    intrinsics, and requires every header it read to come from the prefix
//    (or, on macOS, from the SDK);
//  - archives the objects with Lean's llvm-ar, links a shared library and an
//    executable with Lean's linker and runs the executable (recorded; Linux
//    linking reads the C runtime start files of the system, see the report).
//
//   node scripts/lean-dist/check-c-tier.mjs --tiers <dir> --work <dir> [--platform linux-x64] [--report file]
import assert from 'node:assert/strict';
import { createReadStream, readFileSync, realpathSync } from 'node:fs';
import { readdir, mkdir, writeFile, rm, link, symlink, readlink, copyFile } from 'node:fs/promises';
import { existsSync } from 'node:fs';
import { join, resolve, delimiter } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { pipeline } from 'node:stream/promises';
import { createZstdDecompress } from 'node:zlib';
import { parseArgs } from 'node:util';
import { x as extractTar } from 'tar';
import { cCompilerEnvironment, macosSdk } from '../../src/application-sources.mjs';

const { values: options } = parseArgs({ options: {
  tiers: { type: 'string' }, work: { type: 'string' }, report: { type: 'string' },
  platform: { type: 'string', default: `${process.platform}-${process.arch}` },
} });
for (const name of ['tiers', 'work']) if (!options[name]) throw new Error(`--${name} is required`);
const tiers = resolve(options.tiers), work = resolve(options.work), platform = options.platform;
const windows = platform.startsWith('win32'), darwin = platform.startsWith('darwin');
const report = JSON.parse(readFileSync(join(tiers, `report-${platform}.json`), 'utf8'));
const archive = piece => report.archives.find(item => item.piece === piece && item.written) ?? assert.fail(`No ${piece} archive`);
const c = archive('c');
const prefix = join(work, 'prefix');
await rm(work, { recursive: true, force: true });
// Like Lasm's cache: each archive is extracted on its own (symlinks last), then
// the prefix is assembled from both with hard links.
async function linkTree(from, to) {
  await mkdir(to, { recursive: true });
  for (const entry of await readdir(from, { withFileTypes: true })) {
    const source = join(from, entry.name), destination = join(to, entry.name);
    if (entry.isDirectory()) await linkTree(source, destination);
    else if (entry.isSymbolicLink()) await symlink(await readlink(source), destination);
    else await link(source, destination);
  }
}
for (const item of [archive('bin'), c]) {
  const file = join(tiers, item.name), directory = join(work, item.piece);
  const hash = createHash('sha256');
  for await (const chunk of createReadStream(file)) hash.update(chunk);
  assert.equal(hash.digest('hex'), item.sha256, `${item.name} checksum`);
  await mkdir(directory, { recursive: true });
  const links = [];
  await pipeline(createReadStream(file), createZstdDecompress(), extractTar({ cwd: directory, strip: 1, strict: true, preservePaths: false, preserveOwner: false,
    filter: (name, entry) => entry.type === 'SymbolicLink' ? (links.push([name.split('/').slice(1).join('/'), entry.linkpath]), false) : true }));
  for (const [name, target] of links) await symlink(target, join(directory, ...name.split('/')));
  await linkTree(directory, prefix);
}
// macOS: the C tier leaves out Apple's libSystem.tbd; Lasm's prefix takes the user's
// SDK copy (src/managed-lean.mjs assembleLeanPrefix), as done here.
if (darwin) {
  assert.ok(!existsSync(join(prefix, 'lib/libc/libSystem.tbd')), 'The C tier must not carry Apple\'s libSystem.tbd');
  const sdk = macosSdk();
  assert.ok(sdk, 'The macOS check needs the Command Line Tools SDK');
  await copyFile(join(sdk, 'usr/lib/libSystem.tbd'), join(prefix, 'lib/libc/libSystem.tbd'));
}
const result = { schema: 1, platform, archive: c.name, bytes: c.bytes, fileBytes: c.fileBytes, node: process.versions.node, checks: [] };
const env = { ...process.env };
for (const key of Object.keys(env)) if (windows && key.toUpperCase() === 'PATH') delete env[key];
env.PATH = [join(prefix, 'bin'), process.env.PATH ?? process.env.Path].filter(Boolean).join(delimiter);
Object.assign(env, cCompilerEnvironment({ prefix, cCompiler: { multiarch: c.multiarch ?? null } }, env, { platform: process.platform }));
const run = (program, args, cwd = work) => {
  const outcome = spawnSync(program, args, { cwd, env, encoding: 'utf8', timeout: 600_000, windowsHide: true, shell: false });
  if (outcome.error) throw outcome.error;
  return outcome;
};
const ok = (outcome, what) => { assert.equal(outcome.status, 0, `${what} failed:\n${outcome.stdout}\n${outcome.stderr}`); return outcome.stdout; };

// 1. `cc` is Lean's clang from this prefix.
const real = path => realpathSync(path).toLowerCase();
const resourceDirectory = ok(run('cc', ['-print-resource-dir']), 'cc -print-resource-dir').trim();
assert.ok(real(resourceDirectory).startsWith(real(prefix)), `cc is not the prefix clang (${resourceDirectory})`);
result.checks.push({ check: 'cc is Lean\'s clang', version: ok(run('cc', ['--version']), 'cc --version').split(/\r?\n/)[0] });

// 2. Compile with the C library, OS APIs and intrinsics; every header from the prefix or SDK.
const source = `#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <errno.h>
#include <stdint.h>
#include <stdatomic.h>
#include <limits.h>
${windows ? '#include <windows.h>\n#include <io.h>' : '#include <unistd.h>\n#include <pthread.h>\n#include <sys/stat.h>\n#include <dlfcn.h>'}
#if defined(__x86_64__)
#include <immintrin.h>
static int lanes(void) { __m128i x = _mm_set1_epi32(3); return _mm_cvtsi128_si32(x); }
#elif defined(__aarch64__)
#include <arm_neon.h>
static int lanes(void) { int32x4_t x = vdupq_n_s32(3); return vgetq_lane_s32(x, 0); }
#endif
int lasm_c_tier(int n) { char buffer[64]; snprintf(buffer, sizeof buffer, "%d", n); return (int)strlen(buffer) + lanes(); }
int main(void) {
  atomic_int counter = 0; atomic_fetch_add(&counter, 2);
  printf("%d %.3f %d %d\\n", lasm_c_tier(1234), sqrt(2.0), (int)atomic_load(&counter), ${windows ? '(int)(GetTickCount64() > 0)' : '(int)(getpid() > 0)'});
  return 0;
}
`;
await mkdir(work, { recursive: true });
await writeFile(join(work, 'probe.c'), source);
ok(run('cc', ['-c', 'probe.c', '-o', 'probe.o', '-O2', '-fPIC', '-MD', '-MF', 'probe.d']), 'compile');
const headers = readFileSync(join(work, 'probe.d'), 'utf8').replace(/\\\r?\n/g, ' ').split(/\s+/).slice(2).filter(path => /\.h$/.test(path));
const sdk = env.SDKROOT ? real(env.SDKROOT) : null;
const own = path => { const r = real(resolve(work, path)); return r.startsWith(real(prefix)) || !!(sdk && r.startsWith(sdk)); };
// The C library headers come before clang's in the search path, so a header such
// as limits.h may continue (#include_next) into a system copy of the same name,
// which its include guard then leaves empty. Any other header must be ours.
const ownNames = new Set(headers.filter(own).map(path => path.split(/[\\/]/).pop()));
const foreign = headers.filter(path => !own(path) && !ownNames.has(path.split(/[\\/]/).pop()));
assert.deepEqual(foreign, [], 'Headers read from outside the prefix');
result.systemContinuations = headers.filter(path => !own(path));
result.checks.push({ check: 'compile with C library, OS and intrinsic headers from the prefix' + (sdk ? ' and the macOS SDK' : ''), headers: headers.length });

// 3. Static archive with Lean's llvm-ar (as Lake builds extern_lib).
ok(run('llvm-ar', ['rcs', windows ? 'probe.lib' : 'libprobe.a', 'probe.o']), 'llvm-ar');
result.checks.push({ check: 'static archive with llvm-ar' });

// 4. Native links (recorded; precompiled modules and build-time tactic libraries link shared libraries).
const shared = run('cc', ['-shared', '-o', windows ? 'probe.dll' : darwin ? 'libprobe.dylib' : 'libprobe.so', 'probe.o', ...(windows ? [] : ['-lm'])]);
result.checks.push({ check: 'link a shared library', status: shared.status, stderr: shared.stderr.split(/\r?\n/).slice(-5).join('\n') });
const linked = run('cc', ['-o', windows ? 'probe.exe' : 'probe', 'probe.o', ...(windows ? [] : ['-lm', '-lpthread'])]);
const executed = linked.status === 0 ? run(join(work, windows ? 'probe.exe' : 'probe'), []) : null;
result.checks.push({ check: 'link and run an executable', status: linked.status, stderr: linked.stderr.split(/\r?\n/).slice(-5).join('\n'),
  output: executed?.stdout.trim(), exit: executed?.status });
if (executed) assert.equal(executed.stdout.trim(), '7 1.414 2 1');
// 5. macOS: Lean's own link flags (LEANC_INTERNAL_LINKER_FLAGS: --sysroot ROOT -L ROOT/lib
// -L ROOT/lib/libc -fuse-ld=lld), as Lake links precompiled modules, with the SDK's libSystem.
if (darwin) {
  const leanLinked = run('cc', ['-shared', '--sysroot', prefix, '-L', join(prefix, 'lib'), '-L', join(prefix, 'lib/libc'), '-fuse-ld=lld',
    '-o', 'libprobe-lean.dylib', 'probe.o']);
  ok(leanLinked, 'link with Lean\'s linker flags and the SDK libSystem');
  result.checks.push({ check: 'link with Lean\'s linker flags against the user SDK\'s libSystem.tbd' });
}
result.passed = true;
if (options.report) await writeFile(options.report, JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result, null, 2));
