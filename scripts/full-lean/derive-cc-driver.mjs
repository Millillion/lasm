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
// Older snapshots did not inventory these linked archives. Record their
// existing bytes explicitly before the new adapter can select them by content.
const runtimeArchives = {};
for (const name of ['lib/lean/libgmp.a', 'libuv/src/libuv/libuv.a'])
  if (existsSync(join(source, name))) runtimeArchives[name] = await hash(join(source, name));
for (const name of ['response-args.mjs', 'preserve-web-worker.mjs'])
  if (await hash(join(source, 'runtime-support', name)) !== await hash(join(root, 'scripts/full-lean', name)))
    throw new Error(`Adapter dependency changed: ${name}; derive that change explicitly`);
const driver = 'runtime-support/cc-driver.mjs';
const replaced = ['cc-driver.mjs', 'application-link-mode.mjs', 'standalone-link-optimization.mjs'];
const replacements = {};
for (const name of replaced) replacements['runtime-support/' + name] = await hash(join(root, 'scripts/full-lean', name));
const nextHash = replacements[driver];
if (Object.entries(replacements).every(([name, digest]) => metadata.files[name] === digest))
  throw new Error('The compiler adapter is unchanged');
mkdirSync(join(output, 'runtime-support'), { recursive: true });
for (const name of readdirSync(source)) {
  if (['runtime-support', 'snapshot.json', 'build-provenance.json'].includes(name)) continue;
  symlinkSync(join(source, name), join(output, name));
}
for (const name of readdirSync(join(source, 'runtime-support'))) {
  if (!replaced.includes(name)) symlinkSync(join(source, 'runtime-support', name), join(output, 'runtime-support', name));
}
const changed = [];
for (const name of replaced) {
  copyFileSync(join(root, 'scripts/full-lean', name), join(output, 'runtime-support', name));
  const path = 'runtime-support/' + name, digest = await hash(join(output, path));
  if (metadata.files[path] !== digest) changed.push(path);
}
const derivation = { scope: 'External C compiler adapter only; unchanged Lean compiler, Wasm, SDK, and host runtime.',
  changed, beforeSha256: metadata.files[driver], afterSha256: nextHash,
  recordedRuntimeArchives: runtimeArchives,
  wasmSha256: await hash(join(source, 'bin/lean.wasm')),
  sharedFrozenInputs: 'Unchanged inputs are symlinked to the immutable source snapshot.' };
const provenance = JSON.parse(readFileSync(join(source, 'build-provenance.json')));
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ ...provenance, compilerAdapter: derivation }, null, 2) + '\n');
metadata.derivedFrom = source;
metadata.createdAt = new Date().toISOString();
metadata.derivation = { ...derivation, parentDerivation: metadata.derivation };
metadata.files[driver] = nextHash;
Object.assign(metadata.files, runtimeArchives);
for (const name of replaced) metadata.files['runtime-support/' + name] = await hash(join(output, 'runtime-support', name));
metadata.files['build-provenance.json'] = await hash(join(output, 'build-provenance.json'));
for (const [name, expected] of Object.entries(JSON.parse(readFileSync(join(source, 'snapshot.json'))).files))
  if (await hash(join(source, name)) !== expected) throw new Error(`Parent input changed during derivation: ${name}`);
for (const [name, expected] of Object.entries(runtimeArchives))
  if (await hash(join(source, name)) !== expected) throw new Error(`Runtime archive changed during derivation: ${name}`);
for (const [name, expected] of Object.entries(metadata.files))
  if (await hash(join(output, name)) !== expected) throw new Error(`Derived input mismatch: ${name}`);
writeFileSync(join(output, 'snapshot.json'), JSON.stringify(metadata, null, 2) + '\n');
console.log(JSON.stringify({ output, ...derivation }));
