// Checks shared by integration/node-exec-flags.mjs and its unit test.

/** Output with CRLF normalized and Node's inspector banner lines removed (they
 *  appear on stderr under --inspect, on every platform). */
export function withoutInspectorBanner(text = '') {
  return String(text).replace(/\r\n/g, '\n')
    .replace(/^(?:Debugger listening on .*|For help, see: .*|Debugger attached\.|Waiting for the debugger to disconnect\.\.\.)\n?/gm, '');
}

/** The failed assertions of one flag set (empty when it passed). */
export function failedChecks({ program, server, serverError, baselineStdout, network }) {
  const failed = [];
  if (program.code !== 0) failed.push(`program exit code ${program.code}${program.signal ? ` (signal ${program.signal})` : ''}`);
  if (withoutInspectorBanner(program.stderr) !== '') failed.push(`program stderr ${JSON.stringify(withoutInspectorBanner(program.stderr).slice(0, 300))}`);
  if (withoutInspectorBanner(program.stdout) !== withoutInspectorBanner(baselineStdout)) failed.push('program stdout differs from the run without flags');
  if (network) {
    if (serverError) failed.push(`server: ${serverError}`);
    else {
      if (server?.status !== 200) failed.push(`server status ${server?.status}`);
      if (server?.body !== '{"ok":true}') failed.push(`server body ${JSON.stringify(server?.body?.slice(0, 200))}`);
      if (withoutInspectorBanner(server?.stderr) !== '') failed.push(`server stderr ${JSON.stringify(withoutInspectorBanner(server.stderr).slice(0, 300))}`);
    }
  }
  return failed;
}
