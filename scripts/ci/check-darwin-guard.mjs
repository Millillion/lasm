// Validate cleanup and a proactive stop using at most 96 MiB of test allocation.
// This never approaches host exhaustion and does not test an OOM response.
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { readFileSync } from 'node:fs';
import { hasResourceGuard } from '../full-lean/resource-guard.mjs';

assert.equal(process.platform, 'darwin'); assert.equal(hasResourceGuard(), false);
for (const [name, budget, script, expected] of [
  ['normal', '512', `const {hasResourceGuard,ensureResourceGuard}=await import('./scripts/full-lean/resource-guard.mjs');if(!hasResourceGuard())throw Error('Missing monitor');await ensureResourceGuard();console.log('macOS monitor verified')`, 0],
  ['cleanup', '512', `const {spawn}=await import('node:child_process');const c=spawn(process.execPath,['-e','setInterval(()=>{},1000)'],{stdio:'ignore'});c.unref();setTimeout(()=>process.exit(0),1000)`, 0],
  ['below-cap-stop', '128', `const b=[];let n=0;const t=setInterval(()=>{if(n++<12)b.push(Buffer.alloc(8*1024*1024,42));else clearInterval(t)},250);setTimeout(()=>process.exit(9),15000)`, 125],
]) {
  const report = `.work/darwin-guard-${name}.json`;
  const result = spawnSync(process.execPath, ['scripts/full-lean/run-bounded.mjs', '--memory-mib', budget, '--report', report,
    '--', process.execPath, '--max-old-space-size=64', '--input-type=module', '-e', script], { stdio: 'inherit', timeout: 30000 });
  assert.ifError(result.error); assert.equal(result.status, expected);
  const evidence = JSON.parse(readFileSync(report)); assert.equal(evidence.unitReleased, true);
  assert.equal(evidence.hardCap, false); assert.equal(Boolean(evidence.monitorError), false);
  if (expected === 125) assert.equal(evidence.stoppedBecause, 'Workload reached its proactive RSS budget');
  else assert.equal(evidence.resourceLimited, false);
}
