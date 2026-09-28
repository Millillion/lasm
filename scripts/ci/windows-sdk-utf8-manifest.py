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


def pe_identity(data):
    """Preserve loaded code/data, entry point and preferred base across repair."""
    assert data[:2] == b"MZ"
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    assert data[pe:pe + 4] == b"PE\0\0"
    machine, count = struct.unpack_from("<HH", data, pe + 4)
    assert machine == 0xAA64
    optional = pe + 24
    optional_size = struct.unpack_from("<H", data, pe + 20)[0]
    assert optional_size >= 152 and struct.unpack_from("<H", data, optional)[0] == 0x20B
    # Altering a signed executable would invalidate its signature.
    assert struct.unpack_from("<II", data, optional + 112 + 4 * 8) == (0, 0)
    resource_rva = struct.unpack_from("<I", data, optional + 112 + 2 * 8)[0]
    sections = {}
    resource_found = not resource_rva
    for index in range(count):
        offset = optional + optional_size + index * 40
        name = data[offset:offset + 8].rstrip(b"\0").decode("ascii")
        virtual_size, rva, size, raw = struct.unpack_from("<IIII", data, offset + 8)
        flags = struct.unpack_from("<I", data, offset + 36)[0]
        assert raw + size <= len(data)
        if resource_rva and rva <= resource_rva < rva + max(virtual_size, size):
            assert name == ".rsrc" and not flags & 0x20000000
            resource_found = True
            continue
        assert name != ".rsrc" and name not in sections
        sections[name] = {"rva": rva, "virtualBytes": virtual_size,
                          "flags": flags, "sha256": digest(data[raw:raw + size])}
    assert resource_found and sections
    return {"machine": machine,
            "entryPoint": struct.unpack_from("<I", data, optional + 16)[0],
            "imageBase": struct.unpack_from("<Q", data, optional + 24)[0],
            "sections": sections}


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
    identity = pe_identity(before)
    kernel = ctypes.WinDLL("kernel32", use_last_error=True)
    handle = wintypes.HANDLE
    pointer = ctypes.c_void_p
    kernel.LoadLibraryExW.argtypes = [wintypes.LPCWSTR, handle, wintypes.DWORD]
    kernel.LoadLibraryExW.restype = handle
    kernel.FreeLibrary.argtypes = [handle]
    kernel.FreeLibrary.restype = wintypes.BOOL
    callback_type = ctypes.WINFUNCTYPE(wintypes.BOOL, handle, pointer, pointer,
                                      wintypes.WORD, wintypes.LPARAM)
    kernel.EnumResourceLanguagesW.argtypes = [handle, pointer, pointer, callback_type, wintypes.LPARAM]
    kernel.EnumResourceLanguagesW.restype = wintypes.BOOL
    kernel.FindResourceExW.argtypes = [handle, pointer, pointer, wintypes.WORD]
    kernel.FindResourceExW.restype = handle
    kernel.LoadResource.argtypes = [handle, handle]
    kernel.LoadResource.restype = handle
    kernel.SizeofResource.argtypes = [handle, handle]
    kernel.SizeofResource.restype = wintypes.DWORD
    kernel.LockResource.argtypes = [handle]
    kernel.LockResource.restype = pointer
    kernel.BeginUpdateResourceW.argtypes = [wintypes.LPCWSTR, wintypes.BOOL]
    kernel.BeginUpdateResourceW.restype = handle
    kernel.UpdateResourceW.argtypes = [handle, pointer, pointer, wintypes.WORD, pointer, wintypes.DWORD]
    kernel.UpdateResourceW.restype = wintypes.BOOL
    kernel.EndUpdateResourceW.argtypes = [handle, wintypes.BOOL]
    kernel.EndUpdateResourceW.restype = wintypes.BOOL

    def manifests():
        # Data-file mapping never executes the input program or its DLL entry points.
        library = kernel.LoadLibraryExW(str(file), None, 0x02 | 0x20)
        if not library:
            raise ctypes.WinError(ctypes.get_last_error())
        try:
            languages = []

            @callback_type
            def found(_module, _type, _name, language, _parameter):
                languages.append(language)
                return True

            if not kernel.EnumResourceLanguagesW(library, pointer(24), pointer(1), found, 0):
                error = ctypes.get_last_error()
                assert error in [1812, 1813, 1814, 1815], error
            result = {}
            for language in languages:
                resource = kernel.FindResourceExW(library, pointer(24), pointer(1), language)
                assert resource
                length = kernel.SizeofResource(library, resource)
                assert 0 < length < 65536
                address = kernel.LockResource(kernel.LoadResource(library, resource))
                assert address
                result[language] = ctypes.string_at(address, length)
            return result
        finally:
            assert kernel.FreeLibrary(library)

    originals = manifests()
    replacements = {language: utf8_manifest(data)
                    for language, data in (originals or {0: None}).items()}
    update = kernel.BeginUpdateResourceW(str(file), False)
    if not update:
        raise ctypes.WinError(ctypes.get_last_error())
    try:
        for language, data in replacements.items():
            buffer = ctypes.create_string_buffer(data)
            if not kernel.UpdateResourceW(update, pointer(24), pointer(1), language, buffer, len(data)):
                raise ctypes.WinError(ctypes.get_last_error())
    except BaseException:
        kernel.EndUpdateResourceW(update, True)
        raise
    if not kernel.EndUpdateResourceW(update, False):
        raise ctypes.WinError(ctypes.get_last_error())
    after = file.read_bytes()
    after_identity = pe_identity(after)
    assert after_identity == identity, ("PE resource preservation difference: " + json.dumps({
        "before": identity, "after": after_identity}, sort_keys=True))
    assert manifests() == replacements
    return {"file": str(file), "originalSha256": expected, "patchedSha256": digest(after),
            "preservedExecutionIdentity": identity,
            "manifests": [{"language": language,
                           "originalSha256": digest(originals[language]) if language in originals else None,
                           "patchedSha256": digest(data), "xml": data.decode("utf-8")}
                          for language, data in replacements.items()]}


if __name__ == "__main__":
    assert len(sys.argv) == 4
    result = repair(Path(sys.argv[1]), sys.argv[2])
    Path(sys.argv[3]).write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({key: result[key] for key in ["file", "originalSha256", "patchedSha256"]}))
