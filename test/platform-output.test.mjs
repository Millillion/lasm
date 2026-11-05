// --output with a platform target names the deployable directory (0.5.0,
// docs/DECISIONS.md): the edge and WASI writers put the platform directory at
// --output, or at the target's own directory in the project without it, and
// never replace a directory that holds something else (a Node build included).
import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { join, relative } from 'node:path';
import { tmpdir } from 'node:os';
import { writeEdgeOutput, edgeTargets } from '../src/edge/edge-build.mjs';
import { writeWasiOutput } from '../src/wasi/wasi-build.mjs';
import { foreignOutputError } from '../src/output-directory.mjs';
import { fixedLayoutTargets } from '../src/cli-arguments.mjs';
import { applicationNotices, leanRuntimeChanges } from '../src/notices.mjs';

const emptyModule = Buffer.from([0x00, 0x61, 0x73, 0x6d, 0x01, 0x00, 0x00, 0x00]);
// The Node build's notices, as test/notices.test.mjs makes them.
const nodeNotices = applicationNotices({ name: 'lean-4.35.0-wasm64', lean: '4.35.0', leanCommit: 'eb6cafb7290e8bd5f2937522d8d804f58f02bafc', emscripten: '6.0.9',
  libraries: ['Init', 'Std', 'Lean', 'leanrt', 'uv'].map(name => `lib/lib${name}.a`),
  patches: Object.fromEntries(Object.keys(leanRuntimeChanges).map(name => [name, '0'.repeat(64)])) },
['Lean', 'Emscripten', 'LLVM libc++', 'musl', 'mimalloc', 'libuv'].map(name => `=== ${name} ===\n${name} licence text\n`).join('\n'));

/** A project with a Lean source, a stand-in Node build in its build cache and
 * a stand-in linked program (the writers only copy these). */
function fixture() {
  const root = mkdtempSync(join(tmpdir(), 'lasm-platform-output-'));
  const project = join(root, 'app');
  mkdirSync(project);
  writeFileSync(join(project, 'Main.lean'), 'def main : IO Unit := pure ()\n');
  const cached = join(project, '.lake/lasm/applications/0123456789abcdef/signature/dist');
  mkdirSync(cached, { recursive: true });
  writeFileSync(join(cached, 'THIRD_PARTY_NOTICES.txt'), nodeNotices);
  const program = join(root, 'program');
  mkdirSync(program);
  writeFileSync(join(program, 'program.mjs'), 'export default function createProgram() {}\n');
  writeFileSync(join(program, 'program.wasm'), emptyModule);
  writeFileSync(join(program, 'main.wasm'), emptyModule);
  const result = { output: cached, cached, signature: 'signature', lean: '4.35.0', profile: 'release', jsBindings: [] };
  const edge = { manifest: { files: {} } };
  return { root, project, source: join(project, 'Main.lean'), result, edge,
    edgeProgram: { directory: program, meta: { suspend: 'jspi', key: 'edge-key' } },
    wasiProgram: { directory: program, meta: { key: 'wasi-key' } } };
}
const quiet = () => {};

test('edge targets: --output names the platform directory; without it, the target\'s directory in the project', () => {
  const f = fixture();
  try {
    const at = join(f.root, 'deploy', 'bun');
    const built = writeEdgeOutput({ target: 'bun', source: f.source, projectDirectory: f.project, result: f.result, edge: f.edge, program: f.edgeProgram, output: at, log: quiet });
    assert.equal(built.output, at);
    for (const file of ['main.mjs', 'lasm/program.mjs', 'lasm/program.wasm', 'build-info.json', 'THIRD_PARTY_NOTICES.txt'])
      assert.ok(existsSync(join(at, file)), file);
    assert.equal(existsSync(join(f.project, 'bun')), false);
    // The Node build stays in the build cache: nothing is written to dist/.
    assert.equal(existsSync(join(f.project, 'dist')), false);
    const byDefault = writeEdgeOutput({ target: 'workers', source: f.source, projectDirectory: f.project, result: f.result, edge: f.edge, program: f.edgeProgram, log: quiet });
    assert.equal(byDefault.output, join(f.project, 'workers'));
    assert.ok(existsSync(join(f.project, 'workers/worker.mjs')));
  } finally { rmSync(f.root, { recursive: true, force: true }); }
});

