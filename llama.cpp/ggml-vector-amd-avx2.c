#ifdef __x86_64__
#define ggml_fp16_to_fp32_row ggml_fp16_to_fp32_row_amd_avx2
#define ggml_fp32_to_fp16_row ggml_fp32_to_fp16_row_amd_avx2
#define ggml_bf16_to_fp32_row ggml_bf16_to_fp32_row_amd_avx2
#define ggml_fp32_to_bf16_row ggml_fp32_to_bf16_row_amd_avx2
#define ggml_vec_dot_f32 ggml_vec_dot_f32_amd_avx2
#define ggml_vec_dot_f16 ggml_vec_dot_f16_amd_avx2
#define ggml_vec_dot_bf16 ggml_vec_dot_bf16_amd_avx2
#define ggml_vec_dot_f16_unroll ggml_vec_dot_f16_unroll_amd_avx2
#define ggml_vec_mad_f32_unroll ggml_vec_mad_f32_unroll_amd_avx2
#define ggml_vec_set_i8 ggml_vec_set_i8_amd_avx2
#define ggml_vec_set_i16 ggml_vec_set_i16_amd_avx2
#define ggml_vec_set_i32 ggml_vec_set_i32_amd_avx2
#define ggml_vec_set_f16 ggml_vec_set_f16_amd_avx2
#define ggml_vec_set_bf16 ggml_vec_set_bf16_amd_avx2
#define ggml_vec_add_f32 ggml_vec_add_f32_amd_avx2
#define ggml_vec_add1_f32 ggml_vec_add1_f32_amd_avx2
#define ggml_vec_acc_f32 ggml_vec_acc_f32_amd_avx2
#define ggml_vec_acc1_f32 ggml_vec_acc1_f32_amd_avx2
#define ggml_vec_sub_f32 ggml_vec_sub_f32_amd_avx2
#define ggml_vec_set_f32 ggml_vec_set_f32_amd_avx2
#define ggml_vec_cpy_f32 ggml_vec_cpy_f32_amd_avx2
#define ggml_vec_neg_f32 ggml_vec_neg_f32_amd_avx2
#define ggml_vec_mul_f32 ggml_vec_mul_f32_amd_avx2
#define ggml_vec_div_f32 ggml_vec_div_f32_amd_avx2
#define ggml_vec_scale_f32 ggml_vec_scale_f32_amd_avx2
#define ggml_vec_scale_f16 ggml_vec_scale_f16_amd_avx2
#define ggml_vec_mad_f32 ggml_vec_mad_f32_amd_avx2
#define ggml_vec_mad_f16 ggml_vec_mad_f16_amd_avx2
#define ggml_vec_norm_f32 ggml_vec_norm_f32_amd_avx2
#define ggml_vec_sqr_f32 ggml_vec_sqr_f32_amd_avx2
#define ggml_vec_sqrt_f32 ggml_vec_sqrt_f32_amd_avx2
#define ggml_vec_log_f32 ggml_vec_log_f32_amd_avx2
#define ggml_vec_abs_f32 ggml_vec_abs_f32_amd_avx2
#define ggml_vec_sgn_f32 ggml_vec_sgn_f32_amd_avx2
#define ggml_vec_step_f32 ggml_vec_step_f32_amd_avx2
#define ggml_vec_tanh_f32 ggml_vec_tanh_f32_amd_avx2
#define ggml_vec_elu_f32 ggml_vec_elu_f32_amd_avx2
#define ggml_vec_relu_f32 ggml_vec_relu_f32_amd_avx2
#define ggml_vec_leaky_relu_f32 ggml_vec_leaky_relu_f32_amd_avx2
#define ggml_vec_hardswish_f32 ggml_vec_hardswish_f32_amd_avx2
#define ggml_vec_hardsigmoid_f32 ggml_vec_hardsigmoid_f32_amd_avx2
#define ggml_vec_gelu_f16 ggml_vec_gelu_f16_amd_avx2
#define ggml_vec_gelu_f32 ggml_vec_gelu_f32_amd_avx2
#define ggml_vec_gelu_quick_f32 ggml_vec_gelu_quick_f32_amd_avx2
#define ggml_vec_silu_f32 ggml_vec_silu_f32_amd_avx2
#define ggml_silu_backward_f32 ggml_silu_backward_f32_amd_avx2
#define ggml_vec_silu_backward_f32 ggml_vec_silu_backward_f32_amd_avx2
#define ggml_vec_sum_f32 ggml_vec_sum_f32_amd_avx2
#define ggml_vec_sum_f32_ggf ggml_vec_sum_f32_ggf_amd_avx2
#define ggml_vec_sum_f16_ggf ggml_vec_sum_f16_ggf_amd_avx2
#define ggml_vec_max_f32 ggml_vec_max_f32_amd_avx2
#define ggml_vec_norm_inv_f32 ggml_vec_norm_inv_f32_amd_avx2
#define ggml_vec_argmax_f32 ggml_vec_argmax_f32_amd_avx2
#define GGML_VECTOR
#include "ggml-vector.inc"
#endif // __x86_64__
