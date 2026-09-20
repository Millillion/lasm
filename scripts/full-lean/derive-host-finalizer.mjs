// Isolate the host finalizer fix without recompiling the unchanged Lean Wasm.
// Freeze the changed host files and both embedded/link-time preludes together.
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
const original = readFileSync(join(source, 'bin/lean.js'), 'utf8');
const oldCall = 'host.release(request.handle);';
if (original.split(oldCall).length !== 2) throw new Error('Expected one generated host finalizer call');
const glue = original.replace(oldCall, 'await host.releaseAsync(request.handle);');
const prelude = readFileSync(join(root, 'scripts/full-lean/host-pre.js'), 'utf8');
const oldPrelude = readFileSync(join(source, 'runtime-support/host-pre.js'), 'utf8');
if (oldPrelude.replace(oldCall, 'await host.releaseAsync(request.handle);') !== prelude)
  throw new Error('The current prelude has changes beyond the isolated finalizer fix');
mkdirSync(output);
const changed = ['host/node-host.mjs', 'host/native-files.mjs', 'runtime-support/host-pre.js'];
for (const directory of ['bin', 'host', 'runtime-support']) {
  mkdirSync(join(output, directory));
  for (const name of readdirSync(join(source, directory))) {
    const relative = directory + '/' + name;
    if (directory === 'bin' && ['lean.js', 'lean.cjs'].includes(name)) writeFileSync(join(output, relative), glue);
    else if (changed.includes(relative))
      copyFileSync(join(root, directory === 'host' ? 'src' : 'scripts/full-lean', name), join(output, relative));
    else symlinkSync(join(source, relative), join(output, relative));
  }
}
for (const name of readdirSync(source)) {
  if (['bin', 'host', 'runtime-support', 'snapshot.json', 'build-provenance.json'].includes(name)) continue;
  symlinkSync(join(source, name), join(output, name));
}
const provenance = JSON.parse(readFileSync(join(source, 'build-provenance.json')));
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ ...provenance,
  hostFinalization: 'The calling Lean thread waits for asynchronous fclose while the host event loop remains available.' }, null, 2) + '\n');
metadata.derivedFrom = source;
metadata.createdAt = new Date().toISOString();
metadata.derivation = { scope: 'Host finalizer dispatch and asynchronous C close; unchanged Lean sources and Wasm.',
  parentDerivation: metadata.derivation, wasmSha256: await hash(join(source, 'bin/lean.wasm')),
  sharedFrozenInputs: 'Unchanged inputs are symlinked to the immutable source snapshot.' };
for (const name of ['bin/lean.js', 'bin/lean.cjs', 'build-provenance.json', ...changed])
  metadata.files[name] = await hash(join(output, name));
writeFileSync(join(output, 'snapshot.json'), JSON.stringify(metadata, null, 2) + '\n');
console.log(JSON.stringify({ output, ...metadata.derivation }));
