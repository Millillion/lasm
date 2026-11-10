import test from 'node:test';
import assert from 'node:assert/strict';
import { assertSupportedHost, buildPlatforms } from '../src/platform.mjs';

test('the build platform policy accepts the intended 64-bit desktop matrix', () => {
  for (const platform of buildPlatforms) assert.doesNotThrow(() => assertSupportedHost(...platform.split('-')));
  assert.deepEqual(buildPlatforms, ['linux-x64', 'linux-arm64', 'darwin-x64', 'darwin-arm64', 'win32-x64']);
  for (const pair of [['freebsd', 'x64'], ['win32', 'ia32'], ['linux', 'riscv64']]) {
    assert.throws(() => assertSupportedHost(...pair), /^Error: Lasm supports Linux and macOS on x86-64 and ARM64, and Windows on x86-64\. Your host is/);
  }
});

test('Windows ARM64 fails early with an explicit unsupported-platform message', () => {
  assert.throws(() => assertSupportedHost('win32', 'arm64'), { message:
    'Lasm supports Linux and macOS on x86-64 and ARM64, and Windows on x86-64. Windows ARM64 is not supported.' });
});
