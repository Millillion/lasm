// Shared pieces of Lasm's npm release process (docs/RELEASING.md): the release
// version and its dist-tag, the release package set, registry reads, and small
// command helpers. Nothing here publishes.
import assert from 'node:assert/strict';
import { readFileSync, appendFileSync } from 'node:fs';
import { join } from 'node:path';
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { fileURLToPath } from 'node:url';
import { setTimeout as delay } from 'node:timers/promises';

export const root = fileURLToPath(new URL('../../', import.meta.url));
export const owner = 'Millillion', repo = 'lasm', repository = `${owner}/${repo}`;
/** The workflow `npm trust github` is configured with (owner, repository, file, no environment). */
export const releaseWorkflow = 'release.yml', checksWorkflow = 'release-checks.yml', checksName = 'release-checks';
export const publicRegistry = 'https://registry.npmjs.org/';
export const loopback = url => { const u = new URL(url); return u.protocol === 'http:' && ['127.0.0.1', 'localhost', '[::1]'].includes(u.hostname); };
/** npm trusted publishing needs npm 11.5.1+ and Node 22.14+; `npm trust` needs npm 11.15.0+. */
export const minimumNpm = '11.15.0', minimumNode = '22.14.0';

const semver = /^(0|[1-9]\d*)\.(0|[1-9]\d*)\.(0|[1-9]\d*)(?:-((?:0|[1-9]\d*|\d*[A-Za-z-][0-9A-Za-z-]*)(?:\.(?:0|[1-9]\d*|\d*[A-Za-z-][0-9A-Za-z-]*))*))?$/;
export const isVersion = version => typeof version === 'string' && semver.test(version);
export const isPrerelease = version => { assert.ok(isVersion(version), `Not a release version: ${version}`); return version.includes('-'); };
/** `latest` for normal versions, `next` for prereleases. */
export const distTag = version => isPrerelease(version) ? 'next' : 'latest';
export const tagName = version => `v${version}`;
export const notesFile = version => `docs/release/${version}-notes.md`;

/** a >= b for plain x.y.z versions (prerelease suffixes ignored). */
export function atLeast(a, b) {
  const parse = v => v.split('-')[0].split('.').map(Number);
  const [x, y] = [parse(a), parse(b)];
  for (let i = 0; i < 3; i++) if (x[i] !== y[i]) return x[i] > y[i];
  return true;
}

/** The package names a release publishes, from the same catalogs and rules as
 * scripts/npm-dist/packages.mjs: every tool package, `@lasm/cli`, `@lasm/create`. */
export async function releasePackages({ scope } = {}) {
  const { toolPackages, defaultScope, createPackageName } = await import('../npm-dist/packages.mjs');
  scope ??= defaultScope;
  const toolchains = JSON.parse(readFileSync(join(root, 'src/toolchains.json'), 'utf8'));
  const linkToolchain = JSON.parse(readFileSync(join(root, 'src/link-toolchain.json'), 'utf8'));
  const edgeRuntimes = JSON.parse(readFileSync(join(root, 'src/edge-runtimes.json'), 'utf8'));
  const tools = toolPackages({ lean: toolchains.defaultLean, toolchains, linkToolchain, edgeRuntimes, scope });
  return [...tools.map(p => ({ name: p.name, version: p.version, license: p.license, kind: 'tool' })),
    { name: `${scope}/cli`, license: 'MIT', kind: 'cli' }, { name: createPackageName, license: 'MIT', kind: 'create' }];
}

/** Packages of an npm-dist.json record in publication order: tools, the CLI, @lasm/create. */
export const publicationOrder = record => [...record.packages, record.main, ...(record.create ? [record.create] : [])]
  .map(({ name, version, integrity, filename }) => ({ name, version, integrity, filename }));

/** The registry document of a package, or undefined when the name does not exist. */
export async function packument(registry, name, { attempts = 3, fetch = globalThis.fetch, sleep = delay } = {}) {
  const url = new URL(name.replace('/', '%2f'), registry);
  for (let attempt = 1; ; attempt++) {
    try {
      const response = await fetch(url, { headers: { accept: 'application/json' }, cache: 'no-store', signal: AbortSignal.timeout(60_000) });
      if (response.status === 404) return undefined;
      if (!response.ok) throw new Error(`${url}: HTTP ${response.status}`);
      return await response.json();
    } catch (error) {
      if (attempt >= attempts) throw error;
      await sleep(2000 * attempt);
    }
  }
}
/** { exists, integrity, deprecated } of name@version. */
export async function published(registry, name, version) {
  const doc = await packument(registry, name);
  const entry = doc?.versions?.[version];
  return { nameExists: Boolean(doc), exists: Boolean(entry), integrity: entry?.dist?.integrity, deprecated: entry?.deprecated,
    distTags: doc?.['dist-tags'] ?? {} };
}

