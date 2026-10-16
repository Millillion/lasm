// npm as an artifact source (docs/TOOLCHAIN_SLIMMING.md, Phase 3).
//
// Lasm's tool archives can arrive as files inside npm packages. Each package
// carries the exact archive named by the catalog, byte for byte, so the existing
// SHA-256 and size check, extraction limits, receipts and locks still decide
// what is trusted: npm is only another way to obtain the same bytes, through the
// user's own npm caching, proxy, certificate and registry configuration.
//
// The packed product contains src/npm-tools.json (written by
// scripts/npm-dist/build.mjs). A source checkout has none and always downloads.
//   install: 'optional'  platform package in optionalDependencies (os/cpu/libc)
//            'required'  shared package in dependencies
//            'demand'    never installed; fetched with `npm pack` when a build needs it
import { readFile, lstat, copyFile, mkdir, readdir, rename, rm } from 'node:fs/promises';
import { createReadStream, existsSync } from 'node:fs';
import { createRequire } from 'node:module';
import { createHash } from 'node:crypto';
import { spawn } from 'node:child_process';
import { basename, dirname, join, posix, win32 } from 'node:path';
import { x as extractTar } from 'tar';

export const artifactSourceModes = Object.freeze(['auto', 'npm', 'https']);
const packageName = /^(?:@[a-z0-9][a-z0-9._-]*\/)?[a-z0-9][a-z0-9._-]*$/;
const exactVersion = /^\d+\.\d+\.\d+(?:-[0-9A-Za-z.-]+)?$/;
const archiveFile = /^[A-Za-z0-9][A-Za-z0-9._-]*$/;

/** LASM_ARTIFACT_SOURCE: auto (npm package, else HTTPS), npm (never download
 * directly), https (ignore npm packages, the pre-Phase 3 behavior). */
export function artifactSourceMode(env = process.env) {
  const mode = env.LASM_ARTIFACT_SOURCE || 'auto';
  if (!artifactSourceModes.includes(mode)) throw new Error(`LASM_ARTIFACT_SOURCE must be one of ${artifactSourceModes.join(', ')}.`);
  return mode;
}

export function validateNpmToolManifest(manifest) {
  if (manifest?.schema !== 1 || typeof manifest.artifacts !== 'object' || !manifest.artifacts) throw new Error('Invalid npm tool manifest');
  for (const [sha256, entry] of Object.entries(manifest.artifacts)) {
    if (!/^[a-f0-9]{64}$/.test(sha256) || !packageName.test(entry?.package ?? '') || !exactVersion.test(entry.version ?? '')
        || !archiveFile.test(entry.file ?? '') || !Number.isSafeInteger(entry.bytes) || entry.bytes <= 0
        || !/^sha512-[A-Za-z0-9+/]{86}==$/.test(entry.integrity ?? '') || !['optional', 'required', 'demand'].includes(entry.install)
        || (entry.platform !== undefined && !/^(?:linux|darwin|win32)-(?:x64|arm64)$/.test(entry.platform)))
      throw new Error(`Invalid npm tool manifest entry for ${sha256}`);
  }
  return manifest;
}

let bundledManifest;
/** The manifest packed with this product, or null in a source checkout. */
export async function bundledNpmToolManifest(url = new URL('./npm-tools.json', import.meta.url)) {
  bundledManifest ??= readFile(url, 'utf8').then(text => validateNpmToolManifest(JSON.parse(text)),
    error => { if (error.code === 'ENOENT') return null; throw error; });
  return bundledManifest;
}

/** The archive's file name inside its package (catalog names may omit the extension). */
export const archiveFileName = artifact => artifact.name.endsWith('.' + artifact.format) ? artifact.name : `${artifact.name}.${artifact.format}`;

/** The package entry that carries exactly this artifact, if any. */
export function npmEntryFor(manifest, artifact) {
  const entry = manifest?.artifacts?.[artifact.sha256];
  return entry && entry.bytes === artifact.bytes && entry.file === archiveFileName(artifact) ? entry : null;
}

