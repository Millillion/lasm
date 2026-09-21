import { readFileSync, writeFileSync } from 'node:fs';

const prelude = "// Lasm: preserve Deno's native Web Worker before Emscripten installs its pthread constructor.\n" +
  "if (process.versions.deno) globalThis[Symbol.for('lasm.denoWebWorker')] ??= globalThis.Worker;\n";

export function preserveWebWorker(path) {
  const source = readFileSync(path, 'utf8');
  if (!/globalThis\.Worker\s*=/.test(source))
    throw new Error('Emscripten worker constructor assignment changed');
  if (source.startsWith(prelude)) return;
  writeFileSync(path, prelude + source);
}
