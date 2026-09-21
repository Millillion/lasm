// Replace only the private host prelude in a verified frozen compiler.
// Wasm, upstream Lean sources, tests, and compiler options remain unchanged.
import { existsSync, mkdirSync, readdirSync, readFileSync, writeFileSync, symlinkSync, copyFileSync, createReadStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from './resource-guard.mjs';

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
for (const directory of ['bin', 'runtime-support']) mkdirSync(join(output, directory), { recursive: true });
for (const name of readdirSync(source)) {
  if (['bin', 'runtime-support', 'snapshot.json', 'build-provenance.json'].includes(name)) continue;
  symlinkSync(join(source, name), join(output, name));
}
for (const directory of ['bin', 'runtime-support']) for (const name of readdirSync(join(source, directory))) {
  if (directory === 'bin' && ['lean.js', 'lean.cjs'].includes(name)
      || directory === 'runtime-support' && name === 'host-pre.js') continue;
  symlinkSync(join(source, directory, name), join(output, directory, name));
}
const preludePath = new URL('./host-pre.js', import.meta.url), prelude = readFileSync(preludePath, 'utf8');
for (const name of ['lean.js', 'lean.cjs']) {
  const glue = readFileSync(join(source, 'bin', name), 'utf8');
  const pattern = /(^\/\/ include: ([^\n]*\/(?:lasm-)?host-pre\.js)\n)[\s\S]*?(^\/\/ end include: \2$)/gm;
  if ([...glue.matchAll(pattern)].length !== 1) throw new Error('Expected one unambiguous emitted host prelude');
  writeFileSync(join(output, 'bin', name), glue.replace(pattern, (_, start, path, end) => start + prelude + '\n' + end));
}
copyFileSync(preludePath, join(output, 'runtime-support/host-pre.js'));
const provenance = JSON.parse(readFileSync(join(source, 'build-provenance.json')));
const derivation = { scope: 'Private host standard-stream shutdown. Unchanged Wasm and Lean inputs; generated compiler and future linked programs use the same updated prelude.',
  wasmSha256: await hash(join(source, 'bin/lean.wasm')), preludeSha256: await hash(preludePath),
  parentDerivation: metadata.derivation };
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ ...provenance, hostPrelude: derivation }, null, 2) + '\n');
Object.assign(metadata, { derivedFrom: source, createdAt: new Date().toISOString(), derivation });
for (const name of ['bin/lean.js', 'bin/lean.cjs', 'runtime-support/host-pre.js', 'build-provenance.json'])
  metadata.files[name] = await hash(join(output, name));
writeFileSync(join(output, 'snapshot.json'), JSON.stringify(metadata, null, 2) + '\n');
console.log(JSON.stringify({ output, ...derivation }));
