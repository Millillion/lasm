/-
The theorems of Lasm.RPC's propositions (Spec.lean): each `Theorems.x` has
type exactly `Spec.x`. `decodeRequest_valid` and `call_invalid` are proved
in the library itself (Core.lean, Client.lean), where `serve` uses the first.
-/
import Lasm.RPC.Spec

namespace Lasm.RPC.Theorems
open Lean Lasm.RPC Lasm.Fetch Lasm.UI

theorem decodeRequest_valid : Spec.decodeRequest_valid :=
  fun _ _ _ e _ _ h => Endpoint.decodeRequest_valid e h

theorem decodeRequest_accepts : Spec.decodeRequest_accepts := by
  intro _ _ _ e body j r hp hj hv
  simp [Endpoint.decodeRequest, hp, hj, hv, bind, Except.bind, Except.mapError, pure, Except.pure]

theorem decodeRequest_rejects : Spec.decodeRequest_rejects := by
  intro _ _ _ e body j r m hp hj hv
  simp [Endpoint.decodeRequest, hp, hj, hv, bind, Except.bind, Except.mapError, throw, throwThe,
    MonadExceptOf.throw]

theorem decodeRequest_error_invalid : Spec.decodeRequest_error_invalid := by
  intro Req _ _ e body err h
  unfold Endpoint.decodeRequest at h
  cases hp : parseJson body with
  | error m => simp [hp, bind, Except.bind, Except.mapError] at h; exact ⟨_, h.symm⟩
  | ok j =>
    cases hj : (fromJson? j : Except String Req) with
    | error m => simp [hp, hj, bind, Except.bind, Except.mapError] at h; exact ⟨_, h.symm⟩
    | ok r =>
      cases hv : e.validate r with
      | error m =>
        simp [hp, hj, hv, bind, Except.bind, Except.mapError, throw, throwThe, MonadExceptOf.throw] at h
        exact ⟨_, h.symm⟩
      | ok u => simp [hp, hj, hv, bind, Except.bind, Except.mapError, pure, Except.pure] at h

theorem decodeRequest_hugeExponent : Spec.decodeRequest_hugeExponent := by
  intro _ _ _ e body h
  exact ⟨s!"the request is not JSON: {"a number's exponent has more than four digits"}",
    by simp [Endpoint.decodeRequest, parseJson, h, bind, Except.bind, Except.mapError]⟩

theorem serve_invalid : Spec.serve_invalid := by
  intro _ _ _ _ e handler body err h
  simp only [Endpoint.serve]
  split
  · rename_i err' h'
    rw [h] at h'
    cases h'
    rfl
  · rename_i r h'
    rw [h] at h'
    cases h'

theorem serve_valid : Spec.serve_valid := by
  intro _ _ _ _ e handler body r h
  refine ⟨Endpoint.decodeRequest_valid e h, ?_⟩
  simp only [Endpoint.serve]
  split
  · rename_i err h'
    rw [h] at h'
    cases h'
  · rename_i r' h'
    rw [h] at h'
    cases h'
    apply congrArg
    funext result
    cases result <;> rfl

theorem handler_fallback : Spec.handler_fallback := by
  intro routes fallback req h
  simp only [handler]
  split <;> (try rfl) <;> simp_all

theorem handler_route : Spec.handler_route := by
  intro routes fallback req name route hm hs hf
  simp only [handler, hm, hs, hf]

theorem handler_unknown : Spec.handler_unknown := by
  intro routes fallback req name hm hs hf
  simp only [handler, hm, hs, hf]

theorem handler_method : Spec.handler_method := by
  intro routes fallback req name hm hs
  simp only [handler, hs]

theorem call_invalid : Spec.call_invalid :=
  fun _ _ _ _ _ e req handle base m h => Endpoint.call_invalid e req handle base m h

theorem call_valid : Spec.call_valid := by
  intro _ _ _ _ _ e req handle base h
  simp only [Endpoint.call, h, Cmd.ofEffect]
  refine ⟨_, rfl, ?_, ?_⟩ <;> intro _ <;> rfl

theorem decodeResponse_not_network : Spec.decodeResponse_not_network := by
  intro _ Res _ e status body m
  simp only [Endpoint.decodeResponse]
  split
  · split <;> simp
  · split
    · cases (fromJson? _ : Except String Res) <;> simp [Except.mapError]
    · split <;> simp
    · simp

end Lasm.RPC.Theorems
