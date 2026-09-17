import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync, writeFileSync, mkdirSync } from 'node:fs';
import { join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { build, validateSpec } from '../src/build.mjs';
import { run, lean, prefix, root, env } from '../scripts/build-runtime.mjs';

const output = join(root, '.work/test-basic');
const report = await build(join(root, 'examples/basic/lasm.json'), output);
const { default: createModule } = await import(pathToFileURL(join(output, 'index.mjs')));
const naturals = [0n, 1n, 2n, (1n << 30n) - 1n, 1n << 30n, (1n << 31n) - 1n, 1n << 31n,
  (1n << 64n) - 1n, 1n << 64n, (1n << 128n) + 51n, (1n << 512n) - 1n];
const integers = [-1n, -(1n << 30n), -(1n << 30n) - 1n, -(1n << 31n), -(1n << 129n), ...naturals];
const strings = ['', 'hello', '日本語', 'café', 'e\u0301', '🙂𐍈', 'before\0after'];
const expected = [];
const lines = [];
for (const n of naturals) {
  for (const name of ['square', 'array', 'closure', 'tree']) {
    lines.push(`  IO.println (Example.${name} ${n})`);
    expected.push({ name, argument: n, type: 'integer' });
  }
}
for (const n of integers) {
  lines.push(`  IO.println (Example.signed (${n} : Int))`);
  expected.push({ name: 'signed', argument: n, type: 'integer' });
}
// JSON string literals are also valid Lean string literals for this input set,
// except NUL: construct it explicitly on the Lean side.
for (const s of strings) {
  const literal = s.includes('\0') ? '(String.append "before" (String.push "" (Char.ofNat 0)) ++ "after")' : JSON.stringify(s);
  lines.push(`  IO.println (Example.unicode ${literal}).toUTF8.data`);
  expected.push({ name: 'unicode', argument: s, type: 'bytes' });
}
const oracle = join(report.buildDir, 'NativeOracle.lean');
writeFileSync(oracle, `import Example\ndef main : IO Unit := do\n${lines.join('\n')}\n`);
run(lean, ['-R', report.buildDir, '-c', oracle + '.c', oracle], { env: { ...env, LEAN_PATH: report.buildDir } });
const nativeBinary = join(report.buildDir, 'native-oracle');
run(join(prefix, 'bin/leanc'), ['-O2', '-o', nativeBinary, oracle + '.c', join(report.buildDir, 'Example.c'), join(report.buildDir, 'Support.c')]);
const nativeOutput = run(nativeBinary, []);
if (!nativeOutput) throw new Error('Native Lean oracle returned no output');
const nativeLines = nativeOutput.split('\n');
assert.equal(nativeLines.length, expected.length);

test('native Lean and Wasm agree for heap values and imported initialization', async () => {
  const start = performance.now();
  const api = await createModule();
  report.instantiateMs = performance.now() - start;
  try {
    for (let i = 0; i < expected.length; i++) {
      const item = expected[i];
      const actual = api[item.name](item.argument);
      if (item.type === 'integer') assert.equal(actual, BigInt(nativeLines[i]), `${item.name}(${item.argument})`);
      else {
        const bytes = JSON.parse(nativeLines[i].replace(/^#\[/, '['));
        assert.deepEqual([...new TextEncoder().encode(actual)], bytes);
      }
    }
    assert.equal(api.add32(0xffff_ffff, 1), 0);
    assert.equal(api.add32(0x8000_0000, 1), 0x8000_0001);
    assert.equal(api.negate(true), false);
    assert.equal(api.negate(false), true);
    assert.equal(api.unit(undefined), undefined);
    const bytes = Uint8Array.from({ length: 1024 }, (_, i) => i & 255);
    const result = api.bytes(bytes);
    assert.deepEqual(result, bytes);
    result[0] = 99;
    assert.equal(bytes[0], 0);
  } finally { api.dispose(); }
});

test('argument validation precedes allocation and leaves the instance usable', async () => {
  const api = await createModule();
  const before = api.stats().memoryBytes;
  assert.throws(() => api.square(-1n), /nonnegative/);
  assert.throws(() => api.square(42), /bigint/);
  assert.throws(() => api.unicode('\ud800'), /well-formed/);
  assert.throws(() => api.bytes([1, 2]), /Uint8Array/);
  assert.throws(() => api.add32(1, -1), /UInt32/);
  assert.throws(() => api.add32(1, 1.1), /UInt32/);
  assert.throws(() => api.negate(1), /boolean/);
  assert.throws(() => api.unit(null), /undefined/);
  assert.throws(() => api.square(), /expects/);
  assert.equal(api.square(12n), 144n);
  assert.equal(api.stats().memoryBytes, before);
  api.dispose();
});

test('repeated calls plateau in linear memory; instances have independent lifetimes', async () => {
  const api = await createModule();
  const other = await createModule();
  const value = (1n << 160n) + 317n;
  const payload = new Uint8Array(192 * 1024).fill(231);
  const repeat = count => {
    for (let i = 0; i < count; i++) {
      assert.equal(api.square(value), value * value);
      assert.equal(api.array(value), value * value);
      assert.equal(api.closure(value), value * 3n);
      assert.equal(api.signed(-value), -value * 3n - 7n);
      assert.equal(api.unicode('hello\0🙂'), 'hello\0🙂λ');
      assert.deepEqual(api.bytes(payload), payload);
    }
  };
  repeat(20);
  const warmBytes = api.stats().memoryBytes;
  repeat(1000);
  assert.equal(api.stats().memoryBytes, warmBytes, 'memory grew after allocator warm-up');
  assert.equal(other.square(value), value * value);
  api.dispose();
  api.dispose();
  assert.equal(api.stats().disposed, true);
  assert.throws(() => api.square(1n), /disposed/);
  assert.equal(other.square(5n), 25n);
  other.dispose();
  mkdirSync(join(root, '.work/evidence'), { recursive: true });
  writeFileSync(join(root, '.work/evidence/runtime.json'), JSON.stringify({
    ...report, nativeComparisons: expected.length, repeatedCalls: 6120, warmBytes,
    node: process.version, separateInstances: true,
  }, null, 2) + '\n');
});

test('manifest validation rejects unsafe names and unsupported signatures', () => {
  assert.throws(() => validateSpec({ module: '../Main', exports: {} }), /module name/);
  assert.throws(() => validateSpec({ module: 'Main', exports: { dispose: {} } }), /reserved/);
  assert.throws(() => validateSpec({ module: 'Main', exports: { f: { declaration: 'f', parameters: ['Float'], result: 'Nat' } } }), /unsupported/);
  assert.ok(report.modules.includes('Support'));
  assert.ok(report.modules.includes('Init.Prelude'));
  assert.ok(readFileSync(join(report.buildDir, 'Example.c'), 'utf8').includes('lean_apply_1'), 'closure path was not compiled indirectly');
});

test('guest panic poisons only that instance', async () => {
  const api = await createModule();
  const other = await createModule();
  assert.equal(api.panicProbe(1n), 1n);
  assert.throws(() => api.panicProbe(0n));
  assert.equal(api.stats().disposed, true);
  assert.throws(() => api.square(1n), /instance failed/);
  assert.equal(other.square(9n), 81n);
  other.dispose();
});
