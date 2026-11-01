/-
An explicit-state model checker: breadth-first search over every reachable
state of a finite transition system, then

* safety: an invariant holds in every reachable state (checked as states are
  found, so a counterexample is a shortest path);
* deadlock freedom: every reachable state that is not a goal state has a
  successor;
* liveness under weak fairness: no reachable cycle of non-goal states can be
  repeated forever while every fairness group that stays enabled also takes a
  step (strongly connected components, Tarjan's algorithm).

It also checks recorded traces against a transition relation
(`conforms`): each observed event must be a visible step of the model,
with any number of hidden steps in between.
-/
import Std.Data.HashMap
import Std.Data.HashSet

namespace HostBridge

/-- One transition: what it does, the fairness group that takes it (a thread,
or one kind of event-loop task), its observation in a recorded trace ("" if a
trace never shows it) and the state it leads to. -/
structure Edge (σ : Type) where
  label : String
  group : Nat
  obs : String := ""
  /-- A step that happens only finitely often (a spurious wake-up): it is part
  of every path to a state, never of a cycle that repeats forever. -/
  rare : Bool := false
  dst : σ

structure System (σ : Type) where
  name : String
  init : σ
  next : σ → Array (Edge σ)
  /-- `some message` when the state violates a safety property. -/
  invariant : σ → Option String
  /-- The workload is complete. Deadlock and liveness concern the other states. -/
  goal : σ → Bool
  groupNames : Array String
  render : σ → String

inductive Verdict where
  | ok
  | invariant (message : String) (path : Array String) (last : String)
  | deadlock (path : Array String) (last : String)
  | livelock (path : Array String) (cycle : Array String) (starved : String)
  | tooLarge (states : Nat)

structure Report where
  name : String
  states : Nat
  edges : Nat
  verdict : Verdict

def Verdict.isOk : Verdict → Bool
  | .ok => true
  | _ => false

def Verdict.kind : Verdict → String
  | .ok => "ok"
  | .invariant .. => "invariant violated"
  | .deadlock .. => "deadlock"
  | .livelock .. => "fair non-progress cycle"
  | .tooLarge _ => "state space larger than the bound"

def Report.describe (r : Report) : String := Id.run do
  let mut out := s!"{r.name}: {r.states} states, {r.edges} transitions: {r.verdict.kind}"
  match r.verdict with
  | .ok | .tooLarge _ => pure ()
  | .invariant message path last =>
    out := out ++ s!"\n  {message}\n  path ({path.size} steps):" ++ String.join (path.toList.map (s!"\n    {·}")) ++ s!"\n  state: {last}"
  | .deadlock path last =>
    out := out ++ s!"\n  path ({path.size} steps):" ++ String.join (path.toList.map (s!"\n    {·}")) ++ s!"\n  state: {last}"
  | .livelock path cycle starved =>
    out := out ++ s!"\n  path ({path.size} steps):" ++ String.join (path.toList.map (s!"\n    {·}")) ++
      s!"\n  then forever ({starved}):" ++ String.join (cycle.toList.map (s!"\n    {·}"))
  return out

section
variable {σ : Type} [BEq σ] [Hashable σ] [Inhabited σ]

/-- Every reachable state (index = discovery order) with its successors
(group, index) and its BFS parent (index, label). -/
structure Graph (σ : Type) where
  states : Array σ
  /-- (group, successor), for the steps that are not rare. -/
  succ : Array (Array (Nat × Nat))
  /-- Number of successors, rare steps included. -/
  degree : Array Nat
  parent : Array (Nat × String)

private def pathTo (g : Graph σ) (i : Nat) : Array String := Id.run do
  let mut out : Array String := #[]
  let mut j := i
  let mut fuel := g.states.size
  while j != 0 && fuel > 0 do
    let (p, label) := g.parent[j]!
    out := out.push label
    j := p
    fuel := fuel - 1
  return out.reverse

/-- Breadth-first exploration. Stops at the first invariant violation. -/
def explore (sys : System σ) (maxStates : Nat) : Graph σ × Option Verdict := Id.run do
  let mut index : Std.HashMap σ Nat := {}
  let mut states : Array σ := #[sys.init]
  let mut succ : Array (Array (Nat × Nat)) := #[]
  let mut degree : Array Nat := #[]
  let mut parent : Array (Nat × String) := #[(0, "")]
  index := index.insert sys.init 0
  if let some message := sys.invariant sys.init then
    return (⟨states, #[#[]], #[0], parent⟩, some (.invariant message #[] (sys.render sys.init)))
  let mut i := 0
  while i < states.size do
    let s := states[i]!
    let mut out : Array (Nat × Nat) := #[]
    let edges := sys.next s
    for e in edges do
      match index.get? e.dst with
      | some j => if !e.rare then out := out.push (e.group, j)
      | none =>
        let j := states.size
        if j ≥ maxStates then
          return (⟨states, succ, degree, parent⟩, some (.tooLarge j))
        states := states.push e.dst
        parent := parent.push (i, e.label)
        index := index.insert e.dst j
        if !e.rare then out := out.push (e.group, j)
        if let some message := sys.invariant e.dst then
          let g : Graph σ := ⟨states, succ.push out, degree.push edges.size, parent⟩
          return (g, some (.invariant message (pathTo g j) (sys.render e.dst)))
    succ := succ.push out
    degree := degree.push edges.size
    i := i + 1
  return (⟨states, succ, degree, parent⟩, none)

/-- Strongly connected components of the subgraph of states with `keep`
(iterative Tarjan). Returns the component number of every state (or none). -/
def components (succ : Array (Array (Nat × Nat))) (keep : Nat → Bool) : Array (Option Nat) × Nat := Id.run do
  let n := succ.size
  let unvisited := n + 1
  let mut index : Array Nat := Array.replicate n unvisited
  let mut low : Array Nat := Array.replicate n 0
  let mut onStack : Array Bool := Array.replicate n false
  let mut stack : Array Nat := #[]
  let mut comp : Array (Option Nat) := Array.replicate n none
  let mut counter := 0
  let mut count := 0
  for root in [0:n] do
    if !keep root || index[root]! != unvisited then continue
    let mut calls : Array (Nat × Nat) := #[(root, 0)]
    index := index.set! root counter
    low := low.set! root counter
    counter := counter + 1
    stack := stack.push root
    onStack := onStack.set! root true
    while h : calls.size > 0 do
      let (u, k) := calls[calls.size - 1]
      let es := succ[u]!
      if k < es.size then
        calls := calls.set! (calls.size - 1) (u, k + 1)
        let w := (es[k]!).2
        if !keep w then continue
        if index[w]! == unvisited then
          index := index.set! w counter
          low := low.set! w counter
          counter := counter + 1
          stack := stack.push w
          onStack := onStack.set! w true
          calls := calls.push (w, 0)
        else if onStack[w]! then
          low := low.set! u (min low[u]! index[w]!)
      else
        calls := calls.pop
        if low[u]! == index[u]! then
          let mut more := true
          while more do
            match stack.back? with
            | none => more := false
            | some w =>
              stack := stack.pop
              onStack := onStack.set! w false
              comp := comp.set! w (some count)
              if w == u then more := false
          count := count + 1
        if h2 : calls.size > 0 then
          let p := (calls[calls.size - 1]).1
          low := low.set! p (min low[p]! low[u]!)
  return (comp, count)

/-- A shortest cycle through `start` inside component `c` (labels). -/
private def cycleIn (sys : System σ) (g : Graph σ) (comp : Array (Option Nat)) (c start : Nat) : Array String := Id.run do
  -- BFS from start's successors back to start, staying inside c.
  let mut seen : Std.HashMap Nat (Nat × String) := {}
  let mut queue : Array Nat := #[start]
  let mut q := 0
  let mut found := false
  while q < queue.size && !found do
    let u := queue[q]!
    q := q + 1
    for e in sys.next g.states[u]! do
      if e.rare then continue
      let j := (g.succ[u]!.find? (fun (_, j) => g.states[j]! == e.dst)).map (·.2) |>.getD 0
      if comp[j]! != some c then continue
      if j == start then
        seen := seen.insert start (u, e.label)
        found := true
        break
      if !seen.contains j then
        seen := seen.insert j (u, e.label)
        queue := queue.push j
  let mut out : Array String := #[]
  let mut j := start
  let mut fuel := g.states.size
  repeat
    match seen.get? j with
    | none => break
    | some (p, label) =>
      out := out.push label
      j := p
      fuel := fuel - 1
      if j == start || fuel == 0 then break
  return out.reverse

def check (sys : System σ) (maxStates : Nat := 5000000) : Report := Id.run do
  let (g, early) := explore sys maxStates
  let edges := g.succ.foldl (· + ·.size) 0
  let report v := ({ name := sys.name, states := g.states.size, edges, verdict := v } : Report)
  if let some v := early then return report v
  -- Deadlock: a non-goal state without successors.
  for i in [0:g.states.size] do
    if g.degree[i]! == 0 && !sys.goal g.states[i]! then
      return report (.deadlock (pathTo g i) (sys.render g.states[i]!))
  -- Liveness: a fair strongly connected component of non-goal states.
  let keep := fun i => !sys.goal g.states[i]!
  let (comp, count) := components g.succ keep
  let groups := sys.groupNames.size
  -- Per component: size, an internal edge, groups taken inside, groups disabled somewhere.
  let mut size : Array Nat := Array.replicate count 0
  let mut internal : Array Bool := Array.replicate count false
  let mut taken : Array (Array Bool) := Array.replicate count (Array.replicate groups false)
  let mut disabled : Array (Array Bool) := Array.replicate count (Array.replicate groups false)
  let mut member : Array Nat := Array.replicate count 0
  for i in [0:g.states.size] do
    match comp[i]! with
    | none => pure ()
    | some c =>
      size := size.set! c (size[c]! + 1)
      member := member.set! c i
      let mut enabled := Array.replicate groups false
      for (grp, j) in g.succ[i]! do
        enabled := enabled.set! grp true
        if comp[j]! == some c then
          internal := internal.set! c true
          taken := taken.set! c (taken[c]!.set! grp true)
      for grp in [0:groups] do
        if !enabled[grp]! then disabled := disabled.set! c (disabled[c]!.set! grp true)
  for c in [0:count] do
    if !internal[c]! then continue
    let fair := (List.range groups).all fun grp => disabled[c]![grp]! || taken[c]![grp]!
    if fair then
      let start := member[c]!
      let steps := (List.range groups).filter (fun grp => taken[c]![grp]!) |>.map (sys.groupNames[·]!)
      let blocked := (List.range groups).filter (fun grp => !taken[c]![grp]!) |>.map (sys.groupNames[·]!)
      return report (.livelock (pathTo g start) (cycleIn sys g comp c start)
        s!"{size[c]!} states; steps by {", ".intercalate steps}; never stepping: {", ".intercalate blocked}")
  return report .ok

/-- Checks a recorded trace: every event must be the observation of a visible
step of the model, preceded by any number of hidden steps. Returns the number
of states considered, or the index of the first event no state can explain. -/
def conforms (init : σ) (next : σ → Array (Edge σ)) (trace : Array String) (maxFrontier : Nat := 200000) :
    Except (Nat × String) Nat := Id.run do
  let closure (start : Array σ) : Except String (Array σ) := Id.run do
    let mut seen : Std.HashSet σ := {}
    let mut out : Array σ := #[]
    for s in start do
      if !seen.contains s then
        seen := seen.insert s
        out := out.push s
    let mut i := 0
    while i < out.size do
      let s := out[i]!
      i := i + 1
      for e in next s do
        if e.obs.isEmpty && !seen.contains e.dst then
          if out.size ≥ maxFrontier then return .error "too many states between two events"
          seen := seen.insert e.dst
          out := out.push e.dst
    return .ok out
  let mut current : Array σ := #[init]
  let mut considered := 0
  for k in [0:trace.size] do
    let event := trace[k]!
    let frontier ← match closure current with
      | .ok f => pure f
      | .error message => return .error (k, message)
    considered := considered + frontier.size
    let mut after : Std.HashSet σ := {}
    let mut list : Array σ := #[]
    for s in frontier do
      for e in next s do
        if e.obs == event && !after.contains e.dst then
          after := after.insert e.dst
          list := list.push e.dst
    if list.isEmpty then
      let seenObs := frontier.foldl (init := (#[] : Array String)) fun acc s =>
        (next s).foldl (init := acc) fun acc e => if e.obs.isEmpty || acc.contains e.obs then acc else acc.push e.obs
      return .error (k, s!"event {k} `{event}` is not a step of the model; the model allows: {", ".intercalate seenObs.toList}")
    current := list
  return .ok considered

end
end HostBridge
