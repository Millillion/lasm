#!/usr/bin/env node
// Native smoke test of link-toolchain archives on their own platform: extract the
// native and shared archives, check each program's executable header and
// --version, then compile a small pthread C file with the recipe's clang command
// (src/link-driver/compile.mjs) and run it through wasm-ld, llvm-nm,
// llvm-objcopy, wasm-emscripten-finalize, wasm-opt and wasm-metadce. Output
// hashes are recorded so platforms can be compared byte for byte.
//
//   node scripts/link-driver/smoke-toolchain.mjs --native N.tar.zst --shared S.tar.zst --work DIR --report FILE
import { mkdirSync, readFileSync, writeFileSync, existsSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { parseArgs } from 'node:util';
import { extractToolchain, toolchainSdk, nativeTools } from './toolchain.mjs';
import { compileObject, bundledRecipe } from '../../src/link-driver/compile.mjs';
import { verifyNativeProgram } from '../../src/native-program.mjs';
import { executableName } from '../../src/platform.mjs';

const { values: options } = parseArgs({ options: { native: { type: 'string' }, shared: { type: 'string' },
  work: { type: 'string' }, report: { type: 'string' } } });
for (const name of ['native', 'shared', 'work', 'report']) if (!options[name]) throw new Error(`--${name} is required`);
const work = resolve(options.work);
if (existsSync(work)) throw new Error('Use a new --work directory');
const directory = await extractToolchain([resolve(options.native), resolve(options.shared)], join(work, 'toolchain'));
const sdk = await toolchainSdk(directory);
const tool = name => join(sdk.prefix, 'bin', executableName(name));
const run = (name, args, settings = {}) => execFileSync(tool(name), args, { env: sdk.env, windowsHide: true, encoding: 'utf8',
  stdio: ['ignore', 'pipe', 'pipe'], timeout: 300_000, ...settings });
const sha256 = file => createHash('sha256').update(readFileSync(file)).digest('hex');
const report = { schema: 1, platform: sdk.platform, node: process.version, tools: {}, outputs: {} };
for (const name of nativeTools) {
  const header = await verifyNativeProgram(tool(name));
  report.tools[name] = { header, version: run(name, ['--version']).split(/\r?\n/).find(Boolean) };
}
const build = join(work, 'build');
mkdirSync(build, { recursive: true });
const source = join(build, 'smoke.c');
writeFileSync(source, `#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdatomic.h>
static atomic_int counter;
int lasm_smoke(const char *text) {
  char *copy = malloc(strlen(text) + 1);
  strcpy(copy, text);
  atomic_fetch_add(&counter, (int)strlen(copy));
  printf("%s %d\\n", copy, atomic_load(&counter));
  free(copy);
  return atomic_load(&counter);
}
`);
const object = join(build, 'smoke.o');
const recipe = bundledRecipe();
const flags = recipe.compile.emccFlags.map(arg => arg === '<include>' ? build : arg);
compileObject({ sdk, flags, source, object, recipe, settings: { stdio: ['ignore', 'inherit', 'inherit'], timeout: 300_000 } });
report.symbols = run('llvm-nm', [object]).split(/\r?\n/).filter(Boolean).map(line => line.trim());
const file = name => join(build, name);
run('wasm-ld', ['-mwasm64', '--experimental-pic', '-pie', '--no-entry', '--export=lasm_smoke', '--allow-undefined',
  '--import-memory', '--shared-memory', '--max-memory=8589934592', '-o', file('smoke.wasm'), object]);
run('llvm-objcopy', [file('smoke.wasm'), file('strip.wasm'), '--remove-section=producers']);
report.finalizeMetadata = createHash('sha256').update(run('wasm-emscripten-finalize',
  ['--no-dyncalls', '--bigint', file('strip.wasm'), '-o', file('finalize.wasm')])).digest('hex');
run('wasm-opt', ['-Oz', file('strip.wasm'), '-o', file('opt.wasm')]);
writeFileSync(file('graph.json'), JSON.stringify([{ name: 'root', export: 'lasm_smoke', root: true }]));
report.metadceUnused = run('wasm-metadce', [`--graph-file=${file('graph.json')}`, file('strip.wasm'), '-o', file('dce.wasm')])
  .split(/\r?\n/).filter(line => line.startsWith('unused:'));
for (const name of ['smoke.o', 'smoke.wasm', 'strip.wasm', 'finalize.wasm', 'opt.wasm', 'dce.wasm'])
  report.outputs[name] = sha256(file(name));
writeFileSync(resolve(options.report), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
