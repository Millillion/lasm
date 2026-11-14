// The project files Lasm reads itself, beside Lake and npm: a Lean source's
// import header (`leanHeader`, src/application-sources.mjs, which keys the
// build's reuse of Lake's configuration; `importClosure`, src/dev-proxy.mjs,
// which picks the outputs `lasm dev` rebuilds after an edit), the Lake
// manifest and lakefiles (`lakeConfigurationKey`), and package.json
// (`edgeModules`, `supabaseFunctionName`, `fastlyName`).
// Input: structure read field by field (test/fuzz/input.mjs): which file,
// then its text (a Lean source, a lake-manifest.json and a lakefile.lean, or a
// package.json).
// Oracle:
//   - against Lean's own header parser (test/fuzz/support/LeanHeaderModel.lean,
//     `Lean.Elab.parseImports`; required in CI): when Lean reads a source's
//     imports without error, `leanHeader` of the source has exactly those
//     imports (a key that left one out would reuse a stale configuration),
//     and `importClosure` reaches the file of every one of them (otherwise an
//     edit to it rebuilds nothing);
//   - `lakeConfigurationKey` answers a key or no key (no reuse) for any
//     manifest and lakefile, and never throws: Lake reports a broken file;
//   - the package.json readers answer, or refuse with a plain Error naming
//     package.json: modules are distinct non-empty strings, and the Supabase
//     and Fastly names are ones those platforms accept.
// Proposition: Lasm.Cli.Candidates.lean_header_keeps_imports
//    ∀ (text : String) (is : List HeaderImport), NoBareCR text → leanImports text = some is → leanImports (leanHeader text) = some is
// Proposition: Lasm.Cli.Candidates.import_closure_covers_imports
//    ∀ (text : String) (is : List HeaderImport), leanImports text = some is →
//      (∀ i ∈ is, i.module ≠ [] ∧ i.module ≠ ["Main"] ∧ ∀ c ∈ i.module, FileComponent c) →
//      ∀ i ∈ is, moduleFile i.module ∈ importClosureOf text (is.map (·.module))
// Proposition: Lasm.Cli.Candidates.lake_key_total
//    ∀ manifest lakefile : String, ∃ key, lakeConfigurationKeyOf manifest lakefile = .ok key
// Proposition: Lasm.Cli.Candidates.package_readers_clear
//    ∀ text : String,
//      (∀ ms, edgeModulesOf text = .ok ms → ms.Nodup ∧ ∀ m ∈ ms, m ≠ "") ∧
//      (∀ n, supabaseFunctionNameIn text = .ok n →
//        (n.toList.head?.map Char.isLower) = some true ∧ n.all (fun c => c.isLower || c.isDigit || c = '-') ∧ n.length ≤ 54) ∧
//      (∀ n, fastlyNameIn text = .ok n → n ≠ "" ∧ n.all (fun c => c.isLower || c.isDigit || c = '_' || c = '-')) ∧
//      (∀ e, edgeModulesOf text = .error e ∨ supabaseFunctionNameIn text = .error e ∨ fastlyNameIn text = .error e →
//        Mentions e "package.json")
import { mkdirSync, mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { Input } from '../input.mjs';
import { lakeConfigurationKey, leanHeader } from '../../../src/application-sources.mjs';
import { importClosure } from '../../../src/dev-proxy.mjs';
import { edgeModules, supabaseFunctionName } from '../../../src/edge/edge-build.mjs';
import { fastlyName } from '../../../src/wasi/wasi-build.mjs';
import { modelDirectory, start } from '../support/lean-header-model.mjs';

export const sources = ['src/application-sources.mjs', 'src/dev-proxy.mjs', 'src/edge/edge-build.mjs', 'src/wasi/wasi-build.mjs', 'src/application-npm.mjs'];
export const maxLength = 1024;
export const dictionary = ['import ', 'import\n', 'public ', 'private ', 'meta ', 'all ', 'module\n', 'prelude\n', '--', '/-', '-/', '/--', '/-!',
  '«', '»', '«A B»', '.', 'A.B', 'Lean', 'Lasm.Fetch', '\r\n', '\t', 'def x := 1\n', 'theorem t : True := trivial\n', 'open A\n', '#eval 1\n',
  'α', 'λ', 'x₁', "x'", 'x!', 'x?', '_', 'importx', 'set_option', 'null', '[]', '{}', '"packages"', '"packagesDir"', '"type"', '"path"',
  '"dir"', '"name"', '"lasm"', '"edge"', '"modules"', '"exclude"', '"@scope/name"', '"__proto__"', '"constructor"', 'true', '5', ':', ','];

const fail = (message, detail) => { throw Object.assign(new Error(`${message}\n${JSON.stringify(detail, null, 1)?.slice(0, 3000)}`), { name: 'OracleFailure' }); };
let model, project;
export async function setup() {
  const dir = modelDirectory();
  if (dir) model = start(dir);
  project = mkdtempSync(join(tmpdir(), 'lasm-fuzz-project-'));
  process.on('exit', () => { try { rmSync(project, { recursive: true, force: true }); } catch {} });
}
const fresh = () => { rmSync(project, { recursive: true, force: true }); mkdirSync(project, { recursive: true }); };

// What a file name can hold, on every OS Lasm runs on.
const fileComponent = c => c !== '' && c !== '.' && c !== '..' && !/[/\\\0<>:"|?*\x01-\x1f]/.test(c) && Buffer.byteLength(c) < 100 && c === c.trim();
const sameImports = (a, b) => JSON.stringify(a) === JSON.stringify(b);
// Lean adds the prelude's `Init` to a header without `prelude`.
const withoutInit = imports => imports.filter(([module]) => !(module.length === 1 && module[0] === 'Init'));

async function header(text) {
  const kept = leanHeader(text);
  if (typeof kept !== 'string') fail('leanHeader answered no text', { text, kept });
  if (!model) return;
  const lean = await model.ask({ text });
  if (lean.fault) fail(`the Lean header model failed: ${lean.fault}`, { text });
  if (!lean.ok) return; // Lean refuses the header: nothing to compare
  const imports = withoutInit(lean.ok);
  // lean_header_keeps_imports. Lean 4.35 reads a header that a bare CR
  // breaks (`prelude\nimport \n\rx`) as no imports and no error, where the
  // same text without the CR is an error: such texts have no verdict.
  const again = /\r(?!\n)/.test(text) ? { ok: lean.ok } : await model.ask({ text: kept });
  if (!again.ok || !sameImports(withoutInit(again.ok), imports)) fail('leanHeader keeps other imports than the source has', { text, kept, imports, again });
  // import_closure_covers_imports
  const modules = imports.map(([module]) => module);
  // A name Lean reads but no file can hold (`import$A` reads the anonymous name) has no verdict.
  if (modules.some(m => !m.length || (m.length === 1 && m[0] === 'Main') || !m.every(fileComponent))) return;
  fresh();
  writeFileSync(join(project, 'Main.lean'), text);
  for (const m of modules) {
    mkdirSync(join(project, ...m.slice(0, -1)), { recursive: true });
    writeFileSync(join(project, ...m) + '.lean', '');
  }
  const reached = importClosure(project, join(project, 'Main.lean'));
  for (const m of modules) {
    const file = join(project, ...m) + '.lean';
    if (!reached.has(file)) fail(`importClosure misses ${m.join('/')}.lean, which the source imports`, { text, modules, reached: [...reached] });
  }
}

function manifest(text, lakefile) {
  fresh();
  writeFileSync(join(project, 'lake-manifest.json'), text);
  if (lakefile !== undefined) writeFileSync(join(project, 'lakefile.lean'), lakefile);
  let key;
  try { key = lakeConfigurationKey(project, undefined, {}); }
  catch (error) { fail(`lakeConfigurationKey threw ${error?.constructor?.name}: ${error?.message}`, { manifest: text, lakefile }); }
  if (key !== undefined && !/^[0-9a-f]{64}$/.test(key)) fail('lakeConfigurationKey answered something else than a key', { manifest: text, key });
}

function packageJson(text) {
  fresh();
  writeFileSync(join(project, 'package.json'), text);
  const readers = { edgeModules: () => edgeModules(project, []), supabaseFunctionName: () => supabaseFunctionName(project), fastlyName: () => fastlyName(project) };
  for (const [name, read] of Object.entries(readers)) {
    let value;
    try { value = read(); }
    catch (error) {
      if (!(error instanceof Error) || error.constructor !== Error) fail(`${name} threw ${error?.constructor?.name}: ${error?.message}`, { text });
      if (!error.message.includes('package.json')) fail(`${name}'s message does not name package.json: ${error.message}`, { text });
      continue;
    }
    if (name === 'edgeModules' && (!Array.isArray(value) || value.some(m => typeof m !== 'string' || !m) || new Set(value).size !== value.length))
      fail('edgeModules answered something else than distinct module names', { text, value });
    if (name === 'supabaseFunctionName' && !(typeof value === 'string' && /^[a-z][a-z0-9-]*$/.test(value) && value.length <= 54))
      fail('not a Supabase function name', { text, value });
    if (name === 'fastlyName' && !(typeof value === 'string' && /^[a-z0-9_-]+$/.test(value))) fail('not a Fastly service name', { text, value });
  }
}

export async function run(bytes) {
  const input = new Input(bytes);
  const kind = input.int(5);
  if (kind <= 2) await header(input.text());
  else if (kind === 3) { const text = input.text(); manifest(text, input.bool() ? input.text() : undefined); }
  else packageJson(input.text());
}

export function seeds() {
  const seed = (...parts) => Uint8Array.from(parts.flatMap(p => typeof p === 'number' ? [p] : [...Buffer.from(p, 'utf8'), 0]));
  return [
    seed(0, 'import A\nimport B\ndef x := 1\nimport C'),
    seed(0, 'module\n\npublic import A\nmeta import B\nimport all C\n-- note\n/- block\nimport X\n-/\n  import D\ntheorem t : True := trivial'),
    seed(1, '/- a /- nested -/ still\ndef inside := 1\n-/\nimport A\nopen A'),
    seed(1, 'import «My Mod»\nimport A.«b c»\ndef x := 1\n'),
    seed(2, 'import\n  A.B\n\ndef x := 1\n'),
    seed(2, 'prelude\nimport Init.Core\nimport α.x₁\n'),
    seed(0, 'import A -- comment\nimport /- c -/ B\r\nimport C\r\n#eval 1'),
    seed(3, '{"version": "1.1.0", "packagesDir": ".lake/packages", "packages": [{"type": "path", "dir": "lib", "name": "lib"}]}', 1, 'import Lake\nopen Lake DSL\n'),
    seed(3, 'null', 0),
    seed(3, '{"packages": [{"type": "git", "name": 5}]}', 1, 'import Lake\nimport Other\n'),
    seed(4, '{"name": "@scope/My App", "lasm": {"edge": {"modules": ["hono", "lasm:ui"], "exclude": ["@hono/node-server"]}}}'),
    seed(4, '{"name": 5, "lasm": {"edge": {"modules": [""]}}}'),
    seed(4, 'null'),
    seed(4, '{"name": "1-app"'),
  ];
}
