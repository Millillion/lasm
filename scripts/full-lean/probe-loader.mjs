// Native/engine loader-path comparisons, separate from upstream suite results.
import { mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import assert from 'node:assert/strict';
import { root } from '../../src/toolchain.mjs';

const [configuration, destination] = process.argv.slice(2);
if (!configuration || !destination) throw new Error('Supply a full toolchain.json and a new output directory');
const config = JSON.parse(readFileSync(resolve(configuration)));
const output = resolve(destination);
mkdirSync(output);
const libraries = join(output, 'libraries with 日本語');
const override = join(output, 'override');
const bin = join(output, 'bin');
for (const dir of [libraries, override, bin]) mkdirSync(dir);
const currentConfig = join(output, 'toolchain.json');
writeFileSync(currentConfig, JSON.stringify({ ...config, runtimeSupport: join(root, 'scripts/full-lean') }, null, 2) + '\n');
const results = [];
function run(name, command, args, environment = {}, expected) {
  const started = performance.now();
  const execution = spawnSync(command, args, { encoding: 'utf8', timeout: 120_000,
    env: { ...process.env, ...environment } });
  const result = { name, command, args, environment, seconds: (performance.now() - started) / 1000,
    status: execution.status, signal: execution.signal, stdout: execution.stdout, stderr: execution.stderr,
    error: execution.error?.message };
  results.push(result);
  writeFileSync(join(output, 'results.json'), JSON.stringify({ testedAt: new Date().toISOString(),
    scope: 'C loader prerequisite comparisons; not upstream suite results.', results }, null, 2) + '\n');
  assert.equal(execution.status, 0, `${name}: ${execution.error?.message ?? execution.stderr}`);
  if (expected !== undefined) {
    assert.equal(execution.stdout, expected, name);
    assert.equal(execution.stderr, '', name);
    console.log(`${name}: passed`);
  }
}
const adapter = join(root, 'scripts/full-lean/cc-driver.mjs');
const env = { LASM_FULL_TOOLCHAIN_CONFIG: currentConfig, LASM_CC_LANGUAGE: 'c' };
const librarySource = join(root, 'scripts/full-lean/probes/loader-library.c');
for (const [directory, value] of [[libraries, 42], [override, 84]]) {
  run(`native library ${value}`, 'cc', ['-shared', '-fPIC', `-DLIBRARY_VALUE=${value}`, librarySource,
    '-o', join(directory, 'libnativevalue.so')]);
  run(`Wasm library ${value}`, process.execPath, [adapter, '-shared', '-O1', `-DLIBRARY_VALUE=${value}`, librarySource,
    '-o', join(directory, 'libwasmvalue.so')], env);
}
const engines = [
  ['node', process.execPath, []],
  ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
  ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
];
const main = join(root, 'scripts/full-lean/probes/loader.c');
for (const [label, rpath] of [['absolute', libraries], ['origin', '$ORIGIN/../libraries with 日本語'],
  ['origin-braces', '${ORIGIN}/../libraries with 日本語']]) {
  const native = join(bin, label + '-native'), wasm = join(bin, label + '-wasm');
  run(label + ' native link', 'cc', [main, '-L', libraries, '-lnativevalue', '-Wl,-rpath,' + rpath, '-o', native]);
  run(label + ' Wasm link', process.execPath, [adapter, main, '-O1', '-L', libraries, '-lwasmvalue',
    '-Wl,-rpath,' + rpath, '-o', wasm], env);
  for (const useOverride of [false, true]) {
    const value = useOverride ? '84' : '42';
    const environment = { LD_LIBRARY_PATH: useOverride ? override : '' };
    const expected = `library value: ${value}\n`;
    run(`${label} native ${value}`, native, [value], environment, expected);
    for (const [name, executable, prefix] of engines)
      run(`${label} ${name} ${value}`, executable, [...prefix, wasm + '.cjs', value], environment, expected);
  }
}
