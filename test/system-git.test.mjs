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

test('lakefile.toml requirements: comments, missing names, local paths and later tables', t => {
  const directory = project(t, { 'lakefile.toml': [
    'name = "app" # [[require]] in a comment', '# [[require]]', '# name = "commented"',
    '[[require]]', 'name = "local"', 'path = "vendor/local" # trailing comment',
    '[[ require ]]', '  scope = "community"', '  name = "scoped"',
    '[[require]]', 'git = "https://example.invalid/x.git"',
    '[[lean_lib]]', 'name = "NotARequirement"', 'path = "ignored"',
  ].join('\n') + '\n' });
  assert.deepEqual(lakeRequirements(directory), [
    { name: 'local', path: 'vendor/local', git: false, scope: false },
    { name: 'scoped', path: undefined, git: false, scope: true },
    { name: '?', path: undefined, git: true, scope: false },
  ]);
  // lakefile.toml wins over lakefile.lean; neither means no requirements.
  const both = project(t, { 'lakefile.toml': 'name = "a"\n', 'lakefile.lean': 'import Lake\nrequire x from git "y"\n' });
  assert.deepEqual(lakeRequirements(both), []);
  assert.deepEqual(lakeRequirements(project(t, {})), []);
});

test('lakefile.lean requirements: nested comments, quoted and French-quoted names, declarations ending a require', t => {
  const directory = project(t, { 'lakefile.lean': [
    'import Lake', 'open Lake DSL',
    '/- outer /- inner require hidden from git "x" -/ still comment -/',
    'package app -- require trailing from git',
    'require «my-dep» from "deps/mine"',
    'require "org" / "pkg"',
    'require plain.name from git "https://example.invalid/p" @ "main"',
    'require atgit @ git "v1"',
    'require "quoted" from "deps/quoted"',
    'def x := 1',
    'require last',
  ].join('\n') + '\n' });
  assert.deepEqual(lakeRequirements(directory), [
    { name: 'my-dep', path: 'deps/mine', git: false, scope: false },
    { name: 'org/pkg', path: undefined, git: false, scope: true },
    { name: 'plain.name', path: undefined, git: true, scope: false },
    { name: 'atgit', path: undefined, git: true, scope: false },
    { name: 'quoted', path: 'deps/quoted', git: false, scope: false },
    { name: 'last', path: undefined, git: false, scope: false },
  ]);
  assert.deepEqual(lakeRequirements(project(t, { 'lakefile.lean': 'require\n' })), [{ name: '?', path: undefined, git: false, scope: false }]);
});

test('Git requirement: manifests, unreadable manifests, cycles and missing local paths', t => {
  const unreadable = project(t, { 'lakefile.toml': 'name = "a"\n', 'lake-manifest.json': '{ not json' });
  assert.equal(lakeGitRequirement(unreadable), 'its lake-manifest.json cannot be read');
  const pathOnly = project(t, { 'lakefile.toml': 'name = "a"\n', 'lake-manifest.json': JSON.stringify({ packages: [{ type: 'path', name: 'p' }, null] }) });
  assert.equal(lakeGitRequirement(pathOnly), null);
  const noPackages = project(t, { 'lakefile.toml': 'name = "a"\n', 'lake-manifest.json': '{}' });
  assert.equal(lakeGitRequirement(noPackages), null);
  // Two projects requiring each other by path terminate.
  const cycle = project(t, {
    'a/lakefile.toml': 'name = "a"\n[[require]]\nname = "b"\npath = "../b"\n',
    'b/lakefile.toml': 'name = "b"\n[[require]]\nname = "a"\npath = "../a"\n',
  });
  assert.equal(lakeGitRequirement(join(cycle, 'a')), null);
  // A path that does not exist, or is a file, is not followed (Lake reports it).
  const missing = project(t, { 'lakefile.toml': 'name = "a"\n[[require]]\nname = "gone"\npath = "gone"\n[[require]]\nname = "file"\npath = "file.txt"\n', 'file.txt': '' });
  assert.equal(lakeGitRequirement(missing), null);
  // A Git requirement after a clean local one is still found.
  const later = project(t, { 'lakefile.toml': 'name = "a"\n[[require]]\nname = "l"\npath = "l"\n[[require]]\nname = "remote"\ngit = "x"\n', 'l/lakefile.toml': 'name = "l"\n' });
  assert.equal(lakeGitRequirement(later), 'Git dependency remote');
});

test('findSystemGit searches PATH in order with each platform\'s names and separator', { skip: process.platform === 'win32' }, t => {
  const directory = project(t, { 'first/git': '#!/bin/sh\necho "git version 1.0"\n', 'second/git': '#!/bin/sh\necho "git version 2.0"\n',
    'dir/git/.keep': '', 'liar/git': '#!/bin/sh\necho "not git version"\n' });
  for (const name of ['first/git', 'second/git', 'liar/git']) chmodSync(join(directory, name), 0o755);
  const path = (...names) => names.map(name => join(directory, name)).join(':');
  assert.equal(findSystemGit({ PATH: path('missing', 'dir', 'liar', 'second', 'first') }).version, 'git version 2.0');
  assert.equal(findSystemGit({ PATH: path('first', 'second') }).executable, join(directory, 'first/git'));
  assert.equal(findSystemGit({ PATH: '::' + path('first') }).version, 'git version 1.0');
  // POSIX environments name the variable exactly PATH.
  assert.equal(findSystemGit({ Path: path('first') }), null);
  assert.equal(findSystemGit({}), null);
  // Another POSIX platform than the host still uses ':'.
  assert.equal(findSystemGit({ PATH: path('first') }, process.platform === 'darwin' ? 'linux' : 'darwin').version, 'git version 1.0');
  // Windows looks for git.exe, git.cmd and git.bat, under any spelling of Path, split at ';'.
  const windows = project(t, { 'w/git.exe': '#!/bin/sh\necho "git version 3.0"\n' });
  chmodSync(join(windows, 'w/git.exe'), 0o755);
  assert.equal(findSystemGit({ Path: `${join(directory, 'first')};${join(windows, 'w')}` }, 'win32').version, 'git version 3.0');
  assert.deepEqual(checkSystemGit(project(t, { 'lakefile.toml': 'name = "a"\n[[require]]\nname = "r"\ngit = "x"\n' }), { find: () => ({ executable: '/g', version: 'v' }) }),
    { needed: true, reason: 'Git dependency r', executable: '/g', version: 'v' });
  const found = []; checkSystemGit(project(t, { 'lakefile.toml': 'name = "a"\n[[require]]\nname = "r"\ngit = "x"\n' }),
    { env: { PATH: 'p' }, platform: 'linux', find: (...args) => { found.push(args); return { executable: 'g', version: 'v' }; } });
  assert.deepEqual(found, [[{ PATH: 'p' }, 'linux']]);
});
