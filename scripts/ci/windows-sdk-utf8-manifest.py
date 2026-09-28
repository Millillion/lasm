"""Maintainer-only UTF-8 manifest repair for copied, unsigned ARM64 tools."""
import ctypes
from ctypes import wintypes
import hashlib
import json
import os
from pathlib import Path
import struct
import sys
import xml.etree.ElementTree as ET


def digest(data):
    return hashlib.sha256(data).hexdigest()


def coff_symbols(data):
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    pointer, count = struct.unpack_from("<II", data, pe + 12)
    if not pointer:
        assert count == 0
        return None
    strings = pointer + count * 18
    assert strings + 4 <= len(data)
    length = struct.unpack_from("<I", data, strings)[0]
    assert length >= 4 and strings + length <= len(data)
    return {"pointer": pointer, "count": count, "strings": strings,
            "stringBytes": length, "bytes": data[pointer:strings + length]}


def pe_identity(data):
    """Preserve loaded code/data, entry point and preferred base across repair."""
    assert data[:2] == b"MZ"
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    assert data[pe:pe + 4] == b"PE\0\0"
    machine, count = struct.unpack_from("<HH", data, pe + 4)
    assert machine == 0xAA64
    optional = pe + 24
    optional_size = struct.unpack_from("<H", data, pe + 20)[0]
    assert optional_size >= 240 and struct.unpack_from("<H", data, optional)[0] == 0x20B
    directory_count = struct.unpack_from("<I", data, optional + 108)[0]
    assert directory_count == 16
    directories = [struct.unpack_from("<II", data, optional + 112 + index * 8)
                   for index in range(directory_count)]
    # Altering a signed executable would invalidate its signature.
    assert directories[4] == (0, 0)
    resource_rva = directories[2][0]
    symbols, symbol_count = struct.unpack_from("<II", data, pe + 12)
    strings = symbols + symbol_count * 18
    coff = coff_symbols(data)

    def section_name(raw_name):
        name = raw_name.rstrip(b"\0").decode("ascii")
        if name.startswith("/"):
            assert symbols and strings + 4 <= len(data)
            length = struct.unpack_from("<I", data, strings)[0]
            offset = int(name[1:])
            assert 4 <= offset < length and strings + length <= len(data)
            end = data.index(b"\0", strings + offset, strings + length)
            name = data[strings + offset:end].decode("ascii")
        return name
    sections = {}
    resource_found = not resource_rva
    for index in range(count):
        offset = optional + optional_size + index * 40
        name = section_name(data[offset:offset + 8])
        virtual_size, rva, size, raw = struct.unpack_from("<IIII", data, offset + 8)
        flags = struct.unpack_from("<I", data, offset + 36)[0]
        assert raw + size <= len(data)
        if resource_rva and rva <= resource_rva < rva + max(virtual_size, size):
            assert name == ".rsrc" and not flags & 0x20000000
            resource_found = True
            continue
        assert name != ".rsrc" and name not in sections
        sections[name] = {"rva": rva, "virtualBytes": virtual_size,
                          "flags": flags, "rawPointer": raw, "rawBytes": size,
                          "sha256": digest(data[raw:raw + size])}
    assert resource_found and sections
    # Validate the relocation directory against its table. Every section RVA
    # is also compared, so neither the table nor its directory may move.
    reloc_rva, reloc_size = directories[5]
    if reloc_rva:
        reloc = sections[".reloc"]
        reloc_offset = reloc_rva - reloc["rva"]
        assert 0 <= reloc_offset and reloc_offset + reloc_size <= reloc["virtualBytes"]
        directories[5] = (".reloc", reloc_offset, reloc_size)
    directories[2] = None  # The resource directory is the intentional edit.
    return {"machine": machine,
            "entryPoint": struct.unpack_from("<I", data, optional + 16)[0],
            "imageBase": struct.unpack_from("<Q", data, optional + 24)[0],
            "coffFlags": struct.unpack_from("<H", data, pe + 22)[0],
            "coffSymbols": None if coff is None else {
                "pointer": coff["pointer"], "count": coff["count"], "sha256": digest(coff["bytes"])},
            "loaderSettings": data[optional + 32:optional + 56].hex()
                + data[optional + 68:optional + 112].hex(),
            "directories": directories,
            "sections": sections}


def verify_preservation(before, after):
    original, updated = pe_identity(before), pe_identity(after)
    assert original == updated, ("PE preservation difference: " + json.dumps({
        "before": original, "after": updated}, sort_keys=True))
    return original


