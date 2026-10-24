import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, rmSync, chmodSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { lakeGitRequirement, lakeRequirements, checkSystemGit, findSystemGit, GitRequiredError, gitInstallHelp } from '../src/system-git.mjs';

function project(t, files) {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-system-git-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  for (const [name, text] of Object.entries(files)) {
    mkdirSync(join(directory, name, '..'), { recursive: true });
    writeFileSync(join(directory, name), text);
  }
  return directory;
}

test('programs and Lake projects without dependencies need no Git', t => {
  const toml = project(t, { 'lakefile.toml': 'name = "greeting"\n[[lean_lib]]\nname = "Greeting"\n[[lean_exe]]\nname = "hello"\nroot = "Main"\n' });
  assert.equal(lakeGitRequirement(toml), null);
  const lean = project(t, { 'lakefile.lean': 'import Lake\nopen Lake DSL\n-- require mathlib from git "x"\n/- require x from git "y" -/\npackage p\nlean_lib P\n' });
  assert.equal(lakeGitRequirement(lean), null);
  // No dependency means no Git lookup at all.
  assert.deepEqual(checkSystemGit(toml, { find: () => assert.fail('Git must not be looked up') }), { needed: false });
});

test('Git, Reservoir and transitive dependencies need Git; path dependencies do not', t => {
  const toml = project(t, { 'lakefile.toml': 'name = "app"\n[[require]]\nname = "dependency"\ngit = "https://example.invalid/d.git"\nrev = "main"\n' });
  assert.equal(lakeGitRequirement(toml), 'Git dependency dependency');
  const reservoir = project(t, { 'lakefile.toml': 'name = "app"\n[[require]]\nname = "batteries"\nscope = "leanprover-community"\n' });
  assert.equal(lakeGitRequirement(reservoir), 'Reservoir dependency batteries');
  const lean = project(t, { 'lakefile.lean': 'import Lake\nopen Lake DSL\npackage p\nrequire "leanprover-community" / "batteries" @ git "main"\nlean_lib P\n' });
  assert.equal(lakeGitRequirement(lean), 'Reservoir dependency leanprover-community/batteries');
  const fromGit = project(t, { 'lakefile.lean': 'import Lake\nopen Lake DSL\npackage p\nrequire aesop from git\n  "https://github.com/leanprover-community/aesop" @ "v4.35.0"\n' });
  assert.equal(lakeGitRequirement(fromGit), 'Git dependency aesop');
  const local = project(t, {
    'lakefile.lean': 'import Lake\nopen Lake DSL\npackage p\nrequire helper from "vendor/git-helper"\n',
    'vendor/git-helper/lakefile.toml': 'name = "helper"\n[[lean_lib]]\nname = "Helper"\n',
  });
  assert.deepEqual(lakeRequirements(local), [{ name: 'helper', path: 'vendor/git-helper', git: false, scope: false }]);
  assert.equal(lakeGitRequirement(local), null);
  const transitive = project(t, {
    'lakefile.toml': 'name = "app"\n[[require]]\nname = "helper"\npath = "helper"\n',
    'helper/lakefile.toml': 'name = "helper"\n[[require]]\nname = "zipCommon"\ngit = "https://example.invalid/z.git"\n',
  });
  assert.equal(lakeGitRequirement(transitive), 'Git dependency zipCommon');
  const manifest = project(t, { 'lakefile.toml': 'name = "app"\n',
    'lake-manifest.json': JSON.stringify({ version: '1.1.0', packages: [{ type: 'git', name: 'batteries', url: 'x', rev: 'y' }] }) });
  assert.equal(lakeGitRequirement(manifest), 'Git dependency batteries');
});

test('without a working git, Lasm stops with the install command for each OS', t => {
  const directory = project(t, { 'lakefile.toml': 'name = "app"\n[[require]]\nname = "dependency"\ngit = "https://example.invalid/d.git"\n' });
  assert.throws(() => checkSystemGit(directory, { find: () => null }), error => {
    assert.ok(error instanceof GitRequiredError);
    assert.equal(error.code, 'LASM_GIT_REQUIRED');
    assert.match(error.message, /needs Git \(Git dependency dependency\), and no working `git` was found on PATH/);
    for (const line of ['xcode-select --install', 'brew install git', 'sudo apt install git', 'sudo dnf install git',
      'winget install --id Git.Git -e', 'https://git-scm.com']) assert.ok(error.message.includes(line), line);
    assert.ok(error.message.endsWith(gitInstallHelp));
    return true;
  });
  // An empty PATH, or a git that fails (as macOS's stub does without the Command
  // Line Tools), is no Git.
  assert.equal(findSystemGit({ PATH: '' }), null);
  if (process.platform !== 'win32') {
    const stub = project(t, { 'bin/git': '#!/bin/sh\necho "xcrun: error: invalid active developer path" >&2\nexit 1\n' });
    chmodSync(join(stub, 'bin/git'), 0o755);
    assert.equal(findSystemGit({ PATH: join(stub, 'bin') }), null);
    const working = project(t, { 'bin/git': '#!/bin/sh\necho "git version 2.99.0"\n' });
    chmodSync(join(working, 'bin/git'), 0o755);
    assert.deepEqual(findSystemGit({ PATH: join(working, 'bin') }), { executable: join(working, 'bin/git'), version: 'git version 2.99.0' });
    assert.equal(checkSystemGit(directory, { env: { PATH: join(working, 'bin') } }).needed, true);
  }
});
