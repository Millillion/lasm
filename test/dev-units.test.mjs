// lasm dev's pieces (src/dev.mjs): its arguments, which files it watches and
// compares, the watcher with a stand-in fs.watch, the diagnostics it prints
// and its build summary.
import assert from 'node:assert/strict';
import { test } from 'node:test';
import { mkdirSync, mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, relative } from 'node:path';
import { changedFiles, devTargets, devUsage, formatLeanDiagnostics, parseDevArguments, projectFiles, relevantFile, snapshot, summarizeStages, watchProject } from '../src/dev.mjs';
import { jsRuntime } from '../src/js-runtime.mjs';
import { forAll } from './helpers/property.mjs';

test('lasm dev arguments: defaults, flags and their errors', () => {
  assert.deepEqual(parseDevArguments([]), { command: 'dev', profile: 'dev', args: [], run: true, verbose: false, input: 'Main.lean', target: jsRuntime,
    outputs: [{ target: jsRuntime, input: 'Main.lean' }] });
  assert.deepEqual(devTargets, ['node', 'bun', 'deno', 'workers', 'vercel-edge', 'netlify-edge', 'deno-deploy', 'supabase-edge', 'browser']);
  const all = parseDevArguments(['--release', '--dev', '--no-run', '--verbose', 'App.lean', '--', 'x', '--help']);
  assert.deepEqual([all.profile, all.run, all.verbose, all.input, all.args], ['dev', false, true, 'App.lean', ['x', '--help']]);
  assert.equal(parseDevArguments(['--release']).profile, 'release');
  assert.deepEqual(parseDevArguments(['-h']), { command: 'dev-help' });
  // --target values: per-output sources, the first named source names the project.
  const outputs = parseDevArguments(['--target', 'browser=Client.lean,node']);
  assert.equal(outputs.input, 'Client.lean');
  assert.equal(outputs.target, 'browser');
  assert.deepEqual(outputs.outputs, [{ target: 'browser', input: 'Client.lean' }, { target: 'node', input: 'Client.lean' }]);
  assert.equal(parseDevArguments(['Main.lean', '--target', 'node=Server.lean']).input, 'Main.lean');
  assert.throws(() => parseDevArguments(['--target', 'node=Server.js']), /^Error: --target node=Server\.js: the source must be a \.lean file$/);
  assert.throws(() => parseDevArguments(['--target', 'lambda']), new RegExp(`^Error: lasm dev --target accepts ${devTargets.join(', ')}, not "lambda"$`));
  assert.throws(() => parseDevArguments(['--target', 'bun,deno']), /^Error: lasm dev runs one program: choose one of node, bun and deno$/);
  assert.equal(parseDevArguments(['--target', 'node,workers']).outputs.length, 2);
  // Values: =, the next token; a missing value or another flag is an error with the usage.
  for (const tokens of [['--target'], ['--target', '--release'], ['--port='], ['--host', '--port']])
    assert.throws(() => parseDevArguments(tokens), error => error.message.startsWith(`--${tokens[0].slice(2).replace('=', '')} requires a value\n\n${devUsage}`));
  for (const port of ['0', '65535', '5173']) assert.equal(parseDevArguments(['--target=browser', `--port=${port}`]).port, Number(port));
  for (const port of ['65536', '123456', 'x80', '80x', '-1', '1.5'])
    assert.throws(() => parseDevArguments(['--target=browser', '--port', port]), new RegExp(`^Error: --port needs a port number, not "${port.replace('.', '\\.')}"$`));
  const browser = parseDevArguments(['--target', 'browser', '--host=0.0.0.0', '--output', 'out']);
  assert.deepEqual([browser.host, browser.output], ['0.0.0.0', 'out']);
  assert.throws(() => parseDevArguments(['--host', '::']), /^Error: --host applies to lasm dev --target browser \(servers read \$PORT and \$HOST\)$/);
  assert.throws(() => parseDevArguments(['--output', 'x']), /^Error: --output applies/);
  assert.throws(() => parseDevArguments(['--no-watch']), /^Error: --no-watch applies/);
  // Browser options with a browser output among several.
  assert.equal(parseDevArguments(['--target', 'node,browser', '--port', '4000']).port, 4000);
  assert.throws(() => parseDevArguments(['--fast']), error => error.message === `Unknown lasm dev option: --fast. Program arguments follow --.\n\n${devUsage}`);
  assert.throws(() => parseDevArguments(['-x']), /Unknown lasm dev option: -x/);
  assert.throws(() => parseDevArguments(['A.lean', 'B.lean']), error => error.message === `lasm dev takes one Lean source.\n\n${devUsage}`);
  assert.throws(() => parseDevArguments(['main.mjs']), /^Error: lasm dev expects a Lean source \(Main\.lean\), not main\.mjs$/);
  assert.match(devUsage, /^Usage: lasm dev \[Main\.lean\] \[--target node\|bun\|deno\|workers\|vercel-edge\|netlify-edge\|deno-deploy\|supabase-edge\|browser\]/);
});

