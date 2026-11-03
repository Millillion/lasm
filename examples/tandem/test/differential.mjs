// Differential testing against Yjs (yjs 13.6.33), and the multi-replica
// network simulation.
//
// Random editing histories are generated in JavaScript and run twice: on
// Tandem's compiled Lean (Batch.lean, through Lasm) and on Yjs, with the same
// replicas, the same edits and the same delivery schedule. Every inserted
// character is unique within a history, so it names its element, and edits
// name their place by element (insert right after character p; delete
// character t), never by index, so that both libraries make the same edit
// even when they order concurrent text differently.
//
// The schedules: partitions (groups of replicas that cannot reach each other
// for a while), reordering, duplication, and, in "chaos" histories, delivery
// out of causal order (an insertion before its parent; a deletion before
// its character).
//
// What is compared. Yjs (YATA) and Fugue are different algorithms: they may
// order concurrently inserted text differently, and Yjs may interleave it.
// So the comparison is restricted to what both guarantee:
//   - convergence: all replicas of each library end with the same text
//     (Tandem: the same state);
//   - the same characters survive in both (insertions minus deletions);
//   - each insertion lands right after the character it was inserted after
//     (its left neighbour at creation), in the final text of both;
//   - once two characters were seen in some order, that order never changes
//     (checked at every replica's text after each of its edits, per library);
//   - in sequential histories (every edit made with full knowledge, so
//     nothing is concurrent), both texts are equal to each other and to a
//     plain string model.
// Separately, "typists" histories (two replicas typing a run at one place,
// forwards or backwards, concurrently) and "relay" histories (one of the two
// runs typed backwards on two devices, the paper's multi-replica case) count
// how often each library interleaves the two runs: Tandem must never
// (Spec.concurrent_runs_not_interleaved covers typists; relay is Fugue's
// Section 5 property, tested here, not proved).
//
//   node test/differential.mjs [--seed N] [--histories N]
//
// Needs `npm run build:batch`.
import { execFileSync } from 'node:child_process';
import { mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import * as Y from 'yjs';
import { rng, root } from './server.mjs';

const argv = process.argv.slice(2);
const get = k => { const i = argv.indexOf(k); return i >= 0 ? argv[i + 1] : undefined; };
const seed0 = Number(get('--seed') ?? Math.floor(Math.random() * 2 ** 31));
const histories = Number(get('--histories') ?? 400);
console.log(`differential: seed ${seed0}, ${histories} histories`);

const BASE = 0x4e00;
const KINDS = ['sequential', 'concurrent', 'partitioned', 'chaos', 'typists', 'relay'];

/** One random history: commands for Batch.lean, and the same for Yjs. */
function generate(seed, kind) {
  const R = rng(seed);
  const n = kind === 'typists' ? 2 : kind === 'relay' ? 3 : 2 + R.int(3);
  const cmds = [`n ${n}`];
  const ops = [];               // k -> { creator, deps:Set, kind, ch, after }
  const applied = Array.from({ length: n }, () => new Set());   // ops each replica applied
  const delivered = Array.from({ length: n }, () => []);
  let nextChar = 1;
  const effective = (r, k) => [...ops[k].deps].every(d => applied[r].has(d)) && applied[r].has(k);
  const deletedAt = (r, ch) => ops.some((o, k) => o.kind === 'x' && o.ch === ch && applied[r].has(k));
  const visible = r => ops.map((o, k) => [o, k]).filter(([o, k]) => o.kind === 'i' && effective(r, k) && !deletedAt(r, o.ch))
    .map(([o]) => o.ch);
  const deliver = (r, k) => { cmds.push(`d ${r} ${k}`); applied[r].add(k); delivered[r].push(k); };
  const local = (r, kindOp, ch, after) => {
    const k = ops.length;
    ops.push({ creator: r, deps: new Set(applied[r]), kind: kindOp, ch, after });
    applied[r].add(k);
    cmds.push(kindOp === 'i' ? `i ${r} ${k} ${after} ${ch}` : `x ${r} ${k} ${ch}`);
    cmds.push(`s ${r}`);
    return k;
  };
  const randomEdit = r => {
    const vis = visible(r);
    if (vis.length > 0 && R.next() < 0.3) local(r, 'x', R.pick(vis), 0);
    else {
      const after = vis.length === 0 || R.next() < 0.1 ? 0 : R.pick(vis);
      // a short run, typed forwards (each after the previous)
      let prev = after;
      const len = 1 + R.int(4);
      for (let j = 0; j < len; j++) { const ch = BASE + nextChar++; local(r, 'i', ch, prev); prev = ch; }
    }
  };
  // causal delivery of everything replica r lacks, in a random order that respects causality
  const syncFrom = (r, from) => {
    let progress = true;
    while (progress) {
      progress = false;
      const missing = [...applied[from]].filter(k => !applied[r].has(k));
      for (const k of missing.sort(() => R.next() - 0.5)) {
        if ([...ops[k].deps].every(d => applied[r].has(d))) { deliver(r, k); progress = true; }
      }
    }
  };
  if (kind === 'typists') {
    // a shared start, then two concurrent runs at one place
    for (let j = 0; j < 4; j++) randomEdit(0);
    syncFrom(1, 0);
    const vis = visible(0);
    const anchor = vis.length && R.next() < 0.8 ? R.pick(vis) : 0;
    const backwards = R.next() < 0.5;
    const runs = [[], []];
    for (const r of [0, 1]) {
      let prev = anchor;
      for (let j = 0; j < 2 + R.int(5); j++) {
        const ch = BASE + nextChar++;
        local(r, 'i', ch, backwards ? anchor : prev);
        prev = ch; runs[r].push(ch);
      }
    }
    syncFrom(0, 1); syncFrom(1, 0);
    cmds.push('s 0', 's 1', 'e');
    return { n, cmds, ops, runs, backwards };
  }
  if (kind === 'relay') {
    // One session typed backwards at one place on two devices (replicas 0
    // and 2, in either order, the second after syncing with the first),
    // concurrently with replica 1
    // typing backwards at the same place: the paper's "backward
    // interleaving (multi-replica)" case.
    for (let j = 0; j < 3; j++) randomEdit(0);
    syncFrom(1, 0); syncFrom(2, 0);
    const vis = visible(0);
    const anchor = vis.length && R.next() < 0.7 ? R.pick(vis) : 0;
    const runs = [[], []];
    const type = (r, run, k) => { for (let j = 0; j < k; j++) { const ch = BASE + nextChar++; local(r, 'i', ch, anchor); run.push(ch); } };
    const [first, second] = R.next() < 0.5 ? [0, 2] : [2, 0];
    type(first, runs[0], 1 + R.int(4));
    syncFrom(second, first);
    type(second, runs[0], 1 + R.int(4));
    type(1, runs[1], 2 + R.int(5));
    for (let round = 0; round < 2; round++) for (let r = 0; r < n; r++) for (let o = 0; o < n; o++) if (o !== r) syncFrom(r, o);
    for (let r = 0; r < n; r++) cmds.push(`s ${r}`);
    cmds.push('e');
    return { n, cmds, ops, runs, backwards: true };
  }
  const steps = 10 + R.int(40);
  let groups = null;            // a partition: replica -> group
  for (let s = 0; s < steps; s++) {
    const r = R.int(n);
    if (kind === 'sequential') {
      for (let o = 0; o < n; o++) if (o !== r) syncFrom(r, o);
      randomEdit(r);
      continue;
    }
    if (kind === 'partitioned' && R.next() < 0.1) groups = groups ? null : Array.from({ length: n }, () => R.int(2));
    const a = R.next();
    if (a < 0.5) randomEdit(r);
    else {
      const from = R.int(n);
      if (from === r || (groups && groups[from] !== groups[r])) continue;
      if (kind === 'chaos') {
        // any operation the sender has, in any order, sometimes twice
        const have = [...applied[from]];
        for (let j = 0; j < 1 + R.int(4) && have.length; j++) {
          const k = R.pick(have);
          deliver(r, k);
          if (R.next() < 0.2) deliver(r, k);
        }
      } else {
        // causal delivery of part of what the sender has, possibly re-delivering
        const missing = [...applied[from]].filter(k => !applied[r].has(k)).sort(() => R.next() - 0.5);
        for (const k of missing.slice(0, 1 + R.int(6))) {
          if ([...ops[k].deps].every(d => applied[r].has(d))) deliver(r, k);
        }
        if (delivered[r].length && R.next() < 0.3) deliver(r, R.pick(delivered[r]));
      }
    }
  }
  // heal: everything to everyone, in random causal orders
  for (let round = 0; round < 2; round++) for (let r = 0; r < n; r++) for (let o = 0; o < n; o++) if (o !== r) syncFrom(r, o);
  for (let r = 0; r < n; r++) cmds.push(`s ${r}`);
  cmds.push('e');
  return { n, cmds, ops };
}

/** The same history on Yjs: the text of each `s` command, in order. */
function runYjs(h) {
  const docs = [], texts = [], updates = [];
  const views = [];
  for (const cmd of h.cmds) {
    const [c, ...rest] = cmd.split(' ');
    const v = rest.map(Number);
    if (c === 'n') {
      for (let r = 0; r < v[0]; r++) {
        const d = new Y.Doc(); d.clientID = r + 1; docs.push(d); texts.push(d.getText('t'));
      }
    } else if (c === 'i' || c === 'x') {
      const [r, k] = v;
      const d = docs[r], t = texts[r];
      let update = null;
      const grab = u => { update = u; };
      d.on('update', grab);
      const s = t.toString();
      if (c === 'i') {
        const [, , p, ch] = v;
        const idx = p === 0 ? 0 : s.indexOf(String.fromCodePoint(p)) + 1;
        if (p !== 0 && idx === 0) throw new Error(`Yjs: no ${p} at replica ${r}`);
        t.insert(idx, String.fromCodePoint(ch));
      } else {
        const idx = s.indexOf(String.fromCodePoint(v[2]));
        if (idx < 0) throw new Error(`Yjs: no ${v[2]} at replica ${r}`);
        t.delete(idx, 1);
      }
      d.off('update', grab);
      updates[k] = update;
    } else if (c === 'd') {
      Y.applyUpdate(docs[v[0]], updates[v[1]]);
    } else if (c === 's') {
      views.push([...texts[v[0]].toString()].map(x => x.codePointAt(0)));
    }
  }
  return views;
}

/** Batch.lean's output for many histories at once. */
function runLean(hs) {
  const dir = mkdtempSync(join(tmpdir(), 'tandem-diff-'));
  try {
    const input = hs.map(h => h.cmds.join('\n')).join('\n') + '\n';
    writeFileSync(join(dir, 'in'), input);
    execFileSync(process.execPath, [join(root, 'dist/batch/main.mjs'), join(dir, 'in'), join(dir, 'out')],
      { stdio: ['ignore', 'inherit', 'inherit'], timeout: 1_800_000 });
    const lines = readFileSync(join(dir, 'out'), 'utf8').split('\n').filter(Boolean);
    const out = [];
    let i = 0;
    for (const h of hs) {
      const views = [];
      let same = null;
      const prints = h.cmds.filter(c => c[0] === 's' || c[0] === 'e').length;
      for (let j = 0; j < prints; j++, i++) {
        const l = lines[i];
        if (l.startsWith('!')) throw new Error(`Batch.lean: ${l}`);
        if (l.startsWith('e ')) same = l === 'e 1';
        else views.push(l.split(':')[1].trim().split(' ').filter(Boolean).map(Number));
      }
      out.push({ views, same });
    }
    return out;
  } finally {
    rmSync(dir, { recursive: true, force: true });
  }
}

/** Checks one library's views of one history; returns its problems. */
function checkViews(name, h, views) {
  const problems = [];
  const finals = views.slice(-h.n);
  const key = v => v.join(',');
  if (new Set(finals.map(key)).size !== 1) problems.push(`${name}: replicas diverged`);
  const final = finals[0];
  const pos = new Map(final.map((c, i) => [c, i]));
  // left neighbours at creation
  for (const o of h.ops) if (o.kind === 'i' && o.after !== 0 && pos.has(o.ch) && pos.has(o.after) && pos.get(o.after) > pos.get(o.ch))
    problems.push(`${name}: ${o.ch} is not after ${o.after}, its left neighbour when inserted`);
  // seen orders never change
  for (const v of views.slice(0, -h.n)) {
    const live = v.filter(c => pos.has(c));
    for (let j = 1; j < live.length; j++) if (pos.get(live[j - 1]) > pos.get(live[j])) {
      problems.push(`${name}: ${live[j - 1]} was seen before ${live[j]}, and is after it at the end`); break;
    }
  }
  return { final, problems };
}

/** The string model of a sequential history. */
function model(h) {
  let s = [];
  for (const o of h.ops) {
    if (o.kind === 'i') { const i = o.after === 0 ? 0 : s.indexOf(o.after) + 1; s.splice(i, 0, o.ch); }
    else s.splice(s.indexOf(o.ch), 1);
  }
  return s;
}

const interleaved = (final, runs) => {
  const pos = c => final.indexOf(c);
  const span = run => { const ps = run.map(pos); return [Math.min(...ps), Math.max(...ps)]; };
  const [a0, a1] = span(runs[0]), [b0, b1] = span(runs[1]);
  return !(a1 < b0 || b1 < a0);
};

const R = rng(seed0);
const hs = [];
for (let j = 0; j < histories; j++) {
  const kind = KINDS[j % KINDS.length];
  const seed = R.int(2 ** 31);
  hs.push({ ...generate(seed, kind), kind, seed });
}
const started = Date.now();
const lean = runLean(hs);
const leanSeconds = (Date.now() - started) / 1000;
const stats = Object.fromEntries(KINDS.map(k => [k, { histories: 0, ops: 0, failures: 0 }]));
const typists = { lean: 0, yjs: 0, backwardsYjs: 0, forwardsYjs: 0, total: 0 };
const relay = { lean: 0, yjs: 0, total: 0 };
let failures = 0;
for (let j = 0; j < hs.length; j++) {
  const h = hs[j];
  const s = stats[h.kind]; s.histories++; s.ops += h.ops.length;
  const yviews = runYjs(h);
  const L = checkViews('Tandem', h, lean[j].views), Yr = checkViews('Yjs', h, yviews);
  const problems = [...L.problems, ...Yr.problems];
  if (!lean[j].same) problems.push('Tandem: replicas are not in the same state');
  const sorted = v => [...v].sort((x, y) => x - y).join(',');
  if (sorted(L.final) !== sorted(Yr.final)) problems.push('different characters survive in Tandem and Yjs');
  if (h.kind === 'sequential') {
    const m = model(h).join(',');
    if (L.final.join(',') !== m) problems.push('Tandem differs from the string model');
    if (Yr.final.join(',') !== m) problems.push('Yjs differs from the string model');
  }
  if (h.kind === 'typists') {
    typists.total++;
    if (interleaved(L.final, h.runs)) { typists.lean++; problems.push('Tandem interleaved two concurrent runs'); }
    if (interleaved(Yr.final, h.runs)) { typists.yjs++; h.backwards ? typists.backwardsYjs++ : typists.forwardsYjs++; }
  }
  if (h.kind === 'relay') {
    relay.total++;
    if (interleaved(L.final, h.runs)) { relay.lean++; problems.push('Tandem interleaved a two-device session with a concurrent one'); }
    if (interleaved(Yr.final, h.runs)) relay.yjs++;
  }
  if (problems.length) {
    failures++; s.failures++;
    console.log(`history ${j} (${h.kind}, seed ${h.seed}): ${problems.join('; ')}`);
  }
}
for (const [k, s] of Object.entries(stats)) console.log(`  ${k}: ${s.histories} histories, ${s.ops} operations, ${s.failures} failing`);
console.log(`  typists: ${typists.total} pairs of concurrent runs; interleaved by Tandem ${typists.lean}, by Yjs ${typists.yjs} ` +
  `(${typists.forwardsYjs} typed forwards, ${typists.backwardsYjs} backwards)`);
console.log(`  relay: ${relay.total} sessions typed backwards on two devices against a concurrent one; interleaved by ` +
  `Tandem ${relay.lean}, by Yjs ${relay.yjs} (Fugue's non-interleaving covers this case; Yjs's does not: the paper's Table 1)`);
console.log(`  Tandem (Lean, through Lasm) ran all histories in ${leanSeconds.toFixed(1)} s`);
if (failures) { console.error(`differential: ${failures} histories failed (seed ${seed0})`); process.exitCode = 1; }
else console.log('differential: every history agreed');
