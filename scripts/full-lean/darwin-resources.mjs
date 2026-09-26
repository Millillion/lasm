import { execFileSync } from 'node:child_process';
import { totalmem } from 'node:os';

export function parseDarwinProcesses(text) {
  return text.trim().split('\n').filter(Boolean).map(line => {
    const match = /^\s*(\d+)\s+(\d+)\s+(\d+)\s+(\d+)\s+(.+)$/.exec(line);
    if (!match) throw new Error('Cannot parse macOS process accounting');
    const [, pid, parent, group, rss] = match;
    const detail = /^([A-Za-z]{3}\s+[A-Za-z]{3}\s+\d+\s+\d\d:\d\d:\d\d\s+\d{4})(?:\s+(.*))?$/.exec(match[5]);
    const started = (detail?.[1] ?? match[5]).trim();
    return { pid: +pid, parent: +parent, group: +group, bytes: +rss * 1024, started,
      identity: pid + ':' + started, ...(detail?.[2] ? { command: detail[2] } : {}) };
  });
}
export function darwinProcesses() {
  return parseDarwinProcesses(execFileSync('/bin/ps', ['-axo', 'pid=,ppid=,pgid=,rss=,lstart=,comm='],
    { env: { ...process.env, LC_ALL: 'C' }, encoding: 'utf8', timeout: 5000, maxBuffer: 2 * 1024 ** 2 }));
}
export function workloadProcesses(all, group, seen = new Set()) {
  const selected = new Map(all.filter(p => p.group === group || seen.has(p.identity)).map(p => [p.pid, p]));
  let previous;
  do {
    previous = selected.size;
    for (const p of all) if (selected.has(p.parent)) selected.set(p.pid, p);
  } while (previous !== selected.size);
  for (const p of selected.values()) seen.add(p.identity);
  return [...selected.values()];
}
export function darwinMemory() {
  const text = execFileSync('/usr/bin/vm_stat', [], { encoding: 'utf8', timeout: 5000 });
  const pageSize = Number(text.match(/page size of (\d+) bytes/)?.[1]);
  const pages = name => {
    const count = text.match(new RegExp('^' + name + ':\\s+(\\d+)\\.', 'm'))?.[1];
    if (!count || !pageSize) throw new Error('Cannot parse macOS host memory: ' + name);
    return Number(count) * pageSize;
  };
  return { total: totalmem(), available: pages('Pages free') + pages('Pages inactive') + pages('Pages speculative'),
    compressed: pages('Pages occupied by compressor') };
}
