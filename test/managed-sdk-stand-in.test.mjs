// The managed Python and the maintainer SDK (src/managed-python.mjs,
// src/managed-sdk.mjs, src/sdk-repairs.mjs) provisioned from stand-in archives
// served in-process: a shell-script `python3` reports its identity and echoes the
// commands the SDK runs. No real toolchain is downloaded or executed.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, readFile, rm, readdir } from 'node:fs/promises';
import { join, basename, dirname, delimiter } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';
import { Readable, Writable } from 'node:stream';
import { packArchive } from '../scripts/lean-dist/tiers.mjs';
import { provisionPython, pythonCatalog } from '../src/managed-python.mjs';
import { provisionSdk, sdkCatalog } from '../src/managed-sdk.mjs';
import { prepareSdkRepairs, sdkRepairs, repairSdkFile } from '../src/sdk-repairs.mjs';

const posix = process.platform !== 'win32';
const host = `${process.platform}-${process.arch}`;
const machine = { x64: 'x86_64', arm64: 'aarch64' }[process.arch];

function nativeHeader() {
  const bytes = Buffer.alloc(128);
  if (process.platform === 'linux') {
    bytes.write('\x7fELF', 0, 'latin1'); bytes[4] = 2; bytes[5] = 1; bytes.writeUInt16LE(process.arch === 'arm64' ? 183 : 62, 18);
  } else {
    bytes.writeUInt32LE(0xfeedfacf, 0); bytes.writeUInt32LE(process.arch === 'arm64' ? 0x0100000c : 0x01000007, 4);
  }
  return bytes;
}

async function archive(name, files) {
  const members = Object.entries(files).map(([path, content]) => ({ path, type: 'file', content: Buffer.from(content),
    size: Buffer.byteLength(content), executable: path.startsWith('bin/') || path.endsWith('.exe') }));
  const chunks = [];
  const result = await packArchive(name, members, { open: member => Readable.from([member.content]), zstd: { level: 3, windowLog: 20, long: false },
    sink: new Writable({ write(chunk, encoding, done) { chunks.push(chunk); done(); } }) });
  const bytes = Buffer.concat(chunks);
  return { bytes, artifact: { name, root: name, url: `https://example.invalid/${name}.tar.zst`, sha256: result.sha256,
    bytes: bytes.length, format: 'tar.zst', maximumExtractedBytes: 1_000_000 } };
}

// The stand-in interpreter: `-I -B -c <probe>` prints the identity in its
// LASM_STAND_IN_IDENTITY (or the default); anything else echoes the arguments
// and the variables the SDK sets.
const pythonScript = identity => `#!/bin/sh
if [ "$1" = "-I" ] && [ "$2" = "-B" ] && [ "$3" = "-c" ]; then
  case "$4" in *lzma,zipfile*platform.python_version*) ;; *) echo "unexpected probe" >&2; exit 9;; esac
  echo '${JSON.stringify(identity)}'; exit 0
fi
printf '%s\\n' "$@"
printf 'EM_CONFIG=%s\\nEMSDK_PYTHON=%s\\nEPOCH=%s\\nCORES=%s/%s\\nPYDONT=%s\\nPATH=%s\\nLEAK=%s%s%s\\n' "$EM_CONFIG" "$EMSDK_PYTHON" "$SOURCE_DATE_EPOCH" "$BINARYEN_CORES" "$EMCC_CORES" "$PYTHONDONTWRITEBYTECODE" "$PATH" "$EMCC_DEBUG" "$LLVM_ROOT" "$PYTHONPATH"
`;

