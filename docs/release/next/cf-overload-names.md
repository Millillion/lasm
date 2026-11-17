## Lasm.JS.Cloudflare

- **Cloudflare overloads named for what they do** (API_DECISIONS 0.5-17):
  `KVNamespace.getMany` (and `getManyText`, `getManyJson`, `getManyWithMetadata…`)
  read several keys at once. `Ai.run` is the common call, and `runStream`,
  `runWebSocket`, `runRawResponse` and `runOtherModel` are its other forms.
  `AiSearch*.chatCompletionsStream`, `ToMarkdownService.transformMany`,
  `Ai.toMarkdownFile`/`toMarkdownFiles` and
  `WorkflowStep.doWithDelayFunction`/`doWithStaticDelay` complete the set.
