#!/usr/bin/env node
import { runApplicationCli, reportCliError } from '../src/application-cli.mjs';

try { process.exitCode = await runApplicationCli(process.argv.slice(2)); }
catch (error) { reportCliError(error); process.exitCode = 1; }
