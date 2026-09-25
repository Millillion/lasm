"""Bounded POSIX terminal driver for native/deployed differential IO tests.

The child owns a new session and controlling terminal. Raw terminal mode keeps
every input/output byte observable; this is not a cooked-terminal portability
claim. The driver sends input only after the requested output marker arrives.
"""
import base64
import errno
import fcntl
import json
import os
import pty
import selectors
import signal
import struct
import subprocess
import sys
import termios
import time
import tty


def run_session(config):
    command = config['command']
    assert isinstance(command, list) and command and all(isinstance(x, str) and '\0' not in x for x in command)
    mode = config['mode']
    assert mode in ['terminal', 'stdout-pipe']
    timeout = config.get('timeoutSeconds', 20)
    assert 0 < timeout <= 60
    trigger = base64.b64decode(config['triggerBase64'], validate=True)
    payload = base64.b64decode(config['inputBase64'], validate=True)
    assert trigger and len(trigger) <= 4096 and len(payload) <= 65536
    pipe_config = config.get('stdoutPipe')
    release_trigger = None
    pipe_report = None
    if pipe_config is not None:
        assert mode == 'stdout-pipe' and sys.platform.startswith('linux')
        capacity = pipe_config['capacityBytes']
        assert isinstance(capacity, int) and 4096 <= capacity <= 65536
        release_trigger = base64.b64decode(pipe_config['releaseTriggerBase64'], validate=True)
        assert release_trigger and len(release_trigger) <= 4096 and payload
    master, slave = pty.openpty()
    process = None
    streams = {'terminal': bytearray(), 'stdout': bytearray()}
    sent = 0
    triggered = False
    timed_out = False
    failure = None
    release_seen = False
    stdout_held = pipe_config is not None
    selector = selectors.DefaultSelector()

    def own_terminal():
        os.setsid()
        fcntl.ioctl(0, termios.TIOCSCTTY, 0)

    def stop():
        if process is not None and process.returncode is None:
            # Only this freshly created child session belongs to the test.
            try:
                os.killpg(process.pid, signal.SIGKILL)
            except ProcessLookupError:
                pass
            process.wait(timeout=5)

    try:
        tty.setraw(slave)
        process = subprocess.Popen(command, cwd=config['cwd'], stdin=slave,
                                   stdout=slave if mode == 'terminal' else subprocess.PIPE,
                                   stderr=slave, close_fds=True, preexec_fn=own_terminal,
                                   **({'pipesize': capacity} if pipe_config is not None else {}))
        os.close(slave)
        slave = None
        os.set_blocking(master, False)
        selector.register(master, selectors.EVENT_READ, 'terminal')
        if process.stdout is not None:
            os.set_blocking(process.stdout.fileno(), False)
            if stdout_held:
                actual_capacity = fcntl.fcntl(process.stdout.fileno(), fcntl.F_GETPIPE_SZ)
                assert actual_capacity == capacity
                pipe_report = {'capacityBytes': actual_capacity, 'bytesBeforeInput': None,
                               'bytesBeforeRelease': None, 'releaseObserved': False}
            else:
                selector.register(process.stdout, selectors.EVENT_READ, 'stdout')

        def queued_stdout():
            return struct.unpack('I', fcntl.ioctl(process.stdout.fileno(), termios.FIONREAD,
                                                struct.pack('I', 0)))[0]

        deadline = time.monotonic() + timeout
        while selector.get_map():
            remaining = deadline - time.monotonic()
            if remaining <= 0:
                timed_out = True
                stop()
                break
            for key, _ in selector.select(min(remaining, 0.05)):
                try:
                    data = os.read(key.fd, 65536)
                except BlockingIOError:
                    continue
                except OSError as error:
                    # A closed PTY reports EIO instead of a zero-byte read.
                    if key.fd != master or error.errno != errno.EIO:
                        raise
                    data = b''
                if not data:
                    selector.unregister(key.fileobj)
                    continue
                streams[key.data].extend(data)
                if sum(map(len, streams.values())) > 65536:
                    failure = 'terminal output exceeded the 64 KiB test bound'
                    stop()
                    break
                if trigger in streams[key.data]:
                    triggered = True
                if release_trigger is not None and release_trigger in streams[key.data]:
                    release_seen = True
            if failure:
                break
            if triggered and sent < len(payload):
                # The backpressure control sends its input only after the OS
                # pipe is actually full. No sleep guesses when a writer blocks.
                if pipe_report is not None and pipe_report['bytesBeforeInput'] is None:
                    available = queued_stdout()
                    if available != pipe_report['capacityBytes']:
                        continue
                    pipe_report['bytesBeforeInput'] = available
                try:
                    sent += os.write(master, payload[sent:])
                except BlockingIOError:
                    pass
            if stdout_held and release_seen:
                pipe_report['bytesBeforeRelease'] = queued_stdout()
                pipe_report['releaseObserved'] = True
                selector.register(process.stdout, selectors.EVENT_READ, 'stdout')
                stdout_held = False
        if process.poll() is None:
            try:
                process.wait(timeout=max(0.001, deadline - time.monotonic()))
            except subprocess.TimeoutExpired:
                timed_out = True
                stop()
        code = process.returncode
        result = {'code': code if code >= 0 else None,
                'signal': signal.Signals(-code).name if code < 0 else None,
                'terminalBase64': base64.b64encode(streams['terminal']).decode('ascii'),
                'stdoutBase64': base64.b64encode(streams['stdout']).decode('ascii'),
                'inputTriggered': triggered, 'inputBytesSent': sent,
                'timedOut': timed_out, 'driverFailure': failure}
        if pipe_report is not None:
            result['stdoutPipe'] = pipe_report
        return result
    finally:
        stop()
        selector.close()
        os.close(master)
        if slave is not None:
            os.close(slave)
        if process is not None and process.stdout is not None:
            process.stdout.close()


if __name__ == '__main__':
    with open(sys.argv[1], encoding='utf-8') as source:
        config = json.load(source)
    print(json.dumps(run_session(config)))
