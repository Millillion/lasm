// Small native adapters (abort, thread IDs, the wall clock) loaded against a
// scripted libc, including the branches for the other supported platforms.
import test from 'node:test';
import assert from 'node:assert/strict';
import { installKoffiStandIn, standInKoffi, freshImport, freshRequire } from './helpers/koffi-stand-in.mjs';

installKoffiStandIn();
function asPlatform(platform, arch = process.arch) {
  const saved = ['platform', 'arch'].map(key => [key, Object.getOwnPropertyDescriptor(process, key)]);
  Object.defineProperty(process, 'platform', { ...saved[0][1], value: platform });
  Object.defineProperty(process, 'arch', { ...saved[1][1], value: arch });
  return () => { for (const [key, descriptor] of saved) Object.defineProperty(process, key, descriptor); };
}
const src = name => new URL(`../src/${name}`, import.meta.url);

test('native abort calls the CRT abort of each platform once resolved, and never returns', t => {
  for (const [platform, library] of [['linux', 'libc.so.6'], ['darwin', '/usr/lib/libSystem.B.dylib'], ['win32', 'ucrtbase.dll']]) {
    const restore = asPlatform(platform); t.after(restore);
    let aborts = 0;
    const koffi = standInKoffi({ abort: () => { aborts++; } }).install();
    const nativeAbort = freshRequire(src('native-abort.cjs'));
    assert.throws(() => nativeAbort(), { message: 'Native abort unexpectedly returned' });
    assert.throws(() => nativeAbort(), { message: 'Native abort unexpectedly returned' });
    assert.equal(aborts, 2);
    assert.deepEqual(koffi.loads, [library]);
    restore();
  }
});

test('native thread IDs come from each platform\'s own thread ID call', t => {
  const restoreAll = []; t.after(() => restoreAll.forEach(r => r()));
  {
    const restore = asPlatform('win32'); restoreAll.push(restore);
    const koffi = standInKoffi({ GetCurrentThreadId: () => 4242 }).install();
    const id = freshRequire(src('thread-id.cjs'));
    assert.equal(id(), 4242n);
    assert.equal(id(), 4242n);
    assert.deepEqual(koffi.loads, ['kernel32.dll']);
    restore();
  }
  {
    const restore = asPlatform('darwin'); restoreAll.push(restore);
    let status = 0;
    const koffi = standInKoffi({ pthread_threadid_np: (thread, out) => { assert.equal(thread, null); out[0] = 2 ** 40 + 3; return status; } }).install();
    const id = freshRequire(src('thread-id.cjs'));
    assert.equal(id(), 2n ** 40n + 3n);
    status = 1;
    assert.throws(() => id(), { message: 'pthread_threadid_np failed' });
    assert.deepEqual(koffi.loads, ['/usr/lib/libSystem.B.dylib']);
    restore();
  }
  {
    const restore = asPlatform('linux', 'x64'); restoreAll.push(restore);
    const koffi = standInKoffi({ gettid: () => 77 }).install();
    const id = freshRequire(src('thread-id.cjs'));
    assert.equal(id(), 77n);
    assert.deepEqual(koffi.loads, [null]);
    restore();
  }
  for (const [arch, number] of [['x64', 186], ['arm64', 178]]) {
    // glibc 2.28/2.29 lack the gettid wrapper: use the raw system call.
    const restore = asPlatform('linux', arch); restoreAll.push(restore);
    const koffi = standInKoffi({ syscall: value => value * 10 }).install();
    const id = freshRequire(src('thread-id.cjs'));
    assert.equal(id(), BigInt(number * 10));
    assert.deepEqual(koffi.calls, [['syscall', number]]);
    restore();
  }
  {
    const restore = asPlatform('linux', 'riscv64'); restoreAll.push(restore);
    standInKoffi({ syscall: () => 1 }).install();
    const id = freshRequire(src('thread-id.cjs'));
    assert.throws(() => id(), /stand-in libc has no gettid/);
    restore();
  }
});

test('the POSIX wall clock reads CLOCK_REALTIME and reports a failure with its errno', async t => {
  const restore = asPlatform('linux'); t.after(restore);
  let result = 0;
  const koffi = standInKoffi({
    clock_gettime: (clock, time) => { assert.equal(clock, 0); time.seconds = 12; time.nanoseconds = 345_678_999; return result; },
    strerror: errno => `message ${errno}`,
  }, { errno: { EINVAL: 22, EFAULT: 14 } }).install();
  const { nativeClock } = await freshImport(src('native-clock.mjs'));
  const clock = nativeClock();
  assert.equal(nativeClock(), clock);
  assert.equal(clock.now(), 12_345_678_000n);
  result = -1; koffi.state.errno = 14;
  assert.throws(() => clock.now(), error => error.message === 'message 14' && error.errno === 14 && error.code === 'EFAULT'
    && error.nativeMessage === true && error.errorOrigin === 'crt');
  assert.deepEqual(koffi.loads, [null]);
});

test('the Windows wall clock converts the precise FILETIME', async t => {
  const restore = asPlatform('win32'); t.after(restore);
  const koffi = standInKoffi({ GetSystemTimePreciseAsFileTime: time => { time[0] = 116444736000000000n + 15n; } }).install();
  const { nativeClock } = await freshImport(src('native-clock.mjs'));
  assert.equal(nativeClock().now(), 1000n);
  assert.deepEqual(koffi.loads, ['kernel32.dll']);
});

test('macOS loads libSystem for the wall clock', async t => {
  const restore = asPlatform('darwin'); t.after(restore);
  const koffi = standInKoffi({ clock_gettime: (clock, time) => { time.seconds = -1; time.nanoseconds = 999_999_999; return 0; }, strerror: () => '' }).install();
  const { nativeClock } = await freshImport(src('native-clock.mjs'));
  assert.equal(nativeClock().now(), -1000n);
  assert.deepEqual(koffi.loads, ['/usr/lib/libSystem.B.dylib']);
});
