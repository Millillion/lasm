// Lasm.UI's Lean checks, run natively with the managed Lean (no Wasm build):
//   - assembling the Lean prefix compiles Lasm's library, so Lasm.UI and every
//     other module must elaborate;
//   - library/Lasm/UI/Proofs*: the proofs compile, with no `sorry`, and the main
//     theorems use only Lean's standard axioms;
//   - test/ui/DiffModel.lean: random diffs checked against the DOM model;
//   - test/ui/Fixtures.lean: the applier test's patch fixtures must be current
//     (--fixtures rewrites test/fixtures/ui/patches.json);
//   - examples/ui/* and templates/fullstack: they elaborate (TodoMVC's and the
//     template's proofs included), with no `sorry`.
//   node scripts/ui/lean-tests.mjs [--fixtures]
import { execFileSync } from 'node:child_process';
import { cpSync, mkdtempSync, readFileSync, readdirSync, rmSync, writeFileSync, existsSync, mkdirSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { provisionLean } from '../../src/managed-lean.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const writeFixtures = process.argv.includes('--fixtures');
const work = mkdtempSync(join(tmpdir(), 'lasm-ui-lean-'));
const failures = [];
try {
  writeFileSync(join(work, 'Main.lean'), 'import Lean\ndef main : IO Unit := pure ()\n');
  writeFileSync(join(work, 'lean-toolchain'), 'leanprover/lean4:v4.36.0-rc1\n');
  const started = Date.now();
  const lean = await provisionLean(join(work, 'Main.lean'), { modules: 'extended', progress: ({ stage }) => stage && console.error(`[lean] ${stage}`) });
  console.log(`Lean prefix with Lasm's library (Lasm.UI compiled): ${((Date.now() - started) / 1000).toFixed(1)} s`);
  const env = { ...process.env };
  for (const key of Object.keys(env)) if (/^(?:LEAN_|LAKE_|ELAN_)/.test(key)) delete env[key];
  const leanPath = extra => [...extra, join(lean.prefix, 'lib', 'lean')].join(process.platform === 'win32' ? ';' : ':');
  const run = (args, extra = [], cwd = root) => execFileSync(lean.lean, args, { cwd, env: { ...env, LEAN_PATH: leanPath(extra), LEAN_NUM_THREADS: '2' },
    encoding: 'utf8', maxBuffer: 64 * 1024 * 1024, stdio: ['ignore', 'pipe', 'pipe'], timeout: 900_000 });
  const check = (name, fn) => {
    const t = Date.now();
    try { const detail = fn(); console.log(`ok   ${name} (${((Date.now() - t) / 1000).toFixed(1)} s)${detail ? ': ' + detail : ''}`); }
    catch (error) { failures.push(name); console.log(`FAIL ${name}\n${error.stdout ?? ''}${error.stderr ?? ''}${error.stdout || error.stderr ? '' : error.message}`); }
  };
  check('proofs (library/Lasm/UI/Proofs*)', () => {
    const out = join(work, 'proofs');
    // Lean takes a module's package (Lasm) from the first search path that has
    // it, so the library's compiled modules go beside the proofs.
    cpSync(join(lean.prefix, 'lib', 'lean', 'Lasm'), join(out, 'Lasm'), { recursive: true });
    mkdirSync(join(out, 'Lasm', 'UI', 'Proofs'), { recursive: true });
    let log = '';
    for (const m of ['Basic', 'Lists', 'Children', 'TwoEnded', 'Diff'])
      log += run(['-R', join(root, 'library'), '-o', join(out, 'Lasm/UI/Proofs', m + '.olean'), join(root, 'library/Lasm/UI/Proofs', m + '.lean')], [out]);
    log += run(['-R', join(root, 'library'), '-o', join(out, 'Lasm/UI/Proofs.olean'), join(root, 'library/Lasm/UI/Proofs.lean')], [out]);
    if (/declaration uses `sorry`|error:/.test(log)) throw Object.assign(new Error('sorry or error'), { stdout: log });
    const theorems = ['diff_correct', 'mount_correct', 'session_correct', 'diffAttrs_correct'];
    writeFileSync(join(out, 'Axioms.lean'), 'import Lasm.UI.Proofs\n' + theorems.map(t => `#print axioms Lasm.UI.Proofs.${t}\n`).join(''));
    const axioms = run([join(out, 'Axioms.lean')], [out]);
    if (/sorryAx/.test(axioms) || !/depends on axioms/.test(axioms)) throw Object.assign(new Error('unexpected axioms'), { stdout: axioms });
    for (const line of axioms.trim().split('\n')) {
      const list = line.match(/\[(.*)\]/)?.[1].split(',').map(x => x.trim()) ?? [];
      for (const a of list) if (!['propext', 'Classical.choice', 'Quot.sound'].includes(a)) throw Object.assign(new Error(`axiom ${a}`), { stdout: axioms });
    }
    return theorems.join(', ') + ': only propext, Classical.choice, Quot.sound';
  });
  check('html!, the DSL, render and URLs (test/ui/SyntaxTest.lean)', () => { run(['test/ui/SyntaxTest.lean']); return ''; });
  check('the examples of docs/UI.md (test/ui/DocsTest.lean)', () => { run(['test/ui/DocsTest.lean']); return ''; });
  check('diff against the DOM model (test/ui/DiffModel.lean)', () => run(['--run', 'test/ui/DiffModel.lean']).trim().split('\n').join('; '));
  check('applier fixtures are current (test/ui/Fixtures.lean)', () => {
    const fixtures = run(['--run', 'test/ui/Fixtures.lean']);
    const file = join(root, 'test/fixtures/ui/patches.json');
    if (writeFixtures) { writeFileSync(file, fixtures); return 'rewritten'; }
    if (readFileSync(file, 'utf8') !== fixtures) throw new Error('test/fixtures/ui/patches.json is stale: run node scripts/ui/lean-tests.mjs --fixtures');
    return `${JSON.parse(fixtures).length} scenarios`;
  });
  // Examples: each directory's modules, Main last (others in dependency order by name list).
  const examples = join(root, 'examples/ui');
  for (const name of readdirSync(examples).sort()) {
    const dir = join(examples, name);
    if (!existsSync(join(dir, 'Main.lean'))) continue;
    check(`examples/ui/${name} elaborates`, () => {
      const out = join(work, 'examples', name);
      mkdirSync(out, { recursive: true });
      const modules = readdirSync(dir).filter(f => f.endsWith('.lean') && f !== 'Main.lean').map(f => f.slice(0, -5));
      let log = '';
      for (const m of modules) log += run(['-R', dir, '-o', join(out, m + '.olean'), join(dir, m + '.lean')], [out]);
      log += run(['-R', dir, join(dir, 'Main.lean')], [out]);
      if (/declaration uses `sorry`|error:/.test(log)) throw Object.assign(new Error('sorry or error'), { stdout: log });
      return modules.length ? `with ${modules.join(', ')}` : '';
    });
  }
  // The fullstack template: shared modules first (Lake's libraries), then both programs.
  check('templates/fullstack elaborates (its theorems included)', () => {
    const dir = join(root, 'templates/fullstack'), out = join(work, 'fullstack');
    mkdirSync(out, { recursive: true });
    let log = '';
    for (const m of ['Shared', 'View']) log += run(['-R', dir, '-o', join(out, m + '.olean'), join(dir, m + '.lean')], [out]);
    for (const m of ['Client', 'Server']) log += run(['-R', dir, join(dir, m + '.lean')], [out]);
    if (/declaration uses `sorry`|error:/.test(log)) throw Object.assign(new Error('sorry or error'), { stdout: log });
    return '';
  });
} finally { rmSync(work, { recursive: true, force: true }); }
if (failures.length) { console.log(`${failures.length} failed: ${failures.join(', ')}`); process.exit(1); }
console.log('All Lasm.UI Lean checks passed');
