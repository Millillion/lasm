// Server MVP upstream inventory: every registration of the pinned release whose
// original sources exercise Std.Http or a server-side neighbour, with its
// execution category. Static review only: commands are parsed, never executed.
//   node inventory.mjs LEAN_VERSION PRISTINE_SOURCE NATIVE_LEAN_BIN OUTPUT.json
import assert from 'node:assert/strict';
import { existsSync, readFileSync, readlinkSync, writeFileSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { createHash } from 'node:crypto';
import { loadUpstreamEvidence } from '../application-tests/upstream-evidence.mjs';

const [version, pristine, leanBin, output, previous = '4.34.1'] = process.argv.slice(2);
assert.ok(version && pristine && leanBin && output, 'Supply LEAN_VERSION PRISTINE_SOURCE NATIVE_LEAN_BIN OUTPUT.json');
assert.ok(!existsSync(output), 'Preserve earlier inventory evidence');
const root = fileURLToPath(new URL('../../', import.meta.url));
const { inventory, sources } = loadUpstreamEvidence(version);
const old = loadUpstreamEvidence(previous);
const sha = bytes => createHash('sha256').update(bytes).digest('hex');
const evalIO = JSON.parse(readFileSync(join(root, 'scripts/application-tests/eval-io-reviewed.json')));
const evalIOTests = evalIO.lean === version ? evalIO.tests : evalIO.releases?.[version]?.tests ?? {};

export const topics = {
  http: /Std\.Http|Std\.Internal\.Http/,
  async: /Std\.Async|Std\.Internal\.Async|ContextAsync|Std\.Internal\.IO\.Async/,
  net: /Std\.Net|Std\.Internal\.UV|\bTCP\b|\bUDP\b|Socket\b/,
  time: /Std\.Time/,
  json: /Lean\.Data\.Json|\bJson\b/,
  env: /IO\.getEnv\b/,
  tasks: /IO\.asTask|Task\.spawn|IO\.mapTask|IO\.bindTask|BaseIO\.asTask|Std\.Channel|CloseableChannel|IO\.Promise|Std\.Sync|IO\.wait\b|IO\.waitAny/,
};
const sockets = /\bTCP\b|\bUDP\b|Socket\.|\.connect\b|\.listen\b|\.bind\b|\bDNS\b|getAddrInfo|Std\.Http\.Server\.serve|Server\.serve/;

function files(registration) {
  // A registration's own source, or every original file of its project directory.
  if (registration.source.endsWith('.lean')) return [registration.source];
  const directory = dirname(registration.source) + '/';
  return Object.keys(sources).filter(path => path.startsWith(directory) && sources[path].sha256);
}
function surveyGroup(paths) {
  const result = spawnSync(join(leanBin, 'lean'), ['-j1', '--run', join(root, 'scripts/upstream/RuntimeCommandSurvey.lean'),
    ...paths.map(path => join(pristine, path))], { encoding: 'utf8', timeout: 900_000, maxBuffer: 256 << 20,
    env: { ...process.env, PATH: leanBin + ':' + process.env.PATH, LEAN_PATH: '' } });
  assert.equal(result.status, 0, `survey ${result.status} ${result.signal} ${result.error?.message} ${result.stderr}`);
  const lines = result.stdout.trim().split('\n').map(line => JSON.parse(line));
  assert.equal(lines.length, paths.length);
  return paths.map((path, index) => { assert.equal(lines[index].file, join(pristine, path)); return [path, lines[index]]; });
}
function surveyAll(paths) {
  // One process per textual import set: each file is parsed against exactly
  // its own header imports, and environments are never released mid-process.
  const key = path => [...readFileSync(join(pristine, path), 'latin1').matchAll(/^(?:public |meta )*import\s+(\S+)/gm)]
    .map(match => match[1]).join(' ');
  const groups = Map.groupBy(paths, key);
  return Object.fromEntries([...groups.values()].flatMap(surveyGroup));
}
function forms(commands) {
  const count = { eval: 0, evalBang: 0, guard: 0, guardMsgsEval: 0, guardMsgsGuard: 0, guardMsgsOther: 0,
    guardMsgsSpec: 0, runCommand: 0, other: {} };
  for (const command of commands) {
    const kind = command.kind;
    if (kind === 'Lean.Parser.Command.eval') count.eval++;
    else if (kind === 'Lean.Parser.Command.evalBang') count.evalBang++;
    else if (kind === 'Lean.Parser.Command.guardCmd') count.guard++;
    else if (kind === 'Lean.guardMsgsCmd') {
      if (command.spec) count.guardMsgsSpec++;
      const inner = command.command.kind;
      if (inner === 'Lean.Parser.Command.eval') count.guardMsgsEval++;
      else if (inner === 'Lean.Parser.Command.guardCmd') count.guardMsgsGuard++;
      else count.guardMsgsOther++;
    } else if (/runCmd|runElab|runMeta|run_cmd|run_elab|run_meta/i.test(kind)) count.runCommand++;
    else count.other[kind] = (count.other[kind] ?? 0) + 1;
  }
  return count;
}

const topical = [];
for (const registration of inventory.tests) {
  const paths = files(registration);
  const texts = paths.map(path => [path, readFileSync(join(pristine, path), 'latin1')]);
  for (const [path] of texts) {
    if (sources[path].symlink) assert.equal(readlinkSync(join(pristine, path)), sources[path].symlink, path);
    else assert.equal(sha(readFileSync(join(pristine, path))), sources[path].sha256, path);
  }
  const hits = Object.entries(topics).filter(([, pattern]) => texts.some(([, text]) => pattern.test(text))).map(([name]) => name);
  if (!hits.length) continue;
  const row = { name: registration.name, category: registration.category, topics: hits, source: registration.source,
    sha256: registration.sha256, sidecars: registration.sidecars ?? [] };
  const before = old.inventory.tests.find(test => test.name === registration.name);
  row.change = !before ? 'added' : before.sha256 === registration.sha256 ? 'unchanged' : 'changed';
  row.usesSockets = texts.some(([, text]) => sockets.test(text));
  topical.push([registration, row]);
}
const surveyed = surveyAll(topical.filter(([registration]) => registration.category === 'native-build-time'
  && registration.source.endsWith('.lean')).map(([registration]) => registration.source));
const rows = [];
for (const [registration, row] of topical) {
  if (Object.hasOwn(surveyed, registration.source)) {
    const parsed = surveyed[registration.source];
    if (parsed.error) row.surveyError = parsed.error;
    else row.forms = forms(parsed.commands);
    const f = row.forms;
    const runtimeForms = f ? f.eval + f.guard + f.guardMsgsEval + f.guardMsgsGuard : 0;
    row.execution = Object.hasOwn(evalIOTests, registration.name) ? 'runtime: reviewed eval-io adapter'
      : parsed.error ? 'review: syntax survey failed'
      : runtimeForms === 0 ? 'native build-time only (no #eval/#guard actions)'
      : 'runtime candidate: parallel adapter review';
  } else if (registration.category === 'compiled-application') row.execution = 'runtime: compiled application';
  else row.execution = 'separate harness: ' + registration.category;
  rows.push(row);
}
const tally = key => rows.reduce((counts, row) => {
  for (const value of [].concat(row[key])) counts[value] = (counts[value] ?? 0) + 1; return counts; }, {});
// All registrations dropped since the previous release (names only; their
// sources are absent from this archive, so topics are not re-derived).
const removed = old.inventory.tests.filter(test => !inventory.tests.some(row => row.name === test.name)).map(test => test.name);
const report = { schema: 1, lean: version, leanCommit: inventory.leanCommit, previous,
  scope: 'Static topical inventory of upstream registrations relevant to the Server MVP; parsing only, no test passes',
  surveyTool: { path: 'scripts/upstream/RuntimeCommandSurvey.lean', sha256: sha(readFileSync(join(root, 'scripts/upstream/RuntimeCommandSurvey.lean'))) },
  topicPatterns: Object.fromEntries(Object.entries(topics).map(([name, pattern]) => [name, pattern.source])),
  socketPattern: sockets.source,
  registrations: rows.length, byTopic: tally('topics'), byCategory: tally('category'), byExecution: tally('execution'),
  byChange: tally('change'), removedRegistrationsSincePrevious: removed, tests: rows };
writeFileSync(output, JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify({ registrations: report.registrations, byTopic: report.byTopic, byCategory: report.byCategory,
  byExecution: report.byExecution, byChange: report.byChange }, null, 2));
