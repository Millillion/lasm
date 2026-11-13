// The CLI's argument grammar (src/cli-arguments.mjs), in-process: every
// option, each error a user can trigger and its exact message, option
// combinations, `--`, and the "did you mean" suggestions. Also the small
// helpers beside it: src/posix-arguments.mjs (the original engine argv),
// src/test-switches.mjs and src/platform.mjs.
import assert from 'node:assert/strict';
import test from 'node:test';
import path from 'node:path';
import { mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import {
  parseLasmArguments, buildTargets, edgeBuildTargets, wasiBuildTargets, platformBuildTargets, fixedLayoutTargets, suspendModes,
  targetHint, cliUsage, commandNames, editDistance, closest,
} from '../src/cli-arguments.mjs';
import { packageTargets } from '../src/package.mjs';
import { originalArguments } from '../src/posix-arguments.mjs';
import { testUnoptimized } from '../src/test-switches.mjs';
import { assertSupportedHost, buildPlatforms, executableName, insideDirectory, responseFile, supportedPlatformsText } from '../src/platform.mjs';
import { forAll } from './helpers/property.mjs';

const fails = (argv, message) => assert.throws(() => parseLasmArguments(argv), { message }, JSON.stringify(argv));
const targetList = buildTargets.join(', ');

test('the target lists', () => {
  assert.deepEqual(edgeBuildTargets, ['workers', 'vercel-edge', 'netlify-edge', 'bun', 'deno', 'deno-deploy', 'supabase-edge']);
  assert.deepEqual(wasiBuildTargets, ['wasi', 'fastly', 'wasi-http']);
  assert.deepEqual(buildTargets, ['node', ...Object.keys(packageTargets), ...edgeBuildTargets, ...wasiBuildTargets, 'browser']);
  assert.deepEqual(platformBuildTargets, [...edgeBuildTargets, ...wasiBuildTargets, 'browser']);
  assert.deepEqual(fixedLayoutTargets, ['vercel-edge', 'netlify-edge']);
  assert.deepEqual(suspendModes, ['none', 'jspi']);
  assert.deepEqual(commandNames, ['build', 'run', 'dev', 'init', 'package', 'editor', 'cache']);
  assert.ok(cliUsage.startsWith('Usage: lasm <Main.lean> [--release] [-- arguments…]\n'));
  assert.ok(cliUsage.endsWith('Application arguments must follow --.'));
  for (const command of ['dev', 'build', 'init', 'package', 'editor', 'cache repair']) assert.ok(cliUsage.includes(`lasm ${command}`), command);
});

test('version: one token only', () => {
  for (const flag of ['--version', '-v', 'version']) assert.deepEqual(parseLasmArguments([flag]), { command: 'version' });
  fails(['--version', 'Main.lean'], 'Unknown Lasm option: --version. Application arguments must follow --.');
  fails(['-v', 'Main.lean'], 'Unknown Lasm option: -v. Application arguments must follow --.');
  assert.throws(() => parseLasmArguments(['version', 'Main.lean']), /^Error: Unknown command "version"/);
});

test('lasm editor', () => {
  assert.deepEqual(parseLasmArguments(['editor']), { command: 'editor', input: '.' });
  assert.deepEqual(parseLasmArguments(['editor', 'my app']), { command: 'editor', input: 'my app' });
  for (const help of ['--help', '-h']) {
    assert.deepEqual(parseLasmArguments(['editor', help]), { command: 'help' });
    assert.deepEqual(parseLasmArguments(['editor', 'a', 'b', help]), { command: 'help' });
  }
  for (const argv of [['editor', 'a', 'b'], ['editor', '--verbose'], ['editor', '-x']]) fails(argv, 'Usage: lasm editor [project-directory]');
});

test('lasm cache repair', () => {
  assert.deepEqual(parseLasmArguments(['cache', 'repair']), { command: 'cache-repair' });
  for (const help of ['--help', '-h']) {
    assert.deepEqual(parseLasmArguments(['cache', help]), { command: 'help' });
    assert.deepEqual(parseLasmArguments(['cache', 'repair', 'x', help]), { command: 'help' });
  }
  for (const argv of [['cache'], ['cache', 'clean'], ['cache', 'repair', 'now'], ['cache', 'Repair']]) fails(argv, 'Usage: lasm cache repair');
});

test('init, dev and package go to their own parsers', () => {
  assert.equal(parseLasmArguments(['init', 'app']).command, 'init');
  assert.equal(parseLasmArguments(['dev']).command, 'dev');
  assert.equal(parseLasmArguments(['package', '--target', 'lambda']).command, 'package');
  // Only as the first token: elsewhere they are words.
  assert.throws(() => parseLasmArguments(['Main.lean', 'init']), /Unexpected positional arguments/);
});

test('the run and build results, field by field', () => {
  assert.deepEqual(parseLasmArguments(['Main.lean']), { command: 'run', rebuild: false, verbose: false, args: [], input: 'Main.lean', profile: 'dev' });
  assert.deepEqual(parseLasmArguments(['run', 'src/Main.lean', '--rebuild']),
    { command: 'run', rebuild: true, verbose: false, args: [], input: 'src/Main.lean', profile: 'dev' });
  assert.deepEqual(parseLasmArguments(['Main.lean', '--verbose']),
    { command: 'run', rebuild: false, verbose: true, args: [], input: 'Main.lean', profile: 'dev' });
  assert.deepEqual(parseLasmArguments(['build', 'Main.lean']),
    { command: 'build', rebuild: false, verbose: false, args: [], input: 'Main.lean', profile: 'release', target: 'node', output: 'dist' });
  assert.deepEqual(parseLasmArguments(['build', 'Main.lean', '--target', 'workers']),
    { command: 'build', rebuild: false, verbose: false, args: [], input: 'Main.lean', profile: 'release', target: 'workers' });
  assert.deepEqual(parseLasmArguments(['build', 'Main.lean', '--target=browser', '--suspend=jspi', '--bundler', '--dev']),
    { command: 'build', rebuild: false, verbose: false, args: [], input: 'Main.lean', profile: 'dev', target: 'browser', suspend: 'jspi', bundler: true });
  assert.deepEqual(parseLasmArguments(['build', 'Main.lean', '--target', 'lambda', '--dev', '--allow-dev']),
    { command: 'build', rebuild: false, verbose: false, args: [], input: 'Main.lean', profile: 'dev', target: 'lambda', allowDev: true, output: 'dist' });
  // A binding configuration: no profile, the node target.
  assert.deepEqual(parseLasmArguments(['build', 'bindings.json']),
    { command: 'build', rebuild: false, verbose: false, args: [], input: 'bindings.json', target: 'node', output: 'dist' });
  assert.deepEqual(parseLasmArguments(['build', 'bindings.json', '--target', 'node']).target, 'node');
});

test('help anywhere before --, but -- ends Lasm options', () => {
  for (const argv of [['--help'], ['-h'], ['Main.lean', '--help'], ['build', 'Main.lean', '-h'], ['run', '--help'],
    ['Main.lean', '-h', '--bogus-later'], ['build', '--help', 'a', 'b', 'c']])
    assert.deepEqual(parseLasmArguments(argv), { command: 'help' }, JSON.stringify(argv));
  assert.deepEqual(parseLasmArguments(['Main.lean', '--', '--help', '-h', '--version']).args, ['--help', '-h', '--version']);
  assert.deepEqual(parseLasmArguments(['Main.lean', '--', '--']).args, ['--']);
  assert.deepEqual(parseLasmArguments(['Main.lean', '--']).args, []);
  // The first -- ends the options, even before the source.
  fails(['--', 'Main.lean'], cliUsage);
  fails(['build', 'Main.lean', '--'], 'Application arguments are accepted by lasm run, not lasm build');
});

test('--dev and --release', () => {
  assert.equal(parseLasmArguments(['Main.lean', '--release', '--release']).profile, 'release');
  assert.equal(parseLasmArguments(['build', 'Main.lean', '--release']).profile, 'release');
  for (const pair of [['--dev', '--release'], ['--release', '--dev']]) fails(['Main.lean', ...pair], 'Choose one of --dev and --release');
  for (const flag of ['--dev', '--release']) fails(['build', 'bindings.json', flag], '--dev and --release apply to Lean applications');
});

test('--target', () => {
  for (const target of buildTargets) {
    assert.equal(parseLasmArguments(['build', 'Main.lean', '--target', target]).target, target);
    assert.equal(parseLasmArguments(['build', `--target=${target}`, 'Main.lean']).target, target);
  }
  for (const argv of [['Main.lean', '--target', 'node'], ['run', 'Main.lean', '--target=workers']]) fails(argv, '--target is available only with lasm build');
  for (const argv of [['build', 'Main.lean', '--target'], ['build', 'Main.lean', '--target='], ['build', 'Main.lean', '--target', '--dev']])
    fails(argv, '--target requires a value: ' + targetList);
  fails(['build', 'Main.lean', '--target', 'node', '--target', 'node'], 'Specify --target only once');
  fails(['build', 'Main.lean', '--target=node', '--target'], 'Specify --target only once');
  fails(['build', 'Main.lean', '--target', 'pages'], `Unknown build target "pages". Choose one of: ${targetList}`);
  fails(['build', 'Main.lean', '--target', 'cloudflare'], `Unknown build target "cloudflare" (did you mean --target workers?). Choose one of: ${targetList}`);
  fails(['build', 'Main.lean', '--target', 'CloudFlare'], `Unknown build target "CloudFlare" (did you mean --target workers?). Choose one of: ${targetList}`);
  fails(['build', 'Main.lean', '--target', 'Node'], `Unknown build target "Node" (did you mean --target node?). Choose one of: ${targetList}`);
  fails(['build', 'Main.lean', '--target', 'workrs'], `Unknown build target "workrs" (did you mean --target workers?). Choose one of: ${targetList}`);
  fails(['build', 'bindings.json', '--target', 'workers'], '--target applies to Lean applications, not binding configurations');
});

test('option names match whole tokens only', () => {
  for (const flag of ['--targets', '--suspended', '--outputs', '--target-x'])
    fails(['build', 'Main.lean', flag, 'node'], `Unknown Lasm option: ${flag}. Application arguments must follow --.`);
  for (const input of ['x--target.lean', 'x--suspend.lean', 'x--output.lean'])
    assert.equal(parseLasmArguments(['build', input]).input, input);
  // lasm package reads its own arguments, not the word package.
  assert.equal(parseLasmArguments(['package', '--target', 'lambda']).input, parseLasmArguments(['package', 'dist', '--target', 'lambda']).input);
});

test('target hints: aliases, near misses, and nothing for inherited names', () => {
  for (const [alias, target] of [['cloudflare', 'workers'], ['cloudflare-workers', 'workers'], ['worker', 'workers'], ['aws', 'lambda'],
    ['aws-lambda', 'lambda'], ['cloudfront', 'lambda-edge'], ['supabase', 'supabase-edge'], ['deno-deploy-edge', 'deno-deploy'], ['spin', 'wasi-http'],
    ['wasmtime', 'wasi'], ['web', 'browser'], ['vite', 'browser'], ['azure-functions', 'azure'], ['google-cloud-functions', 'gcf'],
    ['cloud-functions', 'gcf'], ['vercel-functions', 'vercel'], ['netlify-functions', 'netlify'], ['AWS', 'lambda']])
    assert.equal(targetHint(alias), ` (did you mean --target ${target}?)`, alias);
  assert.equal(targetHint('lambda-edg'), ' (did you mean --target lambda-edge?)');
  for (const word of ['constructor', 'toString', '__proto__', 'hasOwnProperty', 'kubernetes-cluster']) assert.equal(targetHint(word), '', word);
});

test('--suspend', () => {
  for (const mode of suspendModes) {
    assert.equal(parseLasmArguments(['build', 'Main.lean', '--target', 'browser', '--suspend', mode]).suspend, mode);
    assert.equal(parseLasmArguments(['build', 'Main.lean', '--target', 'browser', `--suspend=${mode}`]).suspend, mode);
  }
  for (const argv of [['build', 'Main.lean', '--target', 'browser', '--suspend'], ['build', 'Main.lean', '--target', 'browser', '--suspend=asyncify'],
    ['build', 'Main.lean', '--target', 'browser', '--suspend', 'JSPI']])
    fails(argv, '--suspend requires one of: none, jspi');
  fails(['build', 'Main.lean', '--target', 'browser', '--suspend', 'none', '--suspend=none'], 'Specify --suspend only once');
  for (const argv of [['build', 'Main.lean', '--suspend', 'jspi'], ['build', 'Main.lean', '--target', 'workers', '--suspend', 'none'], ['Main.lean', '--suspend', 'jspi']])
    fails(argv, '--suspend applies to lasm build --target browser');
});

test('--bundler and --allow-dev', () => {
  assert.equal(parseLasmArguments(['build', 'Main.lean', '--target', 'browser', '--bundler']).bundler, true);
  assert.equal('bundler' in parseLasmArguments(['build', 'Main.lean', '--target', 'browser']), false);
  for (const argv of [['build', 'Main.lean', '--bundler'], ['build', 'Main.lean', '--target', 'workers', '--bundler'], ['Main.lean', '--bundler']])
    fails(argv, '--bundler applies to lasm build --target browser');
  for (const target of buildTargets.filter(target => target !== 'node'))
    assert.equal(parseLasmArguments(['build', 'Main.lean', '--target', target, '--allow-dev']).allowDev, true, target);
  for (const argv of [['build', 'Main.lean', '--allow-dev'], ['build', 'Main.lean', '--target', 'node', '--allow-dev'], ['Main.lean', '--allow-dev']])
    fails(argv, '--allow-dev applies to lasm build --target <platform> and lasm package');
});

test('--output and the build positional output', () => {
  assert.equal(parseLasmArguments(['build', 'Main.lean', '--output=out']).output, 'out');
  assert.equal(parseLasmArguments(['build', '--output', 'out', 'Main.lean']).output, 'out');
  assert.equal(parseLasmArguments(['build', 'Main.lean', 'out']).output, 'out');
  for (const argv of [['build', 'Main.lean', '--output'], ['build', 'Main.lean', '--output='], ['build', 'Main.lean', '--output', '--dev']])
    fails(argv, '--output requires a value');
  fails(['build', 'Main.lean', '--output=a', '--output=b'], 'Specify --output only once');
  fails(['build', 'Main.lean', '--output', 'a', 'b'], 'Unexpected positional arguments. Put application arguments after --.');
  fails(['build', 'Main.lean', 'a', 'b'], 'Unexpected positional arguments. Put application arguments after --.');
  fails(['Main.lean', 'a'], 'Unexpected positional arguments. Put application arguments after --.');
  fails(['Main.lean', '--output', 'out'], '--output is available only with lasm build');
  fails(['build', 'Main.lean', '--target', 'vercel-edge', '--output', 'out'],
    '--output does not apply to --target vercel-edge: the platform fixes its layout (api/lasm.mjs and api/_lasm/)');
  fails(['build', 'Main.lean', 'out', '--target', 'netlify-edge'],
    '--output does not apply to --target netlify-edge: the platform fixes its layout (netlify/edge-functions/lasm.mjs and netlify/lasm/)');
  // Platform targets other than those keep --output; none gets dist/ by default.
  for (const target of platformBuildTargets.filter(target => !fixedLayoutTargets.includes(target)))
    assert.equal(parseLasmArguments(['build', 'Main.lean', '--target', target, '--output', 'o']).output, 'o', target);
});

test('sources and commands', () => {
  fails([], cliUsage);
  fails(['build'], cliUsage);
  fails(['--rebuild'], cliUsage);
  fails(['run', 'config.json'], 'Expected a Lean source file, or a binding configuration for lasm build');
  fails(['Main.txt'], 'Expected a Lean source file, or a binding configuration for lasm build');
  fails(['build', 'Main.txt'], 'Expected a Lean source file, or a binding configuration for lasm build');
  fails(['Main.lean', '--node-version', '26'], 'Unknown Lasm option: --node-version. Application arguments must follow --.');
  fails(['Main.lean', '-x'], 'Unknown Lasm option: -x. Application arguments must follow --.');
  const commands = commandNames.join(', ');
  fails(['biuld', 'Main.lean'], `Unknown command "biuld" (did you mean lasm build?). Commands: ${commands}; or run a program with lasm Main.lean.`);
  fails(['inti'], `Unknown command "inti" (did you mean lasm init?). Commands: ${commands}; or run a program with lasm Main.lean.`);
  fails(['frobnicate'], `Unknown command "frobnicate". Commands: ${commands}; or run a program with lasm Main.lean.`);
  // A path is a source, never a command: the check is only for bare words.
  for (const input of ['./biuld', 'dir/biuld', 'dir\\biuld', 'biuld.txt'])
    fails([input], 'Expected a Lean source file, or a binding configuration for lasm build');
  // `lasm build` takes any bare word as its source; only run guesses commands.
  fails(['build', 'biuld'], 'Expected a Lean source file, or a binding configuration for lasm build');
});

test('a bare word that names a Lean file beside it suggests the file', t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-cli-parse-'));
  const cwd = process.cwd();
  t.after(() => { process.chdir(cwd); rmSync(directory, { recursive: true, force: true }); });
  writeFileSync(join(directory, 'Hello.lean'), 'def main : IO Unit := pure ()\n');
  process.chdir(directory);
  assert.throws(() => parseLasmArguments(['Hello']), { message: `Unknown command "Hello" (did you mean lasm Hello.lean?). Commands: ${commandNames.join(', ')}; or run a program with lasm Main.lean.` });
});

