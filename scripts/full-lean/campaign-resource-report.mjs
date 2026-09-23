// A completed CTest result is not enough to start another guarded workload.
// Missing final measurements or cleanup confirmation must stop the supervisor.
export function campaignResourceIssue(resource) {
  if (!resource || resource.status !== 'finished') return 'Resource report is missing or unfinished';
  if (resource.unitReleased !== true) return 'Resource unit cleanup was not confirmed';
  if (resource.monitorError) return `Resource monitor failed: ${resource.monitorError}`;
  if (!resource.service || resource.service.captureError) return 'Final resource measurements are missing or incomplete';
  if (typeof resource.resourceLimited !== 'boolean' || resource.memoryThrottled !== false)
    return 'Resource-limit or throttling status is missing or unsafe';
  const events = resource.service.memoryEvents;
  for (const name of ['high', 'max', 'oom', 'oom_kill', 'oom_group_kill'])
    if (events?.[name] !== 0) return `Resource memory event is nonzero or missing: ${name}`;
  if (resource.service.swapBytes !== 0) return 'Resource swap measurement is nonzero or missing';
  // A safely contained proactive budget stop is a separate test outcome. All
  // other stops (host pressure, lost monitoring, actual OOM) require review.
  if (resource.stoppedBecause) {
    if (resource.stoppedBecause !== 'Workload reached its proactive memory budget') return resource.stoppedBecause;
    if (!resource.resourceLimited) return 'Proactive memory stop lacks its resource-aborted classification';
  } else if (resource.resourceLimited) return 'Resource abort has no recorded stop reason';
}
