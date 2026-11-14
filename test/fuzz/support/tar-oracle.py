# The tar fuzz target's oracle (test/fuzz/targets/tar.mjs): Python's tarfile.
# Reads one archive per line (hex) on stdin and writes one JSON line per
# archive: {"ok": false} when tarfile refuses it or cannot read an entry's
# bytes, otherwise {"ok": true, "entries": [...]}, each entry's path, link
# path and bytes in hex (UTF-8, as tarfile decodes them).
import io, json, os, sys, tarfile

TYPES = {tarfile.REGTYPE: 'File', tarfile.AREGTYPE: 'File', tarfile.CONTTYPE: 'File', tarfile.LNKTYPE: 'Link',
         tarfile.SYMTYPE: 'SymbolicLink', tarfile.CHRTYPE: 'CharacterDevice', tarfile.BLKTYPE: 'BlockDevice',
         tarfile.DIRTYPE: 'Directory', tarfile.FIFOTYPE: 'FIFO'}

def read(data):
    entries = []
    with tarfile.open(fileobj=io.BytesIO(data), mode='r:', encoding='utf-8', errors='surrogateescape') as archive:
        for member in archive:
            kind = TYPES.get(member.type, 'Other:' + member.type.decode('latin1'))
            entry = {'path': os.fsencode(member.name).hex(), 'type': kind, 'mode': member.mode & 0o7777, 'size': member.size,
                     'linkpath': os.fsencode(member.linkname).hex()}
            if kind == 'File':
                handle = archive.extractfile(member)
                body = handle.read()
                if len(body) != member.size: raise EOFError('short data')
                entry['data'] = body.hex()
            entries.append(entry)
    return entries

for line in sys.stdin:
    try: result = {'ok': True, 'entries': read(bytes.fromhex(line.strip()))}
    except Exception as error: result = {'ok': False, 'error': type(error).__name__ + ': ' + str(error)[:200]}
    sys.stdout.write(json.dumps(result) + '\n')
    sys.stdout.flush()
