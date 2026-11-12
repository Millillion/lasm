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
import { existsSync, mkdirSync, mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { random } from '../helpers/property.mjs';
import { buildTargets, closest, editDistance, parseLasmArguments, targetHint } from '../../src/cli-arguments.mjs';
import { changedFiles, parseDevArguments } from '../../src/dev.mjs';
import { parseInitArguments } from '../../src/init.mjs';
import { jsRuntime } from '../../src/js-runtime.mjs';
import { parsePackageArguments } from '../../src/package.mjs';
import { numbers } from '../../src/node-host.mjs';
import { responseFile } from '../../src/platform.mjs';
import { componentize, extractCore, makeTemplate, placeholderModule, replaceCoreModule, withoutComponentType } from '../../src/wasi/wasi-component.mjs';
import { zip } from '../../src/serverless/zip.mjs';
import { deflateRawSync, crc32 } from 'node:zlib';
import { compactInitializerWrappers, initializationSchedule } from '../../src/edge/edge-initializers.mjs';
import { builtinModuleClosure } from '../../src/edge/builtin-modules.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const cliRoot = join(root, 'verification', 'cli');
const runner = fileURLToPath(new URL('./CliModels.lean', import.meta.url));
const hex = text => Buffer.from(text, 'utf8').toString('hex');

/** Text with the characters a property is most likely to break on: escapes,
 * quotes, line ends, NUL, non-ASCII and astral characters. */
const tricky = ['a', 'b', ' ', '\\', '"', "'", '\n', '\r', '\0', '\t', 'λ', '€', '😀', '$', '-', '='];

/** Unsigned LEB128, padded with `extra` continuation bytes (a valid,
 * non-minimal encoding, as LLVM writes in object files). */
const leb = (value, extra = 0) => {
  const out = [];
  do { let b = value & 0x7f; value = Math.floor(value / 128); if (value || extra) b |= 0x80; out.push(b); } while (value);
  for (let i = 0; i < extra; i++) out.push(i === extra - 1 ? 0 : 0x80);
  return out;
};
const utf8 = text => [...Buffer.from(text, 'utf8')];
const hexOf = bytes => Buffer.from(bytes).toString('hex');

/** Sections of a module or component: well-framed (sizes sometimes padded),
 * then sometimes broken (a byte changed, cut short, or random bytes). */
function wasmBytes(r, header, section) {
  const sections = r.array(r.int(0, 5), () => section(r));
  let bytes = [...header, ...sections.flatMap(({ id, body }) => [id, ...leb(body.length, r.next() < 0.2 ? r.int(1, 4) : 0), ...body])];
  const roll = r.next();
  if (roll < 0.1 && bytes.length) bytes[r.int(0, bytes.length - 1)] = r.int(0, 255);
  else if (roll < 0.2) bytes = bytes.slice(0, r.int(0, bytes.length));
  else if (roll < 0.23) bytes = [...header.slice(0, r.int(0, 8)), ...Array.from({ length: r.int(0, 30) }, () => r.int(0, 255))];
  return { bytes, sections };
}
const randomBytes = (r, high) => Array.from({ length: r.int(0, high) }, () => r.int(0, 255));
const coreHeader = [0, 0x61, 0x73, 0x6d, 1, 0, 0, 0];
const componentHeader = [0, 0x61, 0x73, 0x6d, 0x0d, 0, 1, 0];

/** A random initialization plan: initializer names (sometimes invalid), the
 * calls of each in order (acyclic or not, repeats allowed, some to units
 * outside the closure), and the kept ones. */
function plan(r) {
  const names = r.array(r.int(1, 12), (_, i) => r.next() < 0.03 ? r.pick(['initialize_', 'init_x', 'runtime_meta_initialize_a', 'initialize_é'])
    : `${r.pick(['initialize_', 'runtime_initialize_', 'meta_initialize_'])}M${i}_${r.string('abcXYZ019_', 0, 3)}`);
  const acyclic = r.next() < 0.5, calls = {};
  for (const [i, name] of names.entries()) {
    const targets = [...names.filter((_, j) => acyclic ? j > i : true), ...(r.next() < 0.2 ? ['initialize_Outside'] : [])];
    if (targets.length && r.next() < 0.8) calls[name] = r.array(r.int(0, 4), () => r.pick(targets));
  }
  return { schema: 1, closure: [...new Set(names)], keep: names.filter(() => r.next() < 0.5), calls };
}
const callsEntries = calls => Object.entries(calls);

/** A component template: sections, some core modules starting with the
 * placeholder (or a cut of it), sometimes broken (wasmBytes). */
const placeholder = [...placeholderModule()];
const templateOf = r => wasmBytes(r, componentHeader, g => {
  const id = g.pick([0, 1, 1, 1, 6, 7]);
  if (id !== 1) return { id, body: randomBytes(g, 12) };
  const roll = g.next();
  return { id, body: roll < 0.4 ? [...placeholder, ...randomBytes(g, 8)] : roll < 0.5 ? placeholder.slice(0, g.int(0, placeholder.length)) : [...coreHeader, ...randomBytes(g, 10)] };
}).bytes;
const coreOf = r => r.next() < 0.8 ? [...coreHeader, ...randomBytes(r, 12)] : randomBytes(r, 10);
const attempt = fn => { try { return { bytes: hexOf(fn()) }; } catch (error) { return { error: error.message }; } };
/** A component: a template with a core spliced in, or another template. */
const componentOf = (r, template, core = coreOf(r)) => {
  if (r.next() < 0.7) { try { return [...componentize(Uint8Array.from(core), Uint8Array.from(template))]; } catch {} }
  return templateOf(r);
};

/** Every way a builtin module may import another (relativeImport's forms),
 * and lines that import nothing builtin. */
const importForms = [n => `import { x } from './${n}.mjs';`, n => `import * as m from "./${n}.mjs"`, n => `  export { y } from './${n}.mjs';  `,
  n => `export * from "./${n}.mjs";`, n => `import d, { e as f } from './${n}.mjs';`, n => `import g from'./${n}.mjs'`,
  n => `import {\n  a,\n  b,\n} from './${n}.mjs';`, n => `import './${n}.mjs';`, n => `import"./${n}.mjs"`];
const decoys = ["import { z } from 'node:fs';", "// import { x } from './a.mjs';", "const m = await import('./b.mjs');", 'export const v = 1;',
  'export const w = 2', "/* import './c.mjs' */"];

/** A directory of builtin modules with random imports (cycles included),
 * the import relation it encodes, and requested specifiers. */
function builtins(r) {
  const names = [...new Set(r.array(r.int(1, 8), (_, i) => `m${i}${r.pick(['', '-x', 'b'])}`))];
  const imports = names.map(() => r.array(r.int(0, 3), () => r.pick(names)));
  const files = Object.fromEntries(names.map((name, i) => [name + '.mjs',
    [...(r.next() < 0.5 ? [r.pick(decoys)] : []), ...imports[i].map(j => r.pick(importForms)(j)), r.pick(decoys)].join('\n') + '\n']));
  const specifiers = [...r.array(r.int(0, 4), () => 'lasm:' + r.pick(names)), ...r.array(r.int(0, 2), () => r.pick(['hono', 'node:fs', './local.mjs']))];
  return { files, imports: names.map((name, i) => ['lasm:' + name, imports[i].map(j => 'lasm:' + j)]), specifiers: r.next() < 0.5 ? specifiers.reverse() : specifiers };
}

/** Words for the command line: case, astral characters, the Kelvin sign
 * (which Unicode lowercases to k), and the targets and commands they near. */
const letters = ['a', 'b', 'e', 'd', 'K', 'B', 'λ', 'Λ', '😀', '\u212a', '-', '.', '/', ' '];
const word = r => r.next() < 0.5 ? r.string(letters, 0, 7)
  : r.pick([...buildTargets, 'cloudflare', 'CloudFlare', 'wrkers', 'lambda-edg', 'BUILD', 'biuld', 'cach', 'Hello', 'λ', 'wor\u212aer']);

/** A command line: a soup of the parser's words, or a well-formed command
 * with options in any order and form. */
function commandLine(r) {
  const source = () => r.pick(['Main.lean', 'App/Main.lean', 'x y.lean', 'λ.lean', 'b.json', 'Hello', 'biuld', 'Main', '', 'a\nb.lean', word(r)]);
  const value = () => r.pick([...buildTargets, 'none', 'jspi', 'out dir', '', '--rebuild', 'a\nb', word(r)]);
  if (r.next() < 0.4) {
    const pool = ['build', 'run', 'init', 'dev', 'package', 'editor', 'cache', 'repair', 'version', '-v', '--version', '--rebuild', '--verbose',
      '--dev', '--release', '--allow-dev', '--bundler', '--help', '-h', '--', '--target', '--suspend', '--output', '--target=', '--suspend=jspi',
      '--x', '-q', '-'];
    return r.array(r.int(0, 7), () => r.next() < 0.6 ? r.pick(pool) : r.next() < 0.5 ? source() : value());
  }
  const groups = [[source()]];
  if (r.next() < 0.2) groups.push([source()]);
  for (const flag of ['--rebuild', '--verbose', '--dev', '--release', '--allow-dev', '--bundler']) if (r.next() < 0.2) groups.push([flag]);
  for (const flag of ['--target', '--suspend', '--output']) if (r.next() < 0.4) groups.push([flag, value()]);
  const shuffled = groups.sort(() => r.next() - 0.5).map(g => g.length === 2 && r.next() < 0.5 ? [`${g[0]}=${g[1]}`] : g).flat();
  const command = r.pick([['build'], ['build'], ['run'], []]);
  return [...command, ...shuffled, ...(r.next() < 0.2 ? ['--', ...r.array(r.int(0, 3), () => word(r))] : [])];
}

/** `existsSync` reads the working directory: the parser runs in one that
 * holds Hello.lean and λ.lean. */
let parseDirectory;
const inParseDirectory = fn => {
  if (!parseDirectory) {
    parseDirectory = mkdtempSync(join(tmpdir(), 'lasm-cli-arguments-'));
    for (const file of ['Hello.lean', 'λ.lean']) writeFileSync(join(parseDirectory, file), '');
  }
  const cwd = process.cwd();
  process.chdir(parseDirectory);
  try { return fn(); } finally { process.chdir(cwd); }
};
const outcome = fn => {
  try { return { value: fn() }; } catch (error) { return { error: error.message }; }
};
const hexFields = ['args', 'output', 'input'];
const parsedJson = parsed => Object.fromEntries(Object.entries(parsed).map(([k, v]) =>
  [k, k === 'args' ? v.map(hex) : hexFields.includes(k) ? hex(v) : v]));
const delegates = { init: parseInitArguments, dev: parseDevArguments, package: parsePackageArguments };

/** Each model: the JavaScript module and function it mirrors, the Lean
 * module, a generator, the JavaScript's answer and the request's input,
 * both in the runner's encoding. Each module's entry in
 * verification/models.json names its model and this differential. */
export const models = [
  {
    name: 'editDistance', source: 'src/cli-arguments.mjs', lean: 'Lasm.Cli.Model.CliArguments',
    generate: r => [r.string(letters, 0, 9), r.string(letters, 0, 9)],
    input: ([a, b]) => ({ a: hex(a), b: hex(b) }),
    js: ([a, b]) => editDistance(a, b),
  },
  {
    name: 'closest', source: 'src/cli-arguments.mjs', lean: 'Lasm.Cli.Model.CliArguments',
    generate: r => ({ word: word(r), candidates: r.next() < 0.3 ? buildTargets : r.array(r.int(0, 5), () => word(r)) }),
    input: ({ word, candidates }) => ({ word: hex(word), candidates: candidates.map(hex) }),
    js: ({ word, candidates }) => { const c = closest(word, candidates); return c === undefined ? null : hex(c); },
  },
  {
    name: 'targetHint', source: 'src/cli-arguments.mjs', lean: 'Lasm.Cli.Model.CliArguments',
    generate: word,
    input: hex,
    js: value => hex(targetHint(value)),
  },
  {
    name: 'parseLasmArguments', source: 'src/cli-arguments.mjs', lean: 'Lasm.Cli.Model.CliArguments',
    generate: commandLine,
    input: argv => ({ argv: argv.map(hex), existing: inParseDirectory(() => argv.map(t => t + '.lean').filter(existsSync)).map(hex), runtime: jsRuntime }),
    js: argv => {
      const result = inParseDirectory(() => outcome(() => parseLasmArguments(argv)));
      // `lasm init`, `lasm dev` and `lasm package` are their modules' parsers:
      // the model checks only that the JavaScript hands the rest to them.
      if (Object.hasOwn(delegates, argv[0])) {
        assert.deepEqual(result, inParseDirectory(() => outcome(() => delegates[argv[0]](argv.slice(1)))), `parseLasmArguments(${JSON.stringify(argv)}) is not its delegate's`);
        return { error: hex('delegated:' + argv[0]) };
      }
      return result.error !== undefined ? { error: hex(result.error) } : { parsed: parsedJson(result.value) };
    },
  },
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
  {
    name: 'replaceCoreModule', source: 'src/wasi/wasi-component.mjs', lean: 'Lasm.Cli.Model.WasiComponent',
    generate: r => {
      const prefix = [...coreHeader, ...randomBytes(r, 6)];
      const { bytes, sections } = wasmBytes(r, componentHeader, g => {
        const id = g.pick([0, 1, 1, 1, 2, 7]);
        return { id, body: id === 1 && g.next() < 0.6 ? [...prefix.slice(0, g.next() < 0.8 ? prefix.length : g.int(0, prefix.length)), ...randomBytes(g, 20)] : randomBytes(g, 20) };
      });
      const modules = sections.filter(s => s.id === 1);
      const pick = r.next() < 0.3 && modules.length ? r.pick(modules).body.slice(0, r.int(0, 12)) : prefix;
      return { component: bytes, prefix: pick, to: randomBytes(r, r.pick([0, 5, 200])) };
    },
    input: ({ component, prefix, to }) => ({ component: hexOf(component), prefix: hexOf(prefix), to: hexOf(to) }),
    js: ({ component, prefix, to }) => {
      try { return { bytes: hexOf(replaceCoreModule(Uint8Array.from(component), Uint8Array.from(prefix), Uint8Array.from(to))) }; }
      catch (error) { return { error: error.message }; }
    },
  },
  {
    name: 'componentize', source: 'src/wasi/wasi-component.mjs', lean: 'Lasm.Cli.Model.WasiComponent',
    generate: r => ({ core: coreOf(r), template: templateOf(r) }),
    input: ({ core, template }) => ({ core: hexOf(core), template: hexOf(template) }),
    js: ({ core, template }) => attempt(() => componentize(Uint8Array.from(core), Uint8Array.from(template))),
  },
  {
    name: 'makeTemplate', source: 'src/wasi/wasi-component.mjs', lean: 'Lasm.Cli.Model.WasiComponent',
    generate: r => { const template = templateOf(r), core = coreOf(r); return { core, component: r.next() < 0.7 ? componentOf(r, template, core) : template }; },
    input: ({ core, component }) => ({ core: hexOf(core), component: hexOf(component) }),
    js: ({ core, component }) => attempt(() => makeTemplate(Uint8Array.from(component), Uint8Array.from(core))),
  },
  {
    name: 'extractCore', source: 'src/wasi/wasi-component.mjs', lean: 'Lasm.Cli.Model.WasiComponent',
    generate: r => { const template = templateOf(r); return { template, component: componentOf(r, template) }; },
    input: ({ component, template }) => ({ component: hexOf(component), template: hexOf(template) }),
    js: ({ component, template }) => attempt(() => extractCore(Uint8Array.from(component), Uint8Array.from(template))),
  },
  {
    name: 'zip', source: 'src/serverless/zip.mjs', lean: 'Lasm.Cli.Model.Zip',
    generate: r => r.array(r.int(0, 5), () => ({
      name: r.next() < 0.1 ? r.pick(['a', 'a/b', 'dir/', 'a/', '']) : r.array(r.int(1, 3), () => r.string(['a', 'b', 'é', '😀', 'Z', '.'], 1, 3)).join('/'),
      data: r.next() < 0.5 ? Buffer.from(randomBytes(r, 40)) : Buffer.from('ab'.repeat(r.int(0, 60))),
      ...(r.next() < 0.5 ? { mode: r.pick([0o755, 0o644, 0o600, 0o4755, 0]) } : {}),
    })),
    input: entries => {
      const all = [Buffer.alloc(0), ...entries.map(e => e.data)];
      return { entries: entries.map(e => ({ name: hex(e.name), data: e.data.toString('hex'), mode: e.mode ?? null })),
        deflate: all.map(d => [d.toString('hex'), deflateRawSync(d, { level: 9 }).toString('hex')]),
        crc32: all.map(d => [d.toString('hex'), crc32(d)]) };
    },
    js: entries => attempt(() => zip(entries)),
  },
  {
    name: 'withoutComponentType', source: 'src/wasi/wasi-component.mjs', lean: 'Lasm.Cli.Model.WasiComponent',
    generate: r => wasmBytes(r, coreHeader, g => {
      if (g.next() < 0.5) return { id: g.pick([1, 3, 7, 10]), body: randomBytes(g, 20) };
      const name = g.next() < 0.15 ? [...utf8('component-typ'), g.pick([0x65, 0xc3, 0xff, 0x80])] : utf8(g.pick(['component-type', 'component-type:proxy', 'component-typ', 'name', 'xcomponent-type', 'component-typeλ', '']));
      return { id: 0, body: [...leb(name.length, g.next() < 0.2 ? 1 : 0), ...name, ...randomBytes(g, 10)] };
    }).bytes,
    input: bytes => hexOf(bytes),
    js: bytes => hexOf(withoutComponentType(Uint8Array.from(bytes))),
  },
  {
    name: 'initializationSchedule', source: 'src/edge/edge-initializers.mjs', lean: 'Lasm.Cli.Model.EdgeInitializers',
    generate: r => { const p = plan(r); return { p, name: r.next() < 0.9 ? r.pick(p.closure) : 'initialize_Outside' }; },
    input: ({ p, name }) => ({ name, calls: callsEntries(p.calls), keep: p.keep }),
    js: ({ p, name }) => initializationSchedule(name, p.calls, new Set(p.keep)),
  },
  {
    name: 'compactInitializerWrappers', source: 'src/edge/edge-initializers.mjs', lean: 'Lasm.Cli.Model.EdgeInitializers',
    generate: plan,
    input: p => ({ closure: p.closure, keep: p.keep, calls: callsEntries(p.calls) }),
    js: p => {
      try { return { source: compactInitializerWrappers(p) }; } catch (error) { return { error: error.message }; }
    },
  },
  {
    name: 'builtinModuleClosure', source: 'src/edge/builtin-modules.mjs', lean: 'Lasm.Cli.Model.BuiltinModules',
    generate: builtins,
    input: ({ imports, specifiers }) => ({ imports, specifiers }),
    js: ({ files, specifiers }) => {
      const directory = mkdtempSync(join(tmpdir(), 'lasm-builtins-'));
      try {
        for (const [name, text] of Object.entries(files)) writeFileSync(join(directory, name), text);
        return builtinModuleClosure(specifiers, directory);
      } finally {
        rmSync(directory, { recursive: true, force: true });
      }
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
      let answer;
      try { answer = JSON.parse(line); } catch { answer = { fault: `the Lean runner wrote ${JSON.stringify(line.slice(0, 500))}` }; }
      waiting.shift()?.resolve(answer);
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
    stop: () => { child.stdin.end(); rmSync(out, { recursive: true, force: true }); if (parseDirectory) rmSync(parseDirectory, { recursive: true, force: true }); parseDirectory = undefined; },
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
