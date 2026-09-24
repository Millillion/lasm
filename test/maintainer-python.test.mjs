import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, existsSync, rmSync, symlinkSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { execFileSync } from 'node:child_process';
import { maintainerPython } from '../scripts/full-lean/maintainer-sdk.mjs';

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
