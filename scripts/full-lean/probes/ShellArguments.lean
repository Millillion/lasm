def main (args : List String) : IO Unit := do
  IO.println s!"args={repr args}"

#eval IO.println "compiled ShellArguments"
