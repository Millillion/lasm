import { execFileSync } from 'node:child_process';
import { existsSync, readFileSync, statSync } from 'node:fs';
import { dirname, join, resolve, relative } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createHash } from 'node:crypto';

export const root = resolve(dirname(fileURLToPath(import.meta.url)), '..');
export const lean = process.env.LEAN ?? 'lean';
export const leanVersion = '4.32.0';
export const leanCommit = '8c9756b28d64dab099da31a4c09229a9e6a2ef35';
export const targetName = `lean-${leanVersion}-wasm32-v1`;
export const env = { ...process.env };
export const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');
export function run(executable, args, extra = {}) {
  return execFileSync(executable, args, { cwd: root, env, encoding: 'utf8',
    stdio: ['ignore', 'pipe', 'pipe'], timeout: 180_000, maxBuffer: 16 * 1024 * 1024, ...extra }).trim();
}

export function assertPlatform(platform = process.platform, architecture = process.arch) {
  if (platform !== 'linux' || architecture !== 'x64') {
    throw new Error(`Lasm builds currently support linux-x64; received ${platform}-${architecture}. Generated browser/Worker modules are platform independent.`);
  }
  if (Number(process.versions.node.split('.')[0]) < 24) throw new Error('Lasm requires Node.js 24 or newer');
}

export function readTargetManifest(target) {
  const bytes = readFileSync(join(target, 'target.json'));
  const manifest = JSON.parse(bytes);
  if (manifest.schema !== 1 || manifest.leanCommit !== leanCommit || manifest.name !== targetName
      || !manifest.files || typeof manifest.files !== 'object' || Array.isArray(manifest.files)
      || !Object.keys(manifest.files).length || !Array.isArray(manifest.linkLibraries)
      || !manifest.linkLibraries.length || manifest.linkLibraries.some(path => !Object.hasOwn(manifest.files, path))) {
    throw new Error('Incompatible Lasm target archive');
  }
  for (const [path, hash] of Object.entries(manifest.files)) {
    const file = resolve(target, path);
    if (!path || path.startsWith('/') || relative(target, file).startsWith('..') || !existsSync(file)
        || !statSync(file).isFile() || sha256(readFileSync(file)) !== hash) {
      throw new Error(`Lasm target checksum mismatch: ${path}`);
    }
  }
  return { manifest, identity: sha256(bytes) };
}

export async function getToolchain(cwd) {
  assertPlatform();
  const hostCommit = run(lean, ['--githash'], { cwd });
  if (hostCommit !== leanCommit) throw new Error(`Project Lean toolchain must match Lean ${leanVersion} (${leanCommit})`);
  const prefix = run(lean, ['--print-prefix'], { cwd });
  const target = resolve(process.env.LASM_TARGET_DIR ?? join(root, 'targets', targetName));
  if (existsSync(join(target, 'target.json'))) {
    const { manifest, identity } = readTargetManifest(target);
    const cFlags = ['--target=wasm32-wasip1', '-O2', '-DNDEBUG', '-ffunction-sections', '-fdata-sections',
      '-I', join(target, 'include'), '-I', join(prefix, 'include'),
      '-isystem', join(target, 'sysroot/clang'), '-isystem', join(target, 'sysroot/include')];
    return {
      prefix, hostCommit, identity, kind: 'packaged-clang',
      standardDirectory: join(target, 'stdlib'), noticeFile: join(target, 'THIRD_PARTY_NOTICES.txt'),
      compileC(source, object) { run(join(prefix, 'bin/clang'), [...cFlags, '-c', source, '-o', object], { cwd }); },
      link(objects, exports, output) {
        run(join(prefix, 'bin/ld.lld'), ['-flavor', 'wasm', '--entry=_initialize', '--export-memory', '--stack-first', '--strip-all',
          '-z', 'stack-size=1048576', '--max-memory=268435456', ...exports.map(e => `--export=${e}`), ...objects,
          join(target, 'lib/libleanrt.a'), join(target, 'lib/libleanstd.a'),
          ...manifest.linkLibraries.map(file => join(target, file)), '-o', output], { cwd });
      },
    };
  }
  if (process.env.LASM_TARGET_DIR || !existsSync(join(root, 'scripts/build-runtime.mjs'))) {
    throw new Error(`Missing Lasm target archive ${targetName}. Install the complete compiler package; no build-time downloads are performed.`);
  }
  const reference = await import('../scripts/build-runtime.mjs');
  const archive = reference.buildRuntime();
  return {
    prefix, hostCommit, identity: readFileSync(join(reference.runtimeDir, 'build-identity.json'), 'utf8'), kind: 'reference-zig',
    standardCache: join(reference.runtimeDir, 'stdlib'), reference,
    compileC(source, object) { reference.run(reference.zig, ['cc', ...reference.targetFlags, '-c', source, '-o', object]); },
    link(objects, exports, output) {
      reference.run(reference.zig, ['c++', ...reference.targetFlags, '-fno-exceptions', '-mexec-model=reactor', ...objects, archive,
        ...exports.map(n => `-Wl,--export=${n}`), '-Wl,--strip-all', '-Wl,-z,stack-size=1048576', '-Wl,--max-memory=268435456', '-o', output]);
    },
  };
}

export function optimizeWasm(input, output) {
  const args = [input, '-O2', '--asyncify', '--pass-arg=asyncify-imports@lasm.request', '--enable-bulk-memory', '--enable-sign-ext', '-o', output];
  if (process.env.WASM_OPT) return run(process.env.WASM_OPT, args);
  const bundled = join(root, 'tools/wasm-opt.cjs');
  if (existsSync(bundled)) {
    const metadata = JSON.parse(readFileSync(join(root, 'tools/tooling.json')));
    if (metadata.binaryen !== '132.0.0' || metadata.sha256 !== sha256(readFileSync(bundled))) throw new Error('Packaged Binaryen checksum mismatch');
    return run(process.execPath, [bundled, ...args]);
  }
  if (existsSync(join(root, 'targets'))) throw new Error('Packaged Binaryen optimizer is missing; reinstall the complete compiler package');
  const binaryen = fileURLToPath(new URL('./bin/wasm-opt', import.meta.resolve('binaryen')));
  return run(process.execPath, [binaryen, ...args]);
}
