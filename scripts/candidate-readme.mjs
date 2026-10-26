import assert from 'node:assert/strict';

// A packed candidate must tell its reader how to install these exact bytes.
// The accepted baseline table stays historical until a separate campaign passes.
export function candidateReadme(source, { version, sourceRevision, runId }) {
  source = source.replaceAll('\r\n', '\n');
  assert.match(version, /^0\.1\.0-experimental\.\d+$/);
  assert.match(sourceRevision, /^[a-f0-9]{40}$/);
  if (runId !== undefined) assert.match(runId, /^\d+$/);
  // The candidate section goes before the first second-level heading (the quick start).
  const at = source.indexOf('\n## ');
  assert.ok(at > 0, 'Review the packaged quick start when README structure changes');
  const text = `${source.slice(0, at)}

## This candidate archive

This archive is **${version}**, built from \`${sourceRevision}\`.
It is an experimental candidate. ${runId ? `Check [its validation campaign](https://github.com/Millillion/lasm/actions/runs/${runId})` : 'Check the maintainer-provided validation report'} before relying on it.
The environment tables below record the earlier accepted baseline; they do not
claim that this candidate has passed. Copy this tarball into an empty directory:

\`\`\`sh
npm install ./lasm-compiler-${version}.tgz
\`\`\`
${source.slice(at)}`;
  // Linked evidence is pinned to this source, while explicit live CI/report URLs
  // remain live. No dangling repository-relative links in an installed package.
  return text.replace(/\]\(((?!https?:|#)[^)]+)\)/g,
    (_, path) => `](https://github.com/Millillion/lasm/blob/${sourceRevision}/${path})`);
}
