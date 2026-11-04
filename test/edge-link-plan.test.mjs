// The edge link plan (src/edge/edge-link.mjs linkEdgeProgram) with a stand-in
// toolchain (test/fixtures/link-stand-ins): which application objects are
// relinked, the Lasm.JS edge glue, the compact initializer wrappers, the export
// list and the em++ flags per suspension mode, and the Node link driver's
// inputs (members of a previous link in the dev profile). The real edge link is
// checked by the edge workflows and scripts/edge/compare-edge-link.mjs.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, readFileSync, writeFileSync, existsSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { tmpdir } from 'node:os';
import { fileURLToPath } from 'node:url';
import { linkEdgeProgram, withoutIncludePaths, provisionEdgeLinker, edgeLinkSettings, edgeRecipe, edgeRecipeHas, edgeRecipeMode, asyncifyStackBytes } from '../src/edge/edge-link.mjs';
import { compactInitializerWrappers } from '../src/edge/edge-initializers.mjs';
import { responseFile } from '../src/platform.mjs';
import { installTools, wasmObject, archive, temporaryDirectory } from './fixtures/link-stand-ins/toolchain.mjs';
import { registerProgram } from './fixtures/link-stand-ins/programs.mjs';

const posix = process.platform !== 'win32';
const here = fileURLToPath(new URL('../src/edge/', import.meta.url));
let unique = 0;

function fixture({ plan = true, js = true, wrappers = true, exportsList = ['_main', '_malloc', '_free', '_lasm_js_call', '_l_export'], libraries } = {}) {
  const base = temporaryDirectory('lasm-edge-plan-');
  const tools = installTools(join(base, 'sdk'), ['llvm-nm', 'wasm-ld', 'llvm-objcopy', 'clang']);
  const executed = [];
  const sdk = { prefix: tools.prefix, env: { SDK_ENV: 'yes', LASM_STAND_IN_SDK: '1' }, execute(tool, args, options) {
    executed.push({ tool, args, options });
    const output = args[args.indexOf('-o') + 1];
    if (tool === 'emcc') writeFileSync(output, wasmObject({ functions: [{ name: `compiled_${unique++}` }] }));
  } };
  const linkWork = join(base, 'link'), out = join(base, 'out');
  mkdirSync(linkWork, { recursive: true });
  const object = (name, spec) => { const file = join(linkWork, name); mkdirSync(dirname(file), { recursive: true }); writeFileSync(file, wasmObject(spec)); return file; };
  // Distinct content per fixture: the edge link caches llvm-nm listings by content.
  const tag = `${process.pid}_${unique++}`;
  const main = object('module-0.o', { functions: [{ name: '__main_argc_argv', refs: ['initialize_Main'] }, { name: `initialize_Main` }, { name: `tag_${tag}` }] });
  const jsGlue = object('lasm-js.o', { functions: [{ name: 'lasm_js_available' }, { name: `js_${tag}` }] });
  const marker = object('reachability.o', { functions: [{ name: 'lasm_lookup_lean_symbol' }] });
  const member = object('libInit-112.lasm-member.o', { functions: [{ name: 'initialize_Init' }] });
  const wrapperObjects = wrappers ? [0, 1, 2, 3].map(part => object(`initializers-${part}.o`, { functions: [{ name: `wrapper_${part}_${tag}` }] })) : [];
  // A path the response file quotes and escapes; names that only contain the glue marker.
  const second = object(join('with "quote" and space', 'module-1.o'), { functions: [{ name: `l_helper_${tag}` }, { name: 'xlasm_js_available' }, { name: 'lasm_js_available_x' }] });
  writeFileSync(join(linkWork, 'link.rsp'), responseFile([main, ...(js ? [jsGlue] : []), '-Wl,--wrap=initialize_Main', marker, member,
    ...wrapperObjects.slice(0, 2), '-Wl,--wrap=initialize_Init', ...wrapperObjects.slice(2), second, '-Oz', '-sMEMORY64=1', '-o', 'program.cjs']));
  writeFileSync(join(linkWork, 'exports.json'), JSON.stringify(exportsList) + '\n');
  writeFileSync(join(linkWork, 'application-pre.js'), 'Module.lasmLeanVersion = "4.35.0";\n');
  if (plan) writeFileSync(join(linkWork, 'initialization-plan.json'), JSON.stringify({ schema: 1, closure: ['initialize_Main', 'initialize_Init', `initialize_X${tag}`],
    keep: ['initialize_Main'], calls: { initialize_Main: ['initialize_Init'], initialize_Init: [] } }) + '\n');
  const nodeRuntime = { directory: join(base, 'node-runtime'), identity: `runtime-${tag}`,
    manifest: { libraries: libraries ?? ['lib/libInit.a', 'lib/liblasmsymbols.a', 'lib/libleanrt.a'] } };
  const edge = { libraries: { 'libleanrt.a': join(base, 'edge', 'libleanrt.a'), 'liblasmjsedge.a': join(base, 'edge', 'liblasmjsedge.a') } };
  return { base, tools, sdk, executed, linkWork, out, nodeRuntime, edge, objects: { main, jsGlue, marker, member, wrapperObjects, second } };
}

