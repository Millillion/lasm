// Prepare an explicit parallel CTest suite for the managed application product.
// The pinned upstream source archive and all 7,669 test/helper entries are checked.
import { mkdirSync, readFileSync, writeFileSync, existsSync, lstatSync, readlinkSync } from 'node:fs';
import { resolve, join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { provisionLean } from '../../src/managed-lean.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
const root = resolve(fileURLToPath(new URL('../../', import.meta.url)));
const [outputArg, category, target, engineArg, compilerArg, filter = '.*'] = process.argv.slice(2);
if (!outputArg || !['compiled-application', 'native-build-time'].includes(category) || !['node', 'deno', 'bun'].includes(target) || !engineArg || !compilerArg)
  throw new Error('Supply NEW_OUTPUT CATEGORY TARGET ENGINE INSTALLED_COMPILER [FILTER]');
const output = resolve(outputArg), compiler = resolve(compilerArg), engine = resolve(engineArg);
if (existsSync(output)) throw new Error('Use a new campaign directory');
const inventoryFile = join(root, 'docs/evidence/lean-4.34-upstream-application-inventory.json');
const sourcesFile = join(root, 'docs/evidence/lean-4.34-upstream-source-files.json');
const inventory = JSON.parse(readFileSync(inventoryFile, 'utf8')), hashes = JSON.parse(readFileSync(sourcesFile, 'utf8'));
const archive = join(root, '.cache/downloads/lean4-v4.34.0.tar.gz');
if (await hashFile(archive) !== inventory.sourceArchiveSha256) throw new Error('Upstream archive changed');
const source = join(output, 'source'), execution = join(output, 'run');
mkdirSync(source, { recursive: true }); mkdirSync(execution);
execFileSync('tar', ['-xzf', archive, '-C', source, '--strip-components=1', '--wildcards',
  '*/tests/*', '*/script/*', '*/doc/examples/*', '*/src/*'], { stdio: 'inherit' });
let verified = 0;
for (const [name, expected] of Object.entries(hashes)) {
  const file = join(source, name), info = lstatSync(file);
  if ('symlink' in expected) {
    if (!info.isSymbolicLink() || readlinkSync(file) !== expected.symlink) throw new Error(`Upstream link changed: ${name}`);
  } else if (!info.isFile() || await hashFile(file) !== expected.sha256) throw new Error(`Upstream file changed: ${name}`);
  verified++;
}
// The upstream repository's root pin points at its own build/stage1, which is
// not a developer toolchain selection. It is not extracted. The test sources
// remain exact; this generated parallel project selects the matching release.
writeFileSync(join(source, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const lean = await provisionLean(source);
if (lean.commit !== inventory.leanCommit) throw new Error('Native control version mismatch');
const tests = inventory.tests.filter(test => test.category === category && new RegExp(filter).test(test.name));
if (!tests.length) throw new Error('No upstream tests matched');
const generatedPins = [];
if (category === 'compiled-application') for (const directory of new Set(tests.map(test => dirname(test.source)))) {
  const pin = join(source, directory, 'lean-toolchain');
  if (existsSync(pin)) throw new Error('Do not replace an upstream pin: ' + pin);
  // tests/lean-toolchain also points at upstream's build/release/stage1. Keep
  // that original file intact and add a nearer, generated release selection in
  // this parallel suite, matching the native driver's explicit PATH selection.
  writeFileSync(pin, 'leanprover/lean4:v4.34.0\n'); generatedPins.push(pin);
}
const environment = { TEST_DIR: join(source, 'tests'), SRC_DIR: join(source, 'src'), SCRIPT_DIR: join(source, 'script'),
  BUILD_DIR: lean.prefix, STAGE: '1', TEST_CTEST: '1',
  PATH: [join(lean.prefix, 'bin'), dirname(process.execPath), process.env.PATH].filter(Boolean).join(':'),
  LASM_COMPILER: compiler, LASM_BUILD_NODE: process.execPath, LASM_APPLICATION_TARGET: target, LASM_APPLICATION_ENGINE: engine,
  LASM_TOOLCHAIN_CACHE: process.env.LASM_TOOLCHAIN_CACHE,
  LEAN_HEADER_SNAPSHOTS: '0', LEANC_OPTS: '', CXX: join(lean.prefix, 'bin/clang++') };
const nativeEnvironment = join(output, 'native-environment.sh');
writeFileSync(nativeEnvironment, '#!/usr/bin/env bash\nsource "$TEST_DIR/util.sh"\ndriver="$1"; shift\nsource "$driver"\n');
const compileDriver = join(root, 'scripts/application-tests/compile-case.sh');
const timeoutSeconds = 900;
const manifest = { schema: 1, lean: inventory.lean, leanCommit: lean.commit, sourceArchiveSha256: inventory.sourceArchiveSha256,
  sourceManifestSha256: await hashFile(sourcesFile), verifiedOriginalFilesAndLinks: verified,
  output, source, execution, category, target, engine, compiler, nativeEnvironment, compileDriver, timeoutSeconds, environment, tests, generatedPins,
  nativeArtifactIdentity: lean.identity, resourceReport: process.env.LASM_RESOURCE_REPORT,
  scope: category === 'compiled-application' ? 'Unchanged native driver followed by installed-CLI AOT execution with original arguments and assertions' : 'Unchanged managed native compiler tests; no deployed runtime pass implied',
  adaptations: ['Generated environment selects the matching managed native toolchain and isolated unchanged source copy.',
    'For applications, the unchanged native compile/interpreter driver runs first; a parallel driver substitutes the installed Lasm CLI and selected engine for deployed compilation/execution.',
    'Original source, init/before/after scripts, expected output, normalization and assertions are preserved.',
    'Generated per-pile lean-toolchain files select the release in this parallel suite; upstream tests/lean-toolchain remains unchanged and refers to an unavailable stage1 build directory.',
    'Upstream compile-disabled cases exit 77 and remain explicitly untested as deployed applications.',
    'Additional compiler flags without an implemented application mapping fail explicitly rather than being dropped.',
    'One CTest job and 900-second case deadline; resource aborts are separate from test failures.',
    'Successful large binaries and per-case caches are removed after recording build identities and Wasm hashes; failed outputs remain.'],
  recordedAt: new Date().toISOString() };
const manifestFile = join(output, 'manifest.json');
writeFileSync(manifestFile, JSON.stringify(manifest, null, 2) + '\n');
const quote = value => `[==[${value}]==]`;
writeFileSync(join(execution, 'CTestTestfile.cmake'), tests.map(test =>
  `add_test(${quote(test.name)} ${[process.execPath, join(root, 'scripts/application-tests/case.mjs'), manifestFile, test.name].map(quote).join(' ')})\n` +
  `set_tests_properties(${quote(test.name)} PROPERTIES TIMEOUT ${timeoutSeconds + 30} SKIP_RETURN_CODE 77 RUN_SERIAL TRUE ENVIRONMENT ${quote('LASM_UPSTREAM_TEST=' + test.name)})`).join('\n') + '\n');
console.log(JSON.stringify({ output, tests: tests.length, category, verified, execution }, null, 2));
