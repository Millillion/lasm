// Linux maintainer acceptance. Landlock denies access to the source checkout,
// existing toolchains, global node_modules, and shell/build utilities while
// keeping every descendant inside the unchanged resource guard.
import { mkdirSync, existsSync, readFileSync, writeFileSync, copyFileSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { ensureResourceGuard } from './full-lean/resource-guard.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { checkDeployment, linuxIsolationFiles } from './check-deployed-application.mjs';

await ensureResourceGuard();
const root = fileURLToPath(new URL('../', import.meta.url));
const [outputArg, archiveArg, version = '4.34.0', oracleArg, ...extra] = process.argv.slice(2);
if (!outputArg || !archiveArg || process.platform !== 'linux' || process.arch !== 'x64' || extra.length ||
    !/^\d+\.\d+\.\d+$/.test(version) || version !== '4.34.0' && !oracleArg)
  throw new Error('Supply NEW_OUTPUT CANDIDATE_TARBALL [LEAN_VERSION MATCHING_NATIVE_CONTROLS] on the Linux x64 maintainer host');
const output = resolve(outputArg), archive = resolve(archiveArg);
if (existsSync(output)) throw new Error('Use a new output directory to preserve evidence');
const workspace = join(output, 'workspace'), temporary = join(output, 'tmp');
for (const directory of [workspace, temporary]) mkdirSync(directory, { recursive: true });
const read = path => ({ path, access: 'read' }), execute = path => ({ path, access: 'execute' }), write = path => ({ path, access: 'write' });
const osFiles = linuxIsolationFiles();
const oracle = oracleArg ? resolve(oracleArg) : join(root, '.work/managed-application-node-r2/controls.json');
const fixture = join(root, 'test/fixtures/application-main/Main.lean'), control = join(root, 'integration/installed-application.mjs');
const controlCopy = join(workspace, 'control.mjs'), fixtureCopy = join(workspace, 'fixture.lean'), oracleCopy = join(workspace, 'expected.json');
copyFileSync(control, controlCopy); copyFileSync(fixture, fixtureCopy); copyFileSync(oracle, oracleCopy);
writeFileSync(join(workspace, 'package.json'), '{"private":true,"type":"module"}\n');
const environment = { PATH: dirname(process.execPath), LANG: 'C.UTF-8', TMPDIR: temporary, LEAN_NUM_THREADS: '2' };
const installationRules = join(output, 'installation-rules.json');
writeFileSync(installationRules, JSON.stringify({ allow: [...osFiles, execute(resolve(dirname(process.execPath), '..')),
  read(archive), write(workspace), write(temporary)], environment }, null, 2) + '\n');
const restrict = join(root, 'scripts/full-lean/restrict-filesystem.py');
execFileSync('/usr/bin/python3', [restrict, installationRules, '--', process.execPath, controlCopy, workspace, archive, fixtureCopy, oracleCopy,
  join(root, 'package.json'), version], { stdio: 'inherit', timeout: 2700_000 });
const deployment = await checkDeployment(join(output, 'deployment'), output);
const result = { installation: JSON.parse(readFileSync(join(workspace, 'result.json'), 'utf8')),
  archive, archiveSha256: await hashFile(archive), deployment, leanVersion: version,
  nativeControls: { path: oracle, sha256: await hashFile(oracle) },
  installationRules, resourceReport: process.env.LASM_RESOURCE_REPORT, recordedAt: new Date().toISOString() };
writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
