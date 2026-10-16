#!/usr/bin/env node
// Turns build-toolchain.mjs reports into the link-toolchain catalog entry, after
// requiring that every platform's emsdk archive yields the same Emscripten
// JavaScript subset and the same shared archive bytes.
//
//   node scripts/link-driver/toolchain-catalog.mjs <release-base-url> report-*.json > link-toolchain.json
import { readFile } from 'node:fs/promises';
import { fileURLToPath } from 'node:url';
import { extractionLimit } from '../lean-dist/catalog.mjs';

export const sizeCeiling = 150 * 1024 * 1024;
const artifact = (archive, base) => ({ name: archive.name.replace(/\.tar\.zst$/, ''), root: archive.root,
  url: new URL(archive.name, base).href, sha256: archive.sha256, bytes: archive.bytes, format: 'tar.zst',
  maximumExtractedBytes: extractionLimit(archive.fileBytes) });

export function toolchainCatalogEntry(reports, base) {
  if (!base.endsWith('/')) throw new Error('The release base URL must end with /');
  if (!reports.length) throw new Error('No toolchain reports');
  const versions = new Set(reports.map(report => `${report.emscripten} ${report.releasesCommit}`));
  if (versions.size !== 1) throw new Error('Toolchain reports describe different Emscripten releases');
  const digests = new Map(reports.map(report => [report.platform, report.emscriptenSubset.digest]));
  if (new Set(digests.values()).size !== 1)
    throw new Error(`The Emscripten JavaScript subset differs between platforms: ${JSON.stringify(Object.fromEntries(digests))}`);
  const native = {};
  let shared;
  for (const report of reports) {
    const tools = report.archives.find(item => item.piece === 'native');
    if (!tools?.written || !tools.repacked) throw new Error(`No deterministic native archive for ${report.platform}`);
    if (native[report.platform]) throw new Error(`Duplicate report for ${report.platform}`);
    native[report.platform] = { ...artifact(tools, base), externalLibraries: Object.keys(report.externalImports).sort() };
    const piece = report.archives.find(item => item.piece === 'shared');
    if (!piece) throw new Error(`No shared archive digest for ${report.platform}`);
    if (shared && (shared.sha256 !== piece.sha256 || shared.bytes !== piece.bytes))
      throw new Error(`The shared archive differs between ${shared.platform} and ${report.platform}`);
    if (!shared || piece.written && !shared.written) shared = { ...piece, platform: report.platform };
  }
  if (!shared.written) throw new Error('No written shared archive');
  for (const item of [...Object.values(native), shared]) if (item.bytes > sizeCeiling) throw new Error(`${item.name} exceeds 150 MiB`);
  const [first] = reports;
  return { version: first.emscripten, releasesCommit: first.releasesCommit, emscriptenSubset: first.emscriptenSubset.digest,
    sysroot: shared.sysroot, native, shared: artifact(shared, base),
    upstream: Object.fromEntries(reports.map(report => [report.platform, report.upstream.sha256])) };
}

if (process.argv[1] === fileURLToPath(import.meta.url)) {
  const [base, ...files] = process.argv.slice(2);
  const reports = await Promise.all(files.map(async file => JSON.parse(await readFile(file, 'utf8'))));
  console.log(JSON.stringify(toolchainCatalogEntry(reports, base), null, 2));
}
