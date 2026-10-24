// Reproduce the AOT runtime from public source on an isolated CI runner.
// This is a maintainer control, not npm publication or an installed-package gate.
import assert from 'node:assert/strict';
import { createWriteStream, existsSync, mkdirSync, readFileSync, writeFileSync, renameSync, statfsSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';
import { Readable, Transform } from 'node:stream';
import { pipeline } from 'node:stream/promises';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
import { maintainerSdk } from '../full-lean/maintainer-sdk.mjs';
import { provisionLean } from '../../src/managed-lean.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { verifyApplicationRuntime, applicationRuntimeCatalog } from '../../src/application-runtime.mjs';
import { buildApplication } from '../../src/application-build.mjs';

await ensureResourceGuard();
assert.equal(process.platform + '-' + process.arch, 'linux-x64');
const phase = process.argv[2];
assert.ok(['lean', 'sdk', 'sources', 'hosts', 'smoke'].includes(phase));
const output = resolve('.work/ci-application-runtime');
const cache = resolve('.cache/ci-application-tools');
const sourceBuild = resolve('.work/ci-application-libraries');
const version = JSON.parse(readFileSync(new URL('./acceptance-versions.json', import.meta.url))).lean;
const sourceRelease = JSON.parse(readFileSync(new URL('../full-lean/lean-sources.json', import.meta.url)))[version];
assert.ok(sourceRelease, 'The acceptance release needs an authenticated source pin');
mkdirSync(output, { recursive: true });
const reportFile = join(output, phase + '.json');
assert.ok(!existsSync(reportFile), 'Use a fresh CI workspace; preserve phase reports');
const space = statfsSync('.');
assert.ok(space.bavail * space.bsize >= 5 * 1024 ** 3, 'Keep build headroom and a four-GiB disk reserve');
const result = { phase, lean: version, leanCommit: sourceRelease.commit,
  scope: 'Source-built AOT runtime control, not installed-package acceptance',
  passed: false, resourceReport: process.env.LASM_RESOURCE_REPORT, startedAt: new Date().toISOString() };
const record = () => writeFileSync(reportFile, JSON.stringify(result, null, 2) + '\n');
record();
const run = (program, args, options = {}) => execFileSync(program, args, { stdio: 'inherit', ...options });
const selection = join(output, 'selection');
mkdirSync(selection, { recursive: true });
writeFileSync(join(selection, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
try {
  if (phase === 'lean') {
    const lean = await provisionLean(selection, { cache });
    assert.equal(lean.commit, sourceRelease.commit);
    result.tool = { version: lean.version, commit: lean.commit, identity: lean.identity };
  } else if (phase === 'sdk') {
    const sdk = await maintainerSdk({ managed: true, cache });
    result.tool = { identity: sdk.identity, driverIdentity: sdk.driverIdentity, patchSha256: sdk.patchSha256 };
  } else if (phase === 'sources') {
    const zig = JSON.parse(readFileSync('experiments/feasibility/toolchains.json')).zig;
    const inputs = [
      { name: `lean4-v${version}.tar.gz`, url: sourceRelease.url,
        bytes: sourceRelease.bytes, sha256: sourceRelease.sha256 },
      { name: 'zig-x86_64-linux-0.16.0.tar.xz', url: zig.url, bytes: zig.compressedBytes,
        sha256: zig.officialSha256, directory: 'zig-x86_64-linux-0.16.0' },
    ];
    mkdirSync('.cache/downloads', { recursive: true });
    for (const input of inputs) {
      const file = resolve('.cache/downloads', input.name);
      assert.ok(!existsSync(file), 'Cold source CI must not reuse unverified local inputs');
      const response = await fetch(input.url, { signal: AbortSignal.timeout(180_000) });
      assert.ok(response.ok && response.body && new URL(response.url).protocol === 'https:');
      let bytes = 0; const hash = createHash('sha256');
      const check = new Transform({ transform(chunk, _, callback) {
        bytes += chunk.length; hash.update(chunk);
        callback(bytes > input.bytes ? new Error('Source download exceeds its pinned size') : null, chunk);
      } });
      await pipeline(Readable.fromWeb(response.body), check, createWriteStream(file + '.partial', { flags: 'wx' }));
      const observed = { ...input, observedBytes: bytes, observedSha256: hash.digest('hex') };
      (result.downloads ??= []).push(observed); record();
      assert.equal(bytes, input.bytes, input.name + ': pinned source size');
      assert.equal(observed.observedSha256, input.sha256, input.name + ': pinned source checksum');
      renameSync(file + '.partial', file);
      if (input.directory) {
        const directory = resolve('.cache', input.directory);
        assert.ok(!existsSync(directory)); mkdirSync(directory);
        run('tar', ['-xf', file, '--strip-components=1', '-C', directory]);
      }
    }
    result.inputs = inputs;
  } else if (phase === 'hosts') {
    run(process.execPath, ['scripts/prepare-native.mjs']);
    result.manifests = Object.fromEntries(await Promise.all(['manifest.json', 'process/manifest.json', 'signals/manifest.json']
      .map(async path => [path, await hashFile(join('.cache/native-host', path))])));
  } else {
    const target = resolve(`.work/ci-application-bundle/lean-${version}-wasm64`);
    const expected = { name: `lean-${version}-wasm64`, manifestSha256: await hashFile(join(target, 'target.json')) };
    const runtime = await verifyApplicationRuntime(target, expected);
    // Select this newly built maintainer candidate in memory, without modifying
    // the product's committed release catalog or relabeling previous acceptance.
    result.committedCatalog = structuredClone(applicationRuntimeCatalog);
    assert.equal(runtime.manifest.lean, version); assert.equal(runtime.manifest.leanCommit, sourceRelease.commit);
    applicationRuntimeCatalog.lean[version] = expected;
    result.candidate = { identity: runtime.identity, modules: runtime.manifest.standardModules };
    const project = join(output, 'smoke source'), deployed = join(output, 'relocated smoke deployment');
    mkdirSync(project); writeFileSync(join(project, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
    const file = join(project, 'Main.lean');
    // The runtime uses Lean's own big-number code (USE_GMP=OFF; native Lean uses
    // GMP): a few multi-limb operations must print exactly what native Lean prints.
    writeFileSync(file, ['def main : IO Unit := do', '  IO.FS.writeFile "value.txt" "ordinary Lean IO\\n"',
      '  IO.print (← IO.FS.readFile "value.txt")', '  IO.println ((2 : Nat)^130 + 17)',
      '  let a : Nat := 3^400 + 12345', '  let b : Nat := 7^150 + 1',
      '  IO.println (a * b, a / b, a % b, Nat.gcd a b, a >>> 77, a &&& b, a ^^^ b)',
      '  let i : Int := -(5 : Int)^120 - 3',
      '  IO.println (i / 1000000007, i % 1000000007, Int.tdiv i (2^70), Int.fmod i (2^70), i.toNat, (-i).toNat)',
      '  IO.println (((2 : Nat)^64 - 1).toUInt64, ((2 : Nat)^64 + 5).toUInt64, (10 : Nat)^30 |>.toFloat, (1e30 : Float).toUInt64)',
      '  IO.println ((10 : Nat)^2000 / (3^1000 + 1) |> toString |>.length)', ''].join('\n'));
    const built = await buildApplication(file, { target: 'node', output: deployed, cache, runtimeDirectory: target });
    const lean = await provisionLean(project, { cache });
    const native = spawnSync(lean.lean, ['--run', file], { cwd: project, encoding: 'utf8', timeout: 60_000 });
    assert.ifError(native.error); assert.equal(native.status, 0);
    renameSync(project, project + '.hidden');
    const actual = spawnSync(process.execPath, [join(deployed, 'main.mjs')], {
      cwd: deployed, encoding: 'utf8', timeout: 60_000,
      env: { ...process.env, PATH: '', LEAN_SYSROOT: '', LEAN_PATH: '' },
    });
    assert.ifError(actual.error);
    result.build = { signature: built.signature, cacheHit: built.cacheHit };
    const observed = value => ({ code: value.status, signal: value.signal, stdout: value.stdout, stderr: value.stderr });
    result.native = observed(native); result.actual = observed(actual); record();
    assert.deepEqual(result.actual, result.native);
    assert.equal(readFileSync(join(deployed, 'value.txt'), 'utf8'), 'ordinary Lean IO\n');
    result.runtimeBuild = JSON.parse(readFileSync(join(sourceBuild, 'progress.json')));
  }
  result.passed = true;
} catch (error) { result.error = error.stack; throw error; }
finally { result.finishedAt = new Date().toISOString(); record(); }
console.log(JSON.stringify(result, null, 2));
