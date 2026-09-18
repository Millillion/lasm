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
      // A fresh build replaces its earlier runtime fields. A focused recheck
      // omits source classification and retains only its verified artifact's context.
      const inherited = result.kind ? {} : entries.get(result.name);
      const observation = { ...inherited, ...source, ...result,
        evidence: join(directory, file).slice(root.length + 1),
        compilerIdentity: result.artifactCompilerIdentity ?? report.compilerIdentity ?? null,
        runtimeTimeout: result.runtimeTimeout ?? report.runtimeTimeout ?? null };
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
  const observations = {
    'compile_bench/const_fold.lean': 'Node reports Maximum call stack size exceeded while the compiled native baseline completes.',
    'elab/12676.lean': 'The ten-million-element list test reaches an internal out-of-memory panic in Wasm.',
    'elab/dbgMacros.lean': 'Native interpreter evaluation recovers after the tested panic; the Wasm guest terminates.',
    'elab/evalInit.lean': 'Prints the randomly initialized standard random generator; exact output equality is not expected across processes.',
    'elab/float_conversions.lean': 'The signed-conversion checks contain 64-bit ISize expectations, including 4000000000, which are not portable to Wasm32.',
    'elab/sint_div_overflow.lean': 'The printed ISize minimum differs between native 64-bit Lean and Wasm32.',
    'elab/ptrAddr.lean': 'Prints addresses from separate native/Wasm address spaces; exact pointer values are not comparable.',
    'elab/task_test2.lean': 'Computed results agree; concurrent debug-trace ordering differs.',
  };
  const runtimeFailure = !e.status.startsWith('matched-native') && !e.status.startsWith('build-') && e.artifactSha256;
  const outputPrefix = e.nativeMode === 'compiled-C' ? 'compiled-' : '';
  const failureOutput = runtimeFailure ? Object.fromEntries(['native', 'wasm'].map(mode => {
    const path = join(root, e.work, `${outputPrefix}${mode}.stderr`);
    return [mode, existsSync(path) ? readFileSync(path, 'utf8').slice(0, 4000) : null];
  })) : null;
  return { name: e.name, kind: e.kind, status: e.status, category, sha256: e.sha256,
    artifactSha256: e.artifactSha256 ?? null, compilerIdentity: e.compilerIdentity,
    compilerSourcesChangedDuringBuild: e.compilerSourcesChangedDuringBuild ?? null,
    runtimeCommands: e.adaptation?.evalAndGuardCommands.length ?? null,
    native: e.native ?? null, wasm: e.wasm ?? null, work: e.work,
    nativeMode: e.nativeMode ?? (e.native ? 'interpreter' : null), runtimeTimeout: e.runtimeTimeout,
    failureStderrExcerpt: failureOutput,
    originalNative: e.originalNative ?? null, originalNativeRecheck: e.nativeOriginalRechecked ?? null,
    nativeCaseErrors: e.nativeCases?.filter(c=>c.result !== 'ok') ?? [],
    wasmCaseErrors: e.wasmCases?.filter(c=>c.result !== 'ok') ?? [],
    interpretation: observations[e.name] ?? null,
    undefinedSymbols, reason: e.status === 'build-failed' ? (e.error?.split('\n').filter(line=> /error:|^Source for /.test(line)).slice(0,2).join('\n').slice(0,1000) || null) : e.reason ?? null,
    history: history.get(e.name) };
});
const http = rows.filter(x=>/^elab\/async_http/.test(x.name));
const filesystem = rows.filter(x=>/^(?:compile\/file_read_overflow|elab\/(?:getline_crash|handleLocking|IO_test|ioNulBytes|realPath|stdio|tempfile))\.lean$/.test(x.name));
const ctest = join(root, '.work/upstream-ctest/ctest.json');
const report = { leanCommit, generatedAt: new Date().toISOString(), platform: `${process.platform}-${process.arch}`, node: process.version,
  scope: 'Exploratory observations plus explicit rechecks; artifacts span compiler versions, not one final-revision sweep.',
  registeredCTestTests: existsSync(ctest) ? JSON.parse(readFileSync(ctest)).tests.length : null,
  sourceInventory: { total: inventory.entries.length,
    categories: Object.fromEntries([...new Set(inventory.entries.map(x=>x.kind))].map(k=>[k,inventory.entries.filter(x=>x.kind===k).length])) },
  runtimeCandidates: candidates.length, completed: rows.length, pending, counts, categories,
  http: { files: http.length, matchedNative: http.filter(x=>x.status==='matched-native').length,
    runtimeCommands: http.reduce((n,x)=>n+(x.runtimeCommands??0),0) },
  filesystem: { files: filesystem.length, matchedNative: filesystem.filter(x=>x.status==='matched-native').length,
    runtimeCommands: filesystem.reduce((n,x)=>n+(x.runtimeCommands??0),0),
    mainPrograms: filesystem.filter(x=>x.kind==='runtime-main').length, names: filesystem.map(x=>x.name) },
  missingExterns: [...missing].sort(([a],[b])=>a.localeCompare(b)).map(([symbol, tests])=>({ symbol,
    declarations: externs.filter(x=>x.symbol===symbol).map(x=>x.name), tests })),
  entries: rows };
