import { writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { build } from '../../src/build.mjs';
import { compilerIdentity } from './identity.mjs';
const directory = process.argv[2];
try {
  const before = compilerIdentity();
  const result = await build(join(directory, 'lasm.json'), join(directory, 'dist'));
  const after = compilerIdentity();
  writeFileSync(join(directory, 'build-result.json'), JSON.stringify({ buildDir: result.buildDir,
    compilerIdentityAtBuild: before, compilerSourcesChangedDuringBuild: before !== after }));
} catch (error) {
  console.error([error.message, error.stdout?.toString(), error.stderr?.toString()].filter(Boolean).join('\n'));
  process.exitCode = 1;
}
