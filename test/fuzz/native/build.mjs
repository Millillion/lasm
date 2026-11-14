// Builds the native libFuzzer targets (test/fuzz/native/targets.json) with the
// system clang (Linux; libFuzzer, ASan, and UBSan for the C host):
//   - lean-*: LasmFuzz.lean compiled to C by the managed Lean 4.35.0, with the
//     C of every Lasm module it imports (from the prefix, which compiles Lasm's
//     library from library/ when the prebuilt copy is stale) and lean_driver.c,
//     linked against Lean's shared runtime and the native builds of Lasm's C
//     glue (library/c/: every JavaScript operation fails cleanly there). Any
//     other host function the objects name is a stub that aborts: the code
//     under test is pure, so a call to one is itself a finding.
//   - wasi-cgi: src/wasi/lasm_fetch_wasi.c's CGI request and response code
//     natively, through cgi_driver.c; fastly-host: its Fastly half
//     (-DLASM_WASI_FASTLY), through fastly_driver.c, which plays Fastly's host.
//   node test/fuzz/native/build.mjs [--out DIR] [--lean-prefix DIR] [target…]
import { execFileSync } from 'node:child_process';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../../', import.meta.url));
const here = fileURLToPath(new URL('./', import.meta.url));
const args = process.argv.slice(2);
const option = name => { const i = args.indexOf(name); if (i < 0) return undefined; const [, v] = args.splice(i, 2); return v; };
const out = resolve(option('--out') ?? join(root, '.work/fuzz/native'));
let prefix = option('--lean-prefix');
const cc = process.env.CC ?? 'clang';
const targets = JSON.parse(readFileSync(join(here, 'targets.json'), 'utf8'));
const selected = args.length ? args : Object.keys(targets);
for (const name of selected) if (!targets[name]) throw new Error(`Unknown native target ${name}`);
if (process.platform !== 'linux') throw new Error('The native fuzz targets build on Linux (clang with libFuzzer)');

const work = mkdtempSync(join(tmpdir(), 'lasm-fuzz-native-'));
mkdirSync(out, { recursive: true });
const run = (file, argv, options = {}) => execFileSync(file, argv, { stdio: ['ignore', 'pipe', 'inherit'], encoding: 'utf8', maxBuffer: 64 << 20, ...options });

if (!prefix) {
  const { provisionLean } = await import('../../../src/managed-lean.mjs');
  writeFileSync(join(work, 'Main.lean'), 'def main : IO Unit := pure ()\n');
  writeFileSync(join(work, 'lean-toolchain'), 'leanprover/lean4:v4.36.0-rc2\n');
  const lean = await provisionLean(join(work, 'Main.lean'), { native: true, progress: ({ stage }) => stage && console.error(`[lean] ${stage}`) });
  prefix = lean.prefix;
}
const leanLib = join(prefix, 'lib', 'lean');
const sanitize = ['-fsanitize=address,fuzzer-no-link', '-fno-omit-frame-pointer', '-g', '-O1'];
const include = ['-I', join(prefix, 'include')];
const link = ['-fsanitize=address,fuzzer', '-L', leanLib, ...readdirSync(leanLib).filter(f => /^lib.*\.so$/.test(f)).map(f => '-l' + f.slice(3, -3)),
  `-Wl,-rpath,${leanLib}`, '-lpthread', '-ldl', '-lm'];
const compile = (source, object, extra = []) => run(cc, ['-c', source, '-o', object, ...sanitize, ...include, '-fwrapv', '-w', ...extra]);

/** The Lasm modules a Lean file imports, transitively (library/ sources). */
function lasmImports(file, seen = new Set()) {
  for (const [, module] of readFileSync(file, 'utf8').matchAll(/^import\s+(Lasm(?:\.\w+)*)/gm)) {
    if (seen.has(module)) continue;
    seen.add(module);
    lasmImports(join(root, 'library', ...module.split('.')) + '.lean', seen);
  }
  return seen;
}

/** Stubs that abort for Lasm's host functions the objects reference but nothing defines. */
function stubs(objects, dir) {
  const symbols = file => run('nm', ['-P', file]).split('\n').map(l => l.split(' ')).filter(p => p.length >= 2);
  const defined = new Set(), undefinedSymbols = new Set();
  for (const o of objects) for (const [name, type] of symbols(o)) (type === 'U' ? undefinedSymbols : defined).add(name);
  for (const lib of readdirSync(leanLib).filter(f => f.endsWith('.so')))
    for (const line of run('nm', ['-D', '--defined-only', '-P', join(leanLib, lib)]).split('\n')) defined.add(line.split(' ')[0]);
  const missing = [...undefinedSymbols].filter(s => !defined.has(s) && /^(lasm_|__wrap_|emscripten_|w_)/.test(s)).sort();
  const file = join(dir, 'stubs.c');
  writeFileSync(file, '#include <stdio.h>\n#include <stdlib.h>\n' + missing.map(s =>
    `void ${s}(void) { fputs("Lasm fuzz: host function ${s} called\\n", stderr); abort(); }\n`).join(''));
  const object = join(dir, 'stubs.o');
  compile(file, object);
  if (missing.length) console.log(`  stubs: ${missing.join(', ')}`);
  return object;
}

let leanObjects;
function buildLean() {
  if (leanObjects) return leanObjects;
  const dir = join(work, 'lean');
  mkdirSync(dir, { recursive: true });
  const harness = join(here, 'LasmFuzz.lean');
  const env = { ...process.env, LEAN_PATH: leanLib, LEAN_NUM_THREADS: '2' };
  for (const key of Object.keys(env)) if (/^(?:LAKE_|ELAN_)/.test(key)) delete env[key];
  run(join(prefix, 'bin', 'lean'), ['-c', join(dir, 'LasmFuzz.c'), harness], { env, cwd: here });
  const sources = [join(dir, 'LasmFuzz.c'), ...[...lasmImports(harness)].map(m => join(prefix, 'lib', 'lasm', 'c', ...m.split('.')) + '.c'),
    join(root, 'library/c/lasm_js.c'), join(root, 'library/c/lasm_fetch.c')];
  leanObjects = sources.map((source, i) => { const object = join(dir, `${i}.o`); compile(source, object); return object; });
  console.log(`  Lean: ${sources.length} C files (LasmFuzz, ${sources.length - 3} Lasm modules, the native C glue)`);
  return leanObjects;
}

for (const name of selected) {
  const target = targets[name];
  console.log(`build ${name}`);
  const dir = join(work, name);
  mkdirSync(dir, { recursive: true });
  let objects;
  if (target.kind === 'lean') {
    const driver = join(dir, 'driver.o');
    compile(join(here, 'lean_driver.c'), driver, [`-DLASM_FUZZ_ENTRY=${target.entry}`]);
    objects = [...buildLean(), driver];
  } else {
    const driver = join(dir, 'driver.o');
    compile(join(here, target.driver), driver, ['-I', join(root, 'src', 'wasi'), '-fsanitize=undefined', '-fno-sanitize-recover=undefined',
      ...(target.defines ?? []).map(d => `-D${d}`)]);
    objects = [driver];
  }
  const binary = join(out, target.binary);
  run(cc, ['-o', binary, ...objects, stubs(objects, dir), ...link, ...(target.kind === 'lean' ? [] : ['-fsanitize=undefined'])]);
  console.log(`ok   ${name}: ${binary}`);
}