const commonFlags = (f, suspend) => [
  '-Oz', '--output-eol=linux', '-fwasm-exceptions', '-sMEMORY64=2', '-sMALLOC=mimalloc', `-sEXPORTED_FUNCTIONS=@${join(f.out, 'exports.json')}`,
  '-sMODULARIZE=1', '-sEXPORT_ES6=1', '-sENVIRONMENT=web', '-sEXIT_RUNTIME=0', '-sFILESYSTEM=0', '-sALLOW_MEMORY_GROWTH=1', '-sINITIAL_MEMORY=4194304',
  '-sMAXIMUM_MEMORY=2147483648', '-sSTACK_SIZE=1048576', '-sEXPORTED_RUNTIME_METHODS=callMain,HEAPU8,HEAPU32', '-sDYNAMIC_EXECUTION=0',
  '-sINCOMING_MODULE_JS_API=instantiateWasm,noInitialRun,print,printErr,onAbort', '-sDEFAULT_LIBRARY_FUNCS_TO_INCLUDE=$stackSave,$stackRestore',
  '-Wl,--export-if-defined=__cpp_exception', '-Wno-experimental', `-Wl,-Map=${join(f.out, 'program.map')}`, '-Wl,--start-group',
  f.edge.libraries['libInit.a'] ?? join(f.nodeRuntime.directory, 'lib', 'libInit.a'), f.edge.libraries['libleanrt.a'], '-Wl,--end-group',
  '--pre-js', join(f.linkWork, 'application-pre.js'), '--pre-js', join(here, 'edge-pre.js'), '--js-library', join(here, 'edge-library.js'),
  ...(suspend === 'jspi' ? ['-sJSPI', "-sJSPI_EXPORTS=['lasm_edge_pump','main']"] : []),
  ...(suspend === 'asyncify' ? ['-sASYNCIFY', '-sASYNCIFY_STACK_SIZE=1048576'] : []),
  '-o', join(f.out, 'program.mjs')];

