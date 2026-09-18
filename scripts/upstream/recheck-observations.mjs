import { readFileSync, writeFileSync, mkdirSync, cpSync, readdirSync, existsSync } from 'node:fs';
import { join, dirname, basename, resolve } from 'node:path';
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';
import { normalizeOutput, normalizeDiagnostics } from './comparison.mjs';
const input = resolve(process.argv[2] ?? 'docs/compatibility/lean-4.32.0-results.json');
const output = resolve(process.argv[3] ?? '.work/upstream-baseline-recheck');
const prior = JSON.parse(readFileSync(input));
if (prior.leanCommit !== leanCommit) throw new Error('Wrong upstream version');
const { lean } = resolveLean(root);
const source = join(root, '.cache/lean4-4.32.0/tests');
mkdirSync(output, { recursive: true });
const resultFile = join(output, 'results-original-recheck.json');
const previous = existsSync(resultFile) ? JSON.parse(readFileSync(resultFile)) : null;
if (previous && previous.leanCommit !== leanCommit) throw new Error('Wrong upstream version in previous recheck');
const entries = previous?.entries ?? [];
for (const observation of prior.entries.filter(e=>e.status==='original-native-failed' || e.name==='elab/currentDir.lean')) {
  const work = join(root, observation.work);
  if (createHash('sha256').update(readFileSync(join(work, 'dist/module.wasm'))).digest('hex') !== observation.artifactSha256)
    throw new Error('Changed artifact: ' + observation.name);
  const [pile, name] = observation.name.split('/');
  const cwd = join(output, observation.name.replaceAll('/', '__'), pile);
  mkdirSync(cwd, { recursive: true });
  const original = join(source, observation.name);
  cpSync(original, join(cwd, name));
  for (const file of readdirSync(dirname(original)))
    if (file.startsWith(name + '.') && !file.endsWith('.sh')) cpSync(join(dirname(original), file), join(cwd, file), { recursive: true });
  let stdout = '', stderr = '', code = 0;
  try { stdout = execFileSync(lean, ['--root=..', '-DprintMessageEndPos=true', '-Dlinter.all=false', '-DElab.inServer=true', '-Dcompiler.postponeCompile=false', name],
    { cwd, env: { ...process.env, LEAN_NUM_THREADS: '2' }, encoding: 'utf8', timeout: 60_000, maxBuffer: 16_000_000, stdio: ['ignore','pipe','pipe'] }); }
  catch (e) { stdout = e.stdout?.toString() ?? ''; stderr = e.stderr?.toString() ?? ''; code = e.status ?? null; }
  writeFileSync(join(cwd, 'original.stdout'), stdout); writeFileSync(join(cwd, 'original.stderr'), stderr);
  const expectedFile = original + '.out.expected';
  const ignored = existsSync(original + '.out.ignored');
  const expectedMatches = ignored ? null : normalizeDiagnostics(stdout + stderr) === (existsSync(expectedFile) ? readFileSync(expectedFile, 'utf8') : '');
  const n = part => normalizeOutput(readFileSync(join(work, 'native.' + part), 'utf8'), join(work, 'native'));
  const w = part => normalizeOutput(readFileSync(join(work, 'wasm.' + part), 'utf8'), join(work, 'wasm'));
  const same = n('stdout') === w('stdout') && n('stderr') === w('stderr');
  const errors = /LASM_UPSTREAM_END:\d+:error:/.test(n('stderr'));
  const entry = { name: observation.name, sha256: observation.sha256, artifactSha256: observation.artifactSha256,
    artifactCompilerIdentity: observation.compilerIdentity, work: observation.work,
    nativeOriginalRechecked: { code, expectedMatches, output: cwd.slice(root.length+1) },
    status: code !== 0 || expectedMatches === false ? 'original-native-failed'
      : !same ? 'output-mismatch' : errors ? 'matched-native-with-errors' : 'matched-native' };
  const index = entries.findIndex(e=>e.name===entry.name);
  if (index < 0) entries.push(entry); else entries[index] = entry;
  writeFileSync(resultFile, JSON.stringify({ leanCommit, entries }, null, 2) + '\n');
  console.log(entry.status + ': ' + entry.name);
}
