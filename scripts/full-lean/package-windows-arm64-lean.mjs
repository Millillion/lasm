// Package only the new ARM64 stage, with its complete non-system DLL closure.
import assert from 'node:assert/strict';
import { copyFileSync, cpSync, createReadStream, existsSync, mkdirSync, readdirSync, readFileSync,
  renameSync, statSync, statfsSync, writeFileSync } from 'node:fs';
import { basename, dirname, extname, join, resolve } from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';
import { Readable } from 'node:stream';
import { create as createTar } from 'tar';
import { provisionLean, toolchainCatalog } from '../../src/managed-lean.mjs';
import { provisionGit } from '../../src/managed-git.mjs';
import { applicationSources } from '../../src/application-sources.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { verifyNativeProgram } from '../../src/native-program.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
assert.equal(process.platform + '-' + process.arch, 'win32-arm64');
const base = resolve('.work/windows-arm64-lean-release'), msysBin = resolve(process.argv[2]);
const build = join(base, 'build/stage1'), source = join(base, 'lean4');
const output = join(base, 'distribution'), prefix = join(output, 'install'), bin = join(prefix, 'bin');
assert.ok(!existsSync(output), 'Preserve existing distribution evidence');
const inputs = JSON.parse(readFileSync(join(base, 'inputs.json'), 'utf8'));
const trees = ['bin', 'include', 'lib/lean'];
if (existsSync(join(build, 'share'))) trees.push('share');
const sourceFilter = file => statSync(file).isDirectory() || ['.lean', '.md'].includes(extname(file));
let contentBytes = 0;
function size(directory, filter = () => true) {
  for (const name of readdirSync(directory)) {
    const file = join(directory, name); if (!filter(file)) continue;
    const s = statSync(file); if (s.isDirectory()) size(file, filter); else { assert.ok(s.isFile()); contentBytes += s.size; }
  }
}
for (const tree of trees) size(join(build, tree)); size(join(source, 'src'), sourceFilter);
const disk = statfsSync(base), free = disk.bavail * disk.bsize;
assert.ok(contentBytes < 8 * 1024 ** 3 && free >= contentBytes * 2 + 4 * 1024 ** 3,
  'Need space for staging, relocated verification, archive and a two-GiB disk reserve');
mkdirSync(output);
for (const tree of trees) cpSync(join(build, tree), join(prefix, tree), { recursive: true, dereference: true });
cpSync(join(source, 'src'), join(prefix, 'src/lean'), { recursive: true, dereference: true, filter: sourceFilter });
copyFileSync(join(source, 'LICENSE'), join(prefix, 'LICENSE'));
const programs = new Map(), imports = [];
function collect(directory) {
  for (const name of readdirSync(directory)) {
    const file = join(directory, name), s = statSync(file);
    if (s.isDirectory()) collect(file);
    else if (/\.(?:exe|dll)$/i.test(name)) programs.set(file.toLowerCase(), file);
  }
}
collect(prefix);
for (const file of programs.values()) await verifyNativeProgram(file, 'win32', 'arm64');
const inspected = new Set(), reader = join(msysBin, 'llvm-readobj.exe');
for (;;) {
  const file = [...programs.values()].find(f => !inspected.has(f)); if (!file) break;
  inspected.add(file);
  const text = execFileSync(reader, ['--coff-imports', file], { encoding: 'utf8', timeout: 60000 });
  for (const match of text.matchAll(/^\s+Name: ([^\r\n]+\.dll)\s*$/gmi)) {
    const name = match[1].trim(); assert.equal(name, basename(name));
    const dependency = [dirname(file), bin, join(prefix, 'lib/lean'), msysBin].map(d => join(d, name)).find(existsSync);
    if (dependency) {
      await verifyNativeProgram(dependency, 'win32', 'arm64');
      const destination = join(bin, name);
      if (!existsSync(destination)) copyFileSync(dependency, destination);
      else assert.equal(await hashFile(destination), await hashFile(dependency));
      programs.set(destination.toLowerCase(), destination);
      imports.push({ from: file.slice(prefix.length + 1), dll: name, bundled: true });
    } else {
      assert.ok(/^api-ms-win-|^ext-ms-win-/i.test(name) || existsSync(join(process.env.SystemRoot, 'System32', name)), `Unresolved DLL: ${name}`);
      imports.push({ from: file.slice(prefix.length + 1), dll: name, windowsSystem: true });
    }
  }
}
for (const name of ['lean', 'lake', 'leanc', 'leanchecker', 'cadical', 'leantar'])
  await verifyNativeProgram(join(bin, name + '.exe'), 'win32', 'arm64');
