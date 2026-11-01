// Runs an edge-profile Lean program (a `lasm build --target deno` or
// `--target supabase-edge` output) on SpiderMonkey's js shell, for the engine
// differential of scripts/differential/run.mjs (docs/TESTING.md#more-oracles).
//
//   LASM_SM_RUN='{"program":DIR,"env":{...},"args":[...],"jspi":true,"exitFile":FILE}' js -m sm-runner.mjs
//
// (The shell binds scriptArgs only for a script, not for a -m module, so the
// run is described by one environment variable.)
// PROGRAM_DIR holds program.mjs, edge-start.mjs and program.wasm (or
// program.wasm.mjs). The shell is not a web runtime: the few web APIs the edge
// host uses and the shell lacks (TextEncoder, TextDecoder, queueMicrotask,
// atob, btoa, crypto.getRandomValues) are provided here. Standard output is written byte
// exact (putstr); standard error goes out line by line (printErr), so a final
// line without a newline gets one.
/* global print, putstr, printErr, quit, os */

// ---------- the missing web APIs ----------
function utf8Encode(text) {
  const out = [];
  for (let i = 0; i < text.length; i++) {
    let c = text.charCodeAt(i);
    if (c >= 0xd800 && c < 0xdc00 && i + 1 < text.length) {
      const d = text.charCodeAt(i + 1);
      if (d >= 0xdc00 && d < 0xe000) { c = 0x10000 + ((c - 0xd800) << 10) + (d - 0xdc00); i++; }
    }
    if (c >= 0xd800 && c < 0xe000) c = 0xfffd;
    if (c < 0x80) out.push(c);
    else if (c < 0x800) out.push(0xc0 | c >> 6, 0x80 | c & 63);
    else if (c < 0x10000) out.push(0xe0 | c >> 12, 0x80 | c >> 6 & 63, 0x80 | c & 63);
    else out.push(0xf0 | c >> 18, 0x80 | c >> 12 & 63, 0x80 | c >> 6 & 63, 0x80 | c & 63);
  }
  return Uint8Array.from(out);
}
class TextEncoder {
  get encoding() { return 'utf-8'; }
  encode(text = '') { return utf8Encode(String(text)); }
  encodeInto(text, target) {
    // Whole characters only, as the standard requires.
    let read = 0, written = 0;
    for (const ch of String(text)) {
      const bytes = utf8Encode(ch);
      if (written + bytes.length > target.length) break;
      target.set(bytes, written); written += bytes.length; read += ch.length;
    }
    return { read, written };
  }
}
class TextDecoder {
  constructor() { this.pending = []; }
  get encoding() { return 'utf-8'; }
  // WHATWG UTF-8 decoding with replacement; `stream` keeps an incomplete tail.
  decode(input, { stream = false } = {}) {
    const view = input === undefined ? new Uint8Array(0)
      : input instanceof Uint8Array ? input : ArrayBuffer.isView(input) ? new Uint8Array(input.buffer, input.byteOffset, input.byteLength) : new Uint8Array(input);
    const bytes = this.pending.length ? Uint8Array.from([...this.pending, ...view]) : view;
    this.pending = [];
    let out = '', i = 0;
    const push = c => { out += c > 0xffff ? String.fromCharCode(0xd800 + (c - 0x10000 >> 10), 0xdc00 + (c - 0x10000 & 1023)) : String.fromCharCode(c); };
    while (i < bytes.length) {
      const b = bytes[i];
      if (b < 0x80) { push(b); i++; continue; }
      let need = 0, c = 0, lower = 0x80, upper = 0xbf;
      if (b >= 0xc2 && b <= 0xdf) { need = 1; c = b & 31; }
      else if (b >= 0xe0 && b <= 0xef) { need = 2; c = b & 15; if (b === 0xe0) lower = 0xa0; if (b === 0xed) upper = 0x9f; }
      else if (b >= 0xf0 && b <= 0xf4) { need = 3; c = b & 7; if (b === 0xf0) lower = 0x90; if (b === 0xf4) upper = 0x8f; }
      else { push(0xfffd); i++; continue; }
      let j = 1;
      for (; j <= need; j++) {
        if (i + j >= bytes.length) break;
        const x = bytes[i + j];
        if (x < (j === 1 ? lower : 0x80) || x > (j === 1 ? upper : 0xbf)) break;
        c = c << 6 | x & 63;
      }
      if (j > need) { push(c); i += need + 1; continue; }
      if (i + j >= bytes.length && stream) { this.pending = [...bytes.subarray(i)]; break; }
      push(0xfffd); i += j;
    }
    return out;
  }
}
Object.assign(globalThis, {
  TextEncoder, TextDecoder,
  queueMicrotask: fn => { Promise.resolve().then(fn); },
  atob: text => String.fromCharCode(...Uint8Array.fromBase64(String(text).replace(/[\t\n\f\r ]/g, ''))),
  btoa: text => Uint8Array.from(String(text), c => c.charCodeAt(0)).toBase64(),
  // The shell's console has log only; error and warn write to stderr.
  console: { ...globalThis.console, log: (...a) => print(a.join(' ')), info: (...a) => print(a.join(' ')),
    error: (...a) => printErr(a.join(' ')), warn: (...a) => printErr(a.join(' ')), debug: (...a) => printErr(a.join(' ')) },
  crypto: { getRandomValues(array) { for (let i = 0; i < array.length; i++) array[i] = Math.floor(Math.random() * 256); return array; } },
});

// ---------- arguments ----------
const run = JSON.parse(os.getenv('LASM_SM_RUN') ?? '{}');
const { program: programDir, env = {}, args = [], jspi = true } = run;

// ---------- output ----------
const outDecoder = new TextDecoder(), errDecoder = new TextDecoder();
let errText = '';
const writeOut = bytes => { const text = outDecoder.decode(bytes, { stream: true }); if (text) putstr(text); };
const writeErr = bytes => {
  errText += errDecoder.decode(bytes, { stream: true });
  let newline;
  while ((newline = errText.indexOf('\n')) >= 0) { printErr(errText.slice(0, newline)); errText = errText.slice(newline + 1); }
};
// The shell's quit accepts 0–127 only, so the status (0–255) is also written
// to the file run.exitFile, which the harness reads. quit during the module's
// own evaluation reports "Module evaluation not completed": the normal end
// quits from a timer instead; IO.Process.exit quits at once (Lean must stop).
const finish = (code, now = true) => {
  if (errText) { printErr(errText); errText = ''; }
  if (run.exitFile) os.file.writeTypedArrayToFile(run.exitFile, new TextEncoder().encode(String(code)));
  if (now) quit(code & 127); else setTimeout(() => quit(code & 127), 0);
};

// ---------- the program ----------
const file = name => `${programDir}/${name}`;
const { default: createProgram } = await import(file('program.mjs'));
const { startLean } = await import(file('edge-start.mjs'));
let bytes;
try { bytes = os.file.readFile(file('program.wasm'), 'binary'); }
catch { bytes = (await import(file('program.wasm.mjs'))).default; }
const wasmModule = new WebAssembly.Module(bytes);
try {
  const lean = await startLean({ createProgram, wasmModule, env, args, jspi, exit: finish,
    stdout: line => writeOut(new TextEncoder().encode(line + '\n')), stderr: line => writeErr(new TextEncoder().encode(line + '\n')),
    writers: { 1: writeOut, 2: writeErr } });
  finish(Number(lean.lasmExitCode ?? 0) & 255, false);
} catch (error) {
  writeErr(new TextEncoder().encode(`${error?.message ?? error}\n`));
  finish(1, false);
}
