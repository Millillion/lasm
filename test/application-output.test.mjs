import assert from 'node:assert/strict';
import test from 'node:test';
import { mkdtempSync, writeFileSync, mkdirSync, rmSync, renameSync, readFileSync, realpathSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { execFileSync, spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { applicationHostFiles, writeApplicationEntrypoint } from '../src/application-output.mjs';
import { applicationPolicy } from '../src/application-policy.mjs';
import { isolatedImportFailures } from './helpers/isolated-import.mjs';

test('entrypoint resolves host/glue relative to deployment, independent of build and working directory', t => {
  const base = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-deployment-')));
  t.after(() => rmSync(base, { recursive: true, force: true }));
  const original = join(base, 'build'), moved = join(base, 'deploy space');
  writeApplicationEntrypoint(original);
  writeFileSync(join(original, 'build-info.json'), JSON.stringify({ applicationPolicy,
    linkRequirements: { mode: 'static', dynamic: [], cxxRuntime: [], moduleData: [], requiresModuleData: false } }));
  mkdirSync(join(original, 'host'));
  writeFileSync(join(original, 'host/application-signals.mjs'), 'export function prepareApplicationSignals() {}');
  writeFileSync(join(original, 'program.cjs'), `console.log(JSON.stringify({
    args: process.argv.slice(2), host: process.env.LASM_FULL_HOST_MODULE,
    app: process.env.LASM_FULL_APP_PATH, cwd: process.cwd(), threads: process.env.LEAN_NUM_THREADS
  }));`);
  renameSync(original, moved);
  const out = execFileSync(process.execPath, ['--max-old-space-size=64', join(moved, 'main.mjs'), 'hello', '--target', 'application-value'],
    { cwd: base, env: { ...process.env, LEAN_NUM_THREADS: '7' }, encoding: 'utf8' });
  const record = JSON.parse(out);
  assert.equal(record.cwd, base);
  assert.equal(record.threads, '7');
  assert.equal(fileURLToPath(record.host), join(moved, 'host/node-host.mjs'));
  assert.equal(record.app, join(moved, 'main.mjs'));
  assert.deepEqual(record.args, ['hello', '--target', 'application-value']);
  assert.ok(!readFileSync(join(moved, 'main.mjs'), 'utf8').includes(original));
});

test('the entrypoint is a Node executable module', t => {
  const base = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-entrypoint-')));
  t.after(() => rmSync(base, { recursive: true, force: true }));
  writeApplicationEntrypoint(base);
  assert.ok(readFileSync(join(base, 'main.mjs'), 'utf8').startsWith('#!/usr/bin/env node\n'));
  assert.deepEqual(JSON.parse(readFileSync(join(base, 'package.json'), 'utf8')), { private: true, type: 'module' });
});

test('stale or compiler-capable deployments fail before loading host code or the payload', t => {
  const base = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-deployment-policy-')));
  t.after(() => rmSync(base, { recursive: true, force: true }));
  writeApplicationEntrypoint(base);
  writeFileSync(join(base, 'program.cjs'), 'throw new Error("PAYLOAD EXECUTED");');
  for (const info of [{}, { applicationPolicy, linkRequirements: {
    mode: 'dynamic', dynamic: ['dlopen'], cxxRuntime: [], moduleData: [], requiresModuleData: true } }]) {
    writeFileSync(join(base, 'build-info.json'), JSON.stringify(info));
    const result = spawnSync(process.execPath, ['--max-old-space-size=64', join(base, 'main.mjs')], { encoding: 'utf8' });
    assert.equal(result.status, 1);
    assert.match(result.stderr, /Rebuild/);
    assert.doesNotMatch(result.stderr, /PAYLOAD EXECUTED|ERR_MODULE_NOT_FOUND/);
  }
});

for (const [name, support, message, native] of [
  ['Node version', { minimumNode: '999.0.0' }, /requires Node 999.0.0 or newer; you are running Node .*Install Node 24 or newer/],
  ['host', {}, undefined, ['linux-x64', 'linux-arm64', 'unsupported-other']],
  ['system library', { minimumGlibc: '999.0' }, /requires Linux with glibc 999.0 or newer; this system reports glibc .*supported Linux system/],
]) test(`incompatible deployment ${name} is rejected before loading host dependencies`, t => {
  if (name === 'system library' && process.platform !== 'linux') return t.skip('glibc is a Linux prerequisite');
  const base = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-platform-')));
  t.after(() => rmSync(base, { recursive: true, force: true }));
  writeApplicationEntrypoint(base, support);
  // A deployment without this host's native pieces (a target list that never includes it).
  const targets = native?.filter(target => target !== `${process.platform}-${process.arch}`);
  if (targets) {
    mkdirSync(join(base, 'host/native'), { recursive: true });
    writeFileSync(join(base, 'host/native/manifest.json'), JSON.stringify({ deployment: { target: 'node', targets } }));
  }
  const result = spawnSync(process.execPath, [join(base, 'main.mjs')], { encoding: 'utf8' });
  assert.equal(result.status, 1);
  assert.match(result.stderr, name === 'host' ? new RegExp(`includes native support for ${targets.join(', ')}; it is running on ${process.platform}-${process.arch}\\..*rebuild`) : message);
  assert.doesNotMatch(result.stderr, /ERR_MODULE_NOT_FOUND/);
});

test('a deployment that carries this host\'s native pieces runs on any Node from the minimum', t => {
  const base = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-platform-ok-')));
  t.after(() => rmSync(base, { recursive: true, force: true }));
  writeApplicationEntrypoint(base);
  assert.match(readFileSync(join(base, 'main.mjs'), 'utf8'), /const minimumNode = "24.0.0";\nconst minimumGlibc = "2.28";/);
  mkdirSync(join(base, 'host/native'), { recursive: true });
  writeFileSync(join(base, 'host/native/manifest.json'), JSON.stringify({ deployment: { target: 'node', targets: ['linux-x64', 'linux-arm64', `${process.platform}-${process.arch}`] } }));
  writeFileSync(join(base, 'host/application-signals.mjs'), 'export function prepareApplicationSignals() {}');
  writeFileSync(join(base, 'build-info.json'), JSON.stringify({ applicationPolicy,
    linkRequirements: { mode: 'static', dynamic: [], cxxRuntime: [], moduleData: [], requiresModuleData: false } }));
  writeFileSync(join(base, 'program.cjs'), 'console.log("started")');
  assert.equal(execFileSync(process.execPath, [join(base, 'main.mjs')], { encoding: 'utf8' }), 'started\n');
});

// Behavioural (docs/TESTING.md#test-quality-audit): the shipped host files alone,
// outside the checkout, loaded by Node's module loader.
test('all full-runtime host support files load from an isolated copy', () => {
  const names = new Set(applicationHostFiles);
  assert.equal(names.size, applicationHostFiles.length);
  assert.deepEqual(isolatedImportFailures(applicationHostFiles), []);
  // The probe notices a missing dependency (guards the guard).
  assert.match(isolatedImportFailures(applicationHostFiles.filter(name => name !== 'handle-table.mjs')).join('\n'), /handle-table\.mjs/);
});

test('retained callable and frozen compiler outputs include transitive host dependencies', () => {
  const callableSource = readFileSync(new URL('../src/build.mjs', import.meta.url), 'utf8');
  const callable = new Set([...callableSource.matchAll(/copyFileSync\(join\(root, 'src\/([^']+)'\)/g)].map(match => match[1]));
  const stampSource = readFileSync(new URL('../src/main.mjs', import.meta.url), 'utf8');
  const stamp = new Set([...stampSource.match(/const files = \[([^;]+)\];/)[1].matchAll(/'([^']+)'/g)].map(match => match[1]));
  const inventories = [callable, ...['freeze-build.mjs', 'derive-host-files.mjs'].map(name => {
    const text = readFileSync(new URL('../scripts/full-lean/' + name, import.meta.url), 'utf8');
    const list = text.match(/(?:for \(const name of|const hostFiles =) \[('node-host\.mjs'[^\]]+)\]/)[1];
    return new Set([...list.matchAll(/'([^']+)'/g)].map(match => match[1]));
  })];
  for (const names of inventories) for (const file of names) {
    const source = readFileSync(new URL('../src/' + file, import.meta.url), 'utf8');
    for (const [, dependency] of source.matchAll(/(?:from\s*|import\s*\(|require\s*\()\s*['"]\.\/([^'"]+\.(?:mjs|cjs))['"]/g))
      assert.ok(names.has(dependency) || dependency.startsWith('native/'), `${file} needs ${dependency}`);
  }
  for (const name of ['linux-memory.mjs', 'native-signals.mjs', 'native-file-message.mjs'])
    assert.ok(stamp.has(name), 'Legacy main cache must notice a missing ' + name);
});
