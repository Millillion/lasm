// CI-only container image cache. Anonymous pulls from Amazon ECR Public
// ("toomanyrequests: Data limit exceeded", acceptance 40131225697) and Docker
// Hub are rate limited per shared runner address, so CI pulls each pinned image
// once, keeps its `docker save` archive in the GitHub Actions cache (keyed by
// the pins, scripts/ci/images.lock.json) and loads it in later runs. Users'
// templates and docs keep the official upstream tags; nothing is republished.
//
//   node image-cache.mjs ensure DIR GROUP [--seed amd64,arm64] [--no-load]
//                                            load or pull GROUP's images for this runner's architecture;
//                                            --seed also writes the other architectures' archives
//   node image-cache.mjs lock GROUP REF...    pin REF... (tags) by digest into the lock (maintainers; needs registry access)
//
// A loaded or pulled image must have the pinned identity: its image ID is the
// pinned config digest (classic image store) or platform manifest digest
// (containerd image store). It is then tagged with the original reference, so
// the scripts that use the tag find it locally and do not pull.
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { existsSync, mkdirSync, readFileSync, renameSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';

const lockFile = new URL('./images.lock.json', import.meta.url);
const readLock = () => JSON.parse(readFileSync(lockFile, 'utf8'));
const docker = (args, options = {}) => spawnSync('docker', args, { encoding: 'utf8', timeout: 1_800_000, maxBuffer: 64 * 1024 * 1024, ...options });
const sleep = ms => new Promise(done => setTimeout(done, ms));
export const architecture = (arch = process.arch) => ({ x64: 'amd64', arm64: 'arm64' })[arch];
const repository = ref => ref.replace(/@sha256:[a-f0-9]{64}$/, '').replace(/:(?=[^/:]+$)/, '§').split('§')[0];
const slug = (ref, arch) => ref.replace(/[^A-Za-z0-9._-]+/g, '_') + '-' + arch;

/** Whether the local image `ref` has the pinned identity. */
export function identityMatches(id, pin) {
  return id === pin.config || id === pin.manifest;
}

/** Seconds to wait before pull attempt `attempt` (1-based): 30 s doubling, at most 10 minutes. */
export function backoff(attempt) { return Math.min(600, 30 * 2 ** (attempt - 1)); }
const transient = text => /toomanyrequests|rate limit|too many requests|timeout|TLS|connection|EOF|503|502|500|i\/o/i.test(text ?? '');

async function pull(ref, pin, attempts = 8) {
  const pinned = `${repository(ref)}@${pin.manifest}`;
  for (let attempt = 1; ; attempt++) {
    const result = docker(['pull', '-q', pinned]);
    if (result.status === 0) return pinned;
    assert.ok(attempt < attempts && transient(result.stderr), `docker pull ${pinned}: ${result.stderr}`);
    const wait = backoff(attempt);
    console.log(`Retrying docker pull ${pinned} in ${wait} s (attempt ${attempt} of ${attempts}): ${result.stderr.trim()}`);
    await sleep(wait * 1000);
  }
}

function imageId(ref) {
  const inspect = docker(['image', 'inspect', '--format', '{{.Id}}', ref]);
  return inspect.status === 0 ? inspect.stdout.trim() : undefined;
}

/** Pull `ref` for a foreign architecture by digest and save it to `archive` without keeping a tag. */
async function saveForeign(ref, pin, archive) {
  const pinned = await pull(ref, pin);
  const temporary = archive + '.partial';
  const save = docker(['save', '-o', temporary, pinned]);
  assert.equal(save.status, 0, `docker save ${pinned}: ${save.stderr}`);
  renameSync(temporary, archive);
  docker(['image', 'rm', pinned]);
}

/**
 * Makes GROUP's images for `arch` available locally (tagged with their original
 * reference), from DIR's archives or the registry, and leaves an archive for each
 * in DIR. `seed` also writes the other architectures' archives (pulled by
 * digest, not loaded), so one runner whose address the registry still serves can
 * fill the cache for every architecture.
 */
export async function ensure(directory, group, { arch = architecture(), seed = [], load = true } = {}) {
  const lock = readLock();
  assert.ok(lock.groups[group], `Unknown image group ${group}`);
  mkdirSync(directory, { recursive: true });
  const report = [];
  for (const ref of lock.groups[group]) {
    // Without loading, this runner's own architecture is seeded too.
    for (const other of seed.filter(other => other !== arch || !load)) {
      const pin = lock.images[ref]?.platforms?.[other];
      assert.ok(pin, `${ref} has no ${other} pin in scripts/ci/images.lock.json`);
      const archive = join(directory, slug(ref, other) + '.tar');
      if (!existsSync(archive)) { await saveForeign(ref, pin, archive); report.push({ ref, arch: other, source: 'registry (seeded)' }); }
      console.log(`${ref} (${other}): archive ready`);
    }
    if (!load) continue;
    const pin = lock.images[ref]?.platforms?.[arch];
    assert.ok(pin, `${ref} has no ${arch} pin in scripts/ci/images.lock.json`);
    const archive = join(directory, slug(ref, arch) + '.tar');
    let source;
    if (identityMatches(imageId(ref), pin)) source = 'present';
    else if (existsSync(archive)) {
      const loaded = docker(['load', '-q', '-i', archive]);
      assert.equal(loaded.status, 0, `docker load ${archive}: ${loaded.stderr}`);
      // An archive saved by digest (seeded) carries no tag: tag the loaded image.
      const id = /sha256:[a-f0-9]{64}/.exec(loaded.stdout)?.[0];
      if (!identityMatches(imageId(ref), pin) && id) docker(['tag', id, ref]);
      source = 'cache';
    }
    if (!identityMatches(imageId(ref), pin)) {
      const pinned = await pull(ref, pin);
      assert.equal(docker(['tag', pinned, ref]).status, 0, `docker tag ${pinned} ${ref}`);
      source = 'registry';
    }
    const id = imageId(ref);
    assert.ok(identityMatches(id, pin), `${ref} (${arch}) is ${id}, not the pinned ${pin.config} / ${pin.manifest}`);
    if (!existsSync(archive)) {
      const temporary = archive + '.partial';
      const save = docker(['save', '-o', temporary, ref]);
      assert.equal(save.status, 0, `docker save ${ref}: ${save.stderr}`);
      renameSync(temporary, archive);
    }
    report.push({ ref, arch, id, source });
    console.log(`${ref} (${arch}): ${source}, ${id}`);
  }
  return report;
}

async function lockImages(group, refs) {
  const lock = existsSync(lockFile) ? readLock() : { schema: 1, groups: {}, images: {} };
  for (const ref of refs) {
    const raw = docker(['buildx', 'imagetools', 'inspect', '--raw', ref]);
    assert.equal(raw.status, 0, raw.stderr);
    const index = JSON.parse(raw.stdout);
    const digest = docker(['buildx', 'imagetools', 'inspect', '--format', '{{json .Manifest}}', ref]);
    const platforms = {};
    for (const entry of index.manifests ?? []) {
      const arch = entry.platform?.architecture;
      if (entry.platform?.os !== 'linux' || !['amd64', 'arm64'].includes(arch) || platforms[arch]) continue;
      const manifest = JSON.parse(docker(['buildx', 'imagetools', 'inspect', '--raw', `${repository(ref)}@${entry.digest}`]).stdout);
      platforms[arch] = { manifest: entry.digest, config: manifest.config.digest };
    }
    assert.ok(platforms.amd64 && platforms.arm64, `${ref}: no linux/amd64 and linux/arm64 images`);
    lock.images[ref] = { index: JSON.parse(digest.stdout).digest, platforms };
    lock.groups[group] = [...new Set([...(lock.groups[group] ?? []), ref])];
  }
  writeFileSync(lockFile, JSON.stringify(lock, null, 2) + '\n');
}

if (import.meta.url === new URL(process.argv[1], 'file:').href || process.argv[1]?.endsWith('image-cache.mjs')) {
  const [command, ...rest] = process.argv.slice(2);
  if (command === 'ensure') {
    const [directory, group, ...flags] = rest;
    assert.ok(directory && group, 'Usage: image-cache.mjs ensure DIR GROUP [--seed amd64,arm64] [--no-load]');
    const seedIndex = flags.indexOf('--seed');
    await ensure(directory, group, { seed: seedIndex >= 0 ? flags[seedIndex + 1].split(',') : [], load: !flags.includes('--no-load') });
  }
  else if (command === 'lock') { const [group, ...refs] = rest; assert.ok(group && refs.length, 'Usage: image-cache.mjs lock GROUP REF...'); await lockImages(group, refs); }
  else if (command !== undefined) throw new Error('Usage: image-cache.mjs ensure DIR GROUP | lock GROUP REF...');
}
