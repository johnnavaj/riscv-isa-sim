VL_LOOP
  WRITE_VRD_TYPE(DYN_LOAD_ST_TYPE(RS1 + ((int8_t)VS2) + insn.rvv_load_imm(), 0, INT8, 1), W8);
}