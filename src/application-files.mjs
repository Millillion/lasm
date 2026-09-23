import { mkdir, readdir, readFile, lstat, rename, rm, cp, copyFile } from 'node:fs/promises';
import { join, dirname, relative } from 'node:path';
import { randomUUID } from 'node:crypto';
import { hashFile } from './managed-artifacts.mjs';

export const outputReceipt = '.lasm-application.json';

export async function fileInventory(directory, skip = new Set(), directories) {
  const files = Object.create(null);
  async function walk(base) {
    for (const entry of (await readdir(base, { withFileTypes: true })).sort((a, b) => a.name.localeCompare(b.name))) {
      const file = join(base, entry.name), name = relative(directory, file).replaceAll('\\', '/');
      if (skip.has(name)) continue;
      if (entry.isDirectory()) { directories?.push(name); await walk(file); }
      else if (entry.isFile()) files[name] = await hashFile(file);
      else throw new Error(`Unexpected link or special file in application build inputs: ${name}`);
    }
  }
  if (!(await lstat(directory)).isDirectory()) throw new Error('Application output must be an ordinary directory');
  await walk(directory); return files;
}

async function exists(file) {
  try { await lstat(file); return true; }
  catch (error) { if (error.code === 'ENOENT') return false; throw error; }
}

async function receipt(directory) {
  const file = join(directory, outputReceipt);
  if (!(await lstat(file)).isFile()) throw new Error('Application receipt must be an ordinary file');
  const record = JSON.parse(await readFile(file, 'utf8'));
  if (record.schema !== 1 || typeof record.signature !== 'string' || !record.files
    || typeof record.files !== 'object' || Array.isArray(record.files)
    || Object.entries(record.files).some(([name, hash]) =>
      name === outputReceipt || name.includes('\\') || name.includes(':') || name.includes('\0')
      || name.split('/').some(part => !part || part === '.' || part === '..')
      || typeof hash !== 'string' || !/^[a-f0-9]{64}$/.test(hash)))
    throw new Error('Invalid application output receipt');
  return record;
}

export async function reusableOutput(directory, signature) {
  try {
    const previous = await receipt(directory);
    return previous.signature === signature
      && JSON.stringify(await fileInventory(directory, new Set([outputReceipt]))) === JSON.stringify(previous.files);
  } catch (error) { if (error.code === 'ENOENT' || error instanceof SyntaxError) return false; throw error; }
}

/** Replace generated files while retaining user assets and refusing to erase edits. */
export async function deliverOutput(cached, output, signature) {
  if (output === cached) return;
  const destinationExists = await exists(output);
  let extraFiles = [], extraDirectories = [];
  if (destinationExists) {
    const directories = [];
    const current = await fileInventory(output, new Set([outputReceipt]), directories);
    if (!(await exists(join(output, outputReceipt)))) {
      if ((await readdir(output)).length)
        throw new Error(`Output directory is not a Lasm application build: ${output}. Choose --output with an empty directory.`);
    } else {
      const previous = await receipt(output);
      extraDirectories = directories.filter(name => !Object.keys(previous.files).some(file => file.startsWith(name + '/')));
      for (const [name, hash] of Object.entries(current)) {
        if (!Object.hasOwn(previous.files, name)) extraFiles.push(name);
        else if (previous.files[name] !== hash)
          throw new Error(`Generated application file was modified: ${join(output, name)}. Preserve the edit or choose a different output directory.`);
      }
      if (previous.signature === signature && !extraFiles.length
        && JSON.stringify(current) === JSON.stringify(previous.files)) return;
    }
  }
  const next = await fileInventory(cached);
  for (const name of extraDirectories) {
    if (Object.keys(next).some(generated => name === generated || name.startsWith(generated + '/')))
      throw new Error(`Application build conflicts with an added asset directory: ${join(output, name)}. Choose a different output directory.`);
  }
  for (const name of extraFiles) {
    if (Object.keys(next).some(generated => name === generated || name.startsWith(generated + '/') || generated.startsWith(name + '/')))
      throw new Error(`Application build conflicts with an added asset: ${join(output, name)}. Choose a different output directory.`);
  }
  await mkdir(dirname(output), { recursive: true });
  const staging = output + '.lasm-' + randomUUID(), previous = output + '.previous-' + randomUUID();
  let moved = false;
  try {
    await cp(cached, staging, { recursive: true });
    for (const name of extraDirectories) await mkdir(join(staging, name), { recursive: true });
    for (const name of extraFiles) {
      await mkdir(dirname(join(staging, name)), { recursive: true });
      await copyFile(join(output, name), join(staging, name));
    }
    if (destinationExists) { await rename(output, previous); moved = true; }
    await rename(staging, output);
  } catch (error) {
    if (moved && !(await exists(output))) await rename(previous, output);
    throw error;
  } finally { await rm(staging, { recursive: true, force: true }); }
  if (moved) await rm(previous, { recursive: true, force: true });
}
