import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdirSync, mkdtempSync, writeFileSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { archivedObjects, describeLibrary, dynamicLoadingStubs, librariesForUndefinedSymbols, otherLeanPrefix, planNativeInputs, preprocessorArguments,
  recordedCompilation, splitLoggedArguments, undefinedSymbols, UnsupportedNativeLibrary } from '../src/application-native.mjs';

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
  assert.deepEqual(kept, ['-I', '/runtime/include', '-idirafter', '/pkg/inc', '-DA=1', '-DB', '-UC', '-std=c99']);
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
    const { compilations: [compilation], unavailable } = planNativeInputs({ objs: [{ package: 'pkg', path: library }], libs: [], args: [] },
      { leanPrefix: '/lean', runtimeInclude: '/rt' });
    assert.deepEqual(unavailable, []);
    assert.equal(compilation.package, 'pkg');
    assert.deepEqual(compilation.extraArgs.slice(0, 3), ['-idirafter', directory, '-DSQLITE_X']);
    assert.ok(compilation.extraArgs.includes('-Ddlopen=lasm_package_dlopen'));
    assert.throws(() => recordedCompilation(join(directory, 'missing.o')), /no build record/);
  } finally { rmSync(directory, { recursive: true, force: true }); }
});

test('prebuilt libraries are unavailable, and named when the program needs them', () => {
  const { unavailable } = planNativeInputs({ objs: [{ package: 'p', path: '/nowhere/libx.a' }], libs: [{ name: 'pq', path: '/usr/lib/libpq.so.5' }],
    args: [{ package: 'leanCurl', arg: '-lcurl' }, { package: 'x', arg: '-lm' }, { package: 'x', arg: '-O3' }] }, {});
  assert.deepEqual(unavailable.map(item => [item.package, item.library]), [[undefined, '/usr/lib/libpq.so.5'], ['leanCurl', 'curl'], ['p', '/nowhere/libx.a']]);
  const error = new UnsupportedNativeLibrary(unavailable, ['curl_easy_init']);
  assert.match(error.message, /the program needs curl_easy_init/);
  assert.match(error.message, /package leanCurl links libcurl \(HTTP client\) \(curl\)/);
  assert.match(error.message, /libpq \(PostgreSQL client\)/);
  assert.match(error.message, /package p links the native library x \(\/nowhere\/libx.a\) \[Lake has no build record/);
  assert.deepEqual(describeLibrary('libssl.so.3').label, 'OpenSSL');
  assert.deepEqual(librariesForUndefinedSymbols('error: undefined symbol: redisConnect\nerror: undefined symbol: cblas_dgemm\nundefined symbol: lean_foo'),
    [{ library: 'hiredis', symbol: 'redisConnect' }, { library: 'blas', symbol: 'cblas_dgemm' }]);
  // The runtime has no GMP (decision 5): native code calling GMP or Lean's GMP-only API is named.
  assert.deepEqual(librariesForUndefinedSymbols('undefined symbol: __gmpz_mul\nundefined symbol: lean_alloc_mpz'),
    [{ library: 'gmp', symbol: '__gmpz_mul' }]);
});

test('headers of another Lean installation named in a reused build record are never used for Wasm', () => {
  const other = mkdtempSync(join(tmpdir(), 'lasm-other-lean-'));
  try {
    mkdirSync(join(other, 'include', 'lean'), { recursive: true });
    mkdirSync(join(other, 'include', 'clang'));
    writeFileSync(join(other, 'include', 'lean', 'lean.h'), '');
    const { kept, dropped } = preprocessorArguments(['-I', join(other, 'include'), '--sysroot', other, '-nostdinc',
      '-isystem', join(other, 'include', 'clang'), '-I', '/pkg/inc'], { leanPrefix: '/lean', runtimeInclude: '/runtime/include', cwd: '/pkg' });
    assert.deepEqual(kept, ['-I', '/runtime/include', '-idirafter', '/pkg/inc']);
    assert.ok(dropped.includes(join(other, 'include', 'clang')));
  } finally { rmSync(other, { recursive: true, force: true }); }
});

test('logged arguments: separate values, trailing options, joined paths only when they exist', () => {
  assert.deepEqual(splitLoggedArguments('  -D  A=1 -o out.o -I'), ['-D', 'A=1', '-o', 'out.o', '-I']);
  assert.deepEqual(splitLoggedArguments('-I /no such dir -O2', '/'), ['-I', '/no', 'such', 'dir', '-O2']);
  assert.deepEqual(splitLoggedArguments('-isystem rel -include x.h -imacros m.h -I'), ['-isystem', 'rel', '-include', 'x.h', '-imacros', 'm.h', '-I']);
  assert.deepEqual(splitLoggedArguments('-Iinc -Wall'), ['-Iinc', '-Wall']);
  assert.deepEqual(splitLoggedArguments('-std c11 -x c'), ['-std', 'c11', '-x', 'c']);
});

test('preprocessor options: relative paths resolved, joined forms, Lean prefixes dropped, other Lean installations recognized', t => {
  const other = mkdtempSync(join(tmpdir(), 'lasm-native-prefix-'));
  t.after(() => rmSync(other, { recursive: true, force: true }));
  mkdirSync(join(other, 'include', 'lean'), { recursive: true });
  writeFileSync(join(other, 'include', 'lean', 'lean.h'), '');
  mkdirSync(join(other, 'a/b/c/d'), { recursive: true });
  const { kept, dropped } = preprocessorArguments(['-Iinc', '-iquote', 'q', '-isystem/sys', '-idirafter', '/after', '-include', 'pre.h', '-imacros', 'm.h',
    '-I/lean/include', '-I', '/short/include', '-I', '/lean/lib/x', '-I', join(other, 'a/b/c/d'), '-U', 'X', '-Ufoo', '-std=gnu11', '-D', 'Y', '-MF', 'deps.d', '-c'],
  { leanPrefix: ['/lean', '/short', undefined], runtimeInclude: '/rt', cwd: '/pkg' });
  assert.deepEqual(kept, ['-idirafter', '/pkg/inc', '-idirafter', '/pkg/q', '-idirafter', '/sys', '-idirafter', '/after', '-include', '/pkg/pre.h', '-imacros', '/pkg/m.h',
    '-I', '/rt', '-I', '/rt', '-UX', '-Ufoo', '-std=gnu11', '-DY']);
  assert.deepEqual(dropped, ['-I', '/lean/lib/x', '-I', join(other, 'a/b/c/d'), '-MF', 'deps.d', '-c']);
  assert.equal(otherLeanPrefix(join(other, 'a/b/c/d')), other);
  assert.equal(otherLeanPrefix(join(other, 'a/b/c/d/e/f/g/h/i')), undefined, 'searched at most eight levels up');
  assert.equal(otherLeanPrefix('/'), undefined);
});

test('build records: the source from the inputs or the command, the working directory and the language', t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-trace-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const object = join(directory, 'x.o');
  writeFileSync(object + '.trace', JSON.stringify({ log: [{ message: 5 }, { message: 'no prompt here' }, { message: `/work> env CC=1 c++ -c -o ${object} src/x.cpp -O2 -DX` }], inputs: [['lib', '1']] }));
  const record = recordedCompilation(object);
  assert.deepEqual({ ...record, identity: undefined }, { object, source: 'src/x.cpp', cwd: '/work', compiler: 'c++', args: '-O2 -DX', language: 'c++', identity: undefined });
  assert.match(record.identity, /^[0-9a-f]{64}$/);
  // The source from the trace's inputs wins when it has spaces; '.' is the current directory.
  writeFileSync(object + '.trace', JSON.stringify({ log: [{ message: `.> /usr/bin/clang -c -o ${object} my file.c -Ia` }], inputs: [['my file.c', 'h'], [3]] }));
  assert.deepEqual([recordedCompilation(object).source, recordedCompilation(object).cwd, recordedCompilation(object).args, recordedCompilation(object).compiler, recordedCompilation(object).language],
    ['my file.c', process.cwd(), '-Ia', '/usr/bin/clang', 'c']);
  for (const extension of ['cc', 'cxx', 'C']) {
    writeFileSync(object + '.trace', JSON.stringify({ log: [{ message: `/w> cc -c -o ${object} a.${extension}` }] }));
    assert.equal(recordedCompilation(object).language, 'c++', extension);
  }
  writeFileSync(object + '.trace', JSON.stringify({ log: [{ message: `/w> cc -c ${object} a.c` }] }));
  assert.throws(() => recordedCompilation(object), { message: `Lake's build record for ${object} does not show how it was compiled; Lasm cannot compile it for Node.` });
  writeFileSync(object + '.trace', JSON.stringify({}));
  assert.throws(() => recordedCompilation(object), /does not show how it was compiled/);
  writeFileSync(object + '.trace', '{ broken');
  assert.throws(() => recordedCompilation(object), SyntaxError);
  assert.throws(() => recordedCompilation(join(directory, 'none.o')), {
    message: `Lake has no build record for ${join(directory, 'none.o')}; Lasm cannot compile it for Node. Build it with a Lake target (buildO, compileO, buildLeanO).` });
  const library = join(directory, 'lib.a');
  for (const trace of [{}, { inputs: [['objs', 'x']] }, { inputs: [['other', []]] }]) {
    writeFileSync(library + '.trace', JSON.stringify(trace));
    assert.throws(() => archivedObjects(library), { message: `Lake has no build record for the static library ${library}; Lasm cannot compile it for Node.` });
  }
  assert.throws(() => archivedObjects(join(directory, 'none.a')), /no build record for the static library/);
});

