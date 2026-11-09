// Lean's Windows time zone queries over the ICU C ABI, run against a stand-in
// ICU library so that the binding's call order, status checks, unit
// conversions and buffer handling are checked on every platform.
import test from 'node:test';
import assert from 'node:assert/strict';
import { constants } from 'node:os';
import { createIcuTimeZoneDatabase, nativeWindowsTimeZone } from '../src/native-windows-timezone.mjs';

// A small ICU: zones are { dst, zone (ms), next (ms or undefined), names by UCalendarDisplayNameType: [standard, short standard, daylight, short daylight] }.
function standInIcu({ zones, local = 'America/New_York', failAt, suffix = '' } = {}) {
  const calls = [], closed = [];
  const fail = (step, status) => { if (failAt === step) status.writeInt32LE(1); };
  const functions = {
    u_strFromUTF8(destination, capacity, length, source, sourceLength, status) {
      const text = String(source);
      calls.push(['fromUtf8', capacity, text, sourceLength]);
      destination.write(text.slice(0, capacity), 'utf16le');
      fail('fromUtf8', status);
    },
    u_strToUTF8(destination, capacity, size, source, sourceLength, status) {
      const text = Buffer.from(source.subarray(0, 2 * sourceLength)).toString('utf16le');
      calls.push(['toUtf8', capacity, text]);
      const bytes = Buffer.from(text);
      bytes.copy(destination); size.writeInt32LE(bytes.length);
      fail('toUtf8:' + text, status);
    },
    ucal_open(zone, length, locale, type, status) {
      const name = zone === null ? local : zone.toString('utf16le').split('\0')[0];
      calls.push(['open', name, length, locale, type]);
      fail('open', status);
      return { name, zone: zones?.[name] };
    },
    ucal_close(calendar) { closed.push(calendar.name); },
    ucal_setMillis(calendar, millis, status) { calls.push(['setMillis', millis]); calendar.millis = millis; fail('setMillis', status); },
    ucal_getTimeZoneTransitionDate(calendar, kind, output, status) {
      calls.push(['transition', kind]);
      fail('transition', status);
      if (calendar.zone.next === undefined) return 0;
      output.writeDoubleLE(calendar.zone.next); return 1;
    },
    ucal_get(calendar, field, status) {
      calls.push(['get', field]);
      fail('get:' + field, status);
      return field === 16 ? calendar.zone.dst : calendar.zone.zone;
    },
    ucal_getTimeZoneDisplayName(calendar, type, locale, output, capacity, status) {
      calls.push(['displayName', type, locale, capacity]);
      const name = calendar.zone.names[type];
      output.fill(0); output.write(name, 'utf16le');
      fail('displayName:' + type, status);
      return name.length;
    },
    ucal_getTimeZoneID(calendar, output, capacity, status) {
      calls.push(['identifier', capacity]);
      output.write(calendar.name + '\0junk', 'utf16le');
      fail('identifier', status);
      return calendar.name.length + 5;
    },
  };
  const library = { func(name, result, args) {
    assert.ok(name.endsWith(suffix), name);
    const base = name.slice(0, name.length - suffix.length);
    assert.ok(functions[base], `unknown ICU function ${name}`);
    assert.ok(typeof result === 'string' && Array.isArray(args));
    return functions[base];
  } };
  return { library, calls, closed };
}

const york = { dst: 0, zone: -18_000_000, next: 1_710_054_000_500, names: ['Eastern Standard Time', 'EST', 'Eastern Daylight Time', 'EDT'] };
const summer = { dst: 3_600_000, zone: -18_000_000, next: 1_730_613_600_000, names: ['Eastern Standard Time', 'EST', 'Eastern Daylight Time', 'EDT'] };
const zones = { 'America/New_York': york, Summer: summer, Fixed: { dst: 0, zone: 19_800_500, names: ['India Standard Time', 'IST', '', ''] } };

