import { createRequire } from 'node:module';
import { existsSync, readFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { fileURLToPath } from 'node:url';
import { resolve, join } from 'node:path';
import { isMainThread } from 'node:worker_threads';
import { originalArguments } from './posix-arguments.mjs';

const transport = 'LASM_BUN_STACK_ENV';
const keys = ['LD_PRELOAD', 'BUN_JSC_maxPerThreadStackUsage', 'LASM_BUN_STACK_BYTES', 'LASM_BUN_STACK_FD', transport];
const restore = values => {
  for (const [index, key] of keys.entries()) {
    if (values[index] === null) delete process.env[key]; else process.env[key] = values[index];
  }
};

// Stock Bun needs both a larger OS worker reservation and a larger JSC budget.
// A bundled private interposer supplies the former. Same-PID exec initializes
// both before any Lean code; visible environment values are restored afterward.
export function prepareBunStack(entrypoint, { minimumStackMiB = 0 } = {}) {
  if (!process.versions.bun || !isMainThread || process.platform !== 'linux') return;
  if (!Number.isFinite(minimumStackMiB) || minimumStackMiB < 0)
    throw new Error('Invalid minimum Bun worker stack');
  const require = createRequire(import.meta.url);
  const bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
  const ffi = existsSync(bundled) ? require(fileURLToPath(bundled)) : require('koffi');
  const libc = ffi.load(null);
  const getenv = libc.func('void *getenv(str name)'), strlen = libc.func('size_t strlen(const void *value)');
  const setenv = libc.func('int setenv(str name, const void *value, int overwrite)');
  const unsetenv = libc.func('int unsetenv(str name)');
  const nativeValues = () => keys.map(name => {
    const pointer = getenv(name);
    return pointer ? Buffer.from(new Uint8Array(ffi.view(pointer, Number(strlen(pointer))))).toString('base64') : null;
  });
  const restoreNative = values => {
    for (const [index, name] of keys.entries()) {
      const code = values[index] === null ? unsetenv(name)
        : setenv(name, Buffer.concat([Buffer.from(values[index], 'base64'), Buffer.from([0])]), 1);
      if (code !== 0) throw new Error(`Native Bun environment restore failed: errno ${ffi.errno()}`);
    }
  };
  const encoded = process.env[transport];
  if (encoded !== undefined) {
    const state = JSON.parse(encoded);
    if (state?.schema !== 1 || state.pid !== process.pid || state.entrypoint !== entrypoint
        || !Number.isSafeInteger(state.bytes) || state.bytes < 4 * 1024 ** 2
        || !Array.isArray(state.values) || state.values.length !== keys.length
        || state.values.some(value => value !== null && typeof value !== 'string')
        || !Array.isArray(state.nativeValues) || state.nativeValues.length !== keys.length
        || state.nativeValues.some(value => value !== null && (typeof value !== 'string'
          || Buffer.from(value, 'base64').toString('base64') !== value || Buffer.from(value, 'base64').includes(0))))
      throw new Error('Invalid private Bun stack environment transport');
    if (state.bytes < minimumStackMiB * 1024 ** 2)
      throw new Error('The initialized Bun worker stack is too small for this runtime');
    if (Number(libc.func('size_t lasm_bun_stack_reservation_bytes()')()) !== state.bytes)
      throw new Error('Bun worker stack helper did not initialize correctly');
    restoreNative(state.nativeValues); restore(state.values);
    return;
  }
  // Never replay an importing module or arbitrary preload effects. Configured
  // and embedded entry points retain their caller's engine configuration.
  if (Bun.main !== fileURLToPath(entrypoint)) return;
  const argv = originalArguments(ffi, libc);
  const decoded = argv.map(value => value.subarray(0, -1).toString());
  const script = decoded.findIndex((value, index) => index > 0 && resolve(value) === Bun.main);
  if (script < 0) return;
  const preload = /^(?:--preload|--require|--import|--config|-r|-c)(?:=|$)|^-r.+/;
  if (decoded.slice(1, script).some(value => preload.test(value))
      || /(?:^|\s)(?:--preload|--require|--import|-r)(?:[=\s]|$)/.test(process.env.NODE_OPTIONS ?? '')
      || process.env.BUN_OPTIONS) return;
  const configs = [join(process.cwd(), 'bunfig.toml')];
  if (process.env.HOME) configs.push(join(process.env.HOME, '.bunfig.toml'));
  if (process.env.XDG_CONFIG_HOME) configs.push(join(process.env.XDG_CONFIG_HOME, '.bunfig.toml'));
  if (configs.some(path => existsSync(path))) return;

  const requestedMiB = Number(process.env.LASM_VM_STACK_MB ?? 64);
  if (!Number.isFinite(requestedMiB) || requestedMiB < 4)
    throw new Error('Invalid LASM_VM_STACK_MB for Bun (minimum 4 MiB)');
  const stackMiB = Math.max(requestedMiB, minimumStackMiB);
  const bytes = Math.ceil(stackMiB * 1024 ** 2 / 4096) * 4096;
  if (!Number.isFinite(stackMiB) || !Number.isSafeInteger(bytes) || bytes < 4 * 1024 ** 2)
    throw new Error('Invalid LASM_VM_STACK_MB for Bun (minimum 4 MiB)');
  let abi = 'musl';
  try { libc.func('str gnu_get_libc_version()'); abi = 'gnu'; } catch { /* Linux musl */ }
  const name = `linux-${process.arch}-${abi}.so`;
  const location = [new URL('./native/bun-stack/', import.meta.url), new URL('../.cache/native-host/bun-stack/', import.meta.url)]
    .find(path => existsSync(new URL('manifest.json', path)));
  if (!location) throw new Error('Bundled Bun stack helper is missing; reinstall the complete Lasm package');
  const manifest = JSON.parse(readFileSync(new URL('manifest.json', location)));
  const helper = new URL(name, location), expected = manifest.files[name]?.sha256;
  if (!expected || createHash('sha256').update(readFileSync(helper)).digest('hex') !== expected)
    throw new Error(`Bundled Bun stack helper is missing or changed: ${name}`);
  const helperPath = fileURLToPath(helper);
  const values = keys.map(key => process.env[key] ?? null);
  const savedNative = nativeValues();
  // Bun's process.env mutations do not update libc's environ. Set these private
  // fields there too, preserving all other native bytes and restoring both maps
  // after exec. Reconstructing all environment strings loses malformed UTF-8.
  const exec = libc.func('int execv(str executable, const void **arguments)');
  // LD_PRELOAD has no quoting for spaces/colons. An inherited descriptor gives
  // the loader a separator-free path even after arbitrary deployment relocation.
  const open = libc.func('int open(str path, int flags, ...)');
  const close = libc.func('int close(int fd)');
  const duplicate = libc.func('int fcntl(int fd, int command, int minimum)');
  let descriptor = open(helperPath, 0);
  if (descriptor < 0) throw new Error(`Bun stack helper open failed: errno ${ffi.errno()}`);
  if (descriptor < 3) {
    const original = descriptor;
    descriptor = duplicate(original, 0 /* F_DUPFD */, 3); close(original);
    if (descriptor < 0) throw new Error(`Bun stack helper descriptor failed: errno ${ffi.errno()}`);
  }
  try {
    process.env[transport] = JSON.stringify({ schema: 1, pid: process.pid, entrypoint, bytes, values, nativeValues: savedNative });
    process.env.LASM_BUN_STACK_BYTES = String(bytes);
    process.env.LASM_BUN_STACK_FD = String(descriptor);
    process.env.BUN_JSC_maxPerThreadStackUsage = String(Math.floor(bytes * 15 / 16));
    process.env.LD_PRELOAD = [`/proc/self/fd/${descriptor}`, values[0]].filter(Boolean).join(':');
    for (const key of keys) {
      if (setenv(key, Buffer.from(process.env[key] + '\0'), 1) !== 0)
        throw new Error(`Native Bun environment setup failed: errno ${ffi.errno()}`);
    }
    exec(process.execPath, [...argv, null]);
    throw new Error(`Bun stack initialization exec failed: errno ${ffi.errno()}`);
  } finally { close(descriptor); restoreNative(savedNative); restore(values); }
}