async function fixture(t, { identity = { version: '3.13.15', machine, platform: process.platform }, sdkVersion = '6.0.9-git' } = {}) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-sdk-stand-in-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  const python = await archive('python-stand-in', { 'bin/python3': pythonScript(identity) });
  const header = nativeHeader();
  const sdk = await archive('sdk-stand-in', { 'bin/clang': header, 'bin/wasm-ld': header, 'bin/wasm-opt': header,
    'emscripten/emscripten-version.txt': `"${sdkVersion}"\n`, 'emscripten/emcc.py': '# driver' });
  const requests = [];
  const byUrl = new Map([python, sdk].map(item => [item.artifact.url, item.bytes]));
  const fetch = async url => { requests.push(basename(url)); return new Response(byUrl.get(url)); };
  return { base, cache: join(base, 'cache'), requests, fetch,
    pythonCatalog: { version: '3.13.15', artifacts: { [host]: python.artifact } },
    sdkCatalog: { version: '6.0.9', archiveVersion: '6.0.9-git', artifacts: { [host]: sdk.artifact } } };
}

test('the product catalogs name an artifact for every supported host', () => {
  for (const name of ['linux-x64', 'linux-arm64', 'darwin-x64', 'darwin-arm64', 'win32-x64']) {
    assert.ok(pythonCatalog.artifacts[name], name); assert.ok(sdkCatalog.artifacts[name], name);
  }
  assert.equal(sdkRepairs.archiveVersion, sdkCatalog.archiveVersion);
});

test('managed Python is provisioned, then identified by running it isolated', { skip: !posix }, async t => {
  const f = await fixture(t);
  const python = await provisionPython({ cache: f.cache, fetch: f.fetch, log() {}, catalog: f.pythonCatalog });
  assert.equal(python.executable, join(python.directory, 'bin/python3'));
  assert.equal(python.version, '3.13.15');
  assert.equal(python.platform, host);
  assert.equal(python.machine, machine);
  assert.equal(python.cacheHit, false);
  assert.deepEqual(f.requests, ['python-stand-in.tar.zst']);
  assert.equal((await provisionPython({ cache: f.cache, fetch: f.fetch, log() {}, catalog: f.pythonCatalog })).cacheHit, true);
  // Every alias of the machine name is accepted for its architecture.
  for (const [arch, names] of [['x64', ['AMD64', 'x86_64']], ['arm64', ['ARM64', 'arm64', 'aarch64']]]) {
    if (arch !== process.arch) continue;
    for (const name of names) {
      const g = await fixture(t, { identity: { version: '3.13.15', machine: name, platform: process.platform } });
      assert.equal((await provisionPython({ cache: g.cache, fetch: g.fetch, log() {}, catalog: g.pythonCatalog })).machine, name);
    }
  }
});

test('managed Python for another architecture or Windows: the catalog host, the interpreter path and the machine aliases', { skip: !posix }, async t => {
  for (const name of ['ARM64', 'arm64', 'aarch64']) {
    const f = await fixture(t, { identity: { version: '3.13.15', machine: name, platform: process.platform } });
    const catalog = { version: '3.13.15', artifacts: { [`${process.platform}-arm64`]: f.pythonCatalog.artifacts[host] } };
    const stages = [];
    const python = await provisionPython({ cache: f.cache, fetch: f.fetch, log() {}, catalog, arch: 'arm64', progress: event => stages.push(event.stage) });
    assert.equal(python.machine, name); assert.equal(python.platform, `${process.platform}-arm64`);
    assert.ok(stages.includes('Downloading Python 3.13.15'), stages.join('\n'));
  }
  const g = await fixture(t, { identity: { version: '3.13.15', machine: 'x86_64', platform: process.platform } });
  await assert.rejects(provisionPython({ cache: g.cache, fetch: g.fetch, log() {}, arch: 'arm64',
    catalog: { version: '3.13.15', artifacts: { [`${process.platform}-arm64`]: g.pythonCatalog.artifacts[host] } } }), /identity mismatch/);
  await assert.rejects(provisionPython({ cache: g.cache, fetch: g.fetch, log() {}, arch: 'ia32',
    catalog: { version: '3.13.15', artifacts: { [`${process.platform}-ia32`]: g.pythonCatalog.artifacts[host] } } }), /identity mismatch/, 'an architecture without aliases matches no machine');
  // On Windows the interpreter is python.exe at the root of the archive.
  const windowsPython = await archive('python-windows-stand-in', { 'python.exe': pythonScript({ version: '3.13.15', machine: 'AMD64', platform: 'win32' }) });
  const w = await fixture(t);
  const fetch = async url => url === windowsPython.artifact.url ? new Response(windowsPython.bytes) : w.fetch(url);
  const python = await provisionPython({ cache: w.cache, fetch, log() {}, platform: 'win32', arch: 'x64',
    catalog: { version: '3.13.15', artifacts: { 'win32-x64': windowsPython.artifact } } });
  assert.equal(python.executable, join(python.directory, 'python.exe'));
  assert.equal(python.machine, 'AMD64'); assert.equal(python.platform, 'win32-x64');
});