test('the edge link relinks the application objects with the edge glue and compact initializers (emcc driver)', { skip: !posix }, () => {
  const f = fixture();
  const result = linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out });
  assert.deepEqual(result, { program: join(f.out, 'program.mjs'), wasm: join(f.out, 'program.wasm'), usesJs: true, suspend: 'jspi', driver: 'emcc' });
  // The compact wrappers replace the Node build's wrapper objects, at the first one's place.
  const compactSource = join(f.out, 'initializers-compact.c'), compactObject = join(f.out, 'initializers-compact.o');
  assert.equal(readFileSync(compactSource, 'utf8'), compactInitializerWrappers(JSON.parse(readFileSync(join(f.linkWork, 'initialization-plan.json'), 'utf8'))));
  const [compile, link] = f.executed;
  assert.equal(f.executed.length, 2, 'the precompiled Lasm.JS glue is not compiled');
  assert.deepEqual(compile, { tool: 'emcc', args: ['-O2', '-DNDEBUG', '-pthread', '-fwasm-exceptions', '-fPIC', '-DLEAN_EMSCRIPTEN', '-sMEMORY64=1',
    '-ffunction-sections', '-fdata-sections', '-I', join(f.nodeRuntime.directory, 'include'), '-c', compactSource, '-o', compactObject],
  options: { stdio: ['ignore', 'pipe', 'pipe'], env: { SDK_ENV: 'yes', LASM_STAND_IN_SDK: '1', EMCC_CORES: '1' }, timeout: 600_000 } });
  const objects = [f.objects.main, '-Wl,--wrap=initialize_Main', compactObject, '-Wl,--wrap=initialize_Init', f.objects.second];
  const args = [...objects, '-Wl,--wrap=lean_io_mark_end_initialization', f.edge.libraries['liblasmjsedge.a'], ...commonFlags(f, 'jspi')];
  assert.deepEqual(link, { tool: 'em++', args, options: { stdio: ['ignore', 'pipe', 'pipe'], env: { SDK_ENV: 'yes', LASM_STAND_IN_SDK: '1', EMCC_CORES: '1' }, timeout: 3_600_000, maxBuffer: 64 << 20 } });
  // Lasm.JS's Node exports are replaced by the edge pump and the edge glue's sync entry.
  assert.equal(readFileSync(join(f.out, 'exports.json'), 'utf8'), JSON.stringify(['_main', '_malloc', '_free', '_l_export', '_lasm_edge_pump', '_lasm_js_edge_sync']) + '\n');
  const recorded = readFileSync(join(f.out, 'link-args.json'), 'utf8');
  assert.deepEqual(JSON.parse(recorded), { settings: edgeLinkSettings, suspend: 'jspi', driver: 'emcc', args });
  assert.ok(recorded.startsWith('{\n "settings": {\n  "memory64": 2,') && recorded.endsWith('}\n'));
  // The listings of unchanged objects are reused; the compact object by content.
  const listed = f.tools.calls('llvm-nm').length;
  assert.equal(listed, 7, 'every application object is listed once');
  f.executed.length = 0;
  linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: join(f.base, 'again'), verbose: true });
  assert.equal(f.tools.calls('llvm-nm').length, listed);
  assert.deepEqual(f.executed.map(item => item.tool), ['em++'], 'the compact wrappers are not compiled again');
  assert.deepEqual(readFileSync(join(f.base, 'again', 'initializers-compact.o')), readFileSync(compactObject));
  assert.equal(f.executed[0].options.stdio, 'inherit');
});

test('edge link without Lasm.JS, without a plan, and with Asyncify or no suspension', { skip: !posix }, () => {
  const f = fixture({ js: false, plan: false, exportsList: ['_main', '_main', '_lasm_js_x'] });
  const result = linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out, suspend: 'asyncify' });
  assert.equal(result.usesJs, false);
  assert.equal(result.suspend, 'asyncify');
  assert.equal(readFileSync(join(f.out, 'exports.json'), 'utf8'), '["_main","_lasm_edge_pump"]\n');
  const [link] = f.executed;
  assert.equal(f.executed.length, 1);
  // Without a plan the Node build's wrappers are linked as they are.
  assert.deepEqual(link.args, [f.objects.main, '-Wl,--wrap=initialize_Main', ...f.objects.wrapperObjects.slice(0, 2), '-Wl,--wrap=initialize_Init',
    ...f.objects.wrapperObjects.slice(2), f.objects.second, '-Wl,--wrap=lean_io_mark_end_initialization', ...commonFlags(f, 'asyncify')]);
  assert.equal(existsSync(join(f.out, 'initializers-compact.c')), false);
  assert.equal(asyncifyStackBytes, 1048576);

  const g = fixture({ wrappers: false });
  linkEdgeProgram({ sdk: g.sdk, nodeRuntime: g.nodeRuntime, edge: g.edge, linkWork: g.linkWork, out: g.out, suspend: 'none' });
  assert.equal(existsSync(join(g.out, 'initializers-compact.c')), false, 'a plan without wrapper objects is not used');
  assert.deepEqual(g.executed.at(-1).args.slice(-30), commonFlags(g, 'none').slice(-30));
  assert.ok(!g.executed.at(-1).args.some(arg => /JSPI|ASYNCIFY/.test(arg)));
  assert.throws(() => linkEdgeProgram({ sdk: g.sdk, nodeRuntime: g.nodeRuntime, edge: g.edge, linkWork: g.linkWork, out: g.out, suspend: 'blocking' }),
    { message: 'Unknown edge suspension "blocking"' });
  assert.throws(() => linkEdgeProgram({ sdk: g.sdk, nodeRuntime: g.nodeRuntime, edge: g.edge, linkWork: g.linkWork, out: g.out, optimize: false }),
    { message: 'The edge dev profile needs the Node link driver' });
});

