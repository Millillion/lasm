// Cross-language ICU control only. Linux's ICU is never a deployed substitute
// for the Windows database; production selection still follows the host OS.
import { createRequire } from 'node:module';
import { createIcuTimeZoneDatabase } from '../../src/native-windows-timezone.mjs';

const [library, suffix, operation, ...args] = process.argv.slice(2);
const ffi = createRequire(import.meta.url)('koffi');
const database = createIcuTimeZoneDatabase(ffi.load(library), suffix);
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
