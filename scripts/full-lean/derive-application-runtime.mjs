// Freeze the adapter and its complete secondary runtime into one campaign input.
import { existsSync, mkdirSync, readdirSync, readFileSync, writeFileSync, symlinkSync, copyFileSync, createReadStream, statSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { fileURLToPath } from 'node:url';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [sourceArg, runtimeArg, outputArg] = process.argv.slice(2);
if (!sourceArg || !runtimeArg || !outputArg) throw new Error('Supply FROZEN_COMPILER FROZEN_APPLICATION_RUNTIME NEW_OUTPUT');
const source = resolve(sourceArg), runtime = resolve(runtimeArg), output = resolve(outputArg);
if (existsSync(output)) throw new Error('Use a fresh output directory');
if (existsSync(join(source, 'application-runtime'))) throw new Error('Start from a compiler without a bundled application runtime');
const metadata = JSON.parse(readFileSync(join(source, 'snapshot.json')));
const runtimeMetadata = JSON.parse(readFileSync(join(runtime, 'snapshot.json')));
if (metadata.leanCommit !== runtimeMetadata.leanCommit) throw new Error('Compiler and application Lean revisions differ');
async function hash(path) {
  const digest = createHash('sha256');
  for await (const bytes of createReadStream(path)) digest.update(bytes);
  return digest.digest('hex');
}
async function verify(base, snapshot) {
  for (const [name, expected] of Object.entries(snapshot.files))
    if (await hash(join(base, name)) !== expected) throw new Error(`Frozen input changed: ${base}/${name}`);
}
await verify(source, metadata); await verify(runtime, runtimeMetadata);
const mode = base => readFileSync(join(base, 'CMakeCache.txt'), 'utf8').match(/^LASM_MEMORY64:STRING=([12])$/m)?.[1];
if (!mode(source) || mode(source) !== mode(runtime)) throw new Error('Compiler and application pointer layouts differ');
const runtimeProvenance = JSON.parse(readFileSync(join(runtime, 'build-provenance.json')));
if (!runtimeProvenance.sharedProgramEntry && !runtimeProvenance.sharedProgramEntryPrototype)
  throw new Error('Application runtime has no recorded C-main dispatcher');
const providedArchives = [];
for (const path of ['lib/lean/libgmp.a', 'libuv/src/libuv/libuv.a']) {
  const sha256 = await hash(join(source, path));
  if (sha256 !== await hash(join(runtime, path))) throw new Error(`Compiler and application archive differs: ${path}`);
  providedArchives.push({ path, sha256, bytes: statSync(join(source, path)).size });
}
mkdirSync(output); mkdirSync(join(output, 'runtime-support'));
for (const name of readdirSync(source)) {
  if (['runtime-support', 'snapshot.json', 'build-provenance.json'].includes(name)) continue;
  symlinkSync(join(source, name), join(output, name));
}
const replaced = ['cc-driver.mjs', 'application-link-mode.mjs', 'standalone-link-optimization.mjs'];
for (const name of readdirSync(join(source, 'runtime-support')))
  if (!replaced.includes(name)) symlinkSync(join(source, 'runtime-support', name), join(output, 'runtime-support', name));
for (const name of replaced) {
  copyFileSync(fileURLToPath(new URL(name, import.meta.url)), join(output, 'runtime-support', name));
  metadata.files['runtime-support/' + name] = await hash(join(output, 'runtime-support', name));
}
symlinkSync(runtime, join(output, 'application-runtime'));
metadata.files['application-runtime/snapshot.json'] = await hash(join(runtime, 'snapshot.json'));
for (const [name, digest] of Object.entries(runtimeMetadata.files)) metadata.files['application-runtime/' + name] = digest;
for (const { path, sha256 } of providedArchives) {
  metadata.files[path] = sha256;
  metadata.files['application-runtime/' + path] = sha256;
}
const derivation = { scope: 'Unchanged compiler Wasm and libraries with a frozen application-link adapter and separately recorded shared C-main runtime.',
  source, applicationRuntime: runtime, providedArchives, compilerWasmSha256: metadata.files['bin/lean.wasm'],
  applicationWasmSha256: runtimeMetadata.files['bin/lean.wasm'],
  implementationSha256: await hash(fileURLToPath(import.meta.url)),
  sharedFrozenInputs: 'Unchanged inputs reference immutable snapshots; generated metadata and adapter files are owned by this output.' };
const provenance = JSON.parse(readFileSync(join(source, 'build-provenance.json')));
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ ...provenance, applicationRuntime: derivation }, null, 2) + '\n');
metadata.files['build-provenance.json'] = await hash(join(output, 'build-provenance.json'));
Object.assign(metadata, { derivedFrom: source, createdAt: new Date().toISOString(), derivation });
await verify(source, JSON.parse(readFileSync(join(source, 'snapshot.json'))));
await verify(runtime, runtimeMetadata);
await verify(output, metadata);
writeFileSync(join(output, 'snapshot.json'), JSON.stringify(metadata, null, 2) + '\n');
console.log(JSON.stringify({ output, ...derivation }));