const words = ['Main.lean', 'App/Main.lean', 'x y.lean', 'λ.lean', 'a', '', '-', 'b c', '--x', '-h', '--help', '--', '--version'];
// Proposition: Lasm.Cli.Spec.run_args_kept
//   ∀ (src : String) (flags args : List String), src.endsWith ".lean" → ¬ src.startsWith "-" →
//     (∀ f ∈ flags, f ∈ ["--rebuild", "--verbose", "--release"]) →
//     ∃ p, parseLasmArguments (flags ++ [src, "--"] ++ args) = .ok p ∧
//       p.command = "run" ∧ p.input = src ∧ p.args = args ∧
//       p.rebuild = flags.contains "--rebuild" ∧ p.verbose = flags.contains "--verbose" ∧
//       p.profile = (if flags.contains "--release" then "release" else "dev")
test('run: any application arguments after -- come back unchanged, whatever the options before it', () => {
  forAll(r => ({
    source: r.pick(['Main.lean', 'App/Main.lean', 'dir with space/Main.lean', 'λ/Main.lean']),
    flags: r.array(r.int(0, 4), () => r.pick(['--rebuild', '--verbose', '--release'])),
    args: r.array(r.int(0, 6), () => r.pick(words)),
  }), ({ source, flags, args }) => {
    const parsed = parseLasmArguments([...flags, source, '--', ...args]);
    assert.equal(parsed.command, 'run');
    assert.equal(parsed.input, source);
    assert.deepEqual(parsed.args, args);
    assert.equal(parsed.rebuild, flags.includes('--rebuild'));
    assert.equal(parsed.verbose, flags.includes('--verbose'));
    assert.equal(parsed.profile, flags.includes('--release') ? 'release' : 'dev');
  });
});

