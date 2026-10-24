#!/usr/bin/env node
// One-time npm bootstrap for trusted publishing, run by the package owner, logged
// in, on their own machine (docs/RELEASING.md). npm can attach a trusted publisher
// only to a package that exists, so for every package of the release set
// (scripts/npm-dist/packages.mjs: the tool packages, @lasm/cli, create-lasm):
//   1. publish a minimal 0.0.0 placeholder when the name does not exist yet;
//   2. trust .github/workflows/release.yml of Millillion/lasm (no environment):
//      npm trust github <pkg> --repository Millillion/lasm --file release.yml --allow-publish --yes
//   3. deprecate the placeholder: npm deprecate <pkg>@0.0.0 "placeholder; use 0.1.0 or later".
// Every step is skipped when already done, so it can be re-run after an interruption.
//
//   node scripts/release/bootstrap-npm.mjs --dry-run      print everything, change nothing
//   node scripts/release/bootstrap-npm.mjs                do it (asks for 2FA in the browser or for an OTP)
// Options: --registry URL (default the public registry; a loopback URL is for testing:
// trust commands are then printed, not run, because only registry.npmjs.org supports them),
// --only NAME[,NAME] (a subset), --skip-trust, --skip-deprecate.
import assert from 'node:assert/strict';
import { parseArgs } from 'node:util';
import { mkdtempSync, writeFileSync, readFileSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { setTimeout as delay } from 'node:timers/promises';
import { pathToFileURL } from 'node:url';
import { root, repository, releaseWorkflow, publicRegistry, loopback, minimumNpm, atLeast, releasePackages, packument } from './lib.mjs';

export const placeholderVersion = '0.0.0';
export const deprecationMessage = 'placeholder; use 0.1.0 or later';
export const placeholderReadme = name => `# ${name}

placeholder; use the latest version.

This 0.0.0 version only reserves the name so that
[Lasm](https://github.com/${repository}) can publish it from GitHub Actions with npm
trusted publishing and provenance. It contains no software.
`;

/** The placeholder package.json: no code, no scripts, the repository npm checks provenance against. Pure, for tests. */
export function placeholderManifest(name) {
  return { name, version: placeholderVersion, description: 'placeholder; use the latest version', license: 'MIT',
    repository: { type: 'git', url: `git+https://github.com/${repository}.git` }, files: ['README.md', 'LICENSE'] };
}

/** The commands for one package given its registry state. Pure, for tests. */
export function packageSteps({ name, exists, hasPlaceholder, deprecated, trust }, { registry, allowPublish = true }) {
  const steps = [];
  const at = ['--registry', registry];
  if (!exists) steps.push({ kind: 'placeholder', args: ['publish', '<placeholder directory>', ...(name.startsWith('@') ? ['--access', 'public'] : []),
    '--tag', 'latest', '--provenance=false', ...at] });
  if (trust === 'missing') steps.push({ kind: 'trust', args: ['trust', 'github', name, '--repository', repository, '--file', releaseWorkflow,
    ...(allowPublish ? ['--allow-publish'] : []), '--yes', ...at] });
  if ((!exists || hasPlaceholder) && !deprecated) steps.push({ kind: 'deprecate', args: ['deprecate', `${name}@${placeholderVersion}`, deprecationMessage, ...at] });
  return steps;
}

/** The trust state from `npm trust list --json` output. Pure, for tests. */
export function trustState(listed) {
  const entries = (Array.isArray(listed) ? listed : listed ? [listed] : []).flatMap(e => Array.isArray(e?.trustedPublishers) ? e.trustedPublishers : [e]);
  if (!entries.length) return 'missing';
  const text = JSON.stringify(entries);
  return text.includes(repository) && text.includes(releaseWorkflow) ? 'present' : 'other';
}

const isMain = import.meta.url === pathToFileURL(process.argv[1]).href;
if (isMain) {
  const { values: args } = parseArgs({ options: { 'dry-run': { type: 'boolean', default: false }, registry: { type: 'string', default: publicRegistry },
    only: { type: 'string' }, 'skip-trust': { type: 'boolean', default: false }, 'skip-deprecate': { type: 'boolean', default: false } } });
  const dryRun = args['dry-run'], registry = new URL(args.registry).href, local = loopback(registry);
  assert.ok(local || registry === publicRegistry, 'Use the public registry or a loopback test registry');
  const npm = process.platform === 'win32' ? 'npm.cmd' : 'npm';
  const npmRun = (npmArgs, { capture = true, allowFailure = false } = {}) => {
    const result = spawnSync(npm, npmArgs, { encoding: 'utf8', stdio: capture ? ['inherit', 'pipe', 'pipe'] : 'inherit', shell: process.platform === 'win32' });
    if (!allowFailure && result.status !== 0) throw new Error(`npm ${npmArgs.join(' ')} failed (${result.status}):\n${result.stderr ?? ''}`);
    return result;
  };
  const show = npmArgs => `npm ${npmArgs.map(a => /[\s;]/.test(a) ? JSON.stringify(a) : a).join(' ')}`;
  const problems = [];
  console.log(`${dryRun ? 'DRY RUN: nothing will be published, trusted or deprecated.\n' : ''}Registry: ${registry}`);

  // 0. npm, login and 2FA.
  const npmVersion = npmRun(['--version']).stdout.trim();
  if (!atLeast(npmVersion, minimumNpm)) problems.push(`npm ${npmVersion} is older than ${minimumNpm} (npm install -g npm@^11.15.0)`);
  console.log(`npm ${npmVersion} (needs ${minimumNpm} or newer for npm trust)`);
  const whoami = npmRun(['whoami', '--registry', registry], { allowFailure: true });
  const user = whoami.status === 0 ? whoami.stdout.trim() : undefined;
  if (!user) problems.push(`not logged in to ${registry} (npm login --registry ${registry})`);
  else console.log(`Logged in as ${user}`);
  if (user && !local) {
    const profile = npmRun(['profile', 'get', '--json', '--registry', registry], { allowFailure: true });
    let tfa;
    try { tfa = JSON.parse(profile.stdout).tfa; } catch {}
    if (!tfa || tfa.pending) problems.push('two-factor authentication is not enabled on this account (npm profile enable-2fa auth-and-writes); npm trust requires it');
    else console.log(`Two-factor authentication: ${tfa.mode ?? 'enabled'}`);
  } else if (local) console.log('Loopback test registry: 2FA and trust are not checked (only registry.npmjs.org supports them).');
  if (problems.length && !dryRun) { console.error(`Cannot continue:\n- ${problems.join('\n- ')}`); process.exit(1); }

  // 1. The release set and its state on the registry.
  let packages = await releasePackages();
  if (args.only) { const only = new Set(args.only.split(',')); packages = packages.filter(p => only.has(p.name)); assert.ok(packages.length, 'No package matches --only'); }
  const help = npmRun(['trust', 'github', '--help'], { allowFailure: true });
  const trustAvailable = help.status === 0 && /--file/.test(help.stdout + help.stderr);
  const allowPublish = /allow-publish/.test(help.stdout + help.stderr) || !trustAvailable;
  const plan = [];
  for (const pkg of packages) {
    const doc = await packument(registry, pkg.name);
    const state = { name: pkg.name, exists: Boolean(doc), hasPlaceholder: Boolean(doc?.versions?.[placeholderVersion]),
      deprecated: Boolean(doc?.versions?.[placeholderVersion]?.deprecated), versions: Object.keys(doc?.versions ?? {}) };
    if (args['skip-trust'] || local || !trustAvailable || !user) state.trust = local || args['skip-trust'] ? 'not checked' : 'missing';
    else if (!doc) state.trust = 'missing';
    else {
      const listed = npmRun(['trust', 'list', pkg.name, '--json', '--registry', registry], { allowFailure: true });
      let parsed; try { parsed = JSON.parse(listed.stdout || 'null'); } catch {}
      state.trust = listed.status === 0 ? trustState(parsed) : 'missing';
    }
    if (state.trust === 'other') problems.push(`${pkg.name} already trusts another publisher (npm trust list ${pkg.name}); revoke it first (npm trust revoke ${pkg.name} --id <id>)`);
    if (doc && !state.hasPlaceholder && state.versions.length) console.log(`${pkg.name}: exists (${state.versions.join(', ')}); no placeholder needed`);
    const steps = packageSteps({ ...state, trust: local || args['skip-trust'] ? 'missing' : state.trust }, { registry, allowPublish })
      .filter(s => !(s.kind === 'deprecate' && args['skip-deprecate']) && !(s.kind === 'trust' && args['skip-trust']));
    plan.push({ pkg, state, steps });
  }
  const all = kind => plan.flatMap(p => p.steps.filter(s => s.kind === kind).map(s => ({ ...s, pkg: p.pkg })));
  console.log(`\n${packages.length} packages: ${packages.map(p => p.name).join(', ')}`);
  console.log(`To do: ${all('placeholder').length} placeholders, ${all('trust').length} trust configurations, ${all('deprecate').length} deprecations.`);
  if (problems.length) { console.error(`\nProblems:\n- ${problems.join('\n- ')}`); if (!dryRun) process.exit(1); }

  // 2. Placeholders.
  console.log('\n== 1. Placeholders (0.0.0) for names that do not exist yet');
  const license = readFileSync(join(root, 'LICENSE'), 'utf8');
  for (const step of all('placeholder')) {
    if (dryRun) {
      console.log(`would run: ${show(step.args)}\n  package.json: ${JSON.stringify(placeholderManifest(step.pkg.name))}; README.md: "placeholder; use the latest version"; LICENSE: MIT`);
      continue;
    }
    const directory = mkdtempSync(join(tmpdir(), 'lasm-placeholder-'));
    writeFileSync(join(directory, 'package.json'), JSON.stringify(placeholderManifest(step.pkg.name), null, 2) + '\n');
    writeFileSync(join(directory, 'README.md'), placeholderReadme(step.pkg.name));
    writeFileSync(join(directory, 'LICENSE'), license);
    const npmArgs = step.args.map(a => a === '<placeholder directory>' ? directory : a);
    console.log(`run: ${show(npmArgs)}`);
    npmRun(npmArgs, { capture: false });
    rmSync(directory, { recursive: true, force: true });
  }

  // 3. Trusted publishing.
  console.log('\n== 2. Trusted publisher: GitHub Actions, Millillion/lasm, .github/workflows/release.yml, no environment');
  if (local) console.log('(Loopback test registry: npm trust works only against registry.npmjs.org; the commands are printed, not run.)');
  else console.log(`npm asks for two-factor authentication on the first command. In the browser prompt, tick
"skip two-factor authentication for the next 5 minutes": the following commands then run
without asking again (about 80 packages fit in the window with the 2-second pause between calls).
If the window closes, npm simply asks again; re-running this script skips what is done.`);
  for (const step of all('trust')) {
    console.log(`${dryRun || local ? 'would run' : 'run'}: ${show(step.args)}`);
    if (!dryRun && !local) {
      const result = npmRun(step.args, { capture: false, allowFailure: true });
      if (result.status !== 0) {
        // Already configured (for example by an interrupted earlier run)? Then it is done.
        const listed = npmRun(['trust', 'list', step.pkg.name, '--json', '--registry', registry], { allowFailure: true });
        let parsed; try { parsed = JSON.parse(listed.stdout || 'null'); } catch {}
        if (trustState(parsed) !== 'present') throw new Error(`npm trust github ${step.pkg.name} failed (${result.status}); re-run this script to continue`);
        console.log(`${step.pkg.name} already trusts release.yml`);
      }
      await delay(2000);
    }
  }

  // 4. Deprecate the placeholders.
  console.log(`\n== 3. Deprecate the placeholders: "${deprecationMessage}"`);
  for (const step of all('deprecate')) {
    console.log(`${dryRun ? 'would run' : 'run'}: ${show(step.args)}`);
    if (!dryRun) npmRun(step.args, { capture: false });
  }
  console.log(dryRun ? '\nDry run complete: nothing was changed.' : `\nDone. Check with: npm trust list <pkg>, npm view <pkg> versions. Re-running skips what is done.`);
}
