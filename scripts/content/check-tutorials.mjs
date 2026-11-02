// Runs every tutorial in content/tutorials/ as a reader would, against a packed
// Lasm CLI, and checks that the tutorial's page (content/learn/<slug>.md), its
// project files and what the commands actually do still agree (content/README.md,
// "Tutorials").
//
//   node scripts/content/check-tutorials.mjs --static
//       No builds: each page shows every command, file, request and output its
//       steps.json names. Fast; needs nothing installed.
//   node scripts/content/check-tutorials.mjs --tgz CLI.tgz --work NEW_DIR
//       [--tutorial SLUG] [--wrangler PATH] [--require-platform] [--report FILE] [--no-static]
//       The static check, then every step in a new directory: `npm create
//       @lasm@latest …` runs `lasm init …` from the packed CLI (what @lasm/create
//       runs) and the project then depends on the tarball; every other command runs
//       as written, with bash. At the end each file in the tutorial's project/
//       equals the file the steps produced (the @lasm/cli dependency's version and
//       the packed package's name aside). --no-static runs the steps even when the
//       static check fails (while writing a tutorial, to see real outputs).
//
// Steps whose `platform` is a platform CLI (wrangler) run only when its path is
// given; CI gives it (content.yml). Never run platform CLIs on a desktop.
//
// steps.json:
//   { "project": "DIR", "steps": [STEP, …] }
//   { "run": "CMD", "cwd": "." | "project" (default after the project exists),
//     "stdout": "exact output" | "stdoutIncludes": [..] | "fails": true, "outputIncludes": [..],
//     "files": ["path that must exist", …] }
//   { "edit": "FILE" }                         copy project/FILE in (the page shows all of it)
//   { "show": "FILE" }                         the page shows project/FILE whole (no change)
//   { "change": "FILE", "from": "TEXT", "to": "TEXT" }   a temporary edit (the page shows "to")
//   { "revert": "FILE" }                       put project/FILE back
//   { "serve": "CMD", "platform": "node" | "wrangler",
//     "requests": [{ "curl": "curl …", "path": "/p", "status": 200, "body": "…" | "bodyIncludes": [..] }] }
import { spawn, spawnSync } from 'node:child_process';
import { copyFileSync, existsSync, mkdirSync, readdirSync, readFileSync, statSync, writeFileSync } from 'node:fs';
import { createServer } from 'node:net';
import { dirname, join, relative, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { headlessEnvironment } from '../edge/headless.mjs';
import { splitFrontMatter } from './frontmatter.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const tutorialsDir = join(root, 'content/tutorials');
const learnDir = join(root, 'content/learn');
const argv = process.argv.slice(2);
const opt = name => { const i = argv.indexOf(name); return i < 0 ? undefined : argv[i + 1]; };
const flag = name => argv.includes(name);
const only = opt('--tutorial');
const slugs = readdirSync(tutorialsDir).filter(s => existsSync(join(tutorialsDir, s, 'steps.json')) && (!only || s === only)).sort();
if (only && !slugs.length) throw new Error(`No tutorial ${only} in content/tutorials`);

// ---------- static: the page shows what the steps do ----------

/** Fenced code blocks of a Markdown file: [{ lang, text }]. */
function codeBlocks(markdown) {
  const blocks = [];
  const re = /^```([^\n`]*)\n([\s\S]*?)^```\s*$/gm;
  for (let m; (m = re.exec(markdown));) blocks.push({ lang: m[1].trim(), text: m[2] });
  return blocks;
}
/** Files of a directory tree, relative, with / separators. */
function filesUnder(dir, base = dir) {
  return readdirSync(dir).flatMap(name => {
    const path = join(dir, name);
    return statSync(path).isDirectory() ? filesUnder(path, base) : [relative(base, path).split('\\').join('/')];
  }).sort();
}

function checkStatic(slug) {
  const dir = join(tutorialsDir, slug);
  const problems = [];
  const page = join(learnDir, `${slug}.md`);
  const tutorial = JSON.parse(readFileSync(join(dir, 'steps.json'), 'utf8'));
  if (!existsSync(page)) return { tutorial, problems: [`no page content/learn/${slug}.md`] };
  const { data, body: readme } = splitFrontMatter(readFileSync(page, 'utf8'));
  if (data?.kind !== 'tutorial') problems.push(`content/learn/${slug}.md: kind is not tutorial`);
  const blocks = codeBlocks(readme);
  // A command is shown when a shell block has a line that is the command, maybe
  // followed by spaces and a # comment.
  const shellLines = blocks.filter(b => ['sh', 'bash', 'shell', 'console'].includes(b.lang)).flatMap(b => b.text.split('\n').map(l => l.replace(/\s+#.*$/, '').trimEnd()));
  const shows = command => shellLines.includes(command);
  const inBlock = text => blocks.some(b => b.text.includes(text));
  const project = join(dir, 'project');
  if (!existsSync(project)) problems.push('no project/ directory');
  if (!tutorial.project || !Array.isArray(tutorial.steps) || !tutorial.steps.length) problems.push('steps.json needs "project" and "steps"');
  for (const [i, step] of (tutorial.steps ?? []).entries()) {
    const where = `step ${i + 1}`;
    const command = step.run ?? step.serve;
    if (command !== undefined && !shows(command)) problems.push(`${where}: page shows no line \`${command}\` in a sh block`);
    if (step.stdout !== undefined && !inBlock(step.stdout.trimEnd())) problems.push(`${where}: page does not show the output ${JSON.stringify(step.stdout)}`);
    for (const text of step.stdoutIncludes ?? []) if (!inBlock(text)) problems.push(`${where}: page does not show ${JSON.stringify(text)}`);
    for (const text of step.outputIncludes ?? []) if (!inBlock(text)) problems.push(`${where}: page does not show ${JSON.stringify(text)}`);
    for (const name of [step.edit, step.show].filter(n => n !== undefined)) {
      const file = join(project, name);
      if (!existsSync(file)) problems.push(`${where}: project/${name} does not exist`);
      else if (!blocks.some(b => b.text.trimEnd() === readFileSync(file, 'utf8').trimEnd())) problems.push(`${where}: page has no code block equal to project/${name}`);
    }
    if (step.change !== undefined) {
      const file = join(project, step.change);
      if (!existsSync(file) || !readFileSync(file, 'utf8').includes(step.from)) problems.push(`${where}: project/${step.change} does not contain ${JSON.stringify(step.from)}`);
      if (!inBlock(step.to)) problems.push(`${where}: page does not show ${JSON.stringify(step.to)}`);
    }
    for (const r of step.requests ?? []) {
      if (!shows(r.curl)) problems.push(`${where}: page shows no line \`${r.curl}\``);
      if (r.body !== undefined && !inBlock(r.body)) problems.push(`${where}: page does not show the response ${JSON.stringify(r.body)}`);
      for (const text of r.bodyIncludes ?? []) if (!inBlock(text)) problems.push(`${where}: page does not show ${JSON.stringify(text)}`);
    }
    const known = ['run', 'cwd', 'stdout', 'stdoutIncludes', 'fails', 'outputIncludes', 'files', 'edit', 'show', 'change', 'from', 'to', 'revert', 'serve', 'platform', 'requests', 'note'];
    for (const key of Object.keys(step)) if (!known.includes(key)) problems.push(`${where}: unknown key ${key}`);
  }
  return { tutorial, problems };
}

