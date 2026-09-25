// Inventory all modules actually compiled into the current application bundle.
// Native declaration metadata is never counted as a deployed API test pass.
import { readFileSync, writeFileSync, existsSync, mkdirSync, openSync, closeSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { ensureResourceGuard } from './full-lean/resource-guard.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';

await ensureResourceGuard();
const root = resolve(fileURLToPath(new URL('../', import.meta.url)));
const [outputArg, libraryArg, targetArg, ...extra] = process.argv.slice(2);
if (!outputArg || extra.length || !!libraryArg !== !!targetArg)
  throw new Error('Supply NEW_OUTPUT [STANDARD_LIBRARY_AUDIT MATCHING_TARGET_MANIFEST]');
const output = resolve(outputArg);
if (existsSync(output)) throw new Error('Use a fresh API audit directory');
const libraryFile = libraryArg ? resolve(libraryArg) : join(root, '.work/application-runtime-4.34.0/standard-library-audit.json');
const library = JSON.parse(readFileSync(libraryFile, 'utf8'));
const targetFile = targetArg ? resolve(targetArg) : join(root, '.work/application-runtime-bundle-4.34-r1/lean-4.34.0-wasm64/target.json');
const target = JSON.parse(readFileSync(targetFile, 'utf8'));
if (target.lean !== library.lean || target.leanCommit !== library.leanCommit ||
    await hashFile(libraryFile) !== target.standardLibraryAuditSha256)
  throw new Error('Compiled module inventory does not match the selected runtime bundle');
mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'lean-toolchain'), `leanprover/lean4:v${library.lean}\n`);
const lean = await provisionLean(output);
if (lean.commit !== library.leanCommit) throw new Error('Native compiler does not match the selected runtime bundle');
const modules = library.modules.map(row => row.module.replaceAll('/', '.'));
for (const row of library.modules) {
  const file = join(lean.prefix, 'src/lean', ...(row.module.startsWith('Lake') ? ['lake'] : []), row.module + '.lean');
  if (await hashFile(file) !== row.sourceSha256) throw new Error('Standard module source differs: ' + row.module);
}
const script = join(output, 'Inventory.lean'), raw = join(output, 'declarations.json');
const compilerOutput = join(output, 'compiler.stdout');
writeFileSync(script, modules.map(name => 'import ' + name).join('\n') + '\n'
  + readFileSync(join(root, 'scripts/upstream/AllApiInventory.lean'), 'utf8'));
const descriptor = openSync(compilerOutput, 'wx');
try {
  execFileSync(lean.lean, ['-j1', '-s8192', '-M4096', script], { env: nativeLeanEnvironment(lean),
    cwd: output, stdio: ['ignore', descriptor, 'inherit'], timeout: 600_000 });
} finally { closeSync(descriptor); }
// Importing the entire shipped surface includes deprecated modules. Keep the
// compiler's warnings verbatim, separately from the one structured result.
const lines = readFileSync(compilerOutput, 'utf8').split('\n');
const payloads = lines.filter(line => line.startsWith('{'));
if (payloads.length !== 1) throw new Error('Expected one declaration inventory in the preserved compiler output');
const data = JSON.parse(payloads[0]);
writeFileSync(raw, payloads[0] + '\n');
writeFileSync(join(output, 'diagnostics.txt'), lines.filter(line => line !== payloads[0]).join('\n'));
const imported = new Set(data.modules);
const missing = modules.filter(name => !imported.has(name));
if (missing.length) throw new Error('Missing compiled modules: ' + missing.join(', '));
const externs = data.declarations.filter(row => row.externs.length);
const symbols = [...new Set(externs.flatMap(row => row.externs.filter(entry => entry.kind === 'standard').map(entry => entry.symbol)))].sort();
const counts = {};
for (const row of data.declarations) counts[row.module?.split('.')[0] ?? '(current)'] = (counts[row.module?.split('.')[0] ?? '(current)'] ?? 0) + 1;
const externInventory = join(output, 'externs.json');
writeFileSync(externInventory, JSON.stringify(externs, null, 2) + '\n');
const report = { scope: 'Native metadata from every compiled standard module; all behavioral coverage remains unverified',
  lean: lean.version, leanCommit: lean.commit, nativeArtifactIdentity: lean.identity,
  libraryInventorySha256: await hashFile(libraryFile), inventorySourceSha256: await hashFile(script),
  targetManifest: targetFile, targetManifestSha256: await hashFile(targetFile),
  externInventory, externInventorySha256: await hashFile(externInventory),
  rawInventory: raw, rawInventorySha256: await hashFile(raw), compilerOutputSha256: await hashFile(compilerOutput), compiledModules: modules.length,
  importedModules: data.modules.length, declarations: data.declarations.length, groups: counts,
  ioFsDeclarations: data.declarations.filter(row => row.name.startsWith('IO.FS.')).length,
  httpDeclarations: data.declarations.filter(row => row.name.startsWith('Std.Http.')).length,
  externDeclarations: externs.length, standardCSymbols: symbols.length,
  excludedTheorems: data.excludedTheorems, excludedInternalNames: data.excludedInternalNames,
  resourceReport: process.env.LASM_RESOURCE_REPORT, recordedAt: new Date().toISOString() };
writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
