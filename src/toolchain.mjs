import { execFileSync } from 'node:child_process';
import { existsSync, readFileSync, statSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createHash } from 'node:crypto';
import { homedir } from 'node:os';
import { assertSupportedHost, executableName, insideDirectory } from './platform.mjs';

export const root = resolve(dirname(fileURLToPath(import.meta.url)), '..');
export const lean = process.env.LEAN ?? executableName('lean');
export const leanVersion = '4.32.0';
export const leanCommit = '8c9756b28d64dab099da31a4c09229a9e6a2ef35';
export const targetName = `lean-${leanVersion}-wasm32-v1`;
export const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');
export function run(executable, args, extra = {}) {
  return execFileSync(executable, args, { cwd: root, env: { ...process.env }, encoding: 'utf8',
    windowsHide: true, stdio: ['ignore', 'pipe', 'pipe'], timeout: 180_000, maxBuffer: 16 * 1024 * 1024, ...extra }).trim();
}

export function assertPlatform(platform = process.platform, architecture = process.arch) {
  assertSupportedHost(platform, architecture);
  if (Number(process.versions.node.split('.')[0]) < 24) throw new Error('Lasm requires Node.js 24 or newer');
}

export function assertLeanCommit(commit) {
  if (commit !== leanCommit) throw new Error(`Project Lean toolchain must match Lean ${leanVersion} (${leanCommit})`);
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
    if (!path || /[\\:]/.test(path) || path.split('/').some(part => !part || part === '.' || part === '..')
        || !insideDirectory(target, file) || !existsSync(file)
        || !statSync(file).isFile() || sha256(readFileSync(file)) !== hash) {
      throw new Error(`Lasm target checksum mismatch: ${path}`);
    }
  }
  return { manifest, identity: sha256(bytes) };
}

export function resolveLean(cwd) {
  assertPlatform();
  let selectedLean = lean;
  let hostCommit;
  try { hostCommit = run(selectedLean, ['--githash'], { cwd }); }
  catch (error) {
    // An installed Elan toolchain need not be the global default. Resolve the
    // exact already-installed version without downloading or changing settings.
    const installed = join(process.env.ELAN_HOME ?? join(homedir(), '.elan'), 'toolchains',
      'leanprover--lean4---v4.32.0', 'bin', executableName('lean'));
    if (process.env.LEAN || !String(error.stderr).includes('no default toolchain configured') || !existsSync(installed)) throw error;
    selectedLean = installed;
    hostCommit = run(selectedLean, ['--githash'], { cwd });
  }
  assertLeanCommit(hostCommit);
  const prefix = run(selectedLean, ['--print-prefix'], { cwd });
  return { prefix, hostCommit, lean: join(prefix, 'bin', executableName('lean')) };
}