const staticResults = slugs.map(slug => ({ slug, ...checkStatic(slug) }));
for (const r of staticResults) console.log(`${r.problems.length ? 'FAIL' : 'ok  '} ${r.slug} (static)${r.problems.map(p => `\n     ${p}`).join('')}`);
if (staticResults.some(r => r.problems.length) && !flag('--no-static')) process.exit(1);
if (flag('--static')) process.exit(0);

// ---------- running the steps ----------

const tgz = opt('--tgz') && resolve(opt('--tgz'));
const work = opt('--work') && resolve(opt('--work'));
if (!tgz || !work) throw new Error('Usage: check-tutorials.mjs --static | --tgz CLI.tgz --work NEW_DIR [--tutorial SLUG] [--wrangler PATH] [--require-platform] [--report FILE]');
if (existsSync(work)) throw new Error(`Use a new work directory (${work} exists)`);
const tools = { wrangler: opt('--wrangler') && resolve(opt('--wrangler')) };
const requirePlatform = flag('--require-platform');
const reportFile = resolve(opt('--report') ?? join(work, 'tutorials.json'));
mkdirSync(work, { recursive: true });

// The environment of every command: CI mode, no telemetry, no browser, no
// display; Node's own bin directory first, so npm and npx are this Node's.
const env = headlessEnvironment(process.env, { npm_config_audit: 'false', npm_config_fund: 'false', npm_config_update_notifier: 'false' });
env.PATH = `${dirname(process.execPath)}:${env.PATH}`;

