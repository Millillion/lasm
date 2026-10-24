// The bundled UTC zone replaces time zone files that are missing or that a
// sandbox denies (Std.Http's Date header needs one), on Linux and macOS only.
import assert from 'node:assert/strict';
import { test } from 'node:test';
import { existsSync } from 'node:fs';
import { timeZoneFile } from '../src/node-host.mjs';

const failing = code => () => { throw Object.assign(new Error(code), { code }); };
const bundled = '/lasm/host/zoneinfo/UTC';

test('readable zone files are used as they are', () => {
  assert.deepEqual(timeZoneFile('/etc/localtime', { platform: 'linux', open: () => {}, bundled, bundledExists: true }), { path: '/etc/localtime' });
});

for (const platform of ['linux', 'darwin']) for (const code of ['ENOENT', 'EACCES', 'EPERM', 'ELOOP', 'ENOTDIR'])
  test(`${platform}: ${code} on a zone file serves the bundled UTC zone with a warning`, () => {
    for (const path of ['/etc/localtime', '/usr/share/zoneinfo/UTC', '/usr/share/zoneinfo/Etc/UTC', '/var/db/timezone/zoneinfo/UTC']) {
      const result = timeZoneFile(path, { platform, open: failing(code), bundled, bundledExists: true });
      assert.equal(result.path, bundled);
      assert.match(result.warning, code === 'ENOENT' ? /is missing \(no time zone database\): using UTC/ : new RegExp(`cannot read ${path.replaceAll('/', '\\/')} \\(${code}\\): using UTC`));
    }
  });

test('other paths, other errors, Windows and a missing bundle are left alone', () => {
  assert.deepEqual(timeZoneFile('/etc/hosts', { platform: 'linux', open: failing('EACCES'), bundled, bundledExists: true }), { path: '/etc/hosts' });
  assert.deepEqual(timeZoneFile('/etc/localtime', { platform: 'linux', open: failing('EIO'), bundled, bundledExists: true }), { path: '/etc/localtime' });
  assert.deepEqual(timeZoneFile('/etc/localtime', { platform: 'win32', open: failing('ENOENT'), bundled, bundledExists: true }), { path: '/etc/localtime' });
  assert.deepEqual(timeZoneFile('/etc/localtime', { platform: 'linux', open: failing('ENOENT'), bundled, bundledExists: false }), { path: '/etc/localtime' });
});

test('the bundled zone ships beside the host', () => {
  assert.ok(existsSync(new URL('../src/zoneinfo/UTC', import.meta.url)));
});
