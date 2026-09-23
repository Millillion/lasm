# Full compiler entry point; the shared fixture also supports packaged tests.
from pathlib import Path
import importlib.util,os,sys
sys.dont_write_bytecode=True

if not os.environ.get('LASM_RESOURCE_UNIT') or sys.platform!='linux' or len(sys.argv)!=3:
    raise SystemExit('Run through run-bounded.mjs and base-pages.py: NEW_OUTPUT FROZEN_FACADE')
path=Path(__file__).resolve().parents[2]/'test/fixtures/temporary-path-bytes/compare.py'
spec=importlib.util.spec_from_file_location('temporary_path_comparison',path)
module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)
raise SystemExit(module.compare(sys.argv[1],facade_arg=sys.argv[2]))
