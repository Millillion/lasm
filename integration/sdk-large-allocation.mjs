// A sparse >4 GiB reservation checks allocator width; all touched pages and
// compiler descendants remain inside the ordinary memory/pressure guard.
import assert from 'node:assert/strict';
import { mkdirSync, existsSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { provisionSdk } from '../src/managed-sdk.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';

await ensureResourceGuard();
const output = resolve(process.argv[2]);
if (existsSync(output)) throw new Error('Preserve previous probe output');
mkdirSync(output, { recursive: true });
const sdk = await provisionSdk();
const source = resolve('integration/fixtures/sdk-large-allocation.c');
const flags = ['-O1', '-DNDEBUG', '-DEMMALLOC_NO_STD_EXPORTS', '-pthread',
  '-sMEMORY64=1', '-sMALLOC=mimalloc', '-sALLOW_MEMORY_GROWTH=1',
  '-sGROWABLE_ARRAYBUFFERS=1', '-sSTACK_OVERFLOW_CHECK=2', '-sPROXY_TO_PTHREAD=1',
  '-sPTHREAD_POOL_SIZE=2', '-sEXIT_RUNTIME=1', '-sINITIAL_MEMORY=67108864',
  '-sMAXIMUM_MEMORY=8589934592', '-sENVIRONMENT=node', '-Wno-experimental',
  '-Wno-pthreads-mem-growth'];
const rows = [];
for (const originalAllocator of [true, false]) {
  const entry = join(output, originalAllocator ? 'original.cjs' : 'repaired.cjs');
  sdk.execute('emcc', [source, ...(originalAllocator ? [join(sdk.prefix, 'emscripten/system/lib/emmalloc.c')] : []),
    ...flags, '-o', entry], { stdio: 'inherit', timeout: 900_000 });
  for (const mode of originalAllocator ? ['allocator'] : ['allocator', 'threads']) {
    const result = spawnSync(process.execPath, [entry, mode], { encoding: 'utf8', timeout: 30_000, maxBuffer: 1024 * 1024 });
    assert.ifError(result.error);
    const row = { originalAllocator, mode, code: result.status, signal: result.signal,
      stdout: result.stdout, stderr: result.stderr };
    rows.push(row);
    writeFileSync(join(output, 'results.json'), JSON.stringify({ rows }, null, 2) + '\n');
    console.log(JSON.stringify(row));
    if (originalAllocator) {
      assert.equal(row.code, 1); assert.match(row.stderr, /large != NULL/);
    } else {
      assert.equal(row.code, 0); assert.equal(row.stderr, '');
      assert.match(row.stdout, /checks passed\n$/);
    }
  }
}
writeFileSync(join(output, 'result.json'), JSON.stringify({ scope: 'Sparse memory64 allocator and pthread SDK regression controls',
  node: process.version, sdk: sdk.version, driverIdentity: sdk.driverIdentity, sourceSha256: await hashFile(source),
  originalAllocatorSha256: await hashFile(join(sdk.prefix, 'emscripten/system/lib/emmalloc.c')),
  rows, resourceReport: process.env.LASM_RESOURCE_REPORT }, null, 2) + '\n');
