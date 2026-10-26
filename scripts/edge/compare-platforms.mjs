// Phase 7.5 (workers.yml job compare): the pure example's program.wasm must
// be the same on every platform and under every runtime: the Node build, the
// bun and deno targets (hosts-results-* from Linux, platform-results-* from
// macOS and Windows), and the edge targets built on macOS and Windows.
//   node scripts/edge/compare-platforms.mjs RESULTS_DIR
import { existsSync, readdirSync, readFileSync, appendFileSync } from 'node:fs';
import { join } from 'node:path';

const dir = process.argv[2];
const values = {}; // output -> { hash -> [where] }
const add = (output, hash, where) => { if (/^[0-9a-f]{64}$/.test(hash ?? "")) ((values[output] ??= {})[hash] ??= []).push(where); };
const missing = [];
for (const name of readdirSync(dir)) {
  const file = ['hosts-results.json', 'platform-results.json'].map(f => join(dir, name, f)).find(existsSync);
  if (!file) { if (/^(hosts|platform)-results-/.test(name)) missing.push(name); continue; }
  const r = JSON.parse(readFileSync(file, 'utf8'));
  for (const [runtime, h] of Object.entries(r.builds ?? {})) {
    // hosts-results: { dist, bun, deno }; platform-results: { node, workers, …, bun, deno }.
    add('node', h.dist ?? h.node, `${r.platform} under ${runtime}`);
    for (const [output, hash] of Object.entries(h)) if (!['dist', 'node'].includes(output)) add(output, hash, `${r.platform} under ${runtime}`);
  }
}
let lines = [], failed = missing.map(name => `${name}: no results`);
for (const [output, hashes] of Object.entries(values)) {
  const n = Object.keys(hashes).length;
  lines.push(`- ${output}: ${n === 1 ? 'identical' : 'DIFFERENT'} across ${Object.values(hashes).flat().length} builds`
    + (n === 1 ? '' : '\n' + Object.entries(hashes).map(([h, w]) => `  - ${h.slice(0, 16)}: ${w.join(', ')}`).join('\n')));
  if (n !== 1) failed.push(`${output} differs`);
}
const summary = `### The same bytes everywhere (pure example)\n\n${lines.join('\n')}\n`;
console.log(summary);
if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, summary);
if (failed.length) { console.error('Failed: ' + failed.join('; ')); process.exit(1); }
