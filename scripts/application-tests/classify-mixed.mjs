// Review ledger for the original shell registrations. This records execution
// obligations; it never substitutes for running a test or its deployed phase.
import assert from 'node:assert/strict';
import { readFileSync, writeFileSync, existsSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { join } from 'node:path';
import { loadUpstreamEvidence } from './upstream-evidence.mjs';

const [version = '4.34.0', sourceRoot = '.cache/lean4-' + version, outputArg] = process.argv.slice(2);
assert.ok(process.argv.length <= 5, 'Supply [LEAN_VERSION [PRISTINE_SOURCE [NEW_OUTPUT]]]');
const { inventory, ledgerFile } = loadUpstreamEvidence(version);
const outputFile = outputArg ?? ledgerFile;
assert.ok(!existsSync(outputFile), 'Preserve existing classification evidence; supply NEW_OUTPUT');

const nativeLake = `precompile scripts 14619 8448 api badImport buildArgs
  builtin-lint-code-quality builtin-lint-module builtin-lint-record-deferred
  builtin-lint-record builtin-lint depRenaming depTree emptyBuild env globs kinds
  leanExit logLevel ltar ltarStable manifest meta module needs noBuild noRelease
  old postUpdate precompileModules-importLake requiresModule reservoirConfig
  reversion serve setupFile shake srcHash trace translateConfig updateToolchain
  updateUnknown versionTags`.split(/\s+/);
const runtimeLake = {
  deps: 'Run foo and bar under both Lean and TOML configurations, preserving dependency and cleanup checks.',
  hello: 'Run lake exe and direct/packed/unpacked hello executables with their original arguments.',
  '13013': 'Run the distinct foo and bar executables after the original configuration error controls.',
  cache: 'Run the cached and restored test executable, retaining hard-link and permission assertions.',
  cacheTransfer: 'Compile the BadCurl mock executable used by native Lake against the original local Python server; keep every transfer assertion.',
  clone: 'Run the executable before and after editing its cloned dependency.',
  driver: 'Compile executable test/lint drivers; Lake DSL script and library drivers remain native build-time checks.',
  init: 'Compile/run each generated std and exe template before the original script removes it.',
  inputFile: 'Run the main after each traced/untraced input change with the original arguments and file assertions.',
  lean: 'Compile Test.lean for the --run invocation; other elaboration and setup checks remain native.',
  'llvm-bitcode-gen': 'Run the application only when the original LLVM-feature gate enables the test; retain bitcode build checks.',
  order: 'Run executable Y with the configured dependency order.',
  packageOverrides: 'Run bar and foo with each original package override configuration.',
  precompileLink: 'Run orderTest; preserve the native plugin/precompilation and trace controls.',
  query: 'Compile the pretty.lean stdin driver and the queried executable a; preserve query assertions.',
  rebuild: 'Run foo before and after editing its source dependency.',
  targets: 'Run all direct and lake exe invocations of a, b and c, preserving target/facet assertions.',
  toml: 'Compile Test.lean and retain its unchanged runtime TOML parser assertions.',
};
const foreignLake = {
  ffi: 'Cross-compile or adapt the example foreign library and run app, test and standalone with the unchanged Lean/C sources.',
  'reverse-ffi': 'Provide the callable Lean library path for both original C-driven examples; native linking alone does not validate deployment.',
  externLib: 'Compile/adapt the foreign library and run both root and dependency test executables.',
};
const nativeOther = `misc/lean_ghash.sh misc/lean_help.sh misc/lean_unknown_file.sh
  misc/lean_unknown_option.sh misc/lean_version.sh bench/vcgen misc_dir/plugin
  pkg/builtin_attr pkg/cbv_attr pkg/collectAxioms pkg/deprecated_arg
  pkg/deprecated_module pkg/deprecated_option pkg/deriving pkg/homo pkg/initialize
  pkg/internal_module_linter pkg/issue12825 pkg/leanchecker pkg/linter_set pkg/misc
  pkg/mod_clash pkg/module pkg/module_linter pkg/prv pkg/rebuild pkg/setup
  pkg/stateful_linter pkg/structure_docstrings pkg/sym_ext pkg/sym_simp_attr
  pkg/user_attr pkg/user_opt pkg/ver_clash pkg/verso_doc_md`.split(/\s+/);
const runtimeOther = {
  '../doc/examples/compiler': 'Compile the example main and retain the hello/world output assertion.',
  'pkg/debug': 'Preserve distinct release/debug compiler settings and their original success/failure assertions.',
  'pkg/def_clash': 'Run TestUse with both packages; retain the original expected compile/link failures.',
  'pkg/exe_private_lean_import': 'Run main with full Lean initialization and its original empty-environment assertion.',
  'pkg/float': 'Run testfloat-check.',
  'pkg/frontend': 'Run both frontend executables with original module arguments and imported initializer state.',
  'pkg/ofScientific': 'Run parse-number-check.',
  'pkg/path with spaces': 'Run the executable twice around creation of the shadowing path file.',
  'pkg/user_attr_app': 'Run user_attr with its original runtime environment/attribute assertions.',
};
const decisions = new Map();
function add(name, phase, rationale) {
  assert.ok(!decisions.has(name), 'Duplicate decision: ' + name);
  decisions.set(name, { phase, rationale });
}
for (const name of nativeLake) {
  const pile = ['precompile', 'scripts'].includes(name) ? 'examples' : 'tests';
  add(`tests/lake/${pile}/${name}/test.sh`, 'native-build-time',
    'Original Lake configuration, dependency, compiler, plugin, script, server or artifact behavior executes in the managed native build toolchain.');
}
for (const [name, rationale] of Object.entries(runtimeLake))
  add(`tests/lake/${['deps', 'hello'].includes(name) ? 'examples' : 'tests'}/${name}/test.sh`, 'native-and-compiled-application', rationale);
for (const [name, rationale] of Object.entries(foreignLake))
  add(`tests/lake/${name === 'externLib' ? 'tests' : 'examples'}/${name}/test.sh`, 'native-and-foreign-application', rationale);
add('tests/lake/tests/lock/test.sh', 'upstream-disabled', 'The unchanged script exits zero before its disabled lock tests; record a skip, never lock-behavior coverage.');
for (const name of nativeOther) add(name, 'native-build-time',
  'Original compiler, elaboration, plugin, library test driver or tool command executes in the managed native build toolchain.');
for (const [name, rationale] of Object.entries(runtimeOther)) add(name, 'native-and-compiled-application', rationale);
add('pkg/user_plugin', 'native-and-foreign-application',
  'Retain native --plugin controls; run the unchanged Lean.loadPlugin clients with compatible deployed dynamic libraries and initialization symbols.');
if (version === '4.34.1') add('misc_dir/rc_sticky', 'native-and-foreign-application',
  'Run the unchanged C reference-count regression against the matching native and deployed Lean runtimes. Preserve every assertion and original leanc flags; native success alone does not cover the Wasm runtime.');

const tests = inventory.tests.filter(test => test.category === 'mixed-driver-review-required');
assert.equal(tests.length, inventory.categories['mixed-driver-review-required']);
assert.equal(decisions.size, tests.length);
const counts = {}, rows = tests.map(test => {
  const decision = decisions.get(test.name); assert.ok(decision, 'Missing decision: ' + test.name);
  const content = readFileSync(join(sourceRoot, test.source));
  assert.equal(createHash('sha256').update(content).digest('hex'), test.sha256);
  counts[decision.phase] = (counts[decision.phase] ?? 0) + 1;
  return { name: test.name, source: test.source, sourceSha256: test.sha256, ...decision,
    execution: 'not-run-in-current-product-campaign' };
});
const output = {
  scope: `Static execution classification of all ${tests.length} mixed shell registrations; no test pass implied`,
  lean: inventory.lean, leanCommit: inventory.leanCommit, sourceArchiveSha256: inventory.sourceArchiveSha256,
  counts, tests: rows,
  requirements: [
    'Verify a pristine reference tree against the original archive; run scripts from independent byte-identical copies because the tests themselves mutate fixtures.',
    'Run every original shell driver with its unchanged assertions before any deployed application adaptation.',
    'Record native build-time and deployed application phases separately; never treat native-only success as a deployed runtime pass.',
    'Map every exact runtime invocation, including transient generated executables, to the installed CLI. Reject unmapped commands explicitly.',
    'Keep original feature/disabled gates visible and record skipped bodies separately.',
    'The cache transfer test uses its original local mock server and credentials; do not send it to a real service.',
    'Retain failure workspaces, logs and hashes; remove only successful generated copies when needed for disk headroom.',
  ],
};
writeFileSync(outputFile, JSON.stringify(output, null, 2) + '\n', { flag: 'wx' });
console.log(JSON.stringify({ registered: rows.length, counts }));
