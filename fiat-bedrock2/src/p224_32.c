/* Autogenerated: src/ExtractionOCaml/bedrock2_word_by_word_montgomery --lang=bedrock2 --no-wide-int --widen-carry --widen-bytes --split-multiret p224 '2^224 - 2^96 + 1' 32 nonzero to_bytes from_bytes */
/* curve description: p224 */
/* requested operations: nonzero, to_bytes, from_bytes */
/* m = 0xffffffffffffffffffffffffffffffff000000000000000000000001 (from "2^224 - 2^96 + 1") */
/* machine_wordsize = 32 (from "32") */
/*                                                                    */
/* NOTE: In addition to the bounds specified above each function, all */
/*   functions synthesized for this Montgomery arithmetic require the */
/*   input to be strictly less than the prime modulus (m), and also   */
/*   require the input to be in the unique saturated representation.  */
/*   All functions also ensure that these two properties are true of  */
/*   return values.                                                   */

#include <stdint.h>


/*
 * Input Bounds:
 *   in0: [[0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff]]
 * Output Bounds:
 *   out0: [0x0 ~> 0xffffffff]
 */
uintptr_t fiat_p224_nonzero(uintptr_t in0) {
  uintptr_t x0, x1, x2, x3, x4, x5, x6, x7, out0, x8;
  x0 = *(uintptr_t*)((in0)+((uintptr_t)0ULL));
  x1 = *(uintptr_t*)((in0)+((uintptr_t)4ULL));
  x2 = *(uintptr_t*)((in0)+((uintptr_t)8ULL));
  x3 = *(uintptr_t*)((in0)+((uintptr_t)12ULL));
  x4 = *(uintptr_t*)((in0)+((uintptr_t)16ULL));
  x5 = *(uintptr_t*)((in0)+((uintptr_t)20ULL));
  x6 = *(uintptr_t*)((in0)+((uintptr_t)24ULL));
  /*skip*/
  /*skip*/
  x7 = (x0)|((x1)|((x2)|((x3)|((x4)|((x5)|((x6)|((uintptr_t)0ULL)))))));
  x8 = x7;
  out0 = x8;
  return out0;
}


/*
 * Input Bounds:
 *   in0: [[0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff]]
 * Output Bounds:
 *   out0: [[0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff]]
 */
