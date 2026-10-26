// WASI targets (docs/WASI.md): `lasm build --target wasi|fastly`. The Node
// build's compiled program relinked as a standard WASI command module
// (wasi-link.mjs, cached per Node build), written where each platform's tools
// expect it.
//   wasi:   wasi/main.wasm, for wasmtime, wasmer, Node's node:wasi, Spin (wagi)
//           and any wasi_snapshot_preview1 host.
//   fastly: bin/main.wasm and pkg/<name>.tar.gz, the layout `fastly compute
//           serve|deploy` uses, and fastly.toml when the project has none.
import { mkdirSync, readFileSync, writeFileSync, copyFileSync, existsSync, rmSync, renameSync, readdirSync, statSync } from 'node:fs';
import { basename, dirname, join, relative, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createHash } from 'node:crypto';
import { linkWasiProgram, wasiLinkSettings, wasiSources } from './wasi-link.mjs';
import { noticesSectionName, targetNotices, withCustomSection } from '../notices.mjs';

const here = fileURLToPath(new URL('./', import.meta.url));
const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');
// The source date Lasm's reproducible builds use (scripts/full-lean and the link toolchain).
const sourceDate = new Date(315532800 * 1000);

export const wasiTargets = {
  wasi: { label: 'WASI', summary: 'WASI command module: wasi/main.wasm (wasmtime, wasmer, node:wasi, Spin; Lasm.Fetch serves one CGI request per run)',
    output: 'wasi' },
  fastly: { label: 'Fastly Compute', summary: 'Fastly Compute: bin/main.wasm and pkg/<name>.tar.gz (fastly compute serve|deploy; fastly.toml when the project has none)',
    output: 'bin' },
  'wasi-http': { label: 'wasi-http', summary: 'wasi-http component: wasi-http/main.wasm (wasmtime serve, Spin; Lasm.Fetch serves each request, fetch uses outgoing-handler)',
    output: 'wasi-http' },
};

/** The program's cache identity: the Node build, the edge runtime, the link
 * toolchain, the WASI host sources and the target's link settings. */
export function wasiProgramKey({ result, edge, toolchain, target }) {
  return sha256(JSON.stringify({ schema: 1, target, node: result.signature, runtime: edge.identity, settings: wasiLinkSettings[target],
    toolchain: toolchain?.toolchain ?? null, sources: Object.fromEntries(wasiSources.map(file => [file, sha256(readFileSync(join(here, file)))])) }));
}
// WASI programs are cached beside the Node build's cache entry, one per target.
const cacheRoot = (result, target) => join(dirname(dirname(result.cached)), 'wasi', target);
export function cachedWasiProgram(result, target, key) {
  const directory = join(cacheRoot(result, target), key);
  try {
    const meta = JSON.parse(readFileSync(join(directory, 'program.json'), 'utf8'));
    if (meta.key !== key || sha256(readFileSync(join(directory, 'main.wasm'))) !== meta.sha256) return null;
    return { directory, meta };
  } catch { return null; }
}

/** Links (on a cache miss) and caches the program. */
export function linkCachedWasiProgram({ result, nodeRuntime, edge, toolchain, target, key, verbose = false }) {
  if (!result.linkWork) throw new Error('The WASI build needs the Node build\'s link inputs (internal error)');
  const root = cacheRoot(result, target), directory = join(root, key), staging = join(root, `.${key}.${process.pid}.partial`);
  rmSync(staging, { recursive: true, force: true });
  let link;
  try { link = linkWasiProgram({ toolchain, nodeRuntime, edge, linkWork: result.linkWork, out: join(staging, '.link'), target, verbose }); }
  catch (error) { rmSync(staging, { recursive: true, force: true }); throw error; }
  copyFileSync(link.program, join(staging, 'main.wasm'));
  rmSync(join(staging, '.link'), { recursive: true, force: true });
  const meta = { key, target, sha256: sha256(readFileSync(join(staging, 'main.wasm'))) };
  writeFileSync(join(staging, 'program.json'), JSON.stringify(meta, null, 2) + '\n');
  for (const entry of readdirSync(root)) if (entry !== key && !entry.startsWith('.')) rmSync(join(root, entry), { recursive: true, force: true });
  rmSync(directory, { recursive: true, force: true });
  renameSync(staging, directory);
  return { directory, meta };
}

