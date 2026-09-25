import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, writeFileSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';

const base64 = value => Buffer.from(value).toString('base64');
function session(t, script, mode, timeoutSeconds = 5, trigger = 'ready\n', options = {}) {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-terminal-test-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const config = join(directory, 'config.json');
  writeFileSync(config, JSON.stringify({ command: [process.execPath, '-e', script], cwd: directory,
    mode, timeoutSeconds, triggerBase64: base64(trigger), inputBase64: base64([0, 255, 10, 13]), ...options }));
  const result = spawnSync('python3', ['-I', '-B', resolve('integration/terminal-session.py'), config],
    { encoding: 'utf8', timeout: 15000 });
  assert.ifError(result.error); assert.equal(result.status, 0, result.stderr);
  assert.equal(result.stderr, '');
  return JSON.parse(result.stdout);
}

for (const mode of ['terminal', 'stdout-pipe']) test(`raw terminal bytes and descriptor routing: ${mode}`,
  { skip: process.platform === 'win32' }, t => {
    const script = `const fs=require('node:fs');
      fs.writeSync(2, Buffer.from([255, 0]));
      fs.writeSync(1, 'tty=' + Number(require('node:tty').isatty(1)) + '\\nready\\n');
      const input=Buffer.alloc(4); let n=0;
      while(n<4) n+=fs.readSync(0,input,n,4-n,null);
      fs.writeSync(1,input);`;
    const row = session(t, script, mode);
    assert.equal(row.code, 0); assert.equal(row.signal, null);
    assert.equal(row.inputTriggered, true); assert.equal(row.inputBytesSent, 4);
    assert.equal(row.timedOut, false); assert.equal(row.driverFailure, null);
    const output = Buffer.concat([Buffer.from(`tty=${mode === 'terminal' ? 1 : 0}\nready\n`), Buffer.from([0, 255, 10, 13])]);
    assert.equal(row.terminalBase64, base64(mode === 'terminal' ? Buffer.concat([Buffer.from([255, 0]), output]) : [255, 0]));
    assert.equal(row.stdoutBase64, mode === 'terminal' ? '' : base64(output));
  });

test('early child failure is retained without fabricating input or success', { skip: process.platform === 'win32' }, t => {
  const row = session(t, "require('node:fs').writeSync(2,'failure');process.exit(7)", 'terminal');
  assert.equal(row.code, 7); assert.equal(row.signal, null);
  assert.equal(row.inputTriggered, false); assert.equal(row.inputBytesSent, 0);
  assert.equal(row.terminalBase64, base64('failure'));
  assert.equal(row.timedOut, false);
});

test('an unresponsive terminal child is stopped at the driver deadline', { skip: process.platform === 'win32' }, t => {
  const row = session(t, "require('node:fs').writeSync(1,'waiting');setInterval(()=>{},1000)", 'terminal', 0.5);
  assert.equal(row.code, null); assert.equal(row.signal, 'SIGKILL');
  assert.equal(row.timedOut, true); assert.equal(row.inputTriggered, false);
  assert.equal(row.terminalBase64, base64('waiting'));
});

test('excess terminal output remains a failed bounded run', { skip: process.platform === 'win32' }, t => {
  const row = session(t, "require('node:fs').writeSync(1,Buffer.alloc(131072,65));setInterval(()=>{},1000)", 'terminal');
  assert.equal(row.code, null); assert.equal(row.signal, 'SIGKILL');
  assert.match(row.driverFailure, /output exceeded/);
  assert.equal(row.timedOut, false); assert.equal(row.inputTriggered, false);
  const bytes = Buffer.from(row.terminalBase64, 'base64');
  assert.ok(bytes.length > 65536 && bytes.length <= 131072);
});

test('the backpressure handshake measures a full pipe before input and holds it until release',
  { skip: process.platform !== 'linux' }, t => {
    const script = `const fs=require('node:fs');
      const child=require('node:child_process').spawn(process.execPath,
        ['-e', "const fs=require('node:fs'),b=Buffer.alloc(16384,65);let n=0;while(n<b.length)n+=fs.writeSync(1,b,n,b.length-n)"],
        {stdio:['ignore',1,2]});
      fs.writeSync(2,'writing\\n');
      const input=Buffer.alloc(4);let n=0;
      while(n<4)n+=fs.readSync(0,input,n,4-n,null);
      require('node:assert/strict').deepEqual([...input],[0,255,10,13]);
      fs.writeSync(2,'writer blocked\\n');
      child.on('exit',(code,signal)=>{
        if(code!==0||signal)process.exit(1);
        fs.writeSync(2,'done\\n');
      });`;
    const row = session(t, script, 'stdout-pipe', 5, 'writing\n', {
      stdoutPipe: { capacityBytes: 4096, releaseTriggerBase64: base64('writer blocked\n') },
    });
    assert.equal(row.code, 0); assert.equal(row.signal, null);
    assert.equal(row.inputTriggered, true); assert.equal(row.inputBytesSent, 4);
    assert.equal(row.timedOut, false); assert.equal(row.driverFailure, null);
    assert.equal(row.terminalBase64, base64('writing\nwriter blocked\ndone\n'));
    assert.equal(row.stdoutBase64, base64(Buffer.alloc(16384, 65)));
    assert.deepEqual(row.stdoutPipe, { capacityBytes: 4096, bytesBeforeInput: 4096,
      bytesBeforeRelease: 4096, releaseObserved: true });
  });

test('an output marker alone cannot fabricate a full-pipe observation',
  { skip: process.platform !== 'linux' }, t => {
    const script = `const fs=require('node:fs');fs.writeSync(1,Buffer.alloc(2048,65));
      fs.writeSync(2,'writing\\n');fs.readSync(0,Buffer.alloc(4),0,4,null);`;
    const row = session(t, script, 'stdout-pipe', 0.5, 'writing\n', {
      stdoutPipe: { capacityBytes: 4096, releaseTriggerBase64: base64('writer blocked\n') },
    });
    assert.equal(row.code, null); assert.equal(row.signal, 'SIGKILL');
    assert.equal(row.inputTriggered, true); assert.equal(row.inputBytesSent, 0);
    assert.equal(row.timedOut, true); assert.equal(row.driverFailure, null);
    assert.deepEqual(row.stdoutPipe, { capacityBytes: 4096, bytesBeforeInput: null,
      bytesBeforeRelease: null, releaseObserved: false });
  });