test('native inputs: objects as strings, shared objects, missing sources, provided libraries, one entry per package and library', t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-native-plan-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const object = join(directory, 'a.o'), missing = join(directory, 'gone.o');
  writeFileSync(join(directory, 'a.c'), '');
  writeFileSync(object + '.trace', JSON.stringify({ log: [{ message: `${directory}> cc -c -o ${object} a.c -I ${directory}` }] }));
  writeFileSync(missing + '.trace', JSON.stringify({ log: [{ message: `${directory}> cc -c -o ${missing} /nowhere/gone.c` }] }));
  const { compilations, unavailable } = planNativeInputs({
    objs: [object, { package: 'p', path: join(directory, 'libdyn.so.1') }, { package: 'p', path: missing }],
    libs: [{ name: 'ssl', path: '' }, { name: 'ssl', path: '' }],
    args: ['-lm', '-lc', '-lpthread', '-ldl', '-lrt', '-lz', '/opt/libfoo.dylib', 'x.dll', '-Wl,-rpath'].map(arg => ({ package: 'q', arg })),
  }, { leanPrefix: '/lean', runtimeInclude: '/rt' });
  assert.equal(compilations.length, 1);
  assert.deepEqual([compilations[0].package, compilations[0].source, compilations[0].language], [undefined, join(directory, 'a.c'), 'c']);
  assert.deepEqual(compilations[0].extraArgs, ['-idirafter', directory, '-Ddlopen=lasm_package_dlopen', '-Ddlsym=lasm_package_dlsym', '-Ddlerror=lasm_package_dlerror', '-Ddlclose=lasm_package_dlclose']);
  assert.deepEqual(compilations[0].droppedArgs, []);
  assert.deepEqual(unavailable, [
    { library: 'ssl', reason: 'shared library' },
    { package: 'q', library: 'z', reason: 'prebuilt library' }, { package: 'q', library: '/opt/libfoo.dylib', reason: 'prebuilt library' },
    { package: 'q', library: 'x.dll', reason: 'prebuilt library' },
    { package: 'p', library: join(directory, 'libdyn.so.1'), reason: 'shared library' },
    { package: 'p', library: missing, reason: 'its C source /nowhere/gone.c is missing' }]);
  assert.deepEqual(planNativeInputs({}, {}), { compilations: [], unavailable: [] });
});

