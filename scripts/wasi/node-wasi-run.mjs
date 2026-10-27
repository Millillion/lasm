// Runs a WASI command module with Node's node:wasi (docs/WASI.md):
//   node scripts/wasi/node-wasi-run.mjs MODULE.wasm [arguments…]
// The current directory is preopened as "."; the environment is passed on
// (minus Node's own NODE_* variables); standard streams are inherited. Exits
// with the module's status. LASM_WASI_TIMING=1 prints the startup time
// (compile + instantiate + _start) on stderr.
import { readFileSync } from 'node:fs';

// node:wasi's ExperimentalWarning would mix with the program's standard error.
const emitWarning = process.emitWarning;
process.emitWarning = (warning, ...rest) => (rest[0] === 'ExperimentalWarning' || rest[0]?.type === 'ExperimentalWarning') ? undefined : emitWarning.call(process, warning, ...rest);
const { WASI } = await import('node:wasi');
const [file, ...args] = process.argv.slice(2);
if (!file) { console.error('Usage: node node-wasi-run.mjs MODULE.wasm [arguments…]'); process.exit(2); }
const env = Object.fromEntries(Object.entries(process.env).filter(([key]) => !key.startsWith('NODE_') && key !== 'LASM_WASI_TIMING'));
const started = performance.now();
const wasi = new WASI({ version: 'preview1', args: [file, ...args], env, preopens: { '.': process.cwd() }, returnOnExit: true });
const module = await WebAssembly.compile(readFileSync(file));
const instance = await WebAssembly.instantiate(module, wasi.getImportObject());
const code = wasi.start(instance);
if (process.env.LASM_WASI_TIMING) console.error(`[node:wasi] ${(performance.now() - started).toFixed(2)} ms`);
process.exitCode = code;