test('the files lasm dev watches: Lean sources and Lake/npm configuration, outside output and dot directories', () => {
  for (const name of ['A.lean', 'dir/B.lean', 'lakefile.toml', 'lakefile.lean', 'lake-manifest.json', 'lean-toolchain', 'package.json', 'package-lock.json'])
    assert.equal(relevantFile(name), true, name);
  for (const name of ['main.mjs', 'A.lean.swp', 'lean', 'package.json.bak', 'tsconfig.json', 'leanfile']) assert.equal(relevantFile(name), false, name);
  const project = mkdtempSync(join(tmpdir(), 'lasm-dev-files-'));
  try {
    for (const dir of ['Sub/Deep', 'node_modules/pkg', '.lake/build', 'dist', 'build', 'out.lasm-staging', 'distribution', 'builder']) mkdirSync(join(project, dir), { recursive: true });
    for (const file of ['Main.lean', 'Sub/A.lean', 'Sub/Deep/B.lean', 'lakefile.toml', 'notes.md', 'node_modules/pkg/package.json', '.lake/build/C.lean',
      'dist/D.lean', 'build/E.lean', 'out.lasm-staging/F.lean', 'distribution/G.lean', 'builder/H.lean'])
      writeFileSync(join(project, file), file);
    const files = projectFiles(project).map(file => relative(project, file));
    assert.deepEqual(files, ['Main.lean', 'Sub/A.lean', 'Sub/Deep/B.lean', 'builder/H.lean', 'distribution/G.lean', 'lakefile.toml']);
    assert.deepEqual(projectFiles(join(project, 'missing')), []);
    const before = snapshot(project);
    assert.equal(before.size, 6);
    assert.match(before.get(join(project, 'Main.lean')), /^[0-9a-f]{64}$/);
    writeFileSync(join(project, 'Main.lean'), 'Main.lean');  // same content: no change
    assert.deepEqual(changedFiles(before, snapshot(project)), []);
    writeFileSync(join(project, 'Sub/A.lean'), 'changed');
    rmSync(join(project, 'lakefile.toml'));
    writeFileSync(join(project, 'New.lean'), '');
    assert.deepEqual(changedFiles(before, snapshot(project)).map(file => relative(project, file)).sort(), ['New.lean', 'Sub/A.lean', 'lakefile.toml']);
  } finally { rmSync(project, { recursive: true, force: true }); }
});

// ∀ a b, changedFiles a b = [] ↔ a = b (as maps), and every reported file differs.
test('changedFiles reports exactly the files that differ', () => {
  forAll(gen => {
    const map = () => new Map(gen.array(gen.int(0, 5), () => [gen.pick(['a', 'b', 'c', 'd', 'e']), gen.pick(['1', '2', null])]));
    return [map(), map()];
  }, ([before, after]) => {
    const changed = changedFiles(before, after);
    const keys = new Set([...before.keys(), ...after.keys()]);
    const differs = key => before.has(key) !== after.has(key) || before.get(key) !== after.get(key);
    assert.deepEqual([...changed].sort(), [...keys].filter(differs).sort());
    assert.equal(new Set(changed).size, changed.length);
  });
});

/** A stand-in fs.watch: records each watched directory's callback and error handler. */
function standInWatch() {
  const watched = new Map();
  const watchFile = (dir, callback) => {
    const entry = { callback, closed: false, onError: null };
    const handle = { on(event, fn) { if (event === 'error') entry.onError = fn; }, close() { entry.closed = true; } };
    watched.set(dir, entry);
    return handle;
  };
  return { watched, watchFile };
}

