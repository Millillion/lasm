import { createReadStream, readFileSync, lstatSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { join } from 'node:path';

export const wasmtimeCpuTarget = 'x86_64-unknown-linux-gnu';

export const wasmtimeHostFiles = ['wasmtime-runtime.mjs', 'wasmtime-worker.mjs', 'wasmtime-standalone.mjs',
  'wasmtime-artifact.mjs', 'wasmtime-native-stdio.mjs', 'wasmtime-guest-memory.mjs',
  'wasmtime-wasi-stdio.mjs', 'wasmtime-console.mjs', 'wasmtime-process-host.mjs'];

export async function hashWasmtimeFile(file) {
  const hash = createHash('sha256');
  for await (const bytes of createReadStream(file)) hash.update(bytes);
  return hash.digest('hex');
}

// These caches contain native machine code. Only the local build pipeline may
// produce them. This integrity check is not authentication of external caches.
export async function readWasmtimeArtifact(directory, platform = process.platform, arch = process.arch) {
  const manifest = JSON.parse(readFileSync(join(directory, 'wasmtime.json'), 'utf8'));
  if (manifest.schema !== 2 || manifest.backend !== 'wasmtime-49.0.0'
      || manifest.platform !== platform || manifest.arch !== arch
      || !/^\d+\.\d+\.\d+$/.test(manifest.leanVersion))
    throw new Error('This Wasmtime application does not match the current native platform');
  if (manifest.cpuTarget !== wasmtimeCpuTarget || manifest.cpuFeatures !== 'baseline')
    throw new Error('This Wasmtime application lacks the supported baseline CPU target');
  const required = ['program.cwasm', 'host/instance.so', 'host/native-api.node', 'host/libwasmtime.so'];
  if (!manifest.files || Object.keys(manifest.files).length !== required.length)
    throw new Error('Invalid Wasmtime application file manifest');
  for (const name of required) {
    const item = manifest.files[name];
    if (!item || !Number.isSafeInteger(item.bytes) || item.bytes < 1 || !/^[0-9a-f]{64}$/.test(item.sha256))
      throw new Error('Invalid Wasmtime application file identity');
    const path = join(directory, name), info = lstatSync(path);
    if (!info.isFile() || info.isSymbolicLink() || info.size !== item.bytes || await hashWasmtimeFile(path) !== item.sha256)
      throw new Error(`Wasmtime application file changed: ${name}`);
  }
  return manifest;
}
