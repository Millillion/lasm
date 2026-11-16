// Library modules compiled on first import (src/lazy-library.mjs): discovery under the generated namespaces,
// dependencies from the sources' imports, stamps, parallelism, atomic outputs, and the managed cache's
// verification of a prefix that holds them (src/managed-artifacts.mjs).
import test from 'node:test';
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, readdirSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { dirname, join } from 'node:path';
import { compiledLazyModules, defaultJobs, ensureLazyModules, importsOfSource, isLazyNamespace, lazyClosure, lazyModules,
  programLibraryImports } from '../src/lazy-library.mjs';
import { verifyArtifactDirectory } from '../src/managed-artifacts.mjs';

const put = (file, text) => { mkdirSync(dirname(file), { recursive: true }); writeFileSync(file, text); };
/** A library root with Lasm.JS.Web.A (imports B), B, C (imports A, B), and an eager Lasm.JS.Web.Core. */
function fixture() {
  const dir = mkdtempSync(join(tmpdir(), 'lasm-lazy-'));
  const root = join(dir, 'library'), tree = join(dir, 'prefix');
  put(join(root, 'Lasm/JS/Web/Core.lean'), 'import Lasm.JS\n');
  put(join(root, 'Lasm/JS/Web/B.lean'), 'import Lasm.JS.Web.Core\n');
  put(join(root, 'Lasm/JS/Web/A.lean'), '/- a comment\nimport Not.This -/\nimport Lasm.JS.Web.B\n');
  put(join(root, 'Lasm/JS/Web/C.lean'), 'public import Lasm.JS.Web.A Lasm.JS.Web.B\n');
  put(join(root, 'Lasm/Fetch.lean'), 'import Lasm.JS\n');
  mkdirSync(join(tree, 'lib', 'lean'), { recursive: true });
  return { dir, root, tree, eager: ['Lasm.JS', 'Lasm.JS.Web.Core', 'Lasm.Fetch'] };
}
/** A compile that writes its -o and -c outputs, recording what ran and how many ran at once. */
function fakeCompile({ fail = new Set(), delay = 5 } = {}) {
  const runs = [];
  let running = 0, most = 0;
  const compile = async ({ args }) => {
    const source = args.at(-1), olean = args[args.indexOf('-o') + 1], c = args[args.indexOf('-c') + 1];
    running++; most = Math.max(most, running);
    await new Promise(r => setTimeout(r, delay));
    running--;
    const module = source.split(/[\\/]src[\\/]lean[\\/]/)[1].replace(/\.lean$/, '').split(/[\\/]/).join('.');
    runs.push(module);
    writeFileSync(olean, `olean of ${module}`);
    if (fail.has(module)) throw new Error(`Lean failed on ${module}`);
    writeFileSync(c, `c of ${module}`);
  };
  return { compile, runs, most: () => most };
}

