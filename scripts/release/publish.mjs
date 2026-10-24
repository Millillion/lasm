// release.yml: publish the built packages in order, skipping what is already on
// the registry with the same bytes (docs/RELEASING.md). Safe to re-run: it never
// republishes, unpublishes or moves a dist-tag of an existing version, and it
// stops before publishing anything if any existing version has other bytes.
// Order: tool packages (the CLI pins them), @lasm/cli, create-lasm (pins the CLI).
//
//   node scripts/release/publish.mjs --dist BUILD_DIR --tag latest|next --registry https://registry.npmjs.org/ --report FILE
//     npm trusted publishing (OIDC) with provenance; only inside GitHub Actions with id-token: write.
//   node scripts/release/publish.mjs --dist BUILD_DIR --tag latest|next --registry http://127.0.0.1:4873/ --local DIR --report FILE
//     the dry run: a loopback Verdaccio started by scripts/npm-dist/registry.mjs in DIR.
import assert from 'node:assert/strict';
import { parseArgs } from 'node:util';
import { readFileSync, writeFileSync, existsSync, mkdirSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { setTimeout as delay } from 'node:timers/promises';
import { pathToFileURL } from 'node:url';
import { findNpm } from '../../src/npm-artifacts.mjs';
import { publicRegistry, loopback, publicationOrder, published, run, summary, atLeast, minimumNpm } from './lib.mjs';

/** Which packages to publish and which to skip; throws on bytes that differ. Pure, for tests. */
export function publicationPlan(packages) {
  const conflicts = packages.filter(p => p.remote.exists && p.remote.integrity !== p.integrity);
  assert.equal(conflicts.length, 0, conflicts.map(p => `${p.name}@${p.version} is on the registry with ${p.remote.integrity}, built ${p.integrity}; never republish: bump the version`).join('\n'));
  return packages.map(p => ({ ...p, action: p.remote.exists ? 'skip' : 'publish' }));
}

if (import.meta.url === pathToFileURL(process.argv[1]).href) {
  const { values: args } = parseArgs({ options: { dist: { type: 'string' }, tag: { type: 'string' }, registry: { type: 'string' },
    local: { type: 'string' }, report: { type: 'string' } } });
  assert.ok(args.dist && ['latest', 'next'].includes(args.tag) && args.registry && args.report, 'See the usage in the header');
  const registry = new URL(args.registry).href, local = Boolean(args.local);
  if (local) assert.ok(loopback(registry), `Not a loopback registry: ${registry}`); else assert.equal(registry, publicRegistry, 'Publish only to the public registry or a loopback one');
  const dist = resolve(args.dist), record = JSON.parse(readFileSync(join(dist, 'npm-dist.json'), 'utf8'));
  const npm = findNpm(); assert.ok(npm, 'npm was not found');
  const npmVersion = run(npm.command, [...npm.args, '--version']).trim();
  assert.ok(atLeast(npmVersion, minimumNpm), `npm ${npmVersion} is older than ${minimumNpm}`);

  // A private npm configuration: no credentials but, for the loopback registry, its fixed local token.
  const configDirectory = resolve(args.local ?? join(dist, '..', 'publish-config'));
  mkdirSync(configDirectory, { recursive: true });
  const userconfig = join(configDirectory, local ? 'npmrc-release-dry-run' : 'npmrc-release');
  writeFileSync(userconfig, `registry=${registry}\n` + (local ? `//${new URL(registry).host}/:_authToken=lasm-local-validation\n` : ''));
  const env = { ...process.env, npm_config_userconfig: userconfig, npm_config_registry: registry };
  for (const key of Object.keys(env)) if (/^(?:NODE_AUTH_TOKEN|NPM_TOKEN|npm_config_.*(?:_auth|token).*)$/i.test(key)) delete env[key];
  if (!local) assert.ok(env.ACTIONS_ID_TOKEN_REQUEST_URL && env.ACTIONS_ID_TOKEN_REQUEST_TOKEN,
    'npm trusted publishing needs GitHub Actions with permissions id-token: write');

  const packages = [];
  for (const pkg of publicationOrder(record)) {
    assert.ok(existsSync(join(dist, 'packages', pkg.filename)), `Missing ${pkg.filename}`);
    packages.push({ ...pkg, remote: await published(registry, pkg.name, pkg.version) });
  }
  const plan = publicationPlan(packages);
  const report = { schema: 1, registry, tag: args.tag, local, npm: npmVersion, startedAt: new Date().toISOString(), packages: [] };
  for (const pkg of plan) {
    if (pkg.action === 'skip') { console.log(`skip ${pkg.name}@${pkg.version}: already published with the same bytes`); report.packages.push({ name: pkg.name, version: pkg.version, action: 'skipped' }); continue; }
    console.log(`publish ${pkg.name}@${pkg.version} --tag ${args.tag}${local ? ' (loopback dry run)' : ' --provenance'}`);
    run(npm.command, [...npm.args, 'publish', join(dist, 'packages', pkg.filename), '--registry', registry, '--userconfig', userconfig,
      '--access', 'public', '--tag', args.tag, local ? '--provenance=false' : '--provenance', '--ignore-scripts', '--loglevel=notice'],
    { env, stdio: 'inherit' });
    // The registry must serve the bytes that were packed (the public registry can lag a little).
    let remote;
    for (let attempt = 0; attempt < 60; attempt++) {
      remote = await published(registry, pkg.name, pkg.version);
      if (remote.exists) break;
      await delay(10_000);
    }
    assert.equal(remote.integrity, pkg.integrity, `${pkg.name}@${pkg.version}: the registry serves ${remote.integrity}`);
    report.packages.push({ name: pkg.name, version: pkg.version, action: 'published', integrity: remote.integrity });
  }
  report.finishedAt = new Date().toISOString();
  mkdirSync(dirname(resolve(args.report)), { recursive: true });
  writeFileSync(resolve(args.report), JSON.stringify(report, null, 2) + '\n');
  const count = action => report.packages.filter(p => p.action === action).length;
  summary(`### npm publication${local ? ' (dry run, loopback registry)' : ''}\n\n${count('published')} published, ${count('skipped')} already present (dist-tag \`${args.tag}\` for new versions)\n\n` +
    report.packages.map(p => `- ${p.action} ${p.name}@${p.version}`).join('\n'));
}