export const npmSpec = entry => `${entry.package}@${entry.version}`;
export function npmInstallFix(...entries) { return `npm install ${entries.map(entry => typeof entry === 'string' ? entry : npmSpec(entry)).join(' ')}`; }

/** Message for a platform or shared package that npm did not install. */
/** `missing` lists every package of this host that npm did not install, so one
 * command fixes them all. */
export function missingPackageMessage(entry, reason, mode, label, missing = [npmSpec(entry)]) {
  const why = entry.install === 'optional'
    ? 'npm skips platform packages when optional dependencies are omitted (--omit=optional or npm_config_omit=optional), '
      + 'when the lockfile was created on another operating system and lacks this platform (npm/cli#4828), '
      + 'or when the C library is unsupported (Linux requires glibc).'
    : 'The installation is incomplete.';
  return `Lasm's npm package ${npmSpec(entry)} (${label}) ${reason}. ${why} `
    + `Fix: run \`${npmInstallFix(...missing)}\` in the project where Lasm is installed`
    + (entry.install === 'optional' ? ', or reinstall with optional dependencies included (`npm install --include=optional`).' : '.')
    + (mode === 'npm' ? ' LASM_ARTIFACT_SOURCE=npm forbids direct downloads.' : ' Downloading the same verified archive directly instead.');
}

/** Resolve an installed package next to this product (hoisted, nested, pnpm). */
export async function resolveInstalledPackage(entry, { resolveFrom = import.meta.url } = {}) {
  let manifestPath;
  try { manifestPath = createRequire(resolveFrom).resolve(`${entry.package}/package.json`); }
  catch (error) {
    if (error.code === 'MODULE_NOT_FOUND' || error.code === 'ERR_PACKAGE_PATH_NOT_EXPORTED') return { missing: 'is not installed' };
    throw error;
  }
  const metadata = JSON.parse(await readFile(manifestPath, 'utf8'));
  if (metadata.name !== entry.package) return { missing: `resolved to a different package (${metadata.name})` };
  if (metadata.version !== entry.version) return { missing: `is installed at version ${metadata.version}, not ${entry.version}` };
  const file = join(dirname(manifestPath), entry.file);
  let info;
  try { info = await lstat(file); }
  catch (error) { if (error.code === 'ENOENT') return { missing: `lacks ${entry.file}` }; throw error; }
  if (!info.isFile() || info.size !== entry.bytes) return { missing: `has a damaged ${entry.file}` };
  return { directory: dirname(manifestPath), file };
}

/** How to run the user's own npm without a shell. Prefer the npm that started
 * Lasm (npm_execpath under npm/npx), then the npm shipped beside Node, then PATH. */
export function findNpm({ env = process.env, execPath = process.execPath, platform = process.platform, exists = existsSync } = {}) {
  const paths = platform === 'win32' ? win32 : posix, { join: at, dirname: parent, basename: base } = paths;
  const cli = [];
  const invoked = env.npm_execpath;
  if (invoked && paths.isAbsolute(invoked) && /^np[mx]-cli\.js$/.test(base(invoked))) cli.push(at(parent(invoked), 'npm-cli.js'));
  cli.push(platform === 'win32' ? at(parent(execPath), 'node_modules', 'npm', 'bin', 'npm-cli.js')
    : at(parent(execPath), '..', 'lib', 'node_modules', 'npm', 'bin', 'npm-cli.js'));
  for (const file of cli) if (exists(file)) return { command: execPath, args: [file] };
  const pathKey = Object.keys(env).find(key => key.toUpperCase() === 'PATH');
  for (const directory of (pathKey ? env[pathKey] : '').split(platform === 'win32' ? ';' : ':').filter(Boolean)) {
    if (platform !== 'win32') { if (exists(at(directory, 'npm'))) return { command: at(directory, 'npm'), args: [] }; continue; }
    // npm.cmd cannot be spawned without a shell; run the npm-cli.js installed beside it.
    const file = at(directory, 'node_modules', 'npm', 'bin', 'npm-cli.js');
    if (exists(at(directory, 'npm.cmd')) && exists(file)) return { command: execPath, args: [file] };
  }
  return null;
}

