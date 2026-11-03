// The protocol fuzzer: random and mutated messages at the sync protocol's
// parsers, through the compiled server, over HTTP (sync and poll) and
// WebSockets. Claim 5: untrusted input can't crash or subvert a Lasm program.
//
// Every request must get an answer within the time budget, every answer
// must be a well-formed reply (`tandem 1` then `ops a b` and exactly b - a
// operations, or `error …`), the server must stay up, and afterwards every
// operation in every fuzzed document's log must be valid (in range, a
// character, a parent with a smaller counter, a root child on the right),
// each document's text must load, and an ordinary sync must still work.
// Half the messages start from a valid one and are mutated.
//
//   node test/fuzz.mjs [--seconds N] [--seed N] [--url URL | --command CMD | --platform P] [--name NAME]
import { mkdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { args, parseReply, rng, root, startTandem } from './server.mjs';

const a = args();
const seconds = Number(a.seconds ?? 60);
const seed = Number(a.seed ?? Math.floor(Math.random() * 2 ** 31));
console.log(`fuzz: seed ${seed}, ${seconds} s${a.name ? ` (${a.name})` : ''}`);
const R = rng(seed);
const server = await startTandem(a);
const base = server.base;
const docs = ['f0', 'f1', 'f2', 'f3'];
const MAX = 1e15;
const budgetMs = 15_000;
const failures = [];

const num = () => {
  const r = R.next();
  if (r < 0.5) return String(R.int(50));
  if (r < 0.6) return String(R.int(2 ** 31));
  if (r < 0.65) return '999999999999999';
  if (r < 0.7) return '1000000000000000';
  if (r < 0.75) return '9'.repeat(1 + R.int(40));
  if (r < 0.8) return R.pick(['-1', '01', '+3', '1e3', '0x10', '', ' ', '١', '1.5', 'NaN']);
  return String(R.int(1000));
};
const cp = () => R.pick([String(97 + R.int(26)), '10', '0', '55296', '57343', '1114111', '1114112', '65279', '8232', num()]);
const validOp = () => {
  const c = 1 + R.int(40), r = R.int(5);
  const x = R.next();
  if (x < 0.3) return `i ${c} ${r} R ${97 + R.int(26)}`;
  if (x < 0.8) return `i ${c + 1} ${r} ${R.int(c + 1)} ${R.int(5)} ${R.pick(['L', 'R'])} ${97 + R.int(26)}`;
  return `d ${R.int(40)} ${R.int(5)}`;
};
const randomOp = () => {
  const forms = [
    () => `i ${num()} ${num()} R ${cp()}`,
    () => `i ${num()} ${num()} ${num()} ${num()} ${R.pick(['L', 'R', 'X', '', 'l'])} ${cp()}`,
    () => `d ${num()} ${num()}`,
    () => R.pick(['i', 'd', 'x', '', ' ', 'i 1', 'd 1 2 3', 'i 1 2 R', 'i 1 2 R 97 98']),
  ];
  return R.pick(forms)();
};
const valid = () => `tandem 1\nsync ${R.int(60)}\n` + Array.from({ length: R.int(8) }, validOp).map(l => l + '\n').join('');
const junk = n => Array.from({ length: n }, () => String.fromCharCode(R.int(R.next() < 0.8 ? 128 : 65536))).join('');
function mutate(s) {
  const k = R.int(9);
  if (k === 0) { const i = R.int(s.length + 1); return s.slice(0, i) + junk(1 + R.int(5)) + s.slice(i); }
  if (k === 1) { const i = R.int(s.length + 1); return s.slice(0, i) + s.slice(i + 1 + R.int(10)); }
  if (k === 2) return s.replaceAll('\n', R.pick(['\r\n', '\n\n', ' \n', '\n ', '\t']));
  if (k === 3) { const lines = s.split('\n'); const i = R.int(lines.length); lines.splice(i, 0, randomOp()); return lines.join('\n'); }
  if (k === 4) { const lines = s.split('\n'); const i = R.int(lines.length); lines.splice(i, 0, ...Array(1 + R.int(50)).fill(lines[i] ?? '')); return lines.join('\n'); }
  if (k === 5) return s.replace(/\d+/, num());
  if (k === 6) return s.slice(0, R.int(s.length + 1));
  if (k === 7) return s + Array.from({ length: R.int(100) }, randomOp).join('\n');
  return s.replace('tandem 1', R.pick(['tandem 2', 'Tandem 1', 'tandem  1', 'tandem 1 ', '﻿tandem 1']));
}
function message() {
  const r = R.next();
  if (r < 0.5) { let s = valid(); for (let j = 0; j < 1 + R.int(3); j++) s = mutate(s); return s; }
  if (r < 0.75) return `tandem 1\nsync ${num()}\n` + Array.from({ length: R.int(20) }, randomOp).join('\n');
  if (r < 0.77) return 'tandem 1\nsync 0\n' + Array.from({ length: 5000 + R.int(3) }, validOp).join('\n') + '\n';
  if (r < 0.85) return 'tandem 1\nsync 0\n' + 'i 1 1 R 97 '.repeat(1 + R.int(5000));
  if (r < 0.9) return junk(R.int(2000));
  return 'tandem 1\nsync 0\n' + 'i '.repeat(R.int(20000));
}

/** Checks an answer's text; returns a problem or null. */
function checkReply(text) {
  const p = parseReply(text);
  if (p.bad !== undefined) return `malformed answer ${JSON.stringify(text.slice(0, 200))}`;
  if (p.error !== undefined) return null;
  if (!(p.from <= p.to) || p.ops.length !== p.to - p.from) return `inconsistent range in ${JSON.stringify(text.slice(0, 200))}`;
  for (const op of p.ops) if (!validStored(op)) return `invalid operation in an answer: ${op}`;
  return null;
}

/** The server's rules for a stored operation (Wire.okOp), in JavaScript. */
function validStored(line) {
  const t = line.split(' ');
  const n = s => /^[0-9]{1,15}$/.test(s) && Number(s) < MAX;
  const ch = s => n(s) && (Number(s) < 0xd800 || (Number(s) > 0xdfff && Number(s) < 0x110000));
  if (t[0] === 'd') return t.length === 3 && n(t[1]) && n(t[2]);
  if (t[0] !== 'i') return false;
  if (t.length === 5) return n(t[1]) && n(t[2]) && t[3] === 'R' && ch(t[4]);
  if (t.length === 7) return n(t[1]) && n(t[2]) && n(t[3]) && n(t[4]) && ['L', 'R'].includes(t[5]) && ch(t[6])
    && Number(t[3]) < Number(t[1]);
  return false;
}

async function timed(promise) {
  let timer;
  const timeout = new Promise((_, reject) => { timer = setTimeout(() => reject(new Error(`no answer in ${budgetMs} ms`)), budgetMs); });
  try { return await Promise.race([promise, timeout]); } finally { clearTimeout(timer); }
}

const wsOK = a.platform !== 'workers';
const sockets = new Map();
async function socket(doc) {
  if (sockets.has(doc)) { const s = sockets.get(doc); await s.open; return s; }
  const ws = new WebSocket(`${base.replace(/^http/, 'ws')}/doc/${doc}/ws`);
  const s = { ws, waiting: [], open: new Promise((res, rej) => { ws.onopen = res; ws.onerror = rej; }) };
  ws.onmessage = e => { const w = s.waiting.shift(); if (w) w(e.data); };
  ws.onclose = () => sockets.delete(doc);
  sockets.set(doc, s);
  await s.open;
  return s;
}

let sent = 0, errors = 0, okReplies = 0;
const end = Date.now() + seconds * 1000;
const record = (kind, body, problem) => {
  failures.push({ kind, body, problem });
  console.log(`FAIL (${kind}): ${problem}`);
};
async function worker() {
  while (Date.now() < end && failures.length < 20) {
    const doc = R.pick(docs);
    const body = message();
    const kind = R.next();
    try {
      if (wsOK && kind < 0.15) {
        const s = await socket(doc);
        // pushes from other workers can arrive too; every frame must be well formed
        const frame = await timed(new Promise(res => { s.waiting.push(res); s.ws.send(body); }));
        const problem = checkReply(typeof frame === 'string' ? frame : '');
        if (problem) record('ws', body, problem);
      } else if (kind < 0.2) {
        const r = await timed(fetch(`${base}/doc/${doc}/poll?cursor=${R.pick([num(), '0', '5', ''])}`));
        const t = await r.text();
        if (r.status === 200) { const problem = checkReply(t); if (problem) record('poll', body, problem); }
        else if (r.status !== 400) record('poll', body, `status ${r.status}`);
      } else {
        const r = await timed(fetch(`${base}/doc/${doc}/sync`, { method: 'POST', body }));
        const t = await r.text();
        if (![200, 400, 413].includes(r.status)) record('http', body, `status ${r.status}: ${t.slice(0, 200)}`);
        else { const problem = checkReply(t); if (problem) record('http', body, problem); else if (parseReply(t).ops) okReplies++; else errors++; }
      }
      sent++;
    } catch (e) {
      record(kind < 0.15 ? 'ws' : 'http', body, String(e.message ?? e));
    }
  }
}
await Promise.all(Array.from({ length: 8 }, worker));
for (const s of sockets.values()) s.ws.close();

// Afterwards: the logs hold only valid operations, the texts load, and a sync still works.
for (const doc of docs) {
  let cursor = 0, total = 0;
  for (;;) {
    const p = parseReply(await (await fetch(`${base}/doc/${doc}/sync`, { method: 'POST', body: `tandem 1\nsync ${cursor}\n` })).text());
    if (!p.ops) { record('after', doc, `sync from ${cursor} failed`); break; }
    for (const op of p.ops) if (!validStored(op)) record('after', doc, `the log holds an invalid operation: ${op}`);
    total += p.ops.length; cursor = p.to;
    if (p.ops.length < 5000) break;
  }
  const t = await fetch(`${base}/doc/${doc}/text`);
  if (t.status !== 200) record('after', doc, `text: status ${t.status}`);
  console.log(`  ${doc}: ${total} operations stored, all valid; text of ${(await t.text()).length} characters`);
}
const check = await fetch(`${base}/doc/after-fuzz/sync`, { method: 'POST', body: 'tandem 1\nsync 0\ni 1 1 R 104\n' });
if (parseReply(await check.text()).to !== 1) record('after', '', 'an ordinary sync failed after fuzzing');
await server.stop();
console.log(`fuzz: ${sent} messages (${okReplies} answered with operations, ${errors} refused), ${failures.length} failures`);
if (failures.length) {
  const dir = join(root, 'test-results');
  mkdirSync(dir, { recursive: true });
  writeFileSync(join(dir, `fuzz-${seed}.json`), JSON.stringify(failures, null, 1));
  console.error(`fuzz: failing inputs in test-results/fuzz-${seed}.json (seed ${seed})`);
  process.exitCode = 1;
}
