// Every campaign uses one exact release. Older passes never carry forward.
import { readFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const pins = JSON.parse(readFileSync(new URL('../full-lean/lean-sources.json', import.meta.url)));
const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');

export function upstreamEvidencePaths(version) {
  if (!Object.hasOwn(pins, version)) throw new Error('No pinned upstream suite for Lean ' + version);
  // Preserve the historical filenames and their original bytes.
  const stem = version === '4.34.0' ? 'lean-4.34' : 'lean-' + version;
  return {
    inventoryFile: join(root, `docs/evidence/${stem}-upstream-application-inventory.json`),
    sourcesFile: join(root, `docs/evidence/${stem}-upstream-source-files.json`),
    ledgerFile: join(root, `docs/evidence/${stem}-mixed-driver-classification.json`),
    archive: join(root, `.cache/downloads/lean4-v${version}.tar.gz`),
  };
}

export function loadUpstreamEvidence(version) {
  const paths = upstreamEvidencePaths(version);
  const inventory = JSON.parse(readFileSync(paths.inventoryFile));
  const sourceBytes = readFileSync(paths.sourcesFile), sources = JSON.parse(sourceBytes);
  const sourceManifestSha256 = sha256(sourceBytes), pin = pins[version];
  if (inventory.lean !== version || inventory.leanCommit !== pin.commit ||
      inventory.sourceArchiveSha256 !== pin.sha256 || inventory.sourceInventorySha256 !== sourceManifestSha256 ||
      inventory.registrations !== inventory.tests.length ||
      inventory.verifiedOriginalFilesAndLinks !== Object.keys(sources).length)
    throw new Error('Upstream inventory does not match pinned Lean ' + version);
  return { ...paths, inventory, sources, sourceManifestSha256 };
}

export function campaignSourceEvidence(manifest) {
  const evidence = loadUpstreamEvidence(manifest.lean);
  if (manifest.leanCommit !== evidence.inventory.leanCommit ||
      manifest.sourceArchiveSha256 !== evidence.inventory.sourceArchiveSha256 ||
      manifest.sourceManifestSha256 !== evidence.sourceManifestSha256)
    throw new Error('Campaign source evidence does not match Lean ' + manifest.lean);
  return evidence;
}
