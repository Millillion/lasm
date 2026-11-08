// The Lean model of the function platforms' HTTP mapping
// (library/Lasm/Serverless/Proofs/Model.lean) as a process the serverless-http
// fuzz target asks about each input (test/fuzz/support/ServerlessModel.lean).
//
//   node test/fuzz/support/serverless-model.mjs [--out DIR]
//
// provisions the managed Lean 4.35.0, compiles the model's module into DIR
// (default .work/fuzz/serverless-model) and writes DIR/model.json, which
// says how to start it. The target uses the model when that file exists
// (LASM_SERVERLESS_MODEL names another directory; LASM_SERVERLESS_MODEL=required
// with the default one makes a missing model a failure, as in CI).
//
// Why `lean --run` and not a Lasm build: the model is a few hundred lines of
// pure Lean, read by one process for the whole campaign, so interpreting it
// costs a fraction of a millisecond per input and needs nothing but Lean. A
// Lasm (Wasm) build of it would put the whole Lean runtime and a build step
// in front of a JavaScript fuzz target, and a golden table could check only
// the inputs it was written for, not the ones a campaign finds.
import { execFileSync, spawn } from 'node:child_process';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../../', import.meta.url));
export const defaultDirectory = join(root, '.work/fuzz/serverless-model');
const module = ['Lasm', 'Serverless', 'Proofs', 'Model'];
const runner = fileURLToPath(new URL('./ServerlessModel.lean', import.meta.url));

/** Compiles the model into `out` and writes out/model.json. */
export async function prepare(out = defaultDirectory) {
  const { provisionLean } = await import('../../../src/managed-lean.mjs');
  const work = mkdtempSync(join(tmpdir(), 'lasm-serverless-model-'));
  try {
    writeFileSync(join(work, 'Main.lean'), 'import Lean\ndef main : IO Unit := pure ()\n');
    writeFileSync(join(work, 'lean-toolchain'), 'leanprover/lean4:v4.35.0\n');
    const lean = await provisionLean(join(work, 'Main.lean'), { modules: 'extended',
      progress: ({ stage }) => stage && console.error(`[lean] ${stage}`) });
    const olean = join(out, ...module) + '.olean';
    mkdirSync(join(out, ...module.slice(0, -1)), { recursive: true });
    const env = environment();
    execFileSync(lean.lean, ['-R', join(root, 'library'), '-o', olean, join(root, 'library', ...module) + '.lean'],
      { env, stdio: ['ignore', 'inherit', 'inherit'], timeout: 600_000 });
    const config = { lean: lean.lean, leanPath: [out, join(lean.prefix, 'lib', 'lean')], runner };
    writeFileSync(join(out, 'model.json'), JSON.stringify(config, null, 2) + '\n');
    return config;
  } finally {
    rmSync(work, { recursive: true, force: true });
  }
}

function environment(extra = {}) {
  const env = { ...process.env, LEAN_NUM_THREADS: '1', ...extra };
  for (const key of Object.keys(env)) if (/^(?:LEAN_(?!NUM_THREADS|PATH)|LAKE_|ELAN_)/.test(key)) delete env[key];
  return env;
}

/** The model's directory to use, or undefined (none prepared and none required). */
export function modelDirectory() {
  const named = process.env.LASM_SERVERLESS_MODEL;
  const dir = named && named !== 'required' ? resolve(named) : defaultDirectory;
  if (existsSync(join(dir, 'model.json'))) return dir;
  if (named) throw new Error(`No Lean model in ${dir} (node test/fuzz/support/serverless-model.mjs prepares it)`);
  return undefined;
}

/** Starts the model; `ask(case)` resolves with its answer to one case. */
export function start(dir) {
  const config = JSON.parse(readFileSync(join(dir, 'model.json'), 'utf8'));
  const child = spawn(config.lean, ['--run', config.runner], { stdio: ['pipe', 'pipe', 'inherit'],
    env: environment({ LEAN_PATH: config.leanPath.join(process.platform === 'win32' ? ';' : ':') }) });
  const waiting = [];
  let buffer = '', exited = null;
  child.stdout.setEncoding('utf8');
  child.stdout.on('data', chunk => {
    buffer += chunk;
    for (let i; (i = buffer.indexOf('\n')) >= 0;) {
      const line = buffer.slice(0, i);
      buffer = buffer.slice(i + 1);
      waiting.shift()?.resolve(JSON.parse(line));
    }
  });
  child.on('exit', (code, signal) => {
    exited = new Error(`the Lean model exited (${code ?? signal})`);
    for (const w of waiting.splice(0)) w.reject(exited);
  });
  return {
    ask(value) {
      if (exited) return Promise.reject(exited);
      return new Promise((resolve, reject) => {
        waiting.push({ resolve, reject });
        child.stdin.write(JSON.stringify(value) + '\n');
      });
    },
    stop() { child.kill(); },
  };
}

if (process.argv[1] && resolve(process.argv[1]) === fileURLToPath(import.meta.url)) {
  const i = process.argv.indexOf('--out');
  const out = resolve(i > 0 ? process.argv[i + 1] : defaultDirectory);
  await prepare(out);
  console.log(`ok   the Lean model of src/serverless/ in ${out}`);
}
