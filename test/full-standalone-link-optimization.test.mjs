import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, rmSync, existsSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { resolve, join } from 'node:path';
import { standaloneOptimizationPlan, standaloneOptimizationCommands } from '../scripts/full-lean/standalone-link-optimization.mjs';

mkdirSync(resolve('.work'), { recursive: true });
const directory = mkdtempSync(resolve('.work/split-optimization-'));
test.after(() => rmSync(directory, { recursive: true, force: true }));
const source = join(directory, 'source with spaces.c'), second = join(directory, 'second.c');
for (const path of [source, second]) writeFileSync(path, '// Lean compiler output\n');
const custom = join(directory, 'custom.c'); writeFileSync(custom, 'int main(void) { return 0; }\n');
const libraries = join(directory, 'lib'); mkdirSync(libraries);
const options = { level: 1, compilerLibraryDirectories: [libraries] };
const normal = [source, '-O3', '-DNDEBUG', '-I', 'headers with spaces', '-L', libraries, '-lLean', '-pthread'];

test('split optimization preserves all C flags and changes only the final link optimization', () => {
  const plan = standaloneOptimizationPlan(normal, [], options);
  assert.equal(plan.mode, 'split');
  const object = join(directory, 'scratch/source.o');
  const target = ['-sMEMORY64=1', '-pthread', '-fwasm-exceptions'];
  const compile = [...normal, ...target];
  const link = [...compile, '-o', 'program.cjs', '-sMAIN_MODULE=2'];
  const before = structuredClone({ compile, link });
  const commands = standaloneOptimizationCommands(compile, link, plan, object);
  assert.deepEqual(commands.compile, [...compile, '-c', '-o', object]);
  assert.deepEqual(commands.link, [object, ...link.slice(1), '-O1']);
  assert.deepEqual({ compile, link }, before);
});

for (const [name, args, paths] of [
  ['custom source', [custom, '-O3'], []],
  ['multiple generated sources', [...normal, second], []],
  ['custom object', [...normal, 'extra.o'], []],
  ['custom archive', [...normal, 'extra.a'], []],
  ['custom library', [...normal, '-lother'], []],
  ['rpath', normal, ['$ORIGIN/lib']],
  ['LTO', [...normal, '-flto'], []],
  ['dependencies', [...normal, '-MMD', '-MF', 'program.d'], []],
  ['joined dependency output', [...normal, '-MFprogram.d'], []],
  ['split DWARF', [...normal, '-gsplit-dwarf'], []],
  ['saved temporaries', [...normal, '-save-temps=obj'], []],
  ['instrumentation', [...normal, '-fprofile-generate'], []],
  ['sanitizer', [...normal, '-fsanitize=address'], []],
]) test(`${name} keeps the original build path`, () => {
  assert.equal(standaloneOptimizationPlan(args, paths, options).mode, 'unchanged');
});

test('unknown optimization levels and missing stage inputs fail explicitly', () => {
  assert.throws(() => standaloneOptimizationPlan(normal, [], { ...options, level: 3 }), /only level 1/);
  const plan = standaloneOptimizationPlan(normal, [], options);
  assert.throws(() => standaloneOptimizationCommands([], normal, plan, 'object.o'), /both stages/);
});

for (const [name, flags, message] of [
  ['missing level', ['--standalone-link-optimization'], /accepts only 1/],
  ['unsupported level', ['--standalone-link-optimization', '2'], /accepts only 1/],
  ['conflicting application mode', ['--standalone-link-optimization', '1', '--shared-applications'], /not both/],
]) test(`toolchain preparation rejects ${name} before creating an output`, () => {
  const output = join(directory, name);
  const run = spawnSync(process.execPath,
    ['scripts/full-lean/prepare-toolchain.mjs', '--output', output, ...flags], { encoding: 'utf8' });
  assert.equal(run.status, 1);
  assert.match(run.stderr, message);
  assert.equal(existsSync(output), false);
});
