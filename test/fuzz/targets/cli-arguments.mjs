// The CLI's argument parser (src/cli-arguments.mjs and the init, dev and
// package parsers it calls). Input: argv tokens separated by 0x00.
// Oracle: a parse is a plain object whose command, targets, templates and
// deploy targets are ones Lasm has (own keys, never inherited ones such as
// `constructor`), or a plain Error with a readable message (no TypeError,
// no "[native code]" or "[object Object]" in it). Never a stack trace.
// Proposition: Lasm.Cli.Spec.parse_known_or_refused
//   ∀ argv : List String,
//     match parseLasmArguments argv with
//     | .ok p => p.command ∈ commands ∧
//         (p.command = "build" → p.target ∈ buildTargets) ∧
//         ((p.command = "build" ∨ p.command = "run") → p.input.endsWith ".lean" ∨ p.input.endsWith ".json") ∧
//         (p.command = "init" → p.template ∈ templates ∧ ∀ d ∈ p.deploy, d ∈ deployTargets) ∧
//         (p.command = "package" → p.target ∈ packageTargets ∨ p.target = "browser") ∧
//         (p.command = "dev" → ∀ o ∈ p.outputs, o.1 ∈ devTargets ∧ o.2.endsWith ".lean")
//     | .error m => m.trimAscii.toString ≠ ""
import { parseLasmArguments, buildTargets } from '../../../src/cli-arguments.mjs';
import { templates, deployTargets } from '../../../src/init.mjs';
import { packageTargets } from '../../../src/package.mjs';
import { devTargets } from '../../../src/dev.mjs';
import { Input } from '../input.mjs';

export const sources = ['src/cli-arguments.mjs', 'src/init.mjs', 'src/dev.mjs', 'src/package.mjs'];
export const maxLength = 512;
const words = ['build', 'run', 'dev', 'init', 'package', 'editor', 'cache', 'repair', 'version', '--version', '-v',
  '--target', '--target=', '--output', '--output=', '--suspend', 'jspi', 'none', '--dev', '--release', '--rebuild', '--verbose',
  '--help', '-h', '--allow-dev', '--bundler', '--template', '-t', '--deploy', '--deploy=', '--port', '--host', '--no-run', '--no-watch',
  '--', 'Main.lean', 'bindings.json', 'dist', '.', 'node', 'browser', 'workers', 'wasi', 'fastly', 'lambda', 'vercel-edge', 'netlify-edge',
  'express', 'fullstack', 'node=Server.lean,browser=Client.lean', 'constructor', '__proto__', 'toString', 'hasOwnProperty', 'valueOf',
  'CLOUDFLARE', 'biuld'];
// A field of two bytes starting 0x02 stands for words[second byte]: one byte
// changes one whole token.
export const dictionary = [...words.map(word => word + '\0'), ...words.map((_, i) => [2, i, 0])];

const own = (table, key) => typeof key === 'string' && Object.hasOwn(table, key);
const commands = new Set(['version', 'help', 'run', 'build', 'init', 'init-help', 'dev', 'dev-help', 'package', 'package-help', 'editor', 'cache-repair']);

function fail(message, argv) { throw Object.assign(new Error(`${message}\nargv: ${JSON.stringify(argv)}`), { name: 'OracleFailure' }); }

export function run(bytes) {
  const input = new Input(bytes), argv = [];
  while (!input.done && argv.length < 24) {
    const at = input.p, f = input.field();
    if (f.length === 2 && f[0] === 2) argv.push(words[f[1] % words.length]);
    else { input.p = at; argv.push(input.text()); }
  }
  let result;
  try { result = parseLasmArguments(argv); }
  catch (error) {
    if (!(error instanceof Error) || error.constructor !== Error) fail(`threw ${error?.constructor?.name ?? typeof error}: ${error?.message ?? error}`, argv);
    if (!error.message.trim()) fail('an empty error message', argv);
    if (/\[native code\]|\[object Object\]|function \w*\(/.test(error.message)) fail(`a garbled error message: ${error.message}`, argv);
    return;
  }
  if (!result || typeof result !== 'object' || !commands.has(result.command)) fail(`unexpected parse ${JSON.stringify(result)}`, argv);
  switch (result.command) {
  case 'build':
    if (!buildTargets.includes(result.target)) fail(`build target ${result.target}`, argv);
    if (result.output !== undefined && typeof result.output !== 'string') fail('output is not a string', argv);
    // fallthrough
  case 'run':
    if (typeof result.input !== 'string' || !/\.(lean|json)$/.test(result.input)) fail(`input ${result.input}`, argv);
    if (!Array.isArray(result.args) || result.args.some(a => typeof a !== 'string')) fail('application arguments', argv);
    break;
  case 'init':
    if (!own(templates, result.template)) fail(`init accepted the template ${JSON.stringify(result.template)}`, argv);
    for (const d of result.deploy) if (!own(deployTargets, d)) fail(`init accepted --deploy ${JSON.stringify(d)}`, argv);
    if (typeof result.directory !== 'string') fail('init directory', argv);
    break;
  case 'package':
    if (!own(packageTargets, result.target) && result.target !== 'browser') fail(`package accepted the target ${JSON.stringify(result.target)}`, argv);
    break;
  case 'dev':
    for (const o of result.outputs) if (!devTargets.includes(o.target) || !o.input.endsWith('.lean')) fail(`dev output ${JSON.stringify(o)}`, argv);
    break;
  }
}

export function seeds() {
  return [
    ['Main.lean'], ['build', 'Main.lean', '--target', 'workers'], ['build', 'Main.lean', 'out', '--dev'], ['run', 'Main.lean', '--', 'a', '--b'],
    ['build', 'Main.lean', '--target=browser', '--suspend', 'jspi', '--bundler'], ['build', 'bindings.json'],
    ['init', 'app', '--template', 'fullstack', '--deploy', 'workers'], ['init', 'app', '-t', 'express', '--deploy=lambda'], ['init', 'app', '--template', 'plain'],
    ['dev', '--target', 'node=Server.lean,browser=Client.lean', '--port', '5173'], ['dev', 'Main.lean', '--release', '--no-run'],
    ['package', 'dist', '--target', 'lambda', '--output', 'x.zip'], ['editor', '.'], ['cache', 'repair'], ['--version'], ['biuld', 'Main.lean'],
    ['build', 'Main.lean', '--target', 'cloudflare'],
  ];
}
