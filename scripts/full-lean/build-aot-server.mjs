import { mkdirSync, cpSync, writeFileSync, readFileSync, existsSync } from 'node:fs';
import { resolve, join, basename } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const root = fileURLToPath(new URL('../..', import.meta.url));
const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const target = option('--target', 'node');
const output = resolve(option('--output', `.work/aot-server-${target}-4.34`));
const runtime = resolve(option('--runtime', '.work/application-runtime-4.34.0'));
if (existsSync(output)) throw new Error('Choose a new output directory to preserve evidence');
const input = JSON.parse(readFileSync(join(runtime, 'build-inputs.json')));
const project = join(output, 'project'); mkdirSync(project, { recursive: true });
cpSync(join(root, 'examples/lean-server-latest'), project, { recursive: true,
  filter: path => !['.lake', 'dist', 'node_modules'].includes(basename(path)) });
const env = { ...process.env, PATH: join(input.nativePrefix, 'bin') + ':' + process.env.PATH,
  LEAN_NUM_THREADS: '2', LEAN_STACK_SIZE_KB: '8192' };
delete env.LEAN_PATH; delete env.LEAN_SRC_PATH; delete env.LEAN_SYSROOT;
// Sequential native Lake C facets let Lake own ordinary module dependencies,
// elaboration and build configuration while keeping this three-module probe small.
const cInputs = [];
for (const module of ['App.Model', 'App.Server', 'Main']) {
  const answer = execFileSync(join(input.nativePrefix, 'bin/lake'),
    ['--no-cache', '--keep-toolchain', '--quiet', '--json', 'query', `+${module}:c`],
    { cwd: project, env, encoding: 'utf8', timeout: 180_000, maxBuffer: 1024 * 1024 });
  cInputs.push(resolve(project, JSON.parse(answer)));
}
const list = join(output, 'c-inputs.json'); writeFileSync(list, JSON.stringify(cInputs) + '\n');
execFileSync(process.execPath, [join(root, 'scripts/full-lean/probe-aot-application.mjs'),
  '--runtime', runtime, '--target', target, '--source', join(project, 'Main.lean'), '--c-inputs', list,
  '--build-only', '--output', join(output, 'application')], { cwd: root, env: { ...env, ...process.env }, stdio: 'inherit' });
