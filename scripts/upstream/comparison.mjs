// Match the normalization used by Lean tests/util.sh. Timing measurements are
// retained in raw logs; their nondeterministic values are not semantic failures.
export function normalizeOutput(text, cwd) {
  return text.replace(/^measurement: (\S+) \S+( \S+)?$/gm, 'measurement: $1 ...')
    .replaceAll(cwd, '<TEST_WORKING_DIRECTORY>');
}
