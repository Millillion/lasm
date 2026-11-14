// Metamorphic compiler relations (docs/TESTING.md#metamorphic-compiler-relations):
// a semantics-preserving change to a Lean program must not change what the
// program built by Lasm prints, on any target. No oracle is needed: the
// program and its transform are built and run alike, and their stdout,
// stderr and exit status must agree (after the renaming, for `rename`).
//
// The programs are the differential generator's (generate.mjs, features.mjs):
// per seed, a core program and a feature program. The transforms:
//   rename    every case's names get another prefix (`c12…` becomes `zqv12…`):
//             names reach the output only through printed names, which are
//             mapped back before the comparison;
//   reorder   the cases' declarations in a random order, main still calling
//             them in the original one (cases are independent);
//   dead      unused declarations (copies of cases under other names, never
//             called) and unused imports;
//   noinline  `@[noinline]` on every plain top-level `def` of the cases;
//   modules   the program split into modules: the preamble in Pre.lean, the
//             cases in A.lean and B.lean, main in Main.lean (cross-module
//             compilation, initialization and linking).
//
//   node scripts/differential/metamorphic.mjs --lasm PATH/bin/lasm.mjs --work NEW_DIR
//     [--seed N] [--seeds K | --budget-min M] [--cases 60] [--feat-cases 40]
//     [--targets node,wasi-node,edge-node] [--transforms rename,reorder,dead,noinline,modules]
//     [--profile release|dev] [--summary FILE.json] [--render-only DIR]
//
// A divergence writes both programs and their outputs to WORK/repros/. Exit
// status: 0 = every relation held, 1 = a relation broke, 2 = harness error.
import { spawn, spawnSync } from 'node:child_process';
import { cpSync, existsSync, mkdirSync, rmSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import * as g from './generate.mjs';
import { genFeatureProgram } from './features.mjs';

const argv = process.argv.slice(2);
const opt = (name, fallback) => { const i = argv.indexOf(name); return i < 0 ? fallback : argv[i + 1]; };
const lasm = opt('--lasm') && resolve(opt('--lasm'));
const work = resolve(opt('--work', 'metamorphic-work'));
const seed0 = Number(opt('--seed', String(Date.now() % 1e9)));
const seedCount = Number(opt('--seeds', '1'));
const budgetMs = Number(opt('--budget-min', '0')) * 60_000;
const nCases = Number(opt('--cases', '60'));
const nFeatCases = Number(opt('--feat-cases', '40'));
const targets = opt('--targets', 'node,wasi-node,edge-node').split(',').filter(Boolean);
const transforms = opt('--transforms', 'rename,reorder,dead,noinline,modules').split(',').filter(Boolean);
const profile = opt('--profile', 'release');
const summaryFile = opt('--summary', join(work, 'summary.json'));
const runTimeoutMs = Number(opt('--run-timeout-s', '120')) * 1000;
if (!lasm) { console.error('--lasm PATH/bin/lasm.mjs is required'); process.exit(2); }

const nodeJspi = spawnSync(process.execPath, ['-e', 'process.exit(typeof WebAssembly.Suspending === "function" ? 0 : 1)']).status === 0 ? [] : ['--experimental-wasm-jspi'];
const TARGETS = {
  node: { build: [], run: dir => [process.execPath, [join(dir, 'dist/main.mjs')]] },
  'wasi-node': { build: ['--target', 'wasi'], run: dir => [process.execPath, ['--no-warnings', join(work, 'node-wasi-run.mjs'), join(dir, 'wasi/main.wasm')]] },
  'edge-node': { build: ['--target', 'deno'], run: dir => [process.execPath, [...nodeJspi, '--no-warnings', join(dir, 'deno/main.mjs')]] },
};
const TRANSFORMS = { rename, reorder, dead, noinline, modules };
for (const t of targets) if (!TARGETS[t]) { console.error(`unknown target ${t}`); process.exit(2); }
for (const t of transforms) if (!TRANSFORMS[t]) { console.error(`unknown transform ${t}`); process.exit(2); }
mkdirSync(work, { recursive: true });
writeFileSync(join(work, 'node-wasi-run.mjs'), `const emit = process.emitWarning;
process.emitWarning = (w, ...r) => (r[0] === 'ExperimentalWarning' || r[0]?.type === 'ExperimentalWarning') ? undefined : emit.call(process, w, ...r);
const { WASI } = await import('node:wasi');
const { readFileSync } = await import('node:fs');
const [file, ...args] = process.argv.slice(2);
const env = Object.fromEntries(Object.entries(process.env).filter(([k]) => !k.startsWith('NODE_')));
const wasi = new WASI({ version: 'preview1', args: [file, ...args], env, preopens: { '.': process.cwd() }, returnOnExit: true });
const instance = await WebAssembly.instantiate(await WebAssembly.compile(readFileSync(file)), wasi.getImportObject());
process.exitCode = wasi.start(instance);
`);

const env = { ...process.env, CI: '1', BROWSER: 'none', LASM_EDITOR: '0', LEAN_BACKTRACE: '0', NO_COLOR: '1' };
function exec(cmd, args, { cwd, timeout = 30 * 60_000 } = {}) {
  return new Promise(done => {
    const child = spawn(cmd, args, { cwd, env, stdio: ['ignore', 'pipe', 'pipe'] });
    const out = [], err = []; let timedOut = false;
    const timer = setTimeout(() => { timedOut = true; child.kill('SIGKILL'); }, timeout);
    child.stdout.on('data', d => out.push(d));
    child.stderr.on('data', d => err.push(d));
    child.on('error', e => err.push(Buffer.from(String(e))));
    child.on('close', (code, signal) => { clearTimeout(timer); done({ code: timedOut ? 'timeout' : signal ? `signal ${signal}` : code,
      stdout: Buffer.concat(out).toString('utf8').replace(/\r\n/g, '\n'), stderr: Buffer.concat(err).toString('utf8').replace(/\r\n/g, '\n') }); });
  });
}

// ---------- programs: a list of cases, rendered as files ----------
const HEADER_LINES = g.PREAMBLE.split('\n').filter(l => /^(import|open|set_option) /.test(l));
const caseName = (item, prefix = 'c') => `${prefix}${item.index}`;
function mainText(list, prefix, { ending } = {}) {
  const calls = list.map(item => `  IO.eprintln "@${caseName(item, prefix)}"\n  ${caseName(item, prefix)}`).join('\n');
  return `def main : IO UInt32 := do\n${calls || '  pure ()'}\n  IO.eprintln "done"\n${ending ?? '  return 0'}\n`;
}
/** The program as files: { 'Main.lean': … }. */
function render(list, { prefix = 'c', order, extra = '', imports = [], attribute = text => text, ending } = {}) {
  const defs = (order ?? list).map(item => attribute(g.renderCase(item.c, caseName(item, prefix)))).join('\n');
  return { 'Main.lean': `${imports.join('\n')}${imports.length ? '\n' : ''}${g.PREAMBLE}\n${defs}\n${extra}${mainText(list, prefix, { ending })}` };
}
const original = (list, ending) => ({ files: render(list, { ending }), unmap: text => text });
function rename(list, r, ending) {
  return { files: render(list, { prefix: 'zqv', ending }), unmap: text => text.replace(/zqv(\d)/g, 'c$1') };
}
function reorder(list, r, ending) {
  const order = [...list];
  for (let i = order.length - 1; i > 0; i--) { const j = r.int(0, i); [order[i], order[j]] = [order[j], order[i]]; }
  return { files: render(list, { order, ending }), unmap: text => text };
}
function dead(list, r, ending) {
  const copies = list.filter(() => r.int(0, 2) === 0).map(item => g.renderCase(item.c, caseName(item, 'unusedq'))).join('\n');
  return { files: render(list, { extra: copies + '\n', imports: ['import Std.Data.HashMap.Lemmas', 'import Lean.Data.Json'], ending }), unmap: text => text };
}
function noinline(list, r, ending) {
  // Not where the def already has an attribute line (a second @[noinline] would be refused).
  const attribute = text => text.split('\n').map((line, i, lines) => line.startsWith('def ') && !lines[i - 1]?.startsWith('@[') ? '@[noinline] ' + line : line).join('\n');
  return { files: render(list, { attribute, ending }), unmap: text => text };
}
function modules(list, r, ending) {
  const header = HEADER_LINES.filter(l => !l.startsWith('import ')).join('\n');
  const half = Math.ceil(list.length / 2);
  const part = items => `import Pre\n${header}\n\n${items.map(item => g.renderCase(item.c, caseName(item))).join('\n')}\n`;
  return { files: {
    'Pre.lean': g.PREAMBLE,
    'A.lean': part(list.slice(0, half)),
    'B.lean': part(list.slice(half)),
    'Main.lean': `import Pre\nimport A\nimport B\n${header}\n\n${mainText(list, 'c', { ending })}`,
  }, unmap: text => text };
}

async function buildAndRun(dir, files, target) {
  const outDir = join(dir, target);
  rmSync(outDir, { recursive: true, force: true });
  mkdirSync(outDir, { recursive: true });
  for (const [name, text] of Object.entries(files)) writeFileSync(join(outDir, name), text);
  const b = await exec(process.execPath, [lasm, 'build', 'Main.lean', ...TARGETS[target].build, ...(profile === 'dev' ? ['--dev'] : [])], { cwd: outDir });
  if (b.code !== 0) return { built: false, log: (b.stdout + b.stderr).slice(-4000) };
  const runDir = join(outDir, 'run');
  mkdirSync(runDir);
  const [cmd, args] = TARGETS[target].run(outDir);
  const r = await exec(cmd, args, { cwd: runDir, timeout: runTimeoutMs });
  return { built: true, stdout: r.stdout, stderr: r.stderr, code: r.code };
}

const results = { seed0, profile, targets, transforms, programs: 0, checks: 0, broken: [], buildFailures: [] };
async function checkProgram(seed, kind, list, ending) {
  const r = g.rng(seed, 'metamorphic', kind);
  const dir = join(work, `${kind}-${seed}`);
  const base = original(list, ending);
  const variants = transforms.map(t => [t, TRANSFORMS[t](list, r, ending)]);
  for (const target of targets) {
    const expected = await buildAndRun(join(dir, 'original'), base.files, target);
    if (!expected.built) { results.buildFailures.push({ seed, kind, target, transform: 'original', log: expected.log }); console.log(`  build failed: ${kind} ${seed} original on ${target}`); continue; }
    for (const [name, v] of variants) {
      const got = await buildAndRun(join(dir, name), v.files, target);
      results.checks++;
      if (!got.built) {
        // A transform that does not build is a broken relation too: the original builds.
        results.broken.push({ seed, kind, target, transform: name, what: 'does not build', log: got.log });
        console.log(`BROKEN ${kind} ${seed} ${name} on ${target}: does not build`);
        continue;
      }
      const same = ['stdout', 'stderr'].every(k => v.unmap(got[k]) === expected[k]) && got.code === expected.code;
      if (same) continue;
      const repro = join(work, 'repros', `${kind}-${seed}-${name}-${target}`);
      mkdirSync(repro, { recursive: true });
      cpSync(join(dir, 'original', target), join(repro, 'original'), { recursive: true, filter: f => !f.includes('/run') });
      cpSync(join(dir, name, target), join(repro, name), { recursive: true, filter: f => !f.includes('/run') });
      writeFileSync(join(repro, 'outputs.json'), JSON.stringify({ expected, got: { ...got, stdout: v.unmap(got.stdout), stderr: v.unmap(got.stderr) } }, null, 2));
      results.broken.push({ seed, kind, target, transform: name, what: 'different output', repro });
      console.log(`BROKEN ${kind} ${seed} ${name} on ${target}: different output (${repro})`);
    }
  }
  rmSync(dir, { recursive: true, force: true });
  results.programs++;
}

// --render-only DIR: write seed0's programs and their transforms, build nothing.
if (opt('--render-only')) {
  const base = resolve(opt('--render-only'));
  const ending = g.ENDINGS[g.rng(seed0, 'metamorphic-ending').int(0, g.ENDINGS.length - 1)];
  for (const [kind, list] of [['core', g.genProgram(seed0, { cases: nCases })], ['feat', genFeatureProgram(seed0, { cases: nFeatCases })]]) {
    const r = g.rng(seed0, 'metamorphic', kind);
    for (const [name, v] of [['original', original(list, ending)], ...transforms.map(t => [t, TRANSFORMS[t](list, r, ending)])]) {
      mkdirSync(join(base, kind, name), { recursive: true });
      for (const [file, text] of Object.entries(v.files)) writeFileSync(join(base, kind, name, file), text);
    }
  }
  process.exit(0);
}

const started = Date.now();
try {
  for (let k = 0; budgetMs ? Date.now() - started < budgetMs : k < seedCount; k++) {
    const seed = seed0 + k;
    const r = g.rng(seed, 'metamorphic-ending');
    const ending = g.ENDINGS[r.int(0, g.ENDINGS.length - 1)];
    console.log(`seed ${seed}`);
    if (nCases) await checkProgram(seed, 'core', g.genProgram(seed, { cases: nCases }), ending);
    if (nFeatCases) await checkProgram(seed, 'feat', genFeatureProgram(seed, { cases: nFeatCases }), ending);
  }
} catch (error) {
  console.error(error?.stack ?? String(error));
  writeFileSync(summaryFile, JSON.stringify({ ...results, harnessError: String(error) }, null, 2) + '\n');
  process.exit(2);
}
results.minutes = Math.round((Date.now() - started) / 600) / 100;
writeFileSync(summaryFile, JSON.stringify(results, null, 2) + '\n');
console.log(`${results.programs} programs, ${results.checks} relations checked on ${targets.join(', ')}: ${results.broken.length} broken, ${results.buildFailures.length} originals that did not build`);
// An original that does not build is the differential suite's to report; it checks no relation.
process.exit(results.broken.length ? 1 : results.buildFailures.length && !results.checks ? 2 : 0);