test('the next transition is queried after the timestamp, in whole seconds rounded up', () => {
  const icu = standInIcu({ zones });
  const database = createIcuTimeZoneDatabase(icu.library);
  const result = database.nextTransition(Buffer.from('America/New_York'), 1_700_000_000n, false);
  assert.deepEqual(result, { timestamp: 1_710_054_001n, offset: -18000, isDST: false,
    name: Buffer.from('Eastern Standard Time'), abbreviation: Buffer.from('EST') });
  assert.deepEqual(icu.calls, [
    ['fromUtf8', 256, 'America/New_York', 16], ['open', 'America/New_York', -1, null, 1], ['setMillis', 1_700_000_000_000],
    ['transition', 0], ['get', 16], ['displayName', 0, 'en_US', 32], ['toUtf8', 256, 'Eastern Standard Time'],
    ['displayName', 1, 'en_US', 32], ['toUtf8', 256, 'EST'], ['get', 15],
  ]);
  assert.deepEqual(icu.closed, ['America/New_York']);
});

test('daylight time selects the daylight names and adds the DST offset', () => {
  const icu = standInIcu({ zones });
  const result = createIcuTimeZoneDatabase(icu.library).nextTransition('Summer', 0n, false);
  assert.deepEqual(result, { timestamp: 1_730_613_600n, offset: -14400, isDST: true,
    name: Buffer.from('Eastern Daylight Time'), abbreviation: Buffer.from('EDT') });
  assert.deepEqual(icu.calls.filter(([name]) => name === 'displayName').map(([, type]) => type), [2, 3]);
});

test('the initial query reports the current zone at timestamp 0 without a transition lookup', () => {
  const icu = standInIcu({ zones });
  const result = createIcuTimeZoneDatabase(icu.library).nextTransition('Fixed', 123n, true);
  assert.deepEqual(result, { timestamp: 0n, offset: 19800, isDST: false, name: Buffer.from('India Standard Time'), abbreviation: Buffer.from('IST') });
  assert.equal(icu.calls.some(([name]) => name === 'setMillis' || name === 'transition'), false);
});

test('no next transition is none, before the transition status is checked', () => {
  const icu = standInIcu({ zones, failAt: 'transition' });
  assert.equal(createIcuTimeZoneDatabase(icu.library).nextTransition('Fixed', 5n, false), null);
  assert.deepEqual(icu.closed, ['Fixed']);
  assert.throws(() => createIcuTimeZoneDatabase(standInIcu({ zones, failAt: 'transition' }).library).nextTransition('Summer', 5n, false),
    { message: 'failed to get next transition' });
});

test('timestamps become int64 milliseconds, wrapping as the native multiplication does', () => {
  for (const [seconds, millis] of [[-5n, -5000], [9_223_372_036_854_775n, 9_223_372_036_854_775_000], [2n ** 63n - 1n, -1000], [2n ** 64n + 3n, 3000]]) {
    const icu = standInIcu({ zones });
    createIcuTimeZoneDatabase(icu.library).nextTransition('America/New_York', seconds, false);
    assert.deepEqual(icu.calls.find(([name]) => name === 'setMillis'), ['setMillis', millis], String(seconds));
  }
});

test('each failing ICU status is invalidArgument with Lean\'s message, and the calendar is closed', () => {
  const steps = [['fromUtf8', 'failed to read identifier', []], ['open', 'failed to open calendar', ['Summer']],
    ['setMillis', 'failed to set calendar time', ['Summer']], ['get:16', 'failed to get dst_offset', ['Summer']],
    ['displayName:2', 'failed to timezone identifier', ['Summer']], ['toUtf8:Eastern Daylight Time', 'failed to convert DST name to UTF-8', ['Summer']],
    ['displayName:3', 'failed to read abbreaviation', ['Summer']], ['toUtf8:EDT', 'failed to get abbreviation to cstr', ['Summer']],
    ['get:15', 'failed to get zone_offset', ['Summer']]];
  for (const [step, message, closed] of steps) {
    const icu = standInIcu({ zones, failAt: step });
    assert.throws(() => createIcuTimeZoneDatabase(icu.library).nextTransition('Summer', 1n, false),
      error => error.message === message && error.code === 'EINVAL' && error.errno === constants.errno.EINVAL && error.nativeMessage === true, step);
    assert.deepEqual(icu.closed, closed, step);
  }
});

