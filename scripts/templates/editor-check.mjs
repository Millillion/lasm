// What the Lean editor sees in a `lasm init` project: starts `lake serve` (the
// Lean language server the VS Code extension runs), opens every .lean file of
// the project and fails on any error diagnostic (for example an unknown
// `import Lasm.UI`). The editor runs Lasm's own Lean (`lasm editor` links it with
// elan); here LAKE names that toolchain's lake directly, so no elan is needed.
//   node editor-check.mjs PROJECT_DIR LAKE [TIMEOUT_SECONDS]
import { spawn } from 'node:child_process';
import { readdirSync, readFileSync } from 'node:fs';
import { join, relative } from 'node:path';
import { pathToFileURL } from 'node:url';

const [project, lake, timeoutArg] = process.argv.slice(2);
if (!project || !lake) { console.error('Usage: node editor-check.mjs PROJECT_DIR LAKE [TIMEOUT_SECONDS]'); process.exit(2); }
const timeoutMs = Number(timeoutArg ?? 600) * 1000;
const files = readdirSync(project).filter(name => name.endsWith('.lean') && name !== 'lakefile.lean').sort();

const server = spawn(lake, ['serve'], { cwd: project, stdio: ['pipe', 'pipe', 'inherit'], windowsHide: true });
let buffer = Buffer.alloc(0), nextId = 1;
const pending = new Map(), diagnostics = new Map(), finished = new Set();
const send = message => {
  const body = Buffer.from(JSON.stringify({ jsonrpc: '2.0', ...message }));
  server.stdin.write(Buffer.concat([Buffer.from(`Content-Length: ${body.length}\r\n\r\n`), body]));
};
const request = (method, params) => new Promise(resolve => { const id = nextId++; pending.set(id, resolve); send({ id, method, params }); });
let notify;
server.stdout.on('data', chunk => {
  buffer = Buffer.concat([buffer, chunk]);
  for (;;) {
    const end = buffer.indexOf('\r\n\r\n');
    if (end < 0) return;
    const length = Number(/Content-Length: (\d+)/i.exec(buffer.subarray(0, end).toString())[1]);
    if (buffer.length < end + 4 + length) return;
    const message = JSON.parse(buffer.subarray(end + 4, end + 4 + length).toString());
    buffer = buffer.subarray(end + 4 + length);
    if (message.id !== undefined && pending.has(message.id)) { pending.get(message.id)(message.result ?? message.error); pending.delete(message.id); }
    else if (message.method === 'textDocument/publishDiagnostics') diagnostics.set(message.params.uri, message.params.diagnostics);
    else if (message.method === '$/lean/fileProgress' && message.params.processing.length === 0) { finished.add(message.params.textDocument.uri); notify?.(); }
    else if (message.id !== undefined && message.method) send({ id: message.id, result: null }); // server→client requests
  }
});

const timer = setTimeout(() => { console.error(`editor-check: timed out after ${timeoutMs / 1000} s`); server.kill(); process.exit(1); }, timeoutMs);
await request('initialize', { processId: process.pid, rootUri: pathToFileURL(project).href, capabilities: {} });
send({ method: 'initialized', params: {} });
const uris = files.map(name => pathToFileURL(join(project, name)).href);
// One file at a time, as a user opens them: each open runs `lake setup-file`, and
// several at once built the shared modules concurrently, so one setup-file could
// fail on a half-written .olean (dx-dev-loop run 40375240718).
for (const [index, name] of files.entries()) {
  send({ method: 'textDocument/didOpen', params: { textDocument: {
    uri: uris[index], languageId: 'lean4', version: 1, text: readFileSync(join(project, name), 'utf8') } } });
  await new Promise(resolve => { notify = () => { if (finished.has(uris[index])) resolve(); }; notify(); });
}
// Diagnostics follow the final progress notification closely.
await new Promise(resolve => setTimeout(resolve, 1000));
clearTimeout(timer);
let errors = 0;
for (const [index, uri] of uris.entries()) {
  const found = (diagnostics.get(uri) ?? []).filter(d => d.severity === 1);
  errors += found.length;
  console.log(`${files[index]}: ${found.length ? found.length + ' error(s)' : 'ok'}`);
  for (const d of found.slice(0, 5)) console.log(`  ${relative(process.cwd(), join(project, files[index]))}:${d.range.start.line + 1}:${d.range.start.character}: ${d.message.split('\n')[0]}`);
}
await request('shutdown', null); send({ method: 'exit' });
setTimeout(() => server.kill(), 2000).unref();
process.exitCode = errors ? 1 : 0;