test('an edge runtime without precompiled Lasm.JS glue: emcc compiles it; the Node driver cannot', { skip: !posix }, () => {
  const f = fixture({ plan: false });
  const edge = { libraries: { 'libleanrt.a': f.edge.libraries['libleanrt.a'] } };
  linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge, linkWork: f.linkWork, out: f.out, verbose: true });
  const glue = join(f.out, 'lasm_js_edge.o');
  assert.deepEqual(f.executed[0], { tool: 'emcc', args: ['-O2', '-DNDEBUG', '-DLEAN_EXPORTING', '-DLEAN_EMSCRIPTEN', '-fwasm-exceptions', '-sMEMORY64=1', '-ffp-contract=off',
    '-fPIC', '-ffunction-sections', '-fdata-sections', '-I', join(f.nodeRuntime.directory, 'include'), '-c', join(here, 'lasm_js_edge.c'), '-o', glue],
  options: { stdio: 'inherit', env: { SDK_ENV: 'yes', LASM_STAND_IN_SDK: '1', EMCC_CORES: '1' }, timeout: 600_000 } });
  assert.ok(f.executed[1].args.includes(glue));
  assert.equal(f.executed[1].args[f.executed[1].args.indexOf('-Wl,--wrap=lean_io_mark_end_initialization') + 1], glue);
  assert.throws(() => linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge, linkWork: f.linkWork, out: f.out, driver: 'node' }),
    { message: 'This edge runtime has no precompiled Lasm.JS glue (liblasmjsedge.a); the Node link driver cannot compile it' });
});

test('edge recordings per suspension mode', () => {
  assert.equal(edgeRecipeHas('jspi'), true);
  assert.equal(edgeRecipeHas('asyncify'), true);
  assert.equal(edgeRecipeHas('none'), false);
  assert.equal(edgeRecipeHas('jspi', { link: { modes: { 'edge-asyncify': {} } } }), false);
  assert.equal(edgeRecipeHas('asyncify', { link: { modes: { 'edge-asyncify': {} } } }), true);
  assert.equal(edgeRecipeMode('none'), undefined);
  assert.equal(edgeRecipe(), edgeRecipe(), 'read once');
});

/** The Node link driver with stand-in tools: Emscripten's JavaScript symbol
 * step (a stand-in compiler.mjs) and wasm-ld; the link stops after wasm-ld (the
 * stand-in llvm-objcopy ends it), which is as far as these tests follow it. */
