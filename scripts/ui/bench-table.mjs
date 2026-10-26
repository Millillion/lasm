// The Lasm.UI benchmark as a Markdown table, from the browser suite's result
// files (the browser-results-* artifacts of .github/workflows/browser.yml):
//   node scripts/ui/bench-table.mjs DIR    (DIR holds chromium-Linux.json, …)
import { readFileSync, readdirSync } from 'node:fs';
import { join } from 'node:path';

const dir = process.argv[2];
const runs = readdirSync(dir).filter(f => f.endsWith('.json')).sort()
  .map(f => ({ file: f, report: JSON.parse(readFileSync(join(dir, f), 'utf8')) }))
  .filter(r => r.report.apps?.bench?.bench);
if (!runs.length) throw new Error(`no benchmark results in ${dir}`);
const ops = Object.keys(runs[0].report.apps.bench.bench);
const label = r => `${r.report.engine} ${r.report.browserVersion} (${r.report.platform})`;
console.log(`| Operation | ${runs.map(label).join(' | ')} |`);
console.log(`| --- | ${runs.map(() => '---').join(' | ')} |`);
for (const op of ops) {
  const cells = runs.map(r => {
    const b = r.report.apps.bench.bench[op];
    return `${b.lasmMs.toFixed(0)} / ${b.vanillaMs.toFixed(0)} ms (${b.ratio.toFixed(2)}×)`;
  });
  console.log(`| ${op} | ${cells.join(' | ')} |`);
}
console.log('\nLasm.UI / vanilla JavaScript, medians of 8 runs (3 for 10,000 rows), click to painted frame.');
