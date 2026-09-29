import assert from 'node:assert/strict';
import test from 'node:test';
import { managedGitEnvironment, gitCatalog } from '../src/managed-git.mjs';
import { validateArtifact } from '../src/managed-artifacts.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { join, delimiter } from 'node:path';

test('portable Git catalog pins native distributions for all six supported hosts', () => {
  assert.deepEqual(Object.keys(gitCatalog.artifacts).sort(), ['darwin-arm64', 'darwin-x64', 'linux-arm64', 'linux-x64', 'win32-arm64', 'win32-x64']);
  for (const artifact of Object.values(gitCatalog.artifacts)) assert.match(validateArtifact(artifact), /^[a-f0-9]{64}$/);
});

test('managed Git preserves custom CA/config/auth settings and leaves caller environment unchanged', () => {
  const git = { platform: 'linux', prefix: '/cache/git', execPath: '/cache/git/libexec/git-core', templates: '/cache/git/share/templates', path: ['/cache/git/bin'] };
  const input = { PATH: '/node/bin', GIT_SSL_CAINFO: '/custom/ca.pem', GIT_CONFIG_SYSTEM: '/custom/gitconfig', GIT_SSH_COMMAND: 'custom ssh', GIT_CONFIG_GLOBAL: '/custom/global' };
  const env = managedGitEnvironment(git, input);
  assert.equal(env.PATH, '/cache/git/bin:/node/bin');
  assert.equal(input.PATH, '/node/bin');
  for (const name of ['GIT_SSL_CAINFO', 'GIT_CONFIG_SYSTEM', 'GIT_SSH_COMMAND', 'GIT_CONFIG_GLOBAL']) assert.equal(env[name], input[name]);
  assert.equal(managedGitEnvironment(git, {}).GIT_SSL_CAINFO, '/cache/git/ssl/cacert.pem');
  assert.equal(env.GIT_EXEC_PATH, git.execPath);
});

test('Windows Path casing cannot hide the managed Git executable', () => {
  const git = { platform: 'win32', prefix: 'C:\\cache\\git', execPath: 'C:\\git-core', templates: 'C:\\templates', path: ['C:\\git\\cmd', 'C:\\git\\clangarm64\\bin'] };
  const env = managedGitEnvironment(git, { Path: 'C:\\node' });
  assert.equal(env.PATH, 'C:\\git\\cmd;C:\\git\\clangarm64\\bin;C:\\node');
  assert.equal(Object.hasOwn(env, 'Path'), false);
  const composed = managedGitEnvironment(git, { Path: 'C:\\unrelated-tools', PATH: 'C:\\managed-lean\\bin;C:\\node' });
  assert.equal(composed.PATH, 'C:\\git\\cmd;C:\\git\\clangarm64\\bin;C:\\managed-lean\\bin;C:\\node');
});

test('native Lean ignores inherited toolchain overrides and preserves the intended executable search path', () => {
  const inherited = { PATH: 'original-path', LEAN_PATH: 'wrong-lean', LAKE_HOME: 'wrong-lake', ELAN_HOME: 'wrong-elan', KEEP_ME: 'retained' };
  const env = nativeLeanEnvironment({ prefix: '/managed/lean' }, inherited);
  assert.equal(env.PATH.split(delimiter)[0], join('/managed/lean', 'bin'));
  assert.ok(env.PATH.endsWith(delimiter + 'original-path'));
  assert.equal(env.LEAN_NUM_THREADS, '1'); assert.equal(env.LAKE_HOME, undefined); assert.equal(env.ELAN_HOME, undefined);
  assert.equal(env.KEEP_ME, 'retained'); assert.equal(inherited.LEAN_PATH, 'wrong-lean');
});

test('Windows worker environment casing cannot reintroduce a foreign Lean installation', { skip: process.platform !== 'win32' }, () => {
  const env = nativeLeanEnvironment({ prefix: 'C:\\managed\\lean' }, {
    Path: 'C:\\original-tools', Lean_Path: 'C:\\wrong-lean', Lake_Home: 'C:\\wrong-lake', Elan_Home: 'C:\\wrong-elan',
  });
  assert.equal(env.Path, undefined); assert.equal(env.Lean_Path, undefined); assert.equal(env.Lake_Home, undefined); assert.equal(env.Elan_Home, undefined);
  assert.ok(env.PATH.startsWith('C:\\managed\\lean\\bin;'));
  assert.ok(env.PATH.endsWith(';C:\\original-tools'));
});
