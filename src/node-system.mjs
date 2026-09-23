import * as os from 'node:os';
import { randomBytes } from 'node:crypto';
import { numbers } from './node-host.mjs';
import { nativeFiles } from './native-files.mjs';
import { nativeInterfaces } from './native-interfaces.mjs';

const string = value => { const bytes = Buffer.from(value); return Buffer.concat([numbers(bytes.length), bytes]); };
const optionalString = value => value == null ? numbers(0) : Buffer.concat([numbers(1), string(value)]);
const empty = Buffer.alloc(0);
function invalidArgument() { return Object.assign(new Error('invalid argument'), { code: 'EINVAL', errno: -22 }); }

export function createNodeSystem() {
  return { dispatch(op, id, argument, bytes) {
    const n = Number(argument);
    switch (op) {
    case 120: return Buffer.from(process.title);
    case 121: process.title = bytes.toString(); return empty;
    case 122: return numbers(Math.trunc(os.uptime()));
    case 123: return numbers(process.pid);
    case 124: return numbers(process.ppid);
    case 125: {
      const cpus = os.cpus();
      return Buffer.concat([numbers(cpus.length), ...cpus.flatMap(cpu => [string(cpu.model),
        numbers(cpu.speed, cpu.times.user, cpu.times.nice, cpu.times.sys, cpu.times.idle, cpu.times.irq)])]);
    }
    case 126: return Buffer.from(os.homedir());
    case 127: return Buffer.from(os.tmpdir());
    case 128: {
      const user = os.userInfo();
      return Buffer.concat([string(user.username), numbers(user.uid, user.gid), optionalString(user.shell), optionalString(user.homedir)]);
    }
    case 129: return nativeFiles().groupInfo(n).then(group => group == null ? numbers(0) : Buffer.concat([
      numbers(1), string(group.name), numbers(group.gid, group.members.length), ...group.members.map(string)]));
    case 130: {
      const entries = nativeFiles().environmentEntries();
      return Buffer.concat([numbers(entries.length), ...entries.flatMap(([key, value]) => [string(key), string(value)])]);
    }
    case 132: {
      const split = bytes.indexOf(0), name = bytes.subarray(0, split).toString();
      if (!name || name.includes('=')) throw invalidArgument();
      nativeFiles().setEnvironment(name, bytes.subarray(split + 1).toString()); return empty;
    }
    case 133: {
      const name = bytes.toString();
      if (!name || name.includes('=')) throw invalidArgument();
      nativeFiles().unsetEnvironment(name); return empty;
    }
    case 134: return Buffer.from(os.hostname());
    case 135: return numbers(os.getPriority(Number(BigInt.asIntN(32, argument))));
    case 136: {
      // libuv checks the requested range before calling setpriority.
      const priority = Number(bytes.readBigInt64LE());
      if (priority < -20 || priority > 19) throw invalidArgument();
      os.setPriority(Number(BigInt.asIntN(32, argument)), priority); return empty;
    }
    case 137: return Buffer.concat([os.type(), os.release(), os.version(), os.machine()].map(string));
    case 138: {
      const r = process.resourceUsage();
      return numbers(Math.trunc(r.userCPUTime / 1000), Math.trunc(r.systemCPUTime / 1000), r.maxRSS,
        r.sharedMemorySize, r.unsharedDataSize, r.unsharedStackSize, r.minorPageFault, r.majorPageFault,
        r.swappedOut, r.fsRead, r.fsWrite, r.ipcSent, r.ipcReceived, r.signalsCount,
        r.voluntaryContextSwitches, r.involuntaryContextSwitches);
    }
    case 139: return numbers(os.freemem());
    case 140: return numbers(os.totalmem());
    case 141: return numbers(process.constrainedMemory());
    case 142: return numbers(process.availableMemory());
    case 143: return new Promise((resolve, reject) => randomBytes(n, (error, bytes) => error ? reject(error) : resolve(bytes)));
    case 144: return nativeInterfaces();
    default: throw new Error(`Unknown Lean system operation ${op}`);
    }
  } };
}
