// Freeze current private host modules beside an unchanged full Wasm compiler.
import { existsSync, mkdirSync, readdirSync, readFileSync, writeFileSync, symlinkSync, copyFileSync, createReadStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from './resource-guard.mjs';
import { root } from '../../src/toolchain.mjs';

await ensureResourceGuard();
const [sourceArg, outputArg] = process.argv.slice(2);
if (!sourceArg || !outputArg) throw new Error('Supply FROZEN_SOURCE and NEW_OUTPUT');
const source = resolve(sourceArg), output = resolve(outputArg);
if (existsSync(output)) throw new Error('Use a new output directory');
const metadata = JSON.parse(readFileSync(join(source, 'snapshot.json')));
async function hash(path) {
  const digest = createHash('sha256');
  for await (const bytes of createReadStream(path)) digest.update(bytes);
  return digest.digest('hex');
}
for (const [name, expected] of Object.entries(metadata.files))
  if (await hash(join(source, name)) !== expected) throw new Error(`Frozen input drift: ${name}`);
// A changed ABI or embedded dispatcher requires a different derivation/build.
for (const name of ['host-pre.js', 'host-library.js'])
  if (await hash(join(source, 'runtime-support', name)) !== await hash(join(root, 'scripts/full-lean', name)))
    throw new Error(`Host integration changed: ${name}; rebuild or derive it explicitly`);
const hostFiles = ['node-host.mjs', 'working-directory.mjs', 'handle-table.mjs', 'node-network.mjs', 'native-tcp.mjs', 'node-process.mjs', 'process-exec.mjs',
  'node-udp.mjs', 'node-system.mjs', 'node-signal.mjs', 'thread-id.cjs', 'native-files.mjs',
  'native-file-worker.mjs', 'native-file-worker-pool.mjs', 'native-file-worker-deno.mjs', 'native-worker-cwd.cjs', 'native-dns.mjs', 'native-interfaces.mjs'];
mkdirSync(output); mkdirSync(join(output, 'host'));
for (const name of readdirSync(source)) {
  if (['host', 'snapshot.json', 'build-provenance.json'].includes(name)) continue;
  symlinkSync(join(source, name), join(output, name));
}
for (const name of readdirSync(join(source, 'host')))
  if (!hostFiles.includes(name)) symlinkSync(join(source, 'host', name), join(output, 'host', name));
const changed = [];
for (const name of hostFiles) {
  copyFileSync(join(root, 'src', name), join(output, 'host', name));
  const relative = 'host/' + name, digest = await hash(join(output, relative));
  if (metadata.files[relative] !== digest) changed.push(relative);
  metadata.files[relative] = digest;
}
const provenance = JSON.parse(readFileSync(join(source, 'build-provenance.json')));
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ ...provenance,
  hostModules: { scope: 'Current private host files with unchanged embedded dispatcher, Wasm, and Lean inputs.', changed },
}, null, 2) + '\n');
metadata.derivedFrom = source;
metadata.createdAt = new Date().toISOString();
metadata.derivation = { scope: 'Private host modules only; unchanged Lean sources, Wasm, and embedded/link-time dispatch.',
  changed, parentDerivation: metadata.derivation, wasmSha256: await hash(join(source, 'bin/lean.wasm')),
  sharedFrozenInputs: 'Unchanged inputs are symlinked to the immutable source snapshot.' };
metadata.files['build-provenance.json'] = await hash(join(output, 'build-provenance.json'));
writeFileSync(join(output, 'snapshot.json'), JSON.stringify(metadata, null, 2) + '\n');
console.log(JSON.stringify({ output, ...metadata.derivation }));
