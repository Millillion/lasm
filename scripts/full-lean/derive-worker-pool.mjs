// Derive a resource-adjusted facade without rebuilding or changing Lean/Wasm.
import { existsSync, mkdirSync, readdirSync, readFileSync, writeFileSync, symlinkSync, createReadStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [sourceArg, outputArg, workersArg] = process.argv.slice(2);
const workers = Number(workersArg);
if (!sourceArg || !outputArg || !Number.isInteger(workers) || workers < 1 || workers > 64)
  throw new Error('Usage: derive-worker-pool.mjs FROZEN_SOURCE NEW_OUTPUT WORKERS');
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
const pattern = /var pthreadPoolSize = (\d+);/g;
const matches = [...original.matchAll(pattern)];
if (matches.length !== 1) throw new Error('Generated worker-pool glue drift');
const glue = original.replace(pattern, `var pthreadPoolSize = ${workers};`);
const provenance = JSON.parse(readFileSync(join(source, 'build-provenance.json')));
mkdirSync(join(output, 'bin'), { recursive: true });
for (const name of readdirSync(source)) {
  if (['bin', 'snapshot.json', 'build-provenance.json'].includes(name)) continue;
  symlinkSync(join(source, name), join(output, name));
}
for (const name of readdirSync(join(source, 'bin'))) {
  if (['lean.js', 'lean.cjs'].includes(name)) writeFileSync(join(output, 'bin', name), glue);
  else symlinkSync(join(source, 'bin', name), join(output, 'bin', name));
}
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ ...provenance, pthreadPoolSize: workers }, null, 2) + '\n');
metadata.derivedFrom = source;
metadata.createdAt = new Date().toISOString();
metadata.derivation = { scope: 'Resource-adjusted preinitialized worker count; unchanged Wasm and Lean sources.',
  from: Number(matches[0][1]), to: workers, sharedFrozenInputs: 'Unchanged inputs are symlinked to the immutable source snapshot.',
  wasmSha256: await hash(join(source, 'bin/lean.wasm')) };
for (const name of ['bin/lean.js', 'bin/lean.cjs', 'build-provenance.json']) metadata.files[name] = await hash(join(output, name));
writeFileSync(join(output, 'snapshot.json'), JSON.stringify(metadata, null, 2) + '\n');
console.log(JSON.stringify({ output, ...metadata.derivation }));
