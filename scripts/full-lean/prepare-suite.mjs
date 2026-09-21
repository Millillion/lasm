// Prepare a parallel CTest suite. Upstream source tests and expected files remain
// byte-for-byte unchanged; only generated environment drivers and deadlines vary.
import { readFileSync, writeFileSync, mkdirSync, existsSync, readdirSync, symlinkSync, chmodSync } from 'node:fs';
import { resolve, join, relative } from 'node:path';
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';

import { ensureResourceGuard } from './resource-guard.mjs';
import { verifyDriverArtifacts } from './driver-artifacts.mjs';

await ensureResourceGuard();

const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const output = resolve(option('--output', '.work/full-suite-native'));
const prefix = resolve(option('--prefix', resolveLean(root).prefix));
const backend = option('--backend', 'native');
const driverManifest = option('--compiled-server-driver') && resolve(option('--compiled-server-driver'));
const compiledServerDriver = driverManifest ? JSON.parse(readFileSync(driverManifest)) : undefined;
if (compiledServerDriver) {
  if (compiledServerDriver.version !== 1 || compiledServerDriver.leanCommit !== leanCommit
    || compiledServerDriver.prefix !== prefix || compiledServerDriver.engine !== backend
    || !compiledServerDriver.finishedAt || !compiledServerDriver.artifacts?.[compiledServerDriver.executable])
    throw new Error('The compiled server driver must be a completed build for this exact pinned toolchain');
  if (compiledServerDriver.config && createHash('sha256').update(readFileSync(join(prefix, 'toolchain.json'))).digest('hex')
      !== compiledServerDriver.toolchainConfigSha256)
    throw new Error('The compiled driver toolchain configuration changed');
  const verified = await verifyDriverArtifacts(compiledServerDriver.artifacts);
  if (verified.modified.length) throw new Error(`Compiled driver artifacts changed: ${verified.modified.join(', ')}`);
}
const networkLock = option('--network-lock') && resolve(option('--network-lock'));
if (networkLock) {
  execFileSync('flock', ['--version'], { stdio: 'ignore' });
}
const archiveTool = option('--archive-tool', existsSync(join(prefix, 'bin/llvm-ar')) ? join(prefix, 'bin/llvm-ar') : undefined);
const timeout = Number(option('--timeout', '600'));
if (!Number.isFinite(timeout) || timeout <= 0) throw new Error('Invalid timeout in seconds');
const source = join(output, 'lean4-4.32.0');
const harness = join(output, 'inventory');
const build = join(harness, 'build');
const execution = join(output, 'run');
const digest = bytes => createHash('sha256').update(bytes).digest('hex');
mkdirSync(output, { recursive: true }); mkdirSync(harness, { recursive: true }); mkdirSync(execution, { recursive: true });
const archive = join(root, '.cache/downloads/lean4-v4.32.0.tar.gz');
const expected = JSON.parse(readFileSync(join(root, 'experiments/feasibility/toolchains.json'))).lean.observedSourceArchiveSha256;
if (digest(readFileSync(archive)) !== expected) throw new Error('Upstream source archive checksum mismatch');
if (!existsSync(source)) execFileSync('tar', ['-xf', archive, '-C', output]);
const hashesFile = join(output, 'test-source-hashes.json');
function files(directory) {
  return readdirSync(directory, { withFileTypes: true }).flatMap(e => e.isDirectory() ? files(join(directory,e.name)) : e.isFile() ? [join(directory,e.name)] : []);
}
if (!existsSync(hashesFile)) {
  const paths = [...files(join(source,'tests')), ...files(join(source,'doc/examples'))];
  writeFileSync(hashesFile, JSON.stringify(Object.fromEntries(paths.map(path=>[relative(source,path),digest(readFileSync(path))])), null, 2)+'\n');
}
for (const [path, hash] of Object.entries(JSON.parse(readFileSync(hashesFile))))
  if (!existsSync(join(source,path)) || digest(readFileSync(join(source,path))) !== hash) throw new Error(`Modified upstream test source: ${path}`);

const cmakeQuote = text => `[==[${text}]==]`;
writeFileSync(join(harness,'CMakeLists.txt'), `cmake_minimum_required(VERSION 3.25)
project(LasmFullSuite NONE)
enable_testing()
set(LEAN_SOURCE_DIR ${cmakeQuote(join(source,'src'))})
set(CMAKE_CXX_COMPILER ${cmakeQuote(join(prefix,'bin/clang'))})
set(STAGE 1)
add_custom_target(lean)
add_subdirectory(${cmakeQuote(join(source,'tests'))} tests)
`);
execFileSync('cmake', ['-S',harness,'-B',build], { stdio: ['ignore','pipe','pipe'] });
// Preserve upstream's build-directory convention while selecting the real
// compiler installation. This does not synthesize missing build-system targets.
for (const name of ['bin','lib','include','share']) if (!existsSync(join(build,name)) && existsSync(join(prefix,name)))
  symlinkSync(join(prefix,name),join(build,name),'dir');
