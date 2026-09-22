import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { execFileSync } from 'node:child_process';
import { serverDriverShim } from '../scripts/full-lean/server-driver-shim.mjs';

test('the compiled driver preserves exact server arguments and leaves other Lean invocations intact', () => {
  const root = mkdtempSync(join(tmpdir(), "lasm-driver's test-"));
  try {
    const source = join(root, 'source'), prefix = join(root, 'prefix'), driver = join(root, 'compiled driver');
    const interactive = join(source, 'tests/server_interactive'), project = join(source, 'tests/misc_dir/server_project');
    for (const path of [interactive, project, join(prefix, 'bin')]) mkdirSync(path, { recursive: true });
    for (const [path, kind] of [[driver, 'compiled'], [join(prefix, 'bin/lean'), 'lean']])
      writeFileSync(path, `#!${process.execPath}\nconsole.log(JSON.stringify({kind:${JSON.stringify(kind)},argv:process.argv.slice(2)}));\n`, { mode: 0o755 });
    const shim = join(root, 'shim'); writeFileSync(shim, serverDriverShim(source, prefix, driver), { mode: 0o755 });
    const base = ['-Dlinter.all=false', '--run', 'run_test.lean'], target = join(root, "a 'quoted' file.lean");
    const run = (cwd, argv) => JSON.parse(execFileSync(shim, argv, { cwd, encoding: 'utf8' }));
    assert.deepEqual(run(interactive, [...base, target]), { kind: 'compiled', argv: [target] });
    assert.deepEqual(run(project, [...base, '-p', target]), { kind: 'compiled', argv: ['-p', target] });
    for (const [cwd, argv] of [[root, [...base, target]], [project, [...base, target]],
      [project, [...base, '-x', target]], [interactive, [...base, target, 'extra']],
      [interactive, ['--run', 'run_test.lean', target]], [project, []]])
      assert.deepEqual(run(cwd, argv), { kind: 'lean', argv });
  } finally { rmSync(root, { recursive: true, force: true }); }
});
