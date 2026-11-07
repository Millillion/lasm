/-
The theorems of the function-platform mapping's propositions (Spec.lean):
each `Theorems.x` has type exactly `Spec.x`, from the lemmas of
Lasm.Serverless.Proofs.Mapping.
-/
import Lasm.Serverless.Spec

namespace Lasm.Serverless.Theorems
open Lasm.Serverless Lasm.Serverless.Proofs.Mapping

theorem target_valid : Spec.target_valid := Proofs.Mapping.target_valid

theorem target_split : Spec.target_split := fun p q => ⟨Proofs.Mapping.target_path p q, Proofs.Mapping.target_query p q⟩

theorem target_unchanged : Spec.target_unchanged := Proofs.Mapping.target_unchanged

theorem target_slash : Spec.target_slash := Proofs.Mapping.target_slash

theorem target_ignores_headers : Spec.target_ignores_headers :=
  ⟨fun _ _ _ => rfl, fun _ _ _ => rfl, fun _ _ => rfl⟩

theorem host_once : Spec.host_once := Proofs.Mapping.host_once

theorem host_url : Spec.host_url := urlHost_plain

theorem form_roundtrip : Spec.form_roundtrip := Proofs.Mapping.form_roundtrip

theorem rest_query : Spec.rest_query := Proofs.Mapping.rest_query

theorem alb_query : Spec.alb_query := Proofs.Mapping.alb_query

theorem cookie_once : Spec.cookie_once := Proofs.Mapping.cookie_once

theorem v2_cookies_once : Spec.v2_cookies_once := v2_cookies

theorem other_fields : Spec.other_fields := Proofs.Mapping.other_fields

theorem body_kept : Spec.body_kept := fun _ r =>
  ⟨body_bytes _ _, body_bytes _ _, body_bytes _ _, body_text_iff r.headers r.body⟩

theorem status_kept : Spec.status_kept := fun _ _ => ⟨rfl, rfl, rfl⟩

theorem rest_headers : Spec.rest_headers := Proofs.Mapping.rest_headers

theorem v2_headers : Spec.v2_headers := fun r => ⟨rfl, Proofs.Mapping.v2_headers r⟩

theorem cloudfront_headers : Spec.cloudfront_headers := cloudFront_headers

theorem web_null_body : Spec.web_null_body := by
  intro status method length h
  simp only [webNullBody, Bool.or_eq_true, beq_iff_eq]
  rcases h with h | h
  · left; left; simpa using h
  · left; right; exact h

theorem azure_exact : Spec.azure_exact := Proofs.Mapping.azure_exact

end Lasm.Serverless.Theorems
