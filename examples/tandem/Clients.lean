/- Simulated users against a live server: `clients URL DOC SEED REPLICAS
STEPS FIRST`. Each replica is a `Tandem.Replica` (what the browser runs):
it edits its text at random, and syncs over HTTP, but the network is
unreliable: a replica goes offline and comes back, a sync is not sent, and
a reply is lost (the server committed, the replica never hears it). Replica
numbers start at `FIRST`, so several processes can share a document.

After `STEPS` steps every replica comes back online and syncs until the
server's log has not grown for three seconds (other processes may still be
editing), then the program prints one line per replica, `text <hex>`, and
`log <n>`. test/simulate.mjs runs several such processes at once against one
server, kills and restarts the server in the middle, and checks that every
replica, in every process, ends with the server's text. -/
import Tandem
import Lasm.Fetch
import Std.Async
open Tandem Lasm.Fetch

/-- A 64-bit linear congruential generator. -/
structure Rng where
  s : UInt64

def Rng.next (g : Rng) (n : Nat) : Nat × Rng :=
  let s := g.s * 6364136223846793005 + 1442695040888963407
  (if n == 0 then 0 else ((s >>> 33).toNat % n), ⟨s⟩)

def alphabet : List Char := "abcdefgh  \n".toList

def hex (s : String) : String :=
  String.join (s.toUTF8.toList.map fun b =>
    let d := "0123456789abcdef".toList
    String.ofList [d[(b / 16).toNat]!, d[(b % 16).toNat]!])

/-- One sync: `none` if the network failed. -/
def syncOnce (url : String) (rp : Replica) : Async (Option (Nat × Wire.Reply)) := do
  let req := rp.request
  try
    let r ← post url (Wire.encodeRequest req).toUTF8 "text/plain"
    match r.text? with
    | some body =>
      match Wire.decodeReply body with
      | .ok reply => return some (req.ops.length, reply)
      | .error _ => return none
    | none => return none
  catch _ => return none

def count (base doc : String) : Async (Option Nat) := do
  try
    let body := Wire.encodeRequest { cursor := 999999999999, ops := [] }
    let r ← post s!"{base}/doc/{doc}/sync" body.toUTF8 "text/plain"
    match r.text?.map Wire.decodeReply with
    | some (.ok (.ops a _ _)) => return some a
    | _ => return none
  catch _ => return none

def run (base doc : String) (seed reps steps first : Nat) : Async Unit := do
  let url := s!"{base}/doc/{doc}/sync"
  let mut g : Rng := ⟨seed.toUInt64 * 2654435761 + 1⟩
  let mut rs : Array Replica := (Array.range reps).map fun i => { replica := first + i }
  let mut online : Array Bool := Array.replicate reps true
  for _ in [0:steps] do
    let (r, g1) := g.next reps; g := g1
    let (a, g2) := g.next 100; g := g2
    let rp := rs[r]!
    if a < 55 then
      -- an edit: insert a few characters, delete a range, or replace one
      let t := rp.doc.chars
      let (p, g3) := g.next (t.length + 1); g := g3
      let (k, g4) := g.next 6; g := g4
      let (kind, g5) := g.next 3; g := g5
      let mut ins : List Char := []
      for _ in [0:k + 1] do
        let (c, g6) := g.next alphabet.length; g := g6
        ins := alphabet[c]! :: ins
      let new := match kind with
        | 0 => t.take p ++ ins ++ t.drop p
        | 1 => t.take p ++ t.drop (p + k + 1)
        | _ => t.take p ++ ins ++ t.drop (p + k)
      let rp' := rp.edit new
      if rp'.doc.chars != new then throw (IO.userError s!"replica {first + r}: the edit did not yield the new text")
      rs := rs.set! r rp'
    else if a < 90 then
      if online[r]! then
        let (drop, g7) := g.next 10; g := g7
        if drop == 0 then pure ()          -- the sync is never sent
        else
          match ← syncOnce url rp with
          | some (sent, reply) =>
            if drop == 1 then pure ()      -- the reply is lost
            else rs := rs.set! r (rp.onReply sent reply)
          | none => pure ()
    else
      online := online.set! r (!online[r]!)
  -- Everyone online; sync until the log is quiet.
  let mut quiet := 0
  let mut last : Option Nat := none
  while quiet < 15 do
    for i in [0:reps] do
      let mut rp := rs[i]!
      let mut more := true
      let mut tries := 0
      while more && tries < 50 do
        tries := tries + 1
        match ← syncOnce url rp with
        | some (sent, reply) =>
          rp := rp.onReply sent reply
          more := !rp.pending.isEmpty || Replica.full reply
        | none => Std.Async.sleep 200
      rs := rs.set! i rp
    let n ← count base doc
    if n.isSome && n == last then quiet := quiet + 1 else quiet := 0
    last := n
    Std.Async.sleep 200
  -- One more round, so that every replica has the final log.
  for i in [0:reps] do
    let mut rp := rs[i]!
    for _ in [0:20] do
      match ← syncOnce url rp with
      | some (sent, reply) =>
        rp := rp.onReply sent reply
        if rp.pending.isEmpty && !Replica.full reply then break
      | none => Std.Async.sleep 200
    rs := rs.set! i rp
  for rp in rs do
    IO.println s!"text {rp.replica} {rp.pending.length} {hex rp.text}"
  IO.println s!"log {(last.getD 0)}"

def main (args : List String) : IO UInt32 := do
  match args with
  | [base, doc, seed, reps, steps, first] =>
    match seed.toNat?, reps.toNat?, steps.toNat?, first.toNat? with
    | some s, some r, some n, some f => (run base doc s r n f).block; return 0
    | _, _, _, _ => IO.eprintln "usage: clients URL DOC SEED REPLICAS STEPS FIRST"; return 2
  | _ => IO.eprintln "usage: clients URL DOC SEED REPLICAS STEPS FIRST"; return 2
