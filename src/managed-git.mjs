import { readFile, access } from 'node:fs/promises';
import { join, dirname, posix, win32 } from 'node:path';
import { execFileSync } from 'node:child_process';
import { provisionArtifact } from './managed-artifacts.mjs';
import { verifyNativeProgram } from './native-program.mjs';

export const gitCatalog = JSON.parse(await readFile(new URL('./git-tools.json', import.meta.url), 'utf8'));

/** Keep ordinary Git configuration and authentication; supply its native tools. */
export function managedGitEnvironment(git, inherited = process.env) {
  const env = { ...inherited };
  const paths = git.platform === 'win32' ? win32 : posix;
  const priorPath = Object.keys(env).find(key => key.toUpperCase() === 'PATH');
  const path = priorPath === undefined ? '' : env[priorPath];
  // Windows environment keys are case insensitive. Avoid competing Path/PATH
  // entries when passing the managed tools to native Lean and Git children.
  for (const key of Object.keys(env)) if (key.toUpperCase() === 'PATH') delete env[key];
  env.PATH = [...git.path, path].filter(Boolean).join(git.platform === 'win32' ? ';' : ':');
  env.GIT_EXEC_PATH = git.execPath;
  env.GIT_TEMPLATE_DIR = git.templates;
  if (git.platform !== 'win32' && env.GIT_CONFIG_SYSTEM === undefined)
    env.GIT_CONFIG_SYSTEM = paths.join(git.prefix, 'etc/gitconfig');
  if (git.platform === 'linux') {
    env.PREFIX = git.prefix;
    if (env.GIT_SSL_CAINFO === undefined) env.GIT_SSL_CAINFO = paths.join(git.prefix, 'ssl/cacert.pem');
  }
  return env;
}

export async function provisionGit(options = {}) {
  const catalog = options.catalog ?? gitCatalog;
  const platform = options.platform ?? process.platform, arch = options.arch ?? process.arch;
  const host = platform + '-' + arch, artifact = catalog.artifacts[host];
  if (!artifact) throw new Error(`No managed Git distribution for ${host}`);
  const installed = await provisionArtifact(artifact, { ...options, label: `Git ${catalog.version}` });
  const prefix = installed.directory;
  const windows = platform === 'win32', toolRoot = windows ? join(prefix, arch === 'arm64' ? 'clangarm64' : 'mingw64') : prefix;
  const executable = join(prefix, windows ? 'cmd/git.exe' : 'bin/git');
  const binaryIdentity = await verifyNativeProgram(executable, platform, arch);
  const git = { ...installed, prefix, platform, arch, executable,
    execPath: join(toolRoot, 'libexec/git-core'), templates: join(toolRoot, 'share/git-core/templates'),
    path: windows ? [join(prefix, 'cmd'), join(toolRoot, 'bin'), join(prefix, 'usr/bin')] : [join(prefix, 'bin')],
    binaryIdentity, distribution: catalog.distribution };
  await access(git.execPath); await access(git.templates);
  const env = managedGitEnvironment(git, { ...process.env, PATH: dirname(process.execPath) });
  const version = execFileSync(executable, ['--version'], { env, encoding: 'utf8', windowsHide: true, timeout: 30_000 }).trim();
  if (!(version === 'git version ' + catalog.version || version.startsWith('git version ' + catalog.version + '.')))
    throw new Error(`Managed Git version mismatch: ${version}`);
  return { ...git, version };
}
