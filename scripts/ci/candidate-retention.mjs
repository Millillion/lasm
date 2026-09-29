import assert from 'node:assert/strict';

const packingIdentity = value => Object.fromEntries(['sha256', 'sourceRevision', 'candidateVersion', 'defaultLean',
  'node', 'runtime', 'installer', 'compressedBytes', 'installedBytes', 'files'].map(key => [key, value[key]]));

/** Recover a partly completed draft upload without overwriting earlier bytes
 * or their measurements. The service authenticates GitHub asset metadata.
 */
export async function retainCandidateDraft(spec, service) {
  let release = await service.readRelease(spec.tag);
  if (!release) {
    try { await service.createRelease(spec); }
    catch (error) { if (!await service.readRelease(spec.tag)) throw error; }
    release = await service.readRelease(spec.tag);
  }
  assert.equal(release.draft, true, 'Never modify a published release');
  assert.equal(release.prerelease, true);
  assert.equal(release.tag_name, spec.tag);
  assert.equal(release.target_commitish, spec.target, 'Preserve the original source identity');
  const verify = async (expected, observed) => {
    if (expected.packingReceipt) {
      assert.ok(observed.size < 1024 * 1024);
      assert.deepEqual(packingIdentity(JSON.parse(await service.readSmallAsset(spec.tag, expected.name))),
        packingIdentity(expected.packingReceipt), 'Existing packing receipt describes different bytes');
    } else {
      assert.equal(observed.size, expected.bytes, 'Existing release asset size differs');
      assert.equal(observed.digest, 'sha256:' + expected.sha256, 'Existing release asset checksum differs');
    }
  };
  // Validate every existing asset before uploading any missing asset. An
  // interrupted retry can never combine incompatible candidates in one draft.
  for (const asset of spec.assets) {
    const observed = release.assets.find(a => a.name === asset.name);
    if (observed) await verify(asset, observed);
  }
  const uploaded = [];
  for (const asset of spec.assets) if (!release.assets.some(a => a.name === asset.name)) {
    await service.upload(spec.tag, asset.path); uploaded.push(asset.name);
  }
  release = await service.readRelease(spec.tag);
  for (const asset of spec.assets) {
    const observed = release.assets.find(a => a.name === asset.name);
    assert.ok(observed, 'Missing retained asset: ' + asset.name);
    await verify(asset, observed);
  }
  return { tag: spec.tag, uploaded, retained: spec.assets.map(a => a.name) };
}
