import { readFileSync, writeFileSync, readdirSync, existsSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { leanCommit, root } from '../../src/toolchain.mjs';

// Arguments are evidence directories, oldest first. Later explicit rechecks
// supersede an earlier observation without discarding its provenance.
const directories = process.argv.slice(2).filter(x => x !== '--partial').map(x => resolve(x));
if (!directories.length) throw new Error('Specify evidence directories, oldest first');
const inventory = JSON.parse(readFileSync(join(directories[0], 'inventory.json')));
const entries = new Map(), history = new Map();
for (const directory of directories) {
  for (const file of readdirSync(directory).filter(x => /^results-.*\.json$/.test(x)).sort()) {
    const report = JSON.parse(readFileSync(join(directory, file)));
    if (report.leanCommit !== leanCommit) throw new Error('Wrong Lean version');
    for (const result of report.entries) {
      const source = inventory.entries.find(x => x.name === result.name);
      if (!source || source.sha256 !== result.sha256) throw new Error(`Wrong source hash: ${result.name}`);
      const observation = { ...entries.get(result.name), ...source, ...result,
        evidence: join(directory, file).slice(root.length + 1),
        compilerIdentity: result.artifactCompilerIdentity ?? report.compilerIdentity ?? null };
      const previous = history.get(result.name) ?? [];
      previous.push({ evidence: observation.evidence, status: result.status,
        artifactSha256: result.artifactSha256 ?? null, compilerIdentity: observation.compilerIdentity });
      history.set(result.name, previous); entries.set(result.name, observation);
    }
  }
}
const candidates = inventory.entries.filter(x => x.kind.startsWith('runtime-'));
const pending = candidates.filter(x => !entries.has(x.name)).map(x=>x.name);
if (pending.length && !process.argv.includes('--partial')) throw new Error(`${pending.length} candidates have not finished`);
const externs = JSON.parse(readFileSync(join(root, 'docs/compatibility/lean-4.32.0-externs.json')));
const counts = {}, categories = {}, missing = new Map();
const rows = [...entries.values()].sort((a,b)=>a.name.localeCompare(b.name)).map(e => {
  counts[e.status] = (counts[e.status] ?? 0) + 1;
  const undefinedSymbols = e.status === 'build-failed'
    ? [...new Set([...(e.error ?? '').matchAll(/undefined symbol: ([^\s]+)/g)].map(x=>x[1]))] : [];
  for (const symbol of undefinedSymbols) missing.set(symbol, [...(missing.get(symbol) ?? []), e.name]);
  const category = e.status === 'build-failed' ? (undefinedSymbols.length ? 'missing-native-extern' : 'build-or-test-adaptation')
    : e.status.startsWith('matched-native') ? e.status
    : e.status.includes('native') ? 'native-baseline-or-test-driver'
    : e.status.startsWith('wasm-') ? 'runtime-failure-or-limit' : e.status;
  categories[category] = (categories[category] ?? 0) + 1;
  return { name: e.name, kind: e.kind, status: e.status, category, sha256: e.sha256,
    artifactSha256: e.artifactSha256 ?? null, compilerIdentity: e.compilerIdentity,
    compilerSourcesChangedDuringBuild: e.compilerSourcesChangedDuringBuild ?? null,
    runtimeCommands: e.adaptation?.evalAndGuardCommands.length ?? null,
    native: e.native ?? null, wasm: e.wasm ?? null, work: e.work,
    undefinedSymbols, reason: e.status === 'build-failed' ? (e.error?.split('\n').filter(line=> /error:|^Source for /.test(line)).slice(0,2).join('\n').slice(0,1000) || null) : e.reason ?? null,
    history: history.get(e.name) };
});
const http = rows.filter(x=>/^elab\/async_http/.test(x.name));
const ctest = join(root, '.work/upstream-ctest/ctest.json');
const report = { leanCommit, generatedAt: new Date().toISOString(), platform: `${process.platform}-${process.arch}`, node: process.version,
  scope: 'Exploratory observations plus explicit rechecks; artifacts span compiler versions, not one final-revision sweep.',
  registeredCTestTests: existsSync(ctest) ? JSON.parse(readFileSync(ctest)).tests.length : null,
  sourceInventory: { total: inventory.entries.length,
    categories: Object.fromEntries([...new Set(inventory.entries.map(x=>x.kind))].map(k=>[k,inventory.entries.filter(x=>x.kind===k).length])) },
  runtimeCandidates: candidates.length, completed: rows.length, pending, counts, categories,
  http: { files: http.length, matchedNative: http.filter(x=>x.status==='matched-native').length,
    runtimeCommands: http.reduce((n,x)=>n+(x.runtimeCommands??0),0) },
  missingExterns: [...missing].sort(([a],[b])=>a.localeCompare(b)).map(([symbol, tests])=>({ symbol,
    declarations: externs.filter(x=>x.symbol===symbol).map(x=>x.name), tests })),
  entries: rows };
const output = join(root, 'docs/compatibility/lean-4.32.0-results.json');
writeFileSync(output, JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify({ completed: report.completed, pending: pending.length, counts, http: report.http, output }, null, 2));
