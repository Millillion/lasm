// A separate installed-package test of the real CLI -> Lake -> managed Git
// path. Loopback fixture hosting runs outside the prerequisite-isolation test;
// the preceding cold/installed/deployment checks establish that requirement.
import assert from 'node:assert/strict';
import { readFile, writeFile, mkdir } from 'node:fs/promises';
import { join, resolve } from 'node:path';
import { pathToFileURL } from 'node:url';
import { Worker } from 'node:worker_threads';
import { execFile } from 'node:child_process';
import { promisify } from 'node:util';
import { createInstallerCertificate } from '../../test/fixtures/create-installer-certificate.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
const execute = promisify(execFile);
const platform = { linux: 'linux', darwin: 'darwin', win32: 'windows' }[process.platform];
const acceptance = JSON.parse(await readFile(`.work/node-${platform}-acceptance/result.json`, 'utf8'));
assert.equal(acceptance.passed, true, 'Complete Node/npm-only acceptance before this network control');
const { compiler, tools, support } = acceptance.installation;
const output = resolve('.work/node-network'), repository = join(output, 'source'), bare = join(output, 'bare'), project = join(output, 'project');
await mkdir(output); await mkdir(repository); await mkdir(project);
const reportPath = '.work/node-network-result.json';
const result = { schema: 1, platform: process.platform + '-' + process.arch, archiveSha256: acceptance.archiveSha256,
  packageVersion: acceptance.installation.packageVersion, startedAt: new Date().toISOString(),
  scope: 'Installed CLI/Lake/managed-Git private CA and authenticated proxy control; prerequisite isolation is tested separately',
  steps: [], requests: [], passed: false };
const save = () => writeFile(reportPath, JSON.stringify(result, null, 2) + '\n');
await save();
const env = { ...process.env, LASM_TOOLCHAIN_CACHE: tools, LEAN_NUM_THREADS: '1', EMCC_CORES: '1', BINARYEN_CORES: '1' };
for (const name of Object.keys(env)) if (/proxy|NODE_EXTRA_CA_CERTS|NODE_TLS_REJECT_UNAUTHORIZED|GIT_SSL|GIT_CONFIG/i.test(name)) delete env[name];
await writeFile(join(output, 'empty-git-config'), '');
env.GIT_CONFIG_GLOBAL = join(output, 'empty-git-config'); env.GIT_CONFIG_NOSYSTEM = '1';
const { provisionGit, managedGitEnvironment } = await import(pathToFileURL(join(compiler, 'src/managed-git.mjs')));
const git = await provisionGit({ cache: tools });
const gitEnv = managedGitEnvironment(git, env);
const invoke = async (label, program, args, cwd, environment, expectSuccess = true) => {
  const started = performance.now(); let actual;
  try { const r = await execute(program, args, { cwd, env: environment, encoding: 'utf8', windowsHide: true, timeout: 1200_000, maxBuffer: 2 * 1024 * 1024 }); actual = { code: 0, ...r }; }
  catch (e) { actual = { code: e.code, signal: e.signal, stdout: e.stdout ?? '', stderr: e.stderr ?? '' }; }
  // This fixture never includes credentials in URLs printed by Git or Lean.
  const log = JSON.stringify(actual);
  assert.ok(!log.includes('ephemeral-proxy-password'), 'Do not record proxy credentials');
  result.steps.push({ label, seconds: (performance.now() - started) / 1000, ...actual }); await save();
  if (expectSuccess) assert.equal(actual.code, 0, label + ': ' + actual.stderr);
  return actual;
};
await writeFile(join(repository, 'lakefile.toml'), 'name = "network_fixture"\nversion = "0.1.0"\n[[lean_lib]]\nname = "PrivateLibrary"\n');
await writeFile(join(repository, 'lean-toolchain'), `leanprover/lean4:v${support.lean}\n`);
await writeFile(join(repository, 'PrivateLibrary.lean'), 'def privateAnswer : Nat := 6 * 7\n');
await invoke('fixture git init', git.executable, ['init', '--initial-branch=main'], repository, gitEnv);
await invoke('fixture git add', git.executable, ['add', '.'], repository, gitEnv);
await invoke('fixture unsigned commit', git.executable, ['-c', 'commit.gpgsign=false', '-c', 'user.name=Lasm Fixture', '-c', 'user.email=fixture@example.invalid', 'commit', '-m', 'Private dependency fixture'], repository, gitEnv);
const revision = (await invoke('fixture revision', git.executable, ['rev-parse', 'HEAD'], repository, gitEnv)).stdout.trim();
await invoke('fixture bare repository', git.executable, ['clone', '--bare', repository, bare], output, gitEnv);
await invoke('fixture HTTP info', git.executable, ['--git-dir=' + bare, 'update-server-info'], output, gitEnv);
const fixture = createInstallerCertificate(), ca = join(output, 'ca.pem'); await writeFile(ca, fixture.certificate);
const credential = 'fixture:ephemeral-proxy-password';
const worker = new Worker(new URL('./network-fixture-worker.mjs', import.meta.url), { workerData: {
  repository: bare, certificate: fixture.certificate, privateKey: fixture.privateKey.export({ type: 'pkcs8', format: 'pem' }), proxyCredential: credential,
} });
worker.on('message', message => { if (message.type !== 'ready') result.requests.push(message); });
try {
  const ready = await new Promise((resolve, reject) => { worker.once('message', resolve); worker.once('error', reject); });
  assert.equal(ready.type, 'ready');
  await writeFile(join(project, 'lean-toolchain'), `leanprover/lean4:v${support.lean}\n`);
  await writeFile(join(project, 'lakefile.toml'), `name = "network_app"\n[[require]]\nname = "network_fixture"\ngit = "${ready.url}"\nrev = "${revision}"\n[[lean_exe]]\nname = "main"\nroot = "Main"\n`);
  await writeFile(join(project, 'Main.lean'), 'import PrivateLibrary\ndef main : IO Unit := IO.println s!"Network dependency: {privateAnswer}"\n');
  const networkEnv = { ...env, NODE_USE_ENV_PROXY: '1', HTTPS_PROXY: `http://${credential}@127.0.0.1:${ready.proxyPort}`, NO_PROXY: '' };
  const cli = join(compiler, 'bin/lasm.mjs');
  const rejected = await invoke('CLI rejects unknown private Git CA', process.execPath, [cli, 'Main.lean'], project, networkEnv, false);
  assert.notEqual(rejected.code, 0); assert.match(rejected.stderr + rejected.stdout, /certificate|SSL|TLS|issuer|CERT/i);
  const trusted = await invoke('CLI clones private Git dependency through authenticated proxy', process.execPath, [cli, 'Main.lean'], project,
    { ...networkEnv, NODE_EXTRA_CA_CERTS: ca, GIT_SSL_CAINFO: ca });
  assert.equal(trusted.stdout, 'Network dependency: 42\n');
  assert.ok(result.requests.some(r => r.type === 'proxy-connect' && r.authenticated));
  assert.ok(result.requests.some(r => r.type === 'git-request' && r.path.endsWith('/info/refs')));
  assert.ok(result.requests.some(r => r.type === 'git-request' && r.path.includes('/objects/')));
  result.git = { identity: git.identity, version: git.version, executable: git.executable };
  result.passed = true;
} finally { await worker.terminate(); result.finishedAt = new Date().toISOString(); await save(); console.log(JSON.stringify(result, null, 2)); }
