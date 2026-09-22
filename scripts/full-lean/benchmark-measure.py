#!/usr/bin/env python3
"""Parallel benchmark measurement adapter for hosts without perf permission.

Preserves the original command, output and exit status. Only measured wall time,
child CPU time and max RSS are reported; hardware counters are not available.
This adapter is outside the upstream tree and is opt-in in the suite manifest.
"""
import argparse
import json
import resource
import subprocess
import sys
import time


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('-t', '--topic', action='append', default=[])
    parser.add_argument('-o', '--output', required=True)
    parser.add_argument('-a', '--append', action='store_true')
    parser.add_argument('-d', '--default-metrics', action='store_true')
    parser.add_argument('-m', '--metric', action='append', default=[])
    parser.add_argument('command', nargs=argparse.REMAINDER)
    args = parser.parse_args()
    command = args.command
    if command[:1] == ['--']:
        command = command[1:]
    if not command:
        parser.error('a command is required')
    supported = {'wall-clock', 'task-clock', 'maxrss'}
    selected = set(args.metric) | (supported if args.default_metrics else set())
    if selected - supported:
        parser.error('hardware performance counters are unavailable in this adapter')
    before = resource.getrusage(resource.RUSAGE_CHILDREN)
    start = time.monotonic()
    result = subprocess.run(command)
    wall = time.monotonic() - start
    after = resource.getrusage(resource.RUSAGE_CHILDREN)
    if result.returncode:
        return result.returncode if result.returncode > 0 else 128 - result.returncode
    measurements = {
        'wall-clock': (wall, 's'),
        'task-clock': (after.ru_utime + after.ru_stime - before.ru_utime - before.ru_stime, 's'),
        'maxrss': (after.ru_maxrss * (1 if sys.platform == 'darwin' else 1024), 'B'),
    }
    with open(args.output, 'a' if args.append else 'w') as output:
        for metric in sorted(selected):
            value, unit = measurements[metric]
            for topic in args.topic:
                output.write(json.dumps({'metric': f'{topic}//{metric}', 'value': value, 'unit': unit}) + '\n')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
