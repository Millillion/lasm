// Exercise the actual generated lean.mk: a changed runtime header must rebuild
// generated C, even though the generated source itself has not changed.
import { mkdirSync, writeFileSync, readFileSync, statSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';
import assert from 'node:assert/strict';

import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();

const output = resolve(process.argv[2] ?? '.work/full-engine-probe/build-cache');
const build = resolve(process.argv[3] ?? '.work/lean-full/wasm64');
mkdirSync(output);
writeFileSync(join(output, 'Sample.c'), '#include "layout.h"\nint value(void) { return LAYOUT_VALUE; }\n');
writeFileSync(join(output, 'main.c'), '#include <stdio.h>\nint value(void);\nint main(void) { printf("%d\\n", value()); }\n');
const header = join(output, 'layout.h');
const sourceBefore = readFileSync(join(output, 'Sample.c'));
const results = [];
function run(command, args) {
  const child = spawnSync(command, args, { cwd: output, encoding: 'utf8', timeout: 60_000 });
  assert.equal(child.status, 0, child.error?.message ?? child.stderr);
  return child;
}
function compile() {
  const made = run('make', ['-f', join(build, 'share/lean/lean.mk'), 'lib', 'PKG=Sample', 'C_ONLY=1',
    `C_OUT=${output}`, `OUT=${join(output, 'build')}`, 'LEAN_AR=ar', 'LEANC=cc',
    `LEANC_OPTS=-I${output}`, `LEANC_DEPS=${header}`]);
  run('cc', ['main.c', 'build/lib/libSample.a', '-o', 'sample']);
  const actual = run(join(output, 'sample'), []).stdout;
  results.push({ value: actual.trim(), make: made.stdout,
    objectMtime: statSync(join(output, 'build/temp/Sample.o.export')).mtimeMs });
  return actual;
}
writeFileSync(header, '#define LAYOUT_VALUE 17\n');
assert.equal(compile(), '17\n');
writeFileSync(header, '#define LAYOUT_VALUE 101\n');
assert.equal(compile(), '101\n');
assert.equal(compile(), '101\n');
assert.equal(results[1].objectMtime, results[2].objectMtime, 'unchanged inputs must keep the cached object');
assert.deepEqual(readFileSync(join(output, 'Sample.c')), sourceBefore, 'C input must be unchanged');
writeFileSync(join(output, 'results.json'), JSON.stringify({ testedAt: new Date().toISOString(), build,
  scope: 'Native make dependency regression using the generated Lean build rules.', results }, null, 2) + '\n');
console.log('changed headers rebuild generated C; unchanged inputs preserve cached objects');