/** The Fastly service name: the project's package name, as Fastly allows. */
export function fastlyName(projectDirectory) {
  const file = join(projectDirectory, 'package.json');
  const name = existsSync(file) ? JSON.parse(readFileSync(file, 'utf8')).name : undefined;
  return String(name ?? basename(projectDirectory)).toLowerCase().replace(/^@[^/]+\//, '').replace(/[^a-z0-9_-]+/g, '-').replace(/^-+|-+$/g, '') || 'lasm-app';
}
/** fastly.toml for Lasm projects: `fastly compute build` runs Lasm. */
export function fastlyToml(name, build = 'npm run build:fastly') {
  return `# Fastly Compute (Lasm): \`${build}\` writes bin/main.wasm and pkg/${name}.tar.gz.
# Run locally with \`fastly compute serve\` (Fastly's Viceroy); deploy with
# \`fastly compute deploy\`. See https://github.com/Millillion/lasm/blob/main/docs/deploy/fastly.md
manifest_version = 3
name = "${name}"
description = "A Lean program compiled to WebAssembly by Lasm"
authors = []
language = "other"

[scripts]
build = "${build}"
`;
}

const generatedToml = '# Fastly Compute (Lasm):';
/** Writes `pkg/<name>.tar.gz` as `fastly compute pack` does: <name>/fastly.toml and <name>/bin/main.wasm. */
async function writeFastlyPackage(projectDirectory, name, wasm, notices) {
  const tar = await import('tar');
  const staging = join(projectDirectory, 'pkg', `.${name}.${process.pid}`);
  rmSync(staging, { recursive: true, force: true });
  mkdirSync(join(staging, name, 'bin'), { recursive: true });
  copyFileSync(join(projectDirectory, 'fastly.toml'), join(staging, name, 'fastly.toml'));
  copyFileSync(wasm, join(staging, name, 'bin', 'main.wasm'));
  // The licence texts travel with the package (they are also inside main.wasm).
  copyFileSync(notices, join(staging, name, 'THIRD_PARTY_NOTICES.txt'));
  const file = join(projectDirectory, 'pkg', `${name}.tar.gz`);
  try {
    await tar.create({ gzip: { level: 9 }, file, cwd: staging, portable: true, mtime: sourceDate, noDirRecurse: true },
      [name, `${name}/fastly.toml`, `${name}/THIRD_PARTY_NOTICES.txt`, `${name}/bin`, `${name}/bin/main.wasm`]);
  } finally { rmSync(staging, { recursive: true, force: true }); }
  return file;
}

/** Writes the target's output; returns { output, wasm, info }. */
export async function writeWasiOutput({ target, source, projectDirectory, result, edge, program, output, log = console.error, cacheHit = false }) {
  const spec = wasiTargets[target];
  if (!spec) throw new Error(`Unknown WASI target ${target}`);
  const destination = resolve(output ?? join(projectDirectory, spec.output));
  if (destination === resolve(projectDirectory) || !relative(destination, source).startsWith('..'))
    throw new Error('The WASI output directory must not contain the Lean sources');
  const infoName = target === 'fastly' ? 'lasm-build-info.json' : 'build-info.json';
  // The output directory belongs to Lasm: replace only an earlier WASI build
  // (Fastly: bin/ may also hold an earlier main.wasm of another toolchain).
  if (existsSync(destination)) {
    let owned = false;
    try { owned = JSON.parse(readFileSync(join(destination, infoName), 'utf8')).profile === 'wasi'; } catch { /* not ours */ }
    if (!owned && target === 'fastly') owned = readdirSync(destination).every(entry => entry === 'main.wasm');
    if (!owned) throw new Error(`${destination} exists and is not a Lasm WASI build; remove it or move it`);
  }
  const staging = destination + '.lasm-staging';
  rmSync(staging, { recursive: true, force: true });
  mkdirSync(staging, { recursive: true });
  // Licences (src/notices.mjs): THIRD_PARTY_NOTICES.txt, and the same text inside
  // main.wasm (a custom section), which is what every WASI platform deploys.
  const notices = targetNotices(readFileSync(join(result.output, 'THIRD_PARTY_NOTICES.txt'), 'utf8'), target, { label: spec.label });
  const wasmBytes = withCustomSection(readFileSync(join(program.directory, 'main.wasm')), noticesSectionName, notices);
  writeFileSync(join(staging, 'main.wasm'), wasmBytes);
  writeFileSync(join(staging, 'THIRD_PARTY_NOTICES.txt'), notices);
  const info = { schema: 1, target, profile: 'wasi', abi: 'wasi_snapshot_preview1', nodeBuildSignature: result.signature, lean: result.lean,
    edgeRuntime: edge.manifest.files, link: wasiLinkSettings[target], programKey: program.meta.key, wasm: 'main.wasm', sha256: sha256(wasmBytes) };
  writeFileSync(join(staging, infoName), JSON.stringify(info, null, 2) + '\n');
  rmSync(destination, { recursive: true, force: true });
  mkdirSync(dirname(destination), { recursive: true });
  renameSync(staging, destination);
  const wasm = join(destination, 'main.wasm');
  const bytes = statSync(wasm).size;
  let note = '';
  if (target === 'fastly') {
    const name = fastlyName(projectDirectory);
    const toml = join(projectDirectory, 'fastly.toml');
    if (!existsSync(toml)) writeFileSync(toml, fastlyToml(name, 'npx lasm build Main.lean --target fastly'));
    const tomlName = /^\s*name\s*=\s*"([^"]+)"/m.exec(readFileSync(toml, 'utf8'))?.[1] ?? name;
    const pkg = await writeFastlyPackage(projectDirectory, tomlName.replace(/[^A-Za-z0-9_-]+/g, '-'), wasm, join(destination, 'THIRD_PARTY_NOTICES.txt'));
    note = `; package ${relative(process.cwd(), pkg) || pkg}; run locally with fastly compute serve`;
  } else if (target === 'wasi-http') note = '; serve it with wasmtime serve or Spin (see docs/WASI.md)';
  else note = '; run it with wasmtime, wasmer or node:wasi (see docs/WASI.md)';
  log(`${cacheHit ? 'Reused' : 'Built'} ${relative(process.cwd(), source) || source} for ${spec.label}: ${relative(process.cwd(), wasm) || wasm}`
    + ` (${(bytes / 1048576).toFixed(2)} MiB${note})`);
  return { output: destination, wasm, info };
}
