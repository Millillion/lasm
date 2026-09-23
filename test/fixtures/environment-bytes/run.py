"""Pass dedicated raw test values through execve without JavaScript decoding."""
import json
import os
import subprocess
import sys

configuration = json.load(sys.stdin)
environment = dict(os.environb)
environment[b'LASM_RAW_VALUE'] = bytes.fromhex(configuration['valueHex'])
environment[b'LASM_RAW_EMPTY'] = b''
environment.pop(b'LASM_RAW_UNSET', None)
try:
    result = subprocess.run(configuration['command'], env=environment,
                            stdout=subprocess.PIPE, stderr=subprocess.PIPE, timeout=30)
    json.dump({'status': result.returncode, 'stdoutHex': result.stdout.hex(),
               'stderrHex': result.stderr.hex()}, sys.stdout)
except subprocess.TimeoutExpired:
    # The enclosing test aborts on this marker; the resource guard reaps the
    # process tree before another workload can start.
    json.dump({'timeoutSeconds': 30}, sys.stdout)
