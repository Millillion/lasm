// Retain completed ccache objects between fresh native build trees. Draft-only
// storage uses this distribution workflow's existing contents permission.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync, statSync, rmSync } from 'node:fs';
import { join, resolve, basename } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { verifyNativeProgram } from '../../src/native-program.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
assert.equal(process.platform + '-' + process.arch, 'win32-arm64');
assert.equal(process.env.GITHUB_REPOSITORY, 'Millillion/lasm');
assert.equal(process.env.GITHUB_REF, 'refs/heads/main');
const base = resolve('.work/windows-arm64-lean-release-cache');
const compilerCache = join(base, 'cache'), temporary = join(base, 'temporary');
const identityFile = join(base, 'identity.json'), archive = join(base, 'compiler-cache.tgz');
const msysBin = join(process.env.MSYS2_LOCATION, 'clangarm64/bin');
const ccache = join(msysBin, 'ccache.exe'), clang = join(msysBin, 'clang.exe');
const env = { ...process.env, CCACHE_DIR: compilerCache, CCACHE_TEMPDIR: temporary,
  CCACHE_CONFIGPATH: join(base, 'ccache.conf'), CCACHE_MAXSIZE: '1024MiB',
  CCACHE_COMPILERCHECK: 'content', CCACHE_REMOTE_STORAGE: '' };
const run = (program, args, options = {}) => execFileSync(program, args, {
  env, encoding: 'utf8', timeout: 120000, maxBuffer: 2 * 1024 ** 2, ...options });
const gh = args => run('gh', args, { timeout: 1200000 });
const json = file => JSON.parse(readFileSync(file, 'utf8'));
const save = (file, value) => writeFileSync(file, JSON.stringify(value, null, 2) + '\n', { flag: 'wx' });
const archiveTool = fileURLToPath(new URL('./compiler-cache.mjs', import.meta.url));
const family = 'windows-arm64-lean-ccache-';
assert.equal(JSON.parse(gh(['api', 'repos/Millillion/lasm'])).visibility, 'public');
await verifyNativeProgram(ccache, 'win32', 'arm64');

