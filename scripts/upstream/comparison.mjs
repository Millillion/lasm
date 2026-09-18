// Match the normalization used by Lean tests/util.sh. Timing measurements are
// retained in raw logs; their nondeterministic values are not semantic failures.
export function normalizeOutput(text, cwd) {
  return text.replace(/^measurement: (\S+) \S+( \S+)?$/gm, 'measurement: $1 ...')
    .replaceAll(cwd, '<TEST_WORKING_DIRECTORY>');
}

// Upstream elab/run_test.sh applies these additional diagnostic normalizations.
export function normalizeDiagnostics(text) {
  return normalizeOutput(text, '\u0000')
    .replace(/(\?(?:\w|_\w+))\.[0-9]+/g, '$1')
    .replace(/https:\/\/lean-lang\.org\/doc\/reference\/(?:v?[0-9.]+(?:-rc[0-9]+)?|latest)/g, 'REFERENCE');
}
