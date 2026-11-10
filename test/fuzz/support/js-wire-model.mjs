// Lean's half of the Lasm.JS value codec (Wire in library/Lasm/JS/Core.lean)
// as a process the lasm-js-wire fuzz target asks about each input
// (test/fuzz/support/JsWireModel.lean).
//
//   node test/fuzz/support/js-wire-model.mjs [--out DIR]
//
// provisions the managed Lean 4.35.0 with Lasm's library (Lasm.JS.Core is
// part of it, so nothing more is compiled) and writes DIR/model.json (default
// .work/fuzz/js-wire-model), which says how to start it. The target uses the
// model when that file exists (LASM_JS_WIRE_MODEL names another directory;
// LASM_JS_WIRE_MODEL=required with the default one makes a missing model a
// failure, as in CI). It runs the same way as the serverless model
// (serverless-model.mjs: `lean --run`, one process per campaign).
import { existsSync, mkdirSync, mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../../', import.meta.url));
export const defaultDirectory = join(root, '.work/fuzz/js-wire-model');
const runner = fileURLToPath(new URL('./JsWireModel.lean', import.meta.url));

/** Provisions Lean and writes out/model.json. */
export async function prepare(out = defaultDirectory) {
  const { provisionLean } = await import('../../../src/managed-lean.mjs');
  const work = mkdtempSync(join(tmpdir(), 'lasm-js-wire-model-'));
  try {
    writeFileSync(join(work, 'Main.lean'), 'import Lean\ndef main : IO Unit := pure ()\n');
    writeFileSync(join(work, 'lean-toolchain'), 'leanprover/lean4:v4.35.0\n');
    const lean = await provisionLean(join(work, 'Main.lean'), { modules: 'extended',
      progress: ({ stage }) => stage && console.error(`[lean] ${stage}`) });
    mkdirSync(out, { recursive: true });
    const config = { lean: lean.lean, leanPath: [join(lean.prefix, 'lib', 'lean')], runner };
    writeFileSync(join(out, 'model.json'), JSON.stringify(config, null, 2) + '\n');
    return config;
  } finally {
    rmSync(work, { recursive: true, force: true });
  }
}

/** The model's directory to use, or undefined (none prepared and none required). */
export function modelDirectory() {
  const named = process.env.LASM_JS_WIRE_MODEL;
  const dir = named && named !== 'required' ? resolve(named) : defaultDirectory;
  if (existsSync(join(dir, 'model.json'))) return dir;
  if (named) throw new Error(`No Lean model in ${dir} (node test/fuzz/support/js-wire-model.mjs prepares it)`);
  return undefined;
}

if (process.argv[1] && resolve(process.argv[1]) === fileURLToPath(import.meta.url)) {
  const i = process.argv.indexOf('--out');
  const out = resolve(i > 0 ? process.argv[i + 1] : defaultDirectory);
  await prepare(out);
  console.log(`ok   Lean's half of the Lasm.JS value codec in ${out}`);
}
