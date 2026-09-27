"""Pack verified source/notices without copying or executing compiler binaries.

Input paths are explicit maintainer artifacts. The output accompanies a native
tool distribution; it does not establish that distribution's native acceptance.
"""
import gzip
import hashlib
import json
import os
from pathlib import Path
import shutil
import tarfile

assert os.environ.get("LASM_RESOURCE_UNIT"), "Use the resource guard"
collected = Path(".work/windows-leantar-sources")
result = json.loads((collected / "result.json").read_text())
manifest = json.loads((collected / "manifest.json").read_text())
assert result["passed"] and result["packages"] == len(manifest["packages"]) == 71
assert result["sourceCommit"] == "46485d0eca748ed2d2678e70d59949bbc602f32c"
root = Path(".work/windows-arm64-tool-notices")
assert not root.exists(), "Preserve previous distribution evidence"
root.mkdir()
assert shutil.disk_usage(root).free >= 4 * 1024 ** 3 + 32 * 1024 ** 2
files = {}


def digest(path):
    with path.open("rb") as stream:
        return hashlib.file_digest(stream, "sha256").hexdigest()


def add(name, path, expected=None):
    assert name not in files and not name.startswith("/") and ".." not in name.split("/")
    assert path.is_file() and not path.is_symlink()
    actual = digest(path)
    assert expected is None or actual == expected, f"Input changed: {name}"
    files[name] = {"path": path, "sha256": actual, "bytes": path.stat().st_size}


for package in manifest["packages"]:
    add("leantar/" + package["file"], collected / package["file"], package["sha256"])
    for notice in package.get("upstreamNotices", {}).get("files", []):
        add("leantar/" + notice["file"], collected / notice["file"], notice["sha256"])
add("leantar/THIRD_PARTY_NOTICES.txt", collected / "THIRD_PARTY_NOTICES.txt", result["noticesSha256"])
for name in ["manifest.json", "README.md", "result.json"]:
    add("leantar/" + name, collected / name)
for name, sha in result["rustStd"]["notices"].items():
    add("leantar/rust-std-notices/" + name, collected / "rust-std-notices" / name, sha)
rust_manifest = result["rustStd"]["manifest"]
add("leantar/" + rust_manifest["file"], collected / rust_manifest["file"], rust_manifest["sha256"])

recipe_revision = "c9e5b84b9bd7ac93517ffc177522606b9762c1e5"
gmp_source = Path(".cache/downloads/gmp-6.3.0-origin.tar.xz")
gmp_files = [
    ("gmp-6.3.0.tar.xz", gmp_source, "a3c2b80201b89e68616f4ad30bc66aee4927c3ce50e33929ca819d5c43538898"),
    ("PKGBUILD", Path(".work/macos/gmp-PKGBUILD-pinned"), "f2df0131077241974efc2680d9afe672dc217c91a3fa645b63b0cc162a2a7ae9"),
    ("do-not-use-dllimport.diff", Path(".work/macos/gmp-do-not-use-dllimport.diff"), "385ab704f82c47f3aecc9141f43c96e7b8de2bf0e654dc457ce0f1a039db2c68"),
    ("gmp-staticlib.diff", Path(".work/macos/gmp-staticlib.diff"), "7c3cde2634baa2cb1c31404bbfed2d8d7ba33556971ac842a08f2e87667849ab"),
]
for name, path, sha in gmp_files:
    add("gmp/" + name, path, sha)
notices = root / "gmp-notices"
notices.mkdir()
with tarfile.open(gmp_source, "r|xz") as archive:
    for member in archive:
        if member.isfile() and member.name.startswith("gmp-6.3.0/COPYING"):
            assert len(member.name.split("/")) == 2 and member.size < 128 * 1024
            destination = notices / Path(member.name).name
            destination.write_bytes(archive.extractfile(member).read())
            add("gmp/" + destination.name, destination)
assert (notices / "COPYING.LESSERv3").is_file() and (notices / "COPYINGv3").is_file()

readme = root / "README.txt"
readme.write_text(
    "Source and notices accompanying the Lasm native Windows ARM64 tools\n\n"
    "leantar/: unchanged source at commit " + result["sourceCommit"] + ", all locked crates, "
    "their notices, and Rust 1.98.1 standard-library notices. Optional/other-target crates are "
    "included conservatively; the inventory does not claim that each is linked into leantar. "
    "The Rust compiler archive recorded as a verification input in the manifest is not redistributed here.\n\n"
    "gmp/: complete upstream GMP 6.3.0 source, unmodified license texts, and the MSYS2 6.3.0-2 "
    "build recipe and patches at https://github.com/msys2/MINGW-packages/tree/" + recipe_revision + "/mingw-w64-gmp . "
    "The recipe builds the shared library for CLANGARM64. The tool distribution receipt must "
    "confirm this library version before using this companion archive.\n\n"
    "This collection contains no native compiler binaries and establishes no installed-package acceptance.\n")
add("README.txt", readme)
inventory = root / "manifest.json"
inventory.write_text(json.dumps({"schema": 1, "scope": "Verified unchanged sources and notices; native distribution acceptance is separate",
    "leantarCommit": result["sourceCommit"], "gmpVersion": "6.3.0-2", "gmpRecipeCommit": recipe_revision,
    "files": {name: {k: item[k] for k in ("sha256", "bytes")} for name, item in sorted(files.items())}}, indent=2) + "\n")
add("manifest.json", inventory)


def pack(destination):
    with destination.open("xb") as raw, gzip.GzipFile(filename="", mode="wb", fileobj=raw, mtime=0) as compressed:
        with tarfile.open(fileobj=compressed, mode="w|") as archive:
            for name, item in sorted(files.items()):
                info = tarfile.TarInfo("install/" + name)
                info.size, info.mode, info.mtime = item["bytes"], 0o644, 0
                with item["path"].open("rb") as stream:
                    archive.addfile(info, stream)


archive = root / "windows-arm64-tool-notices-v1.tar.gz"
pack(archive)
second = root / "reproducibility-control.tar.gz"
pack(second)
assert digest(archive) == digest(second)
expected = {"install/" + name: item["sha256"] for name, item in files.items()}
observed = {}
with tarfile.open(archive, "r|gz") as packed:
    for member in packed:
        assert member.isfile() and member.name in expected and member.name not in observed
        observed[member.name] = hashlib.file_digest(packed.extractfile(member), "sha256").hexdigest()
assert observed == expected
receipt = {"passed": True, "scope": "Reproducible verified source/notice archive; not native tool or installed application acceptance",
    "archive": str(archive), "sha256": digest(archive), "bytes": archive.stat().st_size,
    "unpackedBytes": sum(item["bytes"] for item in files.values()), "files": len(files),
    "reproduciblePacking": True, "allArchivedFilesVerified": True,
    "leantarCommit": result["sourceCommit"], "gmpVersion": "6.3.0-2", "gmpRecipeCommit": recipe_revision}
(root / "result.json").write_text(json.dumps(receipt, indent=2) + "\n")
print(json.dumps(receipt, indent=2))