async function sha512(file) {
  const hash = createHash('sha512');
  for await (const bytes of createReadStream(file)) hash.update(bytes);
  return 'sha512-' + hash.digest('base64');
}

function runNpm(npm, args, { cwd, env, signal, timeoutMs }) {
  return new Promise((resolve, reject) => {
    const child = spawn(npm.command, [...npm.args, ...args], { cwd, env, signal, windowsHide: true, stdio: ['ignore', 'pipe', 'pipe'],
      timeout: timeoutMs, killSignal: 'SIGKILL' });
    let stdout = '', stderr = '';
    child.stdout.setEncoding('utf8').on('data', text => { stdout = (stdout + text).slice(-65536); });
    child.stderr.setEncoding('utf8').on('data', text => { stderr = (stderr + text).slice(-8192); });
    child.once('error', reject);
    child.once('close', (code, sig) => code === 0 ? resolve(stdout)
      : reject(new Error(`npm ${args[0]} failed (${code ?? sig}): ${stderr.trim().split('\n').slice(-6).join(' | ')}`)));
  });
}

/** Fetch a pinned package with `npm pack` (registry, proxy, CA and cache come from
 * the user's npm configuration), check the tarball against the pinned sha512, and
 * extract only the archive file. Its SHA-256 is checked by the caller. */
export async function fetchNpmPackage(entry, directory, { npm = findNpm(), cwd = process.cwd(), env = process.env, signal,
  timeoutMs = 7_200_000, run = runNpm } = {}) {
  if (!npm) throw new Error('npm was not found (npm_execpath, beside Node, or on PATH)');
  const tarballs = join(directory, 'npm-pack'), unpacked = join(directory, 'npm-unpacked');
  await mkdir(tarballs, { recursive: true }); await mkdir(unpacked, { recursive: true });
  const output = await run(npm, ['pack', npmSpec(entry), '--pack-destination', tarballs, '--json', '--ignore-scripts',
    '--no-audit', '--no-fund', '--loglevel=error'], { cwd, env: { ...env, npm_config_update_notifier: 'false' }, signal, timeoutMs });
  let filename;
  try { filename = JSON.parse(output.slice(output.indexOf('[')))[0].filename; } catch { filename = undefined; }
  const files = await readdir(tarballs);
  if (files.length !== 1 || (filename && basename(filename) !== files[0])) throw new Error(`npm pack ${npmSpec(entry)} produced no single tarball`);
  const tarball = join(tarballs, files[0]);
  if (await sha512(tarball) !== entry.integrity) throw new Error(`npm package ${npmSpec(entry)} does not match its pinned integrity`);
  const member = `package/${entry.file}`;
  let seen = 0;
  await extractTar({ file: tarball, cwd: unpacked, strict: true, preservePaths: false, preserveOwner: false,
    filter: (name, header) => {
      const match = name === member && header.type === 'File';
      if (match) seen++;
      return match;
    } });
  if (seen !== 1) throw new Error(`npm package ${npmSpec(entry)} lacks ${entry.file}`);
  await rm(tarballs, { recursive: true, force: true });
  return join(unpacked, 'package', entry.file);
}

/** Obtain one catalog artifact into `archive` and return the source used. `verify`
 * checks the catalog SHA-256 and size of an npm-supplied archive; a mismatch falls
 * back to the direct download (which applies the same check) unless forbidden. */
