// Licence check of built Lasm outputs (docs/LICENSE_AUDIT.md §11, docs/LICENSING.md).
//   node scripts/license/check-outputs.mjs DIRECTORY… [--expect node,edge,browser,vite,wasi,fastly,wasi-http] [--report FILE]
// Finds every Lasm output under the directories (Node dist/ and edge/WASI
// outputs by build-info.json, browser outputs by lasm-manifest.json, Vite builds
// that CI marks with { generator: 'vite' }) and checks:
//   - THIRD_PARTY_NOTICES.txt is there, starts with Lasm's notices, carries
//     Lasm's MIT licence and Lean's Apache-2.0 licence, and has no GNU MP section
//     or GNU licence text (no copyleft component is linked);
//   - edge outputs: the glue lasm/program.mjs starts with the legal banner and
//     the Wasm carries the notices as its lasm.notices custom section;
//     browser outputs: the loader carries the banner;
//     WASI, Fastly and wasi-http: main.wasm carries the lasm.notices section,
//     the Fastly package (pkg/, when present) holds THIRD_PARTY_NOTICES.txt; wasi-http names the
//     Wasmtime adapter;
//   - no Wasm or JavaScript file contains a copyleft marker (src/notices.mjs).
// node_modules/ and the project's own files are not inspected.
import { existsSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { join, relative, resolve } from 'node:path';
import { gunzipSync } from 'node:zlib';
import { copyleftFindings, customSections, noticesSectionName } from '../../src/notices.mjs';

const read = (file, encoding) => readFileSync(file, encoding);
const walk = (directory, skip = new Set(['node_modules', '.lake', '.git'])) =>
  readdirSync(directory, { withFileTypes: true }).flatMap(entry => entry.isDirectory()
    ? (skip.has(entry.name) ? [] : walk(join(directory, entry.name), skip)) : [join(directory, entry.name)]);

/** The Lasm outputs under `root`: [{ directory, kind }]. */
export function findOutputs(root) {
  const outputs = [];
  for (const file of walk(resolve(root))) {
    const directory = resolve(file, '..');
    if (file.endsWith('/lasm-manifest.json') || file.endsWith('\\lasm-manifest.json')) {
      // CI marks a Vite build's output with { generator: 'vite', target: 'browser' }.
      try { const m = JSON.parse(read(file, 'utf8')); if (m.target === 'browser') outputs.push({ directory, kind: m.generator === 'vite' ? 'vite' : 'browser' }); } catch { /* not ours */ }
    } else if (/[\\/](?:lasm-)?build-info\.json$/.test(file)) {
      let info;
      try { info = JSON.parse(read(file, 'utf8')); } catch { continue; }
      if (info.profile === 'edge') outputs.push({ directory, kind: 'edge', target: info.target });
      else if (info.profile === 'wasi') outputs.push({ directory, kind: info.target, target: info.target });
      else if (info.target === 'node' || existsSync(join(directory, 'program.cjs'))) outputs.push({ directory, kind: 'node' });
    }
  }
  return outputs;
}

const wasmFromModule = text => {
  const base64 = /const text = "([A-Za-z0-9+/=]+)";/.exec(text)?.[1];
  return base64 ? Buffer.from(base64, 'base64') : null;
};

/** Problems with one output ([] when it complies). */
export function checkOutput({ directory, kind }) {
  const problems = [];
  const noticesName = kind === 'vite' ? 'THIRD_PARTY_NOTICES.lasm.txt' : 'THIRD_PARTY_NOTICES.txt';
  const noticesFile = join(directory, noticesName);
  if (!existsSync(noticesFile)) return [`no ${noticesName}`];
  const notices = read(noticesFile, 'utf8');
  if (!notices.startsWith('THIRD-PARTY AND LASM NOTICES\n')) problems.push('THIRD_PARTY_NOTICES.txt was not written by Lasm');
  for (const [what, pattern] of [['Lasm\'s MIT licence', /\n=== Lasm ===\nMIT License\n\nCopyright \(c\) 2026 Jordan Last\n/],
    ['Lean\'s licence', /\n=== Lean ===\n[\s\S]*Apache License/], ['the Lean changes', /\n=== Changes to Lean \(Apache-2\.0 section 4\(b\)\) ===\n/],
    ['Emscripten\'s licence', /\n=== Emscripten ===\n/], ['musl\'s licence', /\n=== musl ===\n/], ['mimalloc\'s licence', /\n=== mimalloc ===\n/]])
    if (!pattern.test(notices)) problems.push(`THIRD_PARTY_NOTICES.txt lacks ${what}`);
  if (/\n=== GNU MP ===\n|GNU LESSER GENERAL PUBLIC LICENSE|GNU GENERAL PUBLIC LICENSE/.test(notices.replace(/\n=== Lake dependenc[\s\S]*$/, '')))
    problems.push('THIRD_PARTY_NOTICES.txt names a GNU-licensed component');
  if (kind === 'wasi-http' && !notices.includes('\n=== Wasmtime proxy adapter ===\n')) problems.push('THIRD_PARTY_NOTICES.txt lacks the Wasmtime adapter');
  const hasNotices = (bytes, name) => {
    const section = customSections(bytes).find(s => s.name === noticesSectionName);
    if (!section) problems.push(`${name} has no ${noticesSectionName} section`);
    else if (Buffer.from(section.payload).toString('utf8') !== notices) problems.push(`${name}'s ${noticesSectionName} section differs from THIRD_PARTY_NOTICES.txt`);
  };
  if (kind === 'edge') {
    const glue = join(directory, 'lasm/program.mjs');
    if (!existsSync(glue) || !read(glue, 'utf8').startsWith('/*! ')) problems.push('lasm/program.mjs has no legal banner');
    const wasm = existsSync(join(directory, 'lasm/program.wasm')) ? read(join(directory, 'lasm/program.wasm'))
      : existsSync(join(directory, 'lasm/program.wasm.mjs')) ? wasmFromModule(read(join(directory, 'lasm/program.wasm.mjs'), 'utf8')) : null;
    if (!wasm) problems.push('no lasm/program.wasm');
    else hasNotices(wasm, 'the program\'s Wasm');
  } else if (kind === 'browser') {
    const manifest = JSON.parse(read(join(directory, 'lasm-manifest.json'), 'utf8'));
    const entry = read(join(directory, manifest.entry), 'utf8');
    if (!/^\/\/ [^\n]*\n\/\*! [\s\S]*?Licence texts: THIRD_PARTY_NOTICES/.test(entry)) problems.push(`${manifest.entry} has no legal banner`);
  } else if (kind === 'vite') {
    // The plugin puts the loader's banner back after minification (src/vite/index.mjs).
    if (!walk(directory).some(file => file.endsWith('.js') && /\/\*! [^\n]*built by Lasm\.[\s\S]*?Licence texts: THIRD_PARTY_NOTICES\.lasm\.txt/.test(read(file, 'utf8'))))
      problems.push('no JavaScript chunk carries the Lasm licence banner');
  } else if (['wasi', 'fastly', 'wasi-http'].includes(kind)) {
    hasNotices(read(join(directory, 'main.wasm')), 'main.wasm');
    if (kind === 'fastly') {
      const pkg = join(directory, '..', 'pkg');
      const archives = existsSync(pkg) ? readdirSync(pkg).filter(name => name.endsWith('.tar.gz')) : [];
      // The package is checked where it is (a copied bin/ may come without pkg/).
      for (const name of archives) if (!gunzipSync(read(join(pkg, name))).includes('/THIRD_PARTY_NOTICES.txt\0'))
        problems.push(`pkg/${name} has no THIRD_PARTY_NOTICES.txt`);
    }
  }
  for (const file of walk(directory)) {
    if (!/\.(?:wasm|mjs|cjs|js)$/.test(file)) continue;
    const found = copyleftFindings(read(file));
    if (found.length) problems.push(`${relative(directory, file)} contains copyleft markers: ${found.join(', ')}`);
  }
  return problems;
}

if (import.meta.url === `file://${process.argv[1]}` || process.argv[1]?.endsWith('check-outputs.mjs')) {
  const args = process.argv.slice(2);
  const option = name => { const at = args.indexOf(name); return at < 0 ? undefined : args.splice(at, 2)[1]; };
  const expect = option('--expect')?.split(',').filter(Boolean) ?? [];
  const reportFile = option('--report');
  if (!args.length) { console.error('Usage: check-outputs.mjs DIRECTORY… [--expect KINDS] [--report FILE]'); process.exit(2); }
  const outputs = args.filter(root => existsSync(root) || console.log(`(no ${root})`)).flatMap(root => findOutputs(root));
  const results = outputs.map(output => ({ ...output, problems: checkOutput(output) }));
  const missing = expect.filter(kind => !outputs.some(output => output.kind === kind));
  for (const result of results) console.log(`${result.problems.length ? 'FAIL' : 'ok  '} ${result.kind.padEnd(9)} ${result.directory}${result.problems.map(p => '\n       ' + p).join('')}`);
  if (missing.length) console.log(`FAIL no ${missing.join(', ')} output found`);
  if (reportFile) writeFileSync(reportFile, JSON.stringify({ schema: 1, results, missing }, null, 2) + '\n');
  const failed = results.filter(result => result.problems.length).length + missing.length;
  console.log(`${results.length} outputs checked, ${failed} failures`);
  process.exit(failed ? 1 : 0);
}
