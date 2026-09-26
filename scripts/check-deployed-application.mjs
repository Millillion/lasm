// Run an existing installed application outside its checkout with source and
// build-tool contents denied by the kernel. This can resume deployment acceptance
// without repeating a successful multi-gigabyte cold tool installation.
import assert from 'node:assert/strict';
import { cpSync, copyFileSync, existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { tmpdir } from 'node:os';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { ensureResourceGuard } from './full-lean/resource-guard.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
export const linuxIsolationFiles = () => [
  ...[`/usr/lib/${process.arch === 'arm64' ? 'aarch64' : 'x86_64'}-linux-gnu`, '/usr/lib64']
    .filter(existsSync).map(path => ({ path, access: 'execute' })),
  { path: '/proc', access: 'read' },
  { path: '/sys/devices/system/cpu', access: 'read' },
  { path: '/dev', access: 'write' },
  ...['/etc/ld.so.cache', '/etc/passwd', '/etc/group', '/etc/nsswitch.conf', '/etc/resolv.conf',
    '/etc/hosts', '/etc/ssl/certs', '/etc/ssl/openssl.cnf'].filter(existsSync).map(path => ({ path, access: 'read' })),
];

export async function checkDeployment(output, installed) {
  await ensureResourceGuard();
  if (process.platform !== 'linux' || !['x64', 'arm64'].includes(process.arch)) throw new Error('This isolation control requires Linux x64 or ARM64');
  if (existsSync(output)) throw new Error('Use a new deployment evidence directory');
  mkdirSync(output, { recursive: true });
  const installationFile = join(installed, 'workspace/result.json');
  const installation = JSON.parse(readFileSync(installationFile, 'utf8'));
  const isolated = mkdtempSync(join(tmpdir(), 'lasm-deployment-'));
  const deployment = join(isolated, 'dist'), engine = join(isolated, 'node');
  const cwd = join(isolated, 'data'), temporary = join(isolated, 'tmp');
  for (const path of [cwd, temporary]) mkdirSync(path);
  // Node's worker preloader searches the current directory's package scope,
  // including for absolute --require paths. An artificial denied package.json
  // above cwd breaks Node itself. Use a real separate deployment directory.
  copyFileSync(process.execPath, engine);
  cpSync(installation.output, deployment, { recursive: true });
  const rules = join(output, 'deployment-rules.json');
  writeFileSync(rules, JSON.stringify({ allow: [...linuxIsolationFiles(),
    { path: engine, access: 'execute' }, { path: deployment, access: 'execute' },
    { path: cwd, access: 'write' }, { path: temporary, access: 'write' }],
    environment: { PATH: '', LANG: 'C.UTF-8', TMPDIR: temporary, LEAN_NUM_THREADS: '2' } }, null, 2) + '\n');
  const restrict = join(root, 'scripts/full-lean/restrict-filesystem.py');
  const run = args => {
    const result = spawnSync('/usr/bin/python3', [restrict, rules, '--', engine, ...args],
      { cwd, encoding: 'utf8', timeout: 90_000 });
    assert.ifError(result.error);
    assert.equal(result.signal, null, 'deployment must exit normally');
    return { code: result.status, stdout: result.stdout,
      stderr: result.stderr.replace(/^\[lasm\] Landlock ABI \d+: filesystem access restricted before execution\n/, '') };
  };
  const deniedFiles = [join(root, 'package.json'), join(installed, 'workspace/project/Main.lean'),
    join(installation.toolchains, 'artifacts', installation.build.nativeLeanIdentity, 'bin/lean'),
    join(installation.compiler, 'bin/lasm.mjs'), join(installation.output, 'program.wasm')];
  const denialControl = run(['--input-type=module', '-e',
    `import assert from 'node:assert/strict'; import {readFileSync} from 'node:fs';
     for (const file of ${JSON.stringify(deniedFiles)}) assert.throws(() => readFileSync(file), {code:'EACCES'});`]);
  assert.deepEqual(denialControl, { code: 0, stdout: '', stderr: '' });
  const checks = [];
  for (const control of installation.checks) {
    const actual = run([join(deployment, 'main.mjs'), ...control.args]);
    checks.push({ args: control.args, expected: control.expected, actual });
    writeFileSync(join(output, 'controls.json'), JSON.stringify(checks, null, 2) + '\n');
    assert.deepEqual(actual, control.expected);
  }
  const result = { scope: 'Separate copied deployment and Node executable outside the checkout; Landlock denies source, build tools and original output contents. OS libraries and writable data/temp are allowed. Metadata-only stat and network access are not restricted.',
    installationFile, installationSha256: await hashFile(installationFile), node: process.version,
    platform: `${process.platform}-${process.arch}`, build: installation.build,
    wasmSha256: await hashFile(join(deployment, 'program.wasm')), deniedFiles, denialControl, checks,
    rules, isolated, resourceReport: process.env.LASM_RESOURCE_REPORT, recordedAt: new Date().toISOString() };
  writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
  rmSync(isolated, { recursive: true });
  return result;
}

if (process.argv[1] && resolve(process.argv[1]) === fileURLToPath(import.meta.url)) {
  const [output, installed] = process.argv.slice(2);
  if (!output || !installed) throw new Error('Supply NEW_OUTPUT EXISTING_INSTALLATION_OUTPUT');
  console.log(JSON.stringify(await checkDeployment(resolve(output), resolve(installed)), null, 2));
}
