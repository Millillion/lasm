// No scheduled workflow runs on a Sunday in US Eastern time (Jordan, 2026-11-07;
// docs/CI.md#no-runs-on-sunday). Two layers:
// - every cron firing in a week is checked at both UTC-5 (EST) and UTC-4 (EDT),
//   so the rule holds on either side of a daylight-saving change, and fires at
//   least 12 hours before Sunday begins, as GitHub starts scheduled runs hours late;
// - every workflow with a schedule calls the runtime guard (sunday-guard.yml),
//   and every other job in it needs the guard and is conditioned on it, so a
//   late run that starts on Sunday in New York does nothing.
import { test } from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync, readdirSync } from 'node:fs';
import { join } from 'node:path';
import { sundayGuarded, sundayInNewYork } from '../scripts/ci/sunday-guard.mjs';

const workflows = new URL('../.github/workflows/', import.meta.url);

// Expands one cron field (`*`, `n`, `a-b`, `a,b-c`) to its values.
function field(text, min, max) {
  if (text === '*') return Array.from({ length: max - min + 1 }, (_, i) => min + i);
  return text.split(',').flatMap(part => {
    const [a, b] = part.split('-').map(Number);
    assert.ok(Number.isInteger(a) && (b === undefined || Number.isInteger(b)), `unsupported cron field ${text}`);
    return Array.from({ length: (b ?? a) - a + 1 }, (_, i) => a + i);
  });
}

function crons() {
  const found = [];
  for (const name of readdirSync(workflows)) {
    if (!/\.ya?ml$/.test(name)) continue;
    const text = readFileSync(join(workflows.pathname, name), 'utf8');
    for (const [, cron] of text.matchAll(/cron:\s*['"]([^'"]+)['"]/g)) found.push({ name, cron });
  }
  return found;
}

test('workflows have schedules to check', () => {
  assert.ok(crons().length > 0);
});

// GitHub delayed scheduled runs by up to 7 h 40 min on 2026-11-08; the runtime
// guard catches anything later.
const MARGIN = 12 * 60;

test('no cron fires on a Sunday in US Eastern time, or in the 12 hours before', () => {
  const bad = [];
  for (const { name, cron } of crons()) {
    const [m, h, dom, mon, dow] = cron.trim().split(/\s+/);
    assert.equal(dom, '*', `${name}: day-of-month schedules are not checked`);
    assert.equal(mon, '*', `${name}: month schedules are not checked`);
    for (const day of field(dow, 0, 6).map(d => d % 7))
      for (const hour of field(h, 0, 23))
        for (const minute of field(m, 0, 59))
          for (const offset of [5, 4]) {
            const minutes = day * 1440 + hour * 60 + minute - offset * 60;
            // Minutes into the Eastern week, from Sunday 00:00.
            const week = ((minutes % 10080) + 10080) % 10080;
            if (week < 1440 || week > 10080 - MARGIN) bad.push(`${name} '${cron}' (UTC-${offset}, ${hour}:${String(minute).padStart(2, '0')} UTC on day ${day})`);
          }
  }
  assert.deepEqual([...new Set(bad.map(b => b.split(' (')[0]))], [], `fires on Sunday ET or within 12 hours before it:\n${bad.join('\n')}`);
});

const GUARD = "needs.sunday.outputs.skip != 'true'";

/** The jobs of a workflow: id -> { needs, if, uses } (single-line values, as every workflow here writes them). */
function jobsOf(name) {
  const lines = readFileSync(join(workflows.pathname, name), 'utf8').split('\n');
  const start = lines.indexOf('jobs:');
  assert.ok(start >= 0, `${name}: no top-level jobs:`);
  const jobs = {};
  let job = null;
  for (const line of lines.slice(start + 1)) {
    if (/^\S/.test(line)) break;
    const key = line.match(/^  ([A-Za-z0-9_-]+):\s*$/);
    if (key) { jobs[job = key[1]] = {}; continue; }
    const field = line.match(/^    (needs|if|uses):(.*)$/);
    if (job && field) {
      const value = field[2].trim();
      assert.ok(value && !/^[|>]/.test(value), `${name}: ${job}.${field[1]} must be on one line`);
      jobs[job][field[1]] = value;
    }
  }
  return jobs;
}

const needsList = value => value === undefined ? [] : value.startsWith('[') ? value.slice(1, -1).split(',').map(s => s.trim()) : [value];