function nodeDriver(f) {
  const emscripten = join(f.base, 'emscripten');
  mkdirSync(join(emscripten, 'tools'), { recursive: true });
  writeFileSync(join(emscripten, 'tools', 'compiler.mjs'), '// stand-in\n');
  registerProgram(join(emscripten, 'tools', 'compiler.mjs'), 'compiler.mjs', f.tools.log);
  mkdirSync(join(f.base, 'edge'), { recursive: true });
  // The edge runtime's archives: Init (one member the program uses, one it does not) and leanrt.
  writeFileSync(f.edge.libraries['libleanrt.a'], archive([['object.o', wasmObject({ functions: [{ name: 'lean_io_mark_end_initialization' }, { name: '__wrap_lean_io_mark_end_initialization' }] })]]));
  f.edge.libraries['libInit.a'] = join(f.base, 'edge', 'libInit.a');
  writeFileSync(f.edge.libraries['libInit.a'], archive([['Init.o', wasmObject({ functions: [{ name: 'initialize_Init' }] })], ['Other.o', wasmObject({ functions: [{ name: 'l_other' }] })]]));
  writeFileSync(f.edge.libraries['liblasmjsedge.a'], archive([['lasm_js_edge.o', wasmObject({ functions: [{ name: 'lasm_js_edge_sync' }] })]]));
  f.edge.sysroot = { cache: join(f.base, 'edge-cache'), directory: 'wasm64-emscripten' };
  f.sdk.toolchain = { shared: 'stand-in', native: 'stand-in' };
  f.sdk.driver = emscripten;
  return f;
}

test('the Node link driver replays the recorded edge link with the program\'s inputs', { skip: !posix }, () => {
  const f = nodeDriver(fixture({ plan: false }));
  assert.throws(() => linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out }), /stand-in toolchain ends here/);
  assert.deepEqual(f.executed, [], 'no emcc or em++');
  const [link] = f.tools.calls('wasm-ld');
  assert.equal(f.tools.calls('wasm-ld').length, 1);
  // The recorded wasm-ld command with this program's objects, glue and archives.
  for (const input of [f.objects.main, f.objects.second, f.edge.libraries['liblasmjsedge.a'], f.edge.libraries['libInit.a'], f.edge.libraries['libleanrt.a'],
    '--wrap=initialize_Main', '--wrap=lean_io_mark_end_initialization', `-Map=${join(f.out, 'program.map')}`]) assert.ok(link.includes(input), input);
  assert.ok(!link.includes(f.objects.jsGlue) && !link.includes(f.objects.marker) && !link.includes(f.objects.member));
  assert.ok(link.includes(join(f.out, 'program.wasm')));
  assert.ok(link.some(arg => arg.startsWith('-L') && arg.startsWith('-L' + join(f.edge.sysroot.cache, 'sysroot', 'lib'))), 'the edge runtime\'s system libraries');
  // The temporary link directory is removed even when the link fails.
  assert.deepEqual(readdir(f.out).filter(name => name.startsWith('node-link')), []);
  // Asyncify replays its own recording.
  f.tools.clear();
  assert.throws(() => linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out, suspend: 'asyncify' }));
  const [asyncLink] = f.tools.calls('wasm-ld');
  assert.ok(asyncLink.includes(f.objects.main));
  assert.equal(JSON.parse(readFileSync(join(f.out, 'link-args.json'), 'utf8')).suspend, 'asyncify');
  assert.ok(JSON.parse(readFileSync(join(f.out, 'link-args.json'), 'utf8')).args.includes('-sASYNCIFY'));

  assert.throws(() => linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out, suspend: 'none' }),
    { message: 'The edge recipe has no recording of the none link' });
  assert.throws(() => linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: { ...f.edge, sysroot: undefined }, linkWork: f.linkWork, out: f.out }),
    { message: 'This edge runtime has no system libraries for the Node link driver' });
});

test('the edge dev profile links the runtime members of the previous full link, else in full', { skip: !posix }, () => {
  const f = nodeDriver(fixture({ plan: false }));
  const libInit = f.edge.libraries['libInit.a'];
  const saved = [];
  const members = { directory: join(f.base, 'members'), record: { liveMembers: { [libInit]: [archiveOffset(libInit, 'Init.o')] }, imports: ['env\0js_x\0function'] },
    save: record => saved.push(record) };
  assert.throws(() => linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out, optimize: false, members }));
  const links = f.tools.calls('wasm-ld');
  assert.equal(links.length, 2, 'the member link failed, then the full link ran');
  const memberFile = join(members.directory, `libInit-${archiveOffset(libInit, 'Init.o')}.lasm-member.o`);
  assert.ok(links[0].includes(memberFile) && !links[0].includes(libInit) && !links[0].includes(f.edge.libraries['libleanrt.a']));
  assert.ok(links[1].includes(libInit) && !links[1].includes(memberFile));
  assert.deepEqual(saved, []);
  // An optimized link, or a record for other archives, links in full at once.
  for (const options of [{ optimize: true, members }, { optimize: false, members: { ...members, record: { ...members.record, liveMembers: { '/elsewhere/libX.a': [1] } } } },
    { optimize: false, members: { ...members, record: { liveMembers: members.record.liveMembers } } }, { optimize: false }]) {
    f.tools.clear();
    assert.throws(() => linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out, ...options }));
    assert.equal(f.tools.calls('wasm-ld').length, 1, JSON.stringify(options));
  }
});

