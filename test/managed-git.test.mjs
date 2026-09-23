import assert from 'node:assert/strict';
import test from 'node:test';
import { managedGitEnvironment, gitCatalog } from '../src/managed-git.mjs';
import { validateArtifact } from '../src/managed-artifacts.mjs';

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
});
