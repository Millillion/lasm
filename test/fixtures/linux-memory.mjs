// Small synthetic files; none of these cases changes the host's cgroup or
// allocates memory based on the values. Also consumed by the upstream C oracle.
const free = 8388608n, total = 16777216n, limit = 1048576n, available = 786432n;
const unlimited = 18446744073709551615n;
const defaults = {
  '/proc/meminfo': 'MemTotal: 16384 kB\nMemAvailable: 8192 kB\n',
  '/proc/self/cgroup': '0::/fixture\n',
  '/sys/fs/cgroup/fixture/memory.max': '1048576\n',
  '/sys/fs/cgroup/fixture/memory.high': '2097152\n',
  '/sys/fs/cgroup/fixture/memory.current': '262144\n',
};
const vector = (name, files, expected = [free, total, limit, available], extra = {}) => ({
  name, files: Object.fromEntries(Object.entries({ ...defaults, ...files }).filter(([, value]) => value !== null)),
  expected, sysinfo: { totalram: 1024n, freeram: 256n, unit: 4096n }, pageSize: 4096n, ...extra,
});
const max = value => ({ '/sys/fs/cgroup/fixture/memory.max': value });
const high = value => ({ '/sys/fs/cgroup/fixture/memory.high': value });
const current = value => ({ '/sys/fs/cgroup/fixture/memory.current': value });
const v1 = {
  '/proc/self/cgroup': '9:cpu,cpuacct:/other\n5:memory:/fixture\n1:name=systemd:/fixture\n',
  '/sys/fs/cgroup/memory/fixture/memory.soft_limit_in_bytes': '1048576\n',
  '/sys/fs/cgroup/memory/fixture/memory.limit_in_bytes': '2097152\n',
  '/sys/fs/cgroup/memory/fixture/memory.usage_in_bytes': '262144\n',
};
const globalV1 = {
  '/sys/fs/cgroup/memory/memory.soft_limit_in_bytes': '524288\n',
  '/sys/fs/cgroup/memory/memory.limit_in_bytes': '1048576\n',
  '/sys/fs/cgroup/memory/memory.usage_in_bytes': '131072\n',
};
export const memoryVectors = [
  vector('cgroup v2 finite maximum', {}),
  vector('cgroup v2 lower high', high('524288\n'), [free, total, 524288n, 262144n]),
  vector('cgroup v2 unlimited high', high('max\n')),
  vector('cgroup v2 unlimited maximum', max('max\n'), [free, total, 2097152n, 1835008n]),
  vector('cgroup v2 fully unlimited', { ...max('max\n'), ...high('max\n') }, [free, total, unlimited, free]),
  vector('constraint larger than physical memory', { ...max('33554432\n'), ...high('67108864\n') }, [free, total, 33554432n, free]),
  ...[null, '', '0\n', 'max', 'max\n\n', 'nonsense\n'].map(value =>
    vector('missing or invalid maximum ' + JSON.stringify(value), max(value), [free, total, 0n, free])),
  vector('missing high', high(null), [free, total, 0n, free]),
  vector('usage temporarily exceeds constraint', current('1048577\n'), [free, total, limit, 0n]),
  vector('usage equals constraint', current('1048576\n'), [free, total, limit, 0n]),
  vector('missing usage', current(null), [free, total, limit, limit]),
  vector('missing cgroup file', { '/proc/self/cgroup': null }, [free, total, 0n, 0n]),
  vector('empty cgroup file', { '/proc/self/cgroup': '' }, [free, total, 0n, free]),
  vector('unsigned negative sentinel', { ...max('-1\n'), ...high('-1\n') }, [free, total, unlimited, free]),
  vector('unsigned decimal overflow saturates', { ...max('18446744073709551616\n'), ...high('max\n') }, [free, total, unlimited, free]),
  vector('negative unsigned overflow saturates', { ...max('-18446744073709551616\n'), ...high('max\n') }, [free, total, unlimited, free]),
  vector('decimal accepts whitespace sign and trailing text', max(' \t+1048576 trailing')),
  vector('limit file read is bounded to 31 bytes', max(' '.repeat(31) + '1048576\n'), [free, total, 0n, free]),
  vector('cgroup path retains invalid UTF-8', {
    '/proc/self/cgroup': '0::/raw\xff\n', '/sys/fs/cgroup/raw\xff/memory.max': '1048576\n',
    '/sys/fs/cgroup/raw\xff/memory.high': 'max\n', '/sys/fs/cgroup/raw\xff/memory.current': '262144\n',
  }),
  vector('cgroup root path', {
    '/proc/self/cgroup': '0::/\n', '/sys/fs/cgroup//memory.max': '1048576\n',
    '/sys/fs/cgroup//memory.high': 'max\n', '/sys/fs/cgroup//memory.current': '262144\n',
  }),
  vector('cgroup v1 finite soft limit', v1),
  vector('cgroup v1 unavailable mount falls back to global controller', {
    ...v1, ...globalV1, '/sys/fs/cgroup/memory/fixture/memory.limit_in_bytes': null,
  }, [free, total, 524288n, 262144n]),
  vector('cgroup v1 zero local usage falls back to global usage', {
    ...v1, ...globalV1, '/sys/fs/cgroup/memory/fixture/memory.usage_in_bytes': '0\n',
  }, [free, total, limit, 917504n]),
  vector('cgroup v1 missing controller falls back to global controller', {
    ...globalV1, '/proc/self/cgroup': '9:cpu,cpuacct:/fixture\n',
  }, [free, total, 524288n, 393216n]),
  vector('cgroup v1 requires exact memory controller field', {
    ...globalV1, '/proc/self/cgroup': '5:memory,devices:/fixture\n',
  }, [free, total, 524288n, 393216n]),
  ...[4096n, 65536n].map(pageSize => vector('cgroup v1 unlimited page size ' + pageSize, {
    ...v1,
    '/sys/fs/cgroup/memory/fixture/memory.soft_limit_in_bytes': String(9223372036854775807n & ~(pageSize - 1n)) + '\n',
    '/sys/fs/cgroup/memory/fixture/memory.limit_in_bytes': String(9223372036854775807n & ~(pageSize - 1n)) + '\n',
  }, [free, total, unlimited, free], { pageSize })),
  vector('sysinfo fallback for missing meminfo', { '/proc/meminfo': null }, [1048576n, 4194304n, limit, available]),
  vector('sysinfo fallback for absent or zero entries', { '/proc/meminfo': 'MemTotal: 0 kB\n' }, [1048576n, 4194304n, limit, available]),
  vector('failed sysinfo returns zero', { '/proc/meminfo': null }, [0n, 0n, limit, 0n], { sysinfo: null }),
  vector('meminfo read is bounded to 4095 bytes', { '/proc/meminfo': ' '.repeat(4095) + defaults['/proc/meminfo'] }, [1048576n, 4194304n, limit, available]),
  vector('cgroup file read is bounded to 1023 bytes', {
    '/proc/self/cgroup': '1:cpu:/' + 'x'.repeat(1015) + '\n5:memory:/fixture\n', ...globalV1,
  }, [free, total, 524288n, 393216n]),
  vector('embedded NUL terminates a system file', max('0\0' + '1048576\n'), [free, total, 0n, free]),
  vector('meminfo conversion wraps unsigned multiplication', {
    '/proc/meminfo': 'MemTotal: 18446744073709551615 kB\nMemAvailable: 8192 kB\n',
  }, [free, 18446744073709550592n, limit, available]),
];

export function fixtureMemoryBackend(vector) {
  return {
    readSystemFile(path, capacity) {
      const content = vector.files[path.toString('latin1')];
      return content === undefined ? undefined : Buffer.from(content, 'latin1').subarray(0, capacity - 1);
    },
    systemMemoryInfo: () => vector.sysinfo ? {
      total: BigInt.asUintN(64, vector.sysinfo.totalram * vector.sysinfo.unit),
      free: BigInt.asUintN(64, vector.sysinfo.freeram * vector.sysinfo.unit),
    } : { total: 0n, free: 0n },
    pageSize: () => vector.pageSize,
  };
}
