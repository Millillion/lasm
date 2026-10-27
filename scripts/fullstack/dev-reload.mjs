#!/usr/bin/env node
// `npm run dev` of the fullstack template: one URL, and how long an edit takes
// to reach the page. Starts the given dev command in APP, waits for the proxy,
// checks that the page, the client build and the RPC endpoints are all served
// on that one URL (with the live-reload client injected), then edits
// Client.lean, View.lean and Server.lean in turn (a new definition in each) and
// times edit → reload event
// on /__lasm/events. Writes a JSON report.
//
//   node scripts/fullstack/dev-reload.mjs APP PORT REPORT -- lasm dev …
import { spawn } from 'node:child_process';
import { appendFileSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { request } from 'node:http';

const [app, portText, reportPath, separator, ...command] = process.argv.slice(2);
if (!app || !portText || !reportPath || separator !== '--' || !command.length) {
  console.error('usage: dev-reload.mjs APP PORT REPORT -- COMMAND…'); process.exit(2);
}
const port = Number(portText), base = `http://127.0.0.1:${port}`;
const report = { checks: {}, reloads: {}, log: '' };
let failed = false;
const expect = (name, ok, detail = '') => { report.checks[name] = ok; if (!ok) failed = true; console.log(`${ok ? 'ok  ' : 'FAIL'} ${name}${detail && !ok ? ` — ${detail}` : ''}`); };

const child = spawn(command[0], command.slice(1), { cwd: app, env: { ...process.env, PORT: String(port), CI: '1', BROWSER: 'none' }, stdio: ['ignore', 'pipe', 'pipe'], detached: true });
let output = '';
child.stdout.on('data', d => { output += d; process.stdout.write(d); });
child.stderr.on('data', d => { output += d; process.stderr.write(d); });
const stop = () => { try { process.kill(-child.pid, 'SIGTERM'); } catch { /* gone */ } };
process.on('exit', stop);

const sleep = ms => new Promise(r => setTimeout(r, ms));
async function until(check, ms) {
  const deadline = Date.now() + ms;
  while (Date.now() < deadline) { try { if (await check()) return true; } catch (error) { if (error.fatal) throw error; /* not yet */ } await sleep(100); }
  return false;
}

// Events from /__lasm/events, kept open for the whole run.
const events = [];
function listen() {
  return new Promise((done, fail) => {
    const req = request(`${base}/__lasm/events`, response => {
      let buffer = '';
      response.on('data', chunk => {
        buffer += chunk;
        let at;
        while ((at = buffer.indexOf('\n\n')) >= 0) {
          const block = buffer.slice(0, at); buffer = buffer.slice(at + 2);
          const event = /^event: (.*)$/m.exec(block)?.[1];
          if (event) events.push({ event, at: performance.now() });
        }
      });
      done();
    });
    req.on('error', fail);
    req.end();
  });
}

try {
  // The first build is cold; a failed first build will not come back by itself.
  const up = await until(async () => { if (/Build failed/.test(output)) throw Object.assign(new Error('build failed'), { fatal: true }); return (await fetch(base)).ok; }, 30 * 60 * 1000).catch(() => false);
  expect('dev.one-url', up, output.slice(-2000));
  if (!up) throw new Error('the dev server did not come up');
  const html = await (await fetch(base)).text();
  expect('dev.ssr', html.includes('<li'), html.slice(0, 400));
  expect('dev.reload-client', html.includes('/__lasm/events'));
  const script = /src="(\/client\/[^"]+\.js)"/.exec(html)?.[1] ?? '/client/app.js';
  expect('dev.client-served', (await fetch(base + script)).ok, script);
  const rpc = await fetch(`${base}/rpc/listTodos`, { method: 'POST', body: 'null' });
  expect('dev.rpc', rpc.ok && (await rpc.text()).includes('"ok"'));
  expect('dev.no-5173', !/5173/.test(output));
  await listen();

  for (const [file, rebuilds] of [['Client.lean', 'client only'], ['View.lean', 'client and server'], ['Server.lean', 'server only']]) {
    const path = join(app, file), before = readFileSync(path, 'utf8');
    const seen = events.length, mark = output.length;
    const start = performance.now();
    // A code change (a new definition), so the module's C and the program change too.
    const stamp = Date.now();
    appendFileSync(path, `\n/-- Edited by dev-reload.mjs. -/\ndef devReloadMarker${stamp} : String := "${stamp}"\n`);
    const reloaded = await until(() => events.slice(seen).some(e => e.event === 'reload'), 10 * 60 * 1000);
    const seconds = reloaded ? (events.slice(seen).find(e => e.event === 'reload').at - start) / 1000 : null;
    await until(() => output.slice(mark).includes('Reloaded'), 5000);
    const said = output.slice(mark);
    report.reloads[file] = { seconds, rebuilds, unchanged: /unchanged: ([^)]*)\)/.exec(said)?.[1] ?? '' };
    expect(`dev.reload.${file}`, reloaded, said.slice(-1500));
    console.log(`${file}: edit → reload ${seconds?.toFixed(2)} s (${rebuilds}; unchanged: ${report.reloads[file].unchanged || 'none'})`);
    if (file === 'Client.lean') expect('dev.client-edit-keeps-server', /unchanged: [^)]*Server\.lean/.test(said), said.slice(-800));
    if (file === 'Server.lean') expect('dev.server-edit-keeps-client', /unchanged: [^)]*Client\.lean/.test(said), said.slice(-800));
    expect(`dev.page-after.${file}`, await until(async () => (await (await fetch(base)).text()).includes('<li'), 60000));
    writeFileSync(path, before);
    // Let the revert's rebuild settle before the next edit.
    await until(() => events.slice(seen).filter(e => e.event === 'reload').length >= 2, 10 * 60 * 1000);
  }
} catch (error) {
  failed = true;
  console.error(error);
} finally {
  report.log = output.slice(-4000);
  mkdirSync(dirname(reportPath), { recursive: true });
  writeFileSync(reportPath, JSON.stringify(report, null, 2) + '\n');
  stop();
}
process.exit(failed ? 1 : 0);
