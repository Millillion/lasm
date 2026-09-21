// Preserve the JS engine's native worker before Emscripten installs its shim.
import { existsSync, mkdirSync, readdirSync, readFileSync, writeFileSync, symlinkSync, copyFileSync, createReadStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from './resource-guard.mjs';
import { preserveWebWorker } from './preserve-web-worker.mjs';
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
mkdirSync(output);
for (const name of readdirSync(source)) {
  if (['snapshot.json', 'build-provenance.json'].includes(name)) continue;
  if (['bin', 'runtime-support'].includes(name)) {
    mkdirSync(join(output, name));
    for (const child of readdirSync(join(source, name))) {
      if (name === 'bin' && ['lean.js', 'lean.cjs'].includes(child)
        || name === 'runtime-support' && ['cc-driver.mjs', 'preserve-web-worker.mjs'].includes(child)) continue;
      symlinkSync(join(source, name, child), join(output, name, child));
    }
  } else symlinkSync(join(source, name), join(output, name));
}
copyFileSync(join(source, 'bin/lean.js'), join(output, 'bin/lean.js'));
preserveWebWorker(join(output, 'bin/lean.js'));
copyFileSync(join(output, 'bin/lean.js'), join(output, 'bin/lean.cjs'));
const changed = ['bin/lean.js', 'bin/lean.cjs', 'runtime-support/cc-driver.mjs', 'runtime-support/preserve-web-worker.mjs'];
for (const name of ['cc-driver.mjs', 'preserve-web-worker.mjs'])
  copyFileSync(join(root, 'scripts/full-lean', name), join(output, 'runtime-support', name));
for (const path of changed) metadata.files[path] = await hash(join(output, path));
const derivation = { scope: 'Preserve the original Deno Web Worker before the Emscripten pthread shim. Apply the same capture to future AOT output. Wasm and Lean inputs are unchanged.',
  changed, parentDerivation: metadata.derivation, wasmSha256: await hash(join(source, 'bin/lean.wasm')) };
const provenance = JSON.parse(readFileSync(join(source, 'build-provenance.json')));
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ ...provenance, workerBootstrap: derivation }, null, 2) + '\n');
metadata.files['build-provenance.json'] = await hash(join(output, 'build-provenance.json'));
Object.assign(metadata, { derivedFrom: source, createdAt: new Date().toISOString(), derivation });
writeFileSync(join(output, 'snapshot.json'), JSON.stringify(metadata, null, 2) + '\n');
console.log(JSON.stringify({ output, changed, wasmSha256: derivation.wasmSha256 }));
