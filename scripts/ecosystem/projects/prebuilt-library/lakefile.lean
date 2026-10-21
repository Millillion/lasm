import Lake
open System Lake DSL

package app where
  moreLinkArgs := #["-lcurl"]

@[default_target]
lean_exe app where
  root := `Main
