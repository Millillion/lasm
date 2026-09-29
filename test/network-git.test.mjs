import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, readFile, rm } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { execFile } from 'node:child_process';
import { promisify } from 'node:util';
import { Worker } from 'node:worker_threads';
import { createInstallerCertificate } from './fixtures/create-installer-certificate.mjs';

test('private Git fixture exercises CA rejection and authenticated proxy cloning with real Git', { timeout: 30_000 }, async t => {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-git-network-'));
  let worker;
  t.after(async () => { if (worker) await worker.terminate(); await rm(directory, { recursive: true, force: true, maxRetries: 10, retryDelay: 100 }); });
  const source = join(directory, 'source'), bare = join(directory, 'bare'), config = join(directory, 'config');
  await mkdir(source); await writeFile(config, ''); await writeFile(join(source, 'fixture'), 'verified Git TLS fixture');
  const env = { ...process.env };
  for (const name of Object.keys(env)) if (/proxy|GIT_SSL|GIT_CONFIG/i.test(name)) delete env[name];
  Object.assign(env, { GIT_CONFIG_NOSYSTEM: '1', GIT_CONFIG_GLOBAL: config });
  const execute = promisify(execFile);
  const git = (args, environment = env) => execute('git', args, { cwd: source, env: environment, windowsHide: true, timeout: 10_000, encoding: 'utf8' });
  await git(['init', '--initial-branch=main']); await git(['add', '.']);
  await git(['-c', 'commit.gpgsign=false', '-c', 'user.name=Lasm Fixture', '-c', 'user.email=fixture@example.invalid', 'commit', '-m', 'TLS fixture']);
  await git(['clone', '--bare', source, bare]); await git(['--git-dir=' + bare, 'update-server-info']);
  const certificate = createInstallerCertificate(), ca = join(directory, 'ca.pem'); await writeFile(ca, certificate.certificate);
  const credential = 'fixture:ephemeral-proxy-password', requests = [];
  worker = new Worker(new URL('../scripts/ci/network-fixture-worker.mjs', import.meta.url), { workerData: {
    repository: bare, certificate: certificate.certificate, privateKey: certificate.privateKey.export({ type: 'pkcs8', format: 'pem' }), proxyCredential: credential,
  } });
  worker.on('message', m => { if (m.type !== 'ready') requests.push(m); });
  const ready = await new Promise((resolve, reject) => { worker.once('message', resolve); worker.once('error', reject); });
  const network = { ...env, HTTPS_PROXY: `http://${credential}@127.0.0.1:${ready.proxyPort}`, NO_PROXY: '' };
  await assert.rejects(git(['ls-remote', ready.url], network), e => /certificate|SSL|TLS|issuer|CERT/i.test(e.stderr));
  const destination = join(directory, 'cloned');
  const cloned = await git(['clone', ready.url, destination], { ...network, GIT_SSL_CAINFO: ca });
  assert.equal(await readFile(join(destination, 'fixture'), 'utf8'), 'verified Git TLS fixture');
  assert.ok(requests.some(r => r.type === 'proxy-connect' && r.authenticated));
  assert.ok(requests.some(r => r.type === 'git-request' && r.path.includes('/objects/')));
  assert.doesNotMatch(cloned.stderr, /ephemeral-proxy-password/);
});
