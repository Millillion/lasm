// Lean's own header parser (`Lean.Elab.parseImports`) as a process the
// project-files fuzz target asks about each Lean text
// (test/fuzz/support/LeanHeaderModel.lean).
//
//   node test/fuzz/support/lean-header-model.mjs [--out DIR]
//
// provisions the managed Lean 4.35.0 and writes DIR/model.json (default
// .work/fuzz/lean-header-model), which says how to start it: the runner needs
// only Lean itself, so there is nothing to compile. The target uses the model
// when that file exists (LASM_LEAN_HEADER_MODEL names another directory;
// LASM_LEAN_HEADER_MODEL=required with the default one makes a missing model
// a failure, as in CI). It runs as the serverless model does
// (serverless-model.mjs: `lean --run`, one process per campaign).
import { spawn } from 'node:child_process';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../../', import.meta.url));
export const defaultDirectory = join(root, '.work/fuzz/lean-header-model');
const runner = fileURLToPath(new URL('./LeanHeaderModel.lean', import.meta.url));

/** Provisions Lean and writes out/model.json. */
export async function prepare(out = defaultDirectory) {
  const { provisionLean } = await import('../../../src/managed-lean.mjs');
  const work = mkdtempSync(join(tmpdir(), 'lasm-lean-header-model-'));
  try {
    writeFileSync(join(work, 'Main.lean'), 'import Lean\ndef main : IO Unit := pure ()\n');
    writeFileSync(join(work, 'lean-toolchain'), 'leanprover/lean4:v4.36.0-rc2\n');
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
  const named = process.env.LASM_LEAN_HEADER_MODEL;
  const dir = named && named !== 'required' ? resolve(named) : defaultDirectory;
  if (existsSync(join(dir, 'model.json'))) return dir;
  if (named) throw new Error(`No Lean header model in ${dir} (node test/fuzz/support/lean-header-model.mjs prepares it)`);
  return undefined;
}

/** Starts the model; `ask({ text })` resolves with Lean's reading of the text. */
export function start(dir) {
  const config = JSON.parse(readFileSync(join(dir, 'model.json'), 'utf8'));
  const env = { ...process.env, LEAN_NUM_THREADS: '1', LEAN_PATH: config.leanPath.join(process.platform === 'win32' ? ';' : ':') };
  for (const key of Object.keys(env)) if (/^(?:LEAN_(?!NUM_THREADS|PATH)|LAKE_|ELAN_)/.test(key)) delete env[key];
  // Lean's parser panics on some headers (`import 1bad`), then reports an
  // error: the panic's backtrace on stderr is noise, not a finding.
  const child = spawn(config.lean, ['--run', config.runner], { stdio: ['pipe', 'pipe', 'ignore'], env });
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
    exited = new Error(`the Lean header model exited (${code ?? signal})`);
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
  console.log(`ok   Lean's header parser in ${out}`);
}