test('a Python reporting another version, platform or machine is refused', { skip: !posix }, async t => {
  for (const identity of [{ version: '3.12.0', machine, platform: process.platform }, { version: '3.13.15', machine, platform: 'win32' },
    { version: '3.13.15', machine: process.arch === 'x64' ? 'aarch64' : 'x86_64', platform: process.platform }]) {
    const f = await fixture(t, { identity });
    await assert.rejects(provisionPython({ cache: f.cache, fetch: f.fetch, log() {}, catalog: f.pythonCatalog }),
      { message: `Managed Python identity mismatch for ${host}: ${JSON.stringify(identity)}` });
  }
});

test('hosts without an artifact are refused before any download', async t => {
  const f = await fixture(t);
  await assert.rejects(provisionPython({ cache: f.cache, fetch: f.fetch, catalog: { version: '1', artifacts: {} }, platform: 'linux', arch: 'riscv64' }),
    { message: 'Managed build Python is not available for linux-riscv64' });
  await assert.rejects(provisionSdk({ cache: f.cache, fetch: f.fetch, catalog: { version: '9.9.9', artifacts: {}, unavailable: { 'linux-riscv64': 'Use x64.' } },
    platform: 'linux', arch: 'riscv64' }), { message: 'Managed compiler SDK 9.9.9 is not implemented for linux-riscv64. Use x64.' });
  await assert.rejects(provisionSdk({ cache: f.cache, fetch: f.fetch, catalog: { version: '9.9.9', artifacts: {} }, platform: 'linux', arch: 'riscv64' }),
    { message: 'Managed compiler SDK 9.9.9 is not implemented for linux-riscv64. ' });
  assert.deepEqual(f.requests, []);
});

// provisionSdk provisions the catalog's own Python: seed the cache with the stand-in
// under the product Python's identity, so it is a verified cache hit and nothing is fetched.
async function seedProductPython(f) {
  const { provisionArtifact, validateArtifact } = await import('../src/managed-artifacts.mjs');
  const { rename, writeFile, mkdir } = await import('node:fs/promises');
  const installed = await provisionArtifact(f.pythonCatalog.artifacts[host], { cache: f.cache, fetch: f.fetch, log() {} });
  const identity = validateArtifact(pythonCatalog.artifacts[host]);
  await mkdir(join(f.cache, 'artifacts'), { recursive: true });
  await rename(installed.directory, join(f.cache, 'artifacts', identity));
  const receipt = join(f.cache, 'artifacts', identity, '.lasm-artifact.json');
  await writeFile(receipt, JSON.stringify({ ...JSON.parse(await readFile(receipt, 'utf8')), identity }) + '\n');
}

