// Editor support end to end (docs/GETTING_STARTED.md#editor): for every
// `lasm init` template, an installed Lasm runs `lasm editor` (Lasm's Lake
// package required and linked; nothing in elan), then the Lean language server,
// started through elan's `lake` proxy exactly as the VS Code extension starts
// it, with the project's own toolchain (lean-toolchain, Lean 4.35.0), opens
// every .lean file: no error (in particular no unknown `import Lasm.*`).
// The `c-package` project (not a template) depends on a Lake package with C
// code (`precompileModules`, like UnicodeBasic): `lake setup-file` compiles that
// C with the project's toolchain, Lean's own clang (issue #72).
// The `lake-library` project (not a template) imports a module of Lasm's library
// compiled on first import (Lasm.JS.Web.IndexedDB): `lasm editor` adds the
// require of Lasm's Lake package and links it, and the language server builds
// that module through Lake (decision 0.3-7).
// The `lean-exe` project (not a template; issue #343, decision 0.7-25) is `lake
// new hello exe`: a native `lake build` of its lean_exe, with no C compiler on
// PATH but a `cc` that fails, works before and after `lasm build` (with the
// editor setup on, LASM_EDITOR=1), and lasm build sets no elan override.
// Needs elan on PATH.
//   node editor-templates.mjs CANDIDATE_TGZ WORK_DIR RESULT.json [--templates a,b]
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { homedir } from 'node:os';
import { delimiter, dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const args = process.argv.slice(2);
const i = args.indexOf('--templates');
const only = i >= 0 ? args.splice(i, 2)[1].split(',') : undefined;
const [tgzArg, workArg, resultArg] = args;
assert.ok(tgzArg && workArg && resultArg, 'Usage: node editor-templates.mjs CANDIDATE_TGZ WORK_DIR RESULT.json [--templates a,b]');
const tgz = resolve(tgzArg), work = resolve(workArg), resultFile = resolve(resultArg);
const templates = only ?? ['plain', 'express', 'hono', 'fastify', 'std-http', 'web', 'fetch', 'fullstack', 'c-package', 'lake-library', 'lean-exe'];
const depLakefile = precompile => `name = "dep"\n${precompile ? 'precompileModules = true\n' : ''}\n[[lean_lib]]\nname = "Dep"\n`;
/** A Lake project whose dependency has C code: precompiled modules (as UnicodeBasic). */
function writeCPackage(app) {
  mkdirSync(join(app, 'dep'), { recursive: true });
  for (const directory of [app, join(app, 'dep')]) writeFileSync(join(directory, 'lean-toolchain'), 'leanprover/lean4:v4.35.0\n');
  writeFileSync(join(app, 'lakefile.toml'), 'name = "app"\n\n[[require]]\nname = "dep"\npath = "dep"\n\n[[lean_lib]]\nname = "App"\n');
  writeFileSync(join(app, 'App.lean'), 'import Dep\n\ndef hello : String := Dep.greeting\n');
  writeFileSync(join(app, 'dep', 'lakefile.toml'), depLakefile(true));
  writeFileSync(join(app, 'dep', 'Dep.lean'), 'def Dep.greeting : String := "hello"\n');
}
/** A Lake project that imports a module of Lasm's library compiled on first import, and does not yet require Lasm's package. */
function writeLakeLibrary(app) {
  mkdirSync(app, { recursive: true });
  writeFileSync(join(app, 'lean-toolchain'), 'leanprover/lean4:v4.35.0\n');
  writeFileSync(join(app, 'lakefile.toml'), 'name = "app"\n\n[[lean_lib]]\nname = "App"\n');
  writeFileSync(join(app, 'App.lean'), 'import Lasm.JS.Web.IndexedDB\nopen Lasm.JS.Web\n\ndef mode : String := IDBTransactionMode.readwrite.val\n');
}
/** `lake new hello exe`: a Lake project whose one target is a native executable, without Lasm's library. */
function writeLeanExe(app) {
  mkdirSync(app, { recursive: true });
  writeFileSync(join(app, 'lean-toolchain'), 'leanprover/lean4:v4.35.0\n');
  writeFileSync(join(app, 'lakefile.toml'), 'name = "hello"\nversion = "0.1.0"\ndefaultTargets = ["hello"]\n\n[[lean_exe]]\nname = "hello"\nroot = "Main"\n');
  writeFileSync(join(app, 'Main.lean'), 'def main : IO Unit :=\n  IO.println "Hello, world!"\n');
}
const exe = name => process.platform === 'win32' ? `${name}.exe` : name;
const lake = (process.env.PATH ?? '').split(delimiter).map(d => join(d, exe('lake'))).find(existsSync);
assert.ok(lake, 'elan (its lake proxy) must be on PATH');
const npm = [join(dirname(process.execPath), 'npm')];
const check = fileURLToPath(new URL('./editor-check.mjs', import.meta.url));
const result = { candidate: tgz, lake, templates: [] };
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
const run = (label, command, argv, cwd, env = {}) => {
  const started = performance.now();
  const r = spawnSync(command, argv, { cwd, encoding: 'utf8', timeout: 1_800_000, env: { ...process.env, ELAN_NO_OVERRIDE_NOTICE: '1', npm_config_audit: 'false', npm_config_fund: 'false', ...env } });
  const step = { label, code: r.status, seconds: +((performance.now() - started) / 1000).toFixed(1), stdout: r.stdout?.slice(-3000), stderr: r.stderr?.slice(-3000) };
  console.log(`${label}: ${r.status === 0 ? 'ok' : 'FAILED'} (${step.seconds} s)\n${(r.stdout ?? '').trim()}\n${(r.stderr ?? '').trim()}`.trim());
  return { r, step };
};
mkdirSync(join(work, 'cli'), { recursive: true });
assert.equal(run('install', npm[0], ['install', '--no-save', tgz], join(work, 'cli')).r.status, 0);
const lasm = [process.execPath, join(work, 'cli', 'node_modules', '@lasm', 'compiler', 'bin', 'lasm.mjs')];
let failed = 0;
// lean-exe (#343): no C compiler on PATH, only elan and a `cc` that fails and leaves a mark when run.
const elanHome = process.env.ELAN_HOME || join(homedir(), '.elan');
const poison = join(work, 'poisoned-cc');
const nativeEnv = { PATH: [poison, dirname(lake)].join(delimiter) };
const overrideOf = app => { try { return readFileSync(join(elanHome, 'settings.toml'), 'utf8').split('\n').find(line => line.startsWith(JSON.stringify(app))); } catch { return undefined; } };
for (const template of templates) {
  const app = join(work, `app-${template}`), entry = { template, steps: [] };
  result.templates.push(entry);
  const cPackage = template === 'c-package', lakeLibrary = template === 'lake-library', leanExe = template === 'lean-exe';
  if (cPackage) writeCPackage(app);
  if (lakeLibrary) writeLakeLibrary(app);
  if (leanExe) {
    writeLeanExe(app);
    mkdirSync(poison, { recursive: true });
    writeFileSync(join(poison, 'cc'), `#!/bin/sh\necho "$@" > ${JSON.stringify(join(poison, 'used'))}\nexit 1\n`, { mode: 0o755 });
  }
  const requireAdded = (label, r) => /added Lasm's library to lakefile\.toml/.test(r.stderr ?? '') ? undefined : `${label}: expected the require of Lasm's Lake package to be added`;
  const noOverride = (label, r) => overrideOf(app) ? `${label}: an elan override is set for ${app}: ${overrideOf(app)}`
    : /elan override set|elan toolchain lasm-/.test(r.stderr ?? '') ? `${label}: Lasm reported changing elan` : undefined;
  const nativeBuilt = (label, r) => existsSync(join(poison, 'used')) ? `${label}: the system \`cc\` was run (${readFileSync(join(poison, 'used'), 'utf8').trim()})`
    : existsSync(join(app, '.lake', 'build', 'bin', exe('hello'))) ? undefined : `${label}: no hello executable`;
  const clean = ['clean the native build', process.execPath, ['-e', `require('node:fs').rmSync(${JSON.stringify(join(app, '.lake', 'build'))}, { recursive: true, force: true }); require('node:fs').rmSync(${JSON.stringify(join(poison, 'used'))}, { force: true })`], app];
  const steps = leanExe ? [
    ['lake build (native, before lasm)', lake, ['build'], app, nativeBuilt, nativeEnv],
    ['lasm build', lasm[0], [lasm[1], 'build', 'Main.lean'], app, noOverride, { LASM_EDITOR: '1' }],
    clean,
    ['lake build (native, after lasm build)', lake, ['build'], app, nativeBuilt, nativeEnv],
  ] : [
    ...(cPackage || lakeLibrary ? [] : [['init', lasm[0], [lasm[1], 'init', app, '--template', template], work]]),
    ['lasm editor', lasm[0], [lasm[1], 'editor'], app, lakeLibrary ? (label, r) => requireAdded(label, r) ?? noOverride(label, r) : noOverride],
    ...(cPackage ? [['lake setup-file', lake, ['setup-file', join(app, 'App.lean')], app]] : []),
    ['language server', process.execPath, [check, app, lake, '900'], app]];
  for (const [label, command, argv, cwd, verify, env] of steps) {
    const { r, step } = run(`${template}: ${label}`, command, argv, cwd ?? app, env);
    const problem = r.status === 0 ? verify?.(label, r) : undefined;
    if (problem) { step.problem = problem; console.log(problem); }
    entry.steps.push(step); save();
    if (r.status !== 0 || problem) { failed++; entry.passed = false; break; }
  }
  entry.passed ??= true; save();
}
result.passed = failed === 0; save();
assert.equal(failed, 0, `${failed} template(s) failed`);
