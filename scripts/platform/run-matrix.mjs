// Unpacks the applications built by the platform-support workflow and runs
// one kind of check on each named build:
//   native      run-checks.mjs with this machine's Node
//   containers  run-containers.mjs (every image for this machine's own Linux
//               build; Debian 12 and the recipe for cross-built ones)
//   lambda      run-lambda.mjs
//   node run-matrix.mjs KIND ARTIFACTS_DIR RESULTS_DIR BUILD... [--expect-node-error | --expect-host-error]
// A missing build (its job failed) is a failed result. Exits 1 if anything failed.
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { existsSync, mkdirSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const here = fileURLToPath(new URL('.', import.meta.url));
const [kind, artifactsArg, resultsArg, ...rest] = process.argv.slice(2);
assert.ok(['native', 'containers', 'lambda'].includes(kind) && artifactsArg && resultsArg, 'Usage: node run-matrix.mjs KIND ARTIFACTS_DIR RESULTS_DIR BUILD...');
const flags = rest.filter(item => item.startsWith('--')), builds = rest.filter(item => !item.startsWith('--'));
const artifacts = resolve(artifactsArg), results = resolve(resultsArg);
mkdirSync(results, { recursive: true });
const own = `linux-${process.arch}`;
let failed = false;
for (const build of builds) {
  const label = `${kind}-${build}-on-${process.platform}-${process.arch}${flags.length ? flags.join('') : ''}`;
  const resultFile = join(results, label + '.json');
  const archive = join(artifacts, `platform-apps-${build}`, `apps-${build}.tar`);
  if (!existsSync(archive)) {
    writeFileSync(resultFile, JSON.stringify({ kind, build, ok: false, error: `No ${build} build (its build job failed)` }) + '\n');
    console.log(`FAIL ${label}: no build`); failed = true; continue;
  }
  const apps = join(results, '..', `apps-${build}`);
  if (!existsSync(apps)) {
    mkdirSync(apps, { recursive: true });
    const untar = spawnSync('tar', ['-xf', archive, '-C', apps], { encoding: 'utf8' });
    assert.equal(untar.status, 0, untar.stderr);
  }
  let run;
  if (kind === 'native') run = spawnSync(process.execPath, [join(here, 'run-checks.mjs'), apps, ...flags], { encoding: 'utf8', timeout: 1800_000 });
  else if (kind === 'containers') run = spawnSync(process.execPath, [join(here, 'run-containers.mjs'), apps, resultFile,
    ...(build === own ? [] : ['debian12-node24,recipe'])], { encoding: 'utf8', timeout: 3600_000, stdio: ['ignore', 'pipe', 'pipe'] });
  else run = spawnSync(process.execPath, [join(here, 'run-lambda.mjs'), apps, resultFile], { encoding: 'utf8', timeout: 3600_000 });
  process.stdout.write(run.stdout); process.stderr.write(run.stderr.slice(-4000));
  if (kind === 'native') {
    let report; try { report = JSON.parse(run.stdout.trim().split('\n').pop()); } catch { report = { ok: false, stdout: run.stdout.slice(-2000) }; }
    writeFileSync(resultFile, JSON.stringify({ kind, build, flags, ...report }, null, 2) + '\n');
  }
  const ok = run.status === 0;
  failed ||= !ok;
  console.log(`${ok ? 'ok  ' : 'FAIL'} ${label}`);
}
process.exit(failed ? 1 : 0);
