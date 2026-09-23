# Full compiler entry point; the shared fixture also supports packaged tests.
from pathlib import Path
import importlib.util,os,sys
sys.dont_write_bytecode=True

if not os.environ.get('LASM_RESOURCE_UNIT') or sys.platform!='linux' or len(sys.argv) not in (3,4):
    raise SystemExit('Run through run-bounded.mjs and base-pages.py: NEW_OUTPUT FROZEN_FACADE [--startup]')
if len(sys.argv)==4 and sys.argv[3]!='--startup': raise SystemExit('Unknown option')
path=Path(__file__).resolve().parents[2]/'test/fixtures/system-directories/compare.py'
spec=importlib.util.spec_from_file_location('system_directory_comparison',path)
module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)
raise SystemExit(module.compare(sys.argv[1],facade_arg=sys.argv[2],startup='--startup' in sys.argv[3:]))
