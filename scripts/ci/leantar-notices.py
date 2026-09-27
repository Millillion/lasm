"""Collect pinned leantar source archives and their unmodified license notices.

Run under run-bounded.mjs. Nothing downloaded here is compiled or executed.
All locked dependencies are included, including optional/other-target packages,
so this inventory does not silently infer the contents of a native binary.
"""
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import sys
import tarfile
import tomllib
import urllib.parse
import urllib.request

assert os.environ.get("LASM_RESOURCE_UNIT"), "Use the resource guard"
base = Path(".work/windows-leantar-sources")
assert not base.exists(), "Preserve previous collection evidence"
base.mkdir(parents=True)
archives = base / "archives"
archives.mkdir()
reserve = 4 * 1024 ** 3
downloaded = 0
records = []
commit = "46485d0eca748ed2d2678e70d59949bbc602f32c"
expected_lock = "23107428e6ad6247e058bc01e79f25887cdca66a2d4b963350b387a4a5cd4dd9"
notice_name = re.compile(r"LICENSE|LICENCE|COPYING|COPYRIGHT|NOTICE|UNLICENSE|AUTHORS", re.I)
metadata_names = ("Cargo.lock", "Cargo.toml", ".cargo_vcs_info.json")
assert len(sys.argv) <= 2, "Optional argument: a previous collection's archives directory"
reuse = Path(sys.argv[1]).resolve() if len(sys.argv) == 2 else None
if reuse:
    assert reuse.is_relative_to(Path(".work").resolve()) and reuse.is_dir()


def fetch(url, name, expected=None, maximum_bytes=32 * 1024 ** 2):
    global downloaded
    assert name == Path(name).name and "/" not in name
    path = archives / name
    prior = reuse / name if reuse else None
    if expected and prior and prior.is_file():
        assert shutil.disk_usage(base).free >= reserve
        size = prior.stat().st_size
        assert size <= maximum_bytes and downloaded + size <= 96 * 1024 ** 2
        with prior.open("rb") as source:
            actual = hashlib.file_digest(source, "sha256").hexdigest()
        assert actual == expected, f"Reused source checksum mismatch: {name}"
        os.link(prior, path)
        downloaded += size
        print(f"Reverified {name}: {size} bytes", flush=True)
        return path, {"file": "archives/" + name, "url": url, "sha256": actual, "bytes": size}
    assert shutil.disk_usage(base).free >= reserve + maximum_bytes
    digest, size = hashlib.sha256(), 0
    request = urllib.request.Request(url, headers={"User-Agent": "Lasm tool source inventory"})
    with urllib.request.urlopen(request, timeout=60) as response, path.open("xb") as output:
        while data := response.read(256 * 1024):
            size += len(data)
            assert size <= maximum_bytes and downloaded + size <= 96 * 1024 ** 2
            digest.update(data)
            output.write(data)
    actual = digest.hexdigest()
    assert expected is None or actual == expected, f"Source checksum mismatch: {name}"
    downloaded += size
    print(f"Verified {name}: {size} bytes", flush=True)
    return path, {"file": "archives/" + name, "url": url, "sha256": actual, "bytes": size}


def inspect(path, omit=()):
    selected = {}
    total = 0
    with tarfile.open(path, "r|*") as archive:
        for member in archive:
            name = member.name
            assert not name.startswith("/") and ".." not in name.split("/")
            if not member.isfile():
                continue
            basename = Path(name).name
            relative = name.split("/", 1)[-1]
            if basename in omit:
                continue
            if relative in metadata_names or notice_name.search(basename) or re.search(r"(?:^|/)licen[cs]es?/", relative, re.I):
                assert member.size <= 4 * 1024 ** 2
                total += member.size
                assert total <= 16 * 1024 ** 2
                selected[relative] = archive.extractfile(member).read()
    return selected


source, record = fetch(f"https://codeload.github.com/digama0/leangz/tar.gz/{commit}", "leantar-source.tar.gz",
    "62c958ec70f71aa45bd20cc7de851ba15cc2c988a1e495c5c98c6115d576e8e2")
data = inspect(source)
assert hashlib.sha256(data["Cargo.lock"]).hexdigest() == expected_lock
lock = tomllib.loads(data["Cargo.lock"].decode())
packages = lock["package"]
assert len(packages) == 71
notices = []


