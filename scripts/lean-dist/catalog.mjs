// Turns build-tiers.mjs reports into the src/toolchains.json `tiers` entry.
//
//   node scripts/lean-dist/catalog.mjs <base-url> report-*.json > tiers.json
import { readFile } from 'node:fs/promises';
import { fileURLToPath } from 'node:url';
import { dataLayout } from './tiers.mjs';

const MiB = 1024 * 1024;
/** Extraction bound: actual member bytes plus headroom, rounded to MiB. */
export const extractionLimit = bytes => Math.ceil((bytes + Math.max(16 * MiB, bytes / 8)) / MiB) * MiB;

const artifact = (archive, base) => ({ name: archive.name, root: archive.root, url: new URL(archive.name, base).href,
  sha256: archive.sha256, bytes: archive.bytes, format: 'tar.zst', maximumExtractedBytes: extractionLimit(archive.fileBytes) });

/** Requires every report that describes shared data to agree byte-for-byte. */
export function tierCatalogEntry(reports, base, { platforms } = {}) {
  if (!base.endsWith('/')) throw new Error('The release base URL must end with /');
  if (!reports.length) throw new Error('No tier reports');
  const versions = new Set(reports.map(report => report.version + ' ' + report.commit));
  if (versions.size !== 1) throw new Error('Tier reports describe different Lean releases');
  const bin = {};
  for (const report of reports) {
    if (platforms && !platforms.includes(report.platform)) continue;
    const archive = report.archives.find(item => item.piece === 'bin');
    if (!archive?.written) throw new Error(`No binaries archive for ${report.platform}`);
    bin[report.platform] = artifact(archive, base);
  }
  // Optional C tier (build-tiers.mjs --c), one per platform.
  const c = {};
  for (const report of reports) {
    if (platforms && !platforms.includes(report.platform)) continue;
    const archive = report.archives.find(item => item.piece === 'c' && item.written);
    if (archive) c[report.platform] = { ...artifact(archive, base), multiarch: archive.multiarch ?? null };
  }
  const pieces = [...dataLayout.core, ...dataLayout.extended].map(entry => entry.piece);
  const shared = {};
  for (const report of reports) for (const archive of report.archives.filter(item => item.piece !== 'bin')) {
    const known = shared[archive.piece];
    if (known && (known.sha256 !== archive.sha256 || known.bytes !== archive.bytes))
      throw new Error(`Shared ${archive.piece} differs between ${known.platform} and ${report.platform}`);
    if (!known || archive.written && !known.written) shared[archive.piece] = { ...archive, platform: report.platform };
  }
  for (const piece of pieces) {
    if (!shared[piece]?.written) throw new Error(`No written shared archive for ${piece}`);
    if (!Array.isArray(shared[piece].modules) || !shared[piece].modules.length) throw new Error(`No module roots for ${piece}`);
  }
  const core = dataLayout.core.map(entry => shared[entry.piece]), extended = dataLayout.extended.map(entry => shared[entry.piece]);
  const coreModules = new Set(core.flatMap(archive => archive.modules));
  const extendedModules = [...new Set(extended.flatMap(archive => archive.modules))].filter(name => !coreModules.has(name)).sort();
  return { bin, core: core.map(archive => artifact(archive, base)), extended: extended.map(archive => artifact(archive, base)), extendedModules,
    ...(Object.keys(c).length ? { c } : {}) };
}

/** Catalog entries of C tier archives alone (a C-only tier release). */
export function cTierCatalogEntry(reports, base) {
  if (!base.endsWith('/')) throw new Error('The release base URL must end with /');
  const c = {};
  for (const report of reports) {
    const archive = report.archives.find(item => item.piece === 'c' && item.written);
    if (!archive) throw new Error(`No C tier archive for ${report.platform}`);
    c[report.platform] = { ...artifact(archive, base), multiarch: archive.multiarch ?? null };
  }
  return { c };
}

if (process.argv[1] === fileURLToPath(import.meta.url)) {
  const args = process.argv.slice(2), cOnly = args[0] === '--c-only';
  const [base, ...files] = cOnly ? args.slice(1) : args;
  const reports = await Promise.all(files.map(async file => JSON.parse(await readFile(file, 'utf8'))));
  console.log(JSON.stringify(cOnly ? cTierCatalogEntry(reports, base) : tierCatalogEntry(reports, base), null, 2));
}
