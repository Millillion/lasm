"""Stream an SDK archive as tar; Node validates all paths, links and sizes.

This helper never extracts onto the filesystem. It runs under the pinned private
Python with -I -B; zip members are copied incrementally rather than read in full.
"""
import lzma
import stat
import sys
import tarfile
import zipfile

kind, path = sys.argv[1:]
if kind == "tar.xz":
    # Bound the XZ dictionary and each decoded chunk. Support concatenated XZ
    # streams; incomplete streams and trailing garbage fail closed.
    decoder = lzma.LZMADecompressor(format=lzma.FORMAT_XZ, memlimit=128 * 1024**2)
    ended = False
    with open(path, "rb") as source:
        while block := source.read(64 * 1024):
            if ended:
                decoder = lzma.LZMADecompressor(format=lzma.FORMAT_XZ, memlimit=128 * 1024**2)
                ended = False
            while True:
                sys.stdout.buffer.write(decoder.decompress(block, max_length=64 * 1024))
                block = b""
                if decoder.eof:
                    ended = True
                    block = decoder.unused_data
                    if block:
                        decoder = lzma.LZMADecompressor(format=lzma.FORMAT_XZ, memlimit=128 * 1024**2)
                        ended = False
                        continue
                    break
                if decoder.needs_input:
                    break
    if not ended:
        raise ValueError("Truncated XZ archive")
elif kind == "zip":
    with zipfile.ZipFile(path) as source, tarfile.open(fileobj=sys.stdout.buffer, mode="w|") as output:
        for member in source.infolist():
            entry = tarfile.TarInfo(member.filename)
            mode = member.external_attr >> 16
            entry.mode = stat.S_IMODE(mode) or (0o755 if member.is_dir() else 0o644)
            if member.is_dir():
                entry.type = tarfile.DIRTYPE
                output.addfile(entry)
            elif stat.S_ISLNK(mode):
                if member.file_size > 4096:
                    raise ValueError("Oversized ZIP symlink")
                entry.type = tarfile.SYMTYPE
                entry.linkname = source.read(member).decode("utf-8")
                output.addfile(entry)
            else:
                if stat.S_IFMT(mode) not in (0, stat.S_IFREG):
                    raise ValueError("Special ZIP entry")
                entry.size = member.file_size
                with source.open(member) as contents:
                    output.addfile(entry, contents)
else:
    raise ValueError("Unsupported SDK archive format")
