"""Fetch a pinned official C API solely for the bounded helper experiment."""
import hashlib
import json
import pathlib
import resource
import shutil
import tarfile
import urllib.request

resource.setrlimit(resource.RLIMIT_AS, (256 * 1024**2, 256 * 1024**2))
root = pathlib.Path(__file__).resolve().parents[2]
version = "49.0.0"
name = f"wasmtime-v{version}-x86_64-linux-c-api"
digest = "8f181711f4cf4ddd084d7d54d13d10d44e3c622b0f03bfb8b2cc7afbd85cc131"
length = 16115964
url = f"https://github.com/bytecodealliance/wasmtime/releases/download/v{version}/{name}.tar.xz"
archive = root / ".cache/downloads" / (name + ".tar.xz")
output = root / (".cache/wasmtime-" + version)
archive.parent.mkdir(parents=True, exist_ok=True)


def sha(path):
    with path.open("rb") as stream:
        return hashlib.file_digest(stream, "sha256").hexdigest()


if not archive.exists():
    partial = archive.with_suffix(".partial")
    with urllib.request.urlopen(url, timeout=60) as source, partial.open("xb") as dest:
        size = 0
        while chunk := source.read(1024 * 1024):
            size += len(chunk)
            if size > length:
                raise ValueError("Archive exceeds pinned size")
            dest.write(chunk)
    if partial.stat().st_size != length or sha(partial) != digest:
        raise ValueError("Official Wasmtime archive checksum mismatch")
    partial.rename(archive)
assert archive.stat().st_size == length and sha(archive) == digest

# Always compare cached files to the verified archive, not merely to an editable
# receipt beside them. Extraction is streamed and limited to headers/library/legal
# files; the large static library and executables are not materialized.
existing = output.exists()
destination = output if existing else output.with_name(output.name + ".partial")
if not existing:
    destination.mkdir()
files = {}
with tarfile.open(archive, "r|xz") as contents:
    total = 0
    for member in contents:
        parts = pathlib.PurePosixPath(member.name).parts
        if not parts or parts[0] != name or ".." in parts:
            raise ValueError("Unexpected archive path")
        relative = pathlib.PurePosixPath(*parts[1:]).as_posix()
        selected = relative.startswith("include/") or relative in ("lib/libwasmtime.so", "LICENSE", "README.md")
        if not selected or member.isdir():
            continue
        assert member.isfile() and relative not in files
        total += member.size
        assert total <= 64 * 1024**2
        target = destination / relative
        if existing:
            with contents.extractfile(member) as source:
                record = {"bytes": member.size, "sha256": hashlib.file_digest(source, "sha256").hexdigest()}
            assert target.is_file() and target.stat().st_size == record["bytes"] and sha(target) == record["sha256"], relative
        else:
            target.parent.mkdir(parents=True, exist_ok=True)
            with contents.extractfile(member) as source, target.open("xb") as dest:
                shutil.copyfileobj(source, dest, 1024 * 1024)
            record = {"bytes": target.stat().st_size, "sha256": sha(target)}
            assert record["bytes"] == member.size
        files[relative] = record
assert len(files) == 115
assert files["lib/libwasmtime.so"]["sha256"] == "9594714d3c73c3087ab3d42d9614cf72973b25c181b8625ffcc46a8a75972d7e"
receipt = {"version": version, "archiveSha256": digest, "archiveBytes": length, "url": url, "selectedFiles": files}
if existing:
    assert json.loads((output / "download.json").read_text()) == receipt
else:
    (destination / "download.json").write_text(json.dumps(receipt, indent=2) + "\n")
    destination.rename(output)
print(json.dumps({"version": version, "archiveSha256": digest, "files": len(files), "selectedBytes": total}))
