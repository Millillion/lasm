// Add opt-in Bun GC configuration to a frozen compiler without changing Wasm.
import { existsSync, mkdirSync, readdirSync, readFileSync, writeFileSync, symlinkSync, createReadStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { root } from '../../src/toolchain.mjs';
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
const before = '      super(filename, process.versions.bun ? options : {';
const addition = '      if (process.versions.bun && process.env.LASM_BUN_SMOL === "1") options = { ...options, smol: true };\n';
function transform(text) {
  if (text.includes('LASM_BUN_SMOL') || text.split(before).length !== 2)
    throw new Error('Bun worker-constructor integration changed');
  return text.replace(before, addition + before);
}
const prelude = transform(readFileSync(join(source, 'runtime-support/emscripten-pre.js'), 'utf8'));
if (prelude !== readFileSync(join(root, 'scripts/full-lean/emscripten-pre.js'), 'utf8'))
  throw new Error('Unrelated prelude changes require a separate derivation');
const glue = transform(readFileSync(join(source, 'bin/lean.js'), 'utf8'));
mkdirSync(output);
for (const name of readdirSync(source)) {
  if (['bin', 'runtime-support', 'snapshot.json', 'build-provenance.json'].includes(name)) continue;
  symlinkSync(join(source, name), join(output, name));
}
for (const directory of ['bin', 'runtime-support']) {
  mkdirSync(join(output, directory));
  for (const name of readdirSync(join(source, directory))) {
    if (directory === 'bin' && ['lean.js', 'lean.cjs'].includes(name))
      writeFileSync(join(output, directory, name), glue);
    else if (directory === 'runtime-support' && name === 'emscripten-pre.js')
      writeFileSync(join(output, directory, name), prelude);
    else symlinkSync(join(source, directory, name), join(output, directory, name));
  }
}
const provenance = JSON.parse(readFileSync(join(source, 'build-provenance.json')));
const derivation = {
  scope: 'Opt-in Bun smol GC in main and workers. No Lean, Wasm, host, worker-count, or memory-cap change.',
  activation: 'prepare-toolchain --engine bun --bun-smol supplies --smol and LASM_BUN_SMOL=1',
  wasmSha256: await hash(join(source, 'bin/lean.wasm')),
  references: ['https://bun.com/docs/runtime', 'https://bun.com/docs/runtime/workers'],
};
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ ...provenance, bunGc: derivation }, null, 2) + '\n');
Object.assign(metadata, { derivedFrom: source, createdAt: new Date().toISOString(), derivation });
for (const name of ['bin/lean.js', 'bin/lean.cjs', 'runtime-support/emscripten-pre.js', 'build-provenance.json'])
  metadata.files[name] = await hash(join(output, name));
writeFileSync(join(output, 'snapshot.json'), JSON.stringify(metadata, null, 2) + '\n');
console.log(JSON.stringify({ output, ...derivation }));
