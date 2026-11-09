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

test('Lean comments: line comments end at the newline; block comments nest and may span lines', t => {
  const requirements = text => lakeRequirements(project(t, { 'lakefile.lean': text }));
  assert.deepEqual(requirements('require a -- from git\nrequire b'), [
    { name: 'a', path: undefined, git: false, scope: false }, { name: 'b', path: undefined, git: false, scope: false }]);
  assert.deepEqual(requirements('/-\nrequire hidden from git "x"\n-/\nrequire shown'), [{ name: 'shown', path: undefined, git: false, scope: false }]);
  assert.deepEqual(requirements('/- outer /- inner -/\nrequire hidden\n-/\nrequire shown'), [{ name: 'shown', path: undefined, git: false, scope: false }]);
  assert.deepEqual(requirements('/- one -/ /- two -/\nrequire shown'), [{ name: 'shown', path: undefined, git: false, scope: false }]);
  assert.deepEqual(requirements('require last'), [{ name: 'last', path: undefined, git: false, scope: false }], 'no trailing newline');
  assert.deepEqual(requirements('require last -- comment at the end'), [{ name: 'last', path: undefined, git: false, scope: false }]);
  assert.deepEqual(requirements('require x from "p"\n-/ stray -/\nrequire y'), [{ name: 'x', path: 'p', git: false, scope: false },
    { name: 'y', path: undefined, git: false, scope: false }], 'a closing marker outside a comment is ordinary text');
  assert.deepEqual(requirements('  require indented from  "spaced"\nrequire "o" /"n"'), [{ name: 'indented', path: 'spaced', git: false, scope: false },
    { name: 'o/n', path: undefined, git: false, scope: true }]);
  assert.deepEqual(requirements('require «x» from git\nrequire y @git "t"\nrequire z from"q"'), [
    { name: 'x', path: undefined, git: true, scope: false }, { name: 'y', path: undefined, git: true, scope: false },
    { name: 'z', path: undefined, git: false, scope: false }]);
  assert.deepEqual(requirements('requirement := 1\nrequire_x\nrequire ok'), [{ name: 'ok', path: undefined, git: false, scope: false }], 'only the keyword starts a requirement');
  assert.deepEqual(requirements('xrequire a\nrequire «»'), [{ name: '?', path: undefined, git: false, scope: false }]);
});

test('lakefile.toml: comments, indented tables and whole keys', t => {
  const requirements = text => lakeRequirements(project(t, { 'lakefile.toml': text }));
  assert.deepEqual(requirements('#[[require]]\n## name = "x"\n  [[require]]  \nname   =   "spaced"\n'), [{ name: 'spaced', path: undefined, git: false, scope: false }]);
  assert.deepEqual(requirements('[[require]]\ngit = "https://example.invalid/[x].git"\nname = "late"\n  [lean_lib]\npath = "not-mine"\n'),
    [{ name: 'late', path: undefined, git: true, scope: false }]);
  assert.deepEqual(requirements('[[require]]\nname="tight"\npath="p"\ngit="g"\nscope="s"\n'), [{ name: 'tight', path: 'p', git: true, scope: true }]);
  assert.deepEqual(requirements('[[require]]\nxname = "decoy"\nxpath = "decoy"\nxgit = "decoy"\nxscope = "decoy"\n'), [{ name: '?', path: undefined, git: false, scope: false }]);
  assert.deepEqual(requirements('[[require]]\nname = ""\npath = ""\n'), [{ name: '', path: '', git: false, scope: false }]);
  assert.deepEqual(requirements('x = 1 # [[require]]\n'), []);
});

