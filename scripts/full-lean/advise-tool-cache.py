"""Release completed CI build/cache file pages without changing files or limits.

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
            advise_tree(tree, str(tree.relative_to(cache)), synchronized, evidence)


def advise_tree(tree, key, synchronized, evidence):
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
    evidence['trees'][key] = {'files': files, 'bytes': size}
    evidence['adviceCalls'] += files
    evidence['advisedBytesIncludingRepeats'] += size


def advise_applications(project, synchronized, evidence):
    # Only published application caches under .lake/lasm/applications. Plain
    # Node startup measurements use the separately copied dist, which is excluded.
    for directory, names, files in os.walk(project, followlinks=False):
        names[:] = [name for name in names if name not in ('node_modules', '.git')
                    and not os.path.islink(os.path.join(directory, name))]
        if '.lake' not in names:
            continue
        names.remove('.lake')
        parent = Path(directory) / '.lake/lasm/applications'
        if not parent.is_dir() or parent.is_symlink() or parent.parent.is_symlink():
            continue
        for source in parent.iterdir():
            if not re.fullmatch('[a-f0-9]{16}', source.name) or source.is_symlink() or not source.is_dir():
                continue
            for version in source.iterdir():
                if not re.fullmatch('[a-f0-9]{64}', version.name) or version.is_symlink() or not version.is_dir():
                    continue
                tree = version / 'dist'
                receipt = tree / '.lasm-application.json'
                if tree.is_symlink() or receipt.is_symlink() or not receipt.is_file():
                    continue
                advise_tree(tree, 'applications/' + str(tree.relative_to(project)), synchronized, evidence)


def main():
    group = require_guard()
    cache, report, stop, *projects = map(Path, sys.argv[1:])
    assert len(projects) <= 1
    assert cache.is_absolute() and not cache.is_symlink()
    assert all(project.is_absolute() and not project.is_symlink() for project in projects)
    synchronized = set()
    evidence = {'method': 'fdatasync once per completed immutable cache tree; repeated POSIX_FADV_DONTNEED',
                'scope': 'Completed immutable tools and optional application build caches only; excludes deployment files, package, staging and SDK state. No file changes, global cache drops or resource-limit changes',
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
            for project in projects:
                advise_applications(project, synchronized, evidence)
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
