import { spawn } from 'node:child_process';
import { writeFileSync } from 'node:fs';

// No large allocation or pressure experiment: two idle processes must both be
// removed by the guard's time limit before a build checkpoint can be collected.
if (process.argv[2] !== '--child') {
  const child = spawn(process.execPath, [import.meta.filename, '--child'], { stdio: 'inherit' });
  writeFileSync('.work/deadline-control-pids.json', JSON.stringify([process.pid, child.pid]));
}
setInterval(() => {}, 1000);
