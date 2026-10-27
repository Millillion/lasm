// `lasm dev --target browser` on a copy of the web template: serve, check that
// the page carries the live-reload script, then edit one view expression three
// times and time each rebuild (the "Rebuilt in" line, and save to reload event).
//   node dev-loop-check.mjs APP_DIR RESULT.json
import assert from 'node:assert/strict';
import { spawn } from 'node:child_process';
import { readFileSync, writeFileSync } from 'node:fs';
import net from 'node:net';
import { resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const [appArg, resultArg] = process.argv.slice(2);
assert.ok(appArg && resultArg, 'Usage: node dev-loop-check.mjs APP_DIR RESULT.json');
const app = resolve(appArg), lasm = fileURLToPath(new URL('../../bin/lasm.mjs', import.meta.url));
const port = await new Promise((done, fail) => { const s = net.createServer(); s.once('error', fail); s.listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => done(port)); }); });
const child = spawn(process.execPath, [lasm, 'dev', 'Main.lean', '--target', 'browser', '--port', String(port)], { cwd: app, stdio: ['ignore', 'pipe', 'pipe'], env: { ...process.env, NO_COLOR: '1' } });
let out = '';
for (const stream of [child.stdout, child.stderr]) stream.on('data', d => { out += d; process.stderr.write(d); });
const wait = async (re, from, ms = 600_000) => {
  for (const end = Date.now() + ms; Date.now() < end;) { const m = re.exec(out.slice(from)); if (m) return m; await new Promise(r => setTimeout(r, 50)); }
  throw new Error(`no ${re}:\n${out.slice(-3000)}`);
};
const main = resolve(app, 'Main.lean'), original = readFileSync(main, 'utf8');
const result = { what: 'lasm dev --target browser: edit one view expression, time to "Rebuilt in"', rebuilds: [] };
try {
  await wait(/Serving .* at (http\S+)/, 0);
  const page = await (await fetch(`http://127.0.0.1:${port}/`)).text();
  assert.match(page, /EventSource/, 'the page carries the live-reload script');
  for (const [index, text] of ['Lean!', 'Lean!!', 'Lean!!!', 'Lean!!!!'].entries()) {
    const edited = original.replace('{App.greet "Lean"}', `{App.greet "${text}"}`);
    assert.notEqual(edited, original, 'the web template changed: update the view edit');
    const mark = out.length, started = performance.now();
    writeFileSync(main, edited);
    const m = await wait(/Rebuilt in ([\d.]+) s/, mark);
    result.rebuilds.push({ edit: index + 1, seconds: Number(m[1]), saveToReloadSeconds: +((performance.now() - started) / 1000).toFixed(2) });
  }
  result.passed = true;
} finally {
  writeFileSync(main, original);
  child.kill('SIGINT');
  writeFileSync(resolve(resultArg), JSON.stringify(result, null, 2) + '\n');
}
console.log(JSON.stringify(result));
