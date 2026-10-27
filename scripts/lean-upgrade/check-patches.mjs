// Applies Lasm's Lean patches to a new Lean release's sources, in build order,
// for the Node and edge profiles (docs/LEAN_UPGRADE.md step 3), and reports each
// patch as clean, offset, fuzz or rejected. With --draft, a patch that needed
// fuzz or had rejected hunks is rewritten from what did apply as
// scripts/full-lean/patches/lean-<VERSION>-<name>.patch.draft, with the
// rejected hunks beside it (.rej), for review: a rejected hunk is either no
// longer needed (upstream made the change) or must be ported by hand.
//   node scripts/lean-upgrade/check-patches.mjs VERSION WORK_DIR [--draft]
// VERSION must be in scripts/full-lean/lean-sources.json (add-release.mjs).
import assert from 'node:assert/strict';
import { execFileSync, spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { existsSync, mkdirSync, readFileSync, readdirSync, rmSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { leanPatchInputs } from '../full-lean/lean-patches.mjs';

const [version, workArg, ...rest] = process.argv.slice(2);
assert.ok(version && workArg, 'Usage: node scripts/lean-upgrade/check-patches.mjs VERSION WORK_DIR [--draft]');
const draft = rest.includes('--draft');
const root = fileURLToPath(new URL('../../', import.meta.url));
const source = JSON.parse(readFileSync(join(root, 'scripts/full-lean/lean-sources.json'), 'utf8'))[version];
assert.ok(source, `Lean ${version} is not in scripts/full-lean/lean-sources.json; run add-release.mjs first`);
const work = resolve(workArg);
mkdirSync(work, { recursive: true });
const archive = join(work, `lean4-${version}.tar.gz`);
if (!existsSync(archive)) execFileSync('curl', ['-sSfL', '-o', archive, source.url]);
assert.equal(createHash('sha256').update(readFileSync(archive)).digest('hex'), source.sha256, 'Source archive checksum mismatch');
const git = (cwd, ...args) => execFileSync('git', ['-c', 'commit.gpgsign=false', '-c', 'user.name=lasm', '-c', 'user.email=lasm@localhost', ...args], { cwd, encoding: 'utf8', maxBuffer: 256 * 1024 * 1024 });
const report = {};
for (const profile of ['node', 'edge']) {
  const tree = join(work, `src-${profile}`);
  rmSync(tree, { recursive: true, force: true }); mkdirSync(tree);
  execFileSync('tar', ['-xzf', archive, '-C', tree, '--strip-components=1']);
  git(tree, 'init', '-q'); git(tree, 'add', '-A'); git(tree, 'commit', '-qm', 'upstream');
  for (const { name, file } of leanPatchInputs(version, { edge: profile === 'edge' })) {
    if (report[name]?.profiles) { report[name].profiles.push(profile); }
    let patch = readFileSync(join(root, 'scripts/full-lean/patches', file), 'utf8');
    // build-application-runtime.mjs substitutes the source commit into wasm-build.
    if (name === 'wasm-build') patch = patch.replace('8c9756b28d64dab099da31a4c09229a9e6a2ef35', source.commit);
    const run = spawnSync('patch', ['-p1', '--batch', '--forward'], { cwd: tree, input: patch, encoding: 'utf8' });
    const out = run.stdout + run.stderr;
    const status = run.status !== 0 ? 'rejected' : /fuzz/.test(out) ? 'fuzz' : /offset/.test(out) ? 'offset' : 'clean';
    const rejects = readdirSync(tree, { recursive: true }).filter(f => String(f).endsWith('.rej')).map(String);
    report[name] ??= { file, status, profiles: [profile], detail: out.split('\n').filter(l => /FAILED|fuzz|reversed|Skipping/i.test(l)) };
    if (status === 'rejected' || status === 'fuzz') {
      report[name].status = status;
      if (draft) {
        for (const f of [...readdirSync(tree, { recursive: true })].map(String).filter(f => f.endsWith('.orig'))) rmSync(join(tree, f));
        const rej = rejects.map(f => readFileSync(join(tree, f), 'utf8')).join('\n');
        for (const f of rejects) rmSync(join(tree, f));
        git(tree, 'add', '-A');
        const diff = git(tree, 'diff', '--cached', '--text', '--no-color').replace(source.commit, '8c9756b28d64dab099da31a4c09229a9e6a2ef35');
        const base = join(root, 'scripts/full-lean/patches', `lean-${version.split('-')[0]}-${name}.patch`);
        writeFileSync(base + '.draft', diff);
        if (rej) writeFileSync(base + '.rej', rej);
        report[name].draft = base + '.draft';
      }
    }
    for (const f of [...readdirSync(tree, { recursive: true })].map(String).filter(f => f.endsWith('.orig') || f.endsWith('.rej'))) rmSync(join(tree, f));
    git(tree, 'add', '-A'); git(tree, 'commit', '-qm', name, '--allow-empty');
  }
}
console.log(JSON.stringify(report, null, 2));
process.exit(Object.values(report).some(r => r.status === 'rejected') ? 1 : 0);
