// A parallel-suite toolchain facade. Every Lean entry point executes the full
// Wasm compiler in the selected engine; there is no native Lean fallback.
import { mkdirSync, writeFileSync, readFileSync, symlinkSync, existsSync, chmodSync, copyFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';

const argv = process.argv.slice(2);
const option = (name, fallback) => { const i = argv.indexOf(name); return i < 0 ? fallback : argv[i + 1]; };
const engine = option('--engine', 'node');
const bunSmol = argv.includes('--bun-smol');
if (bunSmol && engine !== 'bun') throw new Error('--bun-smol is only supported by the Bun facade');
const leanThreads = Number(option('--lean-threads', '4'));
if (!Number.isInteger(leanThreads) || leanThreads < 1 || leanThreads > 4)
  throw new Error('--lean-threads must be 1..4 on this maintainer host');
const lakeThreads = Number(option('--lake-threads', '4'));
if (!Number.isInteger(lakeThreads) || lakeThreads < 1 || lakeThreads > 4)
  throw new Error('--lake-threads must be 1..4 on this maintainer host');
const defaults = {
  node: [process.execPath, []],
  // Deno applies resourceLimits.stackSizeMb to the OS worker reservation but
  // leaves V8's separate stack budget at its much smaller command-line default.
  deno: [join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A', '--v8-flags=--stack-size=61440']],
  bun: [join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
};
if (!defaults[engine]) throw new Error('Use --engine node, deno, or bun');
const [defaultExecutable, engineArgs] = defaults[engine];
if (bunSmol) engineArgs.push('--smol');
const executable = resolve(option('--executable', defaultExecutable));
const output = resolve(option('--output', `.work/full-toolchains/${engine}`));
if (existsSync(output)) throw new Error('Prepare a new toolchain directory to preserve previous run configurations');
const build = resolve(option('--build', '.work/lean-full/wasm64'));
const source = resolve(option('--source', '.work/lean-full/lean4-4.32.0/src'));
const native = resolveLean(root);
const snapshot = existsSync(join(build, 'snapshot.json')) ? JSON.parse(readFileSync(join(build, 'snapshot.json'))) : undefined;
const sdk = resolve(process.env.LASM_EMSDK ?? snapshot?.sdk ?? join(root, '.cache/emsdk-6.0.9'));
const runtimeSupport = snapshot ? join(build, 'runtime-support') : join(root, 'scripts/full-lean');
for (const path of [executable, join(build, 'bin/lean.js'), join(build, 'bin/lean.wasm')])
  if (!existsSync(path)) throw new Error(`Missing full compiler prerequisite: ${path}`);
const buildConfig = readFileSync(join(build, 'CMakeCache.txt'), 'utf8');
// A recorded worker-pool derivative changes generated JavaScript without
// rebuilding the Wasm. Use its actual pool size for generated applications too.
const javascript = readFileSync(join(build, 'bin/lean.js'), 'utf8');
if (bunSmol && !javascript.includes('process.env.LASM_BUN_SMOL'))
  throw new Error('The selected snapshot does not propagate Bun smol mode to workers; derive or rebuild it first');
const poolMatches = [...javascript.matchAll(/var pthreadPoolSize = (\d+);/g)];
if (poolMatches.length !== 1) throw new Error('Cannot determine the compiled worker-pool size');
const pthreadPoolSize = Number(poolMatches[0][1]);
const memoryMode = Number(buildConfig.match(/^LASM_MEMORY64:STRING=([12])$/m)?.[1]);
if (![1, 2].includes(memoryMode)) throw new Error('The full suite requires a 64-bit Lean value layout');
const engineEnvironment = engine === 'bun' && memoryMode === 1 ? { BUN_JSC_useWasmMemory64: 'true' } : {};
if (bunSmol) engineEnvironment.LASM_BUN_SMOL = '1';
// This is an explicit Linux harness resource adjustment, not an implicit change
// to stock Bun or a portable launcher feature. Preserve a local copy and hash.
const stackHelper = option('--bun-stack-helper');
if (stackHelper && (engine !== 'bun' || process.platform !== 'linux'))
  throw new Error('--bun-stack-helper is only supported by the Linux Bun test facade');
const stackHelperBytes = stackHelper ? readFileSync(resolve(stackHelper)) : undefined;
if (stackHelperBytes && !stackHelperBytes.subarray(0, 4).equals(Buffer.from([0x7f, 0x45, 0x4c, 0x46])))
  throw new Error('--bun-stack-helper must be the compiled Linux stack-reservation library');
if (!/^LASM_LINK_TOOLS:BOOL=ON$/m.test(buildConfig))
  throw new Error('The selected compiler must include the original tool entry points (build --stage wasm64)');
mkdirSync(join(output, 'bin'), { recursive: true });
let stackAdjustment;
if (stackHelperBytes) {
  const localHelper = join(output, 'bun-stack-reservation.so');
  copyFileSync(resolve(stackHelper), localHelper);
  Object.assign(engineEnvironment, { LD_PRELOAD: localHelper, BUN_JSC_maxPerThreadStackUsage: '62914560' });
  stackAdjustment = { helper: localHelper,
    sha256: createHash('sha256').update(stackHelperBytes).digest('hex'),
    osThreadStackBytes: 64 * 1024 * 1024, jscStackBudgetBytes: 60 * 1024 * 1024,
    scope: 'Explicit Linux-only resource-adjusted harness; tests unchanged, not a stock Bun result.' };
}
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
  // Unlike generated application mains, Lean's C++ shell initializes its task
  // manager directly and does not read the application environment defaults.
  // Supply its ordinary CLI options before user arguments so explicit later
  // -j/-s options still win.
  const resourceArgs = name === 'lean' ? ' -j"${LEAN_NUM_THREADS}" -s"${LEAN_STACK_SIZE_KB}"' : '';
  writeFileSync(path, `#!/usr/bin/env bash
if [ -z "\${LEAN_SYSROOT+x}" ]; then export LEAN_SYSROOT=${quote(output)}; fi
export LASM_FULL_APP_PATH=${quote(path)}
export LASM_FULL_ENTRYPOINT=${quote(name)}
export LASM_FULL_TOOLCHAIN_CONFIG=${quote(join(output, 'toolchain.json'))}
${Object.entries(engineEnvironment).map(([key, value]) => `export ${key}=${quote(value)}`).join('\n')}
if [ -z "\${LEAN_CC+x}" ]; then export LEAN_CC=${quote(join(output, 'bin/clang'))}; fi
export LEAN_STACK_SIZE_KB="\${LEAN_STACK_SIZE_KB:-65536}"
export LEAN_NUM_THREADS="\${LEAN_NUM_THREADS:-${name === 'lake' ? lakeThreads : leanThreads}}"
exec ${[...runner, ...args].map(quote).join(' ')}${resourceArgs} "$@"
`);
  chmodSync(path, 0o755);
}
const links = {
  lib: join(build, 'lib'), include: join(build, 'include'), share: join(build, 'share'),
  'bin/leanmake': join(build, 'bin/leanmake'),
};
for (const name of ['clang', 'clang++', 'cc', 'c++', 'gcc', 'g++']) {
  const path = join(output, 'bin', name);
  writeFileSync(path, `#!/usr/bin/env bash
export LASM_FULL_TOOLCHAIN_CONFIG=${quote(join(output, 'toolchain.json'))}
export LASM_CC_LANGUAGE=${quote(name.endsWith('++') ? 'c++' : 'c')}
exec ${[executable, ...engineArgs, join(runtimeSupport, 'cc-driver.mjs')].map(quote).join(' ')} "$@"
`);
  chmodSync(path, 0o755);
}
// Emscripten launchers derive their .py filename from argv[0]; a differently
// named symlink (llvm-ar -> emar) therefore cannot work. Execute the real path.
for (const [name, tool] of Object.entries({ 'llvm-ar': 'emar', ar: 'emar', ranlib: 'emranlib' })) {
  const path = join(output, 'bin', name);
  writeFileSync(path, `#!/usr/bin/env bash\nexec ${quote(join(sdk, 'upstream/emscripten', tool))} "$@"\n`);
  chmodSync(path, 0o755);
}
// These are upstream's external SAT/archive helpers, not Lean executables.
for (const name of ['cadical', 'leantar']) if (existsSync(join(native.prefix, 'bin', name))) links['bin/' + name] = join(native.prefix, 'bin', name);
for (const [name, target] of Object.entries(links)) if (!existsSync(join(output, name))) symlinkSync(target, join(output, name));
writeFileSync(join(output, 'toolchain.json'), JSON.stringify({ leanCommit, engine, executable, engineArgs, build, source, sdk, runtimeSupport,
  leanThreads, lakeThreads, bunSmol,
  sourceBuild: snapshot?.sourceBuild ?? build,
  systemAllocator: buildConfig.match(/^LEAN_EXTRA_LINKER_FLAGS:STRING=.*?-sMALLOC=(\w+)/m)?.[1] ?? 'dlmalloc',
  leanAllocator: /^USE_MIMALLOC:BOOL=ON$/m.test(buildConfig) ? 'mimalloc' : 'generic',
  memoryMode, engineEnvironment, stackAdjustment,
  maximumMemoryBytes: Number(buildConfig.match(/^LEAN_EXTRA_LINKER_FLAGS:STRING=.*?-sMAXIMUM_MEMORY=(\d+)/m)?.[1] ?? 4294967296),
  pthreadPoolSize,
  backend: memoryMode === 1 ? 'full-lean-wasm64-native' : 'full-lean-wasm64-lowered', nativeLeanFallback: false,
  environmentAdjustments: { LEAN_SYSROOT: output, LASM_FULL_APP_PATH: 'Selected facade entry point', LEAN_STACK_SIZE_KB: '65536 unless explicitly supplied', LEAN_NUM_THREADS: `${leanThreads} unless explicitly supplied`,
    leanShell: 'Prepend ordinary -j/-s options from the environment because this entry point does not read application defaults; explicit user CLI options take precedence.' },
  externalTools: links,
}, null, 2) + '\n');
console.log(JSON.stringify({ engine, output, build }));
