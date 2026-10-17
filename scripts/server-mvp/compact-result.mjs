// Reduce one harness result to a small CI artifact: identities, per-phase status,
// output hashes and bounded excerpts. Full outputs stay in the job log.
import { existsSync, readFileSync, writeFileSync } from 'node:fs';
import { createHash } from 'node:crypto';

const [resultFile, resourceFile, outputFile] = process.argv.slice(2);
const sha = text => createHash('sha256').update(text ?? '').digest('hex');
const tail = (text, n = 4000) => (text ?? '').length > n ? '…' + text.slice(-n) : (text ?? '');
const out = { resultFound: existsSync(resultFile) };
if (out.resultFound) {
  const r = JSON.parse(readFileSync(resultFile));
  console.log(JSON.stringify(r, null, 2).slice(0, 200000));
  Object.assign(out, { name: r.name, version: r.version, leanCommit: r.leanCommit, passed: r.passed,
    inputsUnchanged: r.inputsUnchanged, sourceSha256: r.sourceSha256, wasmSha256: r.wasmSha256,
    engineVersion: r.engineVersion, actions: r.parallel?.actions, mapping: r.parallel?.mapping,
    build: r.build && { lean: r.build.lean, target: r.build.target, linkDriver: r.build.linkDriver },
    error: tail(r.error, 6000), finishedAt: r.finishedAt,
    commands: (r.commands ?? []).map(c => ({ label: c.label, code: c.code, signal: c.signal, error: c.error,
      stdoutSha256: sha(c.stdout), stderrSha256: sha(c.stderr), stdoutBytes: (c.stdout ?? '').length,
      stdoutTail: tail(c.stdout, 1500), stderrTail: tail(c.stderr, 3000) })) });
}
if (existsSync(resourceFile)) {
  const g = JSON.parse(readFileSync(resourceFile));
  out.resources = { peakMemoryBytes: g.peakMemoryBytes, status: g.status, stop: g.stop, events: g.memoryEvents ?? g.events };
}
writeFileSync(outputFile, JSON.stringify(out, null, 2) + '\n');
console.log(JSON.stringify({ name: out.name, passed: out.passed, resources: out.resources }, null, 2));
