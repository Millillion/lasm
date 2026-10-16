// Run every scripts/npm-dist/build.mjs step, each heavy step in its own resource
// guard (scripts/full-lean/run-bounded.mjs). The guard counts page cache, so one
// guarded process per package keeps each step well below its memory budget.
//
//   node scripts/npm-dist/build-all.mjs --base CANDIDATE.tgz --out NEW_DIR [plan options] [--seed DIR]...
import { spawnSync } from 'node:child_process';
import { readFileSync, mkdirSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { parseArgs } from 'node:util';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const argv = process.argv.slice(2);
const { values } = parseArgs({ args: argv, strict: false, options: { out: { type: 'string' }, seed: { type: 'string', multiple: true },
  assets: { type: 'string' }, 'memory-mib': { type: 'string' } } });
const out = resolve(values.out), memory = values['memory-mib'] ?? '2048';
const build = join(root, 'scripts/npm-dist/build.mjs'), bounded = join(root, 'scripts/full-lean/run-bounded.mjs');
const shared = [...(values.seed ?? []).flatMap(dir => ['--seed', dir]), ...(values.assets ? ['--assets', values.assets] : [])];
function run(args, guarded, label) {
  const command = guarded
    ? [bounded, '--memory-mib', memory, '--report', join(out, 'resources', label + '.json'), '--', process.execPath, build, ...args]
    : [build, ...args];
  const result = spawnSync(process.execPath, command, { stdio: 'inherit', windowsHide: true });
  if (result.status !== 0) { console.error(`npm-dist step ${label} failed (${result.status ?? result.signal})`); process.exit(1); }
}
run(argv.filter((_, i) => !['--seed', '--assets', '--memory-mib'].includes(argv[i]) && !['--seed', '--assets', '--memory-mib'].includes(argv[i - 1]))
  .concat(['--step', 'plan']), false, 'plan');
mkdirSync(join(out, 'resources'), { recursive: true });
const plan = JSON.parse(readFileSync(join(out, 'plan.json'), 'utf8'));
for (const pkg of plan.packages) run(['--out', out, '--step', 'package', '--only', pkg.name, ...shared], true, pkg.name.replace('/', '__'));
run(['--out', out, '--step', 'main'], true, 'main');