test('watchProject with a stand-in watcher: what counts as a change, new and removed directories, errors', async () => {
  const project = mkdtempSync(join(tmpdir(), 'lasm-dev-watch-'));
  try {
    mkdirSync(join(project, 'Sub'));
    mkdirSync(join(project, 'node_modules'));
    mkdirSync(join(project, '.git'));
    const { watched, watchFile } = standInWatch();
    let events = 0;
    const watcher = watchProject(project, () => { events++; }, { watchFile });
    assert.equal(watcher.mode, 'events');
    assert.deepEqual([...watched.keys()].sort(), [project, join(project, 'Sub')]);
    assert.equal(watcher.directories(), 2);
    const root = watched.get(project);
    root.callback('change', 'Main.lean'); assert.equal(events, 1);
    root.callback('change', 'notes.txt'); assert.equal(events, 1, 'other files are ignored');
    root.callback('change', null); assert.equal(events, 2, 'an event without a name may be anything');
    root.callback('rename', 'gone.txt'); assert.equal(events, 2);
    root.callback('rename', 'lakefile.toml'); assert.equal(events, 3);
    // A new directory is watched (and its subdirectories), and counts as a change.
    mkdirSync(join(project, 'New/Inner'), { recursive: true });
    root.callback('rename', 'New');
    assert.equal(events, 4);
    assert.ok(watched.has(join(project, 'New')) && watched.has(join(project, 'New/Inner')));
    assert.equal(watcher.directories(), 4);
    // An ignored new directory is not.
    mkdirSync(join(project, 'dist'));
    root.callback('rename', 'dist');
    assert.equal(watched.has(join(project, 'dist')), false);
    assert.equal(events, 4);
    // A removed watched directory: its watcher closes, and that is a change.
    rmSync(join(project, 'Sub'), { recursive: true });
    const sub = watched.get(join(project, 'Sub'));
    root.callback('rename', 'Sub');
    assert.equal(sub.closed, true);
    assert.equal(events, 5);
    assert.equal(watcher.directories(), 3);
    // A watcher error: closed, and the directory watched again shortly after if it still exists.
    const inner = watched.get(join(project, 'New/Inner'));
    inner.onError(new Error('EPERM'));
    assert.equal(inner.closed, true);
    assert.equal(watcher.directories(), 2);
    await new Promise(r => setTimeout(r, 120));
    assert.notEqual(watched.get(join(project, 'New/Inner')), inner, 'watched again');
    assert.equal(watcher.directories(), 3);
    // An error on a directory that is gone: not re-armed.
    const newer = watched.get(join(project, 'New'));
    rmSync(join(project, 'New'), { recursive: true });
    newer.onError(new Error('gone'));
    await new Promise(r => setTimeout(r, 120));
    assert.equal(watched.get(join(project, 'New')), newer);
    // After close, nothing counts and every watcher is closed.
    watcher.close();
    assert.equal(watcher.directories(), 0);
    assert.equal(root.closed, true);
    root.callback('change', 'Main.lean');
    assert.equal(events, 5);
  } finally { rmSync(project, { recursive: true, force: true }); }
});

test('watchProject: an error after close is not re-armed; a watcher that cannot start falls back to polling', async () => {
  const project = mkdtempSync(join(tmpdir(), 'lasm-dev-poll-'));
  try {
    writeFileSync(join(project, 'Main.lean'), 'a');
    const { watched, watchFile } = standInWatch();
    const watcher = watchProject(project, () => {}, { watchFile });
    const root = watched.get(project);
    watcher.close();
    root.onError(new Error('late'));
    await new Promise(r => setTimeout(r, 100));
    assert.equal(watched.get(project), root);

    let closedFirst = false;
    const failing = (dir, callback) => {
      if (dir !== project) throw new Error('ENOSPC');
      return { on() {}, close() { closedFirst = true; } };
    };
    mkdirSync(join(project, 'Sub'));
    let events = 0;
    const polling = watchProject(project, () => { events++; }, { watchFile: failing, pollMs: 30 });
    try {
      assert.equal(polling.mode, 'polling');
      assert.equal(closedFirst, true, 'the watchers started before the failure are closed');
      await new Promise(r => setTimeout(r, 90));
      assert.equal(events, 0, 'unchanged content is not a change');
      writeFileSync(join(project, 'Sub', 'B.lean'), 'b');
      for (let i = 0; i < 50 && !events; i++) await new Promise(r => setTimeout(r, 20));
      assert.equal(events, 1);
      await new Promise(r => setTimeout(r, 100));
      assert.equal(events, 1, 'each change is reported once');
    } finally { polling.close(); }
    const after = events;
    writeFileSync(join(project, 'Main.lean'), 'changed');
    await new Promise(r => setTimeout(r, 100));
    assert.equal(events, after, 'close stops polling');
  } finally { rmSync(project, { recursive: true, force: true }); }
});