const inventory = JSON.parse(execFileSync('ctest',['--show-only=json-v1','--test-dir',build], { encoding:'utf8',maxBuffer:32*1024*1024 }));
writeFileSync(join(output,'upstream-registrations.json'),JSON.stringify(inventory,null,2)+'\n');
// Upstream deliberately omits these five tests as flaky/nondeterministic. Keep
// the default registrations exact, but allow a separate, explicitly identified
// run of their unchanged drivers instead of silently claiming they were tested.
const extraRegistrations = args.includes('--include-excluded') ? [
  'elab/async_select_channel.lean', 'elab/sync_mutex.lean',
  'pkg/signal', 'pkg/test_extern', 'pkg/user_ext',
] : [];
for (const name of extraRegistrations) {
  const isFile = name.endsWith('.lean');
  const directory = join(source, 'tests', isFile ? 'elab' : name);
  inventory.tests.push({ name,
    command: ['/usr/bin/bash', join(source, 'tests/with_stage1_test_env.sh'),
      join(directory, 'run_test.sh'), ...(isFile ? [name.slice('elab/'.length)] : [])],
    properties: [{ name: 'WORKING_DIRECTORY', value: directory }, { name: 'RUN_SERIAL', value: true }],
  });
}
// The release's lean.mk embeds its build machine's LLVM archive-tool path.
// A make command-line variable fixes this relocation without editing that file.
const makeFlags = archiveTool ? `LEAN_AR=${archiveTool.replaceAll('\\', '\\\\').replaceAll(' ', '\\ ')}` : '';
const shellQuote = value => "'" + value.replaceAll("'", "'\\''") + "'";
const sourcePath = [join(source, 'src/lake'), join(source, 'src')].join(':');
const rewriteEnvironment = text => text.replaceAll(`SRC_DIR='${harness}'`, `SRC_DIR='${join(source,'src')}'`)
  .replaceAll(`SCRIPT_DIR='${harness}/../script'`, `SCRIPT_DIR='${join(source,'script')}'`);
const originalEnvironment = join(source,'tests/with_stage1_test_env.sh');
const environment = join(output,'with-test-environment.sh');
const addEnvironment = text => rewriteEnvironment(text).replace('export ',
  `export LEAN_SRC_PATH=${shellQuote(sourcePath)} MAKEFLAGS=${shellQuote(makeFlags)} `);
writeFileSync(environment, addEnvironment(readFileSync(originalEnvironment,'utf8')));
let harnessArtifacts;
if (compiledServerDriver) {
  const driverSource = join(source, 'tests/server_interactive/run_test.lean');
  if (digest(readFileSync(driverSource)) !== compiledServerDriver.sourceSha256)
    throw new Error('Compiled driver does not match the unchanged upstream source');
  const shimDirectory = join(output, 'compiled-driver-bin');
  mkdirSync(shimDirectory, { recursive: true });
  const shim = join(shimDirectory, 'lean');
  writeFileSync(shim, `#!/usr/bin/env bash
if [ "$PWD" = ${shellQuote(join(source, 'tests/server_interactive'))} ] && [ "$#" -eq 4 ] && [ "$1" = '-Dlinter.all=false' ] && [ "$2" = '--run' ] && [ "$3" = 'run_test.lean' ]; then
  export LEAN_NUM_THREADS="\${LEAN_NUM_THREADS:-4}"
  export LEAN_STACK_SIZE_KB="\${LEAN_STACK_SIZE_KB:-65536}"
  exec ${shellQuote(compiledServerDriver.executable)} "$4"
fi
exec ${shellQuote(join(prefix, 'bin/lean'))} "$@"
`);
  chmodSync(shim, 0o755);
  const current = readFileSync(environment, 'utf8'), needle = " PATH='";
  if (current.split(needle).length !== 2) throw new Error('Upstream PATH environment layout changed');
  writeFileSync(environment, current.replace(needle, ` PATH=${shellQuote(shimDirectory)}:'`));
  harnessArtifacts = { ...compiledServerDriver.artifacts,
    [driverManifest]: digest(readFileSync(driverManifest)), [shim]: digest(readFileSync(shim)),
    [environment]: digest(readFileSync(environment)) };
}
const testExternDriver = join(output, 'test-extern-driver.sh');
if (extraRegistrations.length) writeFileSync(testExternDriver,
  `# The original test intentionally pipes a failing Lake build into its error checker.\n` +
  `# util.sh enables pipefail, which otherwise exits before the expected-output comparison.\n` +
  `set +o pipefail\ncd ${shellQuote(join(source, 'tests/pkg/test_extern'))}\n` +
  `source ${shellQuote(join(source, 'tests/pkg/test_extern/run_test.sh'))}\n`);
