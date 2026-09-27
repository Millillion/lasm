// Copied unchanged into the disposable restricted-token tree, with only fixture paths.
import assert from 'node:assert/strict';
import { readFileSync, writeFileSync, unlinkSync, mkdirSync, rmdirSync } from 'node:fs';
import { execFileSync } from 'node:child_process';
import { Worker } from 'node:worker_threads';
import { connect } from 'node:net';
import { join } from 'node:path';

const [configFile, phase] = process.argv.slice(2), config = JSON.parse(readFileSync(configFile));
const checks = [], options = { encoding: 'utf8', timeout: 15000 };
async function check(name, fn) {
  console.error('Starting control: ' + name);
  try { await fn(); checks.push({ name, passed: true }); }
  catch (error) { checks.push({ name, passed: false, error: error.stack, stdout: error.stdout, stderr: error.stderr }); }
  console.error(JSON.stringify(checks.at(-1)));
}
await check('native architecture', () => assert.equal(process.arch, config.architecture));
await check('isolated default user cache', () => assert.equal(process.env.LOCALAPPDATA, config.localAppData));
await check('read-only fixture', () => assert.equal(readFileSync(config.readonly, 'utf8'), 'read-only fixture\n'));
for (const path of config.denied) await check('deny file: ' + path, () =>
  assert.throws(() => readFileSync(path), e => ['EACCES', 'EPERM'].includes(e.code), path));
await check('deny writing read-only fixture', () =>
  assert.throws(() => writeFileSync(config.readonly, 'changed'), e => ['EACCES', 'EPERM'].includes(e.code)));
await check('Unicode filesystem roundtrip', () => {
  writeFileSync('write λ.txt', 'roundtrip 日本語');
  assert.equal(readFileSync('write λ.txt', 'utf8'), 'roundtrip 日本語'); unlinkSync('write λ.txt');
  mkdirSync('directory λ'); rmdirSync('directory λ');
});
await check('Wasm JIT', async () => {
  const wasm = await WebAssembly.instantiate(Uint8Array.from([0,97,115,109,1,0,0,0,1,5,1,96,0,1,127,3,2,1,0,7,10,1,6,97,110,115,119,101,114,0,0,10,6,1,4,0,65,42,11]));
  assert.equal(wasm.instance.exports.answer(), 42);
});
await check('worker threads', async () => {
  const worker = new Worker('require("node:worker_threads").parentPort.postMessage(42)', { eval: true });
  let timeout;
  try { assert.equal(await new Promise((resolve, reject) => {
    timeout = setTimeout(() => reject(Error('Worker did not reply within 15 seconds')), 15000);
    worker.once('message', resolve); worker.once('error', reject);
    worker.once('exit', code => reject(Error('Worker exited before replying: ' + code)));
  }), 42); }
  finally { clearTimeout(timeout); await worker.terminate(); }
});
await check('child process pipes', () => assert.equal(execFileSync(process.execPath,
  ['-e', 'process.stdout.write("child pipes work")'], options), 'child pipes work'));
await check('child inherits default cache root', () => assert.equal(execFileSync(process.execPath,
  ['-e', 'process.stdout.write(process.env.LOCALAPPDATA)'], options), process.env.LOCALAPPDATA));
await check('child inherits every file restriction', () => execFileSync(process.execPath, ['-e',
  'for(const p of JSON.parse(process.argv[1]))require("node:assert/strict").throws(()=>require("node:fs").readFileSync(p),e=>["EACCES","EPERM"].includes(e.code),p)',
  JSON.stringify(config.denied)], options));
await check('stock npm CLI', () => assert.equal(execFileSync(process.execPath,
  [join(config.nodeDirectory, 'node_modules/npm/bin/npm-cli.js'), '--version'], options).trim(), '11.19.1'));
for (const name of ['npm.cmd', 'npx.cmd']) await check('stock ' + name, () => {
  const command = '""' + join(config.nodeDirectory, name) + '" --version"';
  const version = execFileSync(process.env.ComSpec, ['/d', '/s', '/c', command],
    { ...options, windowsVerbatimArguments: true }).trim();
  assert.equal(version, '11.19.1');
});
await check(phase + ' network capability', async () => {
  if (phase === 'offline') {
    await new Promise((resolve, reject) => {
      const socket = connect({ host: '1.1.1.1', port: 443 });
      socket.once('error', e => { try { assert.ok(['EACCES', 'EPERM'].includes(e.code), e.code); resolve(); } catch (e) { reject(e); } });
      socket.once('connect', () => { socket.destroy(); reject(Error('Offline capability allowed TCP')); });
      socket.setTimeout(10000, () => { socket.destroy(); reject(Error('Timeout does not prove network isolation')); });
    });
  } else {
    const response = await fetch('https://registry.npmjs.org/npm/latest', { signal: AbortSignal.timeout(20000) });
    assert.equal(response.status, 200); assert.equal((await response.json()).name, 'npm');
  }
});
const passed = checks.every(c => c.passed);
console.log(JSON.stringify({ passed, node: process.version, architecture: process.arch,
  localAppData: process.env.LOCALAPPDATA, phase, checks }));
process.exitCode = passed ? 0 : 1;