// Proposition: Lasm.Cli.Candidates.build_options_commute
//   ∀ (opts opts' : List (List String)) (forms : List Bool), (∀ o ∈ opts, OptionGroup o ∧ o ≠ ["--help"] ∧ o ≠ ["-h"]) →
//     (opts.filter fun o => o.length == 1 && !(o.headD "").startsWith "-").length ≤ 1 →
//     (opts.map List.head?).Nodup → opts.Perm opts' → forms.length = opts'.length →
//     (parseLasmArguments ("build" :: opts.flatten)).isOk = true →
//     parseLasmArguments ("build" :: ((opts'.zip forms).map fun (o, j) => if j then joined o else o).flatten) =
//       parseLasmArguments ("build" :: opts.flatten)
test('build: options mean the same in any order and in either --flag value or --flag=value form', () => {
  forAll(r => {
    const target = r.pick(buildTargets);
    const options = [['Main.lean'], ['--target', target]];
    if (!fixedLayoutTargets.includes(target) && r.int(0, 1)) options.push(['--output', 'out dir']);
    if (r.int(0, 1)) options.push(['--rebuild']);
    if (r.int(0, 1)) options.push(['--verbose']);
    if (r.int(0, 1)) options.push(['--dev']);
    if (target !== 'node' && r.int(0, 1)) options.push(['--allow-dev']);
    if (target === 'browser' && r.int(0, 1)) options.push(['--suspend', r.pick(suspendModes)]);
    if (target === 'browser' && r.int(0, 1)) options.push(['--bundler']);
    const shuffled = [...options].sort(() => r.next() - 0.5);
    const joined = shuffled.map(option => option.length === 2 && r.int(0, 1) ? [`${option[0]}=${option[1]}`] : option);
    return { options, shuffled: joined };
  }, ({ options, shuffled }) => {
    const expected = parseLasmArguments(['build', ...options.flat()]);
    assert.deepEqual(parseLasmArguments(['build', ...shuffled.flat()]), expected);
    assert.equal(expected.command, 'build');
    assert.equal(expected.input, 'Main.lean');
    assert.ok(buildTargets.includes(expected.target));
  });
});