// The packed CLI, installed once (as the differential and equivalence jobs do).
const cliHome = join(work, '.lasm-cli');
mkdirSync(cliHome);
writeFileSync(join(cliHome, 'package.json'), '{"private":true}\n');
const install = spawnSync('npm', ['install', tgz], { cwd: cliHome, env, encoding: 'utf8' });
if (install.status !== 0) throw new Error(`npm install ${tgz} failed:\n${install.stdout}${install.stderr}`);
const cliName = JSON.parse(spawnSync('tar', ['-xzOf', tgz, 'package/package.json'], { encoding: 'utf8', maxBuffer: 1 << 24 }).stdout).name;
const lasm = join(cliHome, 'node_modules', cliName, 'bin/lasm.mjs');
const cliVersion = spawnSync(process.execPath, [lasm, '--version'], { env, encoding: 'utf8' }).stdout.trim();
console.log(`packed CLI: ${cliName} (${cliVersion}) from ${tgz}`);

const freePort = () => new Promise((ok, fail) => { const s = createServer(); s.once('error', fail); s.listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => ok(port)); }); });
const tail = (text, n = 4000) => String(text ?? '').slice(-n);

/** `npm create @lasm@latest DIR -- ARGS` → `lasm init DIR ARGS` (what @lasm/create runs). */
function translateCreate(command) {
  const m = /^npm create @lasm@latest (.*)$/.exec(command);
  if (!m) return null;
  return m[1].split(/\s+/).filter(token => token && token !== '--');
}

/** Normalized text of a project file: the packed CLI's package name is @lasm/cli,
 * and the version of the CLI a project depends on is not compared. */
function normalized(file, text) {
  text = text.split('@lasm/compiler').join('@lasm/cli');
  if (!file.endsWith('package.json')) return text;
  const pkg = JSON.parse(text);
  if (pkg.devDependencies?.['@lasm/cli'] !== undefined) pkg.devDependencies['@lasm/cli'] = '<version>';
  return JSON.stringify(pkg, null, 2);
}

function runCommand(command, cwd, timeoutMs = 60 * 60_000) {
  const started = performance.now();
  const r = spawnSync('bash', ['-c', command], { cwd, env, encoding: 'utf8', timeout: timeoutMs, maxBuffer: 64 * 1024 * 1024 });
  return { code: r.status, signal: r.signal, stdout: r.stdout ?? '', stderr: r.stderr ?? '', seconds: Math.round((performance.now() - started) / 100) / 10, error: r.error?.message };
}

