// Finds workflow `run` steps that pipe a command into another under a shell
// without `pipefail` (#291). GitHub runs a step with no `shell` as
// `bash -e {0}` on Linux and macOS: in `cmd | tee log`, the step's status is
// `tee`'s, and a failing `cmd` passes. `shell: bash` runs
// `bash --noprofile --norc -eo pipefail {0}`; a script may also start with
// `set -o pipefail` (or `set -euo pipefail`).
//
// The workflows are read line by line (no YAML library): jobs at two spaces
// under `jobs:`, steps as `- ` items under `steps:`, `run` as a single line or
// a `|`/`>` block. test/workflow-pipefail.test.mjs checks that the reader finds
// every `run:` with a value in every workflow, so a step it cannot place fails
// the test rather than being skipped.
import { readFileSync, readdirSync } from 'node:fs';
import { join } from 'node:path';

const indentOf = line => line.length - line.trimStart().length;

// Removes what is not shell syntax for a pipe: GitHub expressions, quoted
// strings, comments, `||`, and `case` patterns (`a|b)`).
export function pipesIn(script) {
  const found = [];
  let text = script.replace(/\$\{\{[\s\S]*?\}\}/g, 'X');
  // Quoted strings (single quotes literally; double quotes with escapes).
  // Command substitutions inside double quotes stay: `x="$(a | b)"` is a pipe.
  text = text.replace(/'[^']*'/g, "''").replace(/"(?:\\.|[^"\\])*"/g, q => `"${(q.match(/\$\([^()]*\)/g) ?? []).join(' ')}"`);
  for (const raw of text.split('\n')) {
    let line = raw.replace(/(^|\s)#.*$/, '$1');
    line = line.replace(/\|\|/g, ' ');
    // case patterns: `  a|b)` or `a|b|c) cmd ;;`
    line = line.replace(/(^\s*|\bin\s+|;;\s*)\(?[\w.*@/-]+(?:\|[\w.*@/-]+)+\)/g, '$1');
    if (/\|/.test(line)) found.push(raw.trim());
  }
  return found;
}

function blockScalar(lines, i, keyIndent, first) {
  if (!/^[|>][-+]?\s*$/.test(first)) {
    // A plain or quoted single-line value.
    let value = first;
    if (/^'.*'$/.test(value)) value = value.slice(1, -1).replace(/''/g, "'");
    else if (/^".*"$/.test(value)) value = JSON.parse(value);
    return { value, end: i + 1 };
  }
  const body = [];
  let j = i + 1;
  let indent;
  for (; j < lines.length; j++) {
    const line = lines[j];
    if (line.trim() === '') { body.push(''); continue; }
    const n = indentOf(line);
    if (n <= keyIndent) break;
    indent ??= n;
    body.push(line.slice(Math.min(indent, n)));
  }
  return { value: body.join('\n').trimEnd(), end: j };
}

// Steps of every job: { job, runsOn, shell (effective, or undefined), run, line }.
export function runSteps(text) {
  const lines = text.split('\n');
  const steps = [];
  let workflowShell, job, runsOn = '', inSteps = false, stepsIndent = -1;
  let step = null;
  const jobShells = new Map();
  const flush = () => { if (step?.run !== undefined) steps.push(step); step = null; };
  const defaultsShell = (i, indent) => {
    // `defaults:` / `run:` / `shell: x` at increasing indentation.
    for (let j = i + 1; j < lines.length && (lines[j].trim() === '' || indentOf(lines[j]) > indent); j++) {
      const m = lines[j].match(/^\s*shell:\s*(.+?)\s*$/);
      if (m) return m[1];
    }
    return undefined;
  };
  let inJobs = false;
  for (let i = 0; i < lines.length; i++) {
    const line = lines[i];
    if (line.trim() === '' || line.trim().startsWith('#')) continue;
    const indent = indentOf(line);
    if (indent === 0) {
      flush();
      inJobs = /^jobs:\s*$/.test(line);
      inSteps = false;
      if (/^defaults:\s*$/.test(line)) workflowShell = defaultsShell(i, 0);
      continue;
    }
    if (!inJobs) continue;
    if (indent === 2 && /^\s{2}[\w-]+:\s*$/.test(line)) {
      flush();
      job = line.trim().slice(0, -1); runsOn = ''; inSteps = false;
      continue;
    }
    if (indent === 4) {
      if (/^\s{4}steps:\s*$/.test(line)) { flush(); inSteps = true; stepsIndent = 4; continue; }
      flush();
      inSteps = false;
      const r = line.match(/^\s{4}runs-on:\s*(.*)$/);
      if (r) runsOn = r[1];
      if (/^\s{4}defaults:\s*$/.test(line)) jobShells.set(job, defaultsShell(i, 4));
      continue;
    }
    if (!inSteps || indent <= stepsIndent) continue;
    const item = line.match(/^(\s*)- (.*)$/);
    let keyIndent, rest;
    if (item && indent <= stepsIndent + 2) {
      flush();
      step = { job, runsOn, line: i + 1 };
      keyIndent = item[1].length + 2;
      rest = item[2];
    } else if (step) {
      keyIndent = indent;
      rest = line.trim();
    } else continue;
    if (!step || keyIndent !== step.keyIndent && step.keyIndent !== undefined) continue;
    step.keyIndent = keyIndent;
    const kv = rest.match(/^([\w-]+):\s*(.*)$/);
    if (!kv) continue;
    if (kv[1] === 'shell') step.ownShell = kv[2].trim();
    if (kv[1] === 'run') {
      const { value, end } = blockScalar(lines, i, keyIndent, kv[2].trim());
      step.run = value;
      step.runLine = i + 1;
      i = end - 1;
    }
  }
  flush();
  return steps.map(s => ({ ...s, shell: s.ownShell ?? jobShells.get(s.job) ?? workflowShell }));
}

// A step runs its pipes without pipefail when its shell is GitHub's default
// on Linux or macOS (bash -e), `sh`, or a custom bash command without it.
export function missingPipefail(step) {
  const shell = step.shell;
  if (shell !== undefined) {
    if (shell === 'bash') return false;
    if (/^(pwsh|powershell|cmd|python|node)\b/.test(shell)) return false;
    if (/pipefail/.test(shell)) return false;
  } else if (/windows/.test(step.runsOn) && !/\$\{\{/.test(step.runsOn)) {
    return false; // pwsh
  }
  // `set -o pipefail` (alone or with other options) before the first pipe.
  for (const line of step.run.split('\n')) {
    if (/^\s*set\s+(-[a-z]*\s+)*-[a-z]*o\s+pipefail\b/.test(line)) return false;
    if (pipesIn(line).length) return true;
  }
  return false;
}

export function findUnsafePipes(dir) {
  const out = [];
  for (const name of readdirSync(dir).sort()) {
    if (!/\.ya?ml$/.test(name)) continue;
    for (const step of runSteps(readFileSync(join(dir, name), 'utf8')))
      if (missingPipefail(step)) out.push({ file: name, line: step.runLine, job: step.job, runsOn: step.runsOn, pipes: pipesIn(step.run) });
  }
  return out;
}

if (import.meta.url === `file://${process.argv[1]}`) {
  const found = findUnsafePipes(process.argv[2] ?? '.github/workflows');
  for (const f of found) console.log(`${f.file}:${f.line} (${f.job}; runs-on ${f.runsOn})\n  ${f.pipes.join('\n  ')}`);
  console.log(`${found.length} step(s) pipe without pipefail`);
  process.exitCode = found.length ? 1 : 0;
}