// Proposition: Lasm.Cli.Spec.unknown_flag_refused
//   ∀ flag : String, flag.startsWith "-" → flag ∉ knownFlags → valuedForm flag = false →
//     parseLasmArguments ["Main.lean", flag] = .error ("Unknown Lasm option: " ++ flag ++ ". Application arguments must follow --.") ∧
//     parseLasmArguments ["build", flag, "Main.lean"] = .error ("Unknown Lasm option: " ++ flag ++ ". Application arguments must follow --.")
test('every unknown flag is refused by name', () => {
  const known = new Set(['--', '--help', '-h', '--rebuild', '--verbose', '--dev', '--release', '--allow-dev', '--bundler', '--target', '--suspend', '--output']);
  forAll(r => r.pick(['-', '--']) + r.string('abcdefghijklmnopqrstuvwxyz-=0123456789'.split(''), 1, 14), flag => {
    if (known.has(flag) || /^--(target|suspend|output)(=|$)/.test(flag)) return;
    assert.throws(() => parseLasmArguments(['Main.lean', flag]), { message: `Unknown Lasm option: ${flag}. Application arguments must follow --.` });
    assert.throws(() => parseLasmArguments(['build', flag, 'Main.lean']), { message: `Unknown Lasm option: ${flag}. Application arguments must follow --.` });
  }, { runs: 300 });
});

