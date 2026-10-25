// Build parallelism (src/managed-link-toolchain.mjs buildJobs): CPUs, at most 8,
// capped by the memory a build can still use, including container limits.
import test from 'node:test';
import assert from 'node:assert/strict';
import { buildJobs, buildMemory, linuxAvailableMemory, darwinAvailableMemory, availableBuildMemory, linkToolchainEnvironment } from '../src/managed-link-toolchain.mjs';

const GiB = 1024 ** 3;

test('jobs follow the CPUs up to 8 and are capped by available memory', () => {
  assert.equal(buildJobs({}, 4, 64 * GiB), 4);
  assert.equal(buildJobs({}, 32, 64 * GiB), 8);
  assert.equal(buildJobs({}, 8, buildMemory.base + 2.5 * GiB), 3);
  assert.equal(buildJobs({}, 8, 2.5 * GiB), 1, 'a small machine builds with one job');
  assert.equal(buildJobs({}, 8, 0.5 * GiB), 1, 'never fewer than one');
  assert.equal(buildJobs({}, 1, 64 * GiB), 1);
  // An explicit LASM_BUILD_JOBS is always used as given.
  assert.equal(buildJobs({ LASM_BUILD_JOBS: '6' }, 2, 1 * GiB), 6);
  assert.equal(linkToolchainEnvironment({ LASM_BUILD_JOBS: '2' }).BINARYEN_CORES, '2');
});

const files = entries => path => { if (!(path in entries)) throw Object.assign(new Error(path), { code: 'ENOENT' }); return entries[path]; };
const meminfo = gib => `MemTotal:       65536000 kB\nMemAvailable:   ${gib * 1024 * 1024} kB\n`;

test('Linux: MemAvailable, lowered by every limited cgroup v2 ancestor (containers)', () => {
  assert.equal(linuxAvailableMemory(files({ '/proc/meminfo': meminfo(16) })), 16 * GiB);
  // A 3 GiB container with 1 GiB in use, inside an unlimited parent.
  const container = files({ '/proc/meminfo': meminfo(16), '/proc/self/cgroup': '0::/docker/abc\n',
    '/sys/fs/cgroup/docker/abc/memory.max': `${3 * GiB}\n`, '/sys/fs/cgroup/docker/abc/memory.current': `${GiB}\n`,
    '/sys/fs/cgroup/docker/memory.max': 'max\n', '/sys/fs/cgroup/docker/memory.current': `${5 * GiB}\n` });
  assert.equal(linuxAvailableMemory(container), 2 * GiB);
  assert.equal(buildJobs({}, 8, linuxAvailableMemory(container)), 1);
  // A tighter limit on an ancestor wins.
  const nested = files({ '/proc/meminfo': meminfo(16), '/proc/self/cgroup': '0::/a/b\n',
    '/sys/fs/cgroup/a/b/memory.max': `${8 * GiB}`, '/sys/fs/cgroup/a/b/memory.current': `${GiB}`,
    '/sys/fs/cgroup/a/memory.max': `${4 * GiB}`, '/sys/fs/cgroup/a/memory.current': `${GiB}` });
  assert.equal(linuxAvailableMemory(nested), 3 * GiB);
  assert.equal(buildJobs({}, 8, linuxAvailableMemory(nested)), 2);
});

test('Linux: cgroup v1 limits, and "no limit" values', () => {
  const v1 = files({ '/proc/meminfo': meminfo(16), '/proc/self/cgroup': '12:memory:/ci\n4:cpu,cpuacct:/ci\n',
    '/sys/fs/cgroup/memory/ci/memory.limit_in_bytes': `${4 * GiB}`, '/sys/fs/cgroup/memory/ci/memory.usage_in_bytes': `${GiB / 2}` });
  assert.equal(linuxAvailableMemory(v1), 3.5 * GiB);
  const unlimited = files({ '/proc/meminfo': meminfo(6), '/proc/self/cgroup': '12:memory:/\n',
    '/sys/fs/cgroup/memory/memory.limit_in_bytes': '9223372036854771712', '/sys/fs/cgroup/memory/memory.usage_in_bytes': `${GiB}` });
  assert.equal(linuxAvailableMemory(unlimited), 6 * GiB);
});

test('macOS: free, inactive, speculative and purgeable pages; failures fall back to free memory', () => {
  const stat = 'Mach Virtual Memory Statistics: (page size of 16384 bytes)\nPages free:        65536.\nPages active:      999999.\n'
    + 'Pages inactive:    131072.\nPages speculative: 0.\nPages purgeable:   65536.\n';
  assert.equal(darwinAvailableMemory(stat), 4 * GiB);
  assert.equal(availableBuildMemory({ platform: 'darwin', run: () => stat, cache: false }), 4 * GiB);
  assert.equal(availableBuildMemory({ platform: 'darwin', run: () => { throw new Error('no vm_stat'); }, free: () => 3 * GiB, cache: false }), 3 * GiB);
  assert.equal(availableBuildMemory({ platform: 'win32', free: () => 5 * GiB, cache: false }), 5 * GiB);
});