const output = join(root, 'docs/compatibility/lean-4.32.0-results.json');
writeFileSync(output, JSON.stringify(report, null, 2) + '\n');
const countTable = Object.entries(counts).map(([status, count]) => `| ${status} | ${count} |`).join('\n');
const sourceTable = Object.entries(report.sourceInventory.categories).map(([kind, count]) => `| ${kind} | ${count} |`).join('\n');
const missingIO = report.missingExterns.filter(e=>e.declarations.some(n=>/^(?:IO|Std)\./.test(n)));
writeFileSync(join(root, 'docs/UPSTREAM_RESULTS.md'), `# Lean 4.32.0 compatibility audit

Generated ${report.generatedAt}. Host: ${report.platform}, Node ${report.node}.
Pinned upstream commit: \`${leanCommit}\`.
${pending.length ? `**In progress: ${pending.length} selected runtime candidates remain.**` : '**Every selected runtime candidate has an observation. This does not mean every candidate built or passed.**'}

Lean has its own [test suite](https://github.com/leanprover/lean4/blob/v4.32.0/tests/README.md).
The actual CMake registration inventory contains **${report.registeredCTestTests} tests**.
The source inventory contains ${inventory.entries.length} Lean files, including
auxiliary files and disabled tests; these are different units of counting.

| Source classification | Files |
| --- | ---: |
${sourceTable}

The adapter selects runtime commands in the elaboration piles and ordinary main
programs in the compile piles. This is a selected runtime audit, not execution of
the entire native compiler, kernel, LSP, Lake, C-linkage and shell test suite in
Node. Other benchmark/test-driver piles have not been adapted.

## Runtime observations

${report.completed} of ${report.runtimeCandidates} candidates recorded.

| Latest recorded result | Files |
| --- | ---: |
${countTable}

These observations span exploratory builds and explicit rechecks from different
compiler revisions. They are not a clean sweep of one final revision. Source
hashes, artifact hashes, compiler fingerprints, earlier observations and exact
failure categories are retained in the [machine-readable report](compatibility/lean-4.32.0-results.json).
The [workflow](UPSTREAM_TESTS.md) documents native baselines, normalization,
deadlines, command execution markers, and reproduction commands.

**HTTP:** ${report.http.matchedNative}/${report.http.files} files match native Lean,
covering ${report.http.runtimeCommands} adapted runtime commands. These include
parsing, framing, headers, bodies, URI handling, protocol regressions and fuzz
inputs. Network transport is additionally tested by the full Lean server example.
A passing command can contain many assertions; it is not declaration or branch
coverage, nor a proof of all possible scheduling interleavings.

**Filesystem/console:** ${report.filesystem.matchedNative}/${report.filesystem.files} selected files match native Lean
(${report.filesystem.runtimeCommands} adapted commands and ${report.filesystem.mainPrograms} ordinary main).
All 20 direct IO.FS externs have host implementations. Higher-level
functions use the actual pinned Lean library. Source inventories list 193 IO.FS
and 1,938 Std.Http declarations, including generated constructors and eliminators.
This establishes implementation locations, not complete behavioral equivalence.

Separate [regression and fresh-package evidence](evidence/2026-09-18-io-conformance.json)
records the core runtime, full Lean HTTP application, Express example, browser,
workerd, JSPI and installed-package checks. The package was built and tested on
native Linux x64; the source audit above spans multiple exploratory revisions.

## Remaining gaps

The [root limitations checklist](../IO_LIMITATIONS.md) is still open. Concrete
examples include the Wasm32 USize/ISize width, heap/stack exhaustion, cooperative
scheduling and shutdown differences, some blocking native-stream operations,
TCP bind timing, missing wider async/system APIs, and native validation on macOS,
Windows and Linux ARM64. Large lists exhaust memory; a deep-recursion benchmark
exceeds the stack; panic and overflow termination differ from native executions.

An output mismatch is not automatically an API defect. Random output, concurrent
trace order, and width-sensitive expectations are retained visibly as mismatches.
An adapter/build failure is not evidence that the original Lean API failed at
runtime. Expected errors that match native Lean are counted separately.

The audit observed ${report.missingExterns.length} unresolved native symbols;
${missingIO.length} map to IO/Std declarations. Some observations precede fixes.
See each artifact's history and the [954 declaration/symbol mappings](compatibility/lean-4.32.0-externs.json)
before treating an earlier unresolved symbol as a current limitation.

No non-Linux native runner results are implied by the package's six-platform build
matrix. The prepared CI workflow still needs execution on those hosts.
`);
console.log(JSON.stringify({ completed: report.completed, pending: pending.length, counts, http: report.http, output }, null, 2));