// Proposition: Lasm.Cli.Spec.edit_distance_metric
//   ∀ a b c : String,
//     editDistance a a = 0 ∧ editDistance a "" = a.length ∧ editDistance "" a = a.length ∧
//     editDistance a b = editDistance b a ∧ editDistance a c ≤ editDistance a b + editDistance b c ∧
//     a.length - b.length ≤ editDistance a b ∧ b.length - a.length ≤ editDistance a b ∧
//     editDistance a b ≤ max a.length b.length ∧ (a ≠ b → 0 < editDistance a b)
test('edit distance is a metric bounded by the lengths', () => {
  // Lengths in code points (Lean's String.length): an astral character is one.
  const alphabet = ['a', 'b', 'c', 'λ', '😀', '😁'];
  const length = s => [...s].length;
  forAll(r => [r.string(alphabet, 0, 8), r.string(alphabet, 0, 8), r.string(alphabet, 0, 8)], ([a, b, c]) => {
    assert.equal(editDistance(a, a), 0);
    assert.equal(editDistance(a, ''), length(a));
    assert.equal(editDistance('', a), length(a));
    assert.equal(editDistance(a, b), editDistance(b, a));
    assert.ok(editDistance(a, c) <= editDistance(a, b) + editDistance(b, c));
    assert.ok(editDistance(a, b) >= Math.abs(length(a) - length(b)));
    assert.ok(editDistance(a, b) <= Math.max(length(a), length(b)));
    if (a !== b) assert.ok(editDistance(a, b) > 0);
  }, { runs: 300 });
  assert.equal(editDistance('kitten', 'sitting'), 3);
  assert.equal(editDistance('flaw', 'lawn'), 2);
  assert.equal(editDistance('abc', 'abd'), 1);
  assert.equal(editDistance('ab', 'ba'), 2);
  assert.equal(editDistance('abc', 'xabc'), 1);
  assert.equal(editDistance('abcx', 'abc'), 1);
  // Code points, not UTF-16 units: an emoji is one edit (two units).
  assert.equal(editDistance('😀', ''), 1);
  assert.equal(editDistance('a😀', 'a😁'), 1);
});

