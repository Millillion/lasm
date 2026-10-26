// Makes or checks src/wasi/component/proxy-template.wasm (src/wasi/wasi-component.mjs):
// the wasi-http component wrapper that every `lasm build --target wasi-http`
// splices its core module into.
//
//   node scripts/wasi/make-component-template.mjs --wasm-tools WASM_TOOLS --adapter PROXY_ADAPTER CORE.wasm [--check COMPONENT.wasm]…
//
// CORE.wasm is a program's core module (the `core.wasm` a wasi-http link
// writes). With wasm-tools (pinned in wasi.yml) it embeds scripts/wasi/wit's
// `lasm` world, runs `component new` with Wasmtime's
// wasi_snapshot_preview1.proxy.wasm adapter (pinned by SHA-256 below), and
// writes the template: the component with the main module replaced by a
// placeholder. With --check it writes nothing; instead it requires that each
// COMPONENT.wasm (a Lasm build's output) equals wasm-tools' own component for
// that build's core module, and that the shipped template equals the one
// made from CORE.wasm.
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { makeTemplate, extractCore } from '../../src/wasi/wasi-component.mjs';

const root = join(dirname(fileURLToPath(import.meta.url)), '../..');
export const adapterSha256 = '59c393eeaecf0d7f1c71af71b27d588ab21e9f159f67018ce4e036a565b097bb'; // wasmtime v49.0.4
const args = process.argv.slice(2);
const take = name => { const i = args.indexOf(name); return i < 0 ? undefined : args.splice(i, 2)[1]; };
const wasmTools = take('--wasm-tools'), adapter = take('--adapter');
const checks = [];
for (let c; (c = take('--check'));) checks.push(c);
const [core] = args;
if (!wasmTools || !adapter || !core) { console.error('Usage: make-component-template.mjs --wasm-tools PATH --adapter PATH CORE.wasm [--check COMPONENT.wasm]…'); process.exit(2); }
const sha = bytes => createHash('sha256').update(bytes).digest('hex');
if (sha(readFileSync(adapter)) !== adapterSha256) throw new Error(`The proxy adapter is not the pinned one (${adapterSha256})`);
const templateFile = join(root, 'src/wasi/component/proxy-template.wasm');

const work = mkdtempSync(join(tmpdir(), 'lasm-component-'));
/** wasm-tools' own component for a core module. */
function component(coreFile) {
  const embedded = join(work, 'embedded.wasm'), out = join(work, 'component.wasm');
  execFileSync(wasmTools, ['component', 'embed', join(root, 'scripts/wasi/wit'), '--world', 'lasm', coreFile, '-o', embedded], { stdio: 'inherit' });
  execFileSync(wasmTools, ['component', 'new', embedded, '--adapt', `wasi_snapshot_preview1=${adapter}`, '-o', out], { stdio: 'inherit' });
  execFileSync(wasmTools, ['validate', out], { stdio: 'inherit' });
  return readFileSync(out);
}
try {
  const template = makeTemplate(component(core), readFileSync(core));
  if (!checks.length) {
    writeFileSync(templateFile, template);
    console.log(`Wrote ${templateFile} (${template.length} bytes, sha256 ${sha(template)})`);
  } else {
    if (Buffer.compare(Buffer.from(template), readFileSync(templateFile)) !== 0)
      throw new Error('src/wasi/component/proxy-template.wasm is stale: run scripts/wasi/make-component-template.mjs');
    for (const built of checks) {
      // Builds append their licence notices as a top-level custom section (src/notices.mjs).
      const { customSections, noticesSectionName, withoutCustomSection } = await import('../../src/notices.mjs');
      const shipped = readFileSync(built), coreFile = join(work, 'core.wasm');
      if (!customSections(shipped).some(section => section.name === noticesSectionName)) throw new Error(`${built} has no ${noticesSectionName} section`);
      const bytes = withoutCustomSection(shipped, noticesSectionName);
      writeFileSync(coreFile, extractCore(bytes));
      if (Buffer.compare(component(coreFile), bytes) !== 0) throw new Error(`${built} differs from wasm-tools' component for its core module`);
      console.log(`${built}: identical to wasm-tools component new`);
    }
    console.log('The component template is current.');
  }
} finally { rmSync(work, { recursive: true, force: true }); }
