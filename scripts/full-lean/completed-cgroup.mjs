// A cgroup can disappear between individual counter reads after ExecStopPost.
// Accept that only with this workload's complete, already-written final sample.
export function completedCgroupRemoval(error, cgroup, service) {
  if (!['ENOENT', 'ENODEV'].includes(error?.code) || !service || service.captureError
    || service.cgroup !== cgroup || !service.serviceResult || !service.exitCode
    || service.exitStatus === undefined || !service.capturedAt) return false;
  const counter = value => Number.isFinite(value) && value >= 0;
  return ['memoryBytes', 'peakMemoryBytes', 'swapBytes', 'tasks', 'pressureSomeAvg10']
    .every(key => counter(service[key]))
    && ['high', 'max', 'oom', 'oom_kill', 'oom_group_kill']
      .every(key => counter(service.memoryEvents?.[key]));
}