void fiat_p224_to_bytes(uintptr_t in0, uintptr_t out0) {
  uintptr_t x6, x5, x4, x3, x2, x1, x0, x13, x14, x16, x18, x12, x21, x23, x25, x11, x28, x30, x32, x10, x35, x37, x39, x9, x42, x44, x46, x8, x49, x51, x53, x7, x56, x58, x15, x17, x19, x20, x22, x24, x26, x27, x29, x31, x33, x34, x36, x38, x40, x41, x43, x45, x47, x48, x50, x52, x54, x55, x57, x59, x61, x60, x62, x63, x64, x65, x66, x67, x68, x69, x70, x71, x72, x73, x74, x75, x76, x77, x78, x79, x80, x81, x82, x83, x84, x85, x86, x87, x88, x89;
  x0 = *(uintptr_t*)((in0)+((uintptr_t)0ULL));
  x1 = *(uintptr_t*)((in0)+((uintptr_t)4ULL));
  x2 = *(uintptr_t*)((in0)+((uintptr_t)8ULL));
  x3 = *(uintptr_t*)((in0)+((uintptr_t)12ULL));
  x4 = *(uintptr_t*)((in0)+((uintptr_t)16ULL));
  x5 = *(uintptr_t*)((in0)+((uintptr_t)20ULL));
  x6 = *(uintptr_t*)((in0)+((uintptr_t)24ULL));
  /*skip*/
  /*skip*/
  x7 = x6;
  x8 = x5;
  x9 = x4;
  x10 = x3;
  x11 = x2;
  x12 = x1;
  x13 = x0;
  x14 = (x13)>>((uintptr_t)8ULL);
  x15 = (x13)&((uintptr_t)255ULL);
  x16 = (x14)>>((uintptr_t)8ULL);
  x17 = (x14)&((uintptr_t)255ULL);
  x18 = (x16)>>((uintptr_t)8ULL);
  x19 = (x16)&((uintptr_t)255ULL);
  x20 = (x18)&((uintptr_t)255ULL);
  x21 = (x12)>>((uintptr_t)8ULL);
  x22 = (x12)&((uintptr_t)255ULL);
  x23 = (x21)>>((uintptr_t)8ULL);
  x24 = (x21)&((uintptr_t)255ULL);
  x25 = (x23)>>((uintptr_t)8ULL);
  x26 = (x23)&((uintptr_t)255ULL);
  x27 = (x25)&((uintptr_t)255ULL);
  x28 = (x11)>>((uintptr_t)8ULL);
  x29 = (x11)&((uintptr_t)255ULL);
  x30 = (x28)>>((uintptr_t)8ULL);
  x31 = (x28)&((uintptr_t)255ULL);
  x32 = (x30)>>((uintptr_t)8ULL);
  x33 = (x30)&((uintptr_t)255ULL);
  x34 = (x32)&((uintptr_t)255ULL);
  x35 = (x10)>>((uintptr_t)8ULL);
  x36 = (x10)&((uintptr_t)255ULL);
  x37 = (x35)>>((uintptr_t)8ULL);
  x38 = (x35)&((uintptr_t)255ULL);
  x39 = (x37)>>((uintptr_t)8ULL);
  x40 = (x37)&((uintptr_t)255ULL);
  x41 = (x39)&((uintptr_t)255ULL);
  x42 = (x9)>>((uintptr_t)8ULL);
  x43 = (x9)&((uintptr_t)255ULL);
  x44 = (x42)>>((uintptr_t)8ULL);
  x45 = (x42)&((uintptr_t)255ULL);
  x46 = (x44)>>((uintptr_t)8ULL);
  x47 = (x44)&((uintptr_t)255ULL);
  x48 = (x46)&((uintptr_t)255ULL);
  x49 = (x8)>>((uintptr_t)8ULL);
  x50 = (x8)&((uintptr_t)255ULL);
  x51 = (x49)>>((uintptr_t)8ULL);
  x52 = (x49)&((uintptr_t)255ULL);
  x53 = (x51)>>((uintptr_t)8ULL);
  x54 = (x51)&((uintptr_t)255ULL);
  x55 = (x53)&((uintptr_t)255ULL);
  x56 = (x7)>>((uintptr_t)8ULL);
  x57 = (x7)&((uintptr_t)255ULL);
  x58 = (x56)>>((uintptr_t)8ULL);
  x59 = (x56)&((uintptr_t)255ULL);
  x60 = (x58)>>((uintptr_t)8ULL);
  x61 = (x58)&((uintptr_t)255ULL);
  x62 = x15;
  x63 = x17;
  x64 = x19;
  x65 = x20;
  x66 = x22;
  x67 = x24;
  x68 = x26;
  x69 = x27;
  x70 = x29;
  x71 = x31;
  x72 = x33;
  x73 = x34;
  x74 = x36;
  x75 = x38;
  x76 = x40;
  x77 = x41;
  x78 = x43;
  x79 = x45;
  x80 = x47;
  x81 = x48;
  x82 = x50;
  x83 = x52;
  x84 = x54;
  x85 = x55;
  x86 = x57;
  x87 = x59;
  x88 = x61;
  x89 = x60;
  /*skip*/
  *(uintptr_t*)((out0)+((uintptr_t)0ULL)) = x62;
  *(uintptr_t*)((out0)+((uintptr_t)4ULL)) = x63;
  *(uintptr_t*)((out0)+((uintptr_t)8ULL)) = x64;
  *(uintptr_t*)((out0)+((uintptr_t)12ULL)) = x65;
  *(uintptr_t*)((out0)+((uintptr_t)16ULL)) = x66;
  *(uintptr_t*)((out0)+((uintptr_t)20ULL)) = x67;
  *(uintptr_t*)((out0)+((uintptr_t)24ULL)) = x68;
  *(uintptr_t*)((out0)+((uintptr_t)28ULL)) = x69;
  *(uintptr_t*)((out0)+((uintptr_t)32ULL)) = x70;
  *(uintptr_t*)((out0)+((uintptr_t)36ULL)) = x71;
  *(uintptr_t*)((out0)+((uintptr_t)40ULL)) = x72;
  *(uintptr_t*)((out0)+((uintptr_t)44ULL)) = x73;
  *(uintptr_t*)((out0)+((uintptr_t)48ULL)) = x74;
  *(uintptr_t*)((out0)+((uintptr_t)52ULL)) = x75;
  *(uintptr_t*)((out0)+((uintptr_t)56ULL)) = x76;
  *(uintptr_t*)((out0)+((uintptr_t)60ULL)) = x77;
  *(uintptr_t*)((out0)+((uintptr_t)64ULL)) = x78;
  *(uintptr_t*)((out0)+((uintptr_t)68ULL)) = x79;
  *(uintptr_t*)((out0)+((uintptr_t)72ULL)) = x80;
  *(uintptr_t*)((out0)+((uintptr_t)76ULL)) = x81;
  *(uintptr_t*)((out0)+((uintptr_t)80ULL)) = x82;
  *(uintptr_t*)((out0)+((uintptr_t)84ULL)) = x83;
  *(uintptr_t*)((out0)+((uintptr_t)88ULL)) = x84;
  *(uintptr_t*)((out0)+((uintptr_t)92ULL)) = x85;
  *(uintptr_t*)((out0)+((uintptr_t)96ULL)) = x86;
  *(uintptr_t*)((out0)+((uintptr_t)100ULL)) = x87;
  *(uintptr_t*)((out0)+((uintptr_t)104ULL)) = x88;
  *(uintptr_t*)((out0)+((uintptr_t)108ULL)) = x89;
  /*skip*/
  return;
}


