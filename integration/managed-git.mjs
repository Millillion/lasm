// Native dependency transport only; this does not claim a deployed Wasm pass.
import assert from 'node:assert/strict';
import { mkdir, writeFile, readFile, access } from 'node:fs/promises';
import { createReadStream, existsSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { pathToFileURL } from 'node:url';
import { execFileSync } from 'node:child_process';
import { Readable } from 'node:stream';
import { provisionGit, managedGitEnvironment } from '../src/managed-git.mjs';

const base = resolve(process.argv[2] ?? '.work/managed-git-acceptance');
if (existsSync(base)) throw new Error('Use a fresh Git acceptance directory');
await mkdir(base, { recursive: true });
const options = { cache: join(base, 'cache') };
if (process.argv[3]) options.fetch = async () => new Response(Readable.toWeb(createReadStream(resolve(process.argv[3]))));
const started = Date.now();
const git = await provisionGit(options), firstMilliseconds = Date.now() - started;
const reused = await provisionGit(options);
assert.equal(reused.cacheHit, true); assert.equal(reused.identity, git.identity);
const source = join(base, 'source with spaces'), clone = join(base, 'clone with spaces');
const globalConfig = join(base, 'empty-gitconfig'); await writeFile(globalConfig, '');
const inherited = { ...process.env, PATH: dirname(process.execPath), GIT_CONFIG_GLOBAL: globalConfig, GIT_CONFIG_NOSYSTEM: '1', GIT_TERMINAL_PROMPT: '0' };
for (const key of Object.keys(inherited)) if (['GIT_DIR', 'GIT_WORK_TREE', 'GIT_INDEX_FILE', 'GIT_CONFIG_COUNT'].includes(key)) delete inherited[key];
const env = managedGitEnvironment(git, inherited);
const run = (args, cwd = base) => execFileSync(git.executable, args,
  { cwd, env, encoding: 'utf8', windowsHide: true, timeout: 120_000, maxBuffer: 1024 * 1024 }).trim();
run(['-c', 'init.defaultBranch=main', 'init', source]);
await writeFile(join(source, 'value.txt'), 'first\n');
const commit = () => {
  run(['add', '.'], source);
  run(['-c', 'user.name=Lasm Git fixture', '-c', 'user.email=lasm-fixture@example.invalid',
    '-c', 'commit.gpgsign=false', 'commit', '-m', 'Native transport fixture'], source);
  return run(['rev-parse', 'HEAD'], source);
};
const original = commit();
run(['clone', pathToFileURL(source).href, clone]);
assert.equal(run(['rev-parse', 'HEAD'], clone), original);
assert.equal(await readFile(join(clone, 'value.txt'), 'utf8'), 'first\n');
await writeFile(join(source, 'value.txt'), 'second\n');
const updated = commit();
run(['fetch', 'origin'], clone); run(['checkout', '--detach', updated], clone);
assert.equal(await readFile(join(clone, 'value.txt'), 'utf8'), 'second\n');
run(['checkout', '--detach', original], clone);
assert.equal(await readFile(join(clone, 'value.txt'), 'utf8'), 'first\n');
const remote = run(['ls-remote', 'https://github.com/desktop/dugite-native.git', 'refs/tags/v2.53.0-4']);
assert.match(remote, /^[a-f0-9]{40}\s+refs\/tags\/v2\.53\.0-4$/);
const recorded = { scope: 'Managed native Git transport, not Lean/Wasm application acceptance',
  recordedAt: new Date().toISOString(), platform: process.platform + '-' + process.arch, node: process.version,
  git: git.version, distribution: git.distribution, identity: git.identity, native: git.binaryIdentity,
  archive: git.receipt.artifact, verifiedReuse: reused.cacheHit, firstMilliseconds,
  checks: { cloneFileUrlWithSpaces: 'passed', fetchAndPinnedCheckout: 'passed', httpsTlsRemote: 'passed' },
  original, updated, remote, source, clone,
  notices: Object.keys(git.receipt.files).filter(name => /notice|license|copying/i.test(name)),
  limitations: ['No SSH-client provisioning or private credential flow is claimed.', 'Lake dependency compilation and deployed execution are separate checks.'] };
await writeFile(join(base, 'result.json'), JSON.stringify(recorded, null, 2) + '\n');
console.log(JSON.stringify(recorded, null, 2));
