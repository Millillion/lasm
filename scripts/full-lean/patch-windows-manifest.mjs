// Correct native Windows bootstrap dependencies, without modifying Lean tests
// or language/runtime source. Refuse drift from the pinned upstream release.
import { readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { createHash } from 'node:crypto';

const root = resolve(process.argv[2]);
const version = process.argv[3] ?? '4.34.0';
if (!['4.34.0', '4.34.1'].includes(version)) throw new Error('Unverified Windows manifest patch version');
const inputs = {
  'src/CMakeLists.txt': version === '4.34.0'
    ? '037075df7198856d4b14095ebcde87733922c045a23c26b897e52cb6c5bda3a7'
    : '1b84c50d9892f7ca5801d78ca0326c9107ea108a10f5c4617785cd06b1e99948',
  'stage0/src/CMakeLists.txt': '51a789a8bb01612cdb998aaad6a3bc6df31b5628c247745f81d94345e3e182fd',
};
const hash = text => createHash('sha256').update(text).digest('hex');
const changes = [];
for (const [name, sha256] of Object.entries(inputs)) {
  const path = join(root, name), original = readFileSync(path, 'utf8');
  if (hash(original) !== sha256) throw new Error(`Windows manifest patch source drift: ${name}`);
  const anchor = 'project(LEAN CXX C)';
  if (original.split(anchor).length !== 2) throw new Error(`CMake project declaration drift: ${name}`);
  const patched = original.replace(anchor, anchor + '\nif(CMAKE_SYSTEM_NAME MATCHES "Windows")\n  enable_language(RC)\nendif()') + `
# Lasm bootstrap: every executable links -lleanmanifest; build it first.
if(CMAKE_SYSTEM_NAME MATCHES "Windows")
  foreach(program lean lake leanchecker)
    if(TARGET \${program})
      add_dependencies(\${program} leanmanifest)
    endif()
  endforeach()
endif()
`;
  changes.push({ path, name, originalSha256: sha256, patchedSha256: hash(patched), patched });
}
for (const { path, patched } of changes) writeFileSync(path, patched);
console.log(JSON.stringify({ scope: 'Windows RC language and manifest archive build order only',
  files: changes.map(({ name, originalSha256, patchedSha256 }) => ({ name, originalSha256, patchedSha256 })) }, null, 2));
