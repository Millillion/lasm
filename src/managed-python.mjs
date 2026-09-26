import { readFile } from 'node:fs/promises';
import { join } from 'node:path';
import { execFileSync } from 'node:child_process';
import { provisionArtifact } from './managed-artifacts.mjs';

export const pythonCatalog = JSON.parse(await readFile(new URL('./python-tools.json', import.meta.url), 'utf8'));

// Python is a private compiler dependency. Node's streaming gzip bootstrap
// supplies it without requiring Python, tar, or an SDK on the user's PATH.
export async function provisionPython(options = {}) {
  const platform = options.platform ?? process.platform, arch = options.arch ?? process.arch;
  const host = `${platform}-${arch}`, release = options.catalog ?? pythonCatalog;
  const artifact = release.artifacts[host];
  if (!artifact) throw new Error(`Managed build Python is not available for ${host}`);
  const installed = await provisionArtifact(artifact, { ...options, label: `Python ${release.version}` });
  const executable = join(installed.directory, platform === 'win32' ? 'python.exe' : 'bin/python3');
  // Isolation ignores global PYTHONHOME/PYTHONPATH; -B keeps the verified cache
  // immutable when importing standard modules needed by the build tools.
  const identity = JSON.parse(execFileSync(executable, ['-I', '-B', '-c',
    'import json,sys,platform,lzma,zipfile; print(json.dumps({"version":platform.python_version(),"machine":platform.machine(),"platform":sys.platform}))'],
    { encoding: 'utf8', timeout: 30_000, windowsHide: true }));
  const machine = { x64: ['AMD64', 'x86_64'], arm64: ['ARM64', 'arm64', 'aarch64'] }[arch] ?? [];
  if (identity.version !== release.version || identity.platform !== platform || !machine.includes(identity.machine))
    throw new Error(`Managed Python identity mismatch for ${host}: ${JSON.stringify(identity)}`);
  return { ...installed, executable, version: identity.version, platform: host, machine: identity.machine };
}
