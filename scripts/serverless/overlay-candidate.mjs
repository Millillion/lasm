// Phase 6 tests source changes before they reach a candidate: this script
// copies this checkout's JavaScript sources and templates that differ from the
// merge base with main into an accepted candidate tarball. The Wasm runtime,
// Lean toolchain and native pieces stay the candidate's. Every overlaid file
// is listed in the output JSON, which the serverless CI uploads as evidence.
//   node overlay-candidate.mjs CANDIDATE_TGZ OUTPUT_TGZ RESULT.json [BASE_REF]
import assert from 'node:assert/strict';
import { execFileSync } from 'node:child_process';
import { copyFileSync, existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { tmpdir } from 'node:os';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const [candidateArg, outputArg, resultArg, baseRef = 'origin/main'] = process.argv.slice(2);
assert.ok(candidateArg && outputArg && resultArg, 'Usage: node overlay-candidate.mjs CANDIDATE_TGZ OUTPUT_TGZ RESULT.json [BASE_REF]');
const git = (...args) => execFileSync('git', args, { cwd: root, encoding: 'utf8' }).trim();
const base = git('merge-base', 'HEAD', baseRef);
// Sources the installed CLI runs (not src/native, which is generated, nor the runtime).
const changed = git('diff', '--name-only', '--diff-filter=AMR', base, 'HEAD', '--', 'src', 'templates')
  .split('\n').filter(path => path && !path.startsWith('src/native/') && (/\.(mjs|cjs|js|json|lean)$/.test(path) || path.startsWith('src/zoneinfo/')));
const work = mkdtempSync(join(tmpdir(), 'lasm-overlay-'));
const sha = file => createHash('sha256').update(readFileSync(file)).digest('hex');
try {
  execFileSync('tar', ['-xzf', resolve(candidateArg), '-C', work]);
  const pkg = join(work, 'package');
  const files = [];
  for (const path of changed) {
    const target = join(pkg, path);
    // A file the candidate has must match the merge base, or the overlay would
    // also bring in unrelated changes made on main after the candidate.
    let baseText = null;
    try { baseText = execFileSync('git', ['show', `${base}:${path}`], { cwd: root, stdio: ['ignore', 'pipe', 'ignore'] }); } catch { /* new on this branch */ }
    const candidateMatchesBase = existsSync(target) ? baseText !== null && Buffer.compare(readFileSync(target), baseText) === 0 : baseText === null;
    mkdirSync(dirname(target), { recursive: true });
    copyFileSync(join(root, path), target);
    files.push({ path, sha256: sha(target), new: baseText === null, candidateMatchesBase });
  }
  mkdirSync(dirname(resolve(outputArg)), { recursive: true });
  execFileSync('tar', ['-czf', resolve(outputArg), '-C', work, 'package']);
  const result = { candidate: candidateArg.split(/[\\/]/).pop(), candidateSha256: sha(resolve(candidateArg)), base, head: git('rev-parse', 'HEAD'),
    output: outputArg.split(/[\\/]/).pop(), outputSha256: sha(resolve(outputArg)), files };
  writeFileSync(resolve(resultArg), JSON.stringify(result, null, 2) + '\n');
  for (const file of files) console.log(`${file.new ? 'added  ' : 'changed'} ${file.path}${file.candidateMatchesBase ? '' : ' (the candidate differs from the merge base: main changed it after the candidate)'}`);
} finally { rmSync(work, { recursive: true, force: true }); }
