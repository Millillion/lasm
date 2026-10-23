import { chmodSync, cpSync, copyFileSync, existsSync, readdirSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { createHash } from 'node:crypto';
import { assertSupportedHost } from './platform.mjs';

// Every deployment carries Linux x64 and arm64 (glibc) native pieces, so a build
// on macOS, Windows or either Linux architecture deploys to Linux containers
// and functions. The build host's own pieces are added when it is not Linux.
export const deploymentTargets = ['linux-x64', 'linux-arm64'];

/** The native targets a deployment built on this host carries. */
export function applicationNativeTargets(platform = process.platform, arch = process.arch) {
  return [...new Set([...deploymentTargets, `${platform}-${arch}`])];
}

/** Native FFI and helpers for the build host plus every deployment target. */
export function copyApplicationNativeBundle(root, output, { platform = process.platform, arch = process.arch } = {}) {
  if (!['x64', 'arm64'].includes(arch)) throw new Error('Unsupported Node application architecture');
  if (!['linux', 'darwin', 'win32'].includes(platform)) throw new Error('Unsupported Node application platform');
  assertSupportedHost(platform, arch);
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
  const targets = applicationNativeTargets(platform, arch);
  // Preserve the vendor's loaders and license, without its C++ source tree,
  // build scripts, other platforms, or the musl binaries (glibc Linux only).
  const packageNames = targets.map(target => `@koromix/koffi-${target}`);
  const manifest = json('manifest.json');
  const packages = manifest.packages.filter(item => ['koffi', ...packageNames].includes(item.name));
  if (manifest.nodeApi !== 8 || packages.length !== targets.length + 1 || packages.some(item => item.version !== '3.3.0'))
    throw new Error('Unrecognized native application adapter layout');
  for (const name of ['index.cjs', 'src/koffi/index.cjs', 'src/koffi/src/static.cjs', 'package.json', 'LICENSE.txt'])
    copy('node_modules/koffi/' + name);
  for (const target of targets) {
    const [os, cpu] = target.split('-');
    for (const name of ['index.js', 'package.json', `${os}_${cpu}/koffi.node`]) copy(`node_modules/@koromix/koffi-${target}/${name}`);
  }
  write('manifest.json', { ...manifest, packages, deployment: { target: 'node', targets, linuxLibc: 'glibc' } });
  const helpers = { process: [], signals: [] };
  for (const target of targets) {
    const [os, cpu] = target.split('-');
    if (os === 'linux') { helpers.process.push(`linux-${cpu}-gnu`); helpers.signals.push(`linux-${cpu}-gnu.so`); }
    else if (os === 'darwin') helpers.signals.push(`darwin-${cpu}.dylib`);
  }
  for (const [directory, names] of Object.entries(helpers)) {
    if (!names.length) continue;
    const manifest = json(directory + '/manifest.json'), files = {};
    for (const name of names) {
      const record = manifest.files?.[name], bytes = readFileSync(join(source, directory, name));
      if (manifest.protocol !== 1 || record?.bytes !== bytes.length
          || record.sha256 !== createHash('sha256').update(bytes).digest('hex'))
        throw new Error('Native application helper integrity mismatch: ' + name);
      copy(directory + '/' + name);
      // Linux helpers are executed; keep them executable even when the build
      // host's file system (Windows) does not record execute permissions.
      if (name.startsWith('linux-') && directory === 'process') chmodSync(join(destination, directory, name), 0o755);
      files[name] = record;
    }
    copy(directory + '/THIRD_PARTY_NOTICES.txt');
    write(directory + '/manifest.json', { ...manifest, files });
  }
}

export function copyNativeBundle(root, output) {
  const source = [join(root, 'src/native'), join(root, '.cache/native-host')].find(path => existsSync(join(path, 'manifest.json')));
  if (!source) throw new Error('Native Node file adapter is missing. Maintainers: run node scripts/prepare-native.mjs. Installed users: reinstall the complete Lasm package.');
  if (!existsSync(join(source, 'process/manifest.json'))) throw new Error('Native process launcher is missing. Maintainers: run node scripts/build-process-launcher.mjs.');
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
