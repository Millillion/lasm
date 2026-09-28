"""PE repair invariants; the separate native workflow tests Windows execution."""
from pathlib import Path
import runpy
import struct
import unittest
import xml.etree.ElementTree as ET

helper = runpy.run_path(str(Path(__file__).resolve().parents[1]
                           / "scripts/ci/windows-sdk-utf8-manifest.py"))
verify = helper["verify_preservation"]
optional = 0x80 + 24
table = optional + 240


def fixture():
    data = bytearray(0x1000)
    data[:2] = b"MZ"
    struct.pack_into("<I", data, 0x3C, 0x80)
    data[0x80:0x84] = b"PE\0\0"
    struct.pack_into("<HHIIIHH", data, 0x84, 0xAA64, 5, 0, 0xE00, 0, 240, 0x22)
    struct.pack_into("<H", data, optional, 0x20B)
    struct.pack_into("<I", data, optional + 16, 0x1000)
    struct.pack_into("<Q", data, optional + 24, 0x140000000)
    struct.pack_into("<II", data, optional + 32, 0x1000, 0x200)
    struct.pack_into("<I", data, optional + 108, 16)
    struct.pack_into("<I", data, optional + 60, 0x400)
    struct.pack_into("<I", data, optional + 56, 0x6000)
    struct.pack_into("<II", data, optional + 112 + 5 * 8, 0x4000, 16)
    for index, (name, flags) in enumerate([
        (b".text", 0x60000020), (b".data", 0xC0000040),
        (b".const", 0x40000040), (b".reloc", 0x42000040), (b"/4", 0x42000040)
    ]):
        start = table + index * 40
        data[start:start + len(name)] = name
        raw = 0x400 + index * 0x200
        struct.pack_into("<IIII", data, start + 8, 16, 0x1000 * (index + 1), 0x200, raw)
        struct.pack_into("<I", data, start + 36, flags)
        data[raw:raw + 16] = bytes([index + 1]) * 16
    strings = b".debug_info\0"
    struct.pack_into("<I", data, 0xE00, len(strings) + 4)
    data[0xE04:0xE04 + len(strings)] = strings
    return data


def patched():
    return helper["append_manifest"](fixture(), helper["utf8_manifest"](None))[0]


class PreservationTests(unittest.TestCase):
    def test_appended_manifest_preserves_all_existing_sections_and_symbols(self):
        before, after = fixture(), patched()
        verify(before, after)
        self.assertEqual(helper["coff_symbols"](before), helper["coff_symbols"](after))
        self.assertGreater(len(after), len(before))
        self.assertEqual(after[0x400:len(before)], before[0x400:])

    def test_code_data_and_debug_bytes_must_remain_equal(self):
        for raw in [0x400, 0x600, 0xA00, 0xC00, 0xE08]:
            with self.subTest(raw=raw):
                changed = bytearray(patched()); changed[raw] ^= 1
                with self.assertRaises(AssertionError): verify(fixture(), changed)

    def test_every_original_address_must_remain_fixed(self):
        for index in range(5):
            changed = bytearray(patched())
            struct.pack_into("<I", changed, table + index * 40 + 12, 0x9000)
            with self.assertRaises(AssertionError): verify(fixture(), changed)

    def test_existing_resource_is_not_overwritten(self):
        with self.assertRaises(AssertionError): helper["append_manifest"](patched(), b"manifest")

    def test_entry_point_and_other_loader_directories_must_remain_equal(self):
        for field in [optional + 16, optional + 112 + 9 * 8]:
            changed = bytearray(patched()); struct.pack_into("<I", changed, field, 0x1200)
            with self.assertRaises(AssertionError): verify(fixture(), changed)

    def test_signed_files_are_rejected(self):
        before = fixture(); struct.pack_into("<II", before, optional + 112 + 4 * 8, 0xF00, 16)
        with self.assertRaises(AssertionError): helper["append_manifest"](before, b"manifest")

    def test_insufficient_or_occupied_header_space_is_rejected(self):
        before = fixture(); struct.pack_into("<I", before, optional + 60, table + 5 * 40)
        with self.assertRaises(AssertionError): helper["append_manifest"](before, b"manifest")
        before = fixture(); before[table + 5 * 40] = 1
        with self.assertRaises(AssertionError): helper["append_manifest"](before, b"manifest")

    def test_checksum_ignores_old_checksum_and_detects_changed_payload(self):
        data = bytearray(patched()); stored = struct.unpack_from("<I", data, optional + 64)[0]
        struct.pack_into("<I", data, optional + 64, 0x11223344)
        self.assertEqual(helper["pe_checksum"](data), stored)
        data[-1] ^= 1
        self.assertNotEqual(helper["pe_checksum"](data), stored)

    def test_existing_privilege_manifest_is_preserved(self):
        original = b'''<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">
          <trustInfo xmlns="urn:schemas-microsoft-com:asm.v3"><security><requestedPrivileges>
          <requestedExecutionLevel level="asInvoker" uiAccess="false"/>
          </requestedPrivileges></security></trustInfo></assembly>'''
        replacement = helper["utf8_manifest"](original)
        root = ET.fromstring(replacement)
        level = root.find(".//{urn:schemas-microsoft-com:asm.v3}requestedExecutionLevel")
        self.assertEqual(level.attrib, {"level": "asInvoker", "uiAccess": "false"})
        settings = root.findall(".//{http://schemas.microsoft.com/SMI/2019/WindowsSettings}activeCodePage")
        self.assertEqual([e.text for e in settings], ["UTF-8"])
        with self.assertRaises(AssertionError): helper["utf8_manifest"](replacement)


if __name__ == "__main__":
    unittest.main()
