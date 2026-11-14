// The model differential of the CLI's JavaScript (docs/TESTING_STRATEGY.md §4,
// docs/proposals/IRREDUCIBLE.md M4): every function that has a Lean model in
// verification/cli/Lasm/Cli/Model/ is run on generated inputs both as the
// shipped JavaScript and as the model (test/models/CliModels.lean, one
// `lean --run` process), and any difference fails, naming the model, the
// seed and the input. What Lasm.Cli.Theorems proves of a model then holds of
// the JavaScript on everything this draws; what stays unproved is that the
// two agree elsewhere.
//
//   node test/models/cli-differential.mjs [--runs N] [--seed S] [--lean PATH] [--only NAME,…]
//
// provisions the managed Lean 4.35.0 (or uses the `lean` at PATH), compiles
// the model modules into a temporary directory and checks each model `runs`
// times (default 2000; `--only` checks the named ones). Run by the cli-models workflow (docs/CI.md).
import assert from 'node:assert/strict';
import { execFileSync, spawn, spawnSync } from 'node:child_process';
import { closeSync, existsSync, mkdirSync, mkdtempSync, openSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { basename, dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { random } from '../helpers/property.mjs';
import { buildTargets, closest, editDistance, parseLasmArguments, targetHint } from '../../src/cli-arguments.mjs';
import { changedFiles, parseDevArguments } from '../../src/dev.mjs';
import { lakeName, packageName, parseInitArguments, supabaseFunctionNameOf } from '../../src/init.mjs';
import { jsRuntime } from '../../src/js-runtime.mjs';
import { parsePackageArguments } from '../../src/package.mjs';
import { numbers } from '../../src/node-host.mjs';
import { leanAtLeast } from '../../src/lean-io-errors.mjs';
import { demangleName, initializerModule, mangleName } from '../../src/application-diagnosis.mjs';
import { comparePythonStrings, pythonJsonString } from '../../src/link-driver/python.mjs';
import { responseFile } from '../../src/platform.mjs';
import { componentize, extractCore, makeTemplate, placeholderModule, replaceCoreModule, withoutComponentType } from '../../src/wasi/wasi-component.mjs';
import { zip } from '../../src/serverless/zip.mjs';
import { keepExports, lowerAtomics, moduleImports } from '../../src/wasi/lower-atomics.mjs';
import { HandleTable } from '../../src/handle-table.mjs';
import { encodeProcessConfiguration } from '../../src/process-launcher.mjs';
import * as nodeJs from '../../src/node-js.mjs';
import * as edgeJs from '../../src/edge/edge-js.mjs';
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
/** Characters of directory and package names: the classes' edges, a scope,
 * and characters whose lower case is ASCII (the Kelvin sign) or longer (İ). */
const nameAlphabet = ['a', 'Z', '0', '9', '.', '_', '-', ' ', '@', '!', 'λ', '😀', '\u212a', '\u0130', 'é'];

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
const hexFields = ['args', 'output', 'input', 'template', 'directory', 'host'];
const parsedJson = parsed => Object.fromEntries(Object.entries(parsed).map(([k, v]) =>
  [k, k === 'args' ? v.map(hex) : k === 'outputs' ? v.map(o => ({ target: o.target, input: hex(o.input) })) : hexFields.includes(k) ? hex(v) : v]));
const parseOutcome = fn => {
  const result = outcome(fn);
  return result.error !== undefined ? { error: hex(result.error) } : { parsed: parsedJson(result.value) };
};
const delegates = { init: parseInitArguments, dev: parseDevArguments, package: parsePackageArguments };

/** Words of `lasm init`, `lasm dev` and `lasm package`: their options in
 * both forms, their tables' names and near misses, values with line breaks. */
function subcommandLine(r, options, values) {
  const spaced = () => { const o = r.pick(options); return r.next() < 0.5 ? [o, r.pick(values)] : [`${o}=${r.pick(values)}`]; };
  const pool = ['--help', '-h', '--', '-', '--x', 'app', 'my app', 'λ', 'Main.lean', 'a.lean', 'b.lean', '', 'dist', 'x\ny'];
  return r.array(r.int(0, 6), () => r.next() < 0.5 ? spaced() : [r.pick(pool)]).flat();
}
const initValues = ['plain', 'express', 'hono', 'fastify', 'std-http', 'web', 'fetch', 'fullstack', 'constructor', '__proto__', 'lambda',
  'lambda-zip', 'vercel', 'vercel-edge', 'netlify', 'netlify-edge', 'workers', 'wasi', 'wasi-http', 'spin', 'fastly', 'supabase-edge',
  'deno-deploy', 'azure', 'gcf', '', '-x', '--x', 'a\nb', 'hon'];
const devValues = ['node', 'bun', 'deno', 'browser', 'workers', 'node,browser', 'node=Server.lean,browser=Client.lean', 'browser=a.lean',
  'node,bun', 'node=', 'node=a', 'x', '', '--x', '-x', '80', '65535', '65536', '00080', '123456', 'a\nb', '127.0.0.1', 'out', 'deno=b.lean=c'];
const packageValues = ['lambda', 'lambda-edge', 'vercel', 'netlify', 'azure', 'gcf', 'browser', 'constructor', '', '--x', '-x', 'out', 'a\nb'];


/** WebAssembly instructions as the lowering reads them: every immediate
 * form of skipInstruction, atomics of every sub-opcode (and unknown ones),
 * and instructions it refuses. */
function instruction(r) {
  const memargOf = () => { const align = r.pick([0, 1, 2, 3, 0x40 | 2]); return [...leb(align), ...(align & 0x40 ? leb(r.int(0, 2)) : []), ...leb(r.pick([0, 1, 8, 200, 70000, 2 ** 32 + 5]), r.next() < 0.1 ? 1 : 0)]; };
  const block = () => r.pick([[0x40], [0x7f], [0x7b], [0x70], [0x6f], [0x63, 0x70], [0x64, 0x05], [0x05], [0x80, 0x01]]);
  const heap = () => r.pick([[0x70], [0x6f], [0x40], [0x05], [0x80, 0x01]]);
  if (r.next() < 0.02) return [0xfe, ...leb(r.pick([4, 0x0f, 0x4f, 0x60, 200]), r.next() < 0.2 ? 1 : 0), ...memargOf()];
  if (r.next() < 0.02) return [r.pick([0xfd, 0xfb, 0x27, 0xc5, 0xd7, 0xff]), 0];
  return r.pick([
    () => [r.pick([0x00, 0x01, 0x05, 0x0b, 0x0f, 0x1a, 0x1b, 0x45, 0x6a, 0x7c, 0xa7, 0xc4, 0xd1, 0xd3, 0xd4, 0x19, 0x0a])],
    () => [r.pick([0x02, 0x03, 0x04, 0x06]), ...block()],
    () => [r.pick([0x07, 0x08, 0x09, 0x0c, 0x0d, 0x10, 0x12, 0x14, 0x15, 0x18, 0xd2, 0xd5, 0xd6, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26]), ...leb(r.int(0, 300))],
    () => [0x0e, ...leb(2), ...leb(0), ...leb(1), ...leb(0)],
    () => [r.pick([0x11, 0x13]), ...leb(r.int(0, 3)), ...leb(0)],
    () => [0x1c, ...leb(1), r.pick([0x7f, 0x63])].concat(r.next() < 0.5 ? [] : [0x70]),
    () => [0x1f, ...block(), ...leb(2), 0, ...leb(1), ...leb(0), 2, ...leb(0)],
    () => [r.pick([0x3f, 0x40]), 0],
    () => [r.pick([0x41, 0x42]), ...leb(r.int(0, 100000), r.next() < 0.1 ? 2 : 0)],
    () => [0x43, ...randomBytes(r, 0).concat([1, 2, 3, 4])],
    () => [0x44, 1, 2, 3, 4, 5, 6, 7, 8],
    () => [0xd0, ...heap()],
    () => [0xfc, ...leb(r.int(0, 19)), ...leb(0), ...leb(0)],
    () => [r.int(0x28, 0x3e), ...memargOf()],
    () => [0xfe, ...leb(r.int(0x10, 0x4e)), ...memargOf()],
    () => [0xfe, ...leb(r.int(0x10, 0x4e)), ...memargOf()],
    () => [0xfe, ...leb(r.pick([0, 1, 2])), ...memargOf()],
    () => [0xfe, 0x03, r.pick([0, 1])],
  ])();
}
/** A core module for the lowering: types, imports of every kind, functions
 * with locals and instruction streams, a memory (32- or 64-bit), exports and
 * custom sections; sometimes missing sections, mismatched counts, padded
 * sizes, or corrupted bytes. */
function atomicModule(r) {
  const vec = items => [...leb(items.length), ...items.flat()];
  const name = text => vec(utf8(text).map(b => [b]));
  const sections = [];
  const types = r.int(0, 3);
  if (r.next() < 0.95) sections.push([1, [...leb(types + (r.next() < 0.05 ? 1 : 0), r.next() < 0.1 ? 1 : 0), ...Array.from({ length: types }, () => [0x60, 0, 0]).flat()]]);
  if (r.next() < 0.6) sections.push([2, vec(r.array(r.int(0, 4), () => [...name(r.pick(['env', 'wasi', 'λ'])), ...name(r.pick(['f', 'g', 'memory'])),
    ...(r.next() < 0.05 ? [r.pick([5, 9]), 0] : r.pick([[0, 0], [1, 0x70, 0, 1], [2, 0, 1], [2, 4, 1], [2, 5, 1, 2], [3, 0x7f, 0], [4, 0, 0]]))]))]);
  const bodies = r.array(r.int(0, 4), () => {
    const locals = r.pick([[0], [1, 1, 0x7f], [2, 1, 0x7e, 2, 0x63, 0x70], [1, 1, 0x64, 0x80, 0x01]]);
    const code = [...locals, ...r.array(r.int(0, 8), () => instruction(r)).flat(), 0x0b];
    return [...leb(Math.max(0, code.length + (r.next() < 0.03 ? r.int(-3, 3) : 0)), r.next() < 0.1 ? 1 : 0), ...code];
  });
  if (r.next() < 0.95) sections.push([3, [...leb(bodies.length + (r.next() < 0.03 ? 1 : 0)), ...bodies.map(() => r.int(0, Math.max(types - 1, 0)))]]);
  if (r.next() < 0.8) sections.push([5, r.next() < 0.1 ? [0] : [1, r.pick([0, 1, 4, 5]), 1, ...(r.next() < 0.3 ? [2] : [])]]);
  if (r.next() < 0.5) sections.push([7, vec(r.array(r.int(0, 3), () => [...name(r.pick(['run', 'keep', 'memory', '_start', 'λ'])), r.int(0, 2), ...leb(r.int(0, 3))]))]);
  if (r.next() < 0.95) sections.push([10, [...leb(bodies.length), ...bodies.flat()]]);
  if (r.next() < 0.3) sections.splice(r.int(0, sections.length), 0, [0, [...name('name'), ...randomBytes(r, 5)]]);
  let bytes = [...coreHeader, ...sections.flatMap(([id, body]) => [id, ...leb(body.length, r.next() < 0.1 ? 1 : 0), ...body])];
  const roll = r.next();
  if (roll < 0.05 && bytes.length) bytes[r.int(0, bytes.length - 1)] = r.int(0, 255);
  else if (roll < 0.1) bytes = bytes.slice(0, r.int(0, bytes.length));
  return bytes;
}

/** Launcher options: texts with the characters that matter to the format
 * and to `setenv` (`=` in names, empty names, repeated names). */
const launchText = r => r.string(['a', 'Z', ' ', '=', 'λ', '/', '\n', '日', '😀'], 0, 6);
function launchOptions(r) {
  const env = r.array(r.int(0, 4), () => [r.pick(['A', 'B', 'A=B', '', 'PATH', launchText(r)]), launchText(r)]);
  return {
    command: r.next() < 0.05 ? 'a\0b' : launchText(r) || 'c', args: r.array(r.int(0, 4), () => r.next() < 0.03 ? '\0' : launchText(r)),
    env: Object.fromEntries(env), directory: r.next() < 0.5 ? launchText(r) : undefined, requestedCwd: r.next() < 0.5 ? launchText(r) : undefined,
    stdioFlags: [r.int(-2, 9), r.int(0, 2 ** 31), r.int(0, 3)], ...(r.next() < 0.5 ? { directoryFd: r.int(0, 5) } : {}),
    inheritProcessCwd: r.next() < 0.5, setsid: r.next() < 0.5,
    ...(r.next() < 0.2 ? { envBytes: env.map(([k, v]) => [Buffer.from(k).toString('base64'), Buffer.from([...Buffer.from(v), r.int(1, 255)]).toString('base64')]) } : {}),
  };
}
/** A configuration for the launcher: an encoding, often corrupted. */
function launcherConfig(r) {
  let bytes;
  try { bytes = [...encodeProcessConfiguration(launchOptions(r))]; } catch { bytes = [...Buffer.from('LASMEX01'), ...randomBytes(r, 30)]; }
  const roll = r.next(), at = () => r.int(0, bytes.length - 1);
  if (roll < 0.1) bytes = bytes.slice(0, r.int(0, bytes.length));
  else if (roll < 0.15) bytes.push(r.int(0, 255));
  else if (roll < 0.25) bytes[at()] = r.pick([0, 1, 7, 8, 0xff, r.int(0, 255)]);
  else if (roll < 0.3) bytes[8] = r.int(8, 255);
  else if (roll < 0.33) bytes[r.int(0, 7)] ^= 1;
  return bytes;
}
/** Lasm.JS interop events (library/c/lasm_js_framing.h): kinds, 64-bit
 * words and 32-bit functions at their edges, short payloads. */
const word64 = r => r.pick([() => 0n, () => 2n ** 64n - 1n, () => BigInt(r.int(0, 2 ** 31)), () => BigInt(r.int(0, 2 ** 31)) * 2n ** 32n + BigInt(r.int(0, 2 ** 31))])();
const fnOf = r => r.pick([() => 0, () => 0xffffffff, () => r.int(0, 2 ** 31), () => r.int(0, 9)])();
const jsEvent = r => r.pick([
  () => ({ kind: 1, promise: word64(r), failed: r.next() < 0.5, bytes: Uint8Array.from(randomBytes(r, 10)) }),
  () => ({ kind: 2, call: word64(r), fn: fnOf(r), bytes: Uint8Array.from(randomBytes(r, 10)) }),
  () => ({ kind: 3, fn: fnOf(r) })])();
const eventJson = e => e.kind === 1 ? ['completion', String(e.promise), e.failed, hexOf(e.bytes)]
  : e.kind === 2 ? ['call', String(e.call), e.fn, hexOf(e.bytes)] : ['release', e.fn];
/** A queue: a few events, sometimes more than one batch holds. */
const eventQueue = r => r.next() < 0.03 ? Array.from({ length: r.int(1020, 1030) }, () => ({ kind: 3, fn: r.int(0, 9) })) : r.array(r.int(0, 6), () => jsEvent(r));
/** A batch: what the host writes, often broken (a byte changed, cut short,
 * bytes added, a size near 2³², or random bytes). */
function eventBatch(r) {
  let bytes = [...nodeJs.encodeEvents(r.array(r.int(0, 4), () => jsEvent(r)))];
  const roll = r.next();
  if (roll < 0.15 && bytes.length) bytes[r.int(0, bytes.length - 1)] = r.int(0, 255);
  else if (roll < 0.3) bytes = bytes.slice(0, r.int(0, bytes.length));
  else if (roll < 0.4) bytes.push(...randomBytes(r, 6));
  else if (roll < 0.5) {
    const head = r.pick([[1, ...Array(8).fill(r.int(0, 255)), r.int(0, 1)], [2, ...Array(12).fill(r.int(0, 255))]]);
    bytes.push(...head, ...[...Buffer.from(Uint32Array.of(2 ** 32 - r.int(1, 20)).buffer)], ...randomBytes(r, 6));
  } else if (roll < 0.55) bytes = randomBytes(r, 24);
  return bytes;
}
/** A request as the glue frames it, often broken. */
function requestBytes(r) {
  const ids = r.array(r.int(0, 4), () => fnOf(r));
  let bytes = [...Buffer.from(Uint32Array.of(ids.length, ...ids).buffer), ...randomBytes(r, 10)];
  const roll = r.next();
  if (roll < 0.15) bytes = bytes.slice(0, r.int(0, bytes.length));
  else if (roll < 0.3) bytes.splice(0, 4, ...Buffer.from(Uint32Array.of(r.pick([r.int(0, 8), 2 ** 32 - 1, 2 ** 30])).buffer));
  else if (roll < 0.35) bytes = randomBytes(r, 12);
  return bytes;
}
const settled = fn => { try { return fn(); } catch (error) { return { error: error.message }; } };
const splitOf = split => bytes => settled(() => { const [released, payload] = split(Uint8Array.from(bytes)); return { released, payload: hexOf(payload) }; });
const intoOf = into => bytes => settled(() => { const [promise, input] = into(bytes); return { promise: String(promise), input: hexOf(input) }; });
/** library/c/lasm_js_framing.h, compiled with test/models/js-framing-harness.c
 * as is and with a 32-bit size_t (wasm32's), and run on one input. */
const framingHarness = {};
function runFraming(width, args, input) {
  if (!framingHarness.dir) framingHarness.dir = mkdtempSync(join(tmpdir(), 'lasm-framing-harness-'));
  const path = join(framingHarness.dir, `framing-${width}`);
  if (!framingHarness[width]) {
    execFileSync(process.env.CC || 'cc', ['-O1', '-w', ...(width === 32 ? ['-DLASM_JS_SIZE32'] : []), '-o', path,
      fileURLToPath(new URL('./js-framing-harness.c', import.meta.url))], { stdio: ['ignore', 'inherit', 'inherit'] });
    framingHarness[width] = path;
  }
  const run = spawnSync(path, args, { input: Uint8Array.from(input), timeout: 10_000, maxBuffer: 1 << 20 });
  if (run.status !== 0) throw new Error(`the framing harness (${width}-bit, ${args.join(" ")}) exited ${run.status ?? run.signal ?? run.error} on ${hexOf(input)}`);
  return run.stdout.toString();
}
const readEventsC = width => bytes => {
  const out = { events: [], fatal: null };
  for (const line of runFraming(width, ['events'], bytes).split('\n').filter(Boolean)) {
    const [kind, a, b, data = ''] = line.split(' ');
    if (kind === 'fatal') { out.fatal = line.slice(6); break; }
    out.events.push(kind === 'completion' ? [kind, a, Number(b) !== 0, data] : kind === 'call' ? [kind, a, Number(b), data] : [kind, Number(a)]);
  }
  return out;
};

/** native/process-launcher.c, compiled with its effects reported
 * (test/models/process-launcher-harness.c), and run on a configuration:
 * `null` where it refuses it (exit status 125), else what it would use. */
let harness;
function runLauncher(bytes) {
  if (!harness) {
    const dir = mkdtempSync(join(tmpdir(), 'lasm-launcher-harness-'));
    harness = { dir, path: join(dir, 'launcher') };
    execFileSync(process.env.CC || 'cc', ['-O1', '-w', '-o', harness.path, fileURLToPath(new URL('./process-launcher-harness.c', import.meta.url))],
      { stdio: ['ignore', 'inherit', 'inherit'] });
  }
  const file = join(harness.dir, 'config');
  writeFileSync(file, Uint8Array.from(bytes));
  const fd = openSync(file, 'r');
  try {
    const run = spawnSync(harness.path, [], { stdio: ['ignore', 'pipe', 'pipe', fd], env: { KEPT: 'cleared' }, timeout: 10_000 });
    if (run.status === 125) return null;
    if (run.status !== 0) throw new Error(`the launcher harness exited ${run.status ?? run.signal}: ${run.stderr}`);
    const out = { stdio: [], argv: [], environ: [] };
    for (const line of run.stdout.toString().split('\n').filter(Boolean)) {
      const [kind, value = ''] = line.split(' ');
      if (kind === 'stdio') out.stdio.push(Number(value)); else out[kind === 'arg' ? 'argv' : 'environ'].push(value);
    }
    return out;
  } finally { closeSync(fd); }
}

/** Each model: the JavaScript module and function it mirrors, the Lean
 * module, a generator, the JavaScript's answer and the request's input,
 * both in the runner's encoding. Each module's entry in
 * verification/models.json names its model and this differential. */
export 
/** Lean names as components: numbers, and strings that read as numbers or
 * escapes once mangled, start or end with `_`, are empty, or hold
 * characters of every escape class (never `.`, so the dotted name is the
 * same name). */
const nameChars = ['a', 'B', 'x', 'u', 'U', 'f', '0', '7', '_', '-', '!', 'é', 'λ', '\uffff', '😀', '2d', '41', '03b1', '\n'];
const nameComponents = r => r.array(r.int(1, 4), () => r.next() < 0.15 ? r.int(0, r.pick([9, 30, 1e6]))
  : (s => /^(?:0|[1-9][0-9]*)$/.test(s) ? s + 'z' : s)(r.string(nameChars, 0, 6)));
const dotted = parts => parts.map(String).join('.');
/** Text for demangling: mangled names, mangled names changed, and soups of
 * underscores, digits, escape letters and hex digits. */
const mangledText = r => {
  const roll = r.next();
  if (roll < 0.4) return mangleName(dotted(nameComponents(r)));
  if (roll < 0.6) { const m = [...mangleName(dotted(nameComponents(r)))]; const i = r.int(0, m.length); m.splice(i, r.int(0, 2), ...r.string(['_', '0', 'x', 'a'], 0, 2)); return m.join(''); }
  return r.string(['_', '_', '_', '0', '0', '1', '9', 'x', 'u', 'U', 'a', 'f', 'Z', 'g', 'é'], 0, 16);
};

const models = [
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
    name: 'parseInitArguments', source: 'src/init.mjs', lean: 'Lasm.Cli.Model.Init',
    generate: r => r.next() < 0.5 ? subcommandLine(r, ['--template', '-t', '--deploy', '--deploy'], initValues)
      // A well-formed line: one directory, a template and deploy targets (repeats and conflicts included).
      : [[r.pick(['app', 'my app'])], ...(r.next() < 0.8 ? [[r.pick(['--template', '-t']), r.pick(initValues.slice(0, 9))]] : []),
        ...r.array(r.int(0, 3), () => ['--deploy', r.pick(initValues.slice(9, 24))])].sort(() => r.next() - 0.5).flat(),
    input: tokens => tokens.map(hex),
    js: tokens => parseOutcome(() => parseInitArguments(tokens)),
  },
  {
    name: 'parseDevArguments', source: 'src/dev.mjs', lean: 'Lasm.Cli.Model.Dev',
    generate: r => [...subcommandLine(r, ['--target', '--target', '--port', '--host', '--output'], devValues),
      ...(r.next() < 0.3 ? [r.pick(['--release', '--dev', '--no-run', '--verbose', '--no-watch'])] : [])].sort(() => r.next() - 0.5),
    input: tokens => ({ tokens: tokens.map(hex), runtime: jsRuntime }),
    js: tokens => parseOutcome(() => parseDevArguments(tokens)),
  },
  {
    name: 'parsePackageArguments', source: 'src/package.mjs', lean: 'Lasm.Cli.Model.Package',
    generate: r => [...subcommandLine(r, ['--target', '--target', '--output'], packageValues), ...(r.next() < 0.3 ? ['--allow-dev'] : [])],
    input: tokens => tokens.map(hex),
    js: tokens => parseOutcome(() => parsePackageArguments(tokens)),
  },
  {
    name: 'lowerAtomics', source: 'src/wasi/lower-atomics.mjs', lean: 'Lasm.Cli.Model.LowerAtomics',
    generate: atomicModule,
    input: bytes => hexOf(bytes),
    js: bytes => attempt(() => lowerAtomics(Uint8Array.from(bytes))),
  },
  {
    name: 'moduleImports', source: 'src/wasi/lower-atomics.mjs', lean: 'Lasm.Cli.Model.LowerAtomics',
    generate: atomicModule,
    input: bytes => hexOf(bytes),
    js: bytes => { try { return { imports: moduleImports(Uint8Array.from(bytes)).map(({ module, name, kind }) => [hex(module), hex(name), kind]) }; } catch (error) { return { error: error.message }; } },
  },
  {
    name: 'keepExports', source: 'src/wasi/lower-atomics.mjs', lean: 'Lasm.Cli.Model.LowerAtomics',
    generate: r => ({ bytes: atomicModule(r), keep: r.array(r.int(0, 2), () => r.pick(['run', 'keep', 'memory', '_start', 'λ'])) }),
    input: ({ bytes, keep }) => ({ bytes: hexOf(bytes), keep: keep.map(hex) }),
    js: ({ bytes, keep }) => attempt(() => keepExports(Uint8Array.from(bytes), name => keep.includes(name))),
  },
  {
    name: 'leanAtLeast', source: 'src/lean-io-errors.mjs', lean: 'Lasm.Cli.Model.LeanIOErrors',
    generate: r => {
      const part = () => r.pick([() => String(r.int(0, 40)), () => '0' + r.int(0, 9), () => '', () => 'rc' + r.int(0, 3), () => String(r.int(0, 999999999999999))])();
      const version = () => r.array(r.int(1, 4), part).join('.') + (r.next() < 0.3 ? '-rc' + r.int(0, 3) : '') + (r.next() < 0.05 ? '-x-y' : '');
      const v = version();
      return [v, r.next() < 0.2 ? v : version()];
    },
    input: ([v, m]) => ({ version: hex(v), minimum: hex(m) }),
    js: ([v, m]) => leanAtLeast(v, m),
  },
  {
    name: 'mangleName', source: 'src/application-diagnosis.mjs', lean: 'Lasm.Cli.Model.Mangle',
    generate: r => r.next() < 0.1 ? r.string(['a', '.', '_', '0', 'x'], 0, 8) : dotted(nameComponents(r)),
    input: name => hex(name),
    js: name => hex(mangleName(name)),
  },
  {
    name: 'demangleName', source: 'src/application-diagnosis.mjs', lean: 'Lasm.Cli.Model.Mangle',
    generate: mangledText,
    input: text => hex(text),
    js: text => hex(demangleName(text)),
  },
  {
    name: 'initializerModule', source: 'src/application-diagnosis.mjs', lean: 'Lasm.Cli.Model.Mangle',
    generate: r => r.pick(['initialize_', 'runtime_initialize_', 'meta_initialize_', 'runtime_', 'initialize', '', 'xinitialize_'])
      + (r.next() < 0.1 ? r.pick(['\n', 'a\rb', '\u2028']) : '') + mangledText(r),
    input: symbol => hex(symbol),
    js: symbol => (m => m === undefined ? null : hex(m))(initializerModule(symbol)),
  },
  {
    name: 'leanNameMangle', source: 'src/application-diagnosis.mjs', lean: 'Lasm.Cli.Model.Mangle',
    generate: nameComponents,
    input: parts => parts.map(p => typeof p === 'number' ? p : [hex(p)]),
    js: parts => hex(mangleName(dotted(parts))),
  },
  {
    name: 'leanNameDemangle', source: 'src/application-diagnosis.mjs', lean: 'Lasm.Cli.Model.Mangle',
    generate: mangledText,
    input: text => hex(text),
    js: text => hex(demangleName(text)),
  },
  {
    name: 'packageName', source: 'src/init.mjs', lean: 'Lasm.Cli.Model.Init',
    generate: r => '/tmp/' + r.string([...nameAlphabet, '/', '..'], 0, 70),
    input: dir => hex(basename(resolve(dir)).toLowerCase()),
    js: dir => hex(packageName(dir)),
  },
  {
    name: 'lakeName', source: 'src/init.mjs', lean: 'Lasm.Cli.Model.Init',
    generate: r => r.string(nameAlphabet, 0, 70),
    input: s => hex(s),
    js: s => hex(lakeName(s)),
  },
  {
    name: 'supabaseFunctionNameOf', source: 'src/init.mjs', lean: 'Lasm.Cli.Model.Init',
    generate: r => (r.next() < 0.3 ? '@' + r.string(nameAlphabet, 0, 4) + (r.next() < 0.8 ? '/' : '') : '') + r.string(nameAlphabet, 0, 70),
    input: s => hex(String(s).toLowerCase()),
    js: s => hex(supabaseFunctionNameOf(s)),
  },
  {
    name: 'pythonJsonString', source: 'src/link-driver/python.mjs', lean: 'Lasm.Cli.Model.Python',
    generate: r => r.string([...tricky, '\b', '\f', '\x7f', '\x1f', '~', '\u0085', '\ud7ff', '\ue000', '\uffff', '𝄞', '\u{10ffff}'], 0, 12),
    input: s => hex(s),
    js: s => hex(pythonJsonString(s)),
  },
  {
    name: 'comparePythonStrings', source: 'src/link-driver/python.mjs', lean: 'Lasm.Cli.Model.Python',
    generate: r => { const a = r.string(['a', 'b', 'é', '\uffff', '😀', '𝄞'], 0, 5); return [a, r.next() < 0.2 ? a : r.next() < 0.3 ? a + r.string(['a', '😀'], 1, 2) : r.string(['a', 'b', 'é', '\uffff', '😀', '𝄞'], 0, 5)]; },
    input: ([a, b]) => ({ a: hex(a), b: hex(b) }),
    js: ([a, b]) => String(comparePythonStrings(a, b)),
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
    name: 'encodeProcessConfiguration', source: 'src/process-launcher.mjs', lean: 'Lasm.Cli.Model.ProcessLauncher',
    generate: launchOptions,
    input: o => ({ command: hex(o.command), args: o.args.map(hex), env: Object.entries(o.env).map(([k, v]) => [hex(k), hex(v)]),
      directory: o.directory === undefined ? null : hex(o.directory), requestedCwd: o.requestedCwd === undefined ? null : hex(o.requestedCwd),
      stdioFlags: o.stdioFlags.map(String), directoryFd: o.directoryFd ?? null, inheritProcessCwd: o.inheritProcessCwd, setsid: o.setsid,
      envBytes: o.envBytes ? o.envBytes.map(pair => pair.map(v => Buffer.from(v, 'base64').toString('hex'))) : null }),
    js: o => attempt(() => encodeProcessConfiguration(o)),
  },
  {
    name: 'launcherRead', source: 'native/process-launcher.c', lean: 'Lasm.Cli.Model.ProcessLauncher',
    generate: launcherConfig,
    input: bytes => hexOf(bytes),
    js: runLauncher,
  },
  {
    name: 'encodeEvents', source: 'src/node-js.mjs', lean: 'Lasm.Cli.Model.JsFraming',
    generate: eventQueue,
    input: queue => queue.map(eventJson),
    js: queue => { const q = [...queue]; const batch = nodeJs.encodeEvents(q); return { batch: hexOf(batch), left: q.length }; },
  },
  {
    name: 'encodeEvents', source: 'src/edge/edge-js.mjs', lean: 'Lasm.Cli.Model.JsFraming',
    generate: eventQueue,
    input: queue => queue.map(eventJson),
    js: queue => { const q = [...queue]; const batch = edgeJs.encodeEvents(q); return { batch: hexOf(batch), left: q.length }; },
  },
  {
    name: 'readEvents', source: 'library/c/lasm_js_framing.h', lean: 'Lasm.Cli.Model.JsFraming',
    generate: eventBatch,
    input: bytes => hexOf(bytes),
    js: readEventsC(64),
  },
  {
    name: 'readEvents', source: 'library/c/lasm_js_framing.h (32-bit size_t)', lean: 'Lasm.Cli.Model.JsFraming',
    generate: eventBatch,
    input: bytes => hexOf(bytes),
    js: readEventsC(32),
  },
  {
    name: 'frameRequest', source: 'library/c/lasm_js_framing.h', lean: 'Lasm.Cli.Model.JsFraming',
    generate: r => ({ released: r.array(r.int(0, 5), () => fnOf(r)), payload: randomBytes(r, 12) }),
    input: ({ released, payload }) => ({ released, payload: hexOf(payload) }),
    js: ({ released, payload }) => runFraming(64, ['request', ...released.map(String)], payload).trim(),
  },
  {
    name: 'splitRequest', source: 'src/node-js.mjs', lean: 'Lasm.Cli.Model.JsFraming',
    generate: requestBytes,
    input: bytes => hexOf(bytes),
    js: splitOf(nodeJs.splitRequest),
  },
  {
    name: 'splitRequest', source: 'src/edge/edge-js.mjs', lean: 'Lasm.Cli.Model.JsFraming',
    generate: requestBytes,
    input: bytes => hexOf(bytes),
    js: splitOf(edgeJs.splitRequest),
  },
  {
    name: 'frameInto', source: 'library/c/lasm_js_framing.h', lean: 'Lasm.Cli.Model.JsFraming',
    generate: r => ({ promise: word64(r), input: randomBytes(r, 12) }),
    input: ({ promise, input }) => ({ promise: String(promise), input: hexOf(input) }),
    js: ({ promise, input }) => runFraming(64, ['into', String(promise)], input).trim(),
  },
  {
    name: 'intoPrefix', source: 'src/node-js.mjs', lean: 'Lasm.Cli.Model.JsFraming',
    generate: r => randomBytes(r, 14),
    input: bytes => hexOf(bytes),
    js: bytes => intoOf(nodeJs.intoPrefix)(Buffer.from(bytes)),
  },
  {
    name: 'intoPrefix', source: 'src/edge/edge-js.mjs', lean: 'Lasm.Cli.Model.JsFraming',
    generate: r => randomBytes(r, 14),
    input: bytes => hexOf(bytes),
    js: bytes => intoOf(edgeJs.intoPrefix)(Uint8Array.from(bytes)),
  },
  {
    name: 'HandleTable', source: 'src/handle-table.mjs', lean: 'Lasm.Cli.Model.HandleTable',
    generate: r => {
      const first = r.next() < 0.1 ? r.pick([0, -1, 0x7fffffff, 0x80000000]) : r.next() < 0.1 ? 0x7ffffffd : r.int(1, 6);
      const last = r.next() < 0.1 ? r.pick([0x7fffffff, 0x80000000, first - 1]) : first + r.int(0, 4);
      const key = () => Math.max(0, r.pick([first, first + 1, last, 0, 1, 2, r.int(0, 12)]));
      return { first, last, entries: r.array(r.int(0, 3), () => [key(), r.pick(['x', 'y'])]),
        ops: r.array(r.int(0, 14), () => r.pick([() => ['allocate', r.pick(['a', 'b', 'c'])], () => ['allocate', 'd'], () => ['delete', key()], () => ['set', key(), 'e']])()) };
    },
    input: ({ first, last, entries, ops }) => ({ first: String(first), last: String(last), entries, ops }),
    js: ({ first, last, entries, ops }) => {
      let table;
      try { table = new HandleTable({ first, last, entries }); } catch (error) { return { error: error.message }; }
      const results = ops.map(([op, a, b]) => {
        if (op === 'allocate') { try { return table.allocate(a); } catch (error) { assert.equal(error.code, 'EMFILE'); return 'full'; } }
        if (op === 'delete') table.delete(a); else table.set(a, b);
        return null;
      });
      return { results, entries: [...table.entries()] };
    },
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
    stop: () => { child.stdin.end(); rmSync(out, { recursive: true, force: true }); if (parseDirectory) rmSync(parseDirectory, { recursive: true, force: true }); parseDirectory = undefined;
      if (harness) rmSync(harness.dir, { recursive: true, force: true }); harness = undefined;
      if (framingHarness.dir) rmSync(framingHarness.dir, { recursive: true, force: true }); for (const key of Object.keys(framingHarness)) delete framingHarness[key]; },
  };
}

/** Checks every model `runs` times; resolves with the count per model. */
export async function differential({ runs = 2000, seed = 1, lean, only } = {}) {
  const session = await start(lean);
  const counts = {};
  try {
    for (const model of models.filter(m => !only || only.includes(m.name))) {
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
      counts[models.filter(m => m.name === model.name).length > 1 ? `${model.name} (${model.source})` : model.name] = runs;
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
  const counts = await differential({ runs, seed, lean: option('--lean'), only: option('--only')?.split(',') });
  for (const [name, n] of Object.entries(counts)) console.log(`ok   ${name}: JavaScript and Lean model agree on ${n} inputs`);
  console.log(`${Object.keys(counts).length} models, seed ${seed} (${((Date.now() - started) / 1000).toFixed(1)} s)`);
}
