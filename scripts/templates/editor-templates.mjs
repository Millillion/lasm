// Editor support end to end (docs/GETTING_STARTED.md#editor): for every
// `lasm init` template, an installed Lasm runs `lasm editor` (an elan toolchain
// for Lasm's Lean and the project's override), then the Lean language server,
// started through elan's `lake` proxy exactly as the VS Code extension starts
// it, opens every .lean file: no error (in particular no unknown `import Lasm.*`).
// Needs elan on PATH.
//   node editor-templates.mjs CANDIDATE_TGZ WORK_DIR RESULT.json [--templates a,b]
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { existsSync, mkdirSync, writeFileSync } from 'node:fs';
import { delimiter, dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const args = process.argv.slice(2);
const i = args.indexOf('--templates');
const only = i >= 0 ? args.splice(i, 2)[1].split(',') : undefined;
const [tgzArg, workArg, resultArg] = args;
assert.ok(tgzArg && workArg && resultArg, 'Usage: node editor-templates.mjs CANDIDATE_TGZ WORK_DIR RESULT.json [--templates a,b]');
const tgz = resolve(tgzArg), work = resolve(workArg), resultFile = resolve(resultArg);
const templates = only ?? ['plain', 'express', 'hono', 'fastify', 'std-http', 'web', 'fetch', 'fullstack'];
const exe = name => process.platform === 'win32' ? `${name}.exe` : name;
const lake = (process.env.PATH ?? '').split(delimiter).map(d => join(d, exe('lake'))).find(existsSync);
assert.ok(lake, 'elan (its lake proxy) must be on PATH');
const npm = [join(dirname(process.execPath), 'npm')];
const check = fileURLToPath(new URL('./editor-check.mjs', import.meta.url));
const result = { candidate: tgz, lake, templates: [] };
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
const run = (label, command, argv, cwd) => {
  const started = performance.now();
  const r = spawnSync(command, argv, { cwd, encoding: 'utf8', timeout: 1_800_000, env: { ...process.env, ELAN_NO_OVERRIDE_NOTICE: '1', npm_config_audit: 'false', npm_config_fund: 'false' } });
  const step = { label, code: r.status, seconds: +((performance.now() - started) / 1000).toFixed(1), stdout: r.stdout?.slice(-3000), stderr: r.stderr?.slice(-3000) };
  console.log(`${label}: ${r.status === 0 ? 'ok' : 'FAILED'} (${step.seconds} s)\n${(r.stdout ?? '').trim()}\n${(r.stderr ?? '').trim()}`.trim());
  return { r, step };
};
mkdirSync(join(work, 'cli'), { recursive: true });
assert.equal(run('install', npm[0], ['install', '--no-save', tgz], join(work, 'cli')).r.status, 0);
const lasm = [process.execPath, join(work, 'cli', 'node_modules', '@lasm', 'compiler', 'bin', 'lasm.mjs')];
let failed = 0;
for (const template of templates) {
  const app = join(work, `app-${template}`), entry = { template, steps: [] };
  result.templates.push(entry);
  for (const [label, command, argv, cwd] of [
    ['init', lasm[0], [lasm[1], 'init', app, '--template', template], work],
    ['lasm editor', lasm[0], [lasm[1], 'editor'], app],
    ['language server', process.execPath, [check, app, lake, '900'], app]]) {
    const { r, step } = run(`${template}: ${label}`, command, argv, cwd ?? app);
    entry.steps.push(step); save();
    if (r.status !== 0) { failed++; entry.passed = false; break; }
  }
  entry.passed ??= true; save();
}
result.passed = failed === 0; save();
assert.equal(failed, 0, `${failed} template(s) failed`);
