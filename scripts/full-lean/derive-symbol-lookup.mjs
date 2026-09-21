// Freeze a private loader optimization without changing Wasm or Lean inputs.
import { existsSync, mkdirSync, readdirSync, readFileSync, writeFileSync, symlinkSync, createReadStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from './resource-guard.mjs';
import { optimizeSymbolLookup } from './symbol-lookup.mjs';

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
mkdirSync(join(output, 'bin'), { recursive: true });
for (const name of readdirSync(source)) {
  if (['bin', 'snapshot.json', 'build-provenance.json'].includes(name)) continue;
  symlinkSync(join(source, name), join(output, name));
}
for (const name of readdirSync(join(source, 'bin'))) {
  if (['lean.js', 'lean.cjs'].includes(name)) continue;
  symlinkSync(join(source, 'bin', name), join(output, 'bin', name));
}
const glue = optimizeSymbolLookup(readFileSync(join(source, 'bin/lean.js'), 'utf8'));
for (const name of ['lean.js', 'lean.cjs']) writeFileSync(join(output, 'bin', name), glue);
const provenance = JSON.parse(readFileSync(join(source, 'build-provenance.json')));
const derivation = { scope: 'Avoid enumerating dynamic exports except when registering a new shared-table function. Unchanged Wasm, Lean and host inputs.',
  wasmSha256: await hash(join(source, 'bin/lean.wasm')),
  implementationSha256: await hash(new URL('./symbol-lookup.mjs', import.meta.url)) };
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ ...provenance, symbolLookup: derivation }, null, 2) + '\n');
Object.assign(metadata, { derivedFrom: source, createdAt: new Date().toISOString(), derivation });
for (const name of ['bin/lean.js', 'bin/lean.cjs', 'build-provenance.json'])
  metadata.files[name] = await hash(join(output, name));
writeFileSync(join(output, 'snapshot.json'), JSON.stringify(metadata, null, 2) + '\n');
console.log(JSON.stringify({ output, ...derivation }));