test('suggestions ignore ASCII case only, and measure candidates in code points', () => {
  // Unicode lowercases the Kelvin sign to k; command names are ASCII.
  assert.equal(editDistance('K'.toLowerCase(), 'k'), 0);
  assert.equal(closest('\u212a\u212a\u212a', ['kkk']), undefined); // three edits, not none
  assert.equal(closest('KKK', ['kkk']), 'kkk');
  assert.equal(targetHint('WORKERS'), ' (did you mean --target workers?)');
  // ⌊9 code points / 3⌋ = 3 edits (18 UTF-16 units would allow 6).
  const emoji = '😀'.repeat(9);
  assert.equal(closest('😀'.repeat(5), [emoji]), undefined);
  assert.equal(closest('😀'.repeat(6), [emoji]), emoji);
});

test('--flag=value takes everything after =, line breaks included', () => {
  assert.equal(parseLasmArguments(['build', 'Main.lean', '--output=out\ndir']).output, 'out\ndir');
  assert.equal(parseLasmArguments(['build', 'Main.lean', '--output', 'out\ndir']).output, 'out\ndir');
});

test('closest: the nearest candidate within max(2, ⌊length/3⌋) edits, ignoring case; the first of equals', () => {
  assert.equal(closest('biuld', commandNames), 'build');
  assert.equal(closest('BUILD', commandNames), 'build');
  assert.equal(closest('xx', ['ab']), 'ab'); // 2 edits: within the minimum of 2
  assert.equal(closest('xxx', ['abc']), undefined); // 3 edits of 3 letters
  assert.equal(closest('abcdefghi', ['abcdefxyz']), 'abcdefxyz'); // 3 edits of 9 letters
  assert.equal(closest('abcdefghi', ['abcdewxyz']), undefined); // 4 edits of 9 letters
  assert.equal(closest('cat', ['bat', 'cut']), 'bat');
  assert.equal(closest('cat', ['cart', 'cat']), 'cat');
  assert.equal(closest('anything', []), undefined);
});

// Proposition: Lasm.Cli.Spec.closest_nearest_first
//   ∀ (word : String) (cs : List String), word.all Char.isLower → (∀ c ∈ cs, c.all Char.isLower) →
//     closest word cs = (nearestFirst (editDistance word) cs).filter fun c => editDistance word c ≤ threshold c
test('closest picks a candidate no farther than any other, within the threshold', () => {
  const alphabet = 'abcd'.split('');
  forAll(r => ({ word: r.string(alphabet, 0, 7), candidates: r.array(r.int(0, 5), () => r.string(alphabet, 1, 7)) }), ({ word, candidates }) => {
    const best = closest(word, candidates);
    const distances = candidates.map(c => editDistance(word, c));
    if (best === undefined) {
      if (!candidates.length) return;
      const first = candidates[distances.indexOf(Math.min(...distances))];
      assert.ok(Math.min(...distances) > Math.max(2, Math.floor(first.length / 3)));
      return;
    }
    assert.ok(candidates.includes(best));
    assert.equal(editDistance(word, best), Math.min(...distances));
    assert.equal(best, candidates[distances.indexOf(Math.min(...distances))]);
    assert.ok(editDistance(word, best) <= Math.max(2, Math.floor(best.length / 3)));
  }, { runs: 300 });
});