/*
 * Input Bounds:
 *   in0: [[0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff]]
 * Output Bounds:
 *   out0: [[0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff]]
 */
void fiat_p224_from_bytes(uintptr_t in0, uintptr_t out0) {
  uintptr_t x27, x26, x25, x24, x23, x22, x21, x20, x19, x18, x17, x16, x15, x14, x13, x12, x11, x10, x9, x8, x7, x6, x5, x4, x3, x2, x1, x0, x55, x54, x53, x52, x56, x31, x30, x29, x28, x35, x34, x33, x32, x39, x38, x37, x36, x43, x42, x41, x40, x47, x46, x45, x44, x51, x50, x49, x48, x63, x62, x61, x60, x59, x57, x64, x65, x66, x67, x68, x58, x69, x70, x71, x72, x73, x74, x75;
  x0 = *(uintptr_t*)((in0)+((uintptr_t)0ULL));
  x1 = *(uintptr_t*)((in0)+((uintptr_t)4ULL));
  x2 = *(uintptr_t*)((in0)+((uintptr_t)8ULL));
  x3 = *(uintptr_t*)((in0)+((uintptr_t)12ULL));
  x4 = *(uintptr_t*)((in0)+((uintptr_t)16ULL));
  x5 = *(uintptr_t*)((in0)+((uintptr_t)20ULL));
  x6 = *(uintptr_t*)((in0)+((uintptr_t)24ULL));
  x7 = *(uintptr_t*)((in0)+((uintptr_t)28ULL));
  x8 = *(uintptr_t*)((in0)+((uintptr_t)32ULL));
  x9 = *(uintptr_t*)((in0)+((uintptr_t)36ULL));
  x10 = *(uintptr_t*)((in0)+((uintptr_t)40ULL));
  x11 = *(uintptr_t*)((in0)+((uintptr_t)44ULL));
  x12 = *(uintptr_t*)((in0)+((uintptr_t)48ULL));
  x13 = *(uintptr_t*)((in0)+((uintptr_t)52ULL));
  x14 = *(uintptr_t*)((in0)+((uintptr_t)56ULL));
  x15 = *(uintptr_t*)((in0)+((uintptr_t)60ULL));
  x16 = *(uintptr_t*)((in0)+((uintptr_t)64ULL));
  x17 = *(uintptr_t*)((in0)+((uintptr_t)68ULL));
  x18 = *(uintptr_t*)((in0)+((uintptr_t)72ULL));
  x19 = *(uintptr_t*)((in0)+((uintptr_t)76ULL));
  x20 = *(uintptr_t*)((in0)+((uintptr_t)80ULL));
  x21 = *(uintptr_t*)((in0)+((uintptr_t)84ULL));
  x22 = *(uintptr_t*)((in0)+((uintptr_t)88ULL));
  x23 = *(uintptr_t*)((in0)+((uintptr_t)92ULL));
  x24 = *(uintptr_t*)((in0)+((uintptr_t)96ULL));
  x25 = *(uintptr_t*)((in0)+((uintptr_t)100ULL));
  x26 = *(uintptr_t*)((in0)+((uintptr_t)104ULL));
  x27 = *(uintptr_t*)((in0)+((uintptr_t)108ULL));
  /*skip*/
  /*skip*/
  x28 = (x27)<<((uintptr_t)24ULL);
  x29 = (x26)<<((uintptr_t)16ULL);
  x30 = (x25)<<((uintptr_t)8ULL);
  x31 = x24;
  x32 = (x23)<<((uintptr_t)24ULL);
  x33 = (x22)<<((uintptr_t)16ULL);
  x34 = (x21)<<((uintptr_t)8ULL);
  x35 = x20;
  x36 = (x19)<<((uintptr_t)24ULL);
  x37 = (x18)<<((uintptr_t)16ULL);
  x38 = (x17)<<((uintptr_t)8ULL);
  x39 = x16;
  x40 = (x15)<<((uintptr_t)24ULL);
  x41 = (x14)<<((uintptr_t)16ULL);
  x42 = (x13)<<((uintptr_t)8ULL);
  x43 = x12;
  x44 = (x11)<<((uintptr_t)24ULL);
  x45 = (x10)<<((uintptr_t)16ULL);
  x46 = (x9)<<((uintptr_t)8ULL);
  x47 = x8;
  x48 = (x7)<<((uintptr_t)24ULL);
  x49 = (x6)<<((uintptr_t)16ULL);
  x50 = (x5)<<((uintptr_t)8ULL);
  x51 = x4;
  x52 = (x3)<<((uintptr_t)24ULL);
  x53 = (x2)<<((uintptr_t)16ULL);
  x54 = (x1)<<((uintptr_t)8ULL);
  x55 = x0;
  x56 = (x55)+((x54)+((x53)+(x52)));
  x57 = (x56)&((uintptr_t)4294967295ULL);
  x58 = (x31)+((x30)+((x29)+(x28)));
  x59 = (x35)+((x34)+((x33)+(x32)));
  x60 = (x39)+((x38)+((x37)+(x36)));
  x61 = (x43)+((x42)+((x41)+(x40)));
  x62 = (x47)+((x46)+((x45)+(x44)));
  x63 = (x51)+((x50)+((x49)+(x48)));
  x64 = (x63)&((uintptr_t)4294967295ULL);
  x65 = (x62)&((uintptr_t)4294967295ULL);
  x66 = (x61)&((uintptr_t)4294967295ULL);
  x67 = (x60)&((uintptr_t)4294967295ULL);
  x68 = (x59)&((uintptr_t)4294967295ULL);
  x69 = x57;
  x70 = x64;
  x71 = x65;
  x72 = x66;
  x73 = x67;
  x74 = x68;
  x75 = x58;
  /*skip*/
  *(uintptr_t*)((out0)+((uintptr_t)0ULL)) = x69;
  *(uintptr_t*)((out0)+((uintptr_t)4ULL)) = x70;
  *(uintptr_t*)((out0)+((uintptr_t)8ULL)) = x71;
  *(uintptr_t*)((out0)+((uintptr_t)12ULL)) = x72;
  *(uintptr_t*)((out0)+((uintptr_t)16ULL)) = x73;
  *(uintptr_t*)((out0)+((uintptr_t)20ULL)) = x74;
  *(uintptr_t*)((out0)+((uintptr_t)24ULL)) = x75;
  /*skip*/
  return;
}


