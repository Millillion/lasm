"""Atomic CI evidence writes tolerant of brief Windows sharing contention.

Periodic saves never sleep: the supervisor must continue checking resources.
Final saves may retry only after the supervisor has closed its workload job.
Permanent failures retain the previous complete JSON and fail closed.
"""
import json
import os
from pathlib import Path
import time


class AtomicReport:
    def __init__(self, path, *, timeout=5.0, replace=os.replace,
                 clock=time.monotonic, sleep=time.sleep):
        self.path = Path(path)
        self.temporary = self.path.with_suffix(self.path.suffix + '.partial')
        self.timeout = timeout
        self.replace = replace
        self.clock = clock
        self.sleep = sleep
        self.pending_since = None
        self.contentions = 0

    def save(self, evidence, *, final=False):
        final_deadline = self.clock() + self.timeout if final else None
        while True:
            try:
                evidence['reportWriteContentions'] = self.contentions
                self.temporary.write_text(json.dumps(evidence, indent=2) + '\n', encoding='utf-8')
                self.replace(self.temporary, self.path)
                self.pending_since = None
                return True
            except OSError as error:
                # Access denied, sharing violation, lock violation. Do not hide
                # space, quota, IO errors or permission errors on other systems.
                if getattr(error, 'winerror', None) not in (5, 32, 33):
                    raise
                self.contentions += 1
                evidence['reportWriteContentions'] = self.contentions
                now = self.clock()
                if final:
                    if now >= final_deadline:
                        raise
                    self.sleep(min(.05, final_deadline - now))
                    continue
                if self.pending_since is None:
                    self.pending_since = now
                if now - self.pending_since >= self.timeout:
                    raise
                return False