async function serve(step, cwd, result) {
  const port = await freePort();
  let command, args, extra = {};
  if (step.platform === 'wrangler') {
    if (step.serve !== 'npx wrangler dev') throw new Error(`unsupported wrangler command ${step.serve}`);
    // Local workerd only: no account, no deployment, no browser.
    [command, args] = [tools.wrangler, ['dev', '--port', String(port), '--ip', '127.0.0.1', '--show-interactive-dev-session=false']];
  } else {
    [command, args, extra] = ['bash', ['-c', step.serve], { PORT: String(port), HOST: '127.0.0.1' }];
  }
  const child = spawn(command, args, { cwd, env: { ...env, ...extra }, stdio: ['ignore', 'pipe', 'pipe'], detached: true });
  let log = '';
  child.stdout.on('data', d => { log += d; }); child.stderr.on('data', d => { log += d; });
  const base = `http://127.0.0.1:${port}`;
  try {
    const deadline = Date.now() + 180_000;
    for (;;) {
      if (child.exitCode !== null) throw new Error(`${step.serve} exited (${child.exitCode}):\n${tail(log)}`);
      try { await fetch(base + '/', { signal: AbortSignal.timeout(2000) }); break; } catch { /* not listening yet */ }
      if (Date.now() > deadline) throw new Error(`${step.serve} did not answer within 180 s:\n${tail(log)}`);
      await new Promise(r => setTimeout(r, 500));
    }
    for (const r of step.requests) {
      const response = await fetch(base + r.path, { signal: AbortSignal.timeout(30_000) });
      const body = await response.text();
      const ok = response.status === r.status && (r.body === undefined || body.trimEnd() === r.body) && (r.bodyIncludes ?? []).every(t => body.includes(t));
      result.requests.push({ path: r.path, ok, status: response.status, body: tail(body, 600) });
      if (!ok) throw new Error(`${r.curl}: expected ${r.status} ${JSON.stringify(r.body ?? r.bodyIncludes)}, got ${response.status} ${JSON.stringify(body.slice(0, 600))}\n${tail(log)}`);
    }
  } finally {
    try { process.kill(-child.pid, 'SIGTERM'); } catch { /* exited */ }
    await new Promise(r => setTimeout(r, 1000));
    try { process.kill(-child.pid, 'SIGKILL'); } catch { /* exited */ }
  }
}

