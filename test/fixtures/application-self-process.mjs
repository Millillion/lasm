import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, realpathSync, writeFileSync, rmSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createNodeRuntimeHost, numbers } from '../../src/node-host.mjs';
import { writeApplicationEntrypoint } from '../../src/application-output.mjs';

const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-self-λ ')));
const nested = join(directory, 'nested'); mkdirSync(nested);
const entry = join(directory, 'main.mjs');
writeApplicationEntrypoint(directory, process.versions.deno ? 'deno' : process.versions.bun ? 'bun' : 'node');
writeFileSync(join(directory, 'program.cjs'), `const {writeFileSync}=require('node:fs');
writeFileSync(1, JSON.stringify({args:process.argv.slice(2), cwd:process.cwd(),
  value:process.env.LASM_CHILD_VALUE, path:process.env.PATH, inherited:process.env.LASM_PARENT_ONLY,
  privateEnvironment:process.env.LASM_DENO_CHILD_ENV, shimFlag:process.env.DENO_DISABLE_NODE_SHIM,
  pid:process.pid, engine:process.versions.deno?'deno':process.versions.bun?'bun':'node'})+'\\n');
writeFileSync(2, 'child error λ\\n'); process.exitCode=7;`);
const prefix = process.versions.deno ? ['run', '--no-config', '-A'] : [];
const host = createNodeRuntimeHost({ cwd: directory, appPath: entry,
  applicationCommand: { executable: process.execPath, arguments: prefix } });
const str = value => { const bytes = Buffer.from(value); return Buffer.concat([numbers(bytes.length), bytes]); };
process.env.LASM_PARENT_ONLY = 'must not leak';
try {
 for (const shimFlag of [undefined, '0']) {
  const args = ['child arg', '', '--target', 'λ 日本語'];
  const environment = [['LASM_CHILD_VALUE', 'value λ'], ['PATH', ''], ...(shimFlag === undefined ? []
    : [['DENO_DISABLE_NODE_SHIM', shimFlag], ['LASM_DENO_CHILD_ENV', 'original transport value']])];
  const spawned = await host.request(80, 0, 0n, Buffer.concat([
    numbers(2, 0, 0, 0, 0, args.length, environment.length, 1), str(entry), ...args.map(str), str('nested'),
    ...environment.flatMap(([key, value]) => [str(key), numbers(1), str(value)]),
  ]));
  assert.equal(spawned.error, false);
  const [id, pid, stdin, stdout, stderr] = Array.from({ length: 5 }, (_, i) => Number(spawned.bytes.readBigUInt64LE(i * 8)));
  assert.equal(stdin, 0);
  const readAll = async fd => {
    const chunks = [];
    for (;;) {
      const read = await host.request(2, fd, 4096n, Buffer.alloc(0));
      assert.equal(read.error, false);
      if (!read.bytes.length) break;
      chunks.push(read.bytes);
    }
    return Buffer.concat(chunks).toString();
  };
  const [out, err, waited] = await Promise.all([readAll(stdout), readAll(stderr), host.request(82, id, 0n, Buffer.alloc(0))]);
  assert.equal(waited.error, false); assert.equal(waited.bytes.readBigUInt64LE(), 7n);
  assert.equal(err, 'child error λ\n');
  assert.deepEqual(JSON.parse(out), { args, cwd: nested, value: 'value λ', path: '', pid,
    ...(shimFlag === undefined ? {} : { shimFlag, privateEnvironment: 'original transport value' }),
    engine: process.versions.deno ? 'deno' : process.versions.bun ? 'bun' : 'node' });
  for (const handle of [id, stdout, stderr]) await host.releaseAsync(handle);
 }
  console.log('self launch preserves engine, empty PATH, explicit environment, cwd, pipes, arguments and PID');
} finally { host.close(); rmSync(directory, { recursive: true, force: true }); }