const registered = [];
for (const entry of inventory.tests) {
  let command = entry.command.map(part => part === originalEnvironment ? environment : addEnvironment(part));
  if (extraRegistrations.includes(entry.name) && entry.name === 'pkg/test_extern') command[2] = testExternDriver;
  // These original tests bind fixed loopback ports. A lock shared by separate
  // engine runs prevents their unmodified servers from colliding with each other.
  if (networkLock && /^elab\/async_(tcp|udp).*\.lean$/.test(entry.name)) command = ['flock', networkLock, ...command];
  registered.push({name:entry.name,command,properties:entry.properties});
}
const lines = registered.flatMap(entry => {
  const result = [`add_test(${cmakeQuote(entry.name)} ${entry.command.map(cmakeQuote).join(' ')})`];
  for (const property of entry.properties ?? []) {
    if (!['WORKING_DIRECTORY','RUN_SERIAL','WILL_FAIL','DISABLED','PASS_REGULAR_EXPRESSION','FAIL_REGULAR_EXPRESSION'].includes(property.name)) continue;
    const value = Array.isArray(property.value) ? property.value.join(';') : String(property.value);
    result.push(`set_tests_properties(${cmakeQuote(entry.name)} PROPERTIES ${property.name} ${cmakeQuote(value)})`);
  }
  const existingEnvironment = entry.properties?.find(property => property.name === 'ENVIRONMENT')?.value ?? [];
  const testEnvironment = [...(Array.isArray(existingEnvironment) ? existingEnvironment : [existingEnvironment]), 'LASM_UPSTREAM_TEST=' + entry.name];
  // CTest's script reader supports set_tests_properties, not CMake's TEST
  // set_property registry. Preserve upstream variables in the same property.
  result.push(`set_tests_properties(${cmakeQuote(entry.name)} PROPERTIES ENVIRONMENT ${cmakeQuote(testEnvironment.join(';'))})`);
  result.push(`set_tests_properties(${cmakeQuote(entry.name)} PROPERTIES TIMEOUT ${timeout})`);
  return result;
});
writeFileSync(join(execution,'CTestTestfile.cmake'),lines.join('\n')+'\n');
writeFileSync(join(output,'parallel-suite.json'),JSON.stringify({leanCommit,backend,prefix,source,archiveSha256:expected,
  ...(compiledServerDriver ? { compiledServerDriver, harnessArtifacts } : {}),
  registered:registered.length,extraRegistrations,networkLock,timeoutSeconds:timeout,testSourceHashes:hashesFile,
  changes:['Generated environment points to the selected toolchain and isolated source copy.',
    'LEAN_SRC_PATH selects the matching upstream source tree for source-location and language-server tests.',
    'Harness-only run/test environment tags permit cleanup of leftover subprocesses after a test finishes.',
    ...(compiledServerDriver ? ['The exact server_interactive run_test.lean invocation uses its unchanged source compiled ahead of time in the selected engine. Server/compiler children and expected outputs are unchanged. This is a distinct optional harness; its driver artifacts are verified before and after each run.'] : []),
    ...(networkLock ? [`A shared flock at ${networkLock} serializes the original fixed-port TCP/UDP tests across engine runs.`] : []),
    ...(extraRegistrations.length ? ['Five tests excluded as flaky/nondeterministic by upstream CMake are explicitly added with their original drivers and serial execution.',
      'A parallel wrapper disables inherited pipefail for pkg/test_extern so its intentional failing build reaches the unchanged expected-output comparison; the original driver is sourced without edits.'] : []),
    ...(archiveTool ? [`MAKEFLAGS supplies LEAN_AR=${archiveTool} instead of the release builder path embedded in lean.mk.`] : []),
    'CTest timeout is explicit; no test or expected-output source is edited.'],
  execution,tests:registered},null,2)+'\n');
console.log(JSON.stringify({backend,registered:registered.length,execution,timeoutSeconds:timeout}));
