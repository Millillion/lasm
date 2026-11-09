// A stand-in Lasm CLI for test/vite-plugin.test.mjs: `build <source> … --output DIR`
// writes a browser build's manifest, loader and notices, and records how it ran.
import { mkdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
const args = process.argv.slice(2);
const output = args[args.indexOf('--output') + 1];
mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'ran.json'), JSON.stringify({ args, cwd: process.cwd(), CI: process.env.CI, BROWSER: process.env.BROWSER }));
if (process.env.LASM_TEST_CLI_FAIL) { process.stderr.write('x'.repeat(9000) + 'Main.lean:1:0: error: broken\n'); process.exit(1); }
writeFileSync(join(output, 'app.0123456789ab.js'), '/*! The app web app, built by Lasm. */\nexport const name = "app";\n');
writeFileSync(join(output, 'THIRD_PARTY_NOTICES.txt'), process.env.LASM_TEST_NOTICES ?? 'notices text\n');
writeFileSync(join(output, 'lasm-manifest.json'), JSON.stringify({ entry: 'app.0123456789ab.js', ...(process.env.LASM_TEST_NO_NOTICES_FIELD ? {} : { notices: 'THIRD_PARTY_NOTICES.txt' }) }));
