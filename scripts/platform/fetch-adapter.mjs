// Saves the AWS Lambda Web Adapter image for linux/amd64 and linux/arm64 as
// docker-save archives, so every Lambda job loads the same official bytes.
// Anonymous Amazon ECR Public pulls from some shared CI addresses fail with
// "toomanyrequests: Data limit exceeded" (run 39972720548, x64 runners), so
// one job pulls (with retries) and hands the archives to the others.
//   node fetch-adapter.mjs OUTPUT_DIR
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const output = resolve(process.argv[2] ?? '');
assert.ok(process.argv[2], 'Usage: node fetch-adapter.mjs OUTPUT_DIR');
mkdirSync(output, { recursive: true });
const { adapter } = JSON.parse(readFileSync(join(root, 'scripts/platform/images.json'), 'utf8')).lambda;
const docker = args => spawnSync('docker', args, { encoding: 'utf8', timeout: 600_000 });
const record = { image: adapter, platforms: {} };
for (const arch of ['amd64', 'arm64']) {
  for (let attempt = 1; ; attempt++) {
    const pull = docker(['pull', '-q', '--platform', `linux/${arch}`, adapter]);
    if (pull.status === 0) break;
    assert.ok(attempt < 6, `docker pull ${adapter} (${arch}): ${pull.stderr}`);
    console.log(`Retrying docker pull ${adapter} for ${arch} (${pull.stderr.trim()})`);
    await new Promise(done => setTimeout(done, 30_000 * attempt));
  }
  const inspect = JSON.parse(docker(['image', 'inspect', adapter]).stdout)[0];
  assert.equal(inspect.Architecture, arch);
  const save = docker(['save', '-o', join(output, `adapter-${arch}.tar`), adapter]);
  assert.equal(save.status, 0, save.stderr);
  record.platforms[arch] = { id: inspect.Id, repoDigests: inspect.RepoDigests };
  docker(['image', 'rm', adapter]);
}
writeFileSync(join(output, 'adapter.json'), JSON.stringify(record, null, 2) + '\n');
console.log(JSON.stringify(record, null, 2));
