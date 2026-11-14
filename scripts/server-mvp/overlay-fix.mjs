// Maintainer experiment, not a candidate: overlay the two proposed Lasm leak
// fixes (awaiting review) onto an installed copy of candidate .54.
//   node overlay-fix.mjs INSTALLED_COMPILER rpc|full
// rpc:  scripts/server-mvp/patches/host-rpc-channel-reuse.patch (JS link inputs).
// full: rpc plus liblasmhost-send-borrow.a, the .54 runtime archive with only
//       node-async.cpp.o rebuilt from runtime/node-async.cpp + node-async-send-borrow.patch
//       (lean_uv_tcp_send/udp_send borrow array parts instead of taking an owned
//       reference per part). The runtime identity changes, so target.json, the
//       runtime pin and the reviewed-initialization allowlist are updated to match.
// runtime RESTORED: rpc, plus the whole CI-rebuilt runtime from an extracted
//       node-runtime-inputs handoff (RESTORED/runtime, RESTORED/native; identity
//       pinned in runtime-overlay.json), the same pin/allowlist update, and
//       patches/file-worker-retention.patch (src/native-file-worker-pool.mjs).
//       Mirrors the uncommitted product wiring awaiting review; not a candidate.
// transport RESTORED: for candidate .55 (source da05e59, runtime 36cf596b…) only: the
//       whole CI-rebuilt runtime pinned in runtime-overlay-transport.json (one-call
//       async start, batched completions), the same pin/allowlist update, and
//       patches/server-transport.patch (da05e59 → the reviewed-pending host JS and
//       src: host-thread regular files and clocks, op 94/95 protocol, shared-memory
//       slot transport, stackless cancellations). Not a candidate.
import assert from 'node:assert/strict';
import { readFileSync, writeFileSync, copyFileSync, cpSync, rmSync, existsSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { execFileSync } from 'node:child_process';
import { join, resolve, relative } from 'node:path';
import { tmpdir } from 'node:os';
import { fileURLToPath } from 'node:url';

const [compilerArg, mode, restoredArg] = process.argv.slice(2);
assert.ok(compilerArg && ['rpc', 'full', 'runtime', 'transport'].includes(mode), 'Supply INSTALLED_COMPILER rpc|full|runtime|transport [RESTORED]');
assert.ok(!['runtime', 'transport'].includes(mode) || restoredArg, `${mode} mode needs the extracted handoff directory`);
const compiler = resolve(compilerArg), here = fileURLToPath(new URL('./patches/', import.meta.url));
const sha = bytes => createHash('sha256').update(bytes).digest('hex');
const result = { mode };
// Run from the checkout root, as the CI workflow does; git wants a relative, '/'-separated directory.
const directory = relative(process.cwd(), compiler).replace(/\\/g, '/');
assert.ok(directory && !directory.startsWith('..'), 'Run from a checkout that contains the installed copy');
function applyPatch(name) {
  // LF-normalize: Windows checkouts may convert the patch to CRLF.
  const patch = join(tmpdir(), `lasm-overlay-${process.pid}-${name}`);
  writeFileSync(patch, readFileSync(join(here, name), 'utf8').replace(/\r\n/g, '\n'));
  execFileSync('git', ['apply', `--directory=${directory}`, patch], { stdio: 'inherit' });
}
if (mode !== 'transport') applyPatch('host-rpc-channel-reuse.patch');
const base = mode === 'transport' ? '36cf596b617bea6e360a96321aff1e41b8e5c4ee20abdc7d8a7e474b9a5cc6e4'
  : '7482333e0a70a6aee12a540e11a48f31fd56c86761e7b3477f4a46ae310f80d3';
const target = join(compiler, 'targets/lean-4.36.0-rc2-wasm64');
function repin(identity) {
  const pins = join(compiler, 'src/application-runtimes.json'), runtimes = JSON.parse(readFileSync(pins, 'utf8'));
  assert.equal(runtimes.lean['4.36.0-rc2'].manifestSha256, base);
  runtimes.lean['4.36.0-rc2'].manifestSha256 = identity;
  writeFileSync(pins, JSON.stringify(runtimes, null, 2) + '\n');
  const policy = join(compiler, 'src/application-reachability.mjs'), source = readFileSync(policy, 'utf8');
  const quoted = `'${base}']`;
  assert.equal(source.split(quoted).length, 2, 'Expected one reviewed-initialization entry for the base runtime');
  writeFileSync(policy, source.replace(quoted, `'${base}', '${identity}']`));
}
if (mode === 'runtime' || mode === 'transport') {
  const pin = JSON.parse(readFileSync(new URL(mode === 'transport' ? './runtime-overlay-transport.json' : './runtime-overlay.json', import.meta.url), 'utf8'));
  const restored = resolve(restoredArg);
  assert.equal(sha(readFileSync(join(target, 'target.json'))), base, `Expected the base candidate runtime ${base}`);
  const provenance = JSON.parse(readFileSync(join(restored, 'provenance.json'), 'utf8'));
  assert.equal(provenance.runtimeManifestSha256, pin.runtimeManifestSha256);
  assert.equal(provenance.sourceRevision, pin.sourceRevision);
  assert.equal(sha(readFileSync(join(restored, 'runtime/target.json'))), pin.runtimeManifestSha256);
  const manifest = JSON.parse(readFileSync(join(restored, 'runtime/target.json'), 'utf8'));
  for (const [name, file] of Object.entries(manifest.files))
    assert.equal(sha(readFileSync(join(restored, 'runtime', name))), file.sha256, `runtime file ${name}`);
  rmSync(target, { recursive: true });
  cpSync(join(restored, 'runtime'), target, { recursive: true });
  // Native helpers ship with the runtime handoff; record whether they changed.
  const nativeManifest = p => existsSync(p) ? sha(readFileSync(p)) : null;
  result.nativeManifestBefore = nativeManifest(join(compiler, 'src/native/manifest.json'));
  result.nativeManifestHandoff = nativeManifest(join(restored, 'native/manifest.json'));
  if (result.nativeManifestBefore !== result.nativeManifestHandoff) {
    rmSync(join(compiler, 'src/native'), { recursive: true, force: true });
    cpSync(join(restored, 'native'), join(compiler, 'src/native'), { recursive: true });
  }
  repin(pin.runtimeManifestSha256);
  if (mode === 'runtime') {
    applyPatch('file-worker-retention.patch');
    result['native-file-worker-pool.mjs'] = sha(readFileSync(join(compiler, 'src/native-file-worker-pool.mjs')));
  } else applyPatch('server-transport.patch');
  Object.assign(result, { runtimeIdentity: pin.runtimeManifestSha256, release: pin.release });
}
if (mode === 'full') {
  assert.equal(sha(readFileSync(join(target, 'target.json'))), base, 'Expected the candidate .54 runtime');
  const archive = readFileSync(join(here, 'liblasmhost-send-borrow.a'));
  assert.equal(sha(archive), '7b83f31af3bb29c92fcb7c7ccb9921223679c406c28243c52b7c148415277c2f');
  copyFileSync(join(here, 'liblasmhost-send-borrow.a'), join(target, 'lib/liblasmhost.a'));
  const manifest = JSON.parse(readFileSync(join(target, 'target.json'), 'utf8'));
  manifest.files['lib/liblasmhost.a'] = { bytes: archive.length, sha256: sha(archive) };
  manifest.patches['host-send-borrow-experiment'] = 'node-async.cpp lean_array_get_core';
  const text = JSON.stringify(manifest, null, 2) + '\n';
  writeFileSync(join(target, 'target.json'), text);
  const identity = sha(text);
  repin(identity);
  Object.assign(result, { runtimeIdentity: identity, liblasmhost: sha(archive) });
}
for (const name of ['host-library.js', 'host-pre.js'])
  result[name] = sha(readFileSync(join(compiler, 'scripts/full-lean', name)));
console.log(JSON.stringify(result));
