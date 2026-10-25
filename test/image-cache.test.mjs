// The CI image cache (scripts/ci/image-cache.mjs): every pinned image has both
// architectures, pulls back off exponentially, and identity accepts exactly the
// pinned config or manifest digest. No Docker or network needed.
import assert from 'node:assert/strict';
import { test } from 'node:test';
import { readFileSync } from 'node:fs';
import { architecture, backoff, identityMatches } from '../scripts/ci/image-cache.mjs';

const lock = JSON.parse(readFileSync(new URL('../scripts/ci/images.lock.json', import.meta.url), 'utf8'));
const digest = /^sha256:[a-f0-9]{64}$/;

test('every grouped image is pinned for linux/amd64 and linux/arm64', () => {
  for (const [group, refs] of Object.entries(lock.groups)) for (const ref of refs) {
    const image = lock.images[ref];
    assert.ok(image, `${group}: ${ref} is not pinned`);
    assert.match(image.index, digest);
    for (const arch of ['amd64', 'arm64']) {
      assert.match(image.platforms[arch].manifest, digest, `${ref} ${arch}`);
      assert.match(image.platforms[arch].config, digest, `${ref} ${arch}`);
    }
  }
  assert.ok(lock.groups.lambda.includes('public.ecr.aws/awsguru/aws-lambda-adapter:1.1.0'));
  assert.ok(lock.groups.lambda.includes('public.ecr.aws/lambda/nodejs:24'));
});

test('the pinned images are the ones the CI scripts use', () => {
  const images = JSON.parse(readFileSync(new URL('../scripts/platform/images.json', import.meta.url), 'utf8'));
  for (const ref of [images.lambda.image, images.lambda.adapter]) assert.ok(lock.groups.lambda.includes(ref), ref);
});

test('identity and backoff', () => {
  const pin = { manifest: 'sha256:' + 'a'.repeat(64), config: 'sha256:' + 'b'.repeat(64) };
  assert.ok(identityMatches(pin.config, pin));
  assert.ok(identityMatches(pin.manifest, pin));
  assert.ok(!identityMatches('sha256:' + 'c'.repeat(64), pin));
  assert.ok(!identityMatches(undefined, pin));
  assert.deepEqual([1, 2, 3, 4, 5, 6, 7].map(backoff), [30, 60, 120, 240, 480, 600, 600]);
  assert.equal(architecture('x64'), 'amd64');
  assert.equal(architecture('arm64'), 'arm64');
});