test('the SDK: verified programs, a private configuration and an environment free of inherited settings', { skip: !posix }, async t => {
  const f = await fixture(t);
  await seedProductPython(f);
  const saved = { ...process.env }, savedFetch = globalThis.fetch;
  globalThis.fetch = async url => assert.fail(`no network: ${url}`);
  t.after(() => { globalThis.fetch = savedFetch; for (const key of Object.keys(process.env)) if (!(key in saved)) delete process.env[key]; Object.assign(process.env, saved); });
  Object.assign(process.env, { EMCC_DEBUG: 'leak', LLVM_ROOT: '/leak', PYTHONPATH: '/leak', EM_CACHE: '/leak', EMSDK: '/leak', BINARYEN_ROOT: '/leak', LASM_KEEP: 'kept', MY_PYTHON_SETTING: 'kept' });
  const progress = [];
  f.requests.length = 0;
  const sdk = await provisionSdk({ cache: f.cache, fetch: f.fetch, log() {}, catalog: f.sdkCatalog, repairs: false, progress: event => progress.push(event.stage) });
  assert.deepEqual(f.requests, ['sdk-stand-in.tar.zst']);
  assert.equal(sdk.prefix, sdk.directory);
  assert.equal(sdk.driver, join(sdk.prefix, 'emscripten'));
  assert.equal(sdk.driverIdentity, sdk.identity);
  assert.equal(sdk.runtimePatchesApplied, false);
  assert.equal(sdk.version, '6.0.9'); assert.equal(sdk.archiveVersion, '6.0.9-git'); assert.equal(sdk.platform, host);
  assert.deepEqual(Object.keys(sdk.nativePrograms), ['clang', 'wasm-ld', 'wasm-opt']);
  assert.equal(sdk.python.version, '3.13.15');
  assert.ok(progress.includes('Preparing and checking compiler tools'));
  assert.ok(progress.includes('Downloading compiler tools (Emscripten 6.0.9)'), progress.join('\n'));
  // Mutable state lives outside the verified tree, keyed by the SDK and this Node.
  assert.equal(sdk.state, join(f.cache, 'sdk-state', sdk.identity));
  const nodeKey = createHash('sha256').update(process.execPath).digest('hex');
  const config = join(sdk.state, `config-${nodeKey}.py`);
  assert.equal(await readFile(config, 'utf8'), [
    `LLVM_ROOT = ${JSON.stringify(join(sdk.prefix, 'bin'))}`, `BINARYEN_ROOT = ${JSON.stringify(sdk.prefix)}`, `NODE_JS = ${JSON.stringify(process.execPath)}`,
    `CACHE = ${JSON.stringify(join(sdk.state, 'cache'))}`, `PORTS = ${JSON.stringify(join(sdk.state, 'ports'))}`].join('\n') + '\n');
  assert.deepEqual(await readdir(sdk.state), [basename(config)], 'no pending configuration is left');
  for (const key of ['EMCC_DEBUG', 'LLVM_ROOT', 'PYTHONPATH', 'EM_CACHE', 'EMSDK', 'BINARYEN_ROOT']) assert.equal(key in sdk.env, false, key);
  assert.equal(sdk.env.LASM_KEEP, 'kept'); assert.equal(sdk.env.MY_PYTHON_SETTING, 'kept', 'only variables that start with a toolchain prefix are removed');
  assert.deepEqual({ EM_CONFIG: sdk.env.EM_CONFIG, EMSDK_PYTHON: sdk.env.EMSDK_PYTHON, PYTHONDONTWRITEBYTECODE: sdk.env.PYTHONDONTWRITEBYTECODE,
    BINARYEN_CORES: sdk.env.BINARYEN_CORES, EMCC_CORES: sdk.env.EMCC_CORES, SOURCE_DATE_EPOCH: sdk.env.SOURCE_DATE_EPOCH, PATH: sdk.env.PATH },
  { EM_CONFIG: config, EMSDK_PYTHON: sdk.python.executable, PYTHONDONTWRITEBYTECODE: '1', BINARYEN_CORES: '1', EMCC_CORES: '1', SOURCE_DATE_EPOCH: '315532800',
    PATH: [join(sdk.prefix, 'bin'), dirname(sdk.python.executable), dirname(process.execPath)].join(delimiter) });
  // Tools run as `python -B -E -s <driver>/<tool>.py`, with the SDK's environment.
  for (const tool of ['emcc', 'em++', 'emar', 'emranlib']) {
    const output = sdk.execute(tool, ['-c', 'a b.c'], { encoding: 'utf8' }).split('\n');
    assert.deepEqual(output.slice(0, 6), ['-B', '-E', '-s', join(sdk.driver, tool + '.py'), '-c', 'a b.c'], tool);
    assert.ok(output.includes(`EM_CONFIG=${config}`) && output.includes('EPOCH=315532800') && output.includes('CORES=1/1') && output.includes('PYDONT=1') && output.includes('LEAK='));
  }
  assert.throws(() => sdk.execute('python', []), { message: 'Unsupported managed compiler tool' });
  assert.equal((await provisionSdk({ cache: f.cache, fetch: f.fetch, log() {}, catalog: f.sdkCatalog, repairs: false })).cacheHit, true);
});

