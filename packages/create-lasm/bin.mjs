#!/usr/bin/env node
import { main } from './create.mjs';

main().then(code => { process.exitCode = code; }, error => { console.error(error?.message ?? error); process.exitCode = 1; });
