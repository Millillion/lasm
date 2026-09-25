// Keep text for readable diagnostics, and bytes for native/deployed equality.
// UTF-8 replacement characters can otherwise hide distinct binary IO results.
import assert from 'node:assert/strict';

export function processOutput(result) {
  const stdout = result.stdout ?? Buffer.alloc(0), stderr = result.stderr ?? Buffer.alloc(0);
  assert.ok(Buffer.isBuffer(stdout) && Buffer.isBuffer(stderr), 'Capture subprocess output without a text encoding');
  return { code: result.status, stdout: stdout.toString('utf8'), stderr: stderr.toString('utf8'),
    stdoutBase64: stdout.toString('base64'), stderrBase64: stderr.toString('base64') };
}
