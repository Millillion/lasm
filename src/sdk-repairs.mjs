import { readFile, writeFile, cp } from 'node:fs/promises';
import { join } from 'node:path';
import { createHash } from 'node:crypto';
import { deriveArtifact } from './managed-artifacts.mjs';

export const sdkRepairs = JSON.parse(await readFile(new URL('./sdk-repairs.json', import.meta.url), 'utf8'));
const digest = value => createHash('sha256').update(value).digest('hex');

/** Exact source repairs, with no external patch command or mutable SDK input. */
export function repairSdkFile(path, content, manifest = sdkRepairs) {
  const file = manifest.files.find(file => file.path === path);
  if (!file || digest(content) !== file.originalSha256) throw new Error(`SDK repair source drift: ${path}`);
  for (const { before, after } of file.replacements) {
    if (content.split(before).length !== 2) throw new Error(`SDK repair context mismatch: ${path}`);
    content = content.replace(before, after);
  }
  if (digest(content) !== file.patchedSha256) throw new Error(`SDK repair output mismatch: ${path}`);
  return content;
}

export async function prepareSdkRepairs(installed, options = {}) {
  const version = (await readFile(join(installed.directory, 'emscripten/emscripten-version.txt'), 'utf8')).trim().replaceAll('"', '');
  if (version !== sdkRepairs.archiveVersion) throw new Error(`SDK repairs do not support archive ${version}`);
  return deriveArtifact({ kind: 'emscripten-runtime-repairs', sourceIdentity: installed.identity,
    manifestSha256: digest(JSON.stringify(sdkRepairs)) }, async output => {
    // Preserve the downloaded compiler and sysroot verbatim. Only the source
    // driver's derived copy gets the reviewed runtime repairs.
    await cp(join(installed.directory, 'emscripten'), output, { recursive: true });
    const changes = [];
    for (const file of sdkRepairs.files) {
      const path = join(output, file.path);
      changes.push({ path, content: repairSdkFile(file.path, await readFile(path, 'utf8')) });
    }
    for (const { path, content } of changes) await writeFile(path, content);
  }, options);
}
