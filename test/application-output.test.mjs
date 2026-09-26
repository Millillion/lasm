import assert from 'node:assert/strict';
import test from 'node:test';
import { mkdtempSync, writeFileSync, mkdirSync, rmSync, renameSync, readFileSync, realpathSync, copyFileSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { execFileSync, spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { applicationEntrypoint, applicationHostFiles, writeApplicationEntrypoint } from '../src/application-output.mjs';

test('entrypoint resolves host/glue relative to deployment, independent of build and working directory', t => {
  const base = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-deployment-')));
  t.after(() => rmSync(base, { recursive: true, force: true }));
  const original = join(base, 'build'), moved = join(base, 'deploy space');
  writeApplicationEntrypoint(original, 'node');
  mkdirSync(join(original, 'host'));
  writeFileSync(join(original, 'host/application-signals.mjs'), 'export function prepareApplicationSignals() {}');
  copyFileSync(new URL('../src/application-metadata-runtime.mjs', import.meta.url), join(original, 'host/application-metadata-runtime.mjs'));
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

test('wrong engines fail before executing the application payload', t => {
  const base = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-target-')));
  t.after(() => rmSync(base, { recursive: true, force: true }));
  writeApplicationEntrypoint(base, 'bun');
  writeFileSync(join(base, 'program.cjs'), 'throw new Error("PAYLOAD EXECUTED");');
  const result = spawnSync(process.execPath, ['--max-old-space-size=64', join(base, 'main.mjs')], { encoding: 'utf8' });
  assert.equal(result.status, 1);
  assert.match(result.stderr, /built for bun.*running in node/);
  assert.doesNotMatch(result.stderr, /PAYLOAD EXECUTED/);
});

for (const [name, support, message] of [
  ['host', { platform: 'unsupported', arch: 'other' }, /built on unsupported-other.*Rebuild/],
  ['Node version', { node: '0.0.0' }, /requires Node 0.0.0.*Install/],
]) test(`incompatible deployment ${name} is rejected before loading host dependencies`, t => {
  const base = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-platform-')));
  t.after(() => rmSync(base, { recursive: true, force: true }));
  writeApplicationEntrypoint(base, 'node', support);
  const result = spawnSync(process.execPath, [join(base, 'main.mjs')], { encoding: 'utf8' });
  assert.equal(result.status, 1);
  assert.match(result.stderr, message);
  assert.doesNotMatch(result.stderr, /ERR_MODULE_NOT_FOUND/);
});

test('all full-runtime host support files exist and target validation is strict', () => {
  assert.throws(() => applicationEntrypoint('browser'), /Invalid/);
  const names = new Set(applicationHostFiles);
  assert.equal(names.size, applicationHostFiles.length);
  assert.ok(names.has('native-pthread-factory-deno.mjs'), 'Exceptional Deno worker bootstrap must deploy');
  for (const file of names) {
    const source = readFileSync(new URL('../src/' + file, import.meta.url), 'utf8');
    for (const [, dependency] of source.matchAll(/(?:from\s*|import\s*\(|require\s*\()\s*['"]\.\/([^'"]+\.(?:mjs|cjs))['"]/g))
      assert.ok(names.has(dependency) || dependency.startsWith('native/'), `${file} needs ${dependency}`);
  }
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
  for (const names of inventories) {
    if (names.has('native-pthread-factory.cjs'))
      assert.ok(names.has('native-pthread-factory-deno.mjs'), 'Private factory needs its Deno bootstrap');
  }
  for (const names of inventories) for (const file of names) {
    const source = readFileSync(new URL('../src/' + file, import.meta.url), 'utf8');
    for (const [, dependency] of source.matchAll(/(?:from\s*|import\s*\(|require\s*\()\s*['"]\.\/([^'"]+\.(?:mjs|cjs))['"]/g))
      assert.ok(names.has(dependency) || dependency.startsWith('native/'), `${file} needs ${dependency}`);
  }
  for (const name of ['linux-memory.mjs', 'deno-signals.mjs', 'native-signals.mjs', 'native-file-message.mjs'])
    assert.ok(stamp.has(name), 'Legacy main cache must notice a missing ' + name);
});