test('the local identifier is the default calendar\'s zone ID up to its NUL', () => {
  const icu = standInIcu({ zones });
  const database = createIcuTimeZoneDatabase(icu.library);
  assert.deepEqual(database.localIdentifier(60n), Buffer.from('America/New_York'));
  assert.deepEqual(icu.calls, [['open', 'America/New_York', -1, null, 1], ['setMillis', 60_000], ['identifier', 256],
    ['toUtf8', 256, 'America/New_York\0junk']]);
  assert.deepEqual(icu.closed, ['America/New_York']);
  for (const [step, message] of [['open', 'failed to open calendar'], ['setMillis', 'failed to set calendar time'],
    ['identifier', 'failed to get timezone ID'], ['toUtf8:America/New_York\0junk', 'failed to convert timezone ID to UTF-8']]) {
    const failing = standInIcu({ zones, failAt: step });
    assert.throws(() => createIcuTimeZoneDatabase(failing.library).localIdentifier(0n), { message, code: 'EINVAL' }, step);
    assert.deepEqual(failing.closed, ['America/New_York']);
  }
});

test('an identifier without a NUL is returned whole', () => {
  const icu = standInIcu({ zones });
  const database = createIcuTimeZoneDatabase({ func(name, result, args) {
    const fn = icu.library.func(name, result, args);
    return name === 'ucal_getTimeZoneID' ? (calendar, output) => { output.write('UTC', 'utf16le'); return 3; } : fn;
  } });
  assert.deepEqual(database.localIdentifier(0n), Buffer.from('UTC'));
});

test('a versioned ICU library binds every function with its suffix', () => {
  const icu = standInIcu({ zones, suffix: '_72' });
  assert.equal(createIcuTimeZoneDatabase(icu.library, '_72').nextTransition('Fixed', 0n, true).offset, 19800);
});

test('outside Windows the zone queries fail as Lean\'s do', { skip: process.platform === 'win32' }, () => {
  const zone = nativeWindowsTimeZone();
  assert.equal(nativeWindowsTimeZone(), zone);
  assert.throws(() => zone.nextTransition(Buffer.from('UTC'), 0n, true),
    { message: 'failed to get timezone, its windows only.', code: 'EINVAL', errno: constants.errno.EINVAL, nativeMessage: true });
  assert.throws(() => zone.localIdentifier(0n), { message: 'timezone retrieval is Windows-only', code: 'EINVAL', nativeMessage: true });
});

// ICU 4C's C prototypes (unicode/ustring.h, unicode/ucal.h): pointers, int32_t
// lengths and enums, UDate (double) and UBool (int8_t).
const icuAbi = {
  u_strFromUTF8: ['void *', ['void *', 'int32_t', 'void *', 'void *', 'int32_t', 'void *']],
  u_strToUTF8: ['void *', ['void *', 'int32_t', 'void *', 'void *', 'int32_t', 'void *']],
  ucal_open: ['void *', ['void *', 'int32_t', 'str', 'int', 'void *']],
  ucal_close: ['void', ['void *']],
  ucal_setMillis: ['void', ['void *', 'double', 'void *']],
  ucal_getTimeZoneTransitionDate: ['int8_t', ['void *', 'int', 'void *', 'void *']],
  ucal_get: ['int32_t', ['void *', 'int', 'void *']],
  ucal_getTimeZoneDisplayName: ['int32_t', ['void *', 'int', 'str', 'void *', 'int32_t', 'void *']],
  ucal_getTimeZoneID: ['int32_t', ['void *', 'void *', 'int32_t', 'void *']],
};
test('every ICU function is bound with its C prototype', () => {
  const declared = {};
  createIcuTimeZoneDatabase({ func(name, result, args) { declared[name] = [result, args]; return () => 0; } });
  assert.deepEqual(declared, icuAbi);
});
