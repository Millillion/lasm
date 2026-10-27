// Lean compiler output
// Module: Lasm.UI.Encode
// Imports: public import Init public meta import Init public import Std.Data.HashMap public import Lasm.UI.Diff
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(uint64_t, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_ByteArray_empty;
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_uint8_of_nat(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
static lean_once_cell_t l_Lasm_UI_Encode_instInhabitedTables_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Encode_instInhabitedTables_default___closed__0;
static lean_once_cell_t l_Lasm_UI_Encode_instInhabitedTables_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Encode_instInhabitedTables_default___closed__1;
static lean_once_cell_t l_Lasm_UI_Encode_instInhabitedTables_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Encode_instInhabitedTables_default___closed__2;
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_instInhabitedTables_default;
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_instInhabitedTables;
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_maxNames;
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_maxValues;
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_maxValueBytes;
static lean_once_cell_t l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0;
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_instInhabitedEnc_default;
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_instInhabitedEnc;
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_pushVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_pushStr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_byte(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_byte___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_var(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_str(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nameInto(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_name(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_value(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_decoder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_flags(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_flags___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_setAttr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attrOp(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_Encode_Enc_nsByte(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nsByte___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_before(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_before___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_op_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_op___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_opList___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_opList(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_op(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedTables_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_unsigned_to_nat(16u);
v___x_3_ = lean_mk_array(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedTables_default___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lasm_UI_Encode_instInhabitedTables_default___closed__0, &l_Lasm_UI_Encode_instInhabitedTables_default___closed__0_once, _init_l_Lasm_UI_Encode_instInhabitedTables_default___closed__0);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedTables_default___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_obj_once(&l_Lasm_UI_Encode_instInhabitedTables_default___closed__1, &l_Lasm_UI_Encode_instInhabitedTables_default___closed__1_once, _init_l_Lasm_UI_Encode_instInhabitedTables_default___closed__1);
v___x_8_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_7_);
lean_ctor_set(v___x_8_, 2, v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedTables_default(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l_Lasm_UI_Encode_instInhabitedTables_default___closed__2, &l_Lasm_UI_Encode_instInhabitedTables_default___closed__2_once, _init_l_Lasm_UI_Encode_instInhabitedTables_default___closed__2);
return v___x_9_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedTables(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Lasm_UI_Encode_instInhabitedTables_default;
return v___x_10_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_maxNames(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_unsigned_to_nat(8192u);
return v___x_11_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_maxValues(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_unsigned_to_nat(4096u);
return v___x_12_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_maxValueBytes(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_unsigned_to_nat(40u);
return v___x_13_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_14_ = l_ByteArray_empty;
v___x_15_ = l_Lasm_UI_Encode_instInhabitedTables_default;
v___x_16_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
lean_ctor_set(v___x_16_, 1, v___x_14_);
lean_ctor_set(v___x_16_, 2, v___x_14_);
return v___x_16_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedEnc_default(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_obj_once(&l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0, &l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0_once, _init_l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0);
return v___x_17_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedEnc(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lasm_UI_Encode_instInhabitedEnc_default;
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_pushVar(lean_object* v_b_19_, lean_object* v_n_20_){
_start:
{
lean_object* v___x_21_; uint8_t v___x_22_; 
v___x_21_ = lean_unsigned_to_nat(128u);
v___x_22_ = lean_nat_dec_lt(v_n_20_, v___x_21_);
if (v___x_22_ == 0)
{
lean_object* v___x_23_; lean_object* v___x_24_; uint8_t v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_23_ = lean_nat_mod(v_n_20_, v___x_21_);
v___x_24_ = lean_nat_add(v___x_23_, v___x_21_);
lean_dec(v___x_23_);
v___x_25_ = lean_uint8_of_nat(v___x_24_);
lean_dec(v___x_24_);
v___x_26_ = lean_byte_array_push(v_b_19_, v___x_25_);
v___x_27_ = lean_unsigned_to_nat(7u);
v___x_28_ = lean_nat_shiftr(v_n_20_, v___x_27_);
lean_dec(v_n_20_);
v_b_19_ = v___x_26_;
v_n_20_ = v___x_28_;
goto _start;
}
else
{
uint8_t v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_uint8_of_nat(v_n_20_);
lean_dec(v_n_20_);
v___x_31_ = lean_byte_array_push(v_b_19_, v___x_30_);
return v___x_31_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_pushStr(lean_object* v_b_32_, lean_object* v_s_33_){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; uint8_t v___x_40_; lean_object* v___x_41_; 
v___x_34_ = lean_string_utf8_byte_size(v_s_33_);
v___x_35_ = l_Lasm_UI_Encode_pushVar(v_b_32_, v___x_34_);
v___x_36_ = lean_string_to_utf8(v_s_33_);
v___x_37_ = lean_unsigned_to_nat(0u);
v___x_38_ = lean_byte_array_size(v___x_35_);
v___x_39_ = lean_byte_array_size(v___x_36_);
v___x_40_ = 0;
v___x_41_ = lean_byte_array_copy_slice(v___x_36_, v___x_37_, v___x_35_, v___x_38_, v___x_39_, v___x_40_);
lean_dec_ref(v___x_36_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_byte(lean_object* v_e_42_, uint8_t v_x_43_){
_start:
{
lean_object* v_tables_44_; lean_object* v_defs_45_; lean_object* v_out_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_54_; 
v_tables_44_ = lean_ctor_get(v_e_42_, 0);
v_defs_45_ = lean_ctor_get(v_e_42_, 1);
v_out_46_ = lean_ctor_get(v_e_42_, 2);
v_isSharedCheck_54_ = !lean_is_exclusive(v_e_42_);
if (v_isSharedCheck_54_ == 0)
{
v___x_48_ = v_e_42_;
v_isShared_49_ = v_isSharedCheck_54_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_out_46_);
lean_inc(v_defs_45_);
lean_inc(v_tables_44_);
lean_dec(v_e_42_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_54_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_50_; lean_object* v___x_52_; 
v___x_50_ = lean_byte_array_push(v_out_46_, v_x_43_);
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 2, v___x_50_);
v___x_52_ = v___x_48_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v_tables_44_);
lean_ctor_set(v_reuseFailAlloc_53_, 1, v_defs_45_);
lean_ctor_set(v_reuseFailAlloc_53_, 2, v___x_50_);
v___x_52_ = v_reuseFailAlloc_53_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
return v___x_52_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_byte___boxed(lean_object* v_e_55_, lean_object* v_x_56_){
_start:
{
uint8_t v_x_boxed_57_; lean_object* v_res_58_; 
v_x_boxed_57_ = lean_unbox(v_x_56_);
v_res_58_ = l_Lasm_UI_Encode_Enc_byte(v_e_55_, v_x_boxed_57_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_var(lean_object* v_e_59_, lean_object* v_n_60_){
_start:
{
lean_object* v_tables_61_; lean_object* v_defs_62_; lean_object* v_out_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_71_; 
v_tables_61_ = lean_ctor_get(v_e_59_, 0);
v_defs_62_ = lean_ctor_get(v_e_59_, 1);
v_out_63_ = lean_ctor_get(v_e_59_, 2);
v_isSharedCheck_71_ = !lean_is_exclusive(v_e_59_);
if (v_isSharedCheck_71_ == 0)
{
v___x_65_ = v_e_59_;
v_isShared_66_ = v_isSharedCheck_71_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_out_63_);
lean_inc(v_defs_62_);
lean_inc(v_tables_61_);
lean_dec(v_e_59_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_71_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_67_; lean_object* v___x_69_; 
v___x_67_ = l_Lasm_UI_Encode_pushVar(v_out_63_, v_n_60_);
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 2, v___x_67_);
v___x_69_ = v___x_65_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v_tables_61_);
lean_ctor_set(v_reuseFailAlloc_70_, 1, v_defs_62_);
lean_ctor_set(v_reuseFailAlloc_70_, 2, v___x_67_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_str(lean_object* v_e_72_, lean_object* v_s_73_){
_start:
{
lean_object* v_tables_74_; lean_object* v_defs_75_; lean_object* v_out_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_91_; 
v_tables_74_ = lean_ctor_get(v_e_72_, 0);
v_defs_75_ = lean_ctor_get(v_e_72_, 1);
v_out_76_ = lean_ctor_get(v_e_72_, 2);
v_isSharedCheck_91_ = !lean_is_exclusive(v_e_72_);
if (v_isSharedCheck_91_ == 0)
{
v___x_78_ = v_e_72_;
v_isShared_79_ = v_isSharedCheck_91_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_out_76_);
lean_inc(v_defs_75_);
lean_inc(v_tables_74_);
lean_dec(v_e_72_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_91_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_89_; 
v___x_80_ = lean_string_utf8_byte_size(v_s_73_);
v___x_81_ = l_Lasm_UI_Encode_pushVar(v_out_76_, v___x_80_);
v___x_82_ = lean_string_to_utf8(v_s_73_);
v___x_83_ = lean_unsigned_to_nat(0u);
v___x_84_ = lean_byte_array_size(v___x_81_);
v___x_85_ = lean_byte_array_size(v___x_82_);
v___x_86_ = 0;
v___x_87_ = lean_byte_array_copy_slice(v___x_82_, v___x_83_, v___x_81_, v___x_84_, v___x_85_, v___x_86_);
lean_dec_ref(v___x_82_);
if (v_isShared_79_ == 0)
{
lean_ctor_set(v___x_78_, 2, v___x_87_);
v___x_89_ = v___x_78_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_tables_74_);
lean_ctor_set(v_reuseFailAlloc_90_, 1, v_defs_75_);
lean_ctor_set(v_reuseFailAlloc_90_, 2, v___x_87_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nameInto(lean_object* v_t_92_, lean_object* v_b_93_, lean_object* v_s_94_){
_start:
{
lean_object* v_names_95_; lean_object* v_values_96_; lean_object* v_decoders_97_; lean_object* v___x_98_; 
v_names_95_ = lean_ctor_get(v_t_92_, 0);
lean_inc_ref(v_names_95_);
v_values_96_ = lean_ctor_get(v_t_92_, 1);
v_decoders_97_ = lean_ctor_get(v_t_92_, 2);
v___x_98_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(v_names_95_, v_s_94_);
if (lean_obj_tag(v___x_98_) == 0)
{
lean_object* v_size_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v_size_99_ = lean_ctor_get(v_names_95_, 0);
v___x_100_ = lean_unsigned_to_nat(8192u);
v___x_101_ = lean_nat_dec_lt(v_size_99_, v___x_100_);
if (v___x_101_ == 0)
{
lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_117_; 
v_isSharedCheck_117_ = !lean_is_exclusive(v_names_95_);
if (v_isSharedCheck_117_ == 0)
{
lean_object* v_unused_118_; lean_object* v_unused_119_; 
v_unused_118_ = lean_ctor_get(v_names_95_, 1);
lean_dec(v_unused_118_);
v_unused_119_ = lean_ctor_get(v_names_95_, 0);
lean_dec(v_unused_119_);
v___x_103_ = v_names_95_;
v_isShared_104_ = v_isSharedCheck_117_;
goto v_resetjp_102_;
}
else
{
lean_dec(v_names_95_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_117_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
uint8_t v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_115_; 
v___x_105_ = 1;
v___x_106_ = lean_byte_array_push(v_b_93_, v___x_105_);
v___x_107_ = lean_string_utf8_byte_size(v_s_94_);
v___x_108_ = l_Lasm_UI_Encode_pushVar(v___x_106_, v___x_107_);
v___x_109_ = lean_string_to_utf8(v_s_94_);
v___x_110_ = lean_unsigned_to_nat(0u);
v___x_111_ = lean_byte_array_size(v___x_108_);
v___x_112_ = lean_byte_array_size(v___x_109_);
v___x_113_ = lean_byte_array_copy_slice(v___x_109_, v___x_110_, v___x_108_, v___x_111_, v___x_112_, v___x_101_);
lean_dec_ref(v___x_109_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 1, v___x_113_);
lean_ctor_set(v___x_103_, 0, v_t_92_);
v___x_115_ = v___x_103_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_t_92_);
lean_ctor_set(v_reuseFailAlloc_116_, 1, v___x_113_);
v___x_115_ = v_reuseFailAlloc_116_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
return v___x_115_;
}
}
}
else
{
lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_138_; 
lean_inc(v_size_99_);
lean_inc_ref(v_decoders_97_);
lean_inc_ref(v_values_96_);
v_isSharedCheck_138_ = !lean_is_exclusive(v_t_92_);
if (v_isSharedCheck_138_ == 0)
{
lean_object* v_unused_139_; lean_object* v_unused_140_; lean_object* v_unused_141_; 
v_unused_139_ = lean_ctor_get(v_t_92_, 2);
lean_dec(v_unused_139_);
v_unused_140_ = lean_ctor_get(v_t_92_, 1);
lean_dec(v_unused_140_);
v_unused_141_ = lean_ctor_get(v_t_92_, 0);
lean_dec(v_unused_141_);
v___x_121_ = v_t_92_;
v_isShared_122_ = v_isSharedCheck_138_;
goto v_resetjp_120_;
}
else
{
lean_dec(v_t_92_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_138_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_123_; lean_object* v___x_125_; 
lean_inc_ref(v_s_94_);
v___x_123_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(v_names_95_, v_s_94_, v_size_99_);
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 0, v___x_123_);
v___x_125_ = v___x_121_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v___x_123_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v_values_96_);
lean_ctor_set(v_reuseFailAlloc_137_, 2, v_decoders_97_);
v___x_125_ = v_reuseFailAlloc_137_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
uint8_t v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_126_ = 0;
v___x_127_ = lean_byte_array_push(v_b_93_, v___x_126_);
v___x_128_ = lean_string_utf8_byte_size(v_s_94_);
v___x_129_ = l_Lasm_UI_Encode_pushVar(v___x_127_, v___x_128_);
v___x_130_ = lean_string_to_utf8(v_s_94_);
v___x_131_ = lean_unsigned_to_nat(0u);
v___x_132_ = lean_byte_array_size(v___x_129_);
v___x_133_ = lean_byte_array_size(v___x_130_);
v___x_134_ = 0;
v___x_135_ = lean_byte_array_copy_slice(v___x_130_, v___x_131_, v___x_129_, v___x_132_, v___x_133_, v___x_134_);
lean_dec_ref(v___x_130_);
v___x_136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_125_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
return v___x_136_;
}
}
}
}
else
{
lean_object* v_val_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
lean_dec_ref(v_names_95_);
lean_dec_ref(v_s_94_);
v_val_142_ = lean_ctor_get(v___x_98_, 0);
lean_inc(v_val_142_);
lean_dec_ref_known(v___x_98_, 1);
v___x_143_ = lean_unsigned_to_nat(2u);
v___x_144_ = lean_nat_add(v_val_142_, v___x_143_);
lean_dec(v_val_142_);
v___x_145_ = l_Lasm_UI_Encode_pushVar(v_b_93_, v___x_144_);
v___x_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_146_, 0, v_t_92_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_name(lean_object* v_e_147_, lean_object* v_s_148_){
_start:
{
lean_object* v_tables_149_; lean_object* v_defs_150_; lean_object* v_out_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_161_; 
v_tables_149_ = lean_ctor_get(v_e_147_, 0);
v_defs_150_ = lean_ctor_get(v_e_147_, 1);
v_out_151_ = lean_ctor_get(v_e_147_, 2);
v_isSharedCheck_161_ = !lean_is_exclusive(v_e_147_);
if (v_isSharedCheck_161_ == 0)
{
v___x_153_ = v_e_147_;
v_isShared_154_ = v_isSharedCheck_161_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_out_151_);
lean_inc(v_defs_150_);
lean_inc(v_tables_149_);
lean_dec(v_e_147_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_161_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_155_; lean_object* v_fst_156_; lean_object* v_snd_157_; lean_object* v___x_159_; 
v___x_155_ = l_Lasm_UI_Encode_Enc_nameInto(v_tables_149_, v_out_151_, v_s_148_);
v_fst_156_ = lean_ctor_get(v___x_155_, 0);
lean_inc(v_fst_156_);
v_snd_157_ = lean_ctor_get(v___x_155_, 1);
lean_inc(v_snd_157_);
lean_dec_ref(v___x_155_);
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 2, v_snd_157_);
lean_ctor_set(v___x_153_, 0, v_fst_156_);
v___x_159_ = v___x_153_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_fst_156_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v_defs_150_);
lean_ctor_set(v_reuseFailAlloc_160_, 2, v_snd_157_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_value(lean_object* v_e_162_, lean_object* v_s_163_){
_start:
{
lean_object* v_tables_164_; lean_object* v_defs_165_; lean_object* v_out_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_220_; 
v_tables_164_ = lean_ctor_get(v_e_162_, 0);
v_defs_165_ = lean_ctor_get(v_e_162_, 1);
v_out_166_ = lean_ctor_get(v_e_162_, 2);
v_isSharedCheck_220_ = !lean_is_exclusive(v_e_162_);
if (v_isSharedCheck_220_ == 0)
{
v___x_168_ = v_e_162_;
v_isShared_169_ = v_isSharedCheck_220_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_out_166_);
lean_inc(v_defs_165_);
lean_inc(v_tables_164_);
lean_dec(v_e_162_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_220_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
uint8_t v___y_171_; lean_object* v_names_184_; lean_object* v_values_185_; lean_object* v_decoders_186_; lean_object* v___x_187_; 
v_names_184_ = lean_ctor_get(v_tables_164_, 0);
v_values_185_ = lean_ctor_get(v_tables_164_, 1);
v_decoders_186_ = lean_ctor_get(v_tables_164_, 2);
v___x_187_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(v_values_185_, v_s_163_);
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v___x_188_; lean_object* v___x_189_; uint8_t v___x_190_; 
v___x_188_ = lean_string_utf8_byte_size(v_s_163_);
v___x_189_ = lean_unsigned_to_nat(40u);
v___x_190_ = lean_nat_dec_le(v___x_188_, v___x_189_);
if (v___x_190_ == 0)
{
v___y_171_ = v___x_190_;
goto v___jp_170_;
}
else
{
lean_object* v_size_191_; lean_object* v___x_192_; uint8_t v___x_193_; 
v_size_191_ = lean_ctor_get(v_values_185_, 0);
v___x_192_ = lean_unsigned_to_nat(4096u);
v___x_193_ = lean_nat_dec_lt(v_size_191_, v___x_192_);
if (v___x_193_ == 0)
{
v___y_171_ = v___x_193_;
goto v___jp_170_;
}
else
{
lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_211_; 
lean_inc(v_size_191_);
lean_inc_ref(v_decoders_186_);
lean_inc_ref(v_values_185_);
lean_inc_ref(v_names_184_);
lean_del_object(v___x_168_);
v_isSharedCheck_211_ = !lean_is_exclusive(v_tables_164_);
if (v_isSharedCheck_211_ == 0)
{
lean_object* v_unused_212_; lean_object* v_unused_213_; lean_object* v_unused_214_; 
v_unused_212_ = lean_ctor_get(v_tables_164_, 2);
lean_dec(v_unused_212_);
v_unused_213_ = lean_ctor_get(v_tables_164_, 1);
lean_dec(v_unused_213_);
v_unused_214_ = lean_ctor_get(v_tables_164_, 0);
lean_dec(v_unused_214_);
v___x_195_ = v_tables_164_;
v_isShared_196_ = v_isSharedCheck_211_;
goto v_resetjp_194_;
}
else
{
lean_dec(v_tables_164_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_211_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_197_; lean_object* v___x_199_; 
lean_inc_ref(v_s_163_);
v___x_197_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(v_values_185_, v_s_163_, v_size_191_);
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 1, v___x_197_);
v___x_199_ = v___x_195_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_names_184_);
lean_ctor_set(v_reuseFailAlloc_210_, 1, v___x_197_);
lean_ctor_set(v_reuseFailAlloc_210_, 2, v_decoders_186_);
v___x_199_ = v_reuseFailAlloc_210_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
uint8_t v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_200_ = 0;
v___x_201_ = lean_byte_array_push(v_out_166_, v___x_200_);
v___x_202_ = l_Lasm_UI_Encode_pushVar(v___x_201_, v___x_188_);
v___x_203_ = lean_string_to_utf8(v_s_163_);
v___x_204_ = lean_unsigned_to_nat(0u);
v___x_205_ = lean_byte_array_size(v___x_202_);
v___x_206_ = lean_byte_array_size(v___x_203_);
v___x_207_ = 0;
v___x_208_ = lean_byte_array_copy_slice(v___x_203_, v___x_204_, v___x_202_, v___x_205_, v___x_206_, v___x_207_);
lean_dec_ref(v___x_203_);
v___x_209_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_209_, 0, v___x_199_);
lean_ctor_set(v___x_209_, 1, v_defs_165_);
lean_ctor_set(v___x_209_, 2, v___x_208_);
return v___x_209_;
}
}
}
}
}
else
{
lean_object* v_val_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
lean_del_object(v___x_168_);
lean_dec_ref(v_s_163_);
v_val_215_ = lean_ctor_get(v___x_187_, 0);
lean_inc(v_val_215_);
lean_dec_ref_known(v___x_187_, 1);
v___x_216_ = lean_unsigned_to_nat(2u);
v___x_217_ = lean_nat_add(v_val_215_, v___x_216_);
lean_dec(v_val_215_);
v___x_218_ = l_Lasm_UI_Encode_pushVar(v_out_166_, v___x_217_);
v___x_219_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_219_, 0, v_tables_164_);
lean_ctor_set(v___x_219_, 1, v_defs_165_);
lean_ctor_set(v___x_219_, 2, v___x_218_);
return v___x_219_;
}
v___jp_170_:
{
uint8_t v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_172_ = 1;
v___x_173_ = lean_byte_array_push(v_out_166_, v___x_172_);
v___x_174_ = lean_string_utf8_byte_size(v_s_163_);
v___x_175_ = l_Lasm_UI_Encode_pushVar(v___x_173_, v___x_174_);
v___x_176_ = lean_string_to_utf8(v_s_163_);
v___x_177_ = lean_unsigned_to_nat(0u);
v___x_178_ = lean_byte_array_size(v___x_175_);
v___x_179_ = lean_byte_array_size(v___x_176_);
v___x_180_ = lean_byte_array_copy_slice(v___x_176_, v___x_177_, v___x_175_, v___x_178_, v___x_179_, v___y_171_);
lean_dec_ref(v___x_176_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 2, v___x_180_);
v___x_182_ = v___x_168_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_tables_164_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v_defs_165_);
lean_ctor_set(v_reuseFailAlloc_183_, 2, v___x_180_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0(lean_object* v_x_221_, lean_object* v_x_222_){
_start:
{
if (lean_obj_tag(v_x_222_) == 0)
{
return v_x_221_;
}
else
{
lean_object* v_head_223_; lean_object* v_tail_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; uint8_t v___x_231_; lean_object* v___x_232_; 
v_head_223_ = lean_ctor_get(v_x_222_, 0);
lean_inc(v_head_223_);
v_tail_224_ = lean_ctor_get(v_x_222_, 1);
lean_inc(v_tail_224_);
lean_dec_ref_known(v_x_222_, 2);
v___x_225_ = lean_string_utf8_byte_size(v_head_223_);
v___x_226_ = l_Lasm_UI_Encode_pushVar(v_x_221_, v___x_225_);
v___x_227_ = lean_string_to_utf8(v_head_223_);
v___x_228_ = lean_unsigned_to_nat(0u);
v___x_229_ = lean_byte_array_size(v___x_226_);
v___x_230_ = lean_byte_array_size(v___x_227_);
v___x_231_ = 0;
v___x_232_ = lean_byte_array_copy_slice(v___x_227_, v___x_228_, v___x_226_, v___x_229_, v___x_230_, v___x_231_);
lean_dec_ref(v___x_227_);
v_x_221_ = v___x_232_;
v_x_222_ = v_tail_224_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3(lean_object* v_x_234_, lean_object* v_x_235_){
_start:
{
if (lean_obj_tag(v_x_235_) == 0)
{
return v_x_234_;
}
else
{
lean_object* v_head_236_; lean_object* v_tail_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v_head_236_ = lean_ctor_get(v_x_235_, 0);
lean_inc(v_head_236_);
v_tail_237_ = lean_ctor_get(v_x_235_, 1);
lean_inc(v_tail_237_);
lean_dec_ref_known(v_x_235_, 2);
v___x_238_ = l_List_lengthTR___redArg(v_head_236_);
v___x_239_ = l_Lasm_UI_Encode_pushVar(v_x_234_, v___x_238_);
v___x_240_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0(v___x_239_, v_head_236_);
v_x_234_ = v___x_240_;
v_x_235_ = v_tail_237_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2_spec__5(lean_object* v_x_242_, lean_object* v_x_243_){
_start:
{
if (lean_obj_tag(v_x_242_) == 0)
{
if (lean_obj_tag(v_x_243_) == 0)
{
uint8_t v___x_244_; 
v___x_244_ = 1;
return v___x_244_;
}
else
{
uint8_t v___x_245_; 
v___x_245_ = 0;
return v___x_245_;
}
}
else
{
if (lean_obj_tag(v_x_243_) == 0)
{
uint8_t v___x_246_; 
v___x_246_ = 0;
return v___x_246_;
}
else
{
lean_object* v_head_247_; lean_object* v_tail_248_; lean_object* v_head_249_; lean_object* v_tail_250_; uint8_t v___x_251_; 
v_head_247_ = lean_ctor_get(v_x_242_, 0);
v_tail_248_ = lean_ctor_get(v_x_242_, 1);
v_head_249_ = lean_ctor_get(v_x_243_, 0);
v_tail_250_ = lean_ctor_get(v_x_243_, 1);
v___x_251_ = lean_string_dec_eq(v_head_247_, v_head_249_);
if (v___x_251_ == 0)
{
return v___x_251_;
}
else
{
v_x_242_ = v_tail_248_;
v_x_243_ = v_tail_250_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2_spec__5___boxed(lean_object* v_x_253_, lean_object* v_x_254_){
_start:
{
uint8_t v_res_255_; lean_object* v_r_256_; 
v_res_255_ = l_List_beq___at___00List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2_spec__5(v_x_253_, v_x_254_);
lean_dec(v_x_254_);
lean_dec(v_x_253_);
v_r_256_ = lean_box(v_res_255_);
return v_r_256_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(lean_object* v_x_257_, lean_object* v_x_258_){
_start:
{
if (lean_obj_tag(v_x_257_) == 0)
{
if (lean_obj_tag(v_x_258_) == 0)
{
uint8_t v___x_259_; 
v___x_259_ = 1;
return v___x_259_;
}
else
{
uint8_t v___x_260_; 
v___x_260_ = 0;
return v___x_260_;
}
}
else
{
if (lean_obj_tag(v_x_258_) == 0)
{
uint8_t v___x_261_; 
v___x_261_ = 0;
return v___x_261_;
}
else
{
lean_object* v_head_262_; lean_object* v_tail_263_; lean_object* v_head_264_; lean_object* v_tail_265_; uint8_t v___x_266_; 
v_head_262_ = lean_ctor_get(v_x_257_, 0);
v_tail_263_ = lean_ctor_get(v_x_257_, 1);
v_head_264_ = lean_ctor_get(v_x_258_, 0);
v_tail_265_ = lean_ctor_get(v_x_258_, 1);
v___x_266_ = l_List_beq___at___00List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2_spec__5(v_head_262_, v_head_264_);
if (v___x_266_ == 0)
{
return v___x_266_;
}
else
{
v_x_257_ = v_tail_263_;
v_x_258_ = v_tail_265_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2___boxed(lean_object* v_x_268_, lean_object* v_x_269_){
_start:
{
uint8_t v_res_270_; lean_object* v_r_271_; 
v_res_270_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_x_268_, v_x_269_);
lean_dec(v_x_269_);
lean_dec(v_x_268_);
v_r_271_ = lean_box(v_res_270_);
return v_r_271_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(lean_object* v_a_272_, lean_object* v_x_273_){
_start:
{
if (lean_obj_tag(v_x_273_) == 0)
{
uint8_t v___x_274_; 
v___x_274_ = 0;
return v___x_274_;
}
else
{
lean_object* v_key_275_; lean_object* v_tail_276_; uint8_t v___x_277_; 
v_key_275_ = lean_ctor_get(v_x_273_, 0);
v_tail_276_ = lean_ctor_get(v_x_273_, 2);
v___x_277_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_key_275_, v_a_272_);
if (v___x_277_ == 0)
{
v_x_273_ = v_tail_276_;
goto _start;
}
else
{
return v___x_277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg___boxed(lean_object* v_a_279_, lean_object* v_x_280_){
_start:
{
uint8_t v_res_281_; lean_object* v_r_282_; 
v_res_281_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(v_a_279_, v_x_280_);
lean_dec(v_x_280_);
lean_dec(v_a_279_);
v_r_282_ = lean_box(v_res_281_);
return v_r_282_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(lean_object* v_a_283_, lean_object* v_b_284_, lean_object* v_x_285_){
_start:
{
if (lean_obj_tag(v_x_285_) == 0)
{
lean_dec(v_b_284_);
lean_dec(v_a_283_);
return v_x_285_;
}
else
{
lean_object* v_key_286_; lean_object* v_value_287_; lean_object* v_tail_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_300_; 
v_key_286_ = lean_ctor_get(v_x_285_, 0);
v_value_287_ = lean_ctor_get(v_x_285_, 1);
v_tail_288_ = lean_ctor_get(v_x_285_, 2);
v_isSharedCheck_300_ = !lean_is_exclusive(v_x_285_);
if (v_isSharedCheck_300_ == 0)
{
v___x_290_ = v_x_285_;
v_isShared_291_ = v_isSharedCheck_300_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_tail_288_);
lean_inc(v_value_287_);
lean_inc(v_key_286_);
lean_dec(v_x_285_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_300_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
uint8_t v___x_292_; 
v___x_292_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_key_286_, v_a_283_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; lean_object* v___x_295_; 
v___x_293_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(v_a_283_, v_b_284_, v_tail_288_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 2, v___x_293_);
v___x_295_ = v___x_290_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_key_286_);
lean_ctor_set(v_reuseFailAlloc_296_, 1, v_value_287_);
lean_ctor_set(v_reuseFailAlloc_296_, 2, v___x_293_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
else
{
lean_object* v___x_298_; 
lean_dec(v_value_287_);
lean_dec(v_key_286_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 1, v_b_284_);
lean_ctor_set(v___x_290_, 0, v_a_283_);
v___x_298_ = v___x_290_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_a_283_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v_b_284_);
lean_ctor_set(v_reuseFailAlloc_299_, 2, v_tail_288_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__9___redArg(lean_object* v_x_301_, lean_object* v_x_302_){
_start:
{
if (lean_obj_tag(v_x_302_) == 0)
{
return v_x_301_;
}
else
{
lean_object* v_key_303_; lean_object* v_value_304_; lean_object* v_tail_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_329_; 
v_key_303_ = lean_ctor_get(v_x_302_, 0);
v_value_304_ = lean_ctor_get(v_x_302_, 1);
v_tail_305_ = lean_ctor_get(v_x_302_, 2);
v_isSharedCheck_329_ = !lean_is_exclusive(v_x_302_);
if (v_isSharedCheck_329_ == 0)
{
v___x_307_ = v_x_302_;
v_isShared_308_ = v_isSharedCheck_329_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_tail_305_);
lean_inc(v_value_304_);
lean_inc(v_key_303_);
lean_dec(v_x_302_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_329_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_309_; uint64_t v___x_310_; uint64_t v___x_311_; uint64_t v___x_312_; uint64_t v___x_313_; uint64_t v_fold_314_; uint64_t v___x_315_; uint64_t v___x_316_; uint64_t v___x_317_; size_t v___x_318_; size_t v___x_319_; size_t v___x_320_; size_t v___x_321_; size_t v___x_322_; lean_object* v___x_323_; lean_object* v___x_325_; 
v___x_309_ = lean_array_get_size(v_x_301_);
v___x_310_ = 7ULL;
v___x_311_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_310_, v_key_303_);
v___x_312_ = 32ULL;
v___x_313_ = lean_uint64_shift_right(v___x_311_, v___x_312_);
v_fold_314_ = lean_uint64_xor(v___x_311_, v___x_313_);
v___x_315_ = 16ULL;
v___x_316_ = lean_uint64_shift_right(v_fold_314_, v___x_315_);
v___x_317_ = lean_uint64_xor(v_fold_314_, v___x_316_);
v___x_318_ = lean_uint64_to_usize(v___x_317_);
v___x_319_ = lean_usize_of_nat(v___x_309_);
v___x_320_ = ((size_t)1ULL);
v___x_321_ = lean_usize_sub(v___x_319_, v___x_320_);
v___x_322_ = lean_usize_land(v___x_318_, v___x_321_);
v___x_323_ = lean_array_uget_borrowed(v_x_301_, v___x_322_);
lean_inc(v___x_323_);
if (v_isShared_308_ == 0)
{
lean_ctor_set(v___x_307_, 2, v___x_323_);
v___x_325_ = v___x_307_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_key_303_);
lean_ctor_set(v_reuseFailAlloc_328_, 1, v_value_304_);
lean_ctor_set(v_reuseFailAlloc_328_, 2, v___x_323_);
v___x_325_ = v_reuseFailAlloc_328_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
lean_object* v___x_326_; 
v___x_326_ = lean_array_uset(v_x_301_, v___x_322_, v___x_325_);
v_x_301_ = v___x_326_;
v_x_302_ = v_tail_305_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6___redArg(lean_object* v_i_330_, lean_object* v_source_331_, lean_object* v_target_332_){
_start:
{
lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_333_ = lean_array_get_size(v_source_331_);
v___x_334_ = lean_nat_dec_lt(v_i_330_, v___x_333_);
if (v___x_334_ == 0)
{
lean_dec_ref(v_source_331_);
lean_dec(v_i_330_);
return v_target_332_;
}
else
{
lean_object* v_es_335_; lean_object* v___x_336_; lean_object* v_source_337_; lean_object* v_target_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_es_335_ = lean_array_fget(v_source_331_, v_i_330_);
v___x_336_ = lean_box(0);
v_source_337_ = lean_array_fset(v_source_331_, v_i_330_, v___x_336_);
v_target_338_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__9___redArg(v_target_332_, v_es_335_);
v___x_339_ = lean_unsigned_to_nat(1u);
v___x_340_ = lean_nat_add(v_i_330_, v___x_339_);
lean_dec(v_i_330_);
v_i_330_ = v___x_340_;
v_source_331_ = v_source_337_;
v_target_332_ = v_target_338_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4___redArg(lean_object* v_data_342_){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v_nbuckets_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_343_ = lean_array_get_size(v_data_342_);
v___x_344_ = lean_unsigned_to_nat(2u);
v_nbuckets_345_ = lean_nat_mul(v___x_343_, v___x_344_);
v___x_346_ = lean_unsigned_to_nat(0u);
v___x_347_ = lean_box(0);
v___x_348_ = lean_mk_array(v_nbuckets_345_, v___x_347_);
v___x_349_ = lean_array_propagate_mark(v_data_342_, v___x_348_);
v___x_350_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6___redArg(v___x_346_, v_data_342_, v___x_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2___redArg(lean_object* v_m_351_, lean_object* v_a_352_, lean_object* v_b_353_){
_start:
{
lean_object* v_size_354_; lean_object* v_buckets_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_399_; 
v_size_354_ = lean_ctor_get(v_m_351_, 0);
v_buckets_355_ = lean_ctor_get(v_m_351_, 1);
v_isSharedCheck_399_ = !lean_is_exclusive(v_m_351_);
if (v_isSharedCheck_399_ == 0)
{
v___x_357_ = v_m_351_;
v_isShared_358_ = v_isSharedCheck_399_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_buckets_355_);
lean_inc(v_size_354_);
lean_dec(v_m_351_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_399_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_359_; uint64_t v___x_360_; uint64_t v___x_361_; uint64_t v___x_362_; uint64_t v___x_363_; uint64_t v_fold_364_; uint64_t v___x_365_; uint64_t v___x_366_; uint64_t v___x_367_; size_t v___x_368_; size_t v___x_369_; size_t v___x_370_; size_t v___x_371_; size_t v___x_372_; lean_object* v_bkt_373_; uint8_t v___x_374_; 
v___x_359_ = lean_array_get_size(v_buckets_355_);
v___x_360_ = 7ULL;
v___x_361_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_360_, v_a_352_);
v___x_362_ = 32ULL;
v___x_363_ = lean_uint64_shift_right(v___x_361_, v___x_362_);
v_fold_364_ = lean_uint64_xor(v___x_361_, v___x_363_);
v___x_365_ = 16ULL;
v___x_366_ = lean_uint64_shift_right(v_fold_364_, v___x_365_);
v___x_367_ = lean_uint64_xor(v_fold_364_, v___x_366_);
v___x_368_ = lean_uint64_to_usize(v___x_367_);
v___x_369_ = lean_usize_of_nat(v___x_359_);
v___x_370_ = ((size_t)1ULL);
v___x_371_ = lean_usize_sub(v___x_369_, v___x_370_);
v___x_372_ = lean_usize_land(v___x_368_, v___x_371_);
v_bkt_373_ = lean_array_uget_borrowed(v_buckets_355_, v___x_372_);
v___x_374_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(v_a_352_, v_bkt_373_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; lean_object* v_size_x27_376_; lean_object* v___x_377_; lean_object* v_buckets_x27_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; uint8_t v___x_384_; 
v___x_375_ = lean_unsigned_to_nat(1u);
v_size_x27_376_ = lean_nat_add(v_size_354_, v___x_375_);
lean_dec(v_size_354_);
lean_inc(v_bkt_373_);
v___x_377_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_377_, 0, v_a_352_);
lean_ctor_set(v___x_377_, 1, v_b_353_);
lean_ctor_set(v___x_377_, 2, v_bkt_373_);
v_buckets_x27_378_ = lean_array_uset(v_buckets_355_, v___x_372_, v___x_377_);
v___x_379_ = lean_unsigned_to_nat(4u);
v___x_380_ = lean_nat_mul(v_size_x27_376_, v___x_379_);
v___x_381_ = lean_unsigned_to_nat(3u);
v___x_382_ = lean_nat_div(v___x_380_, v___x_381_);
lean_dec(v___x_380_);
v___x_383_ = lean_array_get_size(v_buckets_x27_378_);
v___x_384_ = lean_nat_dec_le(v___x_382_, v___x_383_);
lean_dec(v___x_382_);
if (v___x_384_ == 0)
{
lean_object* v_val_385_; lean_object* v___x_387_; 
v_val_385_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4___redArg(v_buckets_x27_378_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 1, v_val_385_);
lean_ctor_set(v___x_357_, 0, v_size_x27_376_);
v___x_387_ = v___x_357_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_size_x27_376_);
lean_ctor_set(v_reuseFailAlloc_388_, 1, v_val_385_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
else
{
lean_object* v___x_390_; 
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 1, v_buckets_x27_378_);
lean_ctor_set(v___x_357_, 0, v_size_x27_376_);
v___x_390_ = v___x_357_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_size_x27_376_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v_buckets_x27_378_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
else
{
lean_object* v___x_392_; lean_object* v_buckets_x27_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_397_; 
lean_inc(v_bkt_373_);
v___x_392_ = lean_box(0);
v_buckets_x27_393_ = lean_array_uset(v_buckets_355_, v___x_372_, v___x_392_);
v___x_394_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(v_a_352_, v_b_353_, v_bkt_373_);
v___x_395_ = lean_array_uset(v_buckets_x27_393_, v___x_372_, v___x_394_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 1, v___x_395_);
v___x_397_ = v___x_357_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_size_354_);
lean_ctor_set(v_reuseFailAlloc_398_, 1, v___x_395_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(lean_object* v_a_400_, lean_object* v_x_401_){
_start:
{
if (lean_obj_tag(v_x_401_) == 0)
{
lean_object* v___x_402_; 
v___x_402_ = lean_box(0);
return v___x_402_;
}
else
{
lean_object* v_key_403_; lean_object* v_value_404_; lean_object* v_tail_405_; uint8_t v___x_406_; 
v_key_403_ = lean_ctor_get(v_x_401_, 0);
v_value_404_ = lean_ctor_get(v_x_401_, 1);
v_tail_405_ = lean_ctor_get(v_x_401_, 2);
v___x_406_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_key_403_, v_a_400_);
if (v___x_406_ == 0)
{
v_x_401_ = v_tail_405_;
goto _start;
}
else
{
lean_object* v___x_408_; 
lean_inc(v_value_404_);
v___x_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_408_, 0, v_value_404_);
return v___x_408_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg___boxed(lean_object* v_a_409_, lean_object* v_x_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(v_a_409_, v_x_410_);
lean_dec(v_x_410_);
lean_dec(v_a_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(lean_object* v_m_412_, lean_object* v_a_413_){
_start:
{
lean_object* v_buckets_414_; lean_object* v___x_415_; uint64_t v___x_416_; uint64_t v___x_417_; uint64_t v___x_418_; uint64_t v___x_419_; uint64_t v_fold_420_; uint64_t v___x_421_; uint64_t v___x_422_; uint64_t v___x_423_; size_t v___x_424_; size_t v___x_425_; size_t v___x_426_; size_t v___x_427_; size_t v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v_buckets_414_ = lean_ctor_get(v_m_412_, 1);
v___x_415_ = lean_array_get_size(v_buckets_414_);
v___x_416_ = 7ULL;
v___x_417_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_416_, v_a_413_);
v___x_418_ = 32ULL;
v___x_419_ = lean_uint64_shift_right(v___x_417_, v___x_418_);
v_fold_420_ = lean_uint64_xor(v___x_417_, v___x_419_);
v___x_421_ = 16ULL;
v___x_422_ = lean_uint64_shift_right(v_fold_420_, v___x_421_);
v___x_423_ = lean_uint64_xor(v_fold_420_, v___x_422_);
v___x_424_ = lean_uint64_to_usize(v___x_423_);
v___x_425_ = lean_usize_of_nat(v___x_415_);
v___x_426_ = ((size_t)1ULL);
v___x_427_ = lean_usize_sub(v___x_425_, v___x_426_);
v___x_428_ = lean_usize_land(v___x_424_, v___x_427_);
v___x_429_ = lean_array_uget_borrowed(v_buckets_414_, v___x_428_);
v___x_430_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(v_a_413_, v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg___boxed(lean_object* v_m_431_, lean_object* v_a_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(v_m_431_, v_a_432_);
lean_dec(v_a_432_);
lean_dec_ref(v_m_431_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_decoder(lean_object* v_e_434_, lean_object* v_paths_435_){
_start:
{
lean_object* v_tables_436_; lean_object* v_defs_437_; lean_object* v_out_438_; lean_object* v_names_439_; lean_object* v_values_440_; lean_object* v_decoders_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_470_; 
v_tables_436_ = lean_ctor_get(v_e_434_, 0);
lean_inc_ref(v_tables_436_);
v_defs_437_ = lean_ctor_get(v_e_434_, 1);
v_out_438_ = lean_ctor_get(v_e_434_, 2);
v_names_439_ = lean_ctor_get(v_tables_436_, 0);
v_values_440_ = lean_ctor_get(v_tables_436_, 1);
v_decoders_441_ = lean_ctor_get(v_tables_436_, 2);
v_isSharedCheck_470_ = !lean_is_exclusive(v_tables_436_);
if (v_isSharedCheck_470_ == 0)
{
v___x_443_ = v_tables_436_;
v_isShared_444_ = v_isSharedCheck_470_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_decoders_441_);
lean_inc(v_values_440_);
lean_inc(v_names_439_);
lean_dec(v_tables_436_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_470_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_445_; 
v___x_445_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(v_decoders_441_, v_paths_435_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_464_; 
lean_inc_ref(v_out_438_);
lean_inc_ref(v_defs_437_);
v_isSharedCheck_464_ = !lean_is_exclusive(v_e_434_);
if (v_isSharedCheck_464_ == 0)
{
lean_object* v_unused_465_; lean_object* v_unused_466_; lean_object* v_unused_467_; 
v_unused_465_ = lean_ctor_get(v_e_434_, 2);
lean_dec(v_unused_465_);
v_unused_466_ = lean_ctor_get(v_e_434_, 1);
lean_dec(v_unused_466_);
v_unused_467_ = lean_ctor_get(v_e_434_, 0);
lean_dec(v_unused_467_);
v___x_447_ = v_e_434_;
v_isShared_448_ = v_isSharedCheck_464_;
goto v_resetjp_446_;
}
else
{
lean_dec(v_e_434_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_464_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v_size_449_; lean_object* v___x_450_; lean_object* v_t_452_; 
v_size_449_ = lean_ctor_get(v_decoders_441_, 0);
lean_inc_n(v_size_449_, 2);
lean_inc(v_paths_435_);
v___x_450_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2___redArg(v_decoders_441_, v_paths_435_, v_size_449_);
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 2, v___x_450_);
v_t_452_ = v___x_443_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_names_439_);
lean_ctor_set(v_reuseFailAlloc_463_, 1, v_values_440_);
lean_ctor_set(v_reuseFailAlloc_463_, 2, v___x_450_);
v_t_452_ = v_reuseFailAlloc_463_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
uint8_t v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v_d_457_; lean_object* v_d_458_; lean_object* v___x_460_; 
v___x_453_ = 7;
v___x_454_ = lean_byte_array_push(v_defs_437_, v___x_453_);
lean_inc(v_size_449_);
v___x_455_ = l_Lasm_UI_Encode_pushVar(v___x_454_, v_size_449_);
v___x_456_ = l_List_lengthTR___redArg(v_paths_435_);
v_d_457_ = l_Lasm_UI_Encode_pushVar(v___x_455_, v___x_456_);
v_d_458_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3(v_d_457_, v_paths_435_);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 1, v_d_458_);
lean_ctor_set(v___x_447_, 0, v_t_452_);
v___x_460_ = v___x_447_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_t_452_);
lean_ctor_set(v_reuseFailAlloc_462_, 1, v_d_458_);
lean_ctor_set(v_reuseFailAlloc_462_, 2, v_out_438_);
v___x_460_ = v_reuseFailAlloc_462_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
lean_object* v___x_461_; 
v___x_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_461_, 0, v___x_460_);
lean_ctor_set(v___x_461_, 1, v_size_449_);
return v___x_461_;
}
}
}
}
else
{
lean_object* v_val_468_; lean_object* v___x_469_; 
lean_del_object(v___x_443_);
lean_dec_ref(v_decoders_441_);
lean_dec_ref(v_values_440_);
lean_dec_ref(v_names_439_);
lean_dec(v_paths_435_);
v_val_468_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_val_468_);
lean_dec_ref_known(v___x_445_, 1);
v___x_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_469_, 0, v_e_434_);
lean_ctor_set(v___x_469_, 1, v_val_468_);
return v___x_469_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1(lean_object* v_00_u03b2_471_, lean_object* v_m_472_, lean_object* v_a_473_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(v_m_472_, v_a_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___boxed(lean_object* v_00_u03b2_475_, lean_object* v_m_476_, lean_object* v_a_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1(v_00_u03b2_475_, v_m_476_, v_a_477_);
lean_dec(v_a_477_);
lean_dec_ref(v_m_476_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2(lean_object* v_00_u03b2_479_, lean_object* v_m_480_, lean_object* v_a_481_, lean_object* v_b_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2___redArg(v_m_480_, v_a_481_, v_b_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1(lean_object* v_00_u03b2_484_, lean_object* v_a_485_, lean_object* v_x_486_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(v_a_485_, v_x_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___boxed(lean_object* v_00_u03b2_488_, lean_object* v_a_489_, lean_object* v_x_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1(v_00_u03b2_488_, v_a_489_, v_x_490_);
lean_dec(v_x_490_);
lean_dec(v_a_489_);
return v_res_491_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3(lean_object* v_00_u03b2_492_, lean_object* v_a_493_, lean_object* v_x_494_){
_start:
{
uint8_t v___x_495_; 
v___x_495_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(v_a_493_, v_x_494_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___boxed(lean_object* v_00_u03b2_496_, lean_object* v_a_497_, lean_object* v_x_498_){
_start:
{
uint8_t v_res_499_; lean_object* v_r_500_; 
v_res_499_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3(v_00_u03b2_496_, v_a_497_, v_x_498_);
lean_dec(v_x_498_);
lean_dec(v_a_497_);
v_r_500_ = lean_box(v_res_499_);
return v_r_500_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4(lean_object* v_00_u03b2_501_, lean_object* v_data_502_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4___redArg(v_data_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5(lean_object* v_00_u03b2_504_, lean_object* v_a_505_, lean_object* v_b_506_, lean_object* v_x_507_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(v_a_505_, v_b_506_, v_x_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_509_, lean_object* v_i_510_, lean_object* v_source_511_, lean_object* v_target_512_){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6___redArg(v_i_510_, v_source_511_, v_target_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__9(lean_object* v_00_u03b2_514_, lean_object* v_x_515_, lean_object* v_x_516_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__9___redArg(v_x_515_, v_x_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_flags(lean_object* v_l_518_){
_start:
{
uint8_t v_preventDefault_519_; uint8_t v_stopPropagation_520_; lean_object* v___y_522_; 
v_preventDefault_519_ = lean_ctor_get_uint8(v_l_518_, sizeof(void*)*2);
v_stopPropagation_520_ = lean_ctor_get_uint8(v_l_518_, sizeof(void*)*2 + 1);
if (v_preventDefault_519_ == 0)
{
lean_object* v___x_525_; 
v___x_525_ = lean_unsigned_to_nat(0u);
v___y_522_ = v___x_525_;
goto v___jp_521_;
}
else
{
lean_object* v___x_526_; 
v___x_526_ = lean_unsigned_to_nat(1u);
v___y_522_ = v___x_526_;
goto v___jp_521_;
}
v___jp_521_:
{
if (v_stopPropagation_520_ == 0)
{
lean_inc(v___y_522_);
return v___y_522_;
}
else
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = lean_unsigned_to_nat(2u);
v___x_524_ = lean_nat_add(v___y_522_, v___x_523_);
return v___x_524_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_flags___boxed(lean_object* v_l_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Lasm_UI_Encode_Enc_flags(v_l_527_);
lean_dec_ref(v_l_527_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_setAttr(lean_object* v_e_529_, lean_object* v_k_530_, lean_object* v_v_531_){
_start:
{
switch(lean_obj_tag(v_k_530_))
{
case 0:
{
if (lean_obj_tag(v_v_531_) == 0)
{
lean_object* v_name_532_; lean_object* v_s_533_; lean_object* v_tables_534_; lean_object* v_defs_535_; lean_object* v_out_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_547_; 
v_name_532_ = lean_ctor_get(v_k_530_, 0);
lean_inc_ref(v_name_532_);
lean_dec_ref_known(v_k_530_, 1);
v_s_533_ = lean_ctor_get(v_v_531_, 0);
lean_inc_ref(v_s_533_);
lean_dec_ref_known(v_v_531_, 1);
v_tables_534_ = lean_ctor_get(v_e_529_, 0);
v_defs_535_ = lean_ctor_get(v_e_529_, 1);
v_out_536_ = lean_ctor_get(v_e_529_, 2);
v_isSharedCheck_547_ = !lean_is_exclusive(v_e_529_);
if (v_isSharedCheck_547_ == 0)
{
v___x_538_ = v_e_529_;
v_isShared_539_ = v_isSharedCheck_547_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_out_536_);
lean_inc(v_defs_535_);
lean_inc(v_tables_534_);
lean_dec(v_e_529_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_547_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
uint8_t v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
v___x_540_ = 0;
v___x_541_ = lean_byte_array_push(v_out_536_, v___x_540_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 2, v___x_541_);
v___x_543_ = v___x_538_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_tables_534_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v_defs_535_);
lean_ctor_set(v_reuseFailAlloc_546_, 2, v___x_541_);
v___x_543_ = v_reuseFailAlloc_546_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = l_Lasm_UI_Encode_Enc_name(v___x_543_, v_name_532_);
v___x_545_ = l_Lasm_UI_Encode_Enc_value(v___x_544_, v_s_533_);
return v___x_545_;
}
}
}
else
{
lean_object* v_name_548_; lean_object* v_tables_549_; lean_object* v_defs_550_; lean_object* v_out_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_561_; 
lean_dec_ref(v_v_531_);
v_name_548_ = lean_ctor_get(v_k_530_, 0);
lean_inc_ref(v_name_548_);
lean_dec_ref_known(v_k_530_, 1);
v_tables_549_ = lean_ctor_get(v_e_529_, 0);
v_defs_550_ = lean_ctor_get(v_e_529_, 1);
v_out_551_ = lean_ctor_get(v_e_529_, 2);
v_isSharedCheck_561_ = !lean_is_exclusive(v_e_529_);
if (v_isSharedCheck_561_ == 0)
{
v___x_553_ = v_e_529_;
v_isShared_554_ = v_isSharedCheck_561_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_out_551_);
lean_inc(v_defs_550_);
lean_inc(v_tables_549_);
lean_dec(v_e_529_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_561_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
uint8_t v___x_555_; lean_object* v___x_556_; lean_object* v___x_558_; 
v___x_555_ = 8;
v___x_556_ = lean_byte_array_push(v_out_551_, v___x_555_);
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 2, v___x_556_);
v___x_558_ = v___x_553_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_tables_549_);
lean_ctor_set(v_reuseFailAlloc_560_, 1, v_defs_550_);
lean_ctor_set(v_reuseFailAlloc_560_, 2, v___x_556_);
v___x_558_ = v_reuseFailAlloc_560_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
lean_object* v___x_559_; 
v___x_559_ = l_Lasm_UI_Encode_Enc_name(v___x_558_, v_name_548_);
return v___x_559_;
}
}
}
}
case 1:
{
if (lean_obj_tag(v_v_531_) == 1)
{
lean_object* v_v_562_; 
v_v_562_ = lean_ctor_get(v_v_531_, 0);
lean_inc_ref(v_v_562_);
lean_dec_ref_known(v_v_531_, 1);
if (lean_obj_tag(v_v_562_) == 0)
{
lean_object* v_name_563_; lean_object* v_s_564_; lean_object* v_tables_565_; lean_object* v_defs_566_; lean_object* v_out_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_578_; 
v_name_563_ = lean_ctor_get(v_k_530_, 0);
lean_inc_ref(v_name_563_);
lean_dec_ref_known(v_k_530_, 1);
v_s_564_ = lean_ctor_get(v_v_562_, 0);
lean_inc_ref(v_s_564_);
lean_dec_ref_known(v_v_562_, 1);
v_tables_565_ = lean_ctor_get(v_e_529_, 0);
v_defs_566_ = lean_ctor_get(v_e_529_, 1);
v_out_567_ = lean_ctor_get(v_e_529_, 2);
v_isSharedCheck_578_ = !lean_is_exclusive(v_e_529_);
if (v_isSharedCheck_578_ == 0)
{
v___x_569_ = v_e_529_;
v_isShared_570_ = v_isSharedCheck_578_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_out_567_);
lean_inc(v_defs_566_);
lean_inc(v_tables_565_);
lean_dec(v_e_529_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_578_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
uint8_t v___x_571_; lean_object* v___x_572_; lean_object* v___x_574_; 
v___x_571_ = 1;
v___x_572_ = lean_byte_array_push(v_out_567_, v___x_571_);
if (v_isShared_570_ == 0)
{
lean_ctor_set(v___x_569_, 2, v___x_572_);
v___x_574_ = v___x_569_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_tables_565_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_defs_566_);
lean_ctor_set(v_reuseFailAlloc_577_, 2, v___x_572_);
v___x_574_ = v_reuseFailAlloc_577_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = l_Lasm_UI_Encode_Enc_name(v___x_574_, v_name_563_);
v___x_576_ = l_Lasm_UI_Encode_Enc_value(v___x_575_, v_s_564_);
return v___x_576_;
}
}
}
else
{
uint8_t v_b_579_; 
v_b_579_ = lean_ctor_get_uint8(v_v_562_, 0);
lean_dec_ref_known(v_v_562_, 0);
if (v_b_579_ == 0)
{
lean_object* v_name_580_; lean_object* v_tables_581_; lean_object* v_defs_582_; lean_object* v_out_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_593_; 
v_name_580_ = lean_ctor_get(v_k_530_, 0);
lean_inc_ref(v_name_580_);
lean_dec_ref_known(v_k_530_, 1);
v_tables_581_ = lean_ctor_get(v_e_529_, 0);
v_defs_582_ = lean_ctor_get(v_e_529_, 1);
v_out_583_ = lean_ctor_get(v_e_529_, 2);
v_isSharedCheck_593_ = !lean_is_exclusive(v_e_529_);
if (v_isSharedCheck_593_ == 0)
{
v___x_585_ = v_e_529_;
v_isShared_586_ = v_isSharedCheck_593_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_out_583_);
lean_inc(v_defs_582_);
lean_inc(v_tables_581_);
lean_dec(v_e_529_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_593_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
uint8_t v___x_587_; lean_object* v___x_588_; lean_object* v___x_590_; 
v___x_587_ = 2;
v___x_588_ = lean_byte_array_push(v_out_583_, v___x_587_);
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 2, v___x_588_);
v___x_590_ = v___x_585_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_tables_581_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_defs_582_);
lean_ctor_set(v_reuseFailAlloc_592_, 2, v___x_588_);
v___x_590_ = v_reuseFailAlloc_592_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
lean_object* v___x_591_; 
v___x_591_ = l_Lasm_UI_Encode_Enc_name(v___x_590_, v_name_580_);
return v___x_591_;
}
}
}
else
{
lean_object* v_name_594_; lean_object* v_tables_595_; lean_object* v_defs_596_; lean_object* v_out_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_607_; 
v_name_594_ = lean_ctor_get(v_k_530_, 0);
lean_inc_ref(v_name_594_);
lean_dec_ref_known(v_k_530_, 1);
v_tables_595_ = lean_ctor_get(v_e_529_, 0);
v_defs_596_ = lean_ctor_get(v_e_529_, 1);
v_out_597_ = lean_ctor_get(v_e_529_, 2);
v_isSharedCheck_607_ = !lean_is_exclusive(v_e_529_);
if (v_isSharedCheck_607_ == 0)
{
v___x_599_ = v_e_529_;
v_isShared_600_ = v_isSharedCheck_607_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_out_597_);
lean_inc(v_defs_596_);
lean_inc(v_tables_595_);
lean_dec(v_e_529_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_607_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
uint8_t v___x_601_; lean_object* v___x_602_; lean_object* v___x_604_; 
v___x_601_ = 3;
v___x_602_ = lean_byte_array_push(v_out_597_, v___x_601_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 2, v___x_602_);
v___x_604_ = v___x_599_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_tables_595_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_defs_596_);
lean_ctor_set(v_reuseFailAlloc_606_, 2, v___x_602_);
v___x_604_ = v_reuseFailAlloc_606_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
lean_object* v___x_605_; 
v___x_605_ = l_Lasm_UI_Encode_Enc_name(v___x_604_, v_name_594_);
return v___x_605_;
}
}
}
}
}
else
{
lean_object* v_name_608_; lean_object* v_tables_609_; lean_object* v_defs_610_; lean_object* v_out_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_621_; 
lean_dec_ref(v_v_531_);
v_name_608_ = lean_ctor_get(v_k_530_, 0);
lean_inc_ref(v_name_608_);
lean_dec_ref_known(v_k_530_, 1);
v_tables_609_ = lean_ctor_get(v_e_529_, 0);
v_defs_610_ = lean_ctor_get(v_e_529_, 1);
v_out_611_ = lean_ctor_get(v_e_529_, 2);
v_isSharedCheck_621_ = !lean_is_exclusive(v_e_529_);
if (v_isSharedCheck_621_ == 0)
{
v___x_613_ = v_e_529_;
v_isShared_614_ = v_isSharedCheck_621_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_out_611_);
lean_inc(v_defs_610_);
lean_inc(v_tables_609_);
lean_dec(v_e_529_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_621_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
uint8_t v___x_615_; lean_object* v___x_616_; lean_object* v___x_618_; 
v___x_615_ = 9;
v___x_616_ = lean_byte_array_push(v_out_611_, v___x_615_);
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 2, v___x_616_);
v___x_618_ = v___x_613_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_tables_609_);
lean_ctor_set(v_reuseFailAlloc_620_, 1, v_defs_610_);
lean_ctor_set(v_reuseFailAlloc_620_, 2, v___x_616_);
v___x_618_ = v_reuseFailAlloc_620_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
lean_object* v___x_619_; 
v___x_619_ = l_Lasm_UI_Encode_Enc_name(v___x_618_, v_name_608_);
return v___x_619_;
}
}
}
}
case 2:
{
if (lean_obj_tag(v_v_531_) == 0)
{
lean_object* v_name_622_; lean_object* v_s_623_; lean_object* v_tables_624_; lean_object* v_defs_625_; lean_object* v_out_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_637_; 
v_name_622_ = lean_ctor_get(v_k_530_, 0);
lean_inc_ref(v_name_622_);
lean_dec_ref_known(v_k_530_, 1);
v_s_623_ = lean_ctor_get(v_v_531_, 0);
lean_inc_ref(v_s_623_);
lean_dec_ref_known(v_v_531_, 1);
v_tables_624_ = lean_ctor_get(v_e_529_, 0);
v_defs_625_ = lean_ctor_get(v_e_529_, 1);
v_out_626_ = lean_ctor_get(v_e_529_, 2);
v_isSharedCheck_637_ = !lean_is_exclusive(v_e_529_);
if (v_isSharedCheck_637_ == 0)
{
v___x_628_ = v_e_529_;
v_isShared_629_ = v_isSharedCheck_637_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_out_626_);
lean_inc(v_defs_625_);
lean_inc(v_tables_624_);
lean_dec(v_e_529_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_637_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
uint8_t v___x_630_; lean_object* v___x_631_; lean_object* v___x_633_; 
v___x_630_ = 4;
v___x_631_ = lean_byte_array_push(v_out_626_, v___x_630_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 2, v___x_631_);
v___x_633_ = v___x_628_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_tables_624_);
lean_ctor_set(v_reuseFailAlloc_636_, 1, v_defs_625_);
lean_ctor_set(v_reuseFailAlloc_636_, 2, v___x_631_);
v___x_633_ = v_reuseFailAlloc_636_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_634_ = l_Lasm_UI_Encode_Enc_name(v___x_633_, v_name_622_);
v___x_635_ = l_Lasm_UI_Encode_Enc_value(v___x_634_, v_s_623_);
return v___x_635_;
}
}
}
else
{
lean_object* v_name_638_; lean_object* v_tables_639_; lean_object* v_defs_640_; lean_object* v_out_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_651_; 
lean_dec_ref(v_v_531_);
v_name_638_ = lean_ctor_get(v_k_530_, 0);
lean_inc_ref(v_name_638_);
lean_dec_ref_known(v_k_530_, 1);
v_tables_639_ = lean_ctor_get(v_e_529_, 0);
v_defs_640_ = lean_ctor_get(v_e_529_, 1);
v_out_641_ = lean_ctor_get(v_e_529_, 2);
v_isSharedCheck_651_ = !lean_is_exclusive(v_e_529_);
if (v_isSharedCheck_651_ == 0)
{
v___x_643_ = v_e_529_;
v_isShared_644_ = v_isSharedCheck_651_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_out_641_);
lean_inc(v_defs_640_);
lean_inc(v_tables_639_);
lean_dec(v_e_529_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_651_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
uint8_t v___x_645_; lean_object* v___x_646_; lean_object* v___x_648_; 
v___x_645_ = 10;
v___x_646_ = lean_byte_array_push(v_out_641_, v___x_645_);
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 2, v___x_646_);
v___x_648_ = v___x_643_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_tables_639_);
lean_ctor_set(v_reuseFailAlloc_650_, 1, v_defs_640_);
lean_ctor_set(v_reuseFailAlloc_650_, 2, v___x_646_);
v___x_648_ = v_reuseFailAlloc_650_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
lean_object* v___x_649_; 
v___x_649_ = l_Lasm_UI_Encode_Enc_name(v___x_648_, v_name_638_);
return v___x_649_;
}
}
}
}
default: 
{
if (lean_obj_tag(v_v_531_) == 2)
{
lean_object* v_l_652_; lean_object* v_event_653_; lean_object* v_paths_654_; lean_object* v___x_655_; lean_object* v_fst_656_; lean_object* v_snd_657_; lean_object* v_tables_658_; lean_object* v_defs_659_; lean_object* v_out_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_683_; 
v_l_652_ = lean_ctor_get(v_v_531_, 0);
lean_inc_ref(v_l_652_);
lean_dec_ref_known(v_v_531_, 1);
v_event_653_ = lean_ctor_get(v_k_530_, 0);
lean_inc_ref(v_event_653_);
lean_dec_ref_known(v_k_530_, 1);
v_paths_654_ = lean_ctor_get(v_l_652_, 1);
lean_inc(v_paths_654_);
v___x_655_ = l_Lasm_UI_Encode_Enc_decoder(v_e_529_, v_paths_654_);
v_fst_656_ = lean_ctor_get(v___x_655_, 0);
lean_inc(v_fst_656_);
v_snd_657_ = lean_ctor_get(v___x_655_, 1);
lean_inc(v_snd_657_);
lean_dec_ref(v___x_655_);
v_tables_658_ = lean_ctor_get(v_fst_656_, 0);
v_defs_659_ = lean_ctor_get(v_fst_656_, 1);
v_out_660_ = lean_ctor_get(v_fst_656_, 2);
v_isSharedCheck_683_ = !lean_is_exclusive(v_fst_656_);
if (v_isSharedCheck_683_ == 0)
{
v___x_662_ = v_fst_656_;
v_isShared_663_ = v_isSharedCheck_683_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_out_660_);
lean_inc(v_defs_659_);
lean_inc(v_tables_658_);
lean_dec(v_fst_656_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_683_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
uint8_t v___x_664_; lean_object* v___x_665_; lean_object* v___x_667_; 
v___x_664_ = 5;
v___x_665_ = lean_byte_array_push(v_out_660_, v___x_664_);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 2, v___x_665_);
v___x_667_ = v___x_662_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_tables_658_);
lean_ctor_set(v_reuseFailAlloc_682_, 1, v_defs_659_);
lean_ctor_set(v_reuseFailAlloc_682_, 2, v___x_665_);
v___x_667_ = v_reuseFailAlloc_682_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
lean_object* v___x_668_; lean_object* v_tables_669_; lean_object* v_defs_670_; lean_object* v_out_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_681_; 
v___x_668_ = l_Lasm_UI_Encode_Enc_name(v___x_667_, v_event_653_);
v_tables_669_ = lean_ctor_get(v___x_668_, 0);
v_defs_670_ = lean_ctor_get(v___x_668_, 1);
v_out_671_ = lean_ctor_get(v___x_668_, 2);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_681_ == 0)
{
v___x_673_ = v___x_668_;
v_isShared_674_ = v_isSharedCheck_681_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_out_671_);
lean_inc(v_defs_670_);
lean_inc(v_tables_669_);
lean_dec(v___x_668_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_681_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_675_ = l_Lasm_UI_Encode_pushVar(v_out_671_, v_snd_657_);
v___x_676_ = l_Lasm_UI_Encode_Enc_flags(v_l_652_);
lean_dec_ref(v_l_652_);
v___x_677_ = l_Lasm_UI_Encode_pushVar(v___x_675_, v___x_676_);
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 2, v___x_677_);
v___x_679_ = v___x_673_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_tables_669_);
lean_ctor_set(v_reuseFailAlloc_680_, 1, v_defs_670_);
lean_ctor_set(v_reuseFailAlloc_680_, 2, v___x_677_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
}
else
{
lean_object* v_event_684_; lean_object* v_tables_685_; lean_object* v_defs_686_; lean_object* v_out_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_697_; 
lean_dec_ref(v_v_531_);
v_event_684_ = lean_ctor_get(v_k_530_, 0);
lean_inc_ref(v_event_684_);
lean_dec_ref_known(v_k_530_, 1);
v_tables_685_ = lean_ctor_get(v_e_529_, 0);
v_defs_686_ = lean_ctor_get(v_e_529_, 1);
v_out_687_ = lean_ctor_get(v_e_529_, 2);
v_isSharedCheck_697_ = !lean_is_exclusive(v_e_529_);
if (v_isSharedCheck_697_ == 0)
{
v___x_689_ = v_e_529_;
v_isShared_690_ = v_isSharedCheck_697_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_out_687_);
lean_inc(v_defs_686_);
lean_inc(v_tables_685_);
lean_dec(v_e_529_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_697_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
uint8_t v___x_691_; lean_object* v___x_692_; lean_object* v___x_694_; 
v___x_691_ = 11;
v___x_692_ = lean_byte_array_push(v_out_687_, v___x_691_);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 2, v___x_692_);
v___x_694_ = v___x_689_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_tables_685_);
lean_ctor_set(v_reuseFailAlloc_696_, 1, v_defs_686_);
lean_ctor_set(v_reuseFailAlloc_696_, 2, v___x_692_);
v___x_694_ = v_reuseFailAlloc_696_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
lean_object* v___x_695_; 
v___x_695_ = l_Lasm_UI_Encode_Enc_name(v___x_694_, v_event_684_);
return v___x_695_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attr___redArg(lean_object* v_e_698_, lean_object* v_x_699_){
_start:
{
switch(lean_obj_tag(v_x_699_))
{
case 0:
{
lean_object* v_name_700_; lean_object* v_value_701_; lean_object* v_tables_702_; lean_object* v_defs_703_; lean_object* v_out_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_715_; 
v_name_700_ = lean_ctor_get(v_x_699_, 0);
lean_inc_ref(v_name_700_);
v_value_701_ = lean_ctor_get(v_x_699_, 1);
lean_inc_ref(v_value_701_);
lean_dec_ref_known(v_x_699_, 2);
v_tables_702_ = lean_ctor_get(v_e_698_, 0);
v_defs_703_ = lean_ctor_get(v_e_698_, 1);
v_out_704_ = lean_ctor_get(v_e_698_, 2);
v_isSharedCheck_715_ = !lean_is_exclusive(v_e_698_);
if (v_isSharedCheck_715_ == 0)
{
v___x_706_ = v_e_698_;
v_isShared_707_ = v_isSharedCheck_715_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_out_704_);
lean_inc(v_defs_703_);
lean_inc(v_tables_702_);
lean_dec(v_e_698_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_715_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
uint8_t v___x_708_; lean_object* v___x_709_; lean_object* v___x_711_; 
v___x_708_ = 0;
v___x_709_ = lean_byte_array_push(v_out_704_, v___x_708_);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 2, v___x_709_);
v___x_711_ = v___x_706_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_tables_702_);
lean_ctor_set(v_reuseFailAlloc_714_, 1, v_defs_703_);
lean_ctor_set(v_reuseFailAlloc_714_, 2, v___x_709_);
v___x_711_ = v_reuseFailAlloc_714_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_712_ = l_Lasm_UI_Encode_Enc_name(v___x_711_, v_name_700_);
v___x_713_ = l_Lasm_UI_Encode_Enc_value(v___x_712_, v_value_701_);
return v___x_713_;
}
}
}
case 1:
{
lean_object* v_value_716_; 
v_value_716_ = lean_ctor_get(v_x_699_, 1);
if (lean_obj_tag(v_value_716_) == 0)
{
lean_object* v_name_717_; lean_object* v_s_718_; lean_object* v_tables_719_; lean_object* v_defs_720_; lean_object* v_out_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_732_; 
lean_inc_ref(v_value_716_);
v_name_717_ = lean_ctor_get(v_x_699_, 0);
lean_inc_ref(v_name_717_);
lean_dec_ref_known(v_x_699_, 2);
v_s_718_ = lean_ctor_get(v_value_716_, 0);
lean_inc_ref(v_s_718_);
lean_dec_ref_known(v_value_716_, 1);
v_tables_719_ = lean_ctor_get(v_e_698_, 0);
v_defs_720_ = lean_ctor_get(v_e_698_, 1);
v_out_721_ = lean_ctor_get(v_e_698_, 2);
v_isSharedCheck_732_ = !lean_is_exclusive(v_e_698_);
if (v_isSharedCheck_732_ == 0)
{
v___x_723_ = v_e_698_;
v_isShared_724_ = v_isSharedCheck_732_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_out_721_);
lean_inc(v_defs_720_);
lean_inc(v_tables_719_);
lean_dec(v_e_698_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_732_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
uint8_t v___x_725_; lean_object* v___x_726_; lean_object* v___x_728_; 
v___x_725_ = 1;
v___x_726_ = lean_byte_array_push(v_out_721_, v___x_725_);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 2, v___x_726_);
v___x_728_ = v___x_723_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_tables_719_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v_defs_720_);
lean_ctor_set(v_reuseFailAlloc_731_, 2, v___x_726_);
v___x_728_ = v_reuseFailAlloc_731_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_729_ = l_Lasm_UI_Encode_Enc_name(v___x_728_, v_name_717_);
v___x_730_ = l_Lasm_UI_Encode_Enc_value(v___x_729_, v_s_718_);
return v___x_730_;
}
}
}
else
{
uint8_t v_b_733_; 
v_b_733_ = lean_ctor_get_uint8(v_value_716_, 0);
if (v_b_733_ == 0)
{
lean_object* v_name_734_; lean_object* v_tables_735_; lean_object* v_defs_736_; lean_object* v_out_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_747_; 
v_name_734_ = lean_ctor_get(v_x_699_, 0);
lean_inc_ref(v_name_734_);
lean_dec_ref_known(v_x_699_, 2);
v_tables_735_ = lean_ctor_get(v_e_698_, 0);
v_defs_736_ = lean_ctor_get(v_e_698_, 1);
v_out_737_ = lean_ctor_get(v_e_698_, 2);
v_isSharedCheck_747_ = !lean_is_exclusive(v_e_698_);
if (v_isSharedCheck_747_ == 0)
{
v___x_739_ = v_e_698_;
v_isShared_740_ = v_isSharedCheck_747_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_out_737_);
lean_inc(v_defs_736_);
lean_inc(v_tables_735_);
lean_dec(v_e_698_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_747_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
uint8_t v___x_741_; lean_object* v___x_742_; lean_object* v___x_744_; 
v___x_741_ = 2;
v___x_742_ = lean_byte_array_push(v_out_737_, v___x_741_);
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 2, v___x_742_);
v___x_744_ = v___x_739_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_tables_735_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v_defs_736_);
lean_ctor_set(v_reuseFailAlloc_746_, 2, v___x_742_);
v___x_744_ = v_reuseFailAlloc_746_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
lean_object* v___x_745_; 
v___x_745_ = l_Lasm_UI_Encode_Enc_name(v___x_744_, v_name_734_);
return v___x_745_;
}
}
}
else
{
lean_object* v_name_748_; lean_object* v_tables_749_; lean_object* v_defs_750_; lean_object* v_out_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_761_; 
v_name_748_ = lean_ctor_get(v_x_699_, 0);
lean_inc_ref(v_name_748_);
lean_dec_ref_known(v_x_699_, 2);
v_tables_749_ = lean_ctor_get(v_e_698_, 0);
v_defs_750_ = lean_ctor_get(v_e_698_, 1);
v_out_751_ = lean_ctor_get(v_e_698_, 2);
v_isSharedCheck_761_ = !lean_is_exclusive(v_e_698_);
if (v_isSharedCheck_761_ == 0)
{
v___x_753_ = v_e_698_;
v_isShared_754_ = v_isSharedCheck_761_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_out_751_);
lean_inc(v_defs_750_);
lean_inc(v_tables_749_);
lean_dec(v_e_698_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_761_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
uint8_t v___x_755_; lean_object* v___x_756_; lean_object* v___x_758_; 
v___x_755_ = 3;
v___x_756_ = lean_byte_array_push(v_out_751_, v___x_755_);
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 2, v___x_756_);
v___x_758_ = v___x_753_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_tables_749_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v_defs_750_);
lean_ctor_set(v_reuseFailAlloc_760_, 2, v___x_756_);
v___x_758_ = v_reuseFailAlloc_760_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
lean_object* v___x_759_; 
v___x_759_ = l_Lasm_UI_Encode_Enc_name(v___x_758_, v_name_748_);
return v___x_759_;
}
}
}
}
}
case 2:
{
lean_object* v_name_762_; lean_object* v_value_763_; lean_object* v_tables_764_; lean_object* v_defs_765_; lean_object* v_out_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_777_; 
v_name_762_ = lean_ctor_get(v_x_699_, 0);
lean_inc_ref(v_name_762_);
v_value_763_ = lean_ctor_get(v_x_699_, 1);
lean_inc_ref(v_value_763_);
lean_dec_ref_known(v_x_699_, 2);
v_tables_764_ = lean_ctor_get(v_e_698_, 0);
v_defs_765_ = lean_ctor_get(v_e_698_, 1);
v_out_766_ = lean_ctor_get(v_e_698_, 2);
v_isSharedCheck_777_ = !lean_is_exclusive(v_e_698_);
if (v_isSharedCheck_777_ == 0)
{
v___x_768_ = v_e_698_;
v_isShared_769_ = v_isSharedCheck_777_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_out_766_);
lean_inc(v_defs_765_);
lean_inc(v_tables_764_);
lean_dec(v_e_698_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_777_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
uint8_t v___x_770_; lean_object* v___x_771_; lean_object* v___x_773_; 
v___x_770_ = 4;
v___x_771_ = lean_byte_array_push(v_out_766_, v___x_770_);
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 2, v___x_771_);
v___x_773_ = v___x_768_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_tables_764_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v_defs_765_);
lean_ctor_set(v_reuseFailAlloc_776_, 2, v___x_771_);
v___x_773_ = v_reuseFailAlloc_776_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = l_Lasm_UI_Encode_Enc_name(v___x_773_, v_name_762_);
v___x_775_ = l_Lasm_UI_Encode_Enc_value(v___x_774_, v_value_763_);
return v___x_775_;
}
}
}
default: 
{
lean_object* v_listener_778_; lean_object* v_event_779_; lean_object* v_paths_780_; lean_object* v___x_781_; lean_object* v_fst_782_; lean_object* v_snd_783_; lean_object* v_tables_784_; lean_object* v_defs_785_; lean_object* v_out_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_809_; 
v_listener_778_ = lean_ctor_get(v_x_699_, 0);
lean_inc_ref(v_listener_778_);
lean_dec_ref_known(v_x_699_, 2);
v_event_779_ = lean_ctor_get(v_listener_778_, 0);
v_paths_780_ = lean_ctor_get(v_listener_778_, 1);
lean_inc(v_paths_780_);
v___x_781_ = l_Lasm_UI_Encode_Enc_decoder(v_e_698_, v_paths_780_);
v_fst_782_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_fst_782_);
v_snd_783_ = lean_ctor_get(v___x_781_, 1);
lean_inc(v_snd_783_);
lean_dec_ref(v___x_781_);
v_tables_784_ = lean_ctor_get(v_fst_782_, 0);
v_defs_785_ = lean_ctor_get(v_fst_782_, 1);
v_out_786_ = lean_ctor_get(v_fst_782_, 2);
v_isSharedCheck_809_ = !lean_is_exclusive(v_fst_782_);
if (v_isSharedCheck_809_ == 0)
{
v___x_788_ = v_fst_782_;
v_isShared_789_ = v_isSharedCheck_809_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_out_786_);
lean_inc(v_defs_785_);
lean_inc(v_tables_784_);
lean_dec(v_fst_782_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_809_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
uint8_t v___x_790_; lean_object* v___x_791_; lean_object* v___x_793_; 
v___x_790_ = 5;
v___x_791_ = lean_byte_array_push(v_out_786_, v___x_790_);
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 2, v___x_791_);
v___x_793_ = v___x_788_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_tables_784_);
lean_ctor_set(v_reuseFailAlloc_808_, 1, v_defs_785_);
lean_ctor_set(v_reuseFailAlloc_808_, 2, v___x_791_);
v___x_793_ = v_reuseFailAlloc_808_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
lean_object* v___x_794_; lean_object* v_tables_795_; lean_object* v_defs_796_; lean_object* v_out_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_807_; 
lean_inc_ref(v_event_779_);
v___x_794_ = l_Lasm_UI_Encode_Enc_name(v___x_793_, v_event_779_);
v_tables_795_ = lean_ctor_get(v___x_794_, 0);
v_defs_796_ = lean_ctor_get(v___x_794_, 1);
v_out_797_ = lean_ctor_get(v___x_794_, 2);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_794_);
if (v_isSharedCheck_807_ == 0)
{
v___x_799_ = v___x_794_;
v_isShared_800_ = v_isSharedCheck_807_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_out_797_);
lean_inc(v_defs_796_);
lean_inc(v_tables_795_);
lean_dec(v___x_794_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_807_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_805_; 
v___x_801_ = l_Lasm_UI_Encode_pushVar(v_out_797_, v_snd_783_);
v___x_802_ = l_Lasm_UI_Encode_Enc_flags(v_listener_778_);
lean_dec_ref(v_listener_778_);
v___x_803_ = l_Lasm_UI_Encode_pushVar(v___x_801_, v___x_802_);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 2, v___x_803_);
v___x_805_ = v___x_799_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_tables_795_);
lean_ctor_set(v_reuseFailAlloc_806_, 1, v_defs_796_);
lean_ctor_set(v_reuseFailAlloc_806_, 2, v___x_803_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attr(lean_object* v_Msg_810_, lean_object* v_e_811_, lean_object* v_x_812_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = l_Lasm_UI_Encode_Enc_attr___redArg(v_e_811_, v_x_812_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attrOp(lean_object* v_e_814_, lean_object* v_x_815_){
_start:
{
if (lean_obj_tag(v_x_815_) == 0)
{
lean_object* v_k_816_; lean_object* v_v_817_; lean_object* v___x_818_; 
v_k_816_ = lean_ctor_get(v_x_815_, 0);
lean_inc_ref(v_k_816_);
v_v_817_ = lean_ctor_get(v_x_815_, 1);
lean_inc_ref(v_v_817_);
lean_dec_ref_known(v_x_815_, 2);
v___x_818_ = l_Lasm_UI_Encode_Enc_setAttr(v_e_814_, v_k_816_, v_v_817_);
return v___x_818_;
}
else
{
lean_object* v_k_819_; 
v_k_819_ = lean_ctor_get(v_x_815_, 0);
lean_inc_ref(v_k_819_);
lean_dec_ref_known(v_x_815_, 1);
switch(lean_obj_tag(v_k_819_))
{
case 0:
{
lean_object* v_name_820_; lean_object* v_tables_821_; lean_object* v_defs_822_; lean_object* v_out_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_833_; 
v_name_820_ = lean_ctor_get(v_k_819_, 0);
lean_inc_ref(v_name_820_);
lean_dec_ref_known(v_k_819_, 1);
v_tables_821_ = lean_ctor_get(v_e_814_, 0);
v_defs_822_ = lean_ctor_get(v_e_814_, 1);
v_out_823_ = lean_ctor_get(v_e_814_, 2);
v_isSharedCheck_833_ = !lean_is_exclusive(v_e_814_);
if (v_isSharedCheck_833_ == 0)
{
v___x_825_ = v_e_814_;
v_isShared_826_ = v_isSharedCheck_833_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_out_823_);
lean_inc(v_defs_822_);
lean_inc(v_tables_821_);
lean_dec(v_e_814_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_833_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
uint8_t v___x_827_; lean_object* v___x_828_; lean_object* v___x_830_; 
v___x_827_ = 8;
v___x_828_ = lean_byte_array_push(v_out_823_, v___x_827_);
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 2, v___x_828_);
v___x_830_ = v___x_825_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_tables_821_);
lean_ctor_set(v_reuseFailAlloc_832_, 1, v_defs_822_);
lean_ctor_set(v_reuseFailAlloc_832_, 2, v___x_828_);
v___x_830_ = v_reuseFailAlloc_832_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
lean_object* v___x_831_; 
v___x_831_ = l_Lasm_UI_Encode_Enc_name(v___x_830_, v_name_820_);
return v___x_831_;
}
}
}
case 1:
{
lean_object* v_name_834_; lean_object* v_tables_835_; lean_object* v_defs_836_; lean_object* v_out_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_847_; 
v_name_834_ = lean_ctor_get(v_k_819_, 0);
lean_inc_ref(v_name_834_);
lean_dec_ref_known(v_k_819_, 1);
v_tables_835_ = lean_ctor_get(v_e_814_, 0);
v_defs_836_ = lean_ctor_get(v_e_814_, 1);
v_out_837_ = lean_ctor_get(v_e_814_, 2);
v_isSharedCheck_847_ = !lean_is_exclusive(v_e_814_);
if (v_isSharedCheck_847_ == 0)
{
v___x_839_ = v_e_814_;
v_isShared_840_ = v_isSharedCheck_847_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_out_837_);
lean_inc(v_defs_836_);
lean_inc(v_tables_835_);
lean_dec(v_e_814_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_847_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
uint8_t v___x_841_; lean_object* v___x_842_; lean_object* v___x_844_; 
v___x_841_ = 9;
v___x_842_ = lean_byte_array_push(v_out_837_, v___x_841_);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 2, v___x_842_);
v___x_844_ = v___x_839_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_tables_835_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v_defs_836_);
lean_ctor_set(v_reuseFailAlloc_846_, 2, v___x_842_);
v___x_844_ = v_reuseFailAlloc_846_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
lean_object* v___x_845_; 
v___x_845_ = l_Lasm_UI_Encode_Enc_name(v___x_844_, v_name_834_);
return v___x_845_;
}
}
}
case 2:
{
lean_object* v_name_848_; lean_object* v_tables_849_; lean_object* v_defs_850_; lean_object* v_out_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_861_; 
v_name_848_ = lean_ctor_get(v_k_819_, 0);
lean_inc_ref(v_name_848_);
lean_dec_ref_known(v_k_819_, 1);
v_tables_849_ = lean_ctor_get(v_e_814_, 0);
v_defs_850_ = lean_ctor_get(v_e_814_, 1);
v_out_851_ = lean_ctor_get(v_e_814_, 2);
v_isSharedCheck_861_ = !lean_is_exclusive(v_e_814_);
if (v_isSharedCheck_861_ == 0)
{
v___x_853_ = v_e_814_;
v_isShared_854_ = v_isSharedCheck_861_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_out_851_);
lean_inc(v_defs_850_);
lean_inc(v_tables_849_);
lean_dec(v_e_814_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_861_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
uint8_t v___x_855_; lean_object* v___x_856_; lean_object* v___x_858_; 
v___x_855_ = 10;
v___x_856_ = lean_byte_array_push(v_out_851_, v___x_855_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 2, v___x_856_);
v___x_858_ = v___x_853_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_tables_849_);
lean_ctor_set(v_reuseFailAlloc_860_, 1, v_defs_850_);
lean_ctor_set(v_reuseFailAlloc_860_, 2, v___x_856_);
v___x_858_ = v_reuseFailAlloc_860_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
lean_object* v___x_859_; 
v___x_859_ = l_Lasm_UI_Encode_Enc_name(v___x_858_, v_name_848_);
return v___x_859_;
}
}
}
default: 
{
lean_object* v_event_862_; lean_object* v_tables_863_; lean_object* v_defs_864_; lean_object* v_out_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_875_; 
v_event_862_ = lean_ctor_get(v_k_819_, 0);
lean_inc_ref(v_event_862_);
lean_dec_ref_known(v_k_819_, 1);
v_tables_863_ = lean_ctor_get(v_e_814_, 0);
v_defs_864_ = lean_ctor_get(v_e_814_, 1);
v_out_865_ = lean_ctor_get(v_e_814_, 2);
v_isSharedCheck_875_ = !lean_is_exclusive(v_e_814_);
if (v_isSharedCheck_875_ == 0)
{
v___x_867_ = v_e_814_;
v_isShared_868_ = v_isSharedCheck_875_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_out_865_);
lean_inc(v_defs_864_);
lean_inc(v_tables_863_);
lean_dec(v_e_814_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_875_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
uint8_t v___x_869_; lean_object* v___x_870_; lean_object* v___x_872_; 
v___x_869_ = 11;
v___x_870_ = lean_byte_array_push(v_out_865_, v___x_869_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 2, v___x_870_);
v___x_872_ = v___x_867_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_tables_863_);
lean_ctor_set(v_reuseFailAlloc_874_, 1, v_defs_864_);
lean_ctor_set(v_reuseFailAlloc_874_, 2, v___x_870_);
v___x_872_ = v_reuseFailAlloc_874_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
lean_object* v___x_873_; 
v___x_873_ = l_Lasm_UI_Encode_Enc_name(v___x_872_, v_event_862_);
return v___x_873_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Encode_Enc_nsByte(uint8_t v_x_876_){
_start:
{
switch(v_x_876_)
{
case 0:
{
uint8_t v___x_877_; 
v___x_877_ = 1;
return v___x_877_;
}
case 1:
{
uint8_t v___x_878_; 
v___x_878_ = 2;
return v___x_878_;
}
default: 
{
uint8_t v___x_879_; 
v___x_879_ = 3;
return v___x_879_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nsByte___boxed(lean_object* v_x_880_){
_start:
{
uint8_t v_x_40__boxed_881_; uint8_t v_res_882_; lean_object* v_r_883_; 
v_x_40__boxed_881_ = lean_unbox(v_x_880_);
v_res_882_ = l_Lasm_UI_Encode_Enc_nsByte(v_x_40__boxed_881_);
v_r_883_ = lean_box(v_res_882_);
return v_r_883_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(lean_object* v_x_884_, lean_object* v_x_885_){
_start:
{
if (lean_obj_tag(v_x_885_) == 0)
{
return v_x_884_;
}
else
{
lean_object* v_head_886_; lean_object* v_tail_887_; lean_object* v___x_888_; 
v_head_886_ = lean_ctor_get(v_x_885_, 0);
lean_inc(v_head_886_);
v_tail_887_ = lean_ctor_get(v_x_885_, 1);
lean_inc(v_tail_887_);
lean_dec_ref_known(v_x_885_, 2);
v___x_888_ = l_Lasm_UI_Encode_Enc_attr___redArg(v_x_884_, v_head_886_);
v_x_884_ = v___x_888_;
v_x_885_ = v_tail_887_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node___redArg(lean_object* v_e_890_, lean_object* v_x_891_){
_start:
{
if (lean_obj_tag(v_x_891_) == 0)
{
lean_object* v_id_892_; lean_object* v_s_893_; lean_object* v_tables_894_; lean_object* v_defs_895_; lean_object* v_out_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_914_; 
v_id_892_ = lean_ctor_get(v_x_891_, 0);
lean_inc(v_id_892_);
v_s_893_ = lean_ctor_get(v_x_891_, 1);
lean_inc_ref(v_s_893_);
lean_dec_ref_known(v_x_891_, 2);
v_tables_894_ = lean_ctor_get(v_e_890_, 0);
v_defs_895_ = lean_ctor_get(v_e_890_, 1);
v_out_896_ = lean_ctor_get(v_e_890_, 2);
v_isSharedCheck_914_ = !lean_is_exclusive(v_e_890_);
if (v_isSharedCheck_914_ == 0)
{
v___x_898_ = v_e_890_;
v_isShared_899_ = v_isSharedCheck_914_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_out_896_);
lean_inc(v_defs_895_);
lean_inc(v_tables_894_);
lean_dec(v_e_890_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_914_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
uint8_t v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; uint8_t v___x_909_; lean_object* v___x_910_; lean_object* v___x_912_; 
v___x_900_ = 0;
v___x_901_ = lean_byte_array_push(v_out_896_, v___x_900_);
v___x_902_ = l_Lasm_UI_Encode_pushVar(v___x_901_, v_id_892_);
v___x_903_ = lean_string_utf8_byte_size(v_s_893_);
v___x_904_ = l_Lasm_UI_Encode_pushVar(v___x_902_, v___x_903_);
v___x_905_ = lean_string_to_utf8(v_s_893_);
v___x_906_ = lean_unsigned_to_nat(0u);
v___x_907_ = lean_byte_array_size(v___x_904_);
v___x_908_ = lean_byte_array_size(v___x_905_);
v___x_909_ = 0;
v___x_910_ = lean_byte_array_copy_slice(v___x_905_, v___x_906_, v___x_904_, v___x_907_, v___x_908_, v___x_909_);
lean_dec_ref(v___x_905_);
if (v_isShared_899_ == 0)
{
lean_ctor_set(v___x_898_, 2, v___x_910_);
v___x_912_ = v___x_898_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_tables_894_);
lean_ctor_set(v_reuseFailAlloc_913_, 1, v_defs_895_);
lean_ctor_set(v_reuseFailAlloc_913_, 2, v___x_910_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
else
{
lean_object* v_id_915_; uint8_t v_ns_916_; lean_object* v_tag_917_; lean_object* v_attrs_918_; lean_object* v_children_919_; lean_object* v_tables_920_; lean_object* v_defs_921_; lean_object* v_out_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_959_; 
v_id_915_ = lean_ctor_get(v_x_891_, 0);
lean_inc(v_id_915_);
v_ns_916_ = lean_ctor_get_uint8(v_x_891_, sizeof(void*)*5);
v_tag_917_ = lean_ctor_get(v_x_891_, 1);
lean_inc_ref(v_tag_917_);
v_attrs_918_ = lean_ctor_get(v_x_891_, 3);
lean_inc(v_attrs_918_);
v_children_919_ = lean_ctor_get(v_x_891_, 4);
lean_inc(v_children_919_);
lean_dec_ref_known(v_x_891_, 5);
v_tables_920_ = lean_ctor_get(v_e_890_, 0);
v_defs_921_ = lean_ctor_get(v_e_890_, 1);
v_out_922_ = lean_ctor_get(v_e_890_, 2);
v_isSharedCheck_959_ = !lean_is_exclusive(v_e_890_);
if (v_isSharedCheck_959_ == 0)
{
v___x_924_ = v_e_890_;
v_isShared_925_ = v_isSharedCheck_959_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_out_922_);
lean_inc(v_defs_921_);
lean_inc(v_tables_920_);
lean_dec(v_e_890_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_959_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
uint8_t v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_930_; 
v___x_926_ = l_Lasm_UI_Encode_Enc_nsByte(v_ns_916_);
v___x_927_ = lean_byte_array_push(v_out_922_, v___x_926_);
v___x_928_ = l_Lasm_UI_Encode_pushVar(v___x_927_, v_id_915_);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 2, v___x_928_);
v___x_930_ = v___x_924_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_tables_920_);
lean_ctor_set(v_reuseFailAlloc_958_, 1, v_defs_921_);
lean_ctor_set(v_reuseFailAlloc_958_, 2, v___x_928_);
v___x_930_ = v_reuseFailAlloc_958_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
lean_object* v_e_931_; lean_object* v_tables_932_; lean_object* v_defs_933_; lean_object* v_out_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_957_; 
v_e_931_ = l_Lasm_UI_Encode_Enc_name(v___x_930_, v_tag_917_);
v_tables_932_ = lean_ctor_get(v_e_931_, 0);
v_defs_933_ = lean_ctor_get(v_e_931_, 1);
v_out_934_ = lean_ctor_get(v_e_931_, 2);
v_isSharedCheck_957_ = !lean_is_exclusive(v_e_931_);
if (v_isSharedCheck_957_ == 0)
{
v___x_936_ = v_e_931_;
v_isShared_937_ = v_isSharedCheck_957_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_out_934_);
lean_inc(v_defs_933_);
lean_inc(v_tables_932_);
lean_dec(v_e_931_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_957_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_941_; 
v___x_938_ = l_List_lengthTR___redArg(v_attrs_918_);
v___x_939_ = l_Lasm_UI_Encode_pushVar(v_out_934_, v___x_938_);
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 2, v___x_939_);
v___x_941_ = v___x_936_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_tables_932_);
lean_ctor_set(v_reuseFailAlloc_956_, 1, v_defs_933_);
lean_ctor_set(v_reuseFailAlloc_956_, 2, v___x_939_);
v___x_941_ = v_reuseFailAlloc_956_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
lean_object* v_e_942_; lean_object* v_tables_943_; lean_object* v_defs_944_; lean_object* v_out_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_955_; 
v_e_942_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(v___x_941_, v_attrs_918_);
v_tables_943_ = lean_ctor_get(v_e_942_, 0);
v_defs_944_ = lean_ctor_get(v_e_942_, 1);
v_out_945_ = lean_ctor_get(v_e_942_, 2);
v_isSharedCheck_955_ = !lean_is_exclusive(v_e_942_);
if (v_isSharedCheck_955_ == 0)
{
v___x_947_ = v_e_942_;
v_isShared_948_ = v_isSharedCheck_955_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_out_945_);
lean_inc(v_defs_944_);
lean_inc(v_tables_943_);
lean_dec(v_e_942_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_955_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_952_; 
v___x_949_ = l_List_lengthTR___redArg(v_children_919_);
v___x_950_ = l_Lasm_UI_Encode_pushVar(v_out_945_, v___x_949_);
if (v_isShared_948_ == 0)
{
lean_ctor_set(v___x_947_, 2, v___x_950_);
v___x_952_ = v___x_947_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_tables_943_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v_defs_944_);
lean_ctor_set(v_reuseFailAlloc_954_, 2, v___x_950_);
v___x_952_ = v_reuseFailAlloc_954_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
lean_object* v___x_953_; 
v___x_953_ = l_Lasm_UI_Encode_Enc_nodes___redArg(v___x_952_, v_children_919_);
return v___x_953_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes___redArg(lean_object* v_e_960_, lean_object* v_x_961_){
_start:
{
if (lean_obj_tag(v_x_961_) == 0)
{
return v_e_960_;
}
else
{
lean_object* v_head_962_; lean_object* v_tail_963_; lean_object* v___x_964_; 
v_head_962_ = lean_ctor_get(v_x_961_, 0);
lean_inc(v_head_962_);
v_tail_963_ = lean_ctor_get(v_x_961_, 1);
lean_inc(v_tail_963_);
lean_dec_ref_known(v_x_961_, 2);
v___x_964_ = l_Lasm_UI_Encode_Enc_node___redArg(v_e_960_, v_head_962_);
v_e_960_ = v___x_964_;
v_x_961_ = v_tail_963_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes(lean_object* v_Msg_966_, lean_object* v_e_967_, lean_object* v_x_968_){
_start:
{
lean_object* v___x_969_; 
v___x_969_ = l_Lasm_UI_Encode_Enc_nodes___redArg(v_e_967_, v_x_968_);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node(lean_object* v_Msg_970_, lean_object* v_e_971_, lean_object* v_x_972_){
_start:
{
lean_object* v___x_973_; 
v___x_973_ = l_Lasm_UI_Encode_Enc_node___redArg(v_e_971_, v_x_972_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0(lean_object* v_Msg_974_, lean_object* v_x_975_, lean_object* v_x_976_){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(v_x_975_, v_x_976_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_before(lean_object* v_e_978_, lean_object* v_x_979_){
_start:
{
if (lean_obj_tag(v_x_979_) == 0)
{
lean_object* v_tables_980_; lean_object* v_defs_981_; lean_object* v_out_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_991_; 
v_tables_980_ = lean_ctor_get(v_e_978_, 0);
v_defs_981_ = lean_ctor_get(v_e_978_, 1);
v_out_982_ = lean_ctor_get(v_e_978_, 2);
v_isSharedCheck_991_ = !lean_is_exclusive(v_e_978_);
if (v_isSharedCheck_991_ == 0)
{
v___x_984_ = v_e_978_;
v_isShared_985_ = v_isSharedCheck_991_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_out_982_);
lean_inc(v_defs_981_);
lean_inc(v_tables_980_);
lean_dec(v_e_978_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_991_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
uint8_t v___x_986_; lean_object* v___x_987_; lean_object* v___x_989_; 
v___x_986_ = 0;
v___x_987_ = lean_byte_array_push(v_out_982_, v___x_986_);
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 2, v___x_987_);
v___x_989_ = v___x_984_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_tables_980_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v_defs_981_);
lean_ctor_set(v_reuseFailAlloc_990_, 2, v___x_987_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
else
{
lean_object* v_val_992_; lean_object* v_tables_993_; lean_object* v_defs_994_; lean_object* v_out_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1005_; 
v_val_992_ = lean_ctor_get(v_x_979_, 0);
v_tables_993_ = lean_ctor_get(v_e_978_, 0);
v_defs_994_ = lean_ctor_get(v_e_978_, 1);
v_out_995_ = lean_ctor_get(v_e_978_, 2);
v_isSharedCheck_1005_ = !lean_is_exclusive(v_e_978_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_997_ = v_e_978_;
v_isShared_998_ = v_isSharedCheck_1005_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_out_995_);
lean_inc(v_defs_994_);
lean_inc(v_tables_993_);
lean_dec(v_e_978_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1005_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1003_; 
v___x_999_ = lean_unsigned_to_nat(1u);
v___x_1000_ = lean_nat_add(v_val_992_, v___x_999_);
v___x_1001_ = l_Lasm_UI_Encode_pushVar(v_out_995_, v___x_1000_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 2, v___x_1001_);
v___x_1003_ = v___x_997_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_tables_993_);
lean_ctor_set(v_reuseFailAlloc_1004_, 1, v_defs_994_);
lean_ctor_set(v_reuseFailAlloc_1004_, 2, v___x_1001_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_before___boxed(lean_object* v_e_1006_, lean_object* v_x_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lasm_UI_Encode_Enc_before(v_e_1006_, v_x_1007_);
lean_dec(v_x_1007_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_op_spec__0(lean_object* v_x_1009_, lean_object* v_x_1010_){
_start:
{
if (lean_obj_tag(v_x_1010_) == 0)
{
return v_x_1009_;
}
else
{
lean_object* v_head_1011_; lean_object* v_tail_1012_; lean_object* v___x_1013_; 
v_head_1011_ = lean_ctor_get(v_x_1010_, 0);
lean_inc(v_head_1011_);
v_tail_1012_ = lean_ctor_get(v_x_1010_, 1);
lean_inc(v_tail_1012_);
lean_dec_ref_known(v_x_1010_, 2);
v___x_1013_ = l_Lasm_UI_Encode_Enc_attrOp(v_x_1009_, v_head_1011_);
v_x_1009_ = v___x_1013_;
v_x_1010_ = v_tail_1012_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_op___redArg(lean_object* v_parent_1015_, lean_object* v_e_1016_, lean_object* v_x_1017_){
_start:
{
switch(lean_obj_tag(v_x_1017_))
{
case 0:
{
lean_object* v_node_1018_; lean_object* v_before_1019_; lean_object* v_tables_1020_; lean_object* v_defs_1021_; lean_object* v_out_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1043_; 
v_node_1018_ = lean_ctor_get(v_x_1017_, 0);
lean_inc_ref(v_node_1018_);
v_before_1019_ = lean_ctor_get(v_x_1017_, 1);
lean_inc(v_before_1019_);
lean_dec_ref_known(v_x_1017_, 2);
v_tables_1020_ = lean_ctor_get(v_e_1016_, 0);
v_defs_1021_ = lean_ctor_get(v_e_1016_, 1);
v_out_1022_ = lean_ctor_get(v_e_1016_, 2);
v_isSharedCheck_1043_ = !lean_is_exclusive(v_e_1016_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1024_ = v_e_1016_;
v_isShared_1025_ = v_isSharedCheck_1043_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_out_1022_);
lean_inc(v_defs_1021_);
lean_inc(v_tables_1020_);
lean_dec(v_e_1016_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1043_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
uint8_t v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1026_ = 1;
v___x_1027_ = lean_byte_array_push(v_out_1022_, v___x_1026_);
v___x_1028_ = l_Lasm_UI_Encode_pushVar(v___x_1027_, v_parent_1015_);
if (lean_obj_tag(v_before_1019_) == 0)
{
uint8_t v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1032_; 
v___x_1029_ = 0;
v___x_1030_ = lean_byte_array_push(v___x_1028_, v___x_1029_);
if (v_isShared_1025_ == 0)
{
lean_ctor_set(v___x_1024_, 2, v___x_1030_);
v___x_1032_ = v___x_1024_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_tables_1020_);
lean_ctor_set(v_reuseFailAlloc_1034_, 1, v_defs_1021_);
lean_ctor_set(v_reuseFailAlloc_1034_, 2, v___x_1030_);
v___x_1032_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
lean_object* v___x_1033_; 
v___x_1033_ = l_Lasm_UI_Encode_Enc_node___redArg(v___x_1032_, v_node_1018_);
return v___x_1033_;
}
}
else
{
lean_object* v_val_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1040_; 
v_val_1035_ = lean_ctor_get(v_before_1019_, 0);
lean_inc(v_val_1035_);
lean_dec_ref_known(v_before_1019_, 1);
v___x_1036_ = lean_unsigned_to_nat(1u);
v___x_1037_ = lean_nat_add(v_val_1035_, v___x_1036_);
lean_dec(v_val_1035_);
v___x_1038_ = l_Lasm_UI_Encode_pushVar(v___x_1028_, v___x_1037_);
if (v_isShared_1025_ == 0)
{
lean_ctor_set(v___x_1024_, 2, v___x_1038_);
v___x_1040_ = v___x_1024_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_tables_1020_);
lean_ctor_set(v_reuseFailAlloc_1042_, 1, v_defs_1021_);
lean_ctor_set(v_reuseFailAlloc_1042_, 2, v___x_1038_);
v___x_1040_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
lean_object* v___x_1041_; 
v___x_1041_ = l_Lasm_UI_Encode_Enc_node___redArg(v___x_1040_, v_node_1018_);
return v___x_1041_;
}
}
}
}
case 1:
{
lean_object* v_id_1044_; lean_object* v_before_1045_; lean_object* v_tables_1046_; lean_object* v_defs_1047_; lean_object* v_out_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1068_; 
v_id_1044_ = lean_ctor_get(v_x_1017_, 0);
lean_inc(v_id_1044_);
v_before_1045_ = lean_ctor_get(v_x_1017_, 1);
lean_inc(v_before_1045_);
lean_dec_ref_known(v_x_1017_, 2);
v_tables_1046_ = lean_ctor_get(v_e_1016_, 0);
v_defs_1047_ = lean_ctor_get(v_e_1016_, 1);
v_out_1048_ = lean_ctor_get(v_e_1016_, 2);
v_isSharedCheck_1068_ = !lean_is_exclusive(v_e_1016_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1050_ = v_e_1016_;
v_isShared_1051_ = v_isSharedCheck_1068_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_out_1048_);
lean_inc(v_defs_1047_);
lean_inc(v_tables_1046_);
lean_dec(v_e_1016_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1068_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
uint8_t v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1052_ = 2;
v___x_1053_ = lean_byte_array_push(v_out_1048_, v___x_1052_);
v___x_1054_ = l_Lasm_UI_Encode_pushVar(v___x_1053_, v_parent_1015_);
v___x_1055_ = l_Lasm_UI_Encode_pushVar(v___x_1054_, v_id_1044_);
if (lean_obj_tag(v_before_1045_) == 0)
{
uint8_t v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1059_; 
v___x_1056_ = 0;
v___x_1057_ = lean_byte_array_push(v___x_1055_, v___x_1056_);
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 2, v___x_1057_);
v___x_1059_ = v___x_1050_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_tables_1046_);
lean_ctor_set(v_reuseFailAlloc_1060_, 1, v_defs_1047_);
lean_ctor_set(v_reuseFailAlloc_1060_, 2, v___x_1057_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
else
{
lean_object* v_val_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1066_; 
v_val_1061_ = lean_ctor_get(v_before_1045_, 0);
lean_inc(v_val_1061_);
lean_dec_ref_known(v_before_1045_, 1);
v___x_1062_ = lean_unsigned_to_nat(1u);
v___x_1063_ = lean_nat_add(v_val_1061_, v___x_1062_);
lean_dec(v_val_1061_);
v___x_1064_ = l_Lasm_UI_Encode_pushVar(v___x_1055_, v___x_1063_);
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 2, v___x_1064_);
v___x_1066_ = v___x_1050_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v_tables_1046_);
lean_ctor_set(v_reuseFailAlloc_1067_, 1, v_defs_1047_);
lean_ctor_set(v_reuseFailAlloc_1067_, 2, v___x_1064_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
}
case 2:
{
lean_object* v_id_1069_; lean_object* v_tables_1070_; lean_object* v_defs_1071_; lean_object* v_out_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1082_; 
lean_dec(v_parent_1015_);
v_id_1069_ = lean_ctor_get(v_x_1017_, 0);
lean_inc(v_id_1069_);
lean_dec_ref_known(v_x_1017_, 1);
v_tables_1070_ = lean_ctor_get(v_e_1016_, 0);
v_defs_1071_ = lean_ctor_get(v_e_1016_, 1);
v_out_1072_ = lean_ctor_get(v_e_1016_, 2);
v_isSharedCheck_1082_ = !lean_is_exclusive(v_e_1016_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1074_ = v_e_1016_;
v_isShared_1075_ = v_isSharedCheck_1082_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_out_1072_);
lean_inc(v_defs_1071_);
lean_inc(v_tables_1070_);
lean_dec(v_e_1016_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1082_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
uint8_t v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1080_; 
v___x_1076_ = 3;
v___x_1077_ = lean_byte_array_push(v_out_1072_, v___x_1076_);
v___x_1078_ = l_Lasm_UI_Encode_pushVar(v___x_1077_, v_id_1069_);
if (v_isShared_1075_ == 0)
{
lean_ctor_set(v___x_1074_, 2, v___x_1078_);
v___x_1080_ = v___x_1074_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_tables_1070_);
lean_ctor_set(v_reuseFailAlloc_1081_, 1, v_defs_1071_);
lean_ctor_set(v_reuseFailAlloc_1081_, 2, v___x_1078_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
}
case 3:
{
lean_object* v_tables_1083_; lean_object* v_defs_1084_; lean_object* v_out_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1095_; 
v_tables_1083_ = lean_ctor_get(v_e_1016_, 0);
v_defs_1084_ = lean_ctor_get(v_e_1016_, 1);
v_out_1085_ = lean_ctor_get(v_e_1016_, 2);
v_isSharedCheck_1095_ = !lean_is_exclusive(v_e_1016_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1087_ = v_e_1016_;
v_isShared_1088_ = v_isSharedCheck_1095_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_out_1085_);
lean_inc(v_defs_1084_);
lean_inc(v_tables_1083_);
lean_dec(v_e_1016_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1095_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
uint8_t v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1093_; 
v___x_1089_ = 4;
v___x_1090_ = lean_byte_array_push(v_out_1085_, v___x_1089_);
v___x_1091_ = l_Lasm_UI_Encode_pushVar(v___x_1090_, v_parent_1015_);
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 2, v___x_1091_);
v___x_1093_ = v___x_1087_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_tables_1083_);
lean_ctor_set(v_reuseFailAlloc_1094_, 1, v_defs_1084_);
lean_ctor_set(v_reuseFailAlloc_1094_, 2, v___x_1091_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
case 4:
{
lean_object* v_id_1096_; lean_object* v_s_1097_; lean_object* v_tables_1098_; lean_object* v_defs_1099_; lean_object* v_out_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1118_; 
lean_dec(v_parent_1015_);
v_id_1096_ = lean_ctor_get(v_x_1017_, 0);
lean_inc(v_id_1096_);
v_s_1097_ = lean_ctor_get(v_x_1017_, 1);
lean_inc_ref(v_s_1097_);
lean_dec_ref_known(v_x_1017_, 2);
v_tables_1098_ = lean_ctor_get(v_e_1016_, 0);
v_defs_1099_ = lean_ctor_get(v_e_1016_, 1);
v_out_1100_ = lean_ctor_get(v_e_1016_, 2);
v_isSharedCheck_1118_ = !lean_is_exclusive(v_e_1016_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1102_ = v_e_1016_;
v_isShared_1103_ = v_isSharedCheck_1118_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_out_1100_);
lean_inc(v_defs_1099_);
lean_inc(v_tables_1098_);
lean_dec(v_e_1016_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1118_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
uint8_t v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; uint8_t v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1116_; 
v___x_1104_ = 5;
v___x_1105_ = lean_byte_array_push(v_out_1100_, v___x_1104_);
v___x_1106_ = l_Lasm_UI_Encode_pushVar(v___x_1105_, v_id_1096_);
v___x_1107_ = lean_string_utf8_byte_size(v_s_1097_);
v___x_1108_ = l_Lasm_UI_Encode_pushVar(v___x_1106_, v___x_1107_);
v___x_1109_ = lean_string_to_utf8(v_s_1097_);
v___x_1110_ = lean_unsigned_to_nat(0u);
v___x_1111_ = lean_byte_array_size(v___x_1108_);
v___x_1112_ = lean_byte_array_size(v___x_1109_);
v___x_1113_ = 0;
v___x_1114_ = lean_byte_array_copy_slice(v___x_1109_, v___x_1110_, v___x_1108_, v___x_1111_, v___x_1112_, v___x_1113_);
lean_dec_ref(v___x_1109_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 2, v___x_1114_);
v___x_1116_ = v___x_1102_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_tables_1098_);
lean_ctor_set(v_reuseFailAlloc_1117_, 1, v_defs_1099_);
lean_ctor_set(v_reuseFailAlloc_1117_, 2, v___x_1114_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
case 5:
{
lean_object* v_id_1119_; lean_object* v_ops_1120_; lean_object* v_tables_1121_; lean_object* v_defs_1122_; lean_object* v_out_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1136_; 
lean_dec(v_parent_1015_);
v_id_1119_ = lean_ctor_get(v_x_1017_, 0);
lean_inc(v_id_1119_);
v_ops_1120_ = lean_ctor_get(v_x_1017_, 1);
lean_inc(v_ops_1120_);
lean_dec_ref_known(v_x_1017_, 2);
v_tables_1121_ = lean_ctor_get(v_e_1016_, 0);
v_defs_1122_ = lean_ctor_get(v_e_1016_, 1);
v_out_1123_ = lean_ctor_get(v_e_1016_, 2);
v_isSharedCheck_1136_ = !lean_is_exclusive(v_e_1016_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1125_ = v_e_1016_;
v_isShared_1126_ = v_isSharedCheck_1136_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_out_1123_);
lean_inc(v_defs_1122_);
lean_inc(v_tables_1121_);
lean_dec(v_e_1016_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1136_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
uint8_t v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1133_; 
v___x_1127_ = 6;
v___x_1128_ = lean_byte_array_push(v_out_1123_, v___x_1127_);
v___x_1129_ = l_Lasm_UI_Encode_pushVar(v___x_1128_, v_id_1119_);
v___x_1130_ = l_List_lengthTR___redArg(v_ops_1120_);
v___x_1131_ = l_Lasm_UI_Encode_pushVar(v___x_1129_, v___x_1130_);
if (v_isShared_1126_ == 0)
{
lean_ctor_set(v___x_1125_, 2, v___x_1131_);
v___x_1133_ = v___x_1125_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_tables_1121_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v_defs_1122_);
lean_ctor_set(v_reuseFailAlloc_1135_, 2, v___x_1131_);
v___x_1133_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
lean_object* v___x_1134_; 
v___x_1134_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_op_spec__0(v___x_1133_, v_ops_1120_);
return v___x_1134_;
}
}
}
default: 
{
lean_object* v_id_1137_; lean_object* v_ops_1138_; lean_object* v___x_1139_; 
lean_dec(v_parent_1015_);
v_id_1137_ = lean_ctor_get(v_x_1017_, 0);
lean_inc(v_id_1137_);
v_ops_1138_ = lean_ctor_get(v_x_1017_, 1);
lean_inc(v_ops_1138_);
lean_dec_ref_known(v_x_1017_, 2);
v___x_1139_ = l_Lasm_UI_Encode_Enc_opList___redArg(v_id_1137_, v_e_1016_, v_ops_1138_);
return v___x_1139_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_opList___redArg(lean_object* v_parent_1140_, lean_object* v_e_1141_, lean_object* v_x_1142_){
_start:
{
if (lean_obj_tag(v_x_1142_) == 0)
{
lean_dec(v_parent_1140_);
return v_e_1141_;
}
else
{
lean_object* v_head_1143_; lean_object* v_tail_1144_; lean_object* v___x_1145_; 
v_head_1143_ = lean_ctor_get(v_x_1142_, 0);
lean_inc(v_head_1143_);
v_tail_1144_ = lean_ctor_get(v_x_1142_, 1);
lean_inc(v_tail_1144_);
lean_dec_ref_known(v_x_1142_, 2);
lean_inc(v_parent_1140_);
v___x_1145_ = l_Lasm_UI_Encode_Enc_op___redArg(v_parent_1140_, v_e_1141_, v_head_1143_);
v_e_1141_ = v___x_1145_;
v_x_1142_ = v_tail_1144_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_opList(lean_object* v_Msg_1147_, lean_object* v_parent_1148_, lean_object* v_e_1149_, lean_object* v_x_1150_){
_start:
{
lean_object* v___x_1151_; 
v___x_1151_ = l_Lasm_UI_Encode_Enc_opList___redArg(v_parent_1148_, v_e_1149_, v_x_1150_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_op(lean_object* v_Msg_1152_, lean_object* v_parent_1153_, lean_object* v_e_1154_, lean_object* v_x_1155_){
_start:
{
lean_object* v___x_1156_; 
v___x_1156_ = l_Lasm_UI_Encode_Enc_op___redArg(v_parent_1153_, v_e_1154_, v_x_1155_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(lean_object* v_root_1157_, lean_object* v_as_1158_, size_t v_i_1159_, size_t v_stop_1160_, lean_object* v_b_1161_){
_start:
{
uint8_t v___x_1162_; 
v___x_1162_ = lean_usize_dec_eq(v_i_1159_, v_stop_1160_);
if (v___x_1162_ == 0)
{
lean_object* v___x_1163_; lean_object* v___x_1164_; size_t v___x_1165_; size_t v___x_1166_; 
v___x_1163_ = lean_array_uget_borrowed(v_as_1158_, v_i_1159_);
lean_inc(v___x_1163_);
lean_inc(v_root_1157_);
v___x_1164_ = l_Lasm_UI_Encode_Enc_op___redArg(v_root_1157_, v_b_1161_, v___x_1163_);
v___x_1165_ = ((size_t)1ULL);
v___x_1166_ = lean_usize_add(v_i_1159_, v___x_1165_);
v_i_1159_ = v___x_1166_;
v_b_1161_ = v___x_1164_;
goto _start;
}
else
{
lean_dec(v_root_1157_);
return v_b_1161_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg___boxed(lean_object* v_root_1168_, lean_object* v_as_1169_, lean_object* v_i_1170_, lean_object* v_stop_1171_, lean_object* v_b_1172_){
_start:
{
size_t v_i_boxed_1173_; size_t v_stop_boxed_1174_; lean_object* v_res_1175_; 
v_i_boxed_1173_ = lean_unbox_usize(v_i_1170_);
lean_dec(v_i_1170_);
v_stop_boxed_1174_ = lean_unbox_usize(v_stop_1171_);
lean_dec(v_stop_1171_);
v_res_1175_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1168_, v_as_1169_, v_i_boxed_1173_, v_stop_boxed_1174_, v_b_1172_);
lean_dec_ref(v_as_1169_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___redArg(lean_object* v_t_1176_, lean_object* v_ops_1177_, lean_object* v_root_1178_){
_start:
{
lean_object* v_tables_1180_; lean_object* v_defs_1181_; lean_object* v_out_1182_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; uint8_t v___x_1193_; 
v___x_1189_ = l_ByteArray_empty;
lean_inc_ref(v_t_1176_);
v___x_1190_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1190_, 0, v_t_1176_);
lean_ctor_set(v___x_1190_, 1, v___x_1189_);
lean_ctor_set(v___x_1190_, 2, v___x_1189_);
v___x_1191_ = lean_unsigned_to_nat(0u);
v___x_1192_ = lean_array_get_size(v_ops_1177_);
v___x_1193_ = lean_nat_dec_lt(v___x_1191_, v___x_1192_);
if (v___x_1193_ == 0)
{
lean_dec_ref_known(v___x_1190_, 3);
lean_dec(v_root_1178_);
v_tables_1180_ = v_t_1176_;
v_defs_1181_ = v___x_1189_;
v_out_1182_ = v___x_1189_;
goto v___jp_1179_;
}
else
{
size_t v___x_1194_; size_t v___x_1195_; lean_object* v___x_1196_; lean_object* v_tables_1197_; lean_object* v_defs_1198_; lean_object* v_out_1199_; 
lean_dec_ref(v_t_1176_);
v___x_1194_ = ((size_t)0ULL);
v___x_1195_ = lean_usize_of_nat(v___x_1192_);
v___x_1196_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1178_, v_ops_1177_, v___x_1194_, v___x_1195_, v___x_1190_);
v_tables_1197_ = lean_ctor_get(v___x_1196_, 0);
lean_inc_ref(v_tables_1197_);
v_defs_1198_ = lean_ctor_get(v___x_1196_, 1);
lean_inc_ref(v_defs_1198_);
v_out_1199_ = lean_ctor_get(v___x_1196_, 2);
lean_inc_ref(v_out_1199_);
lean_dec_ref(v___x_1196_);
v_tables_1180_ = v_tables_1197_;
v_defs_1181_ = v_defs_1198_;
v_out_1182_ = v_out_1199_;
goto v___jp_1179_;
}
v___jp_1179_:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; uint8_t v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1183_ = lean_unsigned_to_nat(0u);
v___x_1184_ = lean_byte_array_size(v_defs_1181_);
v___x_1185_ = lean_byte_array_size(v_out_1182_);
v___x_1186_ = 0;
v___x_1187_ = lean_byte_array_copy_slice(v_out_1182_, v___x_1183_, v_defs_1181_, v___x_1184_, v___x_1185_, v___x_1186_);
lean_dec_ref(v_out_1182_);
v___x_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1187_);
lean_ctor_set(v___x_1188_, 1, v_tables_1180_);
return v___x_1188_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___redArg___boxed(lean_object* v_t_1200_, lean_object* v_ops_1201_, lean_object* v_root_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l_Lasm_UI_Encode_frame___redArg(v_t_1200_, v_ops_1201_, v_root_1202_);
lean_dec_ref(v_ops_1201_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame(lean_object* v_Msg_1204_, lean_object* v_t_1205_, lean_object* v_ops_1206_, lean_object* v_root_1207_){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = l_Lasm_UI_Encode_frame___redArg(v_t_1205_, v_ops_1206_, v_root_1207_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___boxed(lean_object* v_Msg_1209_, lean_object* v_t_1210_, lean_object* v_ops_1211_, lean_object* v_root_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_Lasm_UI_Encode_frame(v_Msg_1209_, v_t_1210_, v_ops_1211_, v_root_1212_);
lean_dec_ref(v_ops_1211_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0(lean_object* v_Msg_1214_, lean_object* v_root_1215_, lean_object* v_as_1216_, size_t v_i_1217_, size_t v_stop_1218_, lean_object* v_b_1219_){
_start:
{
lean_object* v___x_1220_; 
v___x_1220_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1215_, v_as_1216_, v_i_1217_, v_stop_1218_, v_b_1219_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___boxed(lean_object* v_Msg_1221_, lean_object* v_root_1222_, lean_object* v_as_1223_, lean_object* v_i_1224_, lean_object* v_stop_1225_, lean_object* v_b_1226_){
_start:
{
size_t v_i_boxed_1227_; size_t v_stop_boxed_1228_; lean_object* v_res_1229_; 
v_i_boxed_1227_ = lean_unbox_usize(v_i_1224_);
lean_dec(v_i_1224_);
v_stop_boxed_1228_ = lean_unbox_usize(v_stop_1225_);
lean_dec(v_stop_1225_);
v_res_1229_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0(v_Msg_1221_, v_root_1222_, v_as_1223_, v_i_boxed_1227_, v_stop_boxed_1228_, v_b_1226_);
lean_dec_ref(v_as_1223_);
return v_res_1229_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap(uint8_t builtin);
lean_object* initialize_Lasm_UI_Diff(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Encode(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_UI_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_UI_Encode_instInhabitedTables_default = _init_l_Lasm_UI_Encode_instInhabitedTables_default();
lean_mark_persistent(l_Lasm_UI_Encode_instInhabitedTables_default);
l_Lasm_UI_Encode_instInhabitedTables = _init_l_Lasm_UI_Encode_instInhabitedTables();
lean_mark_persistent(l_Lasm_UI_Encode_instInhabitedTables);
l_Lasm_UI_Encode_maxNames = _init_l_Lasm_UI_Encode_maxNames();
lean_mark_persistent(l_Lasm_UI_Encode_maxNames);
l_Lasm_UI_Encode_maxValues = _init_l_Lasm_UI_Encode_maxValues();
lean_mark_persistent(l_Lasm_UI_Encode_maxValues);
l_Lasm_UI_Encode_maxValueBytes = _init_l_Lasm_UI_Encode_maxValueBytes();
lean_mark_persistent(l_Lasm_UI_Encode_maxValueBytes);
l_Lasm_UI_Encode_instInhabitedEnc_default = _init_l_Lasm_UI_Encode_instInhabitedEnc_default();
lean_mark_persistent(l_Lasm_UI_Encode_instInhabitedEnc_default);
l_Lasm_UI_Encode_instInhabitedEnc = _init_l_Lasm_UI_Encode_instInhabitedEnc();
lean_mark_persistent(l_Lasm_UI_Encode_instInhabitedEnc);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