async function runTutorial(slug, tutorial, report) {
  const source = join(tutorialsDir, slug);
  const projectFiles = join(source, 'project');
  const base = join(work, slug);
  mkdirSync(base);
  const project = join(base, tutorial.project);
  for (const [i, step] of tutorial.steps.entries()) {
    const label = `${slug} step ${i + 1}: ${step.run ?? step.serve ?? (step.edit && `edit ${step.edit}`) ?? (step.show && `show ${step.show}`) ?? (step.change && `change ${step.change}`) ?? `revert ${step.revert}`}`;
    const cwd = step.cwd === '.' || !existsSync(project) ? base : project;
    const entry = { step: i + 1, label };
    report.steps.push(entry);
    if (step.show !== undefined) {
      // Shown, not changed: the final comparison checks it equals the project's file.
    } else if (step.edit !== undefined || step.revert !== undefined) {
      const file = step.edit ?? step.revert;
      mkdirSync(dirname(join(project, file)), { recursive: true });
      copyFileSync(join(projectFiles, file), join(project, file));
    } else if (step.change !== undefined) {
      const file = join(project, step.change), text = readFileSync(file, 'utf8');
      if (!text.includes(step.from)) throw new Error(`${label}: ${step.change} does not contain ${JSON.stringify(step.from)}`);
      writeFileSync(file, text.replace(step.from, step.to));
    } else if (step.serve !== undefined) {
      if (step.platform === 'wrangler' && !tools.wrangler) {
        if (requirePlatform) throw new Error(`${label}: needs --wrangler`);
        report.skipped.push(label); entry.skipped = 'platform CLI runs only in CI';
        console.log(`  skip ${label} (platform CLI runs only in CI)`);
        continue;
      }
      entry.requests = [];
      await serve(step, cwd, entry);
    } else {
      const create = translateCreate(step.run);
      const r = create ? runCommand(`${JSON.stringify(process.execPath)} ${JSON.stringify(lasm)} init ${create.map(a => JSON.stringify(a)).join(' ')}`, cwd)
        : runCommand(step.run, cwd);
      Object.assign(entry, { code: r.code, seconds: r.seconds, stdout: tail(r.stdout, 2000), stderr: tail(r.stderr, 4000) });
      const output = r.stdout + r.stderr;
      if (step.fails) {
        if (r.code === 0) throw new Error(`${label}: succeeded, but the tutorial says it fails`);
      } else if (r.code !== 0) throw new Error(`${label}: exit ${r.code}${r.signal ? ` (${r.signal})` : ''}\n${tail(output)}`);
      if (step.stdout !== undefined && r.stdout.trimEnd() !== step.stdout.trimEnd()) throw new Error(`${label}: stdout\n${r.stdout}\nexpected\n${step.stdout}`);
      for (const text of step.stdoutIncludes ?? []) if (!r.stdout.includes(text)) throw new Error(`${label}: stdout lacks ${JSON.stringify(text)}:\n${tail(r.stdout)}`);
      for (const text of step.outputIncludes ?? []) if (!output.includes(text)) throw new Error(`${label}: output lacks ${JSON.stringify(text)}:\n${tail(output)}`);
      for (const file of step.files ?? []) if (!existsSync(join(cwd, file))) throw new Error(`${label}: ${file} was not written`);
      if (create) {
        // Every file `lasm init` wrote is one of the tutorial's project files.
        const extra = filesUnder(project).filter(f => !existsSync(join(projectFiles, f)));
        if (extra.length) throw new Error(`${label}: lasm init wrote files that project/ lacks: ${extra.join(', ')}`);
        // The project builds with the packed CLI, not the published one.
        const pkgFile = join(project, 'package.json'), pkg = JSON.parse(readFileSync(pkgFile, 'utf8'));
        pkg.devDependencies = { [cliName]: `file:${tgz}` };
        writeFileSync(pkgFile, JSON.stringify(pkg, null, 2) + '\n');
      }
    }
    console.log(`  ok   ${label}${entry.seconds !== undefined ? ` (${entry.seconds} s)` : ''}`);
  }
  // The project's files are exactly the tutorial's.
  const differ = [];
  for (const file of filesUnder(projectFiles)) {
    const want = readFileSync(join(projectFiles, file), 'utf8');
    const got = existsSync(join(project, file)) ? readFileSync(join(project, file), 'utf8') : null;
    if (got === null || normalized(file, want) !== normalized(file, got)) differ.push(file);
  }
  if (differ.length) throw new Error(`${slug}: these project/ files differ from what the steps produced: ${differ.join(', ')} (see ${project})`);
}

const report = { cli: { name: cliName, version: cliVersion, tgz }, platform: `${process.platform}-${process.arch}`, node: process.version, startedAt: new Date().toISOString(), tutorials: [] };
const save = () => writeFileSync(reportFile, JSON.stringify(report, null, 2) + '\n');
let failed = false;
for (const { slug, tutorial } of staticResults) {
  console.log(`== ${slug}`);
  const r = { slug, steps: [], skipped: [] };
  report.tutorials.push(r);
  try {
    await runTutorial(slug, tutorial, r);
    r.passed = true;
    console.log(`ok   ${slug}${r.skipped.length ? ` (${r.skipped.length} platform steps skipped)` : ''}`);
  } catch (error) {
    failed = true;
    Object.assign(r, { passed: false, error: String(error.stack ?? error) });
    console.log(`FAIL ${slug}\n${error.message}`);
  }
  save();
}
report.passed = !failed;
report.finishedAt = new Date().toISOString();
save();
console.log(`${report.tutorials.filter(t => t.passed).length}/${report.tutorials.length} tutorials passed (${reportFile})`);
process.exit(failed ? 1 : 0);
