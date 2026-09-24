import assert from 'node:assert/strict';
import { mkdirSync, writeFileSync, readFileSync, unlinkSync } from 'node:fs';
import { createHash, randomUUID } from 'node:crypto';
const file = '.work/ci-cache-control/payload.json', receipt = '.work/ci-cache-control/receipt.json';
const hash = bytes => createHash('sha256').update(bytes).digest('hex');
switch (process.argv[2]) {
  case 'create': {
    assert.equal(process.platform + '-' + process.arch, 'win32-arm64');
    mkdirSync('.work/ci-cache-control', { recursive: true });
    const payload = JSON.stringify({ kind: 'bounded-cache-control', host: process.platform + '-' + process.arch,
      node: process.version, nonce: randomUUID() }) + '\n';
    writeFileSync(file, payload, { flag: 'wx' });
    writeFileSync(receipt, JSON.stringify({ sha256: hash(payload), bytes: Buffer.byteLength(payload) }), { flag: 'wx' });
    break;
  }
  case 'remove': unlinkSync(file); break;
  case 'verify': {
    const expected = JSON.parse(readFileSync(receipt));
    const bytes = readFileSync(file);
    assert.equal(bytes.length, expected.bytes); assert.equal(hash(bytes), expected.sha256);
    console.log(JSON.stringify({ scope: 'Native Windows ARM64 included-cache save/restore control only',
      status: 'passed', ...expected, recordedAt: new Date().toISOString() }));
    break;
  }
  default: throw new Error('Expected create, remove or verify');
}
