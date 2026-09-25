"""Launch an unchanged command with an actual POSIX byte-valued cwd."""
import base64
import json
import os
import pathlib
import subprocess
import sys

config = json.loads(pathlib.Path(sys.argv[1]).read_text())
directory = base64.b64decode(config['cwdBase64'], validate=True)
assert os.path.isabs(directory) and b'\0' not in directory
command = config['command']
assert command and all(isinstance(value, str) and '\0' not in value for value in command)
try:
    result = subprocess.run(command, cwd=directory, env=os.environ.copy(),
                            capture_output=True, timeout=30)
    value = {'code': result.returncode, 'stdoutBase64': base64.b64encode(result.stdout).decode(),
             'stderrBase64': base64.b64encode(result.stderr).decode(), 'timedOut': False}
except subprocess.TimeoutExpired as error:
    value = {'code': None, 'stdoutBase64': base64.b64encode(error.stdout or b'').decode(),
             'stderrBase64': base64.b64encode(error.stderr or b'').decode(), 'timedOut': True}
print(json.dumps(value))
