// Prints the pass counts of a Playwright JSON report: node test/e2e-summary.mjs test-results/e2e-*.json
import { readFileSync } from 'node:fs';
let failed = false;
for (const file of process.argv.slice(2)) {
  const { stats } = JSON.parse(readFileSync(file, 'utf8'));
  const ran = stats.expected + stats.unexpected + stats.flaky;
  console.log(`${file}: ${stats.expected + stats.flaky}/${ran} passed (${stats.flaky} after a retry), ${stats.unexpected} failed, ${stats.skipped} skipped (not in fullstack mode)`);
  if (stats.unexpected > 0) failed = true;
}
process.exitCode = failed ? 1 : 0;