def record_notices(name, record, data):
    manifest = tomllib.loads(data["Cargo.toml"].decode())
    license_names = [n for n in data if n not in metadata_names]
    if not license_names:
        # Some workspace crates omit root licenses from their registry archive.
        # Recover them only from the exact Git commit carried by that verified
        # crate, never from the repository's moving default branch.
        repository_url = urllib.parse.urlsplit(manifest["package"]["repository"])
        assert repository_url.scheme == "https" and repository_url.netloc == "github.com"
        assert not repository_url.query and not repository_url.fragment
        repository_parts = repository_url.path.strip("/").split("/")
        assert len(repository_parts) >= 2
        # wasm-tools crates point at a workspace subdirectory on a moving branch.
        # Use only that URL's repository identity; the verified crate supplies
        # the immutable revision used below, including for workspace notices.
        assert len(repository_parts) == 2 or (len(repository_parts) >= 4 and repository_parts[2] == "tree")
        owner, project = repository_parts[0], repository_parts[1].removesuffix(".git")
        assert all(re.fullmatch(r"[A-Za-z0-9_.-]+", part) and part not in (".", "..") for part in (owner, project))
        repository = f"https://github.com/{owner}/{project}"
        revision = json.loads(data[".cargo_vcs_info.json"])["git"]["sha1"]
        assert re.fullmatch(r"[a-f0-9]{40}", revision)
        slug = repository.removeprefix("https://github.com/")
        request = urllib.request.Request(f"https://api.github.com/repos/{slug}/contents?ref={revision}", headers={"User-Agent": "Lasm tool source inventory"})
        with urllib.request.urlopen(request, timeout=60) as response:
            body = response.read(1024 ** 2 + 1)
        assert len(body) <= 1024 ** 2
        origins = []
        for entry in json.loads(body):
            filename = entry["path"]
            assert filename == Path(filename).name
            if entry["type"] != "file" or not notice_name.search(filename):
                continue
            url = f"https://raw.githubusercontent.com/{slug}/{revision}/{urllib.parse.quote(filename, safe='')}"
            path, origin = fetch(url, name + "--upstream-" + filename)
            data["upstream/" + filename] = path.read_bytes()
            license_names.append("upstream/" + filename)
            origins.append(origin)
        record["upstreamNotices"] = {"repository": repository, "commit": revision, "files": origins}
    assert license_names, f"No embedded license found: {name}"
    record.update(package=name, declaredLicense=manifest["package"].get("license"), notices=license_names)
    for filename in license_names:
        # Preserve notice text verbatim; the separator identifies its source.
        notices.append(f"\n===== {name}: {filename} =====\n".encode() + data[filename])
    records.append(record)
    (base / "manifest.json").write_text(json.dumps({"sourceCommit": commit, "lockSha256": expected_lock,
        "scope": "All locked source packages and unmodified notices; no build or binary acceptance", "packages": records}, indent=2) + "\n")


record_notices("leangz-0.1.20", record, data)
for package in packages:
    if package["name"] == "leangz":
        assert package["version"] == "0.1.20" and "source" not in package
        continue
    assert package["source"] == "registry+https://github.com/rust-lang/crates.io-index"
    name = package["name"] + "-" + package["version"]
    filename = name + ".crate"
    url = f"https://static.crates.io/crates/{package['name']}/{urllib.parse.quote(filename, safe='')}"
    path, record = fetch(url, filename, package["checksum"])
    record_notices(name, record, inspect(path))

# The statically linked Rust standard library carries separate third-party
# notices. Rust packages COPYRIGHT-library.html in rustc, not rust-std; read it
# from the matching official compiler distribution without executing its code.
rust_manifest, rust_manifest_record = fetch("https://static.rust-lang.org/dist/channel-rust-1.98.1.toml", "rust-1.98.1.toml",
    "a7c8774a5fd8441c997d94c029776cbc5eb111e9d72ab5d256fa69866644347e")
rust = tomllib.loads(rust_manifest.read_text())
assert rust["pkg"]["rust"]["version"] == "1.98.1 (48a229cea 2026-09-01)"
component = rust["pkg"]["rustc"]["target"]["aarch64-pc-windows-msvc"]
rust_url = "https://static.rust-lang.org/dist/2026-09-03/rustc-1.98.1-aarch64-pc-windows-msvc.tar.xz"
rust_sha = "1beca996ad1072b1b8184d53f7ab7d0864f291cebd3464fb5dd48523004636f0"
assert component["xz_url"] == rust_url and component["xz_hash"] == rust_sha
rust_archive, rust_record = fetch(rust_url, "rustc-1.98.1-aarch64-pc-windows-msvc.tar.xz", rust_sha, 64 * 1024 ** 2)
rust_notices = inspect(rust_archive, omit=("COPYRIGHT.html",))
assert any(name.endswith("COPYRIGHT-library.html") for name in rust_notices), "Missing standard-library dependency notices"
rust_notice_dir = base / "rust-std-notices"
for name, contents in rust_notices.items():
    destination = rust_notice_dir / name
    destination.parent.mkdir(parents=True, exist_ok=True)
    destination.write_bytes(contents)
rust_record.update(version=rust["pkg"]["rust"]["version"], manifest=rust_manifest_record,
    notices={name: hashlib.sha256(value).hexdigest() for name, value in rust_notices.items()})
(base / "manifest.json").write_text(json.dumps({"sourceCommit": commit, "lockSha256": expected_lock,
    "scope": "All locked source packages and unchanged notices, plus exact Rust standard-library notices; no binary acceptance",
    "packages": records, "rustStd": rust_record}, indent=2) + "\n")

(base / "THIRD_PARTY_NOTICES.txt").write_bytes(b"".join(notices))
(base / "README.md").write_text(
    "# Pinned leantar source and notices\n\n"
    f"Source: https://github.com/digama0/leangz/tree/{commit}\n\n"
    "The archives contain the unchanged application source and every package in its Cargo.lock, "
    "including optional dependencies and dependencies for other targets. Registry archive "
    "checksums are verified against that lock. No package scripts are executed. "
    "THIRD_PARTY_NOTICES.txt preserves the license/copyright texts found in those archives "
    "or, where omitted by a workspace crate, at its embedded exact source commit.\n\n"
    "The native binary was built with Rust 1.98.1 for aarch64-pc-windows-msvc; "
    "the separate bootstrap receipt records the compiler, source and binary identities. "
    "rust-std-notices contains the unchanged notices from that exact official compiler distribution, "
    "including COPYRIGHT-library.html for its dependencies. No Rust binary is executed here.\n")
result = {"passed": True, "sourceCommit": commit, "lockSha256": expected_lock,
    "packages": len(records), "verifiedInputBytes": downloaded,
    "compressedSourceBytes": sum(record["bytes"] for record in records),
    "noticesSha256": hashlib.sha256((base / "THIRD_PARTY_NOTICES.txt").read_bytes()).hexdigest(),
    "rustStd": rust_record,
    "scope": "Source and notices only; final binary distribution packaging remains separate"}
(base / "result.json").write_text(json.dumps(result, indent=2) + "\n")
print(json.dumps(result, indent=2))