/** Whether `text` is one parenthesized group: `(` ... `)` with the first `(` closing at the end. */
function wrapped(text) {
  if (!text.startsWith('(') || !text.endsWith(')')) return false;
  let depth = 0;
  for (let i = 0; i < text.length; i++) {
    if (text[i] === '(') depth++;
    else if (text[i] === ')' && --depth === 0 && i < text.length - 1) return false;
  }
  return depth === 0;
}

const scheduled = () => readdirSync(workflows).filter(name => /\.ya?ml$/.test(name)
  && /^on:\n(?:.*\n)*?  schedule:/m.test(readFileSync(join(workflows.pathname, name), 'utf8').split(/^jobs:/m)[0]));

test('every scheduled workflow calls the Sunday guard and every job obeys it', () => {
  const names = scheduled();
  assert.ok(names.length >= 15, names.join());
  assert.deepEqual([...names].sort(), [...new Set(crons().map(c => c.name))].sort());
  const bad = [];
  for (const name of names) {
    const jobs = jobsOf(name);
    if (jobs.sunday?.uses !== './.github/workflows/sunday-guard.yml') bad.push(`${name}: no job sunday calling ./.github/workflows/sunday-guard.yml`);
    if (jobs.sunday && (jobs.sunday.if || jobs.sunday.needs)) bad.push(`${name}: the sunday job must always run`);
    for (const [id, job] of Object.entries(jobs)) {
      if (id === 'sunday') continue;
      if (!needsList(job.needs).includes('sunday')) bad.push(`${name}: ${id} does not need sunday`);
      // The guard, ANDed with the job's own condition kept whole in parentheses
      // (so `a || b` cannot escape it); always() inside keeps its meaning.
      const rest = job.if?.startsWith(GUARD) ? job.if.slice(GUARD.length) : null;
      if (rest === null || (rest !== '' && !(rest.startsWith(' && ') && wrapped(rest.slice(4)))))
        bad.push(`${name}: ${id} if: must be "${GUARD}" or "${GUARD} && (<its condition>)", is ${JSON.stringify(job.if ?? null)}`);
    }
  }
  assert.deepEqual(bad, []);
});

test('the Sunday guard skips only scheduled runs, on Sunday in New York', () => {
  const guard = readFileSync(join(workflows.pathname, 'sunday-guard.yml'), 'utf8');
  assert.match(guard, /^on:\n  workflow_call:\n/m);
  assert.doesNotMatch(guard, /^  (schedule|push|pull_request|workflow_dispatch):/m);
  assert.match(guard, /value: \$\{\{ jobs\.check\.outputs\.skip \}\}/);
  assert.match(guard, /EVENT: \$\{\{ github\.event_name \}\}/);
  assert.match(guard, /day=\$\(TZ=America\/New_York date \+%u\)/);
  assert.match(guard, /if \[ "\$EVENT" = schedule \] && \[ "\$day" = 7 \]; then skip=true; fi/);
  assert.match(guard, /echo "skip=\$skip" >> "\$GITHUB_OUTPUT"/);
});

test('sundayGuarded: scheduled runs that started on Sunday in New York', () => {
  // 2026-11-08 07:12 UTC was Sunday 02:12 EST; 03:59 UTC was still Saturday.
  assert.equal(sundayInNewYork('2026-11-08T07:12:00Z'), true);
  assert.equal(sundayInNewYork('2026-11-08T04:59:00Z'), false);
  assert.equal(sundayInNewYork('2026-11-09T04:59:00Z'), true);
  assert.equal(sundayInNewYork('2026-11-09T05:00:00Z'), false);
  // Summer: UTC-4.
  assert.equal(sundayInNewYork('2026-07-05T03:59:00Z'), false);
  assert.equal(sundayInNewYork('2026-07-05T04:00:00Z'), true);
  assert.equal(sundayGuarded({ event: 'schedule', run_started_at: '2026-11-08T10:47:00Z' }), true);
  assert.equal(sundayGuarded({ event: 'schedule', created_at: '2026-11-08T10:47:00Z' }), true);
  assert.equal(sundayGuarded({ event: 'workflow_dispatch', run_started_at: '2026-11-08T10:47:00Z' }), false);
  assert.equal(sundayGuarded({ event: 'push', run_started_at: '2026-11-08T10:47:00Z' }), false);
  assert.equal(sundayGuarded({ event: 'schedule', run_started_at: '2026-11-07T10:47:00Z' }), false);
});
