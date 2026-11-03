// The macOS C tier against the runner's own SDK (issue #73). With an installed
// Lasm CLI, builds and runs scripts/ecosystem/projects/native-tactic, whose
// precompiled module Lake links with Lean's ld64.lld against the SDK's
// libSystem.tbd, in two configurations:
//   sdk            the runner's SDK as it is;
//   unknown-targets an overlay of that SDK (symbolic links, nothing copied but the
//                  stub) whose libSystem.tbd also lists arm64e.x1-macos and
//                  arm64e.x1-maccatalyst wherever arm64e-macos is listed, as newer
//                  SDKs do. Lean's ld64.lld itself must reject that stub (the bug
//                  reproduces) while the Lasm build still succeeds.
// The SDK's version and the targets Lasm leaves out of its stub are reported.
//   node scripts/ci/macos-c-tier.mjs --lasm PATH/bin/lasm.mjs --work DIR [--out FILE.json]
import { spawnSync } from 'node:child_process';
import { cpSync, existsSync, mkdirSync, readFileSync, readdirSync, rmSync, symlinkSync, writeFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import assert from 'node:assert/strict';
import { filterTapiStub, checkLibSystemStub } from '../../src/macos-tbd.mjs';
import { managedCacheDirectory } from '../../src/managed-artifacts.mjs';

const argv = process.argv.slice(2);
const opt = (name, fallback) => { const i = argv.indexOf(name); return i < 0 ? fallback : argv[i + 1]; };
const lasm = opt('--lasm') && resolve(opt('--lasm'));
if (!lasm) { console.error('--lasm PATH/bin/lasm.mjs is required'); process.exit(2); }
assert.equal(process.platform, 'darwin', 'macOS only');
const work = resolve(opt('--work', '.work/macos-c-tier'));
const out = resolve(opt('--out', join(work, 'macos-c-tier.json')));
const root = join(dirname(fileURLToPath(import.meta.url)), '..', '..');
const env = { ...process.env, CI: '1', BROWSER: 'none', LASM_EDITOR: '0', NO_COLOR: '1' };
delete env.SDKROOT;
rmSync(work, { recursive: true, force: true });
mkdirSync(work, { recursive: true });

const run = (command, args, options = {}) => {
  const result = spawnSync(command, args, { encoding: 'utf8', timeout: 3_600_000, maxBuffer: 64 * 1024 * 1024, ...options });
  return { status: result.status, stdout: result.stdout ?? '', stderr: result.stderr ?? '', error: result.error?.message };
};
const line = (command, args) => run(command, args).stdout.trim();
const sdk = line('xcrun', ['--show-sdk-path']);
assert.ok(sdk && existsSync(join(sdk, 'usr/lib/libSystem.tbd')), `No SDK libSystem.tbd (${sdk})`);
const raw = readFileSync(join(sdk, 'usr/lib/libSystem.tbd'), 'utf8');
const report = {
  macos: line('sw_vers', ['-productVersion']), sdk, sdkVersion: line('xcrun', ['--show-sdk-version']),
  arch: process.arch, stubFormat: raw.trimStart().startsWith('{') ? 'tbd v5 (JSON)' : /^tbd-version:\s*(\d+)/m.exec(raw)?.[0] ?? raw.split('\n')[0],
  unknownTargets: filterTapiStub(raw).removed, builds: {},
};
console.log(JSON.stringify(report, null, 2));

function build(name, sdkRoot) {
  const app = join(work, name);
  cpSync(join(root, 'scripts/ecosystem/projects/native-tactic'), app, { recursive: true, filter: file => !file.endsWith('project.json') });
  const started = Date.now();
  const result = run(process.execPath, [lasm, 'Main.lean'], { cwd: app, env: sdkRoot ? { ...env, SDKROOT: sdkRoot } : env });
  report.builds[name] = { status: result.status, seconds: (Date.now() - started) / 1000 };
  if (result.status !== 0 || !/computed during elaboration: 50, 145/.test(result.stdout)) {
    console.error(`${name}: status ${result.status}${result.error ? ` (${result.error})` : ''}\n${result.stdout}\n${result.stderr}`);
    writeFileSync(out, JSON.stringify(report, null, 2) + '\n');
    process.exit(1);
  }
  console.log(`${name}: ${result.stdout.trim()} (${report.builds[name].seconds} s)`);
}

build('sdk');

const derived = join(managedCacheDirectory(env), 'derived');
const linker = readdirSync(derived).map(name => join(derived, name, 'bin/ld64.lld')).find(existsSync);
assert.ok(linker, `No ld64.lld under ${derived}`);
// Lean's own linker (from the C tier the first build installed) must reject the
// unfiltered stub, or this job no longer reproduces #73.
const reproduces = stub => {
  const rejected = checkLibSystemStub(linker, stub, process.arch);
  assert.match(rejected ?? '', /malformed file|unknown target/, `Lean's ld64.lld reads ${stub}: the check no longer reproduces #73`);
  report.unfilteredRejected = rejected.split('\n')[0];
  console.log(`Lean's ld64.lld on the unfiltered stub: ${report.unfilteredRejected}`);
};

if (report.unknownTargets.length) {
  // The runner's SDK itself lists targets Lean's linker does not know: the first build was the reproduction.
  reproduces(join(sdk, 'usr/lib/libSystem.tbd'));
} else {
  // An SDK overlay whose stub lists the targets Lean 4.35.0's ld64.lld predates.
  const overlay = join(work, 'MacOSX-x1.sdk');
  const mirror = (from, to, keep) => {
    mkdirSync(to, { recursive: true });
    for (const name of readdirSync(from)) if (name !== keep) symlinkSync(join(from, name), join(to, name));
  };
  mirror(sdk, overlay, 'usr');
  mirror(join(sdk, 'usr'), join(overlay, 'usr'), 'lib');
  mirror(join(sdk, 'usr/lib'), join(overlay, 'usr/lib'), 'libSystem.tbd');
  let lists = 0;
  const injected = raw.replace(/(targets:[ \t]*\[)([^\]]*)\]/g, (match, open, body) => {
    const extra = [];
    if (/\barm64e-macos\b/.test(body)) extra.push('arm64e.x1-macos');
    if (/\barm64e-maccatalyst\b/.test(body)) extra.push('arm64e.x1-maccatalyst');
    if (!extra.length) return match;
    lists++;
    return `${open}${body.replace(/\s+$/, '')}, ${extra.join(', ')} ]`;
  });
  assert.ok(lists > 0, 'The SDK stub has no targets list with arm64e-macos to extend');
  writeFileSync(join(overlay, 'usr/lib/libSystem.tbd'), injected);
  report.injectedLists = lists;
  reproduces(join(overlay, 'usr/lib/libSystem.tbd'));
  build('unknown-targets', overlay);
}
writeFileSync(out, JSON.stringify(report, null, 2) + '\n');
