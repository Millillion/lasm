// Combine downloaded server-robustness-* artifacts (robustness-compact.json) from
// one or more workflow runs into a single evidence file plus Markdown tables.
//   node assemble-robustness.mjs OUTPUT.json RUN_ID=DIR [RUN_ID=DIR...] > tables.md
import { readFileSync, writeFileSync, readdirSync, existsSync } from 'node:fs';
import { join } from 'node:path';

const [outputFile, ...runs] = process.argv.slice(2);
const entries = [];
for (const spec of runs) {
  const [run, dir] = spec.split('=');
  for (const name of readdirSync(dir).filter(n => n.startsWith('server-robustness-')).sort()) {
    const file = join(dir, name, 'robustness-compact.json');
    if (!existsSync(file)) { entries.push({ run, artifact: name, missing: true }); continue; }
    entries.push({ run, artifact: name, ...JSON.parse(readFileSync(file, 'utf8')) });
  }
}
const evidence = { scope: 'Server MVP step 1 milestone 2: robustness of integration/fixtures/server-robustness, native Lean vs Lasm in Node',
  runs: runs.map(s => `https://github.com/Millillion/lasm/actions/runs/${s.split('=')[0]}`), entries, assembledAt: new Date().toISOString() };
writeFileSync(outputFile, JSON.stringify(evidence, null, 1) + '\n');
const out = [];
const variant = e => e.config?.variant ?? e.artifact.replace(/^server-robustness-[^-]+-[^-]+-/, '');
out.push('| Run | Platform | Variant | Build | req/s c=16 | p50/p99 ms c=16 | req/s c=64 | p50/p99 ms c=64 | load errors | soak slope MiB/min | RSS warm→final MiB | peak RSS MiB | caps | passed |',
  '| --- | --- | --- | --- | ---: | --- | ---: | --- | ---: | ---: | --- | ---: | ---: | --- |');
for (const e of entries) {
  if (e.missing || !e.results) { out.push(`| ${e.run} | ${e.artifact} | | | | | | | | | | | | missing |`); continue; }
  for (const [kind, r] of Object.entries(e.results)) {
    const l = c => r.load.find(x => x.connections === c);
    const lat = x => x ? `${x.latencyMs.p50}/${x.latencyMs.p99}` : '';
    const m = r.soak?.memory;
    out.push(`| ${e.run} | ${e.platform} | ${variant(e)} | ${kind} | ${l(16)?.requestsPerSecond ?? ''} | ${lat(l(16))} | ${l(64)?.requestsPerSecond ?? ''} | ${lat(l(64))} | ${r.load.reduce((a, x) => a + x.errors, 0)} | ${m?.slopeMiBPerMinute ?? ''} | ${m ? `${m.warmBaselineMiB}→${m.finalMiB}` : ''} | ${r.peakRssMiB ?? ''} | ${r.memoryCaps?.length ?? 0} | ${Object.values(r.checks).every(v => v !== false)} |`);
  }
}
out.push('', '| Run | Platform | Variant | Fault differences (native vs Lasm) |', '| --- | --- | --- | --- |');
for (const e of entries) if (e.comparison)
  out.push(`| ${e.run} | ${e.platform} | ${variant(e)} | ${e.comparison.faultDifferences.map(d => `${d.case}${d.informational ? ' (informational' + (d.kind ? ': ' + d.kind : '') + ')' : ''}`).join('; ') || 'none'} |`);
console.log(out.join('\n'));