// A stand-in for the koffi library and libc: Linux reads /proc/self/cmdline in chunks.
function linuxLibc(content, { failOpen = false, readResults } = {}) {
  const calls = { open: [], close: [], reads: 0 };
  let offset = 0;
  const results = readResults ? [...readResults] : undefined;
  const functions = {
    'int open(str path, int flags, ...)': (file, flags) => { calls.open.push([file, flags]); return failOpen ? -1 : 9; },
    'intptr_t read(int fd, void *bytes, size_t length)': (fd, bytes, length) => {
      calls.reads++;
      assert.equal(fd, 9);
      const scripted = results?.shift();
      if (scripted !== undefined && scripted < 0) return scripted;
      const count = Math.min(length, content.length - offset, scripted ?? Infinity);
      content.copy(bytes, 0, offset, offset + count); offset += count;
      return BigInt(count);
    },
    'int close(int fd)': fd => { calls.close.push(fd); return 0; },
  };
  return { calls, libc: { func: signature => { assert.ok(functions[signature], signature); return functions[signature]; } } };
}
const ffi = (errno = 13) => ({ errno: () => errno, os: { errno: { EINTR: 4 } } });

test('original engine arguments on Linux: NUL-terminated byte strings, read in chunks', () => {
  const argv = ['/usr/bin/node', '--stack-size=99', 'λ main.mjs', '', 'x'.repeat(9000)];
  const content = Buffer.concat(argv.map(a => Buffer.from(a + '\0')));
  const { calls, libc } = linuxLibc(content);
  // Descriptor 0 is a valid descriptor.
  assert.deepEqual(originalArguments(ffi(), { func: signature => signature.startsWith('int open') ? () => 0 : signature.startsWith('intptr_t read')
    ? (() => { let done = false; return (fd, bytes) => { assert.equal(fd, 0); if (done) return 0; done = true; return Buffer.from('a\0b\0').copy(bytes); }; })() : () => 0 }).map(String), ['a\0', 'b\0']);
  const result = originalArguments(ffi(), libc);
  assert.deepEqual(result.map(b => b.toString()), argv.map(a => a + '\0'));
  assert.ok(result.every(Buffer.isBuffer));
  assert.deepEqual(calls.open, [['/proc/self/cmdline', 0]]);
  assert.deepEqual(calls.close, [9]);
  assert.equal(calls.reads, 4); // 4096 + 4096 + the rest, then 0
});

test('original engine arguments: EINTR retries, other errors and malformed contents are reported', () => {
  const content = Buffer.from('node\0main.mjs\0');
  const retried = linuxLibc(content, { readResults: [-1, 3] });
  assert.deepEqual(originalArguments(ffi(4), retried.libc).map(String), ['node\0', 'main.mjs\0']);
  assert.ok(retried.calls.reads >= 3);
  const failed = linuxLibc(content, { readResults: [-1] });
  assert.throws(() => originalArguments(ffi(5), failed.libc), { message: 'Cannot read original engine arguments: errno 5' });
  assert.deepEqual(failed.calls.close, [9], 'the descriptor is closed after a failed read');
  assert.throws(() => originalArguments(ffi(2), linuxLibc(content, { failOpen: true }).libc), { message: 'Cannot read original engine arguments: errno 2' });
  for (const bad of ['node\0main.mjs', 'node\0', '', 'node'])
    assert.throws(() => originalArguments(ffi(), linuxLibc(Buffer.from(bad)).libc), { message: 'Invalid original engine arguments' }, JSON.stringify(bad));
});

test('original engine arguments on macOS: _NSGetArgc and _NSGetArgv', t => {
  const platform = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { ...platform, value: 'darwin' });
  t.after(() => Object.defineProperty(process, 'platform', platform));
  const strings = ['node', 'main λ.mjs'].map(s => Buffer.from(s + '\0'));
  const libc = { func: signature => ({
    'void *_NSGetArgc()': () => 'argc-pointer',
    'void *_NSGetArgv()': () => 'argv-pointer',
    'size_t strlen(const void *)': pointer => BigInt(strings[pointer].length - 1),
  })[signature] };
  const stand = {
    decode: (pointer, type) => pointer === 'argc-pointer' ? (assert.equal(type, 'int'), 2)
      : pointer === 'argv-pointer' && type === 'void *' ? 'vector'
      : (assert.equal(pointer, 'vector'), assert.deepEqual(type, { array: ['void *', 2] }), [0, 1]),
    array: (type, count) => ({ array: [type, count] }),
    view: (pointer, length) => strings[pointer].buffer.slice(strings[pointer].byteOffset, strings[pointer].byteOffset + length),
  };
  assert.deepEqual(originalArguments(stand, libc).map(String), ['node\0', 'main λ.mjs\0']);
});

