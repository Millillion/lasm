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

test('LASM_BUILD_JOBS: one to three digits without a leading zero; empty means automatic', () => {
  for (const value of ['1', '9', '10', '999']) assert.equal(buildJobs({ LASM_BUILD_JOBS: value }, 1, 1), Number(value));
  for (const value of ['0', '01', '1000', '-1', '1.5', 'a', '1a', 'a1', ' 2', 'x9'])
    assert.throws(() => buildJobs({ LASM_BUILD_JOBS: value }, 1, 1), { message: `LASM_BUILD_JOBS must be a positive integer, not ${JSON.stringify(value)}` }, value);
  assert.equal(buildJobs({ LASM_BUILD_JOBS: '' }, 3, 64 * GiB), 3);
  // Memory that cannot be measured does not limit the CPUs.
  assert.equal(buildJobs({}, 5, NaN), 5);
  assert.equal(buildJobs({}, 5, Infinity), 5);
  // Exactly the base memory, and one more job per GiB above it.
  assert.equal(buildJobs({}, 8, buildMemory.base), 1);
  assert.equal(buildJobs({}, 8, buildMemory.base + GiB - 1), 1);
  assert.equal(buildJobs({}, 8, buildMemory.base + GiB), 2);
  assert.deepEqual(buildMemory, { base: 2 * GiB, perJob: GiB });
});

test('Linux memory: anchored MemAvailable, numeric limits only, root and missing groups, v1 controllers', () => {
  assert.equal(linuxAvailableMemory(files({ '/proc/meminfo': 'XMemAvailable: 1 kB\nMemAvailable:   2 kB\n' })), 2048);
  assert.equal(linuxAvailableMemory(files({ '/proc/meminfo': 'MemAvailable: 2 kB total\n' })), Infinity, 'a line with more after kB is not read');
  assert.equal(linuxAvailableMemory(files({ '/proc/meminfo': 'MemTotal: 5 kB\n' })), Infinity);
  // The root group's own limit.
  assert.equal(linuxAvailableMemory(files({ '/proc/meminfo': meminfo(16), '/proc/self/cgroup': '0::/\n',
    '/sys/fs/cgroup/memory.max': `${3 * GiB}`, '/sys/fs/cgroup/memory.current': `${GiB}` })), 2 * GiB);
  // A group directly below the root reaches the root's limit too.
  assert.equal(linuxAvailableMemory(files({ '/proc/meminfo': meminfo(16), '/proc/self/cgroup': '0::/a\n',
    '/sys/fs/cgroup/a/memory.max': 'max', '/sys/fs/cgroup/a/memory.current': '0',
    '/sys/fs/cgroup/memory.max': `${3 * GiB}`, '/sys/fs/cgroup/memory.current': `${GiB}` })), 2 * GiB);
  // Only whole decimal numbers count; a limit without usage (or the reverse) is ignored.
  for (const [max, current] of [[' 1x', '0'], ['x1', '0'], [`${GiB}`, undefined], [undefined, '0'], [`${GiB}`, ' 1 2']]) {
    const entries = { '/proc/meminfo': meminfo(16), '/proc/self/cgroup': '0::/g\n' };
    if (max !== undefined) entries['/sys/fs/cgroup/g/memory.max'] = max;
    if (current !== undefined) entries['/sys/fs/cgroup/g/memory.current'] = current;
    assert.equal(linuxAvailableMemory(files(entries)), 16 * GiB, `${max} / ${current}`);
  }
  assert.equal(linuxAvailableMemory(files({ '/proc/meminfo': meminfo(16), '/proc/self/cgroup': '0::/g\n',
    '/sys/fs/cgroup/g/memory.max': ` ${GiB}\n`, '/sys/fs/cgroup/g/memory.current': '0\n' })), GiB, 'surrounding whitespace is trimmed');
  // A group over its limit leaves nothing.
  assert.equal(linuxAvailableMemory(files({ '/proc/meminfo': meminfo(16), '/proc/self/cgroup': '0::/g\n',
    '/sys/fs/cgroup/g/memory.max': `${GiB}`, '/sys/fs/cgroup/g/memory.current': `${2 * GiB}` })), 0);
  // v1: the memory controller's root, limits at or above 2^60 meaning none, other controllers and malformed lines ignored.
  assert.equal(linuxAvailableMemory(files({ '/proc/meminfo': meminfo(16), '/proc/self/cgroup': '5:memory:/\n',
    '/sys/fs/cgroup/memory/memory.limit_in_bytes': `${4 * GiB}`, '/sys/fs/cgroup/memory/memory.usage_in_bytes': `${GiB}` })), 3 * GiB);
  assert.equal(linuxAvailableMemory(files({ '/proc/meminfo': meminfo(16), '/proc/self/cgroup': '5:memory:/ci\n',
    '/sys/fs/cgroup/memory/ci/memory.limit_in_bytes': `${2 ** 60}`, '/sys/fs/cgroup/memory/ci/memory.usage_in_bytes': '0' })), 16 * GiB);
  assert.equal(linuxAvailableMemory(files({ '/proc/meminfo': meminfo(16), '/proc/self/cgroup': '5:memory:/ci\n',
    '/sys/fs/cgroup/memory/ci/memory.limit_in_bytes': `${4 * GiB}` })), 16 * GiB);
  assert.equal(linuxAvailableMemory(files({ '/proc/meminfo': meminfo(16), '/proc/self/cgroup': '5:memory:/ci\n',
    '/sys/fs/cgroup/memory/ci/memory.usage_in_bytes': '0' })), 16 * GiB);
  assert.equal(linuxAvailableMemory(files({ '/proc/meminfo': meminfo(16), '/proc/self/cgroup': '4:cpu,cpuacct:/other\ngarbage\n5:memory:\n',
    '/sys/fs/cgroup/memory/other/memory.limit_in_bytes': `${GiB}`, '/sys/fs/cgroup/memory/other/memory.usage_in_bytes': '0',
    '/sys/fs/cgroup/memory/memory.limit_in_bytes': `${GiB}`, '/sys/fs/cgroup/memory/memory.usage_in_bytes': '0' })), 16 * GiB);
  assert.equal(linuxAvailableMemory(files({ '/proc/meminfo': meminfo(16), '/proc/self/cgroup': '7:cpu,memory:/m\n',
    '/sys/fs/cgroup/memory/m/memory.limit_in_bytes': `${GiB}`, '/sys/fs/cgroup/memory/m/memory.usage_in_bytes': '0' })), GiB, 'memory among several controllers');
  // No cgroup file at all.
  assert.equal(linuxAvailableMemory(files({ '/proc/meminfo': meminfo(3) })), 3 * GiB);
});

