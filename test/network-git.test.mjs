import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, readFile, rm } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { execFile } from 'node:child_process';
import { promisify } from 'node:util';
import { Worker } from 'node:worker_threads';
import { createInstallerCertificate } from './fixtures/create-installer-certificate.mjs';

test('private Git fixture exercises CA rejection and authenticated proxy cloning with real Git', { timeout: 180_000 }, async t => {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-git-network-'));
  let worker;
  t.after(async () => { if (worker) await worker.terminate(); await rm(directory, { recursive: true, force: true, maxRetries: 10, retryDelay: 100 }); });
  const source = join(directory, 'source'), bare = join(directory, 'bare'), config = join(directory, 'config');
  await mkdir(source); await writeFile(config, ''); await writeFile(join(source, 'fixture'), 'verified Git TLS fixture');
  const env = { ...process.env };
  for (const name of Object.keys(env)) if (/proxy|GIT_SSL|GIT_CONFIG/i.test(name)) delete env[name];
  Object.assign(env, { GIT_CONFIG_NOSYSTEM: '1', GIT_CONFIG_GLOBAL: config });
  // Lasm uses the system Git (it ships none), as this fixture does.
  const program = 'git', serving = undefined;
  const execute = promisify(execFile);
  const git = (args, environment = env) => execute(program, args, { cwd: source, env: environment, windowsHide: true, timeout: 20_000, encoding: 'utf8' });
  await git(['init', '--initial-branch=main']); await git(['add', '.']);
  await git(['-c', 'commit.gpgsign=false', '-c', 'user.name=Lasm Fixture', '-c', 'user.email=fixture@example.invalid', 'commit', '-m', 'TLS fixture']);
  await git(['clone', '--bare', source, bare]);
  const revision = (await git(['rev-parse', 'HEAD'])).stdout.trim();
  const certificate = createInstallerCertificate(), ca = join(directory, 'ca.pem'); await writeFile(ca, certificate.certificate);
  const credential = 'fixture:ephemeral-proxy-password', requests = [];
  worker = new Worker(new URL('../scripts/ci/network-fixture-worker.mjs', import.meta.url), { workerData: {
    repository: bare, certificate: certificate.certificate, privateKey: certificate.privateKey.export({ type: 'pkcs8', format: 'pem' }), proxyCredential: credential, git: serving,
  } });
  worker.on('message', m => { if (m.type !== 'ready') requests.push(m); });
  const ready = await new Promise((resolve, reject) => { worker.once('message', resolve); worker.once('error', reject); });
  const network = { ...env, HTTPS_PROXY: `http://${credential}@127.0.0.1:${ready.proxyPort}`, NO_PROXY: '' };
  await assert.rejects(git(['ls-remote', ready.url], network), e => /certificate|SSL|TLS|issuer|CERT/i.test(e.stderr));
  const destination = join(directory, 'cloned');
  const cloned = await git(['clone', ready.url, destination], { ...network, GIT_SSL_CAINFO: ca });
  assert.equal(await readFile(join(destination, 'fixture'), 'utf8'), 'verified Git TLS fixture');
  // Lake 4.35 materializes dependencies with a tree-filtered fetch of one revision;
  // the smart-HTTP fixture must serve it without recursive lazy promisor fetches.
  const partial = join(directory, 'partial'); await mkdir(partial);
  const trusted = { ...network, GIT_SSL_CAINFO: ca };
  await execute(program, ['init', '--initial-branch=main'], { cwd: partial, env, windowsHide: true, timeout: 20_000 });
  const discoveriesBefore = requests.filter(r => r.type === 'git-request' && r.path.endsWith('/info/refs')).length;
  await execute(program, ['fetch', '--tags', '--force', '--filter=tree:0', ready.url, revision], { cwd: partial, env: trusted, windowsHide: true, timeout: 20_000 });
  await execute(program, ['checkout', '--detach', revision], { cwd: partial, env: trusted, windowsHide: true, timeout: 20_000 });
  assert.equal(await readFile(join(partial, 'fixture'), 'utf8'), 'verified Git TLS fixture');
  assert.ok(requests.some(r => r.type === 'proxy-connect' && r.authenticated));
  assert.ok(requests.some(r => r.type === 'git-request' && r.path.endsWith('/info/refs') && r.service === 'git-upload-pack'));
  assert.ok(requests.some(r => r.type === 'git-request' && r.method === 'POST' && r.path.endsWith('/git-upload-pack')));
  assert.ok(requests.filter(r => r.type === 'git-request' && r.path.endsWith('/info/refs')).length - discoveriesBefore <= 4, JSON.stringify(requests));
  assert.ok(!requests.some(r => r.type === 'git-request-refused' || r.type === 'git-backend-failure'), JSON.stringify(requests));
  assert.doesNotMatch(cloned.stderr, /ephemeral-proxy-password/);
});
