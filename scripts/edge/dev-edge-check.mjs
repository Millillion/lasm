// `lasm dev --target workers` (docs/DEVELOPER_WORKFLOW.md#lasm-dev): rebuilds
// workers/ after each save (edge dev profile) and starts nothing: no wrangler,
// no program. Edits the Hono template's App.lean twice and checks that each
// rebuild rewrote workers/ with a new program. Prints the rebuild times as JSON.
//   node dev-edge-check.mjs APP_DIR RESULT.json
import assert from 'node:assert/strict';
import { spawn } from 'node:child_process';
import { readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const [appArg, resultArg] = process.argv.slice(2);
assert.ok(appArg && resultArg, 'Usage: node dev-edge-check.mjs APP_DIR RESULT.json');
const app = resolve(appArg), lasm = fileURLToPath(new URL('../../bin/lasm.mjs', import.meta.url));
const child = spawn(process.execPath, [lasm, 'dev', 'Main.lean', '--target', 'workers'], { cwd: app, stdio: ['ignore', 'pipe', 'pipe'], env: { ...process.env, NO_COLOR: '1' } });
let out = '';
for (const stream of [child.stdout, child.stderr]) stream.on('data', d => { out += d; process.stderr.write(d); });
const wait = async (re, from, ms = 900_000) => {
  for (const end = Date.now() + ms; Date.now() < end;) {
    const m = re.exec(out.slice(from)); if (m) return m;
    if (child.exitCode !== null) throw new Error(`lasm dev exited ${child.exitCode}:\n${out.slice(-3000)}`);
    await new Promise(r => setTimeout(r, 50));
  }
  throw new Error(`no ${re}:\n${out.slice(-3000)}`);
};
const info = () => JSON.parse(readFileSync(join(app, 'workers/build-info.json'), 'utf8'));
const appLean = join(app, 'App.lean'), original = readFileSync(appLean, 'utf8');
const result = { what: 'lasm dev --target workers: App.lean edits rebuild workers/', rebuilds: [] };
try {
  await wait(/Built in ([\d.]+) s/, 0);
  await wait(/is up to date; your platform's local server/, 0);
  const first = info();
  assert.equal(first.buildProfile, 'dev', 'the edge dev profile');
  let previous = first.programKey;
  for (const [index, greeting] of ['Hi', 'Hey'].entries()) {
    const mark = out.length;
    writeFileSync(appLean, original.replace('s!"Hello, {name}, from Lean!"', `s!"${greeting}, {name}, from Lean!"`));
    const m = await wait(/Built in ([\d.]+) s/, mark);
    await wait(/is up to date/, mark);
    const next = info();
    assert.notEqual(next.programKey, previous, `edit ${index + 1} rebuilt the program`);
    previous = next.programKey;
    result.rebuilds.push({ edit: index + 1, seconds: Number(m[1]) });
  }
  // lasm dev starts no platform tool and no program for an edge target.
  assert.doesNotMatch(out, /Listening on/);
  result.passed = true;
} finally {
  writeFileSync(appLean, original);
  child.kill('SIGINT');
  writeFileSync(resolve(resultArg), JSON.stringify(result, null, 2) + '\n');
}
console.log(JSON.stringify(result));
