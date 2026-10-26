import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdirSync, mkdtempSync, renameSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { generatedByBuild, watchProject } from '../src/dev.mjs';

const pause = ms => new Promise(done => setTimeout(done, ms));

/** Waits until `count()` grows past `before` (watch events are asynchronous). */
async function grows(count, before, what) {
  for (let i = 0; i < 100 && count() <= before; i++) await pause(20);
  assert.ok(count() > before, what);
}

test('lasm dev sees every save, including saves by rename (Vim, safe write, sed -i), in new directories too', async () => {
  const project = mkdtempSync(join(tmpdir(), 'lasm-watch-'));
  try {
    writeFileSync(join(project, 'App.lean'), 'def a := 1\n');
    mkdirSync(join(project, 'node_modules')); mkdirSync(join(project, '.lake'));
    let events = 0;
    const watcher = watchProject(project, () => { events++; });
    assert.equal(watcher.mode, 'events');
    try {
      await pause(50);
      for (let i = 0; i < 4; i++) {
        const before = events;
        writeFileSync(join(project, `.App.lean.${i}.swp`), `def a := ${i + 2}\n`);
        renameSync(join(project, `.App.lean.${i}.swp`), join(project, 'App.lean'));
        await grows(() => events, before, `rename save ${i + 1} is seen`);
        await pause(30);
      }
      let before = events;
      writeFileSync(join(project, 'App.lean'), 'def a := 10\n');
      await grows(() => events, before, 'an in-place save after rename saves is seen');
      before = events;
      mkdirSync(join(project, 'Sub'));
      await grows(() => events, before, 'a new directory is seen');
      await pause(50);
      before = events;
      writeFileSync(join(project, 'Sub', 'B.lean'), 'def b := 1\n');
      await grows(() => events, before, 'a file in a new directory is seen');
      await pause(50);
      before = events;
      writeFileSync(join(project, 'node_modules', 'x.lean'), '');
      writeFileSync(join(project, '.lake', 'y.lean'), '');
      writeFileSync(join(project, 'notes.txt'), '');
      await pause(300);
      assert.equal(events, before, 'node_modules, dot directories and other files are ignored');
    } finally { watcher.close(); }
  } finally { rmSync(project, { recursive: true, force: true }); }
});

test('Lake\'s manifest is the build\'s own output', () => {
  assert.equal(generatedByBuild('/p/lake-manifest.json'), true);
  assert.equal(generatedByBuild('/p/App.lean'), false);
  assert.equal(generatedByBuild('/p/lakefile.toml'), false);
});
