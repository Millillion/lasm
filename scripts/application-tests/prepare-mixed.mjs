// A pristine reference remains immutable while each original shell driver may
// change its own byte-identical fixture copy as the upstream test requires.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { provisionLean } from '../../src/managed-lean.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
import { verifyMixedSources } from './mixed-sources.mjs';
await ensureResourceGuard();
assert.equal(process.platform, 'linux');
const root = resolve(fileURLToPath(new URL('../../', import.meta.url)));
const [outputArg, filter = '.*'] = process.argv.slice(2);
assert.ok(outputArg, 'Supply NEW_OUTPUT [FILTER]');
const output = resolve(outputArg);
assert.ok(!existsSync(output), 'Use a fresh campaign');
const inventoryFile = join(root, 'docs/evidence/lean-4.34-upstream-application-inventory.json');
const sourcesFile = join(root, 'docs/evidence/lean-4.34-upstream-source-files.json');
const ledgerFile = join(root, 'docs/evidence/lean-4.34-mixed-driver-classification.json');
const inventory = JSON.parse(readFileSync(inventoryFile));
const sources = JSON.parse(readFileSync(sourcesFile));
const ledger = JSON.parse(readFileSync(ledgerFile));
assert.equal(ledger.leanCommit, inventory.leanCommit);
const archive = join(root, '.cache/downloads/lean4-v4.34.0.tar.gz');
assert.equal(await hashFile(archive), inventory.sourceArchiveSha256);
const source = join(output, 'source'), execution = join(output, 'run');
mkdirSync(source, { recursive: true }); mkdirSync(execution);
execFileSync('tar', ['-xzf', archive, '-C', source, '--strip-components=1', '--wildcards',
  '*/tests/*', '*/script/*', '*/doc/examples/*', '*/src/*'], { stdio: 'inherit' });
const verified = await verifyMixedSources(source, sources);
assert.deepEqual(verified.modified, []);
writeFileSync(join(source, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const lean = await provisionLean(source);
assert.equal(lean.commit, inventory.leanCommit);
const selected = ledger.tests.filter(test => ['native-build-time', 'upstream-disabled'].includes(test.phase)
  && new RegExp(filter).test(test.name));
assert.ok(selected.length, 'No reviewed native-only mixed drivers selected');
const tests = selected.map(row => {
  const test = inventory.tests.find(test => test.name === row.name);
  assert.ok(test && test.category === 'mixed-driver-review-required');
  assert.equal(test.sha256, row.sourceSha256);
  return { ...test, phase: row.phase, rationale: row.rationale };
});
const nativeEnvironment = join(root, 'scripts/application-tests/mixed-native.sh');
const compileDriver = join(root, 'scripts/application-tests/mixed-case.mjs');
const manifest = { schema: 1, lean: inventory.lean, leanCommit: inventory.leanCommit,
  sourceArchiveSha256: inventory.sourceArchiveSha256, sourceManifestSha256: await hashFile(sourcesFile),
  classificationSha256: await hashFile(ledgerFile), verifiedOriginalFilesAndLinks: verified.checked,
  output, source, execution, category: 'mixed-native-build-time', target: 'native',
  tests, timeoutSeconds: 900, nativeEnvironment, compileDriver, nativeArtifactIdentity: lean.identity,
  additionalHarnessFiles: [fileURLToPath(import.meta.url), join(root, 'scripts/application-tests/mixed-sources.mjs')],
  environment: { BUILD_DIR: lean.prefix, STAGE: '1', TEST_CTEST: '1', LEANC_OPTS: '',
    PATH: [join(lean.prefix, 'bin'), dirname(process.execPath), process.env.PATH].filter(Boolean).join(':'),
    LASM_NATIVE_LEAN: lean.lean, LASM_NATIVE_LAKE: lean.lake, CXX: join(lean.prefix, 'bin/clang++') },
  scope: 'Reviewed native-build-time shell registrations only; no deployed application or API pass implied',
  adaptations: [
    'A pristine extracted reference is checked against all 7,669 original entries before and after the campaign.',
    'Every case starts with an independently copied and verified source tree. Only the unchanged upstream driver mutates its fixtures; these changes are recorded.',
    'Native Lean/Lake are selected by the original CTest environment contract; original stage-directory pins remain unchanged.',
    'One CTest job, one requested Lean worker, one build worker and the existing memory/base-page guards apply.',
    'Git commits made by test fixtures are unsigned through process-local configuration.',
    'The original lock script runs and retains its explicit disabled body; exit 77 records an upstream-disabled result after its zero exit.',
    'Successful generated workspaces are removed after recording hashes, mutations and logs. Failure workspaces remain.',
  ], recordedAt: new Date().toISOString(), resourceReport: process.env.LASM_RESOURCE_REPORT };
const manifestFile = join(output, 'manifest.json');
writeFileSync(manifestFile, JSON.stringify(manifest, null, 2) + '\n');
const quote = value => `[==[${value}]==]`;
writeFileSync(join(execution, 'CTestTestfile.cmake'), tests.map(test =>
  `add_test(${quote(test.name)} ${[process.execPath, compileDriver, manifestFile, test.name].map(quote).join(' ')})\n` +
  `set_tests_properties(${quote(test.name)} PROPERTIES TIMEOUT 930 SKIP_RETURN_CODE 77 RUN_SERIAL TRUE ENVIRONMENT ${quote('LASM_UPSTREAM_TEST=' + test.name)})`
).join('\n') + '\n');
console.log(JSON.stringify({ output, tests: tests.length, verified, scope: manifest.scope }));
