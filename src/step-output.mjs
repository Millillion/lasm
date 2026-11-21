/** What a failed Lean, Lake or tool step printed (issue #315): its stderr,
 * then its stdout, each once. `lake lean` writes the entry module's Lean
 * errors to stdout while Lake's notices ("info: Cli: remote URL changed") go
 * to stderr, so reporting one stream alone can hide the error. Stderr comes
 * first: Lake's notices precede the step, and the Lean error then sits next
 * to the "Build failed" line. A stream whose text the other already contains
 * (a tool that echoes its error to both) is shown once. Empty when the step
 * printed nothing. */
export function stepOutput(step) {
  const parts = [];
  for (const stream of [step?.stderr, step?.stdout]) {
    const text = stream == null ? '' : String(stream).replace(/\r\n/g, '\n').trim();
    if (!text || parts.some(part => part.includes(text))) continue;
    for (let index = parts.length - 1; index >= 0; index--) if (text.includes(parts[index])) parts.splice(index, 1);
    parts.push(text);
  }
  return parts.join('\n');
}
