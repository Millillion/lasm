import { createRequire } from 'node:module';
import { existsSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { isMainThread } from 'node:worker_threads';
import { originalArguments } from './posix-arguments.mjs';

const transport = 'LASM_DENO_STACK_ENV';
const environmentKeys = ['DENO_V8_FLAGS', 'DENO_DISABLE_NODE_SHIM', transport];

// Deno 2.9.7 reserves the requested OS worker stack but keeps V8's separate
// execution budget at its command-line default. Configure that budget before
// application initialization. POSIX exec preserves PID, cwd, arguments, inherited
// descriptors and the original Deno permission flags. No shell or build tool runs.
export function prepareDenoStack(entrypoint) {
  if (!process.versions.deno || !isMainThread || !['linux', 'darwin'].includes(process.platform)) return;
  const encoded = process.env[transport];
  if (encoded !== undefined) {
    const state = JSON.parse(encoded);
    if (state?.schema !== 1 || state.pid !== process.pid || state.entrypoint !== entrypoint
        || !Array.isArray(state.values) || state.values.length !== environmentKeys.length
        || state.values.some(value => value !== null && typeof value !== 'string'))
      throw new Error('Invalid private Deno stack environment transport');
    for (const [index, name] of environmentKeys.entries()) {
      if (state.values[index] === null) delete process.env[name];
      else process.env[name] = state.values[index];
    }
    return;
  }
  // Importing a main from another module may follow arbitrary user effects.
  // Replaying that module, or command-line preload hooks, would run them twice.
  // Such embeddings retain their caller's engine configuration; callable-library
  // initialization needs a separate solution and is not claimed here.
  if (Deno.mainModule !== entrypoint) return;
  const require = createRequire(import.meta.url);
  const bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
  const ffi = existsSync(bundled) ? require(fileURLToPath(bundled)) : require('koffi');
  const libc = ffi.load(process.platform === 'darwin' ? '/usr/lib/libSystem.B.dylib' : null);
  const argv = originalArguments(ffi, libc);
  const engineArguments = argv.slice(1, argv.length - Deno.args.length - 1)
    .map(value => value.subarray(0, -1).toString());
  if (engineArguments.some(value => /^(?:--preload|--require|--import)(?:=|$)/.test(value))) return;
  const stackMiB = Number(process.env.LASM_VM_STACK_MB ?? 64);
  if (!Number.isFinite(stackMiB) || stackMiB <= 0) throw new Error('Invalid LASM_VM_STACK_MB');
  // Leave native overhead below the matching Emscripten worker reservation.
  const stackKiB = Math.max(1, Math.floor(stackMiB * 1024 * 15 / 16));
  const values = environmentKeys.map(name => process.env[name] ?? null);
  const exec = libc.func('int execv(str executable, const void **arguments)');
  try {
    process.env[transport] = JSON.stringify({ schema: 1, pid: process.pid, entrypoint, values });
    process.env.DENO_V8_FLAGS = [values[0], `--stack-size=${stackKiB}`].filter(Boolean).join(',');
    // Avoid adding Deno's synthetic node PATH entry a second time.
    process.env.DENO_DISABLE_NODE_SHIM = '1';
    exec(process.execPath, [...argv, null]);
    throw new Error(`Deno stack initialization exec failed: errno ${ffi.errno()}`);
  } finally {
    // A successful exec never returns. Leave the caller's environment intact
    // if the operating system rejects replacement.
    for (const [index, name] of environmentKeys.entries()) {
      if (values[index] === null) delete process.env[name]; else process.env[name] = values[index];
    }
  }
}
