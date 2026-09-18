import { cpSync, existsSync } from 'node:fs';
import { join } from 'node:path';

export function copyNativeBundle(root, output) {
  const source = [join(root, 'src/native'), join(root, '.cache/native-host')].find(path => existsSync(join(path, 'manifest.json')));
  if (!source) throw new Error('Native Node file adapter is missing. Maintainers: run node scripts/prepare-native.mjs. Installed users: reinstall the complete Lasm package.');
  cpSync(source, join(output, 'native'), { recursive: true });
}
