// Lasm uses the system `git` (user decision, 2026-10-23): it ships no Git. Lake needs
// Git only for dependencies (`require … from git`, Reservoir `require "scope" / "name"`),
// `lake update` and the release cache; programs and Lake projects without dependencies
// build with no Git at all. When a project needs Git and none works, Lasm stops before
// running Lake, with the ordinary install command for each operating system.
import { existsSync, readFileSync, statSync } from 'node:fs';
import { join, resolve, delimiter as hostDelimiter } from 'node:path';
import { spawnSync } from 'node:child_process';

export const gitInstallHelp = `Install Git, then run the command again:
  macOS:                    xcode-select --install   (or: brew install git)
  Debian/Ubuntu:            sudo apt install git
  Fedora/RHEL/Amazon Linux: sudo dnf install git
  Windows:                  winget install --id Git.Git -e   (or download it from https://git-scm.com)
Lean programs and Lake projects without dependencies build without Git.`;

export class GitRequiredError extends Error {
  constructor(reason) {
    super(`This Lake project needs Git (${reason}), and no working \`git\` was found on PATH.\n${gitInstallHelp}`);
    this.name = 'GitRequiredError';
    this.code = 'LASM_GIT_REQUIRED';
  }
}

// Lean comments: `-- …` to the end of the line and nested `/- … -/` blocks.
function stripLeanComments(text) {
  let out = '', depth = 0;
  for (let i = 0; i < text.length; i++) {
    if (text.startsWith('/-', i)) { depth++; i++; continue; }
    if (depth && text.startsWith('-/', i)) { depth--; i++; continue; }
    if (depth) continue;
    if (text.startsWith('--', i)) { while (i < text.length && text[i] !== '\n') i++; out += '\n'; continue; }
    out += text[i];
  }
  return out;
}

/** The requirements a Lake configuration declares: { name, path } (path when local). */
export function lakeRequirements(directory) {
  const toml = join(directory, 'lakefile.toml'), lean = join(directory, 'lakefile.lean');
  const found = [];
  if (existsSync(toml)) {
    const text = readFileSync(toml, 'utf8').replace(/#[^\n]*/g, '');
    for (const block of text.split(/^\s*\[\[\s*require\s*\]\]\s*$/m).slice(1)) {
      const body = block.split(/^\s*\[/m)[0];
      const name = /^\s*name\s*=\s*"([^"]*)"/m.exec(body)?.[1] ?? '?';
      const path = /^\s*path\s*=\s*"([^"]*)"/m.exec(body)?.[1];
      found.push({ name, path, git: /^\s*git\s*=/m.test(body), scope: /^\s*scope\s*=/m.test(body) });
    }
  } else if (existsSync(lean)) {
    const text = stripLeanComments(readFileSync(lean, 'utf8'));
    // A `require` runs to the next declaration keyword or the end of the file.
    const pattern = /(?:^|\n)\s*require\b([\s\S]*?)(?=\n\s*(?:require|package|lean_lib|lean_exe|target|extern_lib|script|input_file|input_dir|@\[|def|abbrev|meta|open|import|$)|$)/g;
    for (const match of text.matchAll(pattern)) {
      const body = match[1];
      const name = /^\s*(?:"([^"]+)"\s*\/\s*)?(?:"([^"]+)"|«([^»]+)»|([\w.]+))/.exec(body);
      const label = name ? (name[1] ? `${name[1]}/` : '') + (name[2] ?? name[3] ?? name[4]) : '?';
      const path = /\bfrom\s+"([^"]*)"/.exec(body)?.[1];
      const git = /(?:\bfrom|@)\s*git\b/.test(body);
      found.push({ name: label, path: git ? undefined : path, git, scope: !!name?.[1] });
    }
  }
  return found;
}

/** Why this Lake project needs Git, or null when it does not. Path dependencies
 * are followed; the manifest (when present) lists every resolved package. */
export function lakeGitRequirement(project, seen = new Set()) {
  project = resolve(project);
  if (seen.has(project)) return null;
  seen.add(project);
  const manifest = join(project, 'lake-manifest.json');
  if (existsSync(manifest)) {
    let packages = [];
    try { packages = JSON.parse(readFileSync(manifest, 'utf8')).packages ?? []; } catch { return 'its lake-manifest.json cannot be read'; }
    const git = packages.find(entry => entry?.type === 'git');
    if (git) return `Git dependency ${git.name}`;
  }
  for (const requirement of lakeRequirements(project)) {
    if (requirement.path === undefined)
      return `${requirement.scope ? 'Reservoir' : 'Git'} dependency ${requirement.name}`;
    const local = resolve(project, requirement.path);
    if (existsSync(local) && statSync(local).isDirectory()) {
      const nested = lakeGitRequirement(local, seen);
      if (nested) return nested;
    }
  }
  return null;
}

/** The working `git` on PATH (its --version output), or null. */
export function findSystemGit(env = process.env, platform = process.platform) {
  const pathKey = Object.keys(env).find(key => platform === 'win32' ? key.toUpperCase() === 'PATH' : key === 'PATH');
  const delimiter = platform === 'win32' ? ';' : platform === process.platform ? hostDelimiter : ':';
  const directories = (pathKey ? env[pathKey] : '').split(delimiter).filter(Boolean);
  const names = platform === 'win32' ? ['git.exe', 'git.cmd', 'git.bat'] : ['git'];
  for (const directory of directories) for (const name of names) {
    const candidate = join(directory, name);
    try { if (!statSync(candidate).isFile()) continue; } catch { continue; }
    // macOS ships a /usr/bin/git stub that fails until the Command Line Tools exist.
    const result = spawnSync(candidate, ['--version'], { env, encoding: 'utf8', timeout: 30_000, windowsHide: true,
      stdio: ['ignore', 'pipe', 'pipe'], shell: platform === 'win32' && !name.endsWith('.exe') });
    if (result.status === 0 && /^git version /.test(result.stdout)) return { executable: candidate, version: result.stdout.trim() };
  }
  return null;
}

/** Stop before Lake runs when the project needs Git and none works. */
export function checkSystemGit(project, { env = process.env, platform = process.platform, find = findSystemGit } = {}) {
  const reason = lakeGitRequirement(project);
  if (!reason) return { needed: false };
  const git = find(env, platform);
  if (!git) throw new GitRequiredError(reason);
  return { needed: true, reason, ...git };
}
