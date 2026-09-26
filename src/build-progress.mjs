const seconds = milliseconds => {
  const value = Math.floor(milliseconds / 1000);
  return value < 60 ? `${value}s` : `${Math.floor(value / 60)}m ${value % 60}s`;
};
const bytes = value => value < 1000 ? `${value} B`
  : value < 1_000_000 ? `${(value / 1000).toFixed(1)} kB`
  : value < 1_000_000_000 ? `${(value / 1_000_000).toFixed(1)} MB`
  : `${(value / 1_000_000_000).toFixed(2)} GB`;

/** Plain stderr lines work in terminals and redirected CI logs alike. Only
 * downloads have a measurable percentage; other phases report elapsed time.
 */
export function createBuildProgress({ log = console.error, now = () => performance.now(),
  intervalMs = 10_000, schedule = setInterval, cancel = clearInterval } = {}) {
  const started = now();
  let current, stageStarted = started, lastData = started, announced = false, stopped = false;
  const write = text => log(`[lasm] ${text}`);
  const render = () => {
    if (!current || stopped) return;
    let detail = '';
    if (current.totalBytes !== undefined) {
      const received = current.receivedBytes ?? 0;
      detail = `: ${bytes(received)} / ${bytes(current.totalBytes)} (${Math.floor(received / current.totalBytes * 100)}%)`;
      if (received < current.totalBytes && now() - lastData >= intervalMs)
        detail += `; waiting for download data (${seconds(now() - lastData)})`;
    }
    write(`${current.stage}${detail} — ${seconds(now() - stageStarted)} elapsed`);
  };
  const timer = schedule(render, intervalMs);
  timer?.unref?.();
  return {
    update(event) {
      if (stopped) return;
      if (event.download && !announced) {
        announced = true;
        write('First-time tool setup can take a few minutes. Lasm downloads and verifies its tools automatically; later builds reuse them.');
        write(`Tools cache: ${event.cache}`);
      }
      const changed = current?.stage !== event.stage;
      if (changed) stageStarted = now();
      if (changed || (event.receivedBytes ?? 0) > (current?.receivedBytes ?? 0)) lastData = now();
      current = event;
      if (changed || event.complete) render();
    },
    message(text) { if (!stopped) write(text); },
    finish(text) {
      if (stopped) return;
      stopped = true; cancel(timer);
      if (text) write(`${text} (${seconds(now() - started)} total).`);
    },
  };
}
