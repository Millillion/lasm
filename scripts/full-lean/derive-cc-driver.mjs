// Replace only the external C compiler adapter in a new immutable snapshot.
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
async function hash(path) {
  const digest = createHash('sha256');
  for await (const bytes of createReadStream(path)) digest.update(bytes);
  return digest.digest('hex');
}
const metadata = JSON.parse(readFileSync(join(source, 'snapshot.json')));
for (const [name, expected] of Object.entries(metadata.files))
  if (await hash(join(source, name)) !== expected) throw new Error(`Frozen input changed: ${name}`);
for (const name of ['response-args.mjs', 'preserve-web-worker.mjs'])
  if (await hash(join(source, 'runtime-support', name)) !== await hash(join(root, 'scripts/full-lean', name)))
    throw new Error(`Adapter dependency changed: ${name}; derive that change explicitly`);
const driver = 'runtime-support/cc-driver.mjs';
const nextHash = await hash(join(root, 'scripts/full-lean/cc-driver.mjs'));
if (nextHash === metadata.files[driver]) throw new Error('The compiler adapter is unchanged');
mkdirSync(join(output, 'runtime-support'), { recursive: true });
for (const name of readdirSync(source)) {
  if (['runtime-support', 'snapshot.json', 'build-provenance.json'].includes(name)) continue;
  symlinkSync(join(source, name), join(output, name));
}
for (const name of readdirSync(join(source, 'runtime-support'))) {
  if (name === 'cc-driver.mjs') copyFileSync(join(root, 'scripts/full-lean', name), join(output, 'runtime-support', name));
  else symlinkSync(join(source, 'runtime-support', name), join(output, 'runtime-support', name));
}
const derivation = { scope: 'External C compiler adapter only; unchanged Lean compiler, Wasm, SDK, and host runtime.',
  changed: [driver], beforeSha256: metadata.files[driver], afterSha256: nextHash,
  wasmSha256: await hash(join(source, 'bin/lean.wasm')),
  sharedFrozenInputs: 'Unchanged inputs are symlinked to the immutable source snapshot.' };
const provenance = JSON.parse(readFileSync(join(source, 'build-provenance.json')));
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ ...provenance, compilerAdapter: derivation }, null, 2) + '\n');
metadata.derivedFrom = source;
metadata.createdAt = new Date().toISOString();
metadata.derivation = { ...derivation, parentDerivation: metadata.derivation };
metadata.files[driver] = nextHash;
metadata.files['build-provenance.json'] = await hash(join(output, 'build-provenance.json'));
writeFileSync(join(output, 'snapshot.json'), JSON.stringify(metadata, null, 2) + '\n');
console.log(JSON.stringify({ output, ...derivation }));
