// A parallel-suite toolchain facade. Every Lean entry point executes the full
// Wasm compiler in the selected engine; there is no native Lean fallback.
import { mkdirSync, writeFileSync, readFileSync, symlinkSync, existsSync, chmodSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';

const argv = process.argv.slice(2);
const option = (name, fallback) => { const i = argv.indexOf(name); return i < 0 ? fallback : argv[i + 1]; };
const engine = option('--engine', 'node');
const defaults = {
  node: [process.execPath, []],
  deno: [join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
  bun: [join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
};
if (!defaults[engine]) throw new Error('Use --engine node, deno, or bun');
const [defaultExecutable, engineArgs] = defaults[engine];
const executable = resolve(option('--executable', defaultExecutable));
const output = resolve(option('--output', `.work/full-toolchains/${engine}`));
if (existsSync(output)) throw new Error('Prepare a new toolchain directory to preserve previous run configurations');
const build = resolve(option('--build', '.work/lean-full/wasm64'));
const source = resolve(option('--source', '.work/lean-full/lean4-4.32.0/src'));
const sdk = resolve(process.env.LASM_EMSDK ?? join(root, '.cache/emsdk-6.0.9'));
const native = resolveLean(root);
const snapshot = existsSync(join(build, 'snapshot.json')) ? JSON.parse(readFileSync(join(build, 'snapshot.json'))) : undefined;
const runtimeSupport = snapshot ? join(build, 'runtime-support') : join(root, 'scripts/full-lean');
for (const path of [executable, join(build, 'bin/lean.js'), join(build, 'bin/lean.wasm')])
  if (!existsSync(path)) throw new Error(`Missing full compiler prerequisite: ${path}`);
if (!/^LASM_LINK_TOOLS:BOOL=ON$/m.test(readFileSync(join(build, 'CMakeCache.txt'), 'utf8')))
  throw new Error('The selected compiler must include the original tool entry points (build --stage wasm64)');
mkdirSync(join(output, 'bin'), { recursive: true });
const quote = text => "'" + text.replaceAll("'", "'\\''") + "'";
const runner = [executable, ...engineArgs, join(runtimeSupport, 'run-compiler.mjs'), '--prefix', build];
const wrappers = {
  lean: [],
  lake: [],
  leanir: [],
  leanc: [],
  leanchecker: [],
};
for (const [name, args] of Object.entries(wrappers)) {
  const path = join(output, 'bin', name);
  writeFileSync(path, `#!/usr/bin/env bash
if [ -z "\${LEAN_SYSROOT+x}" ]; then export LEAN_SYSROOT=${quote(output)}; fi
export LASM_FULL_APP_PATH=${quote(path)}
export LASM_FULL_ENTRYPOINT=${quote(name)}
export LASM_FULL_TOOLCHAIN_CONFIG=${quote(join(output, 'toolchain.json'))}
if [ -z "\${LEAN_CC+x}" ]; then export LEAN_CC=${quote(join(output, 'bin/clang'))}; fi
export LEAN_STACK_SIZE_KB="\${LEAN_STACK_SIZE_KB:-8192}"
export LEAN_NUM_THREADS="\${LEAN_NUM_THREADS:-2}"
exec ${[...runner, ...args].map(quote).join(' ')} "$@"
`);
  chmodSync(path, 0o755);
}
const links = {
  lib: join(build, 'lib'), include: join(build, 'include'), share: join(build, 'share'),
  'bin/llvm-ar': join(sdk, 'upstream/emscripten/emar'),
  'bin/leanmake': join(build, 'bin/leanmake'),
};
for (const name of ['clang', 'clang++']) {
  const path = join(output, 'bin', name);
  writeFileSync(path, `#!/usr/bin/env bash
export LASM_FULL_TOOLCHAIN_CONFIG=${quote(join(output, 'toolchain.json'))}
export LASM_CC_LANGUAGE=${quote(name === 'clang++' ? 'c++' : 'c')}
exec ${[executable, ...engineArgs, join(runtimeSupport, 'cc-driver.mjs')].map(quote).join(' ')} "$@"
`);
  chmodSync(path, 0o755);
}
// These are upstream's external SAT/archive helpers, not Lean executables.
for (const name of ['cadical', 'leantar']) if (existsSync(join(native.prefix, 'bin', name))) links['bin/' + name] = join(native.prefix, 'bin', name);
for (const [name, target] of Object.entries(links)) if (!existsSync(join(output, name))) symlinkSync(target, join(output, name));
writeFileSync(join(output, 'toolchain.json'), JSON.stringify({ leanCommit, engine, executable, engineArgs, build, source, sdk, runtimeSupport,
  sourceBuild: snapshot?.sourceBuild ?? build,
  backend: 'full-lean-wasm64-lowered', nativeLeanFallback: false,
  environmentAdjustments: { LEAN_SYSROOT: output, LASM_FULL_APP_PATH: 'Selected facade entry point', LEAN_STACK_SIZE_KB: '8192 unless explicitly supplied', LEAN_NUM_THREADS: '2 unless explicitly supplied' },
  externalTools: links,
}, null, 2) + '\n');
console.log(JSON.stringify({ engine, output, build }));