/** Wait until the registry serves every package's tarball: its document lists name@version
 * with the built integrity, and a GET of its `dist.tarball` returns 200 with bytes of that
 * integrity. The public registry's document can be visible minutes before its CDN serves
 * the tarball (release run 45548290592: `npm view` showed @lasm/cli 0.11.0 while
 * cli-0.11.0.tgz was a 404), and `npm create` and `npm install` need the tarball.
 * Missing documents, versions and non-200 responses are retried until `timeoutMs`; other
 * bytes fail at once (never republish). `packages` are { name, version, integrity }. */
export async function waitForTarballs(registry, packages, { fetch = globalThis.fetch, sleep = delay, now = Date.now,
  timeoutMs = 30 * 60_000, intervalMs = 10_000, log = console.log } = {}) {
  const started = now(), served = new Map(), waiting = new Map(packages.map(p => [`${p.name}@${p.version}`, 'not checked yet']));
  for (let round = 1; ; round++) {
    for (const pkg of packages) {
      const id = `${pkg.name}@${pkg.version}`;
      if (served.has(id)) continue;
      assert.match(pkg.integrity ?? '', /^sha512-/, `${id}: the built integrity ${pkg.integrity} is not sha512`);
      let entry;
      try { entry = (await packument(registry, pkg.name, { attempts: 1, fetch, sleep }))?.versions?.[pkg.version]; }
      catch (error) { waiting.set(id, `registry document: ${error.message}`); continue; }
      if (!entry) { waiting.set(id, 'not in the registry document yet'); continue; }
      assert.equal(entry.dist?.integrity, pkg.integrity, `${id} is on ${registry} with ${entry.dist?.integrity}, built ${pkg.integrity}; never republish: bump the version`);
      const tarball = entry.dist?.tarball;
      assert.ok(tarball, `${id}: the registry document has no dist.tarball`);
      let response;
      try { response = await fetch(tarball, { cache: 'no-store', signal: AbortSignal.timeout(10 * 60_000) }); }
      catch (error) { waiting.set(id, `GET ${tarball}: ${error.message}`); continue; }
      if (response.status !== 200) { await response.body?.cancel(); waiting.set(id, `GET ${tarball}: HTTP ${response.status}`); continue; }
      const hash = createHash('sha512');
      let bytes = 0;
      try { for await (const chunk of response.body ?? []) { hash.update(chunk); bytes += chunk.length; } }
      catch (error) { waiting.set(id, `GET ${tarball}: the download failed after ${bytes} bytes: ${error.message}`); continue; }
      const integrity = 'sha512-' + hash.digest('base64');
      assert.equal(integrity, pkg.integrity, `${id}: ${tarball} served ${bytes} bytes with ${integrity}, built ${pkg.integrity}`);
      served.set(id, { name: pkg.name, version: pkg.version, tarball, integrity, bytes });
      waiting.delete(id);
    }
    const elapsed = now() - started, minutes = ms => (ms / 60_000).toFixed(1);
    if (waiting.size === 0) {
      log(`the registry serves all ${packages.length} tarballs with the built integrity (${minutes(elapsed)} min)`);
      return packages.map(p => served.get(`${p.name}@${p.version}`));
    }
    const pending = [...waiting].map(([id, reason]) => `  ${id}: ${reason}`).join('\n');
    assert.ok(elapsed + intervalMs <= timeoutMs, `The registry did not serve ${waiting.size} of ${packages.length} tarballs within ${minutes(timeoutMs)} min:\n${pending}`);
    log(`waiting for ${waiting.size} of ${packages.length} tarballs (round ${round}, ${minutes(elapsed)} of at most ${minutes(timeoutMs)} min):\n${pending}`);
    await sleep(intervalMs);
  }
}

export const run = (command, args, options = {}) => execFileSync(command, args,
  { encoding: 'utf8', maxBuffer: 64 * 1024 * 1024, windowsHide: true, ...options });
export const gh = (args, options) => run('gh', args, { timeout: 300_000, ...options });
export function output(values) {
  const lines = Object.entries(values).map(([key, value]) => `${key}=${value}`).join('\n') + '\n';
  if (process.env.GITHUB_OUTPUT) appendFileSync(process.env.GITHUB_OUTPUT, lines);
  console.log(lines.trimEnd());
}
export function summary(markdown) {
  if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, markdown + '\n');
  console.log(markdown);
}
