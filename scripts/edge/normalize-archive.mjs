// Emscripten's system_libs.py names an object `<base>__<n>.o` when another
// object of the same name ignoring case was seen first (musl's _Exit.c and
// _exit.c). It walks musl's source tree with os.walk, whose order is the
// file system's directory order, so which of the two gets the suffix differs
// between machines: edge runtime archives built on two CI runners differed only
// in libc.a's member names (release-checks 40540764720). Name such members
// independently of that order: drop the suffix whenever the plain name is
// unique (case-sensitively) in the archive. Contents and member order stay.
import { mkdtempSync, renameSync, rmSync, readdirSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { tmpdir } from 'node:os';
import { execFileSync } from 'node:child_process';

export function canonicalMemberNames(names) {
  const counts = new Map();
  const plain = name => name.replace(/__\d+\.o$/, '.o');
  for (const name of names) counts.set(plain(name), (counts.get(plain(name)) ?? 0) + 1);
  return names.map(name => counts.get(plain(name)) === 1 ? plain(name) : name);
}

/** Rewrites `archive` with canonical member names; returns the renamed members. */
export function normalizeArchive(llvmAr, archivePath) {
  const archive = resolve(archivePath);
  const names = execFileSync(llvmAr, ['t', archive], { encoding: 'utf8' }).split('\n').filter(Boolean);
  const canonical = canonicalMemberNames(names);
  const renamed = names.map((name, i) => [name, canonical[i]]).filter(([a, b]) => a !== b);
  if (!renamed.length) return renamed;
  if (new Set(names).size !== names.length) throw new Error(`${archive} has duplicate member names`);
  const work = mkdtempSync(join(tmpdir(), 'lasm-archive-'));
  try {
    execFileSync(llvmAr, ['x', archive], { cwd: work });
    if (readdirSync(work).length !== names.length) throw new Error(`${archive}: members collide on extraction`);
    // Two-step rename: a canonical name may be another member's current name.
    for (const [from] of renamed) renameSync(join(work, from), join(work, from + '.lasm-rename'));
    for (const [from, to] of renamed) renameSync(join(work, from + '.lasm-rename'), join(work, to));
    rmSync(archive);
    execFileSync(llvmAr, ['rcsD', archive, ...canonical], { cwd: work });
  } finally { rmSync(work, { recursive: true, force: true }); }
  return renamed;
}
