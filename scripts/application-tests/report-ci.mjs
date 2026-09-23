import { readFileSync, existsSync, appendFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
const output = resolve(process.argv[2]), resources = resolve(process.argv[3]);
const result = join(output, 'execution.json');
for (const file of [result, resources, resources + '.service.json']) {
  if (!existsSync(file)) { console.log(`Evidence not produced: ${file}`); continue; }
  // Full per-case results stay in the workflow log instead of paid artifact
  // storage; the summary is bounded independently of the suite's case count.
  console.log(`LASM_EVIDENCE_BEGIN ${file}\n${readFileSync(file, 'utf8')}LASM_EVIDENCE_END`);
}
if (process.env.GITHUB_STEP_SUMMARY) {
  const value = existsSync(result) ? JSON.parse(readFileSync(result, 'utf8')) : {};
  const guard = existsSync(resources) ? JSON.parse(readFileSync(resources, 'utf8')) : {};
  appendFileSync(process.env.GITHUB_STEP_SUMMARY, JSON.stringify({
    scope: value.scope ?? 'Campaign did not produce a final result', counts: value.counts,
    registered: value.registered, execution: value.execution, originalSources: value.originalSources,
    harnessChanged: value.harness?.changed, resourceStop: value.resourceStop,
    resources: { status: guard.status, peakMemoryBytes: guard.peakMemoryBytes,
      resourceLimited: guard.resourceLimited, memoryEvents: guard.memoryEvents ?? guard.lastSample?.memoryEvents },
  }, null, 2) + '\n');
}
