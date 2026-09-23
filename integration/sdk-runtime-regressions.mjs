// Parallel driver for unchanged pinned Emscripten allocator/thread fixtures.
// Match their original assertion and expected-output checks in both widths.
import assert from 'node:assert/strict';
import { mkdirSync, existsSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join, basename } from 'node:path';
import { spawnSync } from 'node:child_process';
import { provisionSdk } from '../src/managed-sdk.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';

await ensureResourceGuard();
const output = resolve(process.argv[2]);
if (existsSync(output)) throw new Error('Preserve previous regression output');
mkdirSync(output, { recursive: true });
const sdk = await provisionSdk();
const upstream = join(sdk.prefix, 'emscripten/test');
const cases = [
  { source: 'core/test_emmalloc.c', malloc: 'none', flags: ['-fno-builtin',
      join(sdk.driver, 'system/lib/libc/sbrk.c'), join(sdk.driver, 'system/lib/emmalloc.c')] },
  { source: 'core/test_emmalloc_memalign_corruption.c', malloc: 'emmalloc-debug' },
  { source: 'other/test_emmalloc_high_align.c', malloc: 'emmalloc-debug' },
  { source: 'other/test_pthread_self_join_detach.c', malloc: 'mimalloc', thread: true },
  { source: 'other/test_pthread_self_join_detach.c', malloc: 'mimalloc', thread: true, proxy: true },
  { source: 'pthread/test_pthread_create_pthread.c', malloc: 'mimalloc', thread: true, expected: 'done result=1\n' },
  { source: 'pthread/test_pthread_create_pthread.c', malloc: 'mimalloc', thread: true, proxy: true, expected: 'done result=1\n' },
];
const rows = [];
for (const width of [32, 64]) {
  for (const test of cases) {
    const source = join(upstream, test.source), sourceSha256 = await hashFile(source);
    const expectedFile = test.expected ? undefined : source.replace(/\.c$/, '.out');
    const expected = test.expected ?? readFileSync(expectedFile, 'utf8');
    const entry = join(output, `${width}-${test.proxy ? 'proxy-' : ''}${basename(source)}.cjs`);
    sdk.execute('emcc', [source, '-O1', '-sASSERTIONS=1', `-sMEMORY64=${width === 64 ? 1 : 0}`,
      `-sMALLOC=${test.malloc}`, '-sALLOW_MEMORY_GROWTH=1', '-sEXIT_RUNTIME=1',
      '-sINITIAL_MEMORY=67108864', '-sMAXIMUM_MEMORY=268435456', '-sENVIRONMENT=node',
      ...(test.thread ? ['-pthread', '-sPTHREAD_POOL_SIZE=4', '-Wno-pthreads-mem-growth'] : []),
      ...(test.proxy ? ['-sPROXY_TO_PTHREAD=1'] : []), ...(test.flags ?? []), '-o', entry],
    { stdio: 'inherit', timeout: 900_000 });
    const actual = spawnSync(process.execPath, [entry], { encoding: 'utf8', timeout: 60_000, maxBuffer: 1024 * 1024 });
    assert.ifError(actual.error);
    const row = { width, source: test.source, proxy: !!test.proxy, sourceSha256,
      expectedSha256: expectedFile ? await hashFile(expectedFile) : undefined,
      code: actual.status, signal: actual.signal, stdout: actual.stdout, stderr: actual.stderr };
    rows.push(row);
    writeFileSync(join(output, 'results.json'), JSON.stringify({ rows }, null, 2) + '\n');
    assert.equal(row.code, 0, JSON.stringify(row)); assert.equal(row.stderr, '');
    assert.ok(row.stdout.includes(expected), JSON.stringify({ row, expected }));
    assert.equal(await hashFile(source), sourceSha256);
    console.log(JSON.stringify({ width, source: test.source, proxy: !!test.proxy, status: 'passed' }));
  }
}
writeFileSync(join(output, 'result.json'), JSON.stringify({ scope: 'Fourteen unchanged pinned SDK allocator and thread controls with original assertions and output markers',
  node: process.version, sdk: sdk.version, driverIdentity: sdk.driverIdentity, rows,
  adaptation: 'External driver selects memory width, one build worker, 256 MiB module limit, and Node execution; no source/assertion/output changes.',
  resourceReport: process.env.LASM_RESOURCE_REPORT }, null, 2) + '\n');
