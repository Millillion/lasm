// Probe: native Lean versus the installed candidate for handle misuse errors
// (read from a write-only handle, write to a read-only handle).
//   node probe-handle-errors.mjs NEW_OUTPUT INSTALLED_COMPILER
import { mkdirSync, writeFileSync, existsSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';
import { provisionLean } from '../../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../../src/application-sources.mjs';

const [outputArg, compilerArg] = process.argv.slice(2);
const output = resolve(outputArg), compiler = resolve(compilerArg);
if (existsSync(output)) throw new Error('Use a fresh output');
mkdirSync(output, { recursive: true });
const windows = process.platform === 'win32';
writeFileSync(join(output, 'lean-toolchain'), 'leanprover/lean4:v4.36.0-rc2\n');
writeFileSync(join(output, 'Main.lean'), `deriving instance Repr for IO.Error

def attempt (label : String) (action : IO Unit) : IO Unit := do
  try action; IO.println s!"{label}: ok"
  catch e => IO.println s!"{label}: {repr e}"

def main : IO Unit := do
  IO.FS.writeFile "probe.txt" "abc"
  attempt "read from a write-only handle" do
    let h ← IO.FS.Handle.mk "probe.txt" .write
    discard <| h.read 1024
  attempt "write to a read-only handle" do
    let h ← IO.FS.Handle.mk "probe.txt" .read
    h.putStr "foo"
    h.flush
  attempt "getLine from a write-only handle" do
    let h ← IO.FS.Handle.mk "probe.txt" .append
    discard <| h.getLine
`);
const result = { platform: process.platform };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 1) + '\n');
const run = (command, args, options = {}) => {
  const r = spawnSync(command, args, { cwd: output, encoding: 'utf8', maxBuffer: 64 << 20, ...options });
  return { code: r.status, stdout: r.stdout, stderr: (r.stderr ?? '').slice(-3000) };
};
const lean = await provisionLean(output, { distribution: 'full' });
const env = { ...nativeLeanEnvironment(lean), ...(windows && lean.executionPrefix ? { LEAN_SYSROOT: lean.executionPrefix } : {}) };
result.nativeC = run(lean.lean, ['-c', join(output, 'main.c'), join(output, 'Main.lean')], { env });
const exe = join(output, windows ? 'native.exe' : 'native');
result.nativeLink = run(join(lean.prefix, 'bin', windows ? 'leanc.exe' : 'leanc'), ['-O2', '-o', exe, join(output, 'main.c')], { env });
mkdirSync(join(output, 'native-run')); mkdirSync(join(output, 'lasm-run'));
result.native = run(exe, [], { cwd: join(output, 'native-run') }); save();
result.build = run(process.execPath, [join(compiler, 'bin/lasm.mjs'), 'build', join(output, 'Main.lean'), '--output', join(output, 'dist')]);
result.lasm = run(process.execPath, [join(output, 'dist', 'main.mjs')], { cwd: join(output, 'lasm-run') });
result.same = result.native.stdout === result.lasm.stdout && result.native.code === result.lasm.code;
save();
console.log(JSON.stringify({ native: result.native, lasm: result.lasm, same: result.same }, null, 1));
