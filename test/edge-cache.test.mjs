// Edge programs cached beside the Node build (src/edge/edge-build.mjs
// linkCachedEdgeProgram), linked by the stand-in toolchain of
// test/fixtures/link-stand-ins with Emscripten's driver played by the test:
// the cache entry's files and record, reuse, superseded entries per
// suspension, link failures and LASM_KEEP_LINK_WORK.
import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { createHash } from 'node:crypto';
import { linkCachedEdgeProgram } from '../src/edge/edge-build.mjs';
import { responseFile } from '../src/platform.mjs';
import { installTools, wasmObject, temporaryDirectory } from './fixtures/link-stand-ins/toolchain.mjs';

const posix = process.platform !== 'win32';
const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');
let unique = 0;

function fixture() {
  const base = temporaryDirectory('lasm-edge-cache-');
  const tools = installTools(join(base, 'sdk'), ['llvm-nm', 'wasm-ld', 'llvm-objcopy', 'clang']);
  const linked = [];
  let failure = null;
  const sdk = { prefix: tools.prefix, env: { LASM_STAND_IN_SDK: '1' }, execute(tool, args) {
    const output = args[args.indexOf('-o') + 1];
    if (tool === 'emcc') writeFileSync(output, wasmObject({ functions: [{ name: `compiled_${unique++}` }] }));
    if (tool === 'em++') {
      if (failure) throw failure;
      linked.push(args);
      writeFileSync(output, `// glue ${linked.length}\n`);
      writeFileSync(join(dirname(output), 'program.wasm'), Buffer.from([0, 0x61, 0x73, 0x6d, 1, 0, 0, 0, linked.length]));
    }
  } };
  const linkWork = join(base, 'link');
  mkdirSync(linkWork, { recursive: true });
  const main = join(linkWork, 'module-0.o');
  writeFileSync(main, wasmObject({ functions: [{ name: '__main_argc_argv' }, { name: `tag_${process.pid}_${unique++}` }] }));
  writeFileSync(join(linkWork, 'link.rsp'), responseFile([main, '-Oz', '-sMEMORY64=1', '-o', 'program.cjs']));
  writeFileSync(join(linkWork, 'exports.json'), '["_main"]\n');
  writeFileSync(join(linkWork, 'application-pre.js'), '\n');
  const cached = join(base, 'project/.lake/lasm/applications/0123/signature/dist');
  mkdirSync(cached, { recursive: true });
  const nodeRuntime = { directory: join(base, 'node-runtime'), identity: 'runtime', manifest: { libraries: ['lib/libleanrt.a'] } };
  const edge = { identity: 'edge', libraries: { 'libleanrt.a': join(base, 'edge/libleanrt.a') } };
  return { base, sdk, linked, fail: error => { failure = error; }, root: join(base, 'project/.lake/lasm/applications/0123/edge'),
    options: { result: { cached, signature: 'node', linkWork, profile: 'release' }, nodeRuntime, edge, sdk } };
}

test('linkCachedEdgeProgram: the linked program and its record, beside the Node build', { skip: !posix }, () => {
  const f = fixture();
  const key = 'a'.repeat(64);
  const program = linkCachedEdgeProgram({ ...f.options, key });
  const directory = join(f.root, key);
  assert.equal(program.directory, directory);
  assert.deepEqual(readdirSync(directory).sort(), ['program.json', 'program.mjs', 'program.wasm']);
  const files = { 'program.mjs': sha256(readFileSync(join(directory, 'program.mjs'))), 'program.wasm': sha256(readFileSync(join(directory, 'program.wasm'))) };
  assert.deepEqual(program.meta, { key, suspend: 'jspi', files });
  assert.equal(readFileSync(join(directory, 'program.json'), 'utf8'), JSON.stringify(program.meta, null, 2) + '\n');
  assert.equal(readFileSync(join(directory, 'program.mjs'), 'utf8'), '// glue 1\n');
  assert.ok(f.linked[0].includes('-Oz'), 'a release build is optimized');
  assert.ok(f.linked[0].includes('-sJSPI'));
  assert.deepEqual(readdirSync(f.root), [key], 'no staging directory is left');
});

test('linkCachedEdgeProgram: a newer program supersedes the older one of the same suspension', { skip: !posix }, () => {
  const f = fixture();
  linkCachedEdgeProgram({ ...f.options, key: 'a'.repeat(64) });
  linkCachedEdgeProgram({ ...f.options, key: 'b'.repeat(64), suspend: 'asyncify' });
  assert.ok(f.linked[1].includes('-sASYNCIFY'));
  assert.deepEqual(readdirSync(f.root).sort(), ['a'.repeat(64), 'b'.repeat(64)], 'another suspension is kept');
  // An entry without a readable record (an older layout) is superseded too; staging entries of other builds stay.
  mkdirSync(join(f.root, 'c'.repeat(64)));
  mkdirSync(join(f.root, '.other.partial'));
  linkCachedEdgeProgram({ ...f.options, key: 'd'.repeat(64) });
  assert.deepEqual(readdirSync(f.root).sort(), ['.other.partial', 'b'.repeat(64), 'd'.repeat(64)]);
  // Relinking the same key replaces it.
  writeFileSync(join(f.root, 'd'.repeat(64), 'extra'), 'x');
  linkCachedEdgeProgram({ ...f.options, key: 'd'.repeat(64) });
  assert.equal(existsSync(join(f.root, 'd'.repeat(64), 'extra')), false);
});

test('linkCachedEdgeProgram: a failed link leaves the cache as it was; LASM_KEEP_LINK_WORK keeps the link\'s files', { skip: !posix }, () => {
  const f = fixture();
  linkCachedEdgeProgram({ ...f.options, key: 'a'.repeat(64) });
  f.fail(new Error('em++ failed'));
  assert.throws(() => linkCachedEdgeProgram({ ...f.options, key: 'e'.repeat(64) }), /em\+\+ failed/);
  assert.deepEqual(readdirSync(f.root), ['a'.repeat(64)]);
  f.fail(null);
  process.env.LASM_KEEP_LINK_WORK = '1';
  try { linkCachedEdgeProgram({ ...f.options, key: 'f'.repeat(64) }); }
  finally { delete process.env.LASM_KEEP_LINK_WORK; }
  assert.ok(existsSync(join(f.root, 'f'.repeat(64), 'link-work', 'link-args.json')));
  assert.equal(existsSync(join(f.root, 'f'.repeat(64), '.link')), false);
  assert.throws(() => linkCachedEdgeProgram({ ...f.options, result: { ...f.options.result, linkWork: undefined }, key: '0'.repeat(64) }),
    { message: 'The edge build needs the Node build\'s link inputs (internal error)' });
  // An unoptimized build (a dev build, or LASM_TEST_UNOPTIMIZED) needs the Node link driver.
  process.env.LASM_TEST_UNOPTIMIZED = '1';
  try { assert.throws(() => linkCachedEdgeProgram({ ...f.options, key: '2'.repeat(64) }), /The edge dev profile needs the Node link driver/); }
  finally { delete process.env.LASM_TEST_UNOPTIMIZED; }
  assert.throws(() => linkCachedEdgeProgram({ ...f.options, result: { ...f.options.result, profile: 'dev' }, key: '1'.repeat(64) }), /The edge dev profile needs the Node link driver/);
});