test('an SDK whose archive reports another Emscripten version is refused', { skip: !posix }, async t => {
  const f = await fixture(t, { sdkVersion: '6.0.8' });
  await seedProductPython(f);
  await assert.rejects(provisionSdk({ cache: f.cache, fetch: f.fetch, log() {}, catalog: f.sdkCatalog, repairs: false }),
    { message: 'Managed compiler SDK archive version mismatch: 6.0.8' });
  // Runtime repairs refuse any archive but the one they were reviewed against.
  await assert.rejects(prepareSdkRepairs({ directory: join(f.cache, 'artifacts', (await import('../src/managed-artifacts.mjs')).validateArtifact(f.sdkCatalog.artifacts[host])) }, { cache: f.cache }),
    { message: 'SDK repairs do not support archive 6.0.8' });
  // With repairs (the default), the reviewed repairs are applied to a derived copy, which needs the real files.
  const g = await fixture(t);
  await seedProductPython(g);
  await assert.rejects(provisionSdk({ cache: g.cache, fetch: g.fetch, log() {}, catalog: g.sdkCatalog }), { code: 'ENOENT' });
});

test('repairs: every replacement must match exactly once, and the manifest names the file', () => {
  const sha = text => createHash('sha256').update(text).digest('hex');
  const manifest = { files: [{ path: 'a.py', originalSha256: sha('x = 1\ny = 2\n'), patchedSha256: sha('x = 10\ny = 20\n'),
    replacements: [{ before: 'x = 1\n', after: 'x = 10\n' }, { before: 'y = 2\n', after: 'y = 20\n' }] }] };
  assert.equal(repairSdkFile('a.py', 'x = 1\ny = 2\n', manifest), 'x = 10\ny = 20\n');
  assert.throws(() => repairSdkFile('b.py', 'x = 1\ny = 2\n', manifest), { message: 'SDK repair source drift: b.py' });
  const twice = { files: [{ ...manifest.files[0], originalSha256: sha('x = 1\nx = 1\n') }] };
  assert.throws(() => repairSdkFile('a.py', 'x = 1\nx = 1\n', twice), { message: 'SDK repair context mismatch: a.py' });
  const absent = { files: [{ ...manifest.files[0], originalSha256: sha('z\n') }] };
  assert.throws(() => repairSdkFile('a.py', 'z\n', absent), { message: 'SDK repair context mismatch: a.py' });
  // Only the first occurrence of `after`-style text is replaced: string, not pattern, replacement.
  const dollar = { files: [{ path: 'd.py', originalSha256: sha('v = A\n'), patchedSha256: sha("v = '$&'\n"), replacements: [{ before: 'A', after: "'$&'" }] }] };
  assert.throws(() => repairSdkFile('d.py', 'v = A\n', dollar), { message: 'SDK repair output mismatch: d.py' }, 'String.replace patterns apply ($& is the match)');
});
