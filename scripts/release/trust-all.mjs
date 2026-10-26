#!/usr/bin/env node
// Links every release package to release.yml with one write each and no trust reads, since
// npm demands two-factor even for `npm trust list`. It asks for an authenticator code once and
// reuses it for every package (npm accepts a code until it expires; passed as npm_config_otp, since `npm trust` has no --otp flag), asking again only on EOTP.
// A package that already trusts release.yml fails harmlessly and is reported as such.
//   node scripts/release/trust-all.mjs [--from <package>]
import { spawnSync } from 'node:child_process';
import { createInterface } from 'node:readline/promises';
import { repository, releaseWorkflow, publicRegistry, releasePackages } from './lib.mjs';

const from = process.argv.indexOf('--from');
let names = (await releasePackages()).map(p => p.name);
if (from > 0) names = names.slice(Math.max(0, names.indexOf(process.argv[from + 1])));
const rl = createInterface({ input: process.stdin, output: process.stdout });
const ask = async () => (await rl.question('Authenticator code: ')).trim();
let otp = await ask();
const results = [];
for (const name of names) {
  for (;;) {
    const r = spawnSync('npm', ['trust', 'github', name, '--repository', repository, '--file', releaseWorkflow,
      '--allow-publish', '--yes', '--registry', publicRegistry], { encoding: 'utf8', timeout: 60_000, env: { ...process.env, npm_config_otp: otp } });
    const out = `${r.stdout}\n${r.stderr}`;
    if (r.error?.code === 'ETIMEDOUT') { console.log(`${name}: npm ignored the code and wanted browser approval:\n${out.trim()}`); names.length = 0; break; }
    if (r.status === 0) { results.push([name, 'trusted']); console.log(`${name}: trusted`); break; }
    if (/EOTP|one-time pass|otp/i.test(out)) { console.log(`${name}: code expired or rejected`); otp = await ask(); continue; }
    const why = /already|exists|conflict|409/i.test(out) ? 'already trusted (or conflicting config)' : `failed: ${out.trim().split('\n').slice(-3).join(' | ')}`;
    results.push([name, why]); console.log(`${name}: ${why}`);
    if (why.startsWith('failed') && results.every(([, s]) => s.startsWith('failed'))) { console.log('Stopping: the first package failed unexpectedly.'); names.length = 0; }
    break;
  }
}
rl.close();
const bad = results.filter(([, s]) => s !== 'trusted');
console.log(`\n${results.length - bad.length}/${results.length} trusted now${bad.length ? `; ${bad.length} to look at:\n${bad.map(b => `- ${b[0]}: ${b[1]}`).join('\n')}` : '.'}`);
