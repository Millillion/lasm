// Preserve a completed native CI bootstrap for subsequent distribution work.
// This is a build checkpoint; it does not yet supply a relocatable toolchain.
import assert from 'node:assert/strict';
import { appendFileSync, copyFileSync, cpSync, existsSync, mkdirSync, readFileSync,
  readdirSync, statSync, statfsSync, writeFileSync } from 'node:fs';
import { join, resolve, extname } from 'node:path';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { verifyNativeProgram } from '../../src/native-program.mjs';
import { packCompletedTree } from './tree-archive.mjs';

await ensureResourceGuard();
assert.equal(process.platform + '-' + process.arch, 'win32-arm64');
const build = resolve('.work/windows-arm64-bootstrap');
const prefix = join(build, 'build/stage1'), source = join(build, 'lean4');
const output = resolve('.work/windows-arm64-completed-lean');
const archive = resolve('.work/windows-arm64-lean-stage1.tgz');
assert.ok(!existsSync(output) && !existsSync(archive), 'Preserve previous completed build evidence');
const resources = JSON.parse(readFileSync('.work/windows-arm64-bootstrap-resources.json'));
assert.equal(resources.status, 'passed', 'Only a fully completed bootstrap can be archived');
assert.equal(resources.exitCode, 0);
assert.ok(resources.finishedAt);
const recipe = JSON.parse(readFileSync('.work/windows-arm64-bootstrap-cache/identity.json'));
assert.equal(recipe.leanCommit, '293d5d0c0c3f3dded4688b3ccd6a33939ac5102b');
assert.equal(recipe.platform + '-' + recipe.arch, 'win32-arm64');
for (const [file, sha256] of Object.entries(recipe.files)) assert.equal(await hashFile(file), sha256);
for (const program of ['lean.exe', 'lake.exe', 'leanc.exe'])
  await verifyNativeProgram(join(prefix, 'bin', program), 'win32', 'arm64');

// Match the upstream installed layout, leaving CMake objects and unrelated
// build directories behind. Dereference source-tree links into ordinary files.
const trees = ['bin', 'include', 'lib/lean'];
if (existsSync(join(prefix, 'share'))) trees.push('share');
const sourceFilter = file => statSync(file).isDirectory() || ['.lean', '.md'].includes(extname(file));
let contentBytes = 0;
function sizeTree(directory, filter = () => true) {
  for (const name of readdirSync(directory)) {
    const file = join(directory, name);
    if (!filter(file)) continue;
    const info = statSync(file);
    if (info.isDirectory()) sizeTree(file, filter);
    else { assert.ok(info.isFile()); contentBytes += info.size; }
  }
}
for (const tree of trees) sizeTree(join(prefix, tree));
sizeTree(join(source, 'src'), sourceFilter);
assert.ok(contentBytes <= 12 * 1024 ** 3, 'Completed bootstrap exceeds the staging ceiling');
const space = statfsSync(resolve('.work'));
assert.ok(space.bavail * space.bsize >= contentBytes + 4 * 1024 ** 3,
  'Preserve disk space for the staging copy, bounded archive and 2 GiB runner reserve');
mkdirSync(output);
for (const tree of trees) cpSync(join(prefix, tree), join(output, tree), { recursive: true, dereference: true });
cpSync(join(source, 'src'), join(output, 'src/lean'), { recursive: true, dereference: true, filter: sourceFilter });
copyFileSync(join(source, 'LICENSE'), join(output, 'LICENSE'));
const notices = join(output, 'bootstrap-evidence'); mkdirSync(notices);
for (const file of ['msys2-package-versions.txt', 'windows-manifest.patch', 'lean-pe.txt', 'main-pe.txt', 'Main.lean'])
  copyFileSync(join(build, file), join(notices, file));
const scope = 'Completed CI bootstrap checkpoint; external MSYS2 DLLs, native compiler relocation and leantar still require distribution work';
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ scope, recipe, resources,
  run: { repository: process.env.GITHUB_REPOSITORY, id: process.env.GITHUB_RUN_ID,
    attempt: process.env.GITHUB_RUN_ATTEMPT, commit: process.env.GITHUB_SHA },
}, null, 2) + '\n');
const identity = { kind: 'native-lean-completed-stage1', recipe,
  archiver: await hashFile('scripts/ci/windows-lean-stage.mjs'),
  treeArchive: await hashFile('scripts/ci/tree-archive.mjs') };
const packed = await packCompletedTree(output, archive, { identity,
  maximumContentBytes: 12 * 1024 ** 3, maximumArchiveBytes: 2 * 1024 ** 3 });
const report = { scope, lean: recipe.lean, leanCommit: recipe.leanCommit, ...packed,
  archive: '.work/windows-arm64-lean-stage1.tgz', createdAt: new Date().toISOString() };
writeFileSync(archive + '.json', JSON.stringify(report, null, 2) + '\n');
if (process.env.GITHUB_OUTPUT) appendFileSync(process.env.GITHUB_OUTPUT,
  `identity=${packed.identitySha256}\nsha256=${packed.sha256}\n`);
console.log(JSON.stringify(report));
