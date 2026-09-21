import { existsSync, readFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { fileURLToPath } from 'node:url';

// A private binary protocol keeps environments out of argv, avoids a JSON
// dependency in the tiny native child, and preserves literal UTF-8 strings.
export function encodeProcessConfiguration(options) {
  const chunks = [Buffer.from('LASMEX01')];
  const number = value => { const bytes = Buffer.alloc(4); bytes.writeUInt32LE(value); chunks.push(bytes); };
  const string = value => {
    if (value === undefined) { number(0xffffffff); return; }
    const bytes = Buffer.from(value);
    if (bytes.includes(0)) throw new Error('NUL in private process configuration');
    number(bytes.length); chunks.push(bytes);
  };
  number((options.directoryFd === undefined ? 0 : 1) | (options.inheritProcessCwd ? 2 : 0) | (options.setsid ? 4 : 0));
  for (const flags of options.stdioFlags) number(flags >>> 0);
  string(options.directory); string(options.requestedCwd);
  number(options.args.length + 1);
  for (const value of [options.command, ...options.args]) string(value);
  const environment = Object.entries(options.env);
  number(environment.length);
  for (const [key, value] of environment) { string(key); string(value); }
  return Buffer.concat(chunks);
}

let cached;
export function nativeProcessLauncher(libc) {
  if (cached) return cached;
  let abi = 'musl';
  try { libc.func('str gnu_get_libc_version()'); abi = 'gnu'; } catch { /* Linux musl */ }
  const name = `linux-${process.arch}-${abi}`;
  const location = [new URL('./native/process/', import.meta.url),
    new URL('../.cache/native-host/process/', import.meta.url)]
    .find(path => existsSync(new URL('manifest.json', path)));
  if (!location) throw new Error('Native process launcher is missing; maintainers must run scripts/build-process-launcher.mjs, and installed users must reinstall the complete Lasm package');
  const manifest = JSON.parse(readFileSync(new URL('manifest.json', location)));
  const path = new URL(name, location), expected = manifest.files[name]?.sha256;
  if (!expected || createHash('sha256').update(readFileSync(path)).digest('hex') !== expected)
    throw new Error(`Native process launcher is missing or changed: ${name}`);
  cached = fileURLToPath(path);
  return cached;
}
