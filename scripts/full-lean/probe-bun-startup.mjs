// Compare engine compilation settings using the same frozen compiler and Lean
// source. These are diagnostic smoke checks, not upstream conformance results.
import { mkdirSync, readFileSync, writeFileSync, existsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from './resource-guard.mjs';
import { root, resolveLean } from '../../src/toolchain.mjs';

await ensureResourceGuard();
const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const toolchain = resolve(option('--toolchain', '.work/full-toolchains/bun-v35-finalizer'));
const output = resolve(option('--output', '.work/full-engine-probe/bun-startup'));
if (existsSync(output)) throw new Error('Use a fresh output directory');
const config = JSON.parse(readFileSync(join(toolchain, 'toolchain.json')));
if (config.engine !== 'bun') throw new Error('This comparison requires a frozen Bun facade');
mkdirSync(output, { recursive: true });
const source = join(output, 'Startup.lean');
writeFileSync(source, 'import Init\n#eval IO.println "startup smoke passed"\n');
const expected = 'startup smoke passed\n';
const evidence = { scope: 'Additional startup smoke comparison with fixed Wasm, Lean source, worker pool, and Linux stack adjustment. No setting is adopted without subsequent conformance checks.',
  resourceReport: process.env.LASM_RESOURCE_REPORT, config,
  sourceSha256: createHash('sha256').update(readFileSync(source)).digest('hex'),
  references: [
    'https://github.com/WebKit/WebKit/blob/main/Source/JavaScriptCore/runtime/OptionsList.h',
    'https://github.com/WebKit/WebKit/blob/main/Source/JavaScriptCore/runtime/Options.cpp',
    'https://github.com/oven-sh/bun/issues/41438',
  ],
  hypothesis: 'Interpreter/tiering settings may reduce eager startup work; fewer compiler threads may reduce compiler working memory. Upstream reports and current WebKit source do not prove behavior in this pinned Bun binary.',
  results: [] };
const save = () => writeFileSync(join(output, 'comparison.json'), JSON.stringify(evidence, null, 2) + '\n');
function run(name, executable, command, environment = {}, timeout = 240_000) {
  const started = performance.now();
  const result = spawnSync(executable, command, { cwd: root, env: { ...process.env, ...environment },
    encoding: 'utf8', timeout, killSignal: 'SIGKILL', maxBuffer: 256 * 1024 });
  return { name, executable, command, environment, seconds: (performance.now() - started) / 1000,
    code: result.status, signal: result.signal, error: result.error?.message, stdout: result.stdout, stderr: result.stderr };
}
const native = run('native control', resolveLean(root).lean, ['-j4', source]);
native.passed = native.code === 0 && native.stdout === expected && native.stderr === '';
evidence.results.push(native); save();
if (!native.passed) throw new Error('Native startup control failed');
const variants = [
  ['default', {}],
  ['explicit-ipint', { BUN_JSC_useWasmIPInt: 'true' }],
  ['two-compiler-threads', { BUN_JSC_numberOfWasmCompilerThreads: '2' }],
  ['explicit-ipint-two-threads', { BUN_JSC_useWasmIPInt: 'true', BUN_JSC_numberOfWasmCompilerThreads: '2' }],
];
const flags = ['useWasmIPInt', 'useBBQJIT', 'useOMGJIT', 'useConcurrentJIT', 'numberOfWasmCompilerThreads', 'thresholdForBBQOptimizeAfterWarmUp'];
for (const [name, settings] of variants) {
  const environment = { ...config.engineEnvironment, ...settings };
  const inspected = run(name + ' options', config.executable,
    [...config.engineArgs, '-e', 'console.log(process.versions.bun)'], { ...environment, BUN_JSC_dumpOptions: '2' }, 10_000);
  writeFileSync(join(output, name + '-options.log'), inspected.stdout + inspected.stderr);
  const effectiveOptions = Object.fromEntries(flags.map(flag => [flag,
    inspected.stderr.match(new RegExp('\\b' + flag + '\\s*=\\s*([^\\s;]+)'))?.[1] ?? null]));
  const optionsAccepted = inspected.code === 0 && !/invalid (?:jsc )?option|unknown option/i.test(inspected.stderr)
    && Object.entries(settings).every(([key, value]) => effectiveOptions[key.slice('BUN_JSC_'.length)] === value);
  if (!optionsAccepted) {
    evidence.results.push({ name, settings, effectiveOptions, optionsAccepted,
      passed: false, reason: 'Requested options were not confirmed by the pinned engine; compiler execution skipped.' });
    save(); console.log(`${name}: options not confirmed`); continue;
  }
  const result = run(name, config.executable, [...config.engineArgs,
    join(config.runtimeSupport, 'run-compiler.mjs'), '--prefix', config.build, '-j4', '-s65536', source], {
    ...environment, LASM_FULL_LEAN_PREFIX: config.build, LEAN_SYSROOT: toolchain,
    LASM_FULL_APP_PATH: join(toolchain, 'bin/lean'), LASM_FULL_ENTRYPOINT: 'lean',
    LASM_FULL_TOOLCHAIN_CONFIG: join(toolchain, 'toolchain.json'),
  });
  result.passed = result.code === 0 && result.stdout === expected && result.stderr === '';
  Object.assign(result, { effectiveOptions, optionsAccepted });
  evidence.results.push(result); save();
  console.log(`${name}: ${result.passed ? 'passed' : 'failed'} (${result.seconds.toFixed(2)} s)`);
}
evidence.finishedAt = new Date().toISOString(); save();
process.exitCode = evidence.results.every(result => result.passed) ? 0 : 1;
