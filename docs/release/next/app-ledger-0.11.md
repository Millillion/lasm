## Example apps

- **Ledger on @lasm/cli 0.11.0.** The pin and lockfile move to 0.11.0, and the deterministic simulation (`Sim.lean`) checks `Lasm.target == .workers || Lasm.target == .browser` (`import Lasm.Target`) instead of the deleted `Lasm.JS.onEdge`.
