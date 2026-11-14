// Probe: a deployed program spawns a child with piped stdout (as pkg/float does
// with `gzip -dc`) while its own stdin comes from different sources. Records the
// program's output and exit for each case.   node probe-spawn-stdin.mjs NEW_OUTPUT INSTALLED_COMPILER
import { mkdirSync, writeFileSync, existsSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';

const [outputArg, compilerArg] = process.argv.slice(2);
const output = resolve(outputArg), compiler = resolve(compilerArg);
if (existsSync(output)) throw new Error('Use a fresh output');
mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'lean-toolchain'), 'leanprover/lean4:v4.36.0-rc2\n');
writeFileSync(join(output, 'Main.lean'), `def main (args : List String) : IO UInt32 := do
  let cmd :: rest := args | return 2
  let child ← IO.Process.spawn { cmd, args := rest.toArray, stdout := .piped }
  let mut n := 0
  repeat
    let line ← child.stdout.getLine
    if line.isEmpty then break
    n := n + 1
  let code ← child.wait
  IO.println s!"lines={n} exit={code}"
  return 0
`);
const result = { platform: process.platform, cases: [] };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 1) + '\n');
const build = spawnSync(process.execPath, [join(compiler, 'bin/lasm.mjs'), 'build', join(output, 'Main.lean'), '--output', join(output, 'dist')],
  { cwd: output, encoding: 'utf8', maxBuffer: 64 << 20 });
result.build = { code: build.status, tail: (build.stdout + build.stderr).slice(-2000) }; save();
if (build.status !== 0) process.exit(1);
const app = join(output, 'dist', 'main.mjs');
const childArgs = [process.execPath, '-e', 'console.log(1);console.log(2)'];
const run = (label, command, args, options) => {
  const r = spawnSync(command, args, { encoding: 'utf8', timeout: 120_000, ...options });
  result.cases.push({ label, code: r.status, signal: r.signal, error: r.error?.message, stdout: r.stdout, stderr: r.stderr?.slice(-2000) }); save();
};
for (const stdin of ['ignore', 'pipe', 'inherit'])
  run(`node stdin=${stdin}`, process.execPath, [app, ...childArgs], { stdio: [stdin, 'pipe', 'pipe'] });
const bash = process.platform === 'win32' ? 'bash' : '/bin/bash';
const quoted = [process.execPath, app, ...childArgs].map(arg => `'${arg.replaceAll('\\', '/').replaceAll("'", "'\\''")}'`).join(' ');
run('bash stdin=/dev/null', bash, ['-c', `${quoted} < /dev/null`], { stdio: ['ignore', 'pipe', 'pipe'] });
run('bash stdin=ignore (inherited)', bash, ['-c', quoted], { stdio: ['ignore', 'pipe', 'pipe'] });
run('bash stdin=pipe (inherited)', bash, ['-c', quoted], { stdio: ['pipe', 'pipe', 'pipe'] });
run('bash nested node spawnSync inherit', bash, ['-c', `'${process.execPath.replaceAll('\\', '/')}' -e "require('child_process').spawnSync(process.argv[1], process.argv.slice(2), {stdio:'inherit'})" ${quoted}`], { stdio: ['ignore', 'pipe', 'pipe'] });
// The exact upstream shape: a PATH command (Git's gzip under Git Bash).
run('bash gzip --version', bash, ['-c', `'${process.execPath.replaceAll('\\', '/')}' '${app.replaceAll('\\', '/')}' gzip --version`], { stdio: ['ignore', 'pipe', 'pipe'] });
console.log(JSON.stringify(result.cases.map(c => [c.label, c.code, c.stdout?.trim(), c.stderr?.trim().slice(-200)]), null, 1));
