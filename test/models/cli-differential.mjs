// The model differential of the CLI's JavaScript (docs/TESTING_STRATEGY.md §4,
// docs/proposals/IRREDUCIBLE.md M4): every function that has a Lean model in
// verification/cli/Lasm/Cli/Model/ is run on generated inputs both as the
// shipped JavaScript and as the model (test/models/CliModels.lean, one
// `lean --run` process), and any difference fails, naming the model, the
// seed and the input. What Lasm.Cli.Theorems proves of a model then holds of
// the JavaScript on everything this draws; what stays unproved is that the
// two agree elsewhere.
//
//   node test/models/cli-differential.mjs [--runs N] [--seed S] [--lean PATH]
//
// provisions the managed Lean 4.35.0 (or uses the `lean` at PATH), compiles
// the model modules into a temporary directory and checks each model `runs`
// times (default 2000). Run by the cli-models workflow (docs/CI.md).
import assert from 'node:assert/strict';
import { execFileSync, spawn } from 'node:child_process';
import { mkdirSync, mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { random } from '../helpers/property.mjs';
import { changedFiles } from '../../src/dev.mjs';
import { numbers } from '../../src/node-host.mjs';
import { responseFile } from '../../src/platform.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const cliRoot = join(root, 'verification', 'cli');
const runner = fileURLToPath(new URL('./CliModels.lean', import.meta.url));
const hex = text => Buffer.from(text, 'utf8').toString('hex');

/** Text with the characters a property is most likely to break on: escapes,
 * quotes, line ends, NUL, non-ASCII and astral characters. */
const tricky = ['a', 'b', ' ', '\\', '"', "'", '\n', '\r', '\0', '\t', 'λ', '€', '😀', '$', '-', '='];

/** Each model: the JavaScript module and function it mirrors, the Lean
 * module, a generator, the JavaScript's answer and the request's input,
 * both in the runner's encoding. scripts/models.mjs reads `source` and
 * `lean` to check the inventory (verification/MODELS.md). */
export const models = [
  {
    name: 'numbers', source: 'src/node-host.mjs', lean: 'Lasm.Cli.Model.NodeHost',
    generate: r => r.array(r.int(0, 5), () => r.pick([
      () => BigInt(r.int(-1000, 1000)),
      () => BigInt(r.int(-(2 ** 31), 2 ** 31)) * BigInt(r.int(1, 2 ** 30)) * BigInt(r.int(1, 2 ** 30)),
      () => r.pick([0n, 1n, -1n, 2n ** 63n, -(2n ** 63n), 2n ** 64n - 1n, 2n ** 64n, -(2n ** 64n), 2n ** 70n + 5n]),
      () => r.int(-(2 ** 31), 2 ** 31),
    ])()),
    input: values => values.map(v => String(v)),
    js: values => numbers(...values).toString('hex'),
  },
  {
    name: 'changedFiles', source: 'src/dev.mjs', lean: 'Lasm.Cli.Model.Dev',
    generate: r => {
      const map = () => new Map(r.array(r.int(0, 6), () => [r.pick(['a', 'b', 'c', 'd', 'λ', 'src/A.lean', '😀']), r.pick(['1', '2', '', null])]));
      return { before: map(), after: map() };
    },
    input: ({ before, after }) => {
      const entries = m => [...m].map(([k, v]) => [hex(k), v === null ? null : hex(v)]);
      return { before: entries(before), after: entries(after) };
    },
    js: ({ before, after }) => changedFiles(before, after).map(hex),
  },
  {
    name: 'responseFile', source: 'src/platform.mjs', lean: 'Lasm.Cli.Model.Platform',
    generate: r => r.array(r.int(0, 5), () => r.next() < 0.85
      ? r.string(tricky.filter(c => !'\n\r\0'.includes(c)), 0, 8) : r.string(tricky, 0, 8)),
    input: args => args.map(hex),
    js: args => {
      try { return { text: hex(responseFile(args)) }; } catch (error) { return { error: error.message }; }
    },
  },
];

/** Compiles the model modules and returns a function that asks the runner. */
async function start(leanPath) {
  let lean = leanPath, libPath;
  if (lean) libPath = join(dirname(dirname(lean)), 'lib', 'lean');
  else {
    const { provisionLean } = await import('../../src/managed-lean.mjs');
    const work = mkdtempSync(join(tmpdir(), 'lasm-cli-models-lean-'));
    try {
      writeFileSync(join(work, 'Main.lean'), 'import Lean\ndef main : IO Unit := pure ()\n');
      writeFileSync(join(work, 'lean-toolchain'), 'leanprover/lean4:v4.35.0\n');
      const provisioned = await provisionLean(join(work, 'Main.lean'), { modules: 'extended',
        progress: ({ stage }) => stage && console.error(`[lean] ${stage}`) });
      lean = provisioned.lean;
      libPath = join(provisioned.prefix, 'lib', 'lean');
    } finally {
      rmSync(work, { recursive: true, force: true });
    }
  }
  const out = mkdtempSync(join(tmpdir(), 'lasm-cli-models-'));
  const env = { ...process.env, LEAN_NUM_THREADS: '1', LEAN_PATH: [out, libPath].join(process.platform === 'win32' ? ';' : ':') };
  for (const key of Object.keys(env)) if (/^(?:LEAN_(?!NUM_THREADS|PATH)|LAKE_|ELAN_)/.test(key)) delete env[key];
  for (const module of [...new Set(models.map(m => m.lean))]) {
    const parts = module.split('.');
    mkdirSync(join(out, ...parts.slice(0, -1)), { recursive: true });
    execFileSync(lean, ['-R', cliRoot, '-o', join(out, ...parts) + '.olean', join(cliRoot, ...parts) + '.lean'],
      { env, stdio: ['ignore', 'inherit', 'inherit'], timeout: 600_000 });
  }
  const child = spawn(lean, ['--run', runner], { stdio: ['pipe', 'pipe', 'inherit'], env });
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
    exited = new Error(`the Lean models exited (${code ?? signal})`);
    for (const w of waiting.splice(0)) w.reject(exited);
  });
  return {
    ask: request => exited ? Promise.reject(exited) : new Promise((resolve, reject) => {
      waiting.push({ resolve, reject });
      child.stdin.write(JSON.stringify(request) + '\n');
    }),
    stop: () => { child.stdin.end(); rmSync(out, { recursive: true, force: true }); },
  };
}

