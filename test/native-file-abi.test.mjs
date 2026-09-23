import test from 'node:test';
import { posix, verifyFileCreation, verifyDescriptorInheritance, verifySocketFlags } from './helpers/native-file-abi.mjs';

for (const synchronous of [true, false])
  test(`file creation modes, permissions, and reopening through ${synchronous ? 'direct' : 'worker'} IO`,
    () => verifyFileCreation(synchronous));
test('POSIX pipe and duplicated descriptors stay close-on-exec', { skip: !posix }, verifyDescriptorInheritance);
test('POSIX TCP descriptors are nonblocking and close-on-exec before engine handoff', { skip: !posix }, verifySocketFlags);