import { readdirSync as readdir } from 'node:fs';
import { archiveIndex } from '../src/application-live-members.mjs';
const archiveOffset = (file, member) => [...archiveIndex(file).names].find(([, name]) => name === member)[0];

test('the compact wrappers are compiled once per plan, tools and runtime; at most 16 are kept', { skip: !posix }, () => {
  const f = fixture();
  const compiles = () => f.executed.filter(item => item.tool === 'emcc').length;
  linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: join(f.base, 'a') });
  assert.equal(compiles(), 1);
  // The same runtime in another directory: reused (its path is not part of the key).
  linkEdgeProgram({ sdk: f.sdk, nodeRuntime: { ...f.nodeRuntime, directory: join(f.base, 'elsewhere') }, edge: f.edge, linkWork: f.linkWork, out: join(f.base, 'b') });
  assert.equal(compiles(), 1);
  // Other compiler tools or another runtime: compiled again.
  linkEdgeProgram({ sdk: { ...f.sdk, driverIdentity: 'other-tools' }, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: join(f.base, 'c') });
  assert.equal(compiles(), 2);
  linkEdgeProgram({ sdk: { ...f.sdk, driverIdentity: 'other-tools' }, nodeRuntime: { ...f.nodeRuntime, identity: 'other-runtime' }, edge: f.edge, linkWork: f.linkWork, out: join(f.base, 'd') });
  assert.equal(compiles(), 3);
  // Seventeen other plans: the first is no longer kept.
  const plan = JSON.parse(readFileSync(join(f.linkWork, 'initialization-plan.json'), 'utf8'));
  for (let index = 0; index < 17; index++) {
    writeFileSync(join(f.linkWork, 'initialization-plan.json'), JSON.stringify({ ...plan, closure: [...plan.closure, `initialize_Extra${index}`] }));
    linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: join(f.base, `plan-${index}`) });
  }
  assert.equal(compiles(), 20);
  writeFileSync(join(f.linkWork, 'initialization-plan.json'), JSON.stringify(plan));
  linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: join(f.base, 'e') });
  assert.equal(compiles(), 21);
  // The most recent plans are still kept.
  writeFileSync(join(f.linkWork, 'initialization-plan.json'), JSON.stringify({ ...plan, closure: [...plan.closure, 'initialize_Extra16'] }));
  linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: join(f.base, 'f') });
  assert.equal(compiles(), 21);
});

test('the Node link driver compiles the compact wrappers with clang; its tools\' output is captured unless verbose', { skip: !posix }, () => {
  const f = nodeDriver(fixture());
  f.sdk.cache = join(f.base, 'emscripten-cache');
  assert.throws(() => linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out }),
    error => /stand-in toolchain ends here/.test(String(error.stderr)));
  const [compile] = f.tools.calls('clang');
  assert.equal(compile[compile.indexOf('-c') + 1], join(f.out, 'initializers-compact.c'));
  assert.ok(compile.includes('-O2') && compile.includes('--sysroot=' + join(f.sdk.cache, 'sysroot')));
  assert.ok(f.tools.calls('wasm-ld')[0].includes(join(f.out, 'initializers-compact.o')));
  assert.deepEqual(f.executed, []);
  // --verbose: the tools write to the terminal.
  assert.throws(() => linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out, verbose: true }),
    error => error.stderr == null && error.status === 1);
});