export async function acquireArtifact(artifact, archive, { label = artifact.name, log = console.error, progress, staging, signal,
  npm: npmOptions = {}, env = process.env, download, downloadProgress, verify } = {}) {
  const mode = artifactSourceMode(env);
  const manifest = mode === 'https' ? null
    : (Object.hasOwn(npmOptions, 'manifest') ? npmOptions.manifest : await bundledNpmToolManifest());
  const entry = manifest ? npmEntryFor(manifest, artifact) : null;
  const direct = async () => {
    if (mode === 'npm') throw Object.assign(new Error(`LASM_ARTIFACT_SOURCE=npm forbids downloading ${label} (${artifact.name}); `
      + (entry ? `npm could not provide ${npmSpec(entry)}.` : 'no npm package of this Lasm installation carries it.')), { code: 'LASM_NPM_ONLY' });
    if (!progress) log(`Downloading verified ${artifact.name}…`);
    downloadProgress?.();
    await download();
    return { kind: 'https', url: artifact.url };
  };
  if (!entry) return direct();
  if (entry.install !== 'demand') {
    const installed = await (npmOptions.resolve ?? resolveInstalledPackage)(entry, npmOptions);
    if (installed.file) {
      progress?.({ stage: `Using ${label} from npm package ${npmSpec(entry)}` });
      if (!progress) log(`Using ${label} from npm package ${npmSpec(entry)}`);
      await copyFile(installed.file, archive);
      try { await verify(); return { kind: 'npm-installed', package: entry.package, version: entry.version }; }
      catch (error) {
        if (error.code !== 'LASM_INTEGRITY') throw error;
        log(`${missingPackageMessage(entry, 'has an archive that does not match the pinned SHA-256', mode, label)}`);
      }
    } else {
      // Name every missing package of this host, so a single command repairs the installation.
      const others = (await checkInstalledToolPackages(manifest, npmOptions).catch(() => null))?.missing.map(item => item.spec) ?? [];
      log(`${missingPackageMessage(entry, installed.missing, mode, label, [...new Set([npmSpec(entry), ...others])].sort())}`);
    }
    return direct();
  }
  progress?.({ stage: `Fetching ${label} with npm (${npmSpec(entry)})` });
  if (!progress) log(`Fetching ${label} with npm (${npmSpec(entry)})…`);
  try {
    const file = await (npmOptions.fetch ?? fetchNpmPackage)(entry, staging, { ...npmOptions, env, signal });
    await rename(file, archive);
    await verify();
    return { kind: 'npm-fetched', package: entry.package, version: entry.version, integrity: entry.integrity };
  } catch (error) {
    if (signal?.aborted) throw error;
    log(`npm could not fetch ${npmSpec(entry)} (${label}): ${error.message}. `
      + (mode === 'npm' ? 'LASM_ARTIFACT_SOURCE=npm forbids direct downloads.' : 'Downloading the same verified archive directly instead.'));
    if (mode === 'npm') throw Object.assign(new Error(`npm could not fetch ${npmSpec(entry)} and LASM_ARTIFACT_SOURCE=npm forbids direct downloads: ${error.message}`), { code: 'LASM_NPM_ONLY', cause: error });
    return direct();
  }
}

/** Platform and shared packages this installation expects, and which are missing.
 * Used by maintainer validation (scripts/npm-dist) to report npm's install result. */
export async function checkInstalledToolPackages(manifest, options = {}) {
  manifest ??= await bundledNpmToolManifest();
  if (!manifest) return null;
  const host = `${options.platform ?? process.platform}-${options.arch ?? process.arch}`;
  const result = { host, installed: [], missing: [] };
  for (const entry of Object.values(manifest.artifacts)) {
    if (entry.install === 'demand' || (entry.platform && entry.platform !== host)) continue;
    const found = await resolveInstalledPackage(entry, options);
    if (found.file) result.installed.push(npmSpec(entry));
    else result.missing.push({ spec: npmSpec(entry), reason: found.missing, fix: npmInstallFix(entry) });
  }
  return result;
}
