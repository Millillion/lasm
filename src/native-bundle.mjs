import { cpSync, existsSync, readdirSync, mkdirSync } from 'node:fs';
import { join } from 'node:path';

export function copyNativeBundle(root, output) {
  const source = [join(root, 'src/native'), join(root, '.cache/native-host')].find(path => existsSync(join(path, 'manifest.json')));
  if (!source) throw new Error('Native Node file adapter is missing. Maintainers: run node scripts/prepare-native.mjs. Installed users: reinstall the complete Lasm package.');
  if (!existsSync(join(source, 'process/manifest.json'))) throw new Error('Native process launcher is missing. Maintainers: run node scripts/build-process-launcher.mjs.');
  if (!existsSync(join(source, 'bun-stack/manifest.json'))) throw new Error('Native Bun stack helper is missing. Maintainers: run node scripts/build-bun-stack.mjs.');
  if (!existsSync(join(source, 'signals/manifest.json'))) throw new Error('Native signal helper is missing. Maintainers: run node scripts/build-signal-helper.mjs.');
  cpSync(source, join(output, 'native'), { recursive: true });
}

// Full-compiler snapshots only need these small executables here; their
// existing native FFI resolution is unchanged. Include every file in the
// snapshot inventory so resumable suites detect binary or manifest drift.
export function copyProcessLauncherBundle(root, output) {
  const source = [join(root, 'src/native/process'), join(root, '.cache/native-host/process')]
    .find(path => existsSync(join(path, 'manifest.json')));
  if (!source) throw new Error('Run node scripts/build-process-launcher.mjs before freezing the native launcher');
  mkdirSync(join(output, 'native'), { recursive: true });
  cpSync(source, join(output, 'native/process'), { recursive: true });
  return readdirSync(source).map(name => `native/process/${name}`);
}
