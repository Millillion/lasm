// CI-only coordinator inside the restricted token; each application starts with plain Node.
import assert from 'node:assert/strict';
import { readFileSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { spawnSync } from 'node:child_process';

const [configFile, output] = process.argv.slice(2);
const { denied, programs } = JSON.parse(readFileSync(configFile));
const result = { denied, programs: [], passed: false };
const save = () => writeFileSync(output, JSON.stringify(result, null, 2) + '\n');
save();
try {
  for (const file of denied)
    assert.throws(() => readFileSync(file), e => ['EACCES', 'EPERM'].includes(e.code), file);
  result.denialControlPassed = true; save();
  for (const program of programs) {
    const entry = { name: program.name, bytes: program.bytes, wasmSha256: program.wasmSha256, checks: [] };
    result.programs.push(entry); save();
    for (const c of program.checks) {
      const command = [process.execPath, join(program.copied, 'main.mjs'), ...c.args];
      const start = performance.now();
      const actual = spawnSync(command[0], command.slice(1), {
        encoding: 'utf8', timeout: 120000, maxBuffer: 4 * 1024 ** 2, windowsHide: true });
      const seconds = (performance.now() - start) / 1000;
      assert.ifError(actual.error); assert.equal(actual.signal, null);
      const behavior = { code: actual.status, stdout: actual.stdout, stderr: actual.stderr };
      entry.checks.push({ ...c, command, actual: behavior, seconds }); save();
      assert.deepEqual(behavior, c.expected);
    }
  }
  result.passed = true; save();
} catch (error) { result.error = error.stack; save(); throw error; }
