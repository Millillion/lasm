import { mkdirSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { execFileSync } from 'node:child_process';
const source = resolve(process.argv[2] ?? '.cache/lean4-4.32.0');
const output = resolve(process.argv[3] ?? '.work/upstream-ctest');
mkdirSync(output, { recursive: true });
// Configure the real upstream registration rules without building the compiler.
// The generated commands are inventoried only; their build paths are placeholders.
writeFileSync(join(output, 'CMakeLists.txt'), `cmake_minimum_required(VERSION 3.25)
project(LasmUpstreamInventory NONE)
enable_testing()
set(LEAN_SOURCE_DIR "${source}/src")
set(STAGE 1)
add_custom_target(lean)
add_subdirectory("${source}/tests" tests)
`);
execFileSync('cmake', ['-S', output, '-B', join(output, 'build')], { stdio: ['ignore','pipe','pipe'] });
const inventory = JSON.parse(execFileSync('ctest', ['--show-only=json-v1', '--test-dir', join(output, 'build')], { encoding: 'utf8', maxBuffer: 32 * 1024 * 1024 }));
writeFileSync(join(output, 'ctest.json'), JSON.stringify(inventory, null, 2) + '\n');
console.log(JSON.stringify({ registeredTests: inventory.tests.length, path: join(output, 'ctest.json'), note: 'Inventory only; this command does not execute the native compiler/LSP/Lake tests.' }));