test('imports, namespaces and dependency order come from the sources', () => {
  assert.deepEqual(importsOfSource('import A\npublic import B C\n-- import D\n/- import E -/\nmeta import F -- x\n'), ['A', 'B', 'C', 'F']);
  assert.ok(isLazyNamespace('Lasm.JS.Node.Http'));
  assert.ok(!isLazyNamespace('Lasm.UI.Html'));
  const { root, eager, dir } = fixture();
  try {
    assert.deepEqual(lazyModules(eager, root), ['Lasm.JS.Web.A', 'Lasm.JS.Web.B', 'Lasm.JS.Web.C']);
    const { order, deps } = lazyClosure(['Lasm.JS.Web.C', 'Lasm.Fetch'], { isLazy: m => lazyModules(eager, root).includes(m),
      read: m => readFileSync(join(root, ...m.split('.')) + '.lean', 'utf8') });
    assert.deepEqual(order, ['Lasm.JS.Web.B', 'Lasm.JS.Web.A', 'Lasm.JS.Web.C']);
    assert.deepEqual(deps.get('Lasm.JS.Web.C'), ['Lasm.JS.Web.A', 'Lasm.JS.Web.B']);
    put(join(dir, 'project', 'Main.lean'), 'import Lasm.JS.Web.C\nimport Std\n');
    put(join(dir, 'project', '.lake', 'x', 'Y.lean'), 'import Lasm.JS.Web.A\n');
    assert.deepEqual(programLibraryImports(join(dir, 'project')), ['Lasm.JS.Web.C']);
    assert.equal(defaultJobs({ cores: 16, memory: 64 * 1024 ** 3 }), 8);
    assert.equal(defaultJobs({ cores: 16, memory: 8 * 1024 ** 3 }), 2);
    assert.equal(defaultJobs({ cores: 1, memory: 1024 ** 3 }), 1);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});

test('first import compiles what is missing, dependencies first and in parallel; later imports reuse it', async () => {
  const { root, tree, eager, dir } = fixture();
  try {
    const logs = [];
    const fake = fakeCompile();
    const first = await ensureLazyModules(tree, ['Lasm.JS.Web.C'], { eager, root, log: m => logs.push(m), jobs: 2, compile: fake.compile });
    assert.deepEqual(first.compiled, ['Lasm.JS.Web.B', 'Lasm.JS.Web.A', 'Lasm.JS.Web.C']);
    assert.deepEqual(fake.runs, ['Lasm.JS.Web.B', 'Lasm.JS.Web.A', 'Lasm.JS.Web.C']); // a chain: never two at once
    assert.match(logs[0], /^\[lasm\] Compiling 3 Lasm library modules on first use/);
    assert.ok(logs.includes('[lasm] Compiling Lasm.JS.Web.A (first use)…'));
    assert.match(logs.at(-1), /^\[lasm\] Compiled 3 Lasm library modules in \d+\.\d s\.$/);
    assert.equal(readFileSync(join(tree, 'lib/lean/Lasm/JS/Web/A.olean'), 'utf8'), 'olean of Lasm.JS.Web.A');
    assert.ok(existsSync(join(tree, 'src/lean/Lasm/JS/Web/A.lean')));
    assert.deepEqual(compiledLazyModules(tree, eager, root), ['Lasm.JS.Web.B', 'Lasm.JS.Web.A', 'Lasm.JS.Web.C']);
    const again = fakeCompile();
    assert.deepEqual((await ensureLazyModules(tree, ['Lasm.JS.Web.C'], { eager, root, log: () => {}, compile: again.compile })).compiled, []);
    assert.deepEqual(again.runs, []);
    // A changed source recompiles it and what imports it, not the rest.
    put(join(root, 'Lasm/JS/Web/A.lean'), 'import Lasm.JS.Web.B\n-- changed\n');
    const changed = fakeCompile();
    assert.deepEqual((await ensureLazyModules(tree, ['Lasm.JS.Web.C'], { eager, root, log: () => {}, compile: changed.compile })).compiled,
      ['Lasm.JS.Web.A', 'Lasm.JS.Web.C']);
    // Independent modules compile at once, up to `jobs`.
    for (const n of ['D', 'E', 'F', 'G']) put(join(root, `Lasm/JS/Web/${n}.lean`), 'import Lasm.JS.Web.Core\n');
    const wide = fakeCompile({ delay: 30 });
    await ensureLazyModules(tree, ['Lasm.JS.Web.D', 'Lasm.JS.Web.E', 'Lasm.JS.Web.F', 'Lasm.JS.Web.G'], { eager, root, log: () => {}, jobs: 2, compile: wide.compile });
    assert.equal(wide.most(), 2);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});

test('an interrupted compile leaves no .olean, .c or stamp in the prefix', async () => {
  const { root, tree, eager, dir } = fixture();
  try {
    const fake = fakeCompile({ fail: new Set(['Lasm.JS.Web.A']) });
    await assert.rejects(ensureLazyModules(tree, ['Lasm.JS.Web.A'], { eager, root, log: () => {}, compile: fake.compile }), /Lean failed on Lasm\.JS\.Web\.A/);
    assert.ok(!existsSync(join(tree, 'lib/lean/Lasm/JS/Web/A.olean')), 'no partial .olean');
    assert.ok(!existsSync(join(tree, 'lib/lasm/lazy/Lasm.JS.Web.A.json')), 'no stamp');
    assert.deepEqual(readdirSync(join(tree, 'lib/lean/Lasm/JS/Web')).filter(f => f.includes('.tmp-')), [], 'temporary files removed');
    // B, its dependency, was compiled and stamped; the next attempt compiles only A.
    const retry = fakeCompile();
    assert.deepEqual((await ensureLazyModules(tree, ['Lasm.JS.Web.A'], { eager, root, log: () => {}, compile: retry.compile })).compiled, ['Lasm.JS.Web.A']);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});

test('the managed cache accepts a prefix holding stamped modules, and refuses a changed one', async () => {
  const { root, tree, eager, dir } = fixture();
  try {
    // A receipt for the prefix as it was assembled (one file).
    put(join(tree, 'bin', 'lean'), 'lean');
    const bytes = readFileSync(join(tree, 'bin', 'lean'));
    const files = { bin: { type: 'directory' }, 'bin/lean': { type: 'file', bytes: bytes.length, sha256: createHash('sha256').update(bytes).digest('hex'),
      ...(process.platform === 'win32' ? {} : { executable: false }) }, lib: { type: 'directory' }, 'lib/lean': { type: 'directory' } };
    writeFileSync(join(tree, '.lasm-artifact.json'), JSON.stringify({ schema: 1, identity: 'test', files }));
    await verifyArtifactDirectory(tree, 'test');
    await ensureLazyModules(tree, ['Lasm.JS.Web.A'], { eager, root, log: () => {}, compile: fakeCompile().compile });
    await verifyArtifactDirectory(tree, 'test');
    writeFileSync(join(tree, 'lib/lean/Lasm/JS/Web/A.olean'), 'tampered');
    await assert.rejects(verifyArtifactDirectory(tree, 'test'), /Managed cache contents changed/);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});

test('ensureProgramLibrary: the imports of the directory\'s files, messages as progress stages or log lines, the shared lock', async () => {
  const { ensureProgramLibrary } = await import('../src/lazy-library.mjs');
  const { root, tree, eager, dir } = fixture();
  try {
    // Without a lazy import nothing is compiled, and the lock is not taken.
    put(join(dir, 'p1', 'Main.lean'), 'import Lasm.JS\n');
    const locks = [];
    assert.deepEqual((await ensureProgramLibrary(tree, join(dir, 'p1'), { eager, lock: async (...a) => { locks.push(a); return a[1](); } })).compiled, []);
    assert.deepEqual(locks, []);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});