test('macOS memory: page size default, every counted kind, nothing counted means unknown', () => {
  assert.equal(darwinAvailableMemory('Pages free: 1.\nPages inactive: 2.\nPages speculative: 3.\nPages purgeable: 4.\nPages active: 100.\n'), 10 * 4096);
  assert.equal(darwinAvailableMemory('(page size of 100 bytes)\nPages speculative: 7.\n'), 700);
  assert.equal(darwinAvailableMemory('(page size of 100 bytes)\nPages active: 7.\n'), undefined);
  assert.equal(darwinAvailableMemory('(page size of 100 bytes)\nPages free: 0.\n'), undefined);
  assert.equal(darwinAvailableMemory('(page size of 100 bytes)\n  Pages free: 5.\nPages free: 6\n'), undefined, 'only well-formed lines count');
});

test('available memory: measured once per process by default; unmeasurable or zero falls back to free memory', async () => {
  const { availableBuildMemory: fresh } = await import('../src/managed-link-toolchain.mjs?measure-once');
  let reads = 0;
  const read = path => { reads++; return files({ '/proc/meminfo': meminfo(4) })(path); };
  assert.equal(fresh({ platform: 'linux', read }), 4 * GiB);
  const after = reads;
  assert.equal(fresh({ platform: 'linux', read: () => assert.fail('cached') }), 4 * GiB);
  assert.equal(reads, after);
  assert.equal(fresh({ platform: 'linux', read, cache: false, free: () => 1 }), 4 * GiB);
  // Not cached when asked not to.
  const { availableBuildMemory: uncached } = await import('../src/managed-link-toolchain.mjs?measure-uncached');
  assert.equal(uncached({ platform: 'linux', read, cache: false }), 4 * GiB);
  assert.equal(uncached({ platform: 'linux', read: files({ '/proc/meminfo': meminfo(2) }) }), 2 * GiB, 'an uncached call did not fill the cache');
  assert.equal(availableBuildMemory({ platform: 'linux', read: () => { throw new Error('no /proc'); }, free: () => 7, cache: false }), 7, 'an unreadable /proc falls back to free memory');
  assert.equal(availableBuildMemory({ platform: 'linux', read: files({ '/proc/meminfo': 'MemAvailable: 0 kB\n' }), free: () => 7, cache: false }), 7);
  // macOS asks vm_stat exactly; other platforms never run it.
  const runs = [];
  assert.equal(availableBuildMemory({ platform: 'darwin', run: (command, args) => { runs.push([command, args]); return 'Pages free: 1.\n'; }, cache: false }), 4096);
  assert.deepEqual(runs, [['/usr/bin/vm_stat', []]]);
  assert.equal(availableBuildMemory({ platform: 'freebsd', run: () => assert.fail('no vm_stat'), read: () => assert.fail('no /proc'), free: () => 9, cache: false }), 9);
  // On this machine's platform the defaults measure something positive.
  if (process.platform === 'linux') {
    const measured = availableBuildMemory({ platform: 'linux', cache: false, free: () => -1 });
    assert.ok(Number.isFinite(measured) && measured > 0, String(measured));
  }
});

test('the link environment removes only variables that start with an inherited toolchain prefix', () => {
  const env = linkToolchainEnvironment({ EM_CONFIG: 'x', EMCC_DEBUG: '1', EMSDK: 'x', EMSDK_NODE: 'x', PYTHONHOME: 'x', LLVM_ROOT: 'x', BINARYEN_ROOT: 'x',
    MY_EM_FLAG: 'kept', NOT_PYTHON: 'kept', em_lower: 'kept', LASM_BUILD_JOBS: '3' });
  assert.deepEqual(env, { MY_EM_FLAG: 'kept', NOT_PYTHON: 'kept', em_lower: 'kept', LASM_BUILD_JOBS: '3', BINARYEN_CORES: '3', SOURCE_DATE_EPOCH: '315532800' });
});
