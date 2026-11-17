## Lasm.JS.Web

- **Availability guards for feature detection** (decision 0.3-11). Every web binding that some target lacks has a guard `X?`, which checks the platform when the program runs (`'gpu' in navigator`) and gives the typed value or `none`:

  ```lean
  if let some gpu ← (← navigator).gpu? then
    IO.println (← gpu.getPreferredCanvasFormat).val
  else
    IO.println "no WebGPU"
  ```

  `lasm build --target` accepts guarded uses on targets without the API, including the members of what the guard gives (`gpu.getPreferredCanvasFormat`), and the program runs the `else` branch there. Unguarded uses are still refused, and the error now names the guard.
