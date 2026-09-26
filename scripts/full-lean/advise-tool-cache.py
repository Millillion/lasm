"""Release completed CI tool-file cache pages without changing files or limits.

This maintainer sidecar stays outside the installed consumer's Landlock domain,
inside its resource cgroup. Python is not exposed to the tested package. Linux
fadvise is advisory: the unchanged proactive memory guard remains authoritative.
See https://man7.org/linux/man-pages/man2/posix_fadvise.2.html.
"""
import errno
import json
import os
from pathlib import Path
import re
import stat
import sys
import time


def require_guard():
    group = Path('/sys/fs/cgroup') / Path('/proc/self/cgroup').read_text().strip().split('::', 1)[1].lstrip('/')
    if (group.name != os.environ.get('LASM_RESOURCE_UNIT')
            or not 0 < int((group / 'memory.max').read_text()) <= 10 * 1024 ** 3
            or (group / 'memory.high').read_text().strip() != 'max'
            or (group / 'memory.oom.group').read_text().strip() != '1'):
        raise RuntimeError('Run this maintainer control inside the existing resource guard')
    return group


def advise_completed(cache, synchronized, evidence):
    # Published receipts distinguish complete immutable trees from in-flight
    # extraction. Do not touch staging files, SDK state, package or program output.
    for kind in ('artifacts', 'derived'):
        parent = cache / kind
        if not parent.is_dir() or parent.is_symlink():
            continue
        for tree in parent.iterdir():
            if (not re.fullmatch('[a-f0-9]{64}', tree.name) or tree.is_symlink()
                    or not tree.is_dir()):
                continue
            receipt = tree / '.lasm-artifact.json'
            if receipt.is_symlink() or not receipt.is_file():
                continue
            first = str(tree) not in synchronized
            files, size = 0, 0
            for directory, names, filenames, descriptor in os.fwalk(tree, follow_symlinks=False):
                names[:] = [name for name in names if not os.path.islink(os.path.join(directory, name))]
                for name in filenames:
                    try:
                        fd = os.open(name, os.O_RDONLY | os.O_NOFOLLOW | os.O_NONBLOCK, dir_fd=descriptor)
                    except (FileNotFoundError, IsADirectoryError):
                        continue
                    except OSError as error:
                        if error.errno == errno.ELOOP:  # Never follow file symlinks.
                            continue
                        raise
                    try:
                        info = os.fstat(fd)
                        if not stat.S_ISREG(info.st_mode):
                            continue
                        if first:
                            os.fdatasync(fd)
                        os.posix_fadvise(fd, 0, 0, os.POSIX_FADV_DONTNEED)
                        files += 1
                        size += info.st_size
                    finally:
                        os.close(fd)
            synchronized.add(str(tree))
            evidence['trees'][str(tree.relative_to(cache))] = {'files': files, 'bytes': size}
            evidence['adviceCalls'] += files
            evidence['advisedBytesIncludingRepeats'] += size


def main():
    group = require_guard()
    cache, report, stop = map(Path, sys.argv[1:])
    assert cache.is_absolute() and not cache.is_symlink()
    synchronized = set()
    evidence = {'method': 'fdatasync once per published tool tree; repeated POSIX_FADV_DONTNEED',
                'scope': 'Completed immutable artifacts and derived tools only; no file changes, global cache drops or resource-limit changes',
                'cache': str(cache), 'trees': {}, 'passes': 0, 'adviceCalls': 0,
                'advisedBytesIncludingRepeats': 0, 'status': 'running'}

    def save():
        temporary = report.with_suffix('.tmp')
        temporary.write_text(json.dumps(evidence, indent=2) + '\n')
        temporary.replace(report)

    def cached_bytes():
        return dict(line.split() for line in (group / 'memory.stat').read_text().splitlines())['file']

    try:
        save()
        while not stop.exists():
            evidence['fileBytesBeforeLastPass'] = int(cached_bytes())
            advise_completed(cache, synchronized, evidence)
            evidence['fileBytesAfterLastPass'] = int(cached_bytes())
            evidence['passes'] += 1
            save()
            time.sleep(2)
        evidence['status'] = 'finished'
    except BaseException as error:
        evidence.update(status='failed', error=repr(error))
        raise
    finally:
        save()


if __name__ == '__main__':
    main()
