// Lean's bundled libuv 1.48 Linux memory queries. Keep these semantics separate
// from the JavaScript engine's libuv/compatibility layer: in particular, host
// free memory is not the available memory of a constrained process.
// Reference: libuv v1.48.0 src/unix/linux.c, uv_get_*_memory.
const maximum = (1n << 64n) - 1n;
const unsigned = value => BigInt.asUintN(64, value);

// sscanf's unsigned decimal conversion accepts a sign and saturates overflow.
// Retain integers throughout; Number loses the unlimited UINT64_MAX sentinel.
function decimal(text) {
  const match = /^[\t\n\v\f\r ]*([+-]?)([0-9]+)/.exec(text);
  if (!match) return undefined;
  const magnitude = BigInt(match[2]);
  return magnitude > maximum ? maximum : unsigned(match[1] === '-' ? -magnitude : magnitude);
}

export function createLinuxMemory(native) {
  function slurp(path, capacity) {
    // Latin-1 roundtrips kernel path bytes, including non-UTF-8 cgroup names.
    const bytes = native.readSystemFile(Buffer.from(path, 'latin1'), capacity);
    if (bytes === undefined) return undefined;
    const nul = bytes.indexOf(0);
    return bytes.subarray(0, nul < 0 ? bytes.length : nul).toString('latin1');
  }
  function readInteger(path) {
    const text = slurp(path, 32);
    return text === undefined ? 0n : decimal(text) ?? (text === 'max\n' ? maximum : 0n);
  }
  function memoryInfo(name, fallback) {
    const text = slurp('/proc/meminfo', 4096);
    const index = text?.indexOf(name) ?? -1;
    const value = index < 0 ? 0n : unsigned((decimal(text.slice(index + name.length)) ?? 0n) * 1024n);
    return value || native.systemMemoryInfo()[fallback];
  }
  function v1Path(text) {
    let index = text.indexOf(':');
    while (index >= 0 && !text.startsWith(':memory:', index)) {
      const newline = text.indexOf('\n', index);
      index = newline < 0 ? -1 : text.indexOf(':', newline);
    }
    return index < 0 ? undefined : text.slice(index + ':memory:/'.length).split('\n', 1)[0];
  }
  const v2Path = text => text.slice('0::/'.length).split('\n', 1)[0];
  function constraint(text) {
    let high, max;
    if (text.startsWith('0::/')) {
      const path = `/sys/fs/cgroup/${v2Path(text)}`;
      max = readInteger(path + '/memory.max');
      high = readInteger(path + '/memory.high');
    } else {
      const path = v1Path(text);
      if (path !== undefined) {
        high = readInteger(`/sys/fs/cgroup/memory/${path}/memory.soft_limit_in_bytes`);
        max = readInteger(`/sys/fs/cgroup/memory/${path}/memory.limit_in_bytes`);
      }
      if (!high || !max) {
        high = readInteger('/sys/fs/cgroup/memory/memory.soft_limit_in_bytes');
        max = readInteger('/sys/fs/cgroup/memory/memory.limit_in_bytes');
      }
      const sentinel = ((1n << 63n) - 1n) & ~(native.pageSize() - 1n);
      if (high === sentinel) high = maximum;
      if (max === sentinel) max = maximum;
    }
    return !high || !max ? 0n : high < max ? high : max;
  }
  const memory = {
    free: () => memoryInfo('MemAvailable:', 'free'),
    total: () => memoryInfo('MemTotal:', 'total'),
    constrained() {
      const text = slurp('/proc/self/cgroup', 1024);
      return text === undefined ? 0n : constraint(text);
    },
    available() {
      const text = slurp('/proc/self/cgroup', 1024);
      if (text === undefined) return 0n;
      const limit = constraint(text);
      if (limit === 0n || limit > memory.total()) return memory.free();
      let current;
      if (text.startsWith('0::/')) current = readInteger(`/sys/fs/cgroup/${v2Path(text)}/memory.current`);
      else {
        const path = v1Path(text);
        current = path === undefined ? 0n : readInteger(`/sys/fs/cgroup/memory/${path}/memory.usage_in_bytes`);
        if (!current) current = readInteger('/sys/fs/cgroup/memory/memory.usage_in_bytes');
      }
      return current > limit ? 0n : limit - current;
    },
  };
  return memory;
}