if (process.argv[2] === 'prepare') {
  assert.ok(!existsSync(base)); mkdirSync(temporary, { recursive: true });
  writeFileSync(join(base, 'ccache.conf'), 'max_size = 1024MiB\ncompiler_check = content\n');
  // Fail early if the native compiler/cache cannot actually cooperate. Use a
  // separate tiny cache so this control cannot alter restored build objects.
  const probe = join(base, 'preflight'); mkdirSync(probe);
  const probeEnv = { ...env, CCACHE_DIR: join(probe, 'cache') };
  const source = join(probe, 'control.c'), object = join(probe, 'control.o');
  writeFileSync(source, 'int lasm_cache_control(void) { return 42; }\n');
  run(ccache, [clang, '-c', source, '-o', object], { env: probeEnv });
  const objectSha256 = await hashFile(object); rmSync(object);
  run(ccache, [clang, '-c', source, '-o', object], { env: probeEnv });
  assert.equal(await hashFile(object), objectSha256);
  const probeStats = Object.fromEntries(run(ccache, ['--print-stats'], { env: probeEnv }).trim()
    .split(/\r?\n/).map(line => line.trim().split(/\s+/)));
  assert.ok(Number(probeStats.direct_cache_hit) + Number(probeStats.preprocessed_cache_hit) >= 1,
    'The real native compilation control must reuse a completed object');
  save(join(base, 'compiler-control.json'), { passed: true, objectSha256, stats: probeStats });
  const inputs = json('.work/windows-arm64-lean-release/inputs.json');
  const files = {};
  for (const file of ['scripts/ci/windows-lean-release-cache.mjs', 'scripts/ci/compiler-cache.mjs',
    'scripts/full-lean/bootstrap-windows-arm64-lean-release.sh', 'scripts/full-lean/patch-windows-manifest.mjs'])
    files[file] = await hashFile(file);
  const identity = { schema: 1, lean: inputs.lean, leanCommit: inputs.commit,
    seedIdentity: inputs.seed.identity, leantarSha256: inputs.leantar.receipt.report.executable.sha256,
    platform: process.platform, architecture: process.arch, node: process.versions.node,
    workspace: resolve('.'), msysBin, files, ccacheSha256: await hashFile(ccache), clangSha256: await hashFile(clang),
    ccacheVersion: run(ccache, ['--version']), clangVersion: run(clang, ['--version']),
    msysPackages: run(join(process.env.MSYS2_LOCATION, 'usr/bin/pacman.exe'), ['-Q']) };
  save(identityFile, identity);
  const tag = process.env.LASM_LEAN_CCACHE_TAG ?? '', sha256 = process.env.LASM_LEAN_CCACHE_SHA256 ?? '';
  assert.equal(Boolean(tag), Boolean(sha256), 'Supply both checkpoint tag and checksum, or neither');
  let restored = null;
  if (tag) {
    assert.match(tag, /^windows-arm64-lean-ccache-\d+$/); assert.match(sha256, /^[a-f0-9]{64}$/);
    const release = JSON.parse(gh(['release', 'view', tag, '--repo', 'Millillion/lasm', '--json', 'isDraft,assets']));
    assert.equal(release.isDraft, true);
    const asset = release.assets.find(a => a.name === 'compiler-cache.tgz');
    assert.ok(asset && asset.size > 0 && asset.size < 2 * 1024 ** 3);
    gh(['release', 'download', tag, '--repo', 'Millillion/lasm', '--pattern', 'compiler-cache.tgz',
      '--pattern', 'compiler-cache-receipt.json', '--dir', base]);
    const receipt = json(join(base, 'compiler-cache-receipt.json'));
    assert.equal(receipt.tag, tag); assert.equal(receipt.sha256, sha256);
    assert.equal(receipt.identitySha256, await hashFile(identityFile));
    assert.equal(receipt.bytes, asset.size); assert.equal(statSync(archive).size, asset.size);
    assert.ok(['passed', 'failed', 'time-limit', 'resource-abort'].includes(receipt.buildResources.status));
    assert.ok(receipt.buildResources.finishedAt);
    run(process.execPath, [archiveTool, 'unpack', compilerCache, archive, identityFile], {
      env: { ...env, LASM_CHECKPOINT_SHA256: sha256 }, stdio: 'inherit', timeout: 900000 });
    // Keep the restored archive as evidence; the next checkpoint has a new path.
    restored = { tag, sha256, bytes: asset.size, identitySha256: receipt.identitySha256 };
  }
  run(ccache, ['--zero-stats']);
  save(join(base, 'preparation.json'), { identity, restored, scope: 'Completed compiler objects only; native build and relocation must pass again' });
  console.log(JSON.stringify({ identitySha256: await hashFile(identityFile), restored }));
} else {
  assert.equal(process.argv[2], 'retain');
  const resources = json('.work/windows-arm64-lean-release-resources.json');
  assert.ok(['passed', 'failed', 'time-limit', 'resource-abort'].includes(resources.status) && resources.finishedAt,
    'The bounded build and every descendant must finish before checkpointing');
  assert.ok(existsSync(compilerCache));
  run(ccache, ['--cleanup']);
  const stats = Object.fromEntries(run(ccache, ['--print-stats']).trim().split(/\r?\n/).map(line => {
    const [key, value] = line.trim().split(/\s+/); return [key, Number(value)];
  }));
  assert.ok(stats.files_in_cache > 0 && stats.cache_size_kibibyte <= 1536 * 1024);
  const output = join(base, 'retained'); assert.ok(!existsSync(output)); mkdirSync(output);
  const next = join(output, 'compiler-cache.tgz');
  run(process.execPath, [archiveTool, 'pack', compilerCache, next, identityFile], { stdio: 'inherit', timeout: 900000 });
  const packed = json(next + '.json');
  assert.equal(packed.sha256, await hashFile(next));
  const tag = family + process.env.GITHUB_RUN_ID; assert.match(tag, /^windows-arm64-lean-ccache-\d+$/);
  const releases = JSON.parse(gh(['api', '--paginate', '--slurp', 'repos/Millillion/lasm/releases?per_page=100'])).flat();
  assert.ok(!releases.some(r => r.tag_name === tag));
  assert.ok(releases.filter(r => r.draft && r.tag_name.startsWith(family)).length < 4,
    'Reconcile retained compiler-cache drafts before adding a fifth');
  const receipt = { scope: 'Completed native C/C++ compiler cache only; no Lean distribution acceptance',
    tag, ...packed, buildResources: resources, stats, sourceRevision: process.env.GITHUB_SHA,
    run: `https://github.com/Millillion/lasm/actions/runs/${process.env.GITHUB_RUN_ID}` };
  const receiptPath = join(output, 'compiler-cache-receipt.json'); save(receiptPath, receipt);
  const notes = join(output, 'notes.md');
  writeFileSync(notes, `Unpublished completed compiler-cache checkpoint.\n\nRecipe: ${packed.identitySha256}\nArchive: ${basename(next)}\nSHA-256: ${packed.sha256}\nSource: ${process.env.GITHUB_SHA}\nBuild result: ${resources.status}\n\nThis checkpoint does not establish a complete native Lean build or installed Lasm support.\n`);
  gh(['release', 'create', tag, next, receiptPath, '--repo', 'Millillion/lasm', '--draft', '--prerelease',
    '--target', process.env.GITHUB_SHA, '--title', `Windows ARM64 Lean compiler cache ${process.env.GITHUB_RUN_ID}`, '--notes-file', notes]);
  const retained = JSON.parse(gh(['release', 'view', tag, '--repo', 'Millillion/lasm', '--json', 'isDraft,assets,url']));
  assert.equal(retained.isDraft, true);
  assert.equal(retained.assets.find(a => a.name === basename(next))?.size, packed.bytes);
  console.log(JSON.stringify({ ...receipt, stats: undefined, buildResources: undefined, retained }, null, 2));
}