test('formatLeanDiagnostics: paths relative to the project, source frames, Lake noise removed', () => {
  const project = mkdtempSync(join(tmpdir(), 'lasm-dev-diag-'));
  try {
    writeFileSync(join(project, 'Main.lean'), 'def a := 1\ndef b := oops\n  def c := 2\n');
    const shown = relative(process.cwd(), join(project, 'Main.lean'));
    const log = [
      'trace: .> LEAN_PATH=… lean Main.lean',
      `${project}/Main.lean:2:9: error: unknown identifier 'oops'`,
      'error: ./Main.lean:3:2: unexpected token',
      'Main.lean:1:0: warning(linter.unused): unused variable',
      'warning: Main.lean:1:4: deprecated',
      'Main.lean:1:1: info: note',
      'Main.lean:99:0: error: past the end',
      'Other.lean:1:0: error: no such file',
      '✖ [3/7] Building Main',
      'error: build failed',
      'Command failed: lake build',
      'Some required targets logged failures:',
      '- Main',
      '- Other',
      'plain line',
      '', '', '', '',
      'last',
    ].join('\r\n');
    const lines = formatLeanDiagnostics(log, project).split('\n');
    assert.deepEqual(lines, [
      `${shown}:2:9: error: unknown identifier 'oops'`,
      '    2 | def b := oops',
      `      |          ^`,
      `${shown}:3:2: error: unexpected token`,
      '    3 |   def c := 2',
      '      |   ^',
      `${shown}:1:0: warning: unused variable`,
      `${shown}:1:4: warning: deprecated`,
      `${shown}:1:1: info: note`,
      `${shown}:99:0: error: past the end`,
      `${relative(process.cwd(), join(project, 'Other.lean'))}:1:0: error: no such file`,
      'plain line',
      '',
      'last',
    ]);
    // At most five source frames.
    const many = Array.from({ length: 7 }, (_, i) => `Main.lean:1:${i}: error: e${i}`).join('\n');
    assert.equal(formatLeanDiagnostics(many, project).split('\n').filter(line => line.startsWith('    1 |')).length, 5);
    // A summary line that is not a list item ends the failure list.
    assert.equal(formatLeanDiagnostics('Some required targets logged failures:\n- A\nnot a target\n- B', project), 'not a target\n- B');
    assert.equal(formatLeanDiagnostics(undefined, project), '');
    assert.equal(formatLeanDiagnostics('  only spaces  \n', project), 'only spaces');
    // A located line without a severity is an error.
    assert.equal(formatLeanDiagnostics('Main.lean:1:0: something', project).split('\n')[0], `${shown}:1:0: error: something`);
  } finally { rmSync(project, { recursive: true, force: true }); }
});

test('summarizeStages groups stage times into Lean, C, link and output', () => {
  const stages = [
    { stage: 'Checking Lean sources', at: 0 },
    { stage: 'Running Lake', at: 1000 },
    { stage: 'Generating bindings', at: 1500 },
    { stage: 'Compiling application module 1 of 3', at: 2000 },
    { stage: 'Planning the link', at: 2600 },
    { stage: 'Linking application and Lean runtime', at: 2700 },
    { stage: 'Resolving required runtime symbols', at: 3000 },
    { stage: 'Writing the launcher', at: 3100 },
    { stage: 'Writing output', at: 3200 },
  ];
  assert.equal(summarizeStages(stages, 4000), 'Lean 2.0s · C 0.6s · link 0.6s · output 0.8s');
  // Groups under 0.05 s are left out.
  assert.equal(summarizeStages([{ stage: 'Compiling x', at: 0 }, { stage: 'Writing', at: 49 }], 1049), 'output 1.0s');
  assert.equal(summarizeStages([{ stage: 'Compiling x', at: 0 }, { stage: 'Writing', at: 50 }], 1050), 'C 0.1s · output 1.0s');
  assert.equal(summarizeStages([], 10), '');
  assert.equal(summarizeStages([{ stage: 'lake update', at: 0 }], 300), 'Lean 0.3s');
});
