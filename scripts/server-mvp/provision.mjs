// Warm the managed caches in a separate bounded step so a comparison's own
// guard measures the comparison, not archive extraction: the full native Lean
// oracle (with leanc) and the installed candidate's tools for a Std.Http build.
//   node provision.mjs native|candidate LEAN_VERSION INSTALLED_COMPILER WORK_DIR
// `native` only downloads and verifies archives (CI runs it like its other
// downloads); `candidate` compiles and links, so it runs under the guard.
import assert from 'node:assert/strict';
import { mkdirSync, writeFileSync, existsSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';
import { provisionLean } from '../../src/managed-lean.mjs';

const [mode, version, compilerArg, workArg] = process.argv.slice(2);
assert.ok(['native', 'candidate'].includes(mode) && version && compilerArg && workArg);
const work = resolve(workArg, mode), compiler = resolve(compilerArg);
assert.ok(!existsSync(work), 'Use a fresh provisioning directory');
mkdirSync(work, { recursive: true });
writeFileSync(join(work, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
if (mode === 'native') {
  const lean = await provisionLean(work, { distribution: 'full' });
  console.log(JSON.stringify({ native: lean.prefix, commit: lean.commit, distribution: lean.distribution }));
  process.exit(0);
}
writeFileSync(join(work, 'Main.lean'), 'import Std.Http\n\ndef main : IO Unit := IO.println "provisioned"\n');
const build = spawnSync(process.execPath, [join(compiler, 'bin/lasm.mjs'), 'build', join(work, 'Main.lean'), '--output', join(work, 'dist')],
  { cwd: work, stdio: 'inherit', timeout: 1_800_000 });
assert.equal(build.status, 0, 'Installed candidate build failed');
const run = spawnSync(process.execPath, [join(work, 'dist/main.mjs')], { encoding: 'utf8', timeout: 120_000 });
assert.equal(run.stdout, 'provisioned\n');
console.log('Provisioned native oracle and installed candidate tools');
