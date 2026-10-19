// Native-vs-Lasm fault outcome comparison, shared by robustness.mjs and
// assemble-robustness.mjs (which re-applies it to compact CI results).
// Fault outcome agreement: the same set of canonical outcome keys per case
// (counts may differ). Idle-connection timing and informational probes are
// reported but never fail the comparison.
// The status Std.Http must send for cases where the server rejects a request
// while the client is still uploading. The kernel's RST can discard it on the
// native side in every attempt; Lasm (Node reads eagerly) usually delivers it.
const requiredStatus = { 'Content-Length 2 MiB > maxBodySize': '413', 'chunked 2 MiB > maxBodySize': '413' };

export function compareFaults(a, b) {
  const differences = [];
  for (const fault of a.faults) {
    const other = b.faults.find(f => f.name === fault.name);
    for (const c of fault.cases) {
      const d = other?.cases.find(x => x.name === c.name);
      // A server close with unread client bytes still queued becomes a TCP RST
      // instead of a FIN; which one the client sees depends on how much of the
      // request the server had read (Node reads eagerly). Status codes must match.
      // When the server closes with the client's upload still arriving, the
      // kernel's RST can also discard the already-sent status before the client
      // reads it (`none/error-EPIPE`). Such losses are compared as informational.
      const canon = outcomes => {
        let keys = Object.keys(outcomes).map(k => k.replace(/server-reset|error-EPIPE|error-ECONNRESET/, 'server-close'));
        if (keys.some(k => /^\d/.test(k))) keys = keys.filter(k => !k.startsWith('none/'));
        return [...new Set(keys)].sort().join(' | ');
      };
      if (fault.name === 'idle-connections' || fault.informational) {
        if (JSON.stringify(c.outcomes) !== JSON.stringify(d?.outcomes)) differences.push({ fault: fault.name, case: c.name, native: c.outcomes, lasm: d?.outcomes, informational: true });
        continue;
      }
      const ka = canon(c.outcomes), kb = d ? canon(d.outcomes) : 'missing';
      // Native lost the status to RST in every attempt; accept only if every Lasm
      // outcome carries exactly the status the specification requires.
      const nativeAllLost = Object.keys(c.outcomes).every(k => k.startsWith('none/'));
      const required = requiredStatus[c.name];
      if (ka !== kb && nativeAllLost && required && d
          && Object.keys(d.outcomes).every(k => k.split('/')[0] === required))
        differences.push({ fault: fault.name, case: c.name, native: c.outcomes, lasm: d.outcomes, informational: true,
          kind: `native status lost to RST in every attempt; Lasm delivered the required ${required}` });
      else if (ka !== kb) differences.push({ fault: fault.name, case: c.name, native: c.outcomes, lasm: d?.outcomes });
      else if (JSON.stringify(Object.keys(c.outcomes).sort()) !== JSON.stringify(Object.keys(d.outcomes).sort()))
        differences.push({ fault: fault.name, case: c.name, native: c.outcomes, lasm: d.outcomes, informational: true, kind: 'TCP close: FIN vs RST, or a status lost to RST' });
    }
  }
  return differences;
}