test('unsupported native libraries: what each package links, with advice, and C that does not compile', () => {
  assert.deepEqual(describeLibrary('/usr/lib/libcurl.so.4'), { name: 'curl', label: 'libcurl (HTTP client)', advice: 'Use the Fetch package (Node fetch backend) or run the curl command with IO.Process.' });
  for (const [name, label] of [['libcrypto.dylib', 'OpenSSL'], ['pq', 'libpq (PostgreSQL client)'], ['hiredis', 'hiredis (Redis client)'], ['openblas', 'BLAS/LAPACK'],
    ['sqlite3.dll', 'system SQLite'], ['libz.a', 'zlib'], ['gmp', 'GNU MP'], ['C:\\libs\\lapack.lib', 'BLAS/LAPACK'], ['ssl,static', 'OpenSSL']])
    assert.equal(describeLibrary(name).label, label, name);
  assert.deepEqual(describeLibrary('libfoo.so.1.2'), { name: 'foo', label: 'the native library foo', advice: '' });
  assert.equal(describeLibrary('curlx').label, 'the native library curlx');
  const error = new UnsupportedNativeLibrary([{ package: 'a', library: 'foo', reason: 'prebuilt library' }, { library: 'bar.o', reason: 'does not compile for Wasm: x' },
    { package: 'b', library: 'z', reason: 'shared library' }, { package: 'c', library: 'q', reason: 'custom reason' }]);
  assert.equal(error.message, ['Lasm cannot link prebuilt native libraries into a Node application:', '  package a links the native library foo (foo)',
    '  the program has C code (bar.o) that does not compile for Wasm: x', "  package b links zlib (z). Use lean-zip (pure Lean) or Node's zlib.",
    '  package c links the native library q (q) [custom reason]',
    'Lasm compiles C source that packages bundle and that Lake compiles (extern_lib, moreLinkObjs); prebuilt system or shared libraries are not available in Wasm.',
    'See "Lean support and restrictions" in the Lasm README.'].join('\n'));
  assert.equal(error.name, 'UnsupportedNativeLibrary');
  assert.equal(error.code, 'ERR_LASM_NATIVE_LIBRARY');
  assert.equal(error.libraries.length, 4);
  assert.match(new UnsupportedNativeLibrary([], ['a', 'b', 'c', 'd', 'e', 'f', 'g']).message, /^Lasm cannot link prebuilt native libraries into a Node application; the program needs a, b, c, d, e, f:\n/);
  assert.match(new UnsupportedNativeLibrary([{ library: 'x' }]).message, /  the program links the native library x \(x\)\n/);
});