test('edge targets: the run hint names the directory that was written', () => {
  const f = fixture();
  const lines = [];
  try {
    writeEdgeOutput({ target: 'deno', source: f.source, projectDirectory: f.project, result: f.result, edge: f.edge, program: f.edgeProgram,
      output: join(f.project, 'out/deno'), log: line => lines.push(line) });
    assert.match(lines.join('\n'), new RegExp(`deno run -A ${join('out', 'deno').replace(/\\/g, '\\\\')}/main\\.mjs`));
  } finally { rmSync(f.root, { recursive: true, force: true }); }
});

test('Vercel Edge and Netlify Edge refuse --output: the platform fixes their layout', () => {
  const f = fixture();
  try {
    assert.deepEqual(Object.keys(edgeTargets).filter(name => edgeTargets[name].fixedLayout), fixedLayoutTargets);
    for (const target of fixedLayoutTargets)
      assert.throws(() => writeEdgeOutput({ target, source: f.source, projectDirectory: f.project, result: f.result, edge: f.edge, program: f.edgeProgram,
        output: join(f.root, 'elsewhere'), log: quiet }), /--output does not apply to --target .*fixes its layout/);
  } finally { rmSync(f.root, { recursive: true, force: true }); }
});

test('WASI targets: --output names the directory of main.wasm; without it, wasi/', async () => {
  const f = fixture();
  try {
    const at = join(f.project, 'out', 'verify');
    const built = await writeWasiOutput({ target: 'wasi', source: f.source, projectDirectory: f.project, result: f.result, edge: f.edge, program: f.wasiProgram, output: at, log: quiet });
    assert.equal(built.output, at);
    assert.equal(built.wasm, join(at, 'main.wasm'));
    assert.equal(JSON.parse(readFileSync(join(at, 'build-info.json'), 'utf8')).profile, 'wasi');
    assert.equal(existsSync(join(f.project, 'wasi')), false);
    const byDefault = await writeWasiOutput({ target: 'wasi', source: f.source, projectDirectory: f.project, result: f.result, edge: f.edge, program: f.wasiProgram, log: quiet });
    assert.equal(relative(f.project, byDefault.output), 'wasi');
  } finally { rmSync(f.root, { recursive: true, force: true }); }
});

test('a platform --output that holds a Node build (the layout before 0.5.0) is not replaced, and the error says why', async () => {
  const f = fixture();
  try {
    const old = join(f.project, 'dist/server');
    mkdirSync(old, { recursive: true });
    writeFileSync(join(old, 'build-info.json'), JSON.stringify({ target: 'node', profile: 'release' }));
    writeFileSync(join(old, 'main.mjs'), '// a Node build\n');
    assert.throws(() => writeEdgeOutput({ target: 'workers', source: f.source, projectDirectory: f.project, result: f.result, edge: f.edge, program: f.edgeProgram,
      output: old, log: quiet }), /is not a Lasm edge build.*holds a Lasm Node build.*0\.5\.0/);
    await assert.rejects(writeWasiOutput({ target: 'wasi', source: f.source, projectDirectory: f.project, result: f.result, edge: f.edge, program: f.wasiProgram,
      output: old, log: quiet }), /is not a Lasm WASI build.*holds a Lasm Node build/);
    assert.ok(existsSync(join(old, 'main.mjs')), 'the Node build is left alone');
    // Any other directory: the plain message.
    const other = join(f.project, 'mine');
    mkdirSync(other);
    writeFileSync(join(other, 'notes.txt'), 'mine\n');
    assert.equal(foreignOutputError(other, 'edge').message, `${other} exists and is not a Lasm edge build; remove it, or choose another --output`);
  } finally { rmSync(f.root, { recursive: true, force: true }); }
});
