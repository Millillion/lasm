// Checks Server/LeanCrypto.lean (pure-Lean SHA-256, HMAC-SHA-256, PBKDF2,
// used on Fastly and wasi-http) against Node's crypto on random and edge-case
// inputs (empty, one block, block boundaries, long keys), and times 100,000
// PBKDF2 iterations. Builds test/CryptoCheck.lean with Lasm first.
//   node test/crypto-check.mjs
import assert from 'node:assert/strict';
import { execFileSync } from 'node:child_process';
import { createHash, createHmac, pbkdf2Sync, randomBytes } from 'node:crypto';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));
const out = join(root, 'dist/crypto-check');
execFileSync(join(root, 'node_modules/.bin/lasm'), ['build', 'test/CryptoCheck.lean', '--output', out], { cwd: root, stdio: 'inherit' });
const lean = (...args) => execFileSync(process.execPath, [join(out, 'main.mjs'), ...args], { encoding: 'utf8' }).trim();
const hex = b => Buffer.from(b).toString('hex');
let checks = 0;
for (const size of [0, 1, 3, 55, 56, 63, 64, 65, 119, 120, 128, 1000]) {
  const m = randomBytes(size);
  assert.equal(lean('sha256', hex(m)), createHash('sha256').update(m).digest('hex'), `sha256 of ${size} bytes`);
  for (const keySize of [0, 16, 64, 65, 200]) {
    const k = randomBytes(keySize);
    assert.equal(lean('hmac', hex(k), hex(m)), createHmac('sha256', k).update(m).digest('hex'), `hmac, key ${keySize}, message ${size}`);
    checks += 1;
  }
  checks += 1;
}
for (const [p, s, n] of [['password', 'salt', 1], ['password', 'salt', 2], ['password', 'salt', 4096], [randomBytes(70), randomBytes(16), 1000]]) {
  const pb = Buffer.from(p), sb = Buffer.from(s);
  assert.equal(lean('pbkdf2', hex(pb), hex(sb), String(n)), pbkdf2Sync(pb, sb, n, 32, 'sha256').toString('hex'), `pbkdf2 ${n}`);
  checks += 1;
}
const [digest, ms] = lean('time', '100000').split(' ');
assert.equal(digest, pbkdf2Sync('password', 'salt', 100000, 32, 'sha256').toString('hex'));
console.log(`LeanCrypto: ${checks + 1} checks against Node's crypto passed; 100,000 PBKDF2 iterations in ${ms} ms (Node build)`);