def pe_checksum(data):
    # PE's 16-bit folded sum excludes the four-byte checksum field itself.
    assert sys.byteorder == "little" and len(data) % 2 == 0
    offset = struct.unpack_from("<I", data, 0x3C)[0] + 24 + 64
    view = memoryview(data)
    value = sum(view[:offset].cast("H")) + sum(view[offset + 4:].cast("H"))
    while value >> 16:
        value = (value & 0xFFFF) + (value >> 16)
    return value + len(data)


def append_manifest(before, manifest):
    """Add a resource to a resource-free unsigned PE without relocating anything."""
    identity = pe_identity(before)
    pe = struct.unpack_from("<I", before, 0x3C)[0]
    optional = pe + 24
    count = struct.unpack_from("<H", before, pe + 6)[0]
    optional_size = struct.unpack_from("<H", before, pe + 20)[0]
    assert struct.unpack_from("<II", before, optional + 128) == (0, 0), (
        "This pinned Binaryen repair requires an executable without resources")
    assert 0 < len(manifest) < 65536 and count < 96
    section_alignment, file_alignment = struct.unpack_from("<II", before, optional + 32)
    assert section_alignment >= file_alignment >= 512
    assert not section_alignment & (section_alignment - 1)
    assert not file_alignment & (file_alignment - 1)
    header = optional + optional_size + count * 40
    header_limit = struct.unpack_from("<I", before, optional + 60)[0]
    first_raw = min(s["rawPointer"] for s in identity["sections"].values() if s["rawBytes"])
    assert header + 40 <= min(header_limit, first_raw)
    assert before[header:header + 40] == bytes(40), "No unused section-header slot"
    align = lambda value, alignment: (value + alignment - 1) & -alignment
    maximum_rva = max(s["rva"] + max(s["virtualBytes"], s["rawBytes"])
                      for s in identity["sections"].values())
    rva = align(max(maximum_rva, struct.unpack_from("<I", before, optional + 56)[0]), section_alignment)
    # Resource directories: type RT_MANIFEST (24), name 1, neutral language 0.
    # Each directory has one numeric entry. Offsets in entries are relative to
    # this section; only IMAGE_RESOURCE_DATA_ENTRY contains an absolute RVA.
    payload = bytearray(88 + len(manifest))
    for directory in [0, 24, 48]:
        struct.pack_into("<HH", payload, directory + 12, 0, 1)
    struct.pack_into("<II", payload, 16, 24, 0x80000000 | 24)
    struct.pack_into("<II", payload, 40, 1, 0x80000000 | 48)
    struct.pack_into("<II", payload, 64, 0, 72)
    struct.pack_into("<IIII", payload, 72, rva + 88, len(manifest), 65001, 0)
    payload[88:] = manifest
    raw = align(len(before), file_alignment)
    raw_size = align(len(payload), file_alignment)
    after = bytearray(before)
    after.extend(bytes(raw - len(after)))
    after.extend(payload)
    after.extend(bytes(raw_size - len(payload)))
    struct.pack_into("<8sIIIIIIHHI", after, header, b".rsrc", len(payload), rva,
                     raw_size, raw, 0, 0, 0, 0, 0x40000040)
    struct.pack_into("<H", after, pe + 6, count + 1)
    initialized = struct.unpack_from("<I", before, optional + 8)[0]
    struct.pack_into("<I", after, optional + 8, initialized + raw_size)
    struct.pack_into("<I", after, optional + 56, align(rva + len(payload), section_alignment))
    struct.pack_into("<II", after, optional + 128, rva, len(payload))
    struct.pack_into("<I", after, optional + 64, pe_checksum(after))
    # This stronger whole-file check includes COFF symbols, strings and overlays.
    # Only these declared header fields and the unused header slot may differ.
    restored = bytearray(after[:len(before)])
    header_edits = [(pe + 6, 2), (optional + 8, 4), (optional + 56, 4),
                    (optional + 64, 4), (optional + 128, 8), (header, 40)]
    for offset, size in header_edits:
        restored[offset:offset + size] = before[offset:offset + size]
    assert restored == before, "An original byte outside the declared header edits changed"
    verify_preservation(before, after)
    return bytes(after), {"resourceRva": rva, "resourceRawPointer": raw,
                          "resourceBytes": len(payload), "originalBytes": len(before),
                          "addedBytes": len(after) - len(before),
                          "headerEdits": [{"offset": o, "bytes": n} for o, n in header_edits]}


