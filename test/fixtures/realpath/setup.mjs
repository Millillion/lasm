import { mkdirSync, writeFileSync, symlinkSync, chmodSync } from 'node:fs';
import { join } from 'node:path';

export function setupRealPath(directory) {
  mkdirSync(join(directory, 'target/child'), { recursive: true });
  writeFileSync(join(directory, 'file'), 'outside');
  writeFileSync(join(directory, 'target/file'), 'inside');
  symlinkSync('target/child', join(directory, 'link'));
  symlinkSync('loop', join(directory, 'loop'));
  // Lean groups invalid UTF-8 and following continuation bytes into one
  // replacement character. Node's string decoder can split that sequence.
  const raw = Buffer.concat([Buffer.from('target/bad'), Buffer.from([0xff, 0x80])]);
  writeFileSync(Buffer.concat([Buffer.from(directory + '/'), raw]), 'raw name');
  symlinkSync(raw, join(directory, 'raw-link'));
  mkdirSync(join(directory, 'denied'));
  writeFileSync(join(directory, 'denied/secret'), 'secret');
  chmodSync(join(directory, 'denied'), 0);
}
