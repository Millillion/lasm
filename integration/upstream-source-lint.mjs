// Execute the original source-only registration against a complete archive.
// Its Git index is a parallel harness adaptation, never the Lasm checkout.
import assert from 'node:assert/strict';
import { mkdirSync, readFileSync, writeFileSync, existsSync, lstatSync, readlinkSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';
import { provisionGit, managedGitEnvironment } from '../src/managed-git.mjs';
import { provisionPython } from '../src/managed-python.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';

await ensureResourceGuard();
if (!process.argv[2]) throw new Error('Supply a new output directory');
const output = resolve(process.argv[2]), source = join(output, 'source');
if (existsSync(output)) throw new Error('Preserve previous lint evidence');
mkdirSync(source, { recursive: true });
const inventory = JSON.parse(readFileSync('docs/evidence/lean-4.34-upstream-application-inventory.json'));
const original = JSON.parse(readFileSync('docs/evidence/lean-4.34-upstream-source-files.json'));
const tests = inventory.tests.filter(test => test.category === 'source-lint');
assert.equal(tests.length, 1); assert.equal(tests[0].source, 'tests/lint.py');
const archive = resolve('.cache/downloads/lean4-v4.34.0.tar.gz');
assert.equal(await hashFile(archive), inventory.sourceArchiveSha256);
execFileSync('tar', ['-xzf', archive, '-C', source, '--strip-components=1'], { stdio: 'inherit' });
async function verifyOriginals() {
  let checked = 0;
  for (const [name, expected] of Object.entries(original)) {
    const file = join(source, name), info = lstatSync(file);
    if ('symlink' in expected) {
      assert.ok(info.isSymbolicLink()); assert.equal(readlinkSync(file), expected.symlink);
    } else { assert.ok(info.isFile()); assert.equal(await hashFile(file), expected.sha256, name); }
    checked++;
  }
  return checked;
}
const before = await verifyOriginals(), git = await provisionGit(), python = await provisionPython();
const config = join(output, 'empty-gitconfig'); writeFileSync(config, '');
const env = managedGitEnvironment(git, { ...process.env, GIT_CONFIG_GLOBAL: config,
  GIT_CONFIG_NOSYSTEM: '1', GIT_TERMINAL_PROMPT: '0', PYTHONDONTWRITEBYTECODE: '1' });
for (const name of ['GIT_DIR', 'GIT_WORK_TREE', 'GIT_INDEX_FILE']) delete env[name];
const gitRun = args => execFileSync(git.executable, args,
  { cwd: source, env, encoding: 'utf8', maxBuffer: 32 * 1024 * 1024, timeout: 120_000 });
gitRun(['init', '--quiet', '--initial-branch=main']);
// Archives contain tracked files, including files otherwise ignored by Git.
// No commit is needed: lint.py only queries the index with git ls-files.
gitRun(['-c', 'core.autocrlf=false', 'add', '--force', '.']);
const tracked = gitRun(['ls-files', '-z']).split('\0').filter(Boolean).length;
const execution = spawnSync(python.executable, ['-I', '-B', join(source, 'tests/lint.py')],
  { cwd: source, env, encoding: 'utf8', timeout: 900_000, maxBuffer: 16 * 1024 * 1024 });
assert.ifError(execution.error);
writeFileSync(join(output, 'stdout.txt'), execution.stdout); writeFileSync(join(output, 'stderr.txt'), execution.stderr);
const changed = gitRun(['diff', '--name-only']);
const untracked = gitRun(['ls-files', '--others', '--exclude-standard']);
const after = await verifyOriginals();
const report = { scope: 'Unchanged upstream source lint using managed native Python/Git; no deployed runtime pass implied',
  test: tests[0], lean: inventory.lean, leanCommit: inventory.leanCommit,
  sourceArchiveSha256: inventory.sourceArchiveSha256,
  adaptation: 'Recreate an index of every file from the complete official source archive because lint.py uses git ls-files. No source file, root toolchain pin, assertion or expected output is changed.',
  gitIdentity: git.identity, pythonIdentity: python.identity, trackedFiles: tracked,
  originalEntries: { before, after }, changed, untracked,
  execution: { code: execution.status, signal: execution.signal, stdout: execution.stdout, stderr: execution.stderr },
  resourceReport: process.env.LASM_RESOURCE_REPORT, recordedAt: new Date().toISOString() };
writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
assert.equal(changed, ''); assert.equal(untracked, ''); assert.equal(execution.status, 0);
