from pathlib import Path
import datetime,hashlib,json,os,stat,subprocess,sys,time

def compare(output_arg, *, facade_arg=None, program=None):
    output=Path(output_arg).resolve()
    if output.exists():raise SystemExit('Use a fresh output directory')
    output.mkdir(parents=True)
    source=Path(__file__).with_name('Main.lean')
    fixture=output/'Main.lean';fixture.write_bytes(source.read_bytes())
    def sha(path):
        with Path(path).open('rb') as stream:return hashlib.file_digest(stream,'sha256').hexdigest()
    record={'recordedAt':datetime.datetime.now(datetime.timezone.utc).isoformat(),
        'scope':'Supplementary raw temporary-path comparison; no original upstream test changes.',
        'source':str(source.resolve()),'sourceSha256':sha(source),'scriptSha256':sha(__file__),
        'resourceReport':os.environ.get('LASM_RESOURCE_REPORT'),'results':[]}
    def save():(output/'comparison.json').write_text(json.dumps(record,indent=2)+'\n')
    # All raw names stay under this dedicated output directory.
    cases=[]
    for name,tail,relative,decoy,symlink in [
        ('absolute-ascii',b'plain',False,False,False),
        ('absolute-unicode','lambda-λ'.encode(),False,False,False),
        ('absolute-invalid-lead',b'raw-'+bytes.fromhex('ff80'),False,False,False),
        ('absolute-surrogate-decoy',b'raw-'+bytes.fromhex('eda080'),False,True,False),
        ('relative-truncated',b'raw-'+bytes.fromhex('e282'),True,False,False),
        ('symlink-parent-invalid',b'raw-'+bytes.fromhex('ff80'),True,True,True),
    ]:
        directory=output/name;directory.mkdir();cwd=os.fsencode(directory)
        if symlink:
            os.mkdir(cwd+b'/physical');os.mkdir(cwd+b'/physical/leaf')
            os.symlink(b'physical/leaf',cwd+b'/link')
            actual=cwd+b'/physical/'+tail
            base=b'link/../'+tail+b'//'
        else:
            actual=cwd+b'/'+tail
            base=tail if relative else actual
        os.mkdir(actual)
        other=actual.decode('utf-8','replace').encode()
        if not decoy or other==actual:other=None
        if other:os.mkdir(other)
        cases.append({'name':name,'directory':directory,'cwd':cwd,'base':base,'actual':actual,'decoy':other})
    record['cases']=[{'name':c['name'],'temporaryPathHex':c['base'].hex(),'actualParentHex':c['actual'].hex(),
        'decoyParentHex':c['decoy'].hex() if c['decoy'] else None} for c in cases]
    mask=os.umask(0);os.umask(mask)
    def entries(parent):
        result=[]
        if parent is None:return result
        for item in os.scandir(parent):
            metadata=item.stat(follow_symlinks=False)
            kind='file' if stat.S_ISREG(metadata.st_mode) else 'directory' if stat.S_ISDIR(metadata.st_mode) else 'other'
            row={'kind':kind,'nameHex':item.name.hex(),'mode':stat.S_IMODE(metadata.st_mode),
                 'nativeTemplate':len(item.name)==12 and item.name.startswith(b'tmp.XX')}
            if kind=='file':
                with open(item.path,'rb') as stream:row['contentsHex']=stream.read().hex()
            result.append(row)
        return sorted(result,key=lambda row:row['kind'])
    def stable(rows):return [{k:v for k,v in row.items() if k!='nameHex'} for row in rows]
    def cleanup(parent):
        if parent is None:return
        for item in os.scandir(parent):
            if item.is_dir(follow_symlinks=False):os.rmdir(item.path)
            else:os.unlink(item.path)
    def verify(config):
        path=Path(config['build'])/'snapshot.json';snapshot=json.loads(path.read_text())
        for name,expected in snapshot['files'].items():
            if sha(Path(config['build'])/name)!=expected:raise RuntimeError('Frozen input changed: '+name)
        return sha(path)
    def run(label,command,config=None):
        row={'engine':label,'command':list(map(str,command)),'cases':[]}
        if config:row.update(config=config,snapshotSha256=verify(config))
        record['results'].append(row)
        for c in cases:
            cleanup(c['actual']);cleanup(c['decoy'])
            environment=dict(os.environb)
            for key in [b'TMPDIR',b'TMP',b'TEMP',b'TEMPDIR']:environment.pop(key,None)
            environment[b'TMPDIR']=c['base']
            start=time.monotonic()
            try:
                result=subprocess.run([*map(str,command),str(c['directory'])],
                    env=environment,stdout=subprocess.PIPE,stderr=subprocess.PIPE,timeout=120)
                item={'name':c['name'],'returncode':result.returncode,'stdoutHex':result.stdout.hex(),'stderrHex':result.stderr.hex(),
                    'stdout':result.stdout.decode('utf-8','backslashreplace'),'stderr':result.stderr.decode('utf-8','backslashreplace'),
                    'actualEntries':entries(c['actual']),'decoyEntries':entries(c['decoy'])}
                if label=='native':
                    actual=item['actualEntries']
                    item['passed']=result.returncode==0 and not result.stderr and result.stdout.endswith(b'raw-temporary comparison completed\n') and not item['decoyEntries'] and len(actual)==2 and [x['kind'] for x in actual]==['directory','file'] and all(x['nativeTemplate'] for x in actual) and actual[0]['mode']==(0o700 & ~mask) and actual[1]['mode']==(0o600 & ~mask) and actual[1]['contentsHex']=='raw temporary payload λ\n'.encode().hex()
                else:
                    oracle=next(x for x in record['results'][0]['cases'] if x['name']==c['name'])
                    item['passed']=result.returncode==0 and item['stdoutHex']==oracle['stdoutHex'] and item['stderrHex']==oracle['stderrHex'] and stable(item['actualEntries'])==stable(oracle['actualEntries']) and stable(item['decoyEntries'])==stable(oracle['decoyEntries'])
            except subprocess.TimeoutExpired:item={'name':c['name'],'passed':False,'timeoutSeconds':120}
            item['seconds']=time.monotonic()-start;row['cases'].append(item);save()
            print(label,c['name'],'passed' if item['passed'] else 'different',flush=True)
            if 'timeoutSeconds' in item:raise RuntimeError('Stop guarded workload and reap descendants after timeout')
            cleanup(c['actual']);cleanup(c['decoy'])
            if label=='native' and not item['passed']:raise RuntimeError('Native control failed; inspect fixture before comparing')
        if config and row['snapshotSha256']!=verify(config):raise RuntimeError('Snapshot changed during comparison')
        row['passed']=all(x['passed'] for x in row['cases']);save()
    try:
        run('native',[Path.home()/'.elan/toolchains/leanprover--lean4---v4.32.0/bin/lean','--run',fixture])
        if facade_arg is not None:
            facade=Path(facade_arg).resolve();config=json.loads((facade/'toolchain.json').read_text())
            if config['leanCommit']!='8c9756b28d64dab099da31a4c09229a9e6a2ef35':raise RuntimeError('Wrong native comparison revision')
            run(config['engine'],[facade/'bin/lean','--run',fixture],config)
        else:
            label,*command=program
            run(label,command)
    finally:
        record['sourceUnchanged']=sha(source)==sha(fixture)==record['sourceSha256'];record['finishedAt']=datetime.datetime.now(datetime.timezone.utc).isoformat();save()
    return 0 if record['sourceUnchanged'] and all(x.get('passed') for x in record['results']) else 1

if __name__=='__main__':
    if sys.platform!='linux' or len(sys.argv)<4:
        raise SystemExit('Linux packaged test fixture: NEW_OUTPUT LABEL EXECUTABLE [ARGS...]')
    raise SystemExit(compare(sys.argv[1],program=sys.argv[2:]))
