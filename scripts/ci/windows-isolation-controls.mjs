import assert from 'node:assert/strict';
import { copyFileSync, cpSync, existsSync, mkdirSync, mkdtempSync, readFileSync, writeFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { tmpdir } from 'node:os';
import { spawnSync } from 'node:child_process';
import { randomUUID } from 'node:crypto';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
import { verifyNativeProgram } from '../../src/native-program.mjs';
import { windowsIsolated } from './windows-isolation.mjs';

await ensureResourceGuard();
assert.equal(process.platform, 'win32');
await verifyNativeProgram(process.execPath);
const root = mkdtempSync(join(tmpdir(), 'lasm windows isolation λ-'));
const nodeDirectory = join(root, 'stock Node'), node = join(nodeDirectory, 'node.exe');
mkdirSync(nodeDirectory); copyFileSync(process.execPath, node);
cpSync(join(dirname(process.execPath), 'node_modules/npm'), join(nodeDirectory, 'node_modules/npm'), { recursive: true, dereference: true });
for (const file of ['npm.cmd', 'npx.cmd']) copyFileSync(join(dirname(process.execPath), file), join(nodeDirectory, file));
const writable = join(root, 'writable 日本語'), readonly = join(root, 'readonly.txt');
mkdirSync(writable); writeFileSync(readonly, 'read-only fixture\n');
const allPackages = join(root, 'all-application-packages.txt');
writeFileSync(allPackages, 'ordinary AppContainer can read this\n');
const acl = spawnSync(join(process.env.SystemRoot, 'System32/icacls.exe'),
  [allPackages, '/grant:r', '*S-1-15-2-1:RX', '/Q'], { encoding: 'utf8' });
assert.ifError(acl.error); assert.equal(acl.status, 0, acl.stderr);
for (const name of ['home', 'tmp']) mkdirSync(join(writable, name));
const environment = { PATH: nodeDirectory, PATHEXT: '.COM;.EXE;.BAT;.CMD',
  SystemRoot: process.env.SystemRoot, WINDIR: process.env.SystemRoot,
  ComSpec: join(process.env.SystemRoot, 'System32/cmd.exe'),
  HOME: join(writable, 'home'), USERPROFILE: join(writable, 'home'),
  LOCALAPPDATA: join(writable, 'home/AppData/Local'), APPDATA: join(writable, 'home/AppData/Roaming'),
  TMP: join(writable, 'tmp'), TEMP: join(writable, 'tmp'),
  npm_config_cache: join(writable, 'npm-cache'), npm_config_update_notifier: 'false',
  npm_config_audit: 'false', npm_config_fund: 'false' };
for (const path of [environment.LOCALAPPDATA, environment.APPDATA]) mkdirSync(path, { recursive: true });
const denied = [resolve('package.json'), process.env.LASM_RESOURCE_PYTHON, allPackages];
for (const name of ['git.exe', 'python.exe', 'clang.exe', 'cl.exe']) {
  const r = spawnSync('where.exe', [name], { encoding: 'utf8' });
  for (const file of (r.stdout ?? '').trim().split(/\r?\n/).filter(Boolean)) if (existsSync(file)) denied.push(file);
}
assert.ok(denied.length >= 3, 'Require actual preinstalled developer files as denial controls');
const program = join(writable, 'control.mjs');
const profile = 'Lasm.CI.' + randomUUID();
writeFileSync(program, `import assert from 'node:assert/strict';
import {readFileSync,writeFileSync,unlinkSync,mkdirSync,rmSync} from 'node:fs';
import {execFileSync} from 'node:child_process';
import {Worker} from 'node:worker_threads';
import {connect} from 'node:net';
assert.equal(process.arch,${JSON.stringify(process.arch)});
assert.equal(process.env.LOCALAPPDATA,${JSON.stringify(join(environment.LOCALAPPDATA, 'Packages', profile.toLowerCase(), 'AC'))});
assert.equal(readFileSync(${JSON.stringify(readonly)},'utf8'),'read-only fixture\\n');
const denied=${JSON.stringify(denied)};
for(const path of denied) assert.throws(()=>readFileSync(path),e=>['EACCES','EPERM'].includes(e.code),path);
assert.throws(()=>writeFileSync(${JSON.stringify(readonly)},'changed'),e=>['EACCES','EPERM'].includes(e.code));
writeFileSync('write λ.txt','roundtrip 日本語');assert.equal(readFileSync('write λ.txt','utf8'),'roundtrip 日本語');unlinkSync('write λ.txt');
mkdirSync('directory λ');rmSync('directory λ');
const wasm=await WebAssembly.instantiate(Uint8Array.from([0,97,115,109,1,0,0,0,1,5,1,96,0,1,127,3,2,1,0,7,10,1,6,97,110,115,119,101,114,0,0,10,6,1,4,0,65,42,11]));
assert.equal(wasm.instance.exports.answer(),42);
const worker=new Worker('require("node:worker_threads").parentPort.postMessage(42)',{eval:true});
assert.equal(await new Promise((resolve,reject)=>{worker.once('message',resolve);worker.once('error',reject)}),42);await worker.terminate();
const child=execFileSync(process.execPath,['-e','process.stdout.write("child pipes work")'],{encoding:'utf8',timeout:15000});assert.equal(child,'child pipes work');
const childCache=execFileSync(process.execPath,['-e','process.stdout.write(process.env.LOCALAPPDATA)'],{encoding:'utf8',timeout:15000});assert.equal(childCache,process.env.LOCALAPPDATA,'Child inherits the same default cache root');
execFileSync(process.execPath,['-e','require("node:assert/strict").throws(()=>require("node:fs").readFileSync(process.argv[1]),e=>["EACCES","EPERM"].includes(e.code))',denied[0]],{timeout:15000});
const npm=execFileSync(process.execPath,[${JSON.stringify(join(nodeDirectory, 'node_modules/npm/bin/npm-cli.js'))},'--version'],{encoding:'utf8',timeout:15000}).trim();assert.equal(npm,'11.19.1');
for(const name of ['npm.cmd','npx.cmd']) {
 const command='""'+${JSON.stringify(nodeDirectory)}+'\\\\'+name+'" --version"';
 const version=execFileSync(process.env.ComSpec,['/d','/s','/c',command],{encoding:'utf8',timeout:15000,windowsVerbatimArguments:true}).trim();
 assert.equal(version,npm,name+' stock Windows command shim');
}
if(process.argv[2]==='offline') {
 await new Promise((resolve,reject)=>{const socket=connect({host:'1.1.1.1',port:443});socket.once('error',e=>{try{assert.ok(['EACCES','EPERM'].includes(e.code),e.code);resolve()}catch(e){reject(e)}});socket.once('connect',()=>{socket.destroy();reject(Error('Offline capability allowed TCP'))});socket.setTimeout(10000,()=>{socket.destroy();reject(Error('Timeout does not prove network isolation'))})});
} else {const response=await fetch('https://registry.npmjs.org/npm/latest',{signal:AbortSignal.timeout(20000)});assert.equal(response.status,200);assert.equal((await response.json()).name,'npm');}
console.log(JSON.stringify({passed:true,node:process.version,arch:process.arch,npm,denied,localAppData:process.env.LOCALAPPDATA,offline:process.argv[2]==='offline',jitWasm:true,worker:true,childPipes:true,npmCmd:true,npxCmd:true}));
`);
const output = resolve('.work/windows-isolation-controls'); assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const report = { scope: 'Native LPAC controls only; no Lean application acceptance', platform: process.platform + '-' + process.arch, root, phases: [] };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n'); save();
const positive = windowsIsolated({ disposableRoot: root, reads: [nodeDirectory], writes: [writable],
  lessPrivileged: false, control: 'ordinary-appcontainer-sentinel', offline: true,
  command: [node, '-e', `require('node:assert/strict').equal(require('node:fs').readFileSync(${JSON.stringify(allPackages)},'utf8'),'ordinary AppContainer can read this\\n')`],
  cwd: writable, environment, timeoutSeconds: 30 }, join(output, 'ordinary.json'));
report.ordinaryAppContainerSentinel = positive; save(); assert.equal(positive.code, 0, positive.stderr);
for (const phase of ['online', 'offline']) {
  const actual = windowsIsolated({ profile, disposableRoot: root, reads: [nodeDirectory, readonly], writes: [writable],
    command: [node, program, phase], cwd: writable, environment, offline: phase === 'offline', timeoutSeconds: 120 }, join(output, phase + '.json'));
  report.phases.push({ phase, ...actual }); save(); assert.equal(actual.code, 0, actual.stderr);
  assert.equal(JSON.parse(actual.stdout).passed, true);
}
report.passed = true; save(); console.log(JSON.stringify(report, null, 2));