test('undefined symbols of a failed link, and the libraries they point to', () => {
  const output = 'wasm-ld: error: a.o: undefined symbol: SSL_new\nundefined symbol: SSL_free\nundefined symbol: PQconnectdb\nundefined symbol: sqlite3_open\n'
    + 'undefined symbol: deflateInit\nundefined symbol: deflate\nundefined symbol: inflateEnd\nundefined symbol: compress2\nundefined symbol: curl_easy_init\n'
    + 'undefined symbol: LAPACKE_dgesv\nundefined symbol: lean_extract_mpz_value\nundefined symbol: deflateX\nundefined symbol: lean_alloc_mpzx';
  assert.deepEqual(librariesForUndefinedSymbols(output), [{ library: 'ssl', symbol: 'SSL_new' }, { library: 'pq', symbol: 'PQconnectdb' }, { library: 'sqlite3', symbol: 'sqlite3_open' },
    { library: 'z', symbol: 'deflateInit' }, { library: 'curl', symbol: 'curl_easy_init' }, { library: 'blas', symbol: 'LAPACKE_dgesv' }, { library: 'gmp', symbol: 'lean_extract_mpz_value' }]);
  assert.deepEqual(undefinedSymbols(output + '\nundefined symbol: SSL_new'), ['SSL_new', 'SSL_free', 'PQconnectdb', 'sqlite3_open', 'deflateInit', 'deflate', 'inflateEnd', 'compress2',
    'curl_easy_init', 'LAPACKE_dgesv', 'lean_extract_mpz_value', 'deflateX', 'lean_alloc_mpzx']);
  assert.deepEqual(undefinedSymbols(null), []);
  assert.match(dynamicLoadingStubs, /void \*lasm_package_dlopen\(const char \*file, int mode\) \{ \(void\)file; \(void\)mode; lasm_package_dl_failed = 1; return NULL; \}/);
  assert.match(dynamicLoadingStubs, /char \*lasm_package_dlerror\(void\) \{ if \(!lasm_package_dl_failed\) return NULL; lasm_package_dl_failed = 0; return lasm_package_dl_message; \}/);
});