def utf8_manifest(original):
    v1 = "urn:schemas-microsoft-com:asm.v1"
    v3 = "urn:schemas-microsoft-com:asm.v3"
    settings = "http://schemas.microsoft.com/SMI/2019/WindowsSettings"
    ET.register_namespace("", v1)
    ET.register_namespace("asmv3", v3)
    ET.register_namespace("ws2019", settings)
    if original:
        root = ET.fromstring(original)
        assert root.tag == "{" + v1 + "}assembly"
    else:
        root = ET.Element("{" + v1 + "}assembly", {"manifestVersion": "1.0"})
        ET.SubElement(root, "{" + v1 + "}assemblyIdentity", {
            "type": "win32", "name": "Lasm.Binaryen.UTF8", "version": "1.0.0.0"})
    # Existing runtime settings are retained, including privilege requirements.
    assert not root.findall(".//{" + settings + "}activeCodePage")
    applications = root.findall("{" + v3 + "}application")
    assert len(applications) <= 1
    application = applications[0] if applications else ET.SubElement(root, "{" + v3 + "}application")
    windows = application.findall("{" + v3 + "}windowsSettings")
    assert len(windows) <= 1
    window = windows[0] if windows else ET.SubElement(application, "{" + v3 + "}windowsSettings")
    ET.SubElement(window, "{" + settings + "}activeCodePage").text = "UTF-8"
    return ET.tostring(root, encoding="utf-8", xml_declaration=True)


def repair(file, expected):
    assert os.name == "nt"
    file = file.resolve()
    assert Path(".work").resolve() in file.parents
    before = file.read_bytes()
    assert digest(before) == expected
    manifest = utf8_manifest(None)
    after, addition = append_manifest(before, manifest)
    file.write_bytes(after)
    assert file.read_bytes() == after
    # Independently verify the checksum and resource through Windows itself.
    imagehlp = ctypes.WinDLL("imagehlp", use_last_error=True)
    imagehlp.CheckSumMappedFile.argtypes = [ctypes.c_void_p, wintypes.DWORD,
                                          ctypes.POINTER(wintypes.DWORD), ctypes.POINTER(wintypes.DWORD)]
    imagehlp.CheckSumMappedFile.restype = ctypes.c_void_p
    buffer = ctypes.create_string_buffer(after)
    stored, computed = wintypes.DWORD(), wintypes.DWORD()
    assert imagehlp.CheckSumMappedFile(buffer, len(after), ctypes.byref(stored), ctypes.byref(computed))
    assert stored.value == computed.value == pe_checksum(after)
    kernel = ctypes.WinDLL("kernel32", use_last_error=True)
    handle, pointer = wintypes.HANDLE, ctypes.c_void_p
    kernel.LoadLibraryExW.argtypes = [wintypes.LPCWSTR, handle, wintypes.DWORD]
    kernel.LoadLibraryExW.restype = handle
    kernel.FreeLibrary.argtypes = [handle]
    kernel.FreeLibrary.restype = wintypes.BOOL
    kernel.FindResourceExW.argtypes = [handle, pointer, pointer, wintypes.WORD]
    kernel.FindResourceExW.restype = handle
    kernel.LoadResource.argtypes = [handle, handle]
    kernel.LoadResource.restype = handle
    kernel.SizeofResource.argtypes = [handle, handle]
    kernel.SizeofResource.restype = wintypes.DWORD
    kernel.LockResource.argtypes = [handle]
    kernel.LockResource.restype = pointer
    # Data-file mapping never executes the program or DLL entry points.
    library = kernel.LoadLibraryExW(str(file), None, 0x02 | 0x20)
    if not library:
        raise ctypes.WinError(ctypes.get_last_error())
    try:
        resource = kernel.FindResourceExW(library, pointer(24), pointer(1), 0)
        assert resource
        length = kernel.SizeofResource(library, resource)
        address = kernel.LockResource(kernel.LoadResource(library, resource))
        assert address and length == len(manifest)
        assert ctypes.string_at(address, length) == manifest
    finally:
        assert kernel.FreeLibrary(library)
    return {"file": str(file), "originalSha256": expected, "patchedSha256": digest(after),
            "method": "Append one resource section; preserve every original section and overlay byte",
            "preservedExecutionIdentity": verify_preservation(before, after),
            "resourceAddition": addition, "windowsChecksumVerified": True,
            "manifests": [{"language": 0, "originalSha256": None,
                           "patchedSha256": digest(manifest), "xml": manifest.decode("utf-8")} ]}


if __name__ == "__main__":
    assert len(sys.argv) == 4
    result = repair(Path(sys.argv[1]), sys.argv[2])
    Path(sys.argv[3]).write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({key: result[key] for key in ["file", "originalSha256", "patchedSha256"]}))
