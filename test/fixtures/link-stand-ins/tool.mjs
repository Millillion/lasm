// The stand-in toolchain (toolchain.mjs) as a program: node tool.mjs NAME LOG ARGS…
// (the shell wrappers that installTools writes). In the test process itself
// the same tools run in-process (programs.mjs intercepts child_process).
import { runTool } from './programs.mjs';

const [name, log, ...args] = process.argv.slice(2);
const { status, stdout, stderr } = runTool(name, log, args, process.env);
process.stdout.write(stdout);
process.stderr.write(stderr);
process.exitCode = status;
