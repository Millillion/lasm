import assert from 'node:assert/strict';

// A packed candidate must tell its reader how to install these exact bytes.
// The accepted baseline table stays historical until a separate campaign passes.
export function candidateReadme(source, { version, sourceRevision, runId }) {
  assert.match(version, /^0\.1\.0-experimental\.\d+$/);
  assert.match(sourceRevision, /^[a-f0-9]{40}$/);
  if (runId !== undefined) assert.match(runId, /^\d+$/);
  const instructions = /On a supported Linux, Mac, or Windows machine,[\s\S]*?```sh\nnpm install \.\/lasm-compiler-[^\n]+\n```/;
  assert.ok(instructions.test(source), 'Review the packaged quick start when README structure changes');
  let text = source.replace(instructions, `This archive is **${version}**, built from \`${sourceRevision}\`.
It is an experimental candidate. ${runId ? `Check [its validation campaign](https://github.com/Millillion/lasm/actions/runs/${runId})` : 'Check the maintainer-provided validation report'} before relying on it.
The environment table below records the earlier accepted baseline; it does not
claim that this candidate has passed. Copy this tarball into an empty directory:

\`\`\`sh
npm install ./lasm-compiler-${version}.tgz
\`\`\``);
  text = text.replace('Cache repair (new source; absent from `.46`)', 'Cache repair');
  // Linked evidence is pinned to this source, while explicit live CI/report URLs
  // remain live. No dangling repository-relative links in an installed package.
  return text.replace(/\]\(((?!https?:|#)[^)]+)\)/g,
    (_, path) => `](https://github.com/Millillion/lasm/blob/${sourceRevision}/${path})`);
}
