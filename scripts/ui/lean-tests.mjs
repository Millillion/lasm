// Lasm.UI's Lean checks, run natively with the managed Lean (no Wasm build):
//   - assembling the Lean prefix compiles Lasm's library, so Lasm.UI, its
//     proofs (Lasm.UI.Proofs) and every other module must elaborate;
//   - test/ui/DiffModel.lean: random diffs checked against the DOM model;
//   - test/ui/Fixtures.lean: the applier test's patch fixtures must be current
//     (--fixtures rewrites test/fixtures/ui/patches.json);
//   - examples/ui/*: every example elaborates (TodoMVC's proofs included), with
//     no `sorry`.
//   node scripts/ui/lean-tests.mjs [--fixtures]
import { execFileSync } from 'node:child_process';
import { mkdtempSync, readFileSync, readdirSync, rmSync, writeFileSync, existsSync, mkdirSync } from 'node:fs';
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
  writeFileSync(join(work, 'lean-toolchain'), 'leanprover/lean4:v4.35.0\n');
  const started = Date.now();
  const lean = await provisionLean(join(work, 'Main.lean'), { modules: 'extended', progress: ({ stage }) => stage && console.error(`[lean] ${stage}`) });
  console.log(`Lean prefix with Lasm's library (Lasm.UI and its proofs compiled): ${((Date.now() - started) / 1000).toFixed(1)} s`);
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
} finally { rmSync(work, { recursive: true, force: true }); }
if (failures.length) { console.log(`${failures.length} failed: ${failures.join(', ')}`); process.exit(1); }
console.log('All Lasm.UI Lean checks passed');
