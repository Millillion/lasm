import assert from 'node:assert/strict';
import { existsSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';

/** Privileged maintainer side only. The child receives only spec.environment. */
let developerPrograms;
export function windowsIsolated(spec, reportFile) {
  assert.equal(spec.startupProbe, undefined, 'Startup probes cannot satisfy consumer acceptance');
  const actual = invoke({ ...spec, ...(developerPrograms ? { developerPrograms } : {}) }, reportFile);
  const evidence = actual.isolation;
  assert.equal(evidence.token.restricted, true);
  assert.equal(evidence.token.privileges, 1);
  assert.equal(evidence.token.traversalBypass, true);
  assert.deepEqual(evidence.token.privilegeNames, ['SeChangeNotifyPrivilege']);
  assert.ok(evidence.blockedDevelopmentRoots.length > 0);
  assert.ok(evidence.blockedDevelopmentPrograms.length > 0);
  developerPrograms = evidence.blockedDevelopmentPrograms;
  if (spec.offline) {
    assert.ok(evidence.offlinePrograms.length > 0);
    assert.equal(evidence.firewallRestored, true);
  }
  return actual;
}

export function windowsStartupProbe(spec, reportFile) {
  assert.ok(spec.startupProbe); assert.equal(spec.command[1], '--eval');
  assert.equal(spec.command[2], 'console.error("pipe probe started"); process.stdout.write(require("node:child_process").execFileSync(process.execPath,["--version"]))');
  return invoke(spec, reportFile);
}

function invoke(spec, reportFile) {
  assert.equal(process.platform, 'win32');
  assert.ok(process.env.LASM_RESOURCE_PYTHON && process.env.LASM_RESOURCE_UNIT);
  const report = resolve(reportFile), rules = report + '.rules.json';
  assert.ok(!existsSync(report) && !existsSync(rules));
  writeFileSync(rules, JSON.stringify(spec, null, 2) + '\n');
  const child = spawnSync(process.env.LASM_RESOURCE_PYTHON, ['-I', '-B',
    fileURLToPath(new URL('./windows-restricted.py', import.meta.url)), rules, report],
  { encoding: 'utf8', timeout: ((spec.timeoutSeconds ?? 3000) + 600) * 1000, maxBuffer: 1024 * 1024, windowsHide: true });
  const evidence = existsSync(report) ? JSON.parse(readFileSync(report, 'utf8')) : undefined;
  assert.ifError(child.error); assert.ok(['passed', 'failed'].includes(evidence?.status), child.stderr + child.stdout);
  assert.equal(evidence.descendantsReleased, true);
  assert.equal(evidence.cleanupErrors, undefined); assert.equal(child.status, evidence.exitCode);
  return { code: evidence.exitCode, stdout: readFileSync(report + '.stdout', 'utf8'),
    stderr: readFileSync(report + '.stderr', 'utf8'), isolation: evidence };
}
