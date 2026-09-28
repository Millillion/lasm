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
    struct.pack_into("<II", data, optional + 112 + 2 * 8, 0x3000, 16)
    struct.pack_into("<II", data, optional + 112 + 5 * 8, 0x4000, 16)
    for index, (name, flags) in enumerate([
        (b".text", 0x60000020), (b".data", 0xC0000040),
        (b".rsrc", 0x40000040), (b".reloc", 0x42000040), (b"/4", 0x42000040)
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


def moved_metadata():
    data = fixture()
    data[0x800] ^= 1  # Intentional resource edit.
    for index in [3, 4]:
        struct.pack_into("<I", data, table + index * 40 + 12, 0x1000 * (index + 2))
    struct.pack_into("<I", data, optional + 112 + 5 * 8, 0x5000)
    return data


class PreservationTests(unittest.TestCase):
    def test_resource_growth_allows_only_documented_metadata_moves(self):
        _, moves = verify(fixture(), moved_metadata())
        self.assertEqual([r["section"] for r in moves], [".reloc", ".debug_info"])

    def test_code_data_and_metadata_bytes_must_remain_equal(self):
        for raw in [0x400, 0x600, 0xA00, 0xC00]:
            with self.subTest(raw=raw):
                changed = moved_metadata(); changed[raw] ^= 1
                with self.assertRaises(AssertionError): verify(fixture(), changed)

    def test_code_and_data_addresses_must_remain_fixed(self):
        for index in [0, 1]:
            changed = moved_metadata()
            struct.pack_into("<I", changed, table + index * 40 + 12, 0x9000)
            with self.assertRaises(AssertionError): verify(fixture(), changed)

    def test_relocation_directory_must_follow_its_table(self):
        changed = moved_metadata()
        struct.pack_into("<I", changed, optional + 112 + 5 * 8, 0x4000)
        with self.assertRaises(AssertionError): verify(fixture(), changed)

    def test_entry_point_and_other_loader_directories_must_remain_equal(self):
        for field in [optional + 16, optional + 112 + 9 * 8]:
            changed = moved_metadata(); struct.pack_into("<I", changed, field, 0x1200)
            with self.assertRaises(AssertionError): verify(fixture(), changed)

    def test_moving_writable_or_executable_metadata_is_rejected(self):
        for flags in [0xC2000040, 0x62000040]:
            before, after = fixture(), moved_metadata()
            for data in [before, after]: struct.pack_into("<I", data, table + 4 * 40 + 36, flags)
            with self.assertRaises(AssertionError): verify(before, after)

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

    def test_stale_coff_pointer_is_repaired_only_by_exact_table_match(self):
        before, after = fixture(), moved_metadata()
        symbols = helper["coff_symbols"](before)
        original = symbols["bytes"]
        after[0xE00:0xE00 + len(original)] = b"\0" * len(original)
        after[0xE80:0xE80 + len(original)] = original
        with self.assertRaises(AssertionError): verify(before, after)
        fixed, correction = helper["preserve_coff_pointer"](before, after)
        self.assertEqual(correction["afterPointer"], 0xE80)
        verify(before, fixed)
        after[0xE80 + 8] ^= 1
        with self.assertRaises(AssertionError): helper["preserve_coff_pointer"](before, after)

    def test_ambiguous_coff_table_match_is_rejected(self):
        before, after = fixture(), moved_metadata()
        original = helper["coff_symbols"](before)["bytes"]
        after[0xE80:0xE80 + len(original)] = original
        with self.assertRaises(AssertionError): helper["preserve_coff_pointer"](before, after)


if __name__ == "__main__":
    unittest.main()
