// Chooses the candidate for .github/workflows/platform-support.yml and exposes
// the pinned Node releases (scripts/ci/acceptance-versions.json) as outputs.
// Calls and dispatches name a candidate; a push uses the newest candidate that
// passed this workflow (scripts/ci/platform-candidate.json), when there is one.
import assert from 'node:assert/strict';
import { appendFileSync, existsSync, readFileSync } from 'node:fs';

const pins = JSON.parse(readFileSync('scripts/ci/acceptance-versions.json', 'utf8'));
let candidate = { version: process.env.INPUT_VERSION, sha256: process.env.INPUT_SHA256, release: process.env.INPUT_RELEASE };
if (!candidate.version) {
  const file = 'scripts/ci/platform-candidate.json';
  const recorded = existsSync(file) ? JSON.parse(readFileSync(file, 'utf8')) : { active: false };
  candidate = recorded.active ? recorded : undefined;
}
const outputs = { active: String(Boolean(candidate)), node24: pins.node24, node26: pins.node, minimum: pins.minimumNode };
if (candidate) {
  assert.match(candidate.version, /^0\.1\.0-experimental\.\d+$/);
  assert.match(candidate.sha256, /^[a-f0-9]{64}$/);
  if (candidate.release) assert.match(candidate.release, /^node-(?:package|linux-candidate)-\d+$/);
  Object.assign(outputs, { version: candidate.version, sha256: candidate.sha256, release: candidate.release ?? '' });
}
for (const [key, value] of Object.entries(outputs)) appendFileSync(process.env.GITHUB_OUTPUT, `${key}=${value}\n`);
console.log(JSON.stringify(outputs, null, 2));