test('LASM_TEST_UNOPTIMIZED is on only when it is exactly 1', () => {
  assert.equal(testUnoptimized({ LASM_TEST_UNOPTIMIZED: '1' }), true);
  for (const value of [undefined, '0', 'true', '', ' 1']) assert.equal(testUnoptimized({ LASM_TEST_UNOPTIMIZED: value }), false);
  const saved = process.env.LASM_TEST_UNOPTIMIZED;
  try {
    process.env.LASM_TEST_UNOPTIMIZED = '1'; assert.equal(testUnoptimized(), true);
    delete process.env.LASM_TEST_UNOPTIMIZED; assert.equal(testUnoptimized(), false);
  } finally { if (saved === undefined) delete process.env.LASM_TEST_UNOPTIMIZED; else process.env.LASM_TEST_UNOPTIMIZED = saved; }
});

test('supported hosts', () => {
  assert.deepEqual(buildPlatforms, ['linux-x64', 'linux-arm64', 'darwin-x64', 'darwin-arm64', 'win32-x64']);
  assert.equal(supportedPlatformsText, 'Lasm supports Linux and macOS on x86-64 and ARM64, and Windows on x86-64.');
  for (const host of buildPlatforms) assert.equal(assertSupportedHost(...host.split('-')), undefined);
  assert.throws(() => assertSupportedHost('win32', 'arm64'), { message: `${supportedPlatformsText} Windows ARM64 is not supported.` });
  for (const [platform, arch] of [['linux', 'ia32'], ['freebsd', 'x64'], ['darwin', 'ppc64'], ['win32', 'ia32']])
    assert.throws(() => assertSupportedHost(platform, arch), { message: `${supportedPlatformsText} Your host is ${platform}-${arch}, which is not supported.` });
  if (buildPlatforms.includes(`${process.platform}-${process.arch}`)) assert.doesNotThrow(() => assertSupportedHost());
});

test('executable names and directory containment', () => {
  assert.equal(executableName('lean', 'win32'), 'lean.exe');
  assert.equal(executableName('lean', 'linux'), 'lean');
  assert.equal(executableName('lean', 'darwin'), 'lean');
  assert.equal(executableName('lean'), process.platform === 'win32' ? 'lean.exe' : 'lean');
  const posix = path.posix;
  assert.equal(insideDirectory('/a/b', '/a/b/c', posix), true);
  assert.equal(insideDirectory('/a/b', '/a/b', posix), true);
  assert.equal(insideDirectory('/a/b', '/a/b/..c/d', posix), true);
  assert.equal(insideDirectory('/a/b', '/a', posix), false);
  assert.equal(insideDirectory('/a/b', '/a/c', posix), false);
  assert.equal(insideDirectory('/a/b', '/a/bc', posix), false);
  assert.equal(insideDirectory('/a/b', '/', posix), false);
  assert.equal(insideDirectory('/a/b', '/a/b/c'), true);
  assert.equal(insideDirectory('C:\\a', 'D:\\a\\b', path.win32), false);
});

// Proposition: Lasm.Cli.Spec.response_file_round_trip
//   ∀ args : List String, (∀ a ∈ args, '\n' ∉ a.toList ∧ '\r' ∉ a.toList ∧ '\x00' ∉ a.toList) →
//     ∃ (text : String) (lines : List String), responseFile args = .ok text ∧
//       (text.toList.splitOn '\n').map String.ofList = lines ++ [""] ∧
//       if args = [] then lines = [""] else lines.map unquote = args.map some
// (Proved of the model in verification/cli/Lasm/Cli/Model/Platform.lean,
// which test/models/cli-differential.mjs checks against this function.)
test('response files round-trip any argument without NUL or newlines', () => {
  const unquote = line => { assert.ok(line.startsWith('"') && line.endsWith('"'), line); return line.slice(1, -1).replace(/\\(.)/g, '$1'); };
  forAll(r => r.array(r.int(0, 6), () => r.string(['a', ' ', '\\', '"', 'λ', "'", '$', '\t'], 0, 10)), args => {
    const text = responseFile(args);
    assert.ok(text.endsWith('\n'));
    assert.deepEqual(text.slice(0, -1).split('\n').filter((_, i) => args.length).map(unquote), args);
  });
  assert.equal(responseFile([]), '\n');
  assert.equal(responseFile(['a\\"b']), '"a\\\\\\"b"\n');
  for (const bad of ['a\rb', 'a\nb', 'a\0b'])
    assert.throws(() => responseFile(['ok', bad]), { message: 'Linker arguments cannot contain NUL or newlines' });
});