test('the edge linker: the link toolchain when the edge runtime carries what the Node driver needs, else the SDK', async () => {
  const host = { platform: 'plan9', arch: 'mips' };
  const toolchain = /Your host is plan9-mips, which is not supported/, sdk = /Managed compiler SDK .* is not implemented for plan9-mips/;
  const edge = { sysroot: { cache: '/c', directory: 'd' }, libraries: { 'liblasmjsedge.a': '/e/liblasmjsedge.a' } };
  await assert.rejects(provisionEdgeLinker(edge, host, {}), toolchain);
  await assert.rejects(provisionEdgeLinker(edge, host, {}, 'asyncify'), toolchain);
  await assert.rejects(provisionEdgeLinker(edge, host), toolchain);
  await assert.rejects(provisionEdgeLinker(edge, host, { LASM_LINK_DRIVER: 'emcc' }), sdk);
  await assert.rejects(provisionEdgeLinker(edge, host, {}, 'none'), sdk);
  await assert.rejects(provisionEdgeLinker({ ...edge, sysroot: undefined }, host, {}), sdk);
  await assert.rejects(provisionEdgeLinker({ ...edge, libraries: {} }, host, {}), sdk);
});

test('llvm-nm listings are kept for the 512 most recent objects', { skip: !posix }, () => {
  const f = fixture({ plan: false });
  const many = Array.from({ length: 520 }, (_, index) => {
    const file = join(f.linkWork, 'many', `module-${index}.o`);
    mkdirSync(dirname(file), { recursive: true });
    writeFileSync(file, wasmObject({ functions: [{ name: `l_many_${process.pid}_${index}` }] }));
    return file;
  });
  writeFileSync(join(f.linkWork, 'link.rsp'), responseFile(many));
  linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: join(f.base, 'a') });
  assert.equal(f.tools.calls('llvm-nm').length, 520);
  f.tools.clear();
  // The last 512 are listed already; the first eight were evicted, and listing them evicts others in turn.
  linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: join(f.base, 'b') });
  assert.deepEqual(f.tools.calls('llvm-nm').slice(0, 8).map(args => args.at(-1)), many.slice(0, 8));
  f.tools.clear();
  writeFileSync(join(f.linkWork, 'link.rsp'), responseFile(many.slice(-500)));
  linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: join(f.base, 'c') });
  assert.equal(f.tools.calls('llvm-nm').length, 0, 'recently listed objects are not listed again');
});

// Found by the metamorphic determinism relation (scripts/tooling/metamorphic.mjs):
// dev edge and browser glue named each --pre-js file by its absolute path (the
// project's work directory, a per-build UUID, the install directory), so two
// clean dev builds differed and the output carried local paths.
test('edge glue keeps only the file names of included files', { skip: !posix }, () => {
  const glue = '// include: /home/u/app/.lake/lasm/applications/k/.build-1b2c/application-pre.js\nModule.a = 1;\n'
    + '// end include: /home/u/app/.lake/lasm/applications/k/.build-1b2c/application-pre.js\n// include: C:\\npm\\@lasm\\cli\\src\\edge\\edge-pre.js\n'
    + 'var s = "// include: /not/a/comment.js";\n';
  const portable = '// include: application-pre.js\nModule.a = 1;\n// end include: application-pre.js\n// include: edge-pre.js\n'
    + 'var s = "// include: /not/a/comment.js";\n';
  assert.equal(withoutIncludePaths(glue), portable);
  // linkEdgeProgram applies it to the glue the link wrote, and leaves glue without paths as it is.
  const f = fixture(), execute = f.sdk.execute;
  const write = text => f.sdk.execute = (tool, args, options) => { execute(tool, args, options); if (tool === 'em++') writeFileSync(args[args.indexOf('-o') + 1], text); };
  write(glue);
  const result = linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out });
  assert.equal(readFileSync(result.program, 'utf8'), portable);
  write(portable);
  assert.equal(readFileSync(linkEdgeProgram({ sdk: f.sdk, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: join(f.base, 'again') }).program, 'utf8'), portable);
});
