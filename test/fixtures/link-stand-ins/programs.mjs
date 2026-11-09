// The stand-in programs: clang, llvm-nm, wasm-ld, wasm-opt, llvm-objcopy and
// Emscripten's JavaScript symbol step, as functions of their arguments and
// environment (runTool), and an interception of node:child_process that runs
// them in-process when a module under test executes one (programs under a
// prefix that installTools registered), with child_process's observable
// behaviour: the environment they get, stdio pipe/inherit/ignore, encoding,
// maxBuffer, and failures (status, stdout, stderr). Any other program runs as usual.
//
// Each run appends { tool, args } to LOG. A file beside LOG `fail-NAME` makes
// that tool fail with its content on stderr; `fail-once-NAME` only its next
// run; `fail-if-NAME` only runs whose arguments contain its first line.
import childProcess from 'node:child_process';
import { syncBuiltinESMExports } from 'node:module';
import { appendFileSync, copyFileSync, existsSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { basename, dirname, join } from 'node:path';
import { compileToObject, expandResponseFiles, linkObjects, nm, parseLinkCommand, programModule } from './toolchain.mjs';
import { wasmImports } from '../../../src/application-live-members.mjs';

export function runTool(name, log, raw, env = {}) {
  const args = expandResponseFiles(raw);
  appendFileSync(log, JSON.stringify({ tool: name, args }) + '\n');
  let stdout = '', stderr = '';
  const fail = (message, status = 1) => ({ status, stdout, stderr: stderr + message });
  for (const kind of ['', 'once-']) {
    const file = join(dirname(log), `fail-${kind}${name}`);
    if (existsSync(file)) { const message = readFileSync(file, 'utf8'); if (kind) rmSync(file); return fail(message); }
  }
  const conditional = join(dirname(log), `fail-if-${name}`);
  if (existsSync(conditional)) {
    const [match, ...message] = readFileSync(conditional, 'utf8').split('\n');
    if (args.join(' ').includes(match)) return fail(message.join('\n'));
  }
  const after = flag => args[args.indexOf(flag) + 1];
  // The SDK's tools run with the SDK's environment (sdk.env, toolchain.env).
  if (name !== 'llvm-nm' && env.LASM_STAND_IN_SDK !== '1') return fail(`${name}: not run with the SDK environment\n`, 3);
  // A chatty linker (LASM_STAND_IN_CHATTY): warnings on stderr, as a large program's link has (not the delivered link).
  if (name === 'wasm-ld' && env.LASM_STAND_IN_CHATTY && !args.some(arg => arg.endsWith('final.map'))) {
    stderr += 'wasm-ld: warning: stand-in diagnostic\n'.repeat(100);
    stdout += 'wasm-ld: stand-in note on stdout\n';
  }
  if (name === 'clang') {
    const source = readFileSync(after('-c'), 'utf8');
    // C that does not compile for Wasm: a diagnostic as clang prints it.
    if (source.includes('#error')) return fail(`${after('-c')}:1:2: error: ${/#error (.*)/.exec(source)[1]}\n1 error generated.\n`
      + (env.LASM_STAND_IN_CHATTY ? 'note: stand-in context\n'.repeat(1000) : ''));
    // A compiler with many warnings (LASM_STAND_IN_WARNINGS): about 100 KiB on stderr, and the compile succeeds.
    if (env.LASM_STAND_IN_WARNINGS) stderr += `${after('-c')}:1:1: warning: stand-in warning\n`.repeat(Math.ceil(100 * 1024 / (after('-c').length + 30)));
    const output = args.includes('-o') ? after('-o') : args.find(arg => arg.startsWith('-o')).slice(2);
    writeFileSync(output, compileToObject(source, args.filter(arg => /^-O[0-3sz]$/.test(arg)).join(' ')));
  } else if (name === 'llvm-nm') {
    try { stdout = nm(args); } catch (error) { return fail(error.message + '\n'); }
  } else if (name === 'llvm-objcopy') {
    // Stops a Node-driver link after wasm-ld: the stand-ins have no Emscripten glue.
    return fail('llvm-objcopy: the stand-in toolchain ends here\n');
  } else if (name === 'wasm-opt') {
    copyFileSync(args[args.indexOf('-o') - 1], after('-o'));
  } else if (name === 'wasm-ld') {
    const command = parseLinkCommand(args);
    if (command.map) {
      let linked;
      // Emscripten's system libraries are not part of the stand-in.
      try { linked = linkObjects({ inputs: command.inputs.filter(({ file }) => existsSync(file)), wrap: command.wrap, roots: command.exports }); }
      catch (error) { return fail(error.stderr ?? String(error)); }
      writeFileSync(command.map, linked.map);
      if (command.whyExtract) writeFileSync(command.whyExtract, linked.whyExtract);
      writeFileSync(command.output, programModule(linked.imports));
    } else {
      // An executable without a map (the WASI link): every object's imports from
      // modules other than env, in input order.
      const imports = [];
      for (const { file } of command.inputs) {
        if (file.endsWith('.a')) continue;
        for (const item of wasmImports(file) ?? []) {
          const [module, field] = item.split('\0');
          if (module !== 'env' && !imports.some(([m, f]) => m === module && f === field)) imports.push([module, field]);
        }
      }
      writeFileSync(command.output, programModule(imports, { exports: ['_start', 'cabi_realloc', 'wasi:http/incoming-handler@0.2.12#handle', 'lasm_extra'] }));
    }
  } else if (name === 'compiler.mjs') {
    // Emscripten's JavaScript symbol step: no JavaScript symbols.
    stdout = JSON.stringify({ deps: {}, extraLibraryFuncs: [], asyncFuncs: [] });
  } else return fail(`stand-in: unknown tool ${name}\n`, 2);
  return { status: 0, stdout, stderr };
}

/** Registered stand-ins: program path → { name, log }. */
const programs = new Map();
export function registerProgram(path, name, log) { programs.set(path, { name, log }); }

function standIn(file, args) {
  const program = programs.get(file);
  if (program) return { ...program, args };
  // Emscripten's JavaScript steps run on the compiler's own runtime: `node SCRIPT ARGS`.
  const script = args.findIndex(arg => programs.has(arg));
  if (script >= 0) return { ...programs.get(args[script]), args: args.slice(script + 1) };
  return undefined;
}

const streams = options => {
  const stdio = options?.stdio ?? 'pipe';
  const list = typeof stdio === 'string' ? [stdio, stdio, stdio] : stdio;
  for (const item of list) if (![undefined, null, '', 'pipe', 'inherit', 'ignore', 'overlapped'].includes(item) && typeof item !== 'number')
    throw Object.assign(new TypeError(`The argument 'stdio' is invalid. Received ${JSON.stringify(item)}`), { code: 'ERR_INVALID_ARG_VALUE' });
  const mode = item => item === 'inherit' || item === 1 || item === 2 ? 'inherit' : item === 'ignore' ? 'ignore' : 'pipe';
  return [mode(list[1]), mode(list[2])];
};

/** What child_process returns or throws for a stand-in's result. */
function outcome(file, args, options, { status, stdout, stderr }, { async = false } = {}) {
  const [out, err] = async ? ['pipe', 'pipe'] : streams(options);
  if (out === 'inherit') process.stdout.write(stdout);
  if (err === 'inherit') process.stderr.write(stderr);
  const encoding = options?.encoding ?? (async ? 'utf8' : 'buffer');
  const value = text => encoding === 'buffer' ? Buffer.from(text) : text;
  const captured = { stdout: out === 'pipe' ? value(stdout) : null, stderr: err === 'pipe' ? value(stderr) : null };
  const maxBuffer = options?.maxBuffer ?? 1024 * 1024;
  if (out === 'pipe' && Buffer.byteLength(stdout) > maxBuffer || err === 'pipe' && Buffer.byteLength(stderr) > maxBuffer)
    return { error: Object.assign(new Error(`spawnSync ${file} ENOBUFS`), { code: 'ENOBUFS', errno: -105, ...captured }), ...captured };
  // execFile's error carries no stdout or stderr (its callback gets them); execFileSync's does.
  if (status !== 0) return { error: Object.assign(new Error(`Command failed: ${[file, ...args].join(' ')}\n${err === 'pipe' ? stderr : ''}`),
    { status, signal: null, ...(async ? { code: status, killed: false } : captured) }), ...captured };
  return { ...captured };
}

/** Run registered stand-ins in-process for every module using node:child_process. */
let installed = false;
export function interceptChildProcess() {
  if (installed) return;
  installed = true;
  const { execFileSync, execFile } = childProcess;
  childProcess.execFileSync = function (file, args = [], options = {}) {
    const tool = standIn(file, args);
    if (!tool) return execFileSync.apply(this, arguments);
    const result = outcome(file, args, options, runTool(tool.name, tool.log, tool.args, options.env ?? process.env));
    if (result.error) throw result.error;
    return result.stdout;
  };
  childProcess.execFile = function (file, args, options, callback) {
    const tool = standIn(file, Array.isArray(args) ? args : []);
    if (!tool) return execFile.apply(this, arguments);
    if (typeof options === 'function') { callback = options; options = {}; }
    const result = outcome(file, args, options, runTool(tool.name, tool.log, tool.args, options?.env ?? process.env), { async: true });
    setImmediate(() => callback(result.error ?? null, result.stdout, result.stderr));
    return { pid: 0, kill() {} };
  };
  syncBuiltinESMExports();
}
