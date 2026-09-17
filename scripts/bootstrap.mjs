// Explicit maintainer setup; this is not an npm install/postinstall hook.
import { createHash } from 'node:crypto';
import { existsSync, mkdirSync, readFileSync, writeFileSync, renameSync, rmSync } from 'node:fs';
import { execFileSync } from 'node:child_process';
import { resolve, dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = resolve(dirname(fileURLToPath(import.meta.url)), '..');
const pins = JSON.parse(readFileSync(join(root, 'experiments/feasibility/toolchains.json'), 'utf8'));
if (process.platform !== 'linux' || process.arch !== 'x64') throw new Error('The pinned reference build currently supports Linux x64 only');
const downloads = join(root, '.cache/downloads');
mkdirSync(downloads, { recursive: true });
for (const artifact of [
  { url: pins.lean.sourceUrl, file: 'lean4-v4.32.0.tar.gz', digest: pins.lean.observedSourceArchiveSha256, directory: 'lean4-4.32.0' },
  { url: pins.zig.url, file: 'zig-x86_64-linux-0.16.0.tar.xz', digest: pins.zig.officialSha256, directory: 'zig-x86_64-linux-0.16.0' },
]) {
  const path = join(downloads, artifact.file);
  if (!existsSync(path)) {
    console.log(`Downloading ${artifact.file}`);
    const response = await fetch(artifact.url, { signal: AbortSignal.timeout(180_000) });
    if (!response.ok) throw new Error(`Download failed: HTTP ${response.status}`);
    writeFileSync(path + '.partial', new Uint8Array(await response.arrayBuffer()));
    renameSync(path + '.partial', path);
  }
  const actual = createHash('sha256').update(readFileSync(path)).digest('hex');
  if (actual !== artifact.digest) throw new Error(`Checksum mismatch: ${artifact.file}; remove this download before retrying`);
  const destination = join(root, '.cache', artifact.directory);
  const marker = join(destination, '.lasm-verified');
  if (!existsSync(marker) || readFileSync(marker, 'utf8') !== artifact.digest) {
    console.log(`Extracting verified ${artifact.file}`);
    const staging = join(root, '.cache', artifact.directory + '.extracting');
    rmSync(staging, { recursive: true, force: true });
    mkdirSync(staging, { recursive: true });
    execFileSync('tar', ['-xf', path, '-C', staging, '--strip-components=1'], { stdio: 'inherit' });
    writeFileSync(join(staging, '.lasm-verified'), artifact.digest);
    rmSync(destination, { recursive: true, force: true });
    renameSync(staging, destination);
  }
  console.log(`Verified ${artifact.directory}`);
}
console.log('Reference build dependencies are ready. Lean 4.32.0 must also be installed through elan.');
