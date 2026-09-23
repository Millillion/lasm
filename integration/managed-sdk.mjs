import assert from 'node:assert/strict';
import { mkdir, writeFile, readFile } from 'node:fs/promises';
import { join, resolve } from 'node:path';
import { execFileSync } from 'node:child_process';
import { provisionSdk } from '../src/managed-sdk.mjs';

const base = resolve(process.argv[2] ?? '.work/managed-sdk-acceptance');
await mkdir(base, { recursive: true });
const tools = await provisionSdk({ cache: join(base, 'cache') });
const source = join(base, 'hello.c'), entrypoint = join(base, 'hello.cjs');
await writeFile(source, '#include <stdio.h>\nint main(void) { puts("managed SDK application"); return 7; }\n');
// A new SDK state compiles libc with one worker. The standard macOS Intel
// runner exceeded three minutes on that cold build; retain the exact fixture
// and checks while allowing up to fifteen minutes for the compiler phase.
const compileStarted = performance.now();
tools.execute('emcc', [source, '-O1', '-sENVIRONMENT=node', '-o', entrypoint], { stdio: 'inherit', timeout: 900_000 });
const compileSeconds = (performance.now() - compileStarted) / 1000;
let result;
try { execFileSync(process.execPath, [entrypoint], { env: { ...tools.env, PATH: '' }, encoding: 'utf8', timeout: 30_000 }); }
catch (error) { result = error; }
assert.equal(result?.status, 7);
assert.equal(result.stdout.trim(), 'managed SDK application');
assert.equal(result.stderr.trim(), '');
assert.ok((await readFile(join(base, 'hello.wasm'))).length > 8);
const reused = await provisionSdk({ cache: join(base, 'cache') });
assert.equal(reused.cacheHit, true);
const report = { scope: 'Managed SDK C-to-Wasm smoke; full Lean application acceptance remains separate',
  recordedAt: new Date().toISOString(), platform: tools.platform, node: process.version,
  sdk: tools.version, identity: tools.identity, archive: tools.receipt.artifact,
  driverIdentity: tools.driverIdentity, runtimePatchesApplied: tools.runtimePatchesApplied,
  nativePrograms: tools.nativePrograms, python: tools.python.version, verifiedReuse: reused.cacheHit,
  output: result.stdout.trim(), exit: result.status, compileSeconds };
await writeFile(join(base, 'result.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
