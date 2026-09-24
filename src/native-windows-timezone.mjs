import { createRequire } from 'node:module';
import { existsSync } from 'node:fs';
import { constants } from 'node:os';
import { fileURLToPath } from 'node:url';

const require = createRequire(import.meta.url);
let implementation;
function invalid(message) {
  // These messages are constructed by Lean, not strerror/libuv. Preserve them
  // under both error policies, including the native positive EINVAL number.
  return Object.assign(new Error(message), {
    code: 'EINVAL', errno: constants.errno.EINVAL, nativeMessage: true,
  });
}

/** Private binding to the ICU C ABI used by Lean's Windows runtime. */
export function createIcuTimeZoneDatabase(library, suffix = '') {
  const bind = (name, result, args) => library.func(name + suffix, result, args);
  const fromUtf8 = bind('u_strFromUTF8', 'void *', ['void *', 'int32_t', 'void *', 'void *', 'int32_t', 'void *']);
  const toUtf8 = bind('u_strToUTF8', 'void *', ['void *', 'int32_t', 'void *', 'void *', 'int32_t', 'void *']);
  const open = bind('ucal_open', 'void *', ['void *', 'int32_t', 'str', 'int', 'void *']);
  const close = bind('ucal_close', 'void', ['void *']);
  const setMillis = bind('ucal_setMillis', 'void', ['void *', 'double', 'void *']);
  const transition = bind('ucal_getTimeZoneTransitionDate', 'int8_t', ['void *', 'int', 'void *', 'void *']);
  const get = bind('ucal_get', 'int32_t', ['void *', 'int', 'void *']);
  const displayName = bind('ucal_getTimeZoneDisplayName', 'int32_t', ['void *', 'int', 'str', 'void *', 'int32_t', 'void *']);
  const identifier = bind('ucal_getTimeZoneID', 'int32_t', ['void *', 'void *', 'int32_t', 'void *']);
  const check = (status, message) => { if (status.readInt32LE() > 0) throw invalid(message); };
  const millis = seconds => Number(BigInt.asIntN(64, BigInt.asIntN(64, BigInt(seconds)) * 1000n));
  function utf8(text, length, status, message) {
    const bytes = Buffer.alloc(256), size = Buffer.alloc(4);
    toUtf8(bytes, bytes.length, size, text, length, status);
    check(status, message);
    return bytes.subarray(0, size.readInt32LE());
  }
  return {
    nextTransition(name, timestamp, initial) {
      const status = Buffer.alloc(4);
      // ICU warns, rather than fails, for an exactly-full output. An extra
      // terminator keeps its subsequent -1 length read within allocated memory.
      const zone = Buffer.alloc(2 * 257);
      fromUtf8(zone, 256, null, name, name.length, status);
      check(status, 'failed to read identifier');
      const calendar = open(zone, -1, null, 1 /* UCAL_GREGORIAN */, status);
      try {
        check(status, 'failed to open calendar');
        let time = 0n;
        if (!initial) {
          setMillis(calendar, millis(timestamp), status);
          check(status, 'failed to set calendar time');
          const next = Buffer.alloc(8);
          // Match Lean's ordering: no transition returns none before it checks
          // the status. Querying does not move the calendar to the transition.
          if (!transition(calendar, 0 /* NEXT */, next, status)) return null;
          check(status, 'failed to get next transition');
          time = BigInt(Math.ceil(next.readDoubleLE() / 1000));
        }
        const daylightOffset = get(calendar, 16 /* DST_OFFSET */, status);
        check(status, 'failed to get dst_offset');
        const isDST = daylightOffset !== 0;
        const nameLength = displayName(calendar, isDST ? 2 : 0, 'en_US', zone, 32, status);
        check(status, 'failed to timezone identifier');
        const display = utf8(zone, nameLength, status, 'failed to convert DST name to UTF-8');
        const abbreviated = Buffer.alloc(2 * 32);
        const abbreviationLength = displayName(calendar, isDST ? 3 : 1, 'en_US', abbreviated, 32, status);
        check(status, 'failed to read abbreaviation');
        const abbreviation = utf8(abbreviated, abbreviationLength, status, 'failed to get abbreviation to cstr');
        const offset = get(calendar, 15 /* ZONE_OFFSET */, status) + daylightOffset;
        check(status, 'failed to get zone_offset');
        return { timestamp: time, offset: Math.trunc(offset / 1000), isDST, name: display, abbreviation };
      } finally { close(calendar); }
    },
    localIdentifier(timestamp) {
      const status = Buffer.alloc(4), calendar = open(null, -1, null, 1, status);
      try {
        check(status, 'failed to open calendar');
        setMillis(calendar, millis(timestamp), status);
        check(status, 'failed to set calendar time');
        const zone = Buffer.alloc(2 * 256);
        const length = identifier(calendar, zone, 256, status);
        check(status, 'failed to get timezone ID');
        const bytes = utf8(zone, length, status, 'failed to convert timezone ID to UTF-8');
        const nul = bytes.indexOf(0);
        return nul < 0 ? bytes : bytes.subarray(0, nul);
      } finally { close(calendar); }
    },
  };
}

export function nativeWindowsTimeZone() {
  if (implementation) return implementation;
  if (process.platform !== 'win32') return implementation = {
    nextTransition() { throw invalid('failed to get timezone, its windows only.'); },
    localIdentifier() { throw invalid('timezone retrieval is Windows-only'); },
  };
  const bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
  const ffi = existsSync(bundled) ? require(fileURLToPath(bundled)) : require('koffi');
  // Lean links the combined Windows ICU C library, available since Windows 10
  // 1903. Use that same OS database instead of the engine's Intl implementation.
  return implementation = createIcuTimeZoneDatabase(ffi.load('icu.dll'));
}