test('Git requirement details: manifest entries, first finding wins, reasons name the dependency', t => {
  const twoGit = project(t, { 'lakefile.toml': 'name = "a"\n', 'lake-manifest.json': JSON.stringify({ packages: [{ type: 'path', name: 'p' }, { type: 'git', name: 'first' }, { type: 'git', name: 'second' }] }) });
  assert.equal(lakeGitRequirement(twoGit), 'Git dependency first');
  // A clean manifest still lets the lakefile decide.
  const lakefile = project(t, { 'lakefile.toml': 'name = "a"\n[[require]]\nname = "r"\ngit = "x"\n', 'lake-manifest.json': JSON.stringify({ packages: [] }) });
  assert.equal(lakeGitRequirement(lakefile), 'Git dependency r');
  // A nested project that needs nothing does not end the search.
  const nested = project(t, { 'lakefile.toml': 'name = "a"\n[[require]]\nname = "l"\npath = "l"\n[[require]]\nname = "s"\nscope = "org"\n', 'l/lakefile.toml': 'name = "l"\n' });
  assert.equal(lakeGitRequirement(nested), 'Reservoir dependency s');
  // A project's own path does not loop, and a visited project is not searched twice.
  const self = project(t, { 'lakefile.toml': 'name = "a"\n[[require]]\nname = "me"\npath = "."\n' });
  assert.equal(lakeGitRequirement(self), null);
  const seen = new Set();
  assert.equal(lakeGitRequirement(self, seen), null);
  assert.deepEqual([...seen], [self]);
  const remote = project(t, { 'lakefile.toml': 'name = "a"\n[[require]]\nname = "r"\ngit = "x"\n' });
  assert.equal(lakeGitRequirement(remote, new Set([remote])), null, 'an already visited project contributes nothing');
  const error = new GitRequiredError('Git dependency r');
  assert.equal(error.name, 'GitRequiredError');
  assert.ok(error instanceof Error);
});

test('only a git that exits 0 and prints its version counts', { skip: process.platform === 'win32' }, t => {
  const directory = project(t, {
    'failing/git': '#!/bin/sh\necho "git version 2.0"\nexit 1\n',
    'prefixed/git': '#!/bin/sh\necho "fake git version 2.0"\n',
    'args/git': '#!/bin/sh\n[ "$1" = "--version" ] && [ $# -eq 1 ] && echo "git version 4.0" || echo "wrong arguments"\n',
    'stdin/git': '#!/bin/sh\nread line && echo "git version from stdin" || echo "git version 5.0"\n',
  });
  for (const name of ['failing/git', 'prefixed/git', 'args/git', 'stdin/git']) chmodSync(join(directory, name), 0o755);
  assert.equal(findSystemGit({ PATH: join(directory, 'failing') }), null);
  assert.equal(findSystemGit({ PATH: join(directory, 'prefixed') }), null);
  assert.deepEqual(findSystemGit({ PATH: join(directory, 'args') }), { executable: join(directory, 'args/git'), version: 'git version 4.0' });
  assert.equal(findSystemGit({ PATH: join(directory, 'stdin') }).version, 'git version 5.0', 'stdin is closed');
  // The environment given is the one git runs with.
  const env = project(t, { 'bin/git': '#!/bin/sh\necho "git version $LASM_MARK"\n' });
  chmodSync(join(env, 'bin/git'), 0o755);
  assert.equal(findSystemGit({ PATH: join(env, 'bin'), LASM_MARK: 'marked' }).version, 'git version marked');
});

test('Windows: git.cmd and git.bat count too, under the Path variable whatever comes first', { skip: process.platform === 'win32' }, t => {
  // POSIX stand-ins named as on Windows (a .cmd or .bat runs through the shell there, and through sh here).
  const directory = project(t, { 'cmd/git.cmd': 'echo "git version cmd"\n', 'bat/git.bat': 'echo "git version bat"\n' });
  chmodSync(join(directory, 'cmd/git.cmd'), 0o755); chmodSync(join(directory, 'bat/git.bat'), 0o755);
  assert.equal(findSystemGit({ HOME: 'x', Path: join(directory, 'cmd') }, 'win32').version, 'git version cmd');
  assert.equal(findSystemGit({ Path: join(directory, 'bat') }, 'win32').version, 'git version bat');
});
