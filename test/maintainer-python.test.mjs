import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, existsSync, rmSync, symlinkSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { execFileSync } from 'node:child_process';
import { maintainerPython } from '../scripts/full-lean/maintainer-sdk.mjs';
import { sdkRepairs } from '../src/sdk-repairs.mjs';

test('maintainer Python prevents bytecode writes even when Emscripten passes -E', { skip: process.platform === 'win32' }, t => {
  const base = mkdtempSync(join(tmpdir(), 'lasm-maintainer-python-'));
  t.after(() => rmSync(base, { recursive: true, force: true }));
  const python = execFileSync('python3', ['-B', '-I', '-c', 'import sys;print(sys.executable)'], { encoding: 'utf8' }).trim();
  const script = join(base, 'entry.py');
  writeFileSync(script, 'import module_data\nprint(module_data.answer)\n');
  writeFileSync(join(base, 'module_data.py'), 'answer = 42\n');
  const env = { ...process.env, PYTHONDONTWRITEBYTECODE: '1' };
  assert.equal(execFileSync(python, ['-E', script], { env, encoding: 'utf8' }), '42\n');
  assert.ok(existsSync(join(base, '__pycache__')), 'Control reproduces ignored environment protection');
  rmSync(join(base, '__pycache__'), { recursive: true });
  const directory = join(base, "python's path with spaces"); mkdirSync(directory);
  const alias = join(directory, 'python3'); symlinkSync(python, alias);
  const launcher = maintainerPython(alias, join(base, 'private mutable state'));
  assert.equal(execFileSync(launcher, ['-E', script], { env, encoding: 'utf8' }), '42\n');
  assert.equal(existsSync(join(base, '__pycache__')), false);
});

test('SDK normalization retains bytecode protection through configure and make child calls', { skip: process.platform === 'win32' }, t => {
  const base = mkdtempSync(join(tmpdir(), 'lasm-maintainer-nested-'));
  t.after(() => rmSync(base, { recursive: true, force: true }));
  const python = execFileSync('python3', ['-B', '-I', '-c', 'import sys;print(sys.executable)'], { encoding: 'utf8' }).trim();
  const launcher = maintainerPython(python, join(base, 'private launcher'));
  const child = join(base, 'emcc');
  writeFileSync(child, '#!/bin/sh\nexec "$EMSDK_PYTHON" -E "$0.py" "$@"\n', { mode: 0o755 });
  writeFileSync(child + '.py', 'import sys, module_data\nprint(sys.dont_write_bytecode)\nprint(module_data.answer)\n');
  writeFileSync(join(base, 'module_data.py'), 'answer = 42\n');
  const elsewhere = join(base, 'different working directory'); mkdirSync(elsewhere);
  const repair = sdkRepairs.files.find(file => file.path === 'tools/config.py');
  const replacement = repair.replacements[0];
  const script = join(base, 'parent.py');
  const env = { ...process.env, EMSDK_PYTHON: './private launcher/maintainer-python', PYTHONDONTWRITEBYTECODE: '1' };
  function nested(normalization) {
    writeFileSync(script, 'import os, sys, subprocess\ndef normalize():\n' + normalization +
      '\nnormalize()\nos.chdir(' + JSON.stringify(elsewhere) + ')\nsubprocess.run([' + JSON.stringify(child) + '], check=True)\n');
    return execFileSync(launcher, ['-E', script], { cwd: base, env, encoding: 'utf8' });
  }
  assert.equal(nested(replacement.before), 'False\n42\n');
  assert.ok(existsSync(join(base, '__pycache__')), 'Unpatched normalization loses the wrapper before spawning the child');
  rmSync(join(base, '__pycache__'), { recursive: true });
  assert.equal(nested(replacement.after), 'True\n42\n');
  assert.equal(existsSync(join(base, '__pycache__')), false);
  // The behavior above uses the exact production replacement. Its complete
  // original and repaired files remain guarded by manifest source hashes.
  assert.ok(repair.originalSha256 !== repair.patchedSha256);
});
