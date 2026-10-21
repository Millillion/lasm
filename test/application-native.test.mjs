import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdirSync, mkdtempSync, writeFileSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { archivedObjects, describeLibrary, librariesForUndefinedSymbols, planNativeInputs, preprocessorArguments,
  recordedCompilation, splitLoggedArguments, UnsupportedNativeLibrary } from '../src/application-native.mjs';

test('logged compiler arguments: unquoted paths with spaces are re-joined when they exist', () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm native '));
  try {
    mkdirSync(join(directory, 'include dir'));
    const args = splitLoggedArguments(`-I ${directory}/include dir -DX=1 -fPIC -O3 -I${directory}/include dir -std=c11`);
    assert.deepEqual(args, ['-I', `${directory}/include dir`, '-DX=1', '-fPIC', '-O3', `-I${directory}/include dir`, '-std=c11']);
  } finally { rmSync(directory, { recursive: true, force: true }); }
});

test('only preprocessor options survive; Lean headers map to the Wasm runtime', () => {
  const { kept, dropped } = preprocessorArguments(['-I', '/lean/include', '-I', '/pkg/inc', '-isystem', '/lean/include/clang', '--sysroot', '/lean',
    '-nostdinc', '-D', 'A=1', '-DB', '-UC', '-std=c99', '-O3', '-flto', '-fPIC', '-march=native'],
  { leanPrefix: '/lean', runtimeInclude: '/runtime/include', cwd: '/pkg' });
  assert.deepEqual(kept, ['-I', '/runtime/include', '-I', '/pkg/inc', '-DA=1', '-DB', '-UC', '-std=c99']);
  assert.deepEqual(dropped, ['-isystem', '/lean/include/clang', '--sysroot', '/lean', '-nostdinc', '-O3', '-flto', '-fPIC', '-march=native']);
});

test('Lake build records: compile commands and archived objects', () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-trace-'));
  try {
    const object = join(directory, 'sqlite3.o'), source = join(directory, 'sqlite3.c'), library = join(directory, 'libx.a');
    writeFileSync(source, 'int x;\n');
    writeFileSync(object + '.trace', JSON.stringify({ log: [{ message: `.> cc -c -o ${object} ${source} -I ${directory} -fPIC -DSQLITE_X`, level: 'trace' }],
      inputs: [[source, '1'], ['x86_64-unknown-linux-gnu', '2']], depHash: '3' }));
    writeFileSync(library + '.trace', JSON.stringify({ inputs: [['objs', [[object, '1']]]] }));
    const record = recordedCompilation(object);
    assert.equal(record.source, source);
    assert.equal(record.compiler, 'cc');
    assert.equal(record.args, `-I ${directory} -fPIC -DSQLITE_X`);
    assert.deepEqual(archivedObjects(library), [object]);
    const [compilation] = planNativeInputs({ objs: [library], libs: [], args: [] }, { leanPrefix: '/lean', runtimeInclude: '/rt' });
    assert.deepEqual(compilation.extraArgs.slice(0, 3), ['-I', directory, '-DSQLITE_X']);
    assert.ok(compilation.extraArgs.includes('-Ddlopen=lasm_package_dlopen'));
    assert.throws(() => recordedCompilation(join(directory, 'missing.o')), /no build record/);
  } finally { rmSync(directory, { recursive: true, force: true }); }
});

test('prebuilt libraries are reported by name', () => {
  assert.throws(() => planNativeInputs({ objs: [], libs: [], args: [{ package: 'leanCurl', arg: '-lcurl' }, { package: 'x', arg: '-lm' }] }, {}),
    error => error instanceof UnsupportedNativeLibrary && /package leanCurl links libcurl \(HTTP client\) \(curl\)/.test(error.message)
      && !/\(m\)/.test(error.message));
  assert.throws(() => planNativeInputs({ objs: [], libs: [{ name: 'pq', path: '/usr/lib/libpq.so.5' }], args: [] }, {}),
    /libpq \(PostgreSQL client\)/);
  assert.deepEqual(describeLibrary('libssl.so.3').label, 'OpenSSL');
  assert.deepEqual(librariesForUndefinedSymbols('error: undefined symbol: redisConnect\nerror: undefined symbol: cblas_dgemm\nundefined symbol: lean_foo'),
    [{ library: 'hiredis', symbol: 'redisConnect' }, { library: 'blas', symbol: 'cblas_dgemm' }]);
});
