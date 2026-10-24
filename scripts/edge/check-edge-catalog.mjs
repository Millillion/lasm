// CI (edge-runtime.yml): does the archive just packaged equal the one
// src/edge-runtimes.json pins? Writes `matches` to GITHUB_OUTPUT and the
// verdict (or the entry to pin) to the job summary. Never fails the job:
// branch work may change the runtime before its archive is re-pinned.
//   node scripts/edge/check-edge-catalog.mjs ARTIFACT.json
import { readFileSync, appendFileSync } from 'node:fs';
const artifact = JSON.parse(readFileSync(process.argv[2], 'utf8'));
const lean = JSON.parse(readFileSync(new URL('../ci/acceptance-versions.json', import.meta.url), 'utf8')).lean;
const pinned = JSON.parse(readFileSync(new URL('../../src/edge-runtimes.json', import.meta.url), 'utf8')).lean[lean];
const matches = !!pinned && pinned.sha256 === artifact.sha256 && pinned.bytes === artifact.bytes;
const text = matches ? `The packaged edge runtime matches src/edge-runtimes.json (${artifact.sha256}).\n`
  : `The packaged edge runtime differs from src/edge-runtimes.json. To pin it, record:\n\n\`\`\`json\n${JSON.stringify(artifact, null, 2)}\n\`\`\`\n`;
console.log(text);
if (process.env.GITHUB_OUTPUT) appendFileSync(process.env.GITHUB_OUTPUT, `matches=${matches}\n`);
if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, `### Edge runtime archive\n\n${text}`);
