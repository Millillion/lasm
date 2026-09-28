"""Discovery must preserve deep tools, aliases and cycles on native Windows."""
import importlib.util
import os
from pathlib import Path
import subprocess
import tempfile
import unittest

spec = importlib.util.spec_from_file_location("walker", Path(__file__).resolve().parents[1] / "scripts/ci/windows_file_walk.py")
walker = importlib.util.module_from_spec(spec)
spec.loader.exec_module(walker)


class FileWalk(unittest.TestCase):
    def test_nested_tools_and_regular_inputs(self):
        with tempfile.TemporaryDirectory(prefix="lasm discovery λ ") as temporary:
            root = Path(temporary).resolve()
            deep = root.joinpath(*["d" for _ in range(35)])
            deep.mkdir(parents=True)
            names = ["ClAnG++.EXE", "llvm-ar.exe", "python3.exe", "emcc.py", "npm.cmd", "notes.txt"]
            for name in names:
                (deep / name).write_text(name)
            expected = {deep / name for name in names}
            visited = []
            self.assertEqual(set(walker.walk_files(root, on_directory=lambda _, p, n: visited.append(p))), expected)
            self.assertEqual(len(visited), 36)
            self.assertEqual(set(walker.walk_files(root, developer=True)), expected - {deep / "notes.txt"})

    def test_external_directory_alias_and_cycle(self):
        with tempfile.TemporaryDirectory(prefix="lasm discovery links ") as temporary:
            base = Path(temporary).resolve()
            root, outside = base / "root", base / "outside"
            root.mkdir(); outside.mkdir()
            tool = outside / "clang.exe"; tool.write_bytes(b"fixture")
            links = [(root / "first", outside), (root / "second", outside), (outside / "cycle", root)]
            try:
                for link, target in links:
                    if os.name == "nt":
                        subprocess.run(["cmd.exe", "/d", "/c", "mklink", "/J", str(link), str(target)],
                            check=True, capture_output=True, timeout=10)
                    else:
                        link.symlink_to(target, target_is_directory=True)
                visited = []
                files = list(walker.walk_files(root, developer=True, on_directory=lambda _, p, n: visited.append(p)))
                self.assertEqual(files, [tool])
                self.assertEqual(set(visited), {root, outside})
            finally:
                for link, _ in links:
                    if os.path.lexists(link):
                        if os.name == "nt": link.rmdir()
                        else: link.unlink()


if __name__ == "__main__":
    unittest.main()
