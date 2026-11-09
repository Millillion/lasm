import test from 'node:test';
import assert from 'node:assert/strict';
import { createLinuxMemory } from '../src/linux-memory.mjs';
import { memoryVectors, fixtureMemoryBackend } from './fixtures/linux-memory.mjs';

for (const vector of memoryVectors) test(vector.name, () => {
  const memory = createLinuxMemory(fixtureMemoryBackend(vector));
  assert.deepEqual([memory.free(), memory.total(), memory.constrained(), memory.available()], vector.expected);
});

// Edges of libuv's parsing: sscanf saturation, the NUL cut, cgroup v1 records
// and the boundaries of the constraint comparisons.
const backend = (files, { total = 1000n, free = 500n, page = 4096n } = {}) => ({
  readSystemFile(path, capacity) {
    const text = files[path.toString('latin1')];
    return text === undefined ? undefined : Buffer.from(text, 'latin1').subarray(0, capacity - 1);
  },
  systemMemoryInfo: () => ({ total, free }),
  pageSize: () => page,
});
const meminfo = { '/proc/meminfo': 'MemTotal: 1 kB\nMemAvailable: 1 kB\n' };

test('decimal limits saturate only above UINT64_MAX and stop at a NUL', () => {
  const v2 = max => createLinuxMemory(backend({ ...meminfo, '/proc/self/cgroup': '0::/g\n', '/sys/fs/cgroup/g/memory.max': max, '/sys/fs/cgroup/g/memory.high': 'max\n' }));
  assert.equal(v2('18446744073709551615\n').constrained(), 18446744073709551615n);
  assert.equal(v2('18446744073709551614\n').constrained(), 18446744073709551614n);
  assert.equal(v2('12\0' + '34\n').constrained(), 12n);
  assert.equal(v2('\0' + '34\n').constrained(), 0n);
  assert.equal(v2('x12\n').constrained(), 0n);
  assert.equal(v2('\v\f12\n').constrained(), 12n);
  assert.equal(v2('V12\n').constrained(), 0n);
});

test('cgroup v1 finds the memory controller on any line and falls back to the root group', () => {
  const files = {
    ...meminfo,
    '/proc/self/cgroup': '7:cpu:/x\n4:memory:/m\n',
    '/sys/fs/cgroup/memory/m/memory.soft_limit_in_bytes': '300\n',
    '/sys/fs/cgroup/memory/m/memory.limit_in_bytes': '200\n',
    '/sys/fs/cgroup/memory/m/memory.usage_in_bytes': '50\n',
  };
  const memory = createLinuxMemory(backend(files));
  assert.equal(memory.constrained(), 200n);
  assert.equal(memory.available(), 150n);
  // A first-line memory record, and a record with no newline after it.
  assert.equal(createLinuxMemory(backend({ ...files, '/proc/self/cgroup': '4:memory:/m' })).constrained(), 200n);
  // No memory controller: the root group's limits.
  const root = { ...meminfo, '/proc/self/cgroup': '7:cpu:/x\n1:name=systemd:/\n',
    '/sys/fs/cgroup/memory/memory.soft_limit_in_bytes': '90\n', '/sys/fs/cgroup/memory/memory.limit_in_bytes': '80\n',
    '/sys/fs/cgroup/memory/memory.usage_in_bytes': '30\n' };
  assert.equal(createLinuxMemory(backend(root)).constrained(), 80n);
  assert.equal(createLinuxMemory(backend(root)).available(), 50n);
  // A group whose own limits are missing also uses the root group's.
  assert.equal(createLinuxMemory(backend({ ...root, '/proc/self/cgroup': '4:memory:/gone\n' })).constrained(), 80n);
  assert.equal(createLinuxMemory(backend({ ...root, '/proc/self/cgroup': '4:memory:/gone\n' })).available(), 50n);
  // The page-aligned "unlimited" sentinel of either limit is UINT64_MAX.
  const sentinel = String(((1n << 63n) - 1n) & ~4095n) + '\n';
  const unlimited = createLinuxMemory(backend({ ...files, '/sys/fs/cgroup/memory/m/memory.limit_in_bytes': sentinel }));
  assert.equal(unlimited.constrained(), 300n);
  const both = createLinuxMemory(backend({ ...files, '/sys/fs/cgroup/memory/m/memory.limit_in_bytes': sentinel, '/sys/fs/cgroup/memory/m/memory.soft_limit_in_bytes': sentinel }));
  assert.equal(both.constrained(), 18446744073709551615n);
});

test('constraint comparisons at their boundaries', () => {
  const v2 = (max, high, current, total = '1') => createLinuxMemory(backend({
    '/proc/meminfo': `MemTotal: ${total} kB\nMemAvailable: 1 kB\n`, '/proc/self/cgroup': '0::/g\n',
    '/sys/fs/cgroup/g/memory.max': max, '/sys/fs/cgroup/g/memory.high': high, '/sys/fs/cgroup/g/memory.current': current }));
  assert.equal(v2('500\n', '500\n', '0\n').constrained(), 500n);
  assert.equal(v2('500\n', '0\n', '0\n').constrained(), 0n);
  // A limit equal to physical memory is still a limit.
  assert.equal(v2('1024\n', 'max\n', '24\n').available(), 1000n);
  assert.equal(v2('1025\n', 'max\n', '24\n').available(), 1024n);
  assert.equal(v2('1000\n', 'max\n', '1000\n').available(), 0n);
  assert.equal(v2('1000\n', 'max\n', '999\n').available(), 1n);
});
