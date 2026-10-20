// Language coverage L1: execution inventory of EVERY registration of the pinned
// release (not only the Server MVP topics). Elaboration tests are parsed against
// their own header imports with scripts/upstream/RuntimeCommandSurvey.lean;
// nothing is elaborated or executed. Each registration gets one execution class.
//   node inventory.mjs LEAN_VERSION PRISTINE_SOURCE NATIVE_LEAN_BIN OUTPUT.json [SURVEY_CACHE.jsonl]
// SURVEY_CACHE (optional) keeps per-file survey lines so an interrupted run resumes.
import assert from 'node:assert/strict';
import { appendFileSync, existsSync, readFileSync, readlinkSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { createHash } from 'node:crypto';
import { loadUpstreamEvidence } from '../application-tests/upstream-evidence.mjs';

const [version, pristine, leanBin, output, cacheFile] = process.argv.slice(2);
assert.ok(version && pristine && leanBin && output, 'Supply LEAN_VERSION PRISTINE_SOURCE NATIVE_LEAN_BIN OUTPUT.json [SURVEY_CACHE.jsonl]');
assert.ok(!existsSync(output), 'Preserve earlier inventory evidence');
const root = fileURLToPath(new URL('../../', import.meta.url));
const { inventory, sources } = loadUpstreamEvidence(version);
const sha = bytes => createHash('sha256').update(bytes).digest('hex');
const review = file => { const r = JSON.parse(readFileSync(join(root, file))); return r.lean === version ? r.tests : r.releases?.[version]?.tests ?? {}; };
const evalIO = review('scripts/application-tests/eval-io-reviewed.json');
const surveyTool = join(root, 'scripts/upstream/RuntimeCommandSurvey.lean');

// Survey: one process per textual import set (see RuntimeCommandSurvey.lean).
const cached = new Map();
if (cacheFile && existsSync(cacheFile)) for (const line of readFileSync(cacheFile, 'utf8').split('\n').filter(Boolean)) {
  const row = JSON.parse(line); cached.set(row.path, row.survey);
}
function survey(paths) {
  const key = path => [...readFileSync(join(pristine, path), 'latin1').matchAll(/^(?:public |meta |private )*import\s+(\S+)/gm)]
    .map(match => match[1]).join(' ');
  const groups = [...Map.groupBy(paths.filter(path => !cached.has(path)), key).values()];
  let done = 0;
  for (const group of groups) {
    // Bound argument lists; a group still shares one environment per process.
    for (let start = 0; start < group.length; start += 200) {
      const chunk = group.slice(start, start + 200);
      const result = spawnSync(join(leanBin, 'lean'), ['-j1', '--run', surveyTool, ...chunk.map(path => join(pristine, path))],
        { encoding: 'utf8', timeout: 1_800_000, maxBuffer: 1 << 30, env: { ...process.env, PATH: leanBin + ':' + process.env.PATH, LEAN_PATH: '' } });
      const lines = (result.stdout ?? '').trim().split('\n').filter(Boolean).map(line => JSON.parse(line));
      // A crash (e.g. an import that cannot load) is recorded per file, never dropped.
      chunk.forEach((path, index) => {
        const line = lines[index];
        const parsed = line && line.file === join(pristine, path) ? line
          : { error: `survey process ${result.status} ${result.signal ?? ''} ${(result.stderr ?? '').slice(-400)}` };
        cached.set(path, parsed);
        if (cacheFile) appendFileSync(cacheFile, JSON.stringify({ path, survey: parsed }) + '\n');
      });
    }
    done += group.length;
    console.error(`surveyed ${done}/${paths.length - 0} (group of ${group.length})`);
  }
}
function forms(commands) {
  const count = { eval: 0, evalBang: 0, guard: 0, guardMsgsEval: 0, guardMsgsGuard: 0, guardMsgsOther: 0, guardMsgsSpec: 0, scoped: 0 };
  for (const command of commands) {
    const kind = command.kind;
    if (kind === 'Lean.Parser.Command.eval') count.eval++;
    else if (kind === 'Lean.Parser.Command.evalBang') count.evalBang++;
    else if (kind === 'Lean.Parser.Command.guardCmd') count.guard++;
    else if (kind === 'Lean.Parser.Command.in') count.scoped++;
    else if (kind === 'Lean.guardMsgsCmd') {
      if (command.spec) count.guardMsgsSpec++;
      const inner = command.command.kind;
      if (inner === 'Lean.Parser.Command.eval' && !command.spec) count.guardMsgsEval++;
      else if (inner === 'Lean.Parser.Command.guardCmd') count.guardMsgsGuard++;
      else count.guardMsgsOther++;
    }
  }
  // Exactly the forms runtime-adapter-source.mjs maps (`#guard_msgs` + `#eval` without a specification).
  count.runtime = count.eval + count.guard + count.guardMsgsEval;
  return count;
}

for (const registration of inventory.tests) {
  const own = registration.source.endsWith('.lean') ? [registration.source] : [];
  for (const path of own) {
    if (sources[path].symlink !== undefined) assert.equal(readlinkSync(join(pristine, path)), sources[path].symlink, path);
    else assert.equal(sha(readFileSync(join(pristine, path))), sources[path].sha256, path);
  }
}
const elaboration = inventory.tests.filter(test => test.category === 'native-build-time' && test.source.endsWith('.lean'));
survey(elaboration.map(test => test.source));

const adapterSidecars = new Set(['serial', 'out.expected', 'out.ignored']);
const rows = inventory.tests.map(registration => {
  const row = { name: registration.name, category: registration.category, source: registration.source, sha256: registration.sha256 };
  if (registration.category !== 'native-build-time') {
    row.execution = {
      'compiled-application': 'runtime: compiled application',
      'compiled-test-driver': 'runtime: compiled test driver (docparse)',
      'compiled-driver-and-native-compiler': 'runtime: compiled LSP client with native compiler children',
      'mixed-driver-review-required': 'mixed Lake/package driver (per-driver review)',
      'source-lint': 'native build-time only: source lint',
    }[registration.category];
    assert.ok(row.execution, registration.category);
    return row;
  }
  const parsed = cached.get(registration.source);
  row.imports = parsed?.imports;
  row.sidecars = Object.keys(sources).filter(path => path.startsWith(registration.source + '.')).map(path => path.slice(registration.source.length + 1));
  if (parsed?.error) { row.surveyError = parsed.error.slice(0, 600); }
  else { row.forms = forms(parsed.commands); row.exited = parsed.exited; }
  const group = registration.driver.split('/').slice(-2, -1)[0];
  if (Object.hasOwn(evalIO, registration.name)) row.execution = 'runtime: reviewed eval-io adapter';
  else if (group === 'elab_fail') row.execution = 'native build-time only: expected-error test';
  else if (!['elab', 'elab_bench'].includes(group)) row.execution = 'native build-time only: documentation example driver';
  else if (row.surveyError) row.execution = 'review: syntax survey failed';
  else if (row.forms.runtime === 0) row.execution = 'native build-time only: no runtime-checkable command';
  else if (row.exited) row.execution = 'separate review: #exit';
  else if (row.sidecars.some(kind => !adapterSidecars.has(kind))) row.execution = 'separate review: unsupported sidecar';
  else row.execution = 'runtime candidate: parallel adapter';
  return row;
});
const tally = (list, key) => list.reduce((counts, row) => ({ ...counts, [row[key]]: (counts[row[key]] ?? 0) + 1 }), {});
const report = { schema: 1, lean: version, leanCommit: inventory.leanCommit,
  scope: 'Language coverage L1: execution class of every upstream registration of the pinned release; parsing only, no test passes',
  surveyTool: { path: 'scripts/upstream/RuntimeCommandSurvey.lean', sha256: sha(readFileSync(surveyTool)) },
  registrations: rows.length, byCategory: tally(rows, 'category'), byExecution: tally(rows, 'execution'),
  runtimeActionsInCandidates: rows.filter(row => row.execution === 'runtime candidate: parallel adapter')
    .reduce((n, row) => n + row.forms.runtime, 0),
  tests: rows };
writeFileSync(output, JSON.stringify(report, null, 1) + '\n');
console.log(JSON.stringify({ registrations: report.registrations, byExecution: report.byExecution,
  runtimeActionsInCandidates: report.runtimeActionsInCandidates }, null, 2));
