import { cpSync, copyFileSync, existsSync, readdirSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { createHash } from 'node:crypto';

/** Node deployments already require the builder's Linux architecture and glibc. */
export function copyApplicationNativeBundle(root, output, { arch = process.arch } = {}) {
  if (!['x64', 'arm64'].includes(arch)) throw new Error('Unsupported Node application architecture');
  const source = [join(root, 'src/native'), join(root, '.cache/native-host')].find(path => existsSync(join(path, 'manifest.json')));
  if (!source) throw new Error('Native Node file adapter is missing. Reinstall the complete Lasm package.');
  const destination = join(output, 'native');
  const copy = name => {
    mkdirSync(dirname(join(destination, name)), { recursive: true });
    copyFileSync(join(source, name), join(destination, name));
  };
  const json = name => JSON.parse(readFileSync(join(source, name), 'utf8'));
  const write = (name, value) => {
    mkdirSync(dirname(join(destination, name)), { recursive: true });
    writeFileSync(join(destination, name), JSON.stringify(value, null, 2) + '\n');
  };
  // Preserve the vendor's loaders and license, without its C++ source tree,
  // build scripts, other architectures, or the incompatible musl binary.
  const packageName = `@koromix/koffi-linux-${arch}`;
  const manifest = json('manifest.json');
  const packages = manifest.packages.filter(item => ['koffi', packageName].includes(item.name));
  if (manifest.nodeApi !== 8 || packages.length !== 2 || packages.some(item => item.version !== '3.3.0'))
    throw new Error('Unrecognized native application adapter layout');
  for (const name of ['index.cjs', 'src/koffi/index.cjs', 'src/koffi/src/static.cjs', 'package.json', 'LICENSE.txt'])
    copy('node_modules/koffi/' + name);
  for (const name of ['index.js', 'package.json', `linux_${arch}/koffi.node`])
    copy(`node_modules/${packageName}/${name}`);
  write('manifest.json', { ...manifest, packages, deployment: { target: 'node', platform: 'linux', arch, libc: 'glibc' } });
  for (const [directory, name] of [['process', `linux-${arch}-gnu`], ['signals', `linux-${arch}-gnu.so`]]) {
    const manifest = json(directory + '/manifest.json'), record = manifest.files?.[name];
    const bytes = readFileSync(join(source, directory, name));
    if (manifest.protocol !== 1 || record?.bytes !== bytes.length
        || record.sha256 !== createHash('sha256').update(bytes).digest('hex'))
      throw new Error('Native application helper integrity mismatch: ' + name);
    copy(directory + '/' + name); copy(directory + '/THIRD_PARTY_NOTICES.txt');
    write(directory + '/manifest.json', { ...manifest, files: { [name]: record } });
  }
}

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
