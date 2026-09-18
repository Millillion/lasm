import { existsSync, readFileSync } from 'node:fs';
import { dirname, resolve, join } from 'node:path';
import { executableName } from './platform.mjs';

/** Lake owns elaboration, dependencies, plugins, and compiler options. */
export function findLakeProject(configFile, spec) {
  if (spec.lake !== undefined && typeof spec.lake !== 'string' && spec.lake !== false) {
    throw new Error('lake must be a project directory or false');
  }
  if (spec.lake === false) return undefined;
  let directory = spec.lake === undefined ? dirname(configFile) : resolve(dirname(configFile), spec.lake);
  while (!existsSync(join(directory, 'lakefile.lean')) && !existsSync(join(directory, 'lakefile.toml'))) {
    const parent = dirname(directory);
    if (spec.lake !== undefined) throw new Error(`No Lake configuration in ${directory}`);
    if (parent === directory) return undefined;
    directory = parent;
  }
  return directory;
}

export function loadLake(configFile, spec, { run, lean, env, hostCommit }) {
  const directory = findLakeProject(configFile, spec);
  if (!directory) return undefined;
  const prefix = run(lean, ['--print-prefix'], { cwd: directory, env });
  if (run(lean, ['--githash'], { cwd: directory, env }) !== hostCommit) throw new Error('Lake project toolchain does not match the Lasm compiler target');
  const executable = join(prefix, 'bin', executableName('lake'));
  const options = spec.lakeOptions ?? {};
  if (!options || typeof options !== 'object' || Array.isArray(options)) throw new Error('lakeOptions must be an object of string values');
  const flags = ['--no-cache', '--keep-toolchain'];
  for (const [key, value] of Object.entries(options)) {
    if (!/^[A-Za-z][A-Za-z0-9_.]*$/.test(key) || typeof value !== 'string') throw new Error('Invalid Lake configuration option');
    flags.push('-K', `${key}=${value}`);
  }
  const lake = args => run(executable, [...flags, ...args], { cwd: directory, env, timeout: 600_000 });
  const environment = JSON.parse(lake(['--reconfigure', 'env', process.execPath, '-e', 'process.stdout.write(JSON.stringify(process.env))']));
  return {
    directory, env: environment,
    cSource(name) {
      const path = resolve(directory, JSON.parse(lake(['--quiet', '--json', 'query', `+${name}:c`])));
      return { path, c: readFileSync(path, 'utf8') };
    },
  };
}
