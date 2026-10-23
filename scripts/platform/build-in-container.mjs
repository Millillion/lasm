// Runs build-apps.mjs with the installed candidate inside a Linux container
// image and an official Node release (SHASUMS256-checked), to test the
// compiler's own glibc floor. The checkout and the candidate are mounted
// read-only; the applications are then run with that image's Node.
//   node build-in-container.mjs IMAGE NODE_VERSION CANDIDATE_TGZ WORK_DIR
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { mkdirSync, writeFileSync } from 'node:fs';
import { basename, dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const [image, version, tgzArg, workArg] = process.argv.slice(2);
assert.ok(image && /^\d+\.\d+\.\d+$/.test(version ?? '') && tgzArg && workArg, 'Usage: node build-in-container.mjs IMAGE NODE_VERSION CANDIDATE_TGZ WORK_DIR');
const tgz = resolve(tgzArg), work = resolve(workArg);
const arch = { x64: 'x64', arm64: 'arm64' }[process.arch];
mkdirSync(work, { recursive: true });
const name = `node-v${version}-linux-${arch}`, base = `https://nodejs.org/dist/v${version}/`;
const sums = await (await fetch(base + 'SHASUMS256.txt')).text();
const expected = sums.split('\n').find(line => line.endsWith(`  ${name}.tar.xz`))?.split(' ')[0];
const bytes = Buffer.from(await (await fetch(base + `${name}.tar.xz`)).arrayBuffer());
assert.equal(createHash('sha256').update(bytes).digest('hex'), expected, 'Node tarball checksum');
writeFileSync(join(work, `${name}.tar.xz`), bytes);
assert.equal(spawnSync('tar', ['-xJf', join(work, `${name}.tar.xz`), '-C', work], { stdio: 'inherit' }).status, 0);
const script = [
  'set -e', 'export PATH=/opt/node/bin:$PATH', 'ldd --version | head -1', 'node --version',
  `node /lasm/scripts/platform/build-apps.mjs /candidate/${basename(tgz)} /work/build /work/apps`,
  'node -e "const a=require(\'/work/apps/apps.json\');console.log(JSON.stringify(a.apps.map(x=>[x.name,x.bytes,x.nativeTargets])))"',
  'node /work/apps/hello/main.mjs',
].join('\n');
const run = spawnSync('docker', ['run', '--rm', '-v', `${root}:/lasm:ro`, '-v', `${dirname(tgz)}:/candidate:ro`,
  '-v', `${join(work, name)}:/opt/node:ro`, '-v', `${work}:/work`, image, 'sh', '-c', script], { stdio: 'inherit', timeout: 5400_000 });
assert.equal(run.status, 0, `The build in ${image} failed`);