assert.equal(await hashFile(join(bin, 'leantar.exe')), inputs.leantar.receipt.report.executable.sha256);
const notices = join(prefix, 'notices'); mkdirSync(notices);
cpSync(join(msysBin, '../share/licenses'), join(notices, 'msys2'), { recursive: true, dereference: true });
copyFileSync(join(inputs.leantar.directory, 'LICENSE'), join(notices, 'leantar-LICENSE'));
copyFileSync(join(base, 'msys2-package-versions.txt'), join(notices, 'msys2-package-versions.txt'));
copyFileSync(join(base, 'windows-manifest.patch'), join(notices, 'windows-manifest.patch'));
const identities = [];
for (const file of programs.values()) identities.push({ file: file.slice(prefix.length + 1), sha256: await hashFile(file), nativeArm64: true });
writeFileSync(join(prefix, 'build-provenance.json'), JSON.stringify({ inputs, identities, imports,
  scope: 'Native stage-one Lean 4.34.1; x64 seed and MSYS2 shell are explicitly emulated maintainer helpers' }, null, 2) + '\n');
const archive = join(output, 'lean-4.34.1-win32-arm64.tar.gz');
await createTar({ cwd: output, file: archive, gzip: true, portable: true }, ['install']);
const artifact = { name: 'lean-4.34.1-win32-arm64', root: 'install',
  url: 'https://lasm-fixture.invalid/lean-4.34.1-win32-arm64.tar.gz', format: 'tar.gz',
  sha256: await hashFile(archive), bytes: statSync(archive).size, maximumExtractedBytes: 8 * 1024 ** 3 };
assert.ok(artifact.bytes < 2 * 1024 ** 3);
const catalog = structuredClone(toolchainCatalog); catalog.lean['4.34.1'].artifacts['win32-arm64'] = artifact;
const cache = join(base, 'relocated cache λ');
const lean = await provisionLean(base, { catalog, cache, fetch: async url => {
  assert.equal(url, artifact.url); return new Response(Readable.toWeb(createReadStream(archive)));
} });
// Neither the original native build nor the emulated seed may satisfy the
// relocated compiler's module or DLL lookup. Do not modify upstream fixtures.
renameSync(build, build + '.hidden'); renameSync(inputs.seed.prefix, inputs.seed.prefix + '.hidden');
const work = join(base, 'relocated project 日本語'); mkdirSync(work);
const clean = { SystemRoot: process.env.SystemRoot, WINDIR: process.env.SystemRoot,
  TEMP: process.env.TEMP, TMP: process.env.TMP, PATH: '', LEAN_NUM_THREADS: '1' };
const checks = [];
function run(program, args, expected) {
  const r = spawnSync(program, args, { cwd: work, env: clean, encoding: 'utf8', timeout: 120000, maxBuffer: 2 * 1024 ** 2 });
  assert.ifError(r.error); assert.equal(r.status, 0, r.stdout + r.stderr);
  if (expected !== undefined) assert.equal(r.stdout.trim(), expected.trim());
  checks.push({ program: basename(program), args, stdout: r.stdout, stderr: r.stderr });
}
run(lean.lean, ['--githash'], inputs.commit + '\n'); run(lean.lake, ['--version']);
copyFileSync(join(base, 'Main.lean'), join(work, 'Main.lean'));
run(lean.lean, ['--run', 'Main.lean'], 'native Windows ARM64 Lean 4.34.1\n');
run(lean.lean, ['-Dcompiler.postponeCompile=false', '-c', 'main.c', 'Main.lean']);
const git = await provisionGit({ cache });
writeFileSync(join(work, 'lean-toolchain'), 'leanprover/lean4:v4.34.1\n');
writeFileSync(join(work, 'lakefile.lean'), 'import Lake\nopen Lake DSL\npackage greeting\nlean_lib Greeting\n@[default_target]\nlean_exe hello where\n  root := `Main\n');
writeFileSync(join(work, 'Greeting.lean'), 'def greeting : String := "native Lake 42"\n');
writeFileSync(join(work, 'Main.lean'), 'import Greeting\ndef main : IO Unit := IO.println greeting\n');
const saved = process.env.PATH; process.env.PATH = '';
let local;
try { local = applicationSources(join(work, 'Main.lean'), lean, join(work, '.generated'), { git }); }
finally { process.env.PATH = saved; }
assert.ok(local.sources.length >= 2);
for (const file of local.sources) assert.ok(statSync(file).size > 0);
checks.push({ lakeLocalCGeneration: true, sources: local.inputs });
const report = { passed: true, scope: 'Relocated native ARM64 Lean/Lake and local C generation; full Lasm installed application acceptance remains separate',
  lean: lean.version, commit: lean.commit, artifact, nativePrograms: lean.nativePrograms, identities, imports,
  checks, inputs, recordedAt: new Date().toISOString(), resourceReport: process.env.LASM_RESOURCE_REPORT };
writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
