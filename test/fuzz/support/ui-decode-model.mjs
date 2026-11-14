// Lean's reference decoder of the Lasm.UI patch stream
// (library/Lasm/UI/Proofs/Decode.lean) as a process the ui-decode fuzz target
// asks about each input (test/fuzz/support/UiDecodeModel.lean).
//
//   node test/fuzz/support/ui-decode-model.mjs [--out DIR]
//
// provisions the managed Lean 4.35.0 with Lasm's library, compiles the
// decoder (a proofs-only module) into DIR (default .work/fuzz/ui-decode-model)
// beside the library's modules, and writes DIR/model.json. The target uses
// the model when that file exists (LASM_UI_DECODE_MODEL names another
// directory; LASM_UI_DECODE_MODEL=required with the default one makes a
// missing model a failure, as in CI). It runs as the serverless model does
// (serverless-model.mjs: `lean --run`, one process per campaign).
import { execFileSync } from 'node:child_process';
import { cpSync, existsSync, mkdirSync, mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../../', import.meta.url));
export const defaultDirectory = join(root, '.work/fuzz/ui-decode-model');
const module = ['Lasm', 'UI', 'Proofs', 'Decode'];
const runner = fileURLToPath(new URL('./UiDecodeModel.lean', import.meta.url));

/** Compiles the decoder into `out` and writes out/model.json. */
export async function prepare(out = defaultDirectory) {
  const { provisionLean } = await import('../../../src/managed-lean.mjs');
  const work = mkdtempSync(join(tmpdir(), 'lasm-ui-decode-model-'));
  try {
    writeFileSync(join(work, 'Main.lean'), 'import Lean\ndef main : IO Unit := pure ()\n');
    writeFileSync(join(work, 'lean-toolchain'), 'leanprover/lean4:v4.36.0-rc2\n');
    const lean = await provisionLean(join(work, 'Main.lean'), { modules: 'extended',
      progress: ({ stage }) => stage && console.error(`[lean] ${stage}`) });
    // Lean takes a module's package (Lasm) from the first search path that
    // has it, so the library's compiled modules go beside the decoder.
    rmSync(out, { recursive: true, force: true });
    cpSync(join(lean.prefix, 'lib', 'lean', 'Lasm'), join(out, 'Lasm'), { recursive: true });
    mkdirSync(join(out, ...module.slice(0, -1)), { recursive: true });
    const leanPath = [out, join(lean.prefix, 'lib', 'lean')];
    const env = { ...process.env, LEAN_NUM_THREADS: '1', LEAN_PATH: leanPath.join(process.platform === 'win32' ? ';' : ':') };
    for (const key of Object.keys(env)) if (/^(?:LEAN_(?!NUM_THREADS|PATH)|LAKE_|ELAN_)/.test(key)) delete env[key];
    execFileSync(lean.lean, ['-R', join(root, 'library'), '-o', join(out, ...module) + '.olean', join(root, 'library', ...module) + '.lean'],
      { env, stdio: ['ignore', 'inherit', 'inherit'], timeout: 600_000 });
    const config = { lean: lean.lean, leanPath, runner };
    writeFileSync(join(out, 'model.json'), JSON.stringify(config, null, 2) + '\n');
    return config;
  } finally {
    rmSync(work, { recursive: true, force: true });
  }
}

/** The model's directory to use, or undefined (none prepared and none required). */
export function modelDirectory() {
  const named = process.env.LASM_UI_DECODE_MODEL;
  const dir = named && named !== 'required' ? resolve(named) : defaultDirectory;
  if (existsSync(join(dir, 'model.json'))) return dir;
  if (named) throw new Error(`No Lean model in ${dir} (node test/fuzz/support/ui-decode-model.mjs prepares it)`);
  return undefined;
}

if (process.argv[1] && resolve(process.argv[1]) === fileURLToPath(import.meta.url)) {
  const i = process.argv.indexOf('--out');
  const out = resolve(i > 0 ? process.argv[i + 1] : defaultDirectory);
  await prepare(out);
  console.log(`ok   Lean's reference decoder of Lasm.UI patches in ${out}`);
}
