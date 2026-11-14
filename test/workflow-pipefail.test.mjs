// Every workflow `run` step that pipes runs with pipefail (#291): GitHub's
// default shell on Linux and macOS is `bash -e {0}`, under which
// `checker | tee log` passes when the checker fails. The host bridge model's
// failing check went unseen that way on every run.
import { test } from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync, readdirSync } from 'node:fs';
import { join } from 'node:path';
import { findUnsafePipes, missingPipefail, pipesIn, runSteps } from '../scripts/ci/workflow-pipefail.mjs';

const workflows = new URL('../.github/workflows/', import.meta.url).pathname;

test('no workflow step pipes without pipefail', () => {
  const found = findUnsafePipes(workflows);
  assert.deepEqual(found.map(f => `${f.file}:${f.line} ${f.pipes.join(' / ')}`), [],
    'add `shell: bash` (bash -eo pipefail) to these steps, or start the script with `set -o pipefail`');
});

test('the reader finds every run step of every workflow', () => {
  let total = 0;
  for (const name of readdirSync(workflows).filter(n => /\.ya?ml$/.test(n))) {
    const text = readFileSync(join(workflows, name), 'utf8');
    // `run:` keys with a value, outside `outputs:`, `with:` and `env:` maps (a job
    // output or an action input may be named run; the local actions run their
    // inputs with `shell: bash`).
    let expected = 0, outputs = -1;
    for (const l of text.split('\n')) {
      const indent = l.length - l.trimStart().length;
      if (l.trim() && outputs >= 0 && indent <= outputs) outputs = -1;
      if (/^\s*(- )?(outputs|with|env):\s*$/.test(l)) outputs = indent + (/^\s*- /.test(l) ? 2 : 0);
      else if (outputs < 0 && /^\s*(- )?run:\s*\S/.test(l)) expected++;
    }
    assert.equal(runSteps(text).length, expected, name);
    total += expected;
  }
  assert.ok(total > 100);
});

const wf = (steps, extra = '') => `on: push\n${extra}jobs:\n  a:\n    runs-on: ubuntu-24.04\n    steps:\n${steps}`;
const unsafe = text => runSteps(text).filter(missingPipefail).map(s => s.runLine);

test('a pipe under the default shell is found; bash, pipefail and pwsh are not', () => {
  assert.deepEqual(unsafe(wf('      - run: checker | tee out\n')), [6]);
  assert.deepEqual(unsafe(wf('      - name: x\n        run: |\n          echo a\n          checker | tee out\n')), [7]);
  assert.deepEqual(unsafe(wf('      - shell: bash\n        run: checker | tee out\n')), []);
  assert.deepEqual(unsafe(wf('      - run: checker | tee out\n        shell: bash\n')), []);
  assert.deepEqual(unsafe(wf('      - run: checker | tee out\n        shell: sh -e {0}\n')), [6]);
  assert.deepEqual(unsafe(wf('      - run: |\n          set -euo pipefail\n          checker | tee out\n')), []);
  assert.deepEqual(unsafe(wf('      - run: |\n          checker | tee out\n          set -o pipefail\n')), [6]);
  assert.deepEqual(unsafe(wf('      - run: checker | tee out\n', 'defaults:\n  run:\n    shell: bash\n')), []);
  const job = 'on: push\njobs:\n  a:\n    runs-on: windows-2025\n    steps:\n      - run: dir | more\n  b:\n    runs-on: ubuntu-24.04\n    defaults:\n      run:\n        shell: bash\n    steps:\n      - run: c | tee o\n  c:\n    runs-on: ${{ matrix.os }}\n    steps:\n      - run: c | tee o\n';
  assert.deepEqual(unsafe(job), [17]);
});

test('quoted bars, ||, comments, expressions and case patterns are not pipes', () => {
  assert.deepEqual(pipesIn("grep -E 'a|b' f || true # x | y"), []);
  assert.deepEqual(pipesIn('echo "${{ a || b }}" "a|b"'), []);
  assert.deepEqual(pipesIn('case "$x" in a|b) echo ;; c|d) echo ;; esac'), []);
  assert.deepEqual(pipesIn('x="$(git log | head -1)"').length, 1);
  assert.deepEqual(pipesIn('a | b').length, 1);
});