/** Checks every model `runs` times; resolves with the count per model. */
export async function differential({ runs = 2000, seed = 1, lean } = {}) {
  const session = await start(lean);
  const counts = {};
  try {
    for (const model of models) {
      const gen = random(seed);
      for (let run = 0; run < runs; run++) {
        const value = model.generate(gen);
        const input = model.input(value);
        const expected = model.js(value);
        const answer = await session.ask({ model: model.name, input });
        if (answer.fault) throw new Error(`${model.name}: the runner refused ${JSON.stringify(input)}: ${answer.fault}`);
        try { assert.deepEqual(answer.ok, expected); }
        catch {
          throw new Error(`${model.name} (${model.source}) differs from its Lean model (${model.lean}) on run ${run}, seed ${seed}:\n`
            + `  input:      ${JSON.stringify(input)}\n  JavaScript: ${JSON.stringify(expected)}\n  Lean:       ${JSON.stringify(answer.ok)}`);
        }
      }
      counts[model.name] = runs;
    }
  } finally {
    session.stop();
  }
  return counts;
}

if (process.argv[1] && resolve(process.argv[1]) === fileURLToPath(import.meta.url)) {
  const option = (name, fallback) => { const i = process.argv.indexOf(name); return i > 0 ? process.argv[i + 1] : fallback; };
  const runs = Number(option('--runs', 2000)), seed = Number(option('--seed', 1));
  const started = Date.now();
  const counts = await differential({ runs, seed, lean: option('--lean') });
  for (const [name, n] of Object.entries(counts)) console.log(`ok   ${name}: JavaScript and Lean model agree on ${n} inputs`);
  console.log(`${Object.keys(counts).length} models, seed ${seed} (${((Date.now() - started) / 1000).toFixed(1)} s)`);
}
