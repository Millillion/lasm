// Private native-host API control, not a deployed Lean application.
import assert from 'node:assert/strict';
import { nativeWindowsTimeZone } from '../../src/native-windows-timezone.mjs';

assert.equal(process.platform, 'win32');
const [operation, ...args] = process.argv.slice(2), database = nativeWindowsTimeZone();
try {
  if (operation === 'transition') {
    const [name, seconds, initial] = args;
    const zone = database.nextTransition(Buffer.from(name), BigInt(seconds), initial === 'true');
    console.log(zone === null ? 'value|none' : `value|some|${zone.timestamp}|${zone.offset}|${zone.isDST}|${zone.name}|${zone.abbreviation}`);
  } else if (operation === 'local') console.log('value|' + database.localIdentifier(BigInt(args[0])));
  else throw new Error('Invalid oracle operation');
} catch (error) {
  if (error.code !== 'EINVAL') throw error;
  console.log(`error|${error.errno}|${error.message}`);
}
