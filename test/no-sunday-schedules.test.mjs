// No scheduled workflow runs on a Sunday in US Eastern time (Jordan, 2026-11-07).
// Every cron firing in a week is checked at both UTC-5 (EST) and UTC-4 (EDT),
// so the rule holds on either side of a daylight-saving change.
import { test } from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync, readdirSync } from 'node:fs';
import { join } from 'node:path';

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

test('no scheduled workflow runs on a Sunday in US Eastern time', () => {
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
            const eastern = Math.floor(((minutes % 10080) + 10080) % 10080 / 1440);
            if (eastern === 0) bad.push(`${name} '${cron}' (UTC-${offset}, ${hour}:${String(minute).padStart(2, '0')} UTC on day ${day})`);
          }
  }
  assert.deepEqual([...new Set(bad.map(b => b.split(' (')[0]))], [], `fires on Sunday ET:\n${bad.join('\n')}`);
});
