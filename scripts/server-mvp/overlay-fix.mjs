// Maintainer experiment, not a candidate: overlay the two proposed Lasm leak
// fixes (awaiting review) onto an installed copy of candidate .54.
//   node overlay-fix.mjs INSTALLED_COMPILER rpc|full
// rpc:  scripts/server-mvp/patches/host-rpc-channel-reuse.patch (JS link inputs).
// full: rpc plus liblasmhost-send-borrow.a, the .54 runtime archive with only
//       node-async.cpp.o rebuilt from runtime/node-async.cpp + node-async-send-borrow.patch
//       (lean_uv_tcp_send/udp_send borrow array parts instead of taking an owned
//       reference per part). The runtime identity changes, so target.json, the
//       runtime pin and the reviewed-initialization allowlist are updated to match.
import assert from 'node:assert/strict';
import { readFileSync, writeFileSync, copyFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { execFileSync } from 'node:child_process';
import { join, resolve, relative } from 'node:path';
import { tmpdir } from 'node:os';
import { fileURLToPath } from 'node:url';

const [compilerArg, mode] = process.argv.slice(2);
assert.ok(compilerArg && ['rpc', 'full'].includes(mode), 'Supply INSTALLED_COMPILER rpc|full');
const compiler = resolve(compilerArg), here = fileURLToPath(new URL('./patches/', import.meta.url));
const sha = bytes => createHash('sha256').update(bytes).digest('hex');
const result = { mode };
// LF-normalize: Windows checkouts may convert the patch to CRLF.
const patch = join(tmpdir(), `lasm-overlay-${process.pid}.patch`);
writeFileSync(patch, readFileSync(join(here, 'host-rpc-channel-reuse.patch'), 'utf8').replace(/\r\n/g, '\n'));
// Run from the checkout root, as the CI workflow does; git wants a relative, '/'-separated directory.
const directory = relative(process.cwd(), compiler).replace(/\\/g, '/');
assert.ok(directory && !directory.startsWith('..'), 'Run from a checkout that contains the installed copy');
execFileSync('git', ['apply', `--directory=${directory}`, patch], { stdio: 'inherit' });
for (const name of ['host-library.js', 'host-pre.js'])
  result[name] = sha(readFileSync(join(compiler, 'scripts/full-lean', name)));
if (mode === 'full') {
  const base = '7482333e0a70a6aee12a540e11a48f31fd56c86761e7b3477f4a46ae310f80d3';
  const target = join(compiler, 'targets/lean-4.35.0-wasm64');
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
  const pins = join(compiler, 'src/application-runtimes.json'), runtimes = JSON.parse(readFileSync(pins, 'utf8'));
  assert.equal(runtimes.lean['4.35.0'].manifestSha256, base);
  runtimes.lean['4.35.0'].manifestSha256 = identity;
  writeFileSync(pins, JSON.stringify(runtimes, null, 2) + '\n');
  const policy = join(compiler, 'src/application-reachability.mjs'), source = readFileSync(policy, 'utf8');
  const quoted = `'${base}']`;
  assert.equal(source.split(quoted).length, 2, 'Expected one reviewed-initialization entry for .54');
  writeFileSync(policy, source.replace(quoted, `'${base}', '${identity}']`));
  Object.assign(result, { runtimeIdentity: identity, liblasmhost: sha(archive) });
}
console.log(JSON.stringify(result));
