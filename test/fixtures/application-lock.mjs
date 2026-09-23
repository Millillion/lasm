import { withApplicationLock } from '../../src/application-lock.mjs';
import { readFile, writeFile } from 'node:fs/promises';
const [lock, value, mode] = process.argv.slice(2);
if (mode === 'hold') {
  await withApplicationLock(lock, async () => {
    process.send?.('locked');
    await new Promise(resolve => setInterval(resolve, 60_000));
  });
} else {
  for (let i = 0; i < 5; i++) await withApplicationLock(lock, async () => {
    const previous = Number(await readFile(value, 'utf8'));
    await new Promise(resolve => setTimeout(resolve, 5));
    await writeFile(value, String(previous + 1));
  });
}
