// Markdown job summary and a compact JSON for one robustness result.
//   node robustness-summary.mjs RESULT.json BUILD_RESOURCES.json RUN_RESOURCES.json COMPACT_OUT.json > summary.md
import { existsSync, readFileSync, writeFileSync } from 'node:fs';

const [resultFile, buildResources, runResources, compactFile] = process.argv.slice(2);
const read = file => { try { return existsSync(file) ? JSON.parse(readFileSync(file, 'utf8')) : null; } catch { return null; } };
const peak = g => g ? Math.round((g.peakMemoryBytes ?? g.memoryPeak ?? 0) / 1024 ** 2) : null;
const r = read(resultFile), resources = { buildPeakMiB: peak(read(buildResources)), runPeakMiB: peak(read(runResources)) };
if (!r) {
  console.log(`## Server MVP robustness\n\nNo result file. Resources: ${JSON.stringify(resources)}`);
  if (compactFile) writeFileSync(compactFile, JSON.stringify({ resultFound: false, resources }, null, 2) + '\n');
  process.exit(0);
}
const kinds = Object.keys(r.results);
const lines = [`## Server MVP robustness — ${r.platform} — variant ${r.config.variant} — ${r.passed ? 'PASSED' : 'FAILED'}`, '',
  `Node ${r.engineVersion}, Lean ${r.build.lean}, ${r.cpus} CPUs; load ${r.config.loadSeconds} s per level, soak ${r.config.soakSeconds} s; resource peaks ${JSON.stringify(resources)}`, '',
  '| Check | ' + kinds.join(' | ') + ' |', '| --- |' + kinds.map(() => ' --- |').join('')];
for (const check of Object.keys(r.results[kinds[0]].checks))
  lines.push(`| ${check} | ${kinds.map(k => String(r.results[k].checks[check])).join(' | ')} |`);
lines.push('', '| Build | Connections | req/s | p50 ms | p95 ms | p99 ms | errors | server cores | sockets opened |', '| --- | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: |');
for (const k of kinds) for (const l of r.results[k].load)
  lines.push(`| ${k} | ${l.connections} | ${l.requestsPerSecond} | ${l.latencyMs.p50} | ${l.latencyMs.p95} | ${l.latencyMs.p99} | ${l.errors} | ${l.cpu?.serverCores ?? ''} | ${l.connectionsOpened} |`);
lines.push('', '| Build | Soak requests | errors | faults sent | RSS warm → final MiB | slope MiB/min | slope B/request | handles base → final | Wasm MiB warm → final |', '| --- | ---: | ---: | ---: | --- | ---: | ---: | --- | --- |');
for (const k of kinds) {
  const s = r.results[k].soak; if (!s) continue;
  lines.push(`| ${k} | ${s.load.requests} | ${s.load.errors} | ${s.faultsSent} | ${s.memory.warmBaselineMiB} → ${s.memory.finalMiB} | ${s.memory.slopeMiBPerMinute} | ${s.growth?.slopeBytesPerRequest ?? ''} | ${s.memory.handles.base} → ${s.memory.handles.final} | ${s.memory.wasm ? `${s.memory.wasm.warmBaselineMiB} → ${s.memory.wasm.finalMiB}` : ''} |`);
}
lines.push('', '| Fault | Case | ' + kinds.join(' | ') + ' |', '| --- | --- |' + kinds.map(() => ' --- |').join(''));
const faults = r.results[kinds[0]].faults ?? [];
for (const f of faults) for (const c of f.cases)
  lines.push(`| ${f.name} | ${c.name} | ${kinds.map(k => {
    const other = r.results[k].faults.find(x => x.name === f.name)?.cases.find(x => x.name === c.name);
    return other ? Object.entries(other.outcomes).map(([o, n]) => `${o}×${n}`).join(', ') : 'missing';
  }).join(' | ')} |`);
if (r.comparison) lines.push('', `Fault outcome differences (native vs Lasm): ${r.comparison.faultDifferences.length ? '`' + JSON.stringify(r.comparison.faultDifferences) + '`' : 'none'}`);
console.log(lines.join('\n'));
if (compactFile) {
  const compact = { platform: r.platform, passed: r.passed, engineVersion: r.engineVersion, cpus: r.cpus, cpuModel: r.cpuModel, resources,
    config: r.config, build: r.build, comparison: r.comparison, recordedAt: r.recordedAt,
    results: Object.fromEntries(kinds.map(k => {
      const x = r.results[k];
      return [k, { checks: x.checks, startupSeconds: x.startupSeconds, exit: x.exit, stderrLines: x.stderr?.lines,
        memoryCaps: x.memoryCaps, restarts: x.restarts, peakRssMiB: x.peakRssMiB, stderr: x.stderr?.distinct,
        load: x.load.map(l => ({ connections: l.connections, requestsPerSecond: l.requestsPerSecond, latencyMs: l.latencyMs, errors: l.errors,
          requests: l.requests, connectionsOpened: l.connectionsOpened, cpu: l.cpu, memoryCapStopped: l.memoryCapStopped, errorSamples: l.errorSamples?.slice(0, 5) })),
        soak: x.soak && { requests: x.soak.load.requests, errors: x.soak.load.errors, faultsSent: x.soak.faultsSent, checks: x.soak.checks, growth: x.soak.growth,
          requestsPerSecond: x.soak.load.requestsPerSecond, latencyMs: x.soak.load.latencyMs,
          memory: { ...x.soak.memory, series: undefined } },
        faults: x.faults.map(f => ({ name: f.name, alive: f.alive, verifiedAfter: f.verifiedAfter?.ok,
          cases: f.cases.map(c => ({ name: c.name, outcomes: c.outcomes, servedDuring: c.servedDuring?.ok })) })) }];
    })) };
  writeFileSync(compactFile, JSON.stringify(compact, null, 2) + '\n');
}
