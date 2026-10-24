// Shared pieces of Lasm's npm release process (docs/RELEASING.md): the release
// version and its dist-tag, the release package set, registry reads, and small
// command helpers. Nothing here publishes.
import assert from 'node:assert/strict';
import { readFileSync, appendFileSync } from 'node:fs';
import { join } from 'node:path';
import { execFileSync } from 'node:child_process';
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
 * scripts/npm-dist/packages.mjs: every tool package, `@lasm/cli`, `create-lasm`. */
export async function releasePackages({ scope } = {}) {
  const { toolPackages, defaultScope, createPackageName } = await import('../npm-dist/packages.mjs');
  scope ??= defaultScope;
  const toolchains = JSON.parse(readFileSync(join(root, 'src/toolchains.json'), 'utf8'));
  const linkToolchain = JSON.parse(readFileSync(join(root, 'src/link-toolchain.json'), 'utf8'));
  const tools = toolPackages({ lean: toolchains.defaultLean, toolchains, linkToolchain, scope });
  return [...tools.map(p => ({ name: p.name, version: p.version, license: p.license, kind: 'tool' })),
    { name: `${scope}/cli`, license: 'MIT', kind: 'cli' }, { name: createPackageName, license: 'MIT', kind: 'create' }];
}

/** Packages of an npm-dist.json record in publication order: tools, the CLI, create-lasm. */
export const publicationOrder = record => [...record.packages, record.main, ...(record.create ? [record.create] : [])]
  .map(({ name, version, integrity, filename }) => ({ name, version, integrity, filename }));

/** The registry document of a package, or undefined when the name does not exist. */
export async function packument(registry, name, { attempts = 3 } = {}) {
  const url = new URL(name.replace('/', '%2f'), registry);
  for (let attempt = 1; ; attempt++) {
    try {
      const response = await fetch(url, { headers: { accept: 'application/json' }, cache: 'no-store', signal: AbortSignal.timeout(60_000) });
      if (response.status === 404) return undefined;
      if (!response.ok) throw new Error(`${url}: HTTP ${response.status}`);
      return await response.json();
    } catch (error) {
      if (attempt >= attempts) throw error;
      await delay(2000 * attempt);
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
