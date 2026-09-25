// Compile the *unchanged* memory functions from Lean's pinned upstream libuv.
// Replace only their tiny file/sysinfo inputs with deterministic fixtures; no
// host memory limits, allocations or pressure are changed by this experiment.
import assert from 'node:assert/strict';
import { readFileSync, writeFileSync, mkdirSync, existsSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { spawnSync } from 'node:child_process';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { memoryVectors } from '../test/fixtures/linux-memory.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';

await ensureResourceGuard();
const [referenceArg, outputArg, denoArg, bunArg, ...extra] = process.argv.slice(2);
assert.ok(referenceArg && outputArg && denoArg && bunArg && !extra.length,
  'Supply PINNED_LIBUV_LINUX_C NEW_OUTPUT DENO BUN');
assert.equal(process.platform, 'linux');
const root = fileURLToPath(new URL('..', import.meta.url));
const reference = resolve(referenceArg), output = resolve(outputArg);
assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const hash = bytes => createHash('sha256').update(bytes).digest('hex');
const source = readFileSync(reference);
assert.equal(hash(source), '49c580568444b3da02f11ef63c7881afbe6f6f304f1414da55e80c217261c9ce');
const text = source.toString();
const start = text.indexOf('static uint64_t uv__read_proc_meminfo(');
const end = text.indexOf('\nvoid uv_loadavg(', start);
assert.ok(start >= 0 && end > start);
const fragment = text.slice(start, end);
const cstring = text => '"' + [...Buffer.from(text, 'latin1')].map(byte => '\\x' + byte.toString(16).padStart(2, '0')).join('') + '"';
const files = memoryVectors.map((vector, index) => `static const struct file files_${index}[] = {\n` +
  Object.entries(vector.files).map(([path, data]) => `  {${cstring(path)}, ${cstring(data)}, ${Buffer.byteLength(data, 'latin1')}}`).join(',\n') + '\n};').join('\n');
const fixtures = memoryVectors.map((vector, index) => `  {files_${index}, ${Object.keys(vector.files).length}, ` +
  `${vector.sysinfo ? 1 : 0}, ${vector.sysinfo?.totalram ?? 0}ULL, ${vector.sysinfo?.freeram ?? 0}ULL, ` +
  `${vector.sysinfo?.unit ?? 0}U, ${vector.pageSize}}`).join(',\n');
const harness = `#include <assert.h>
#include <inttypes.h>
#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/sysinfo.h>
_Static_assert(sizeof(struct sysinfo) == 112, "sysinfo ABI size");
_Static_assert(offsetof(struct sysinfo, totalram) == 32, "totalram ABI");
_Static_assert(offsetof(struct sysinfo, freeram) == 40, "freeram ABI");
_Static_assert(offsetof(struct sysinfo, mem_unit) == 104, "mem_unit ABI");
struct file { const char *path, *data; size_t length; };
struct fixture { const struct file *files; size_t count; int sysinfo_ok; unsigned long total, free; unsigned int unit; long page_size; };
${files}
static const struct fixture fixtures[] = {
${fixtures}
};
static const struct fixture *selected;
static int uv__slurp(const char *path, char *buffer, size_t capacity) {
  assert(capacity > 0);
  for (size_t i = 0; i < selected->count; i++) {
    const struct file *file = &selected->files[i];
    if (strcmp(path, file->path)) continue;
    size_t size = file->length < capacity - 1 ? file->length : capacity - 1;
    memcpy(buffer, file->data, size); buffer[size] = '\\0'; return 0;
  }
  return -1;
}
static int fixture_sysinfo(struct sysinfo *info) {
  if (!selected->sysinfo_ok) return -1;
  memset(info, 0, sizeof(*info)); info->totalram = selected->total;
  info->freeram = selected->free; info->mem_unit = selected->unit; return 0;
}
static long fixture_sysconf(int name) { assert(name == _SC_PAGESIZE); return selected->page_size; }
#define sysinfo(info) fixture_sysinfo(info)
#define sysconf(name) fixture_sysconf(name)
${fragment}
int main(void) {
  for (size_t i = 0; i < sizeof(fixtures) / sizeof(fixtures[0]); i++) {
    selected = &fixtures[i];
    uint64_t free = uv_get_free_memory(), total = uv_get_total_memory();
    uint64_t constrained = uv_get_constrained_memory(), available = uv_get_available_memory();
    printf("%zu %" PRIu64 " %" PRIu64 " %" PRIu64 " %" PRIu64 "\\n", i, free, total, constrained, available);
  }
}
`;
const inputs = ['src/linux-memory.mjs', 'test/fixtures/linux-memory.mjs',
  'integration/linux-memory-oracle.mjs', 'integration/linux-memory-vector-host.mjs'];
const hashes = Object.fromEntries(inputs.map(name => [name, hash(readFileSync(join(root, name)))]));
const generated = join(output, 'oracle.c'), binary = join(output, 'oracle');
writeFileSync(generated, harness);
const report = { scope: 'Unchanged libuv 1.48 Linux memory functions with synthetic input files, versus each stock engine host model; no Wasm, allocations based on memory queries, or host limit changes',
  source: { path: reference, sha256: hash(source), url: 'https://github.com/libuv/libuv/blob/v1.48.0/src/unix/linux.c' },
  unchangedFunctionFragmentSha256: hash(fragment), generatedHarnessSha256: hash(harness),
  inputs: hashes, platform: process.platform + '-' + process.arch,
  resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], observations: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, command) {
  const result = spawnSync(command[0], command.slice(1), { cwd: root, encoding: 'utf8', timeout: 30_000, maxBuffer: 1024 * 1024 });
  report.commands.push({ label, command, code: result.status, signal: result.signal,
    stdout: result.stdout, stderr: result.stderr, error: result.error?.message }); save();
  assert.ifError(result.error); assert.equal(result.status, 0, label + ': ' + result.stderr);
  return result.stdout;
}
save();
try {
  run('compile unmodified upstream functions and verify native sysinfo ABI', ['/usr/bin/cc', '-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', generated, '-o', binary]);
  const observed = run('upstream libuv C oracle', [binary]).trim().split('\n').map((line, index) => {
    const [id, ...values] = line.split(' '); assert.equal(Number(id), index); assert.equal(values.length, 4);
    return { name: memoryVectors[index].name, values };
  });
  assert.equal(observed.length, memoryVectors.length);
  report.native = observed; save();
  assert.deepEqual(observed, memoryVectors.map(vector => ({ name: vector.name, values: vector.expected.map(String) })),
    'Fixture expectations must agree with actual upstream C');
  for (const [target, engine, prefix] of [['node', process.execPath, []], ['deno', resolve(denoArg), ['run', '-A']], ['bun', resolve(bunArg), []]]) {
    const version = run(target + ' version', [engine, '--version']).trim();
    const values = JSON.parse(run(target + ' host model', [engine, ...prefix, join(root, 'integration/linux-memory-vector-host.mjs')]));
    assert.deepEqual(values, observed, target + ' differs from the native C oracle');
    report.observations.push({ target, engine, version, matchedVectors: values.length }); save();
  }
  report.passed = true;
} finally {
  report.inputsUnchanged = Object.entries(hashes).every(([name, expected]) => hash(readFileSync(join(root, name))) === expected);
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
console.log(JSON.stringify({ passed: report.passed, vectors: report.native.length, engines: report.observations.length }));
