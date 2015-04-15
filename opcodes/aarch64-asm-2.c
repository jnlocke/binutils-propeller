/* This file is automatically generated by aarch64-gen.  Do not edit!  */
/* Copyright (C) 2012-2015 Free Software Foundation, Inc.
   Contributed by ARM Ltd.

   This file is part of the GNU opcodes library.

   This library is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING3. If not,
   see <http://www.gnu.org/licenses/>.  */

#include "sysdep.h"
#include "aarch64-asm.h"


const aarch64_opcode *
aarch64_find_real_opcode (const aarch64_opcode *opcode)
{
  /* Use the index as the key to locate the real opcode.  */
  int key = opcode - aarch64_opcode_table;
  int value;
  switch (key)
    {
    case 3:	/* ngc */
      value = 2;	/* --> sbc.  */
      break;
    case 5:	/* ngcs */
      value = 4;	/* --> sbcs.  */
      break;
    case 8:	/* cmn */
      value = 7;	/* --> adds.  */
      break;
    case 11:	/* cmp */
      value = 10;	/* --> subs.  */
      break;
    case 13:	/* mov */
      value = 12;	/* --> add.  */
      break;
    case 15:	/* cmn */
      value = 14;	/* --> adds.  */
      break;
    case 18:	/* cmp */
      value = 17;	/* --> subs.  */
      break;
    case 21:	/* cmn */
      value = 20;	/* --> adds.  */
      break;
    case 23:	/* neg */
      value = 22;	/* --> sub.  */
      break;
    case 26:	/* negs */
    case 25:	/* cmp */
      value = 24;	/* --> subs.  */
      break;
    case 139:	/* mov */
      value = 138;	/* --> umov.  */
      break;
    case 141:	/* mov */
      value = 140;	/* --> ins.  */
      break;
    case 143:	/* mov */
      value = 142;	/* --> ins.  */
      break;
    case 204:	/* mvn */
      value = 203;	/* --> not.  */
      break;
    case 259:	/* mov */
      value = 258;	/* --> orr.  */
      break;
    case 314:	/* sxtl */
      value = 313;	/* --> sshll.  */
      break;
    case 316:	/* sxtl2 */
      value = 315;	/* --> sshll2.  */
      break;
    case 336:	/* uxtl */
      value = 335;	/* --> ushll.  */
      break;
    case 338:	/* uxtl2 */
      value = 337;	/* --> ushll2.  */
      break;
    case 431:	/* mov */
      value = 430;	/* --> dup.  */
      break;
    case 498:	/* sxtw */
    case 497:	/* sxth */
    case 496:	/* sxtb */
    case 499:	/* asr */
    case 495:	/* sbfx */
    case 494:	/* sbfiz */
      value = 493;	/* --> sbfm.  */
      break;
    case 502:	/* bfxil */
    case 501:	/* bfi */
      value = 500;	/* --> bfm.  */
      break;
    case 507:	/* uxth */
    case 506:	/* uxtb */
    case 509:	/* lsr */
    case 508:	/* lsl */
    case 505:	/* ubfx */
    case 504:	/* ubfiz */
      value = 503;	/* --> ubfm.  */
      break;
    case 527:	/* cset */
    case 526:	/* cinc */
      value = 525;	/* --> csinc.  */
      break;
    case 530:	/* csetm */
    case 529:	/* cinv */
      value = 528;	/* --> csinv.  */
      break;
    case 532:	/* cneg */
      value = 531;	/* --> csneg.  */
      break;
    case 557:	/* lsl */
      value = 556;	/* --> lslv.  */
      break;
    case 559:	/* lsr */
      value = 558;	/* --> lsrv.  */
      break;
    case 561:	/* asr */
      value = 560;	/* --> asrv.  */
      break;
    case 563:	/* ror */
      value = 562;	/* --> rorv.  */
      break;
    case 573:	/* mul */
      value = 572;	/* --> madd.  */
      break;
    case 575:	/* mneg */
      value = 574;	/* --> msub.  */
      break;
    case 577:	/* smull */
      value = 576;	/* --> smaddl.  */
      break;
    case 579:	/* smnegl */
      value = 578;	/* --> smsubl.  */
      break;
    case 582:	/* umull */
      value = 581;	/* --> umaddl.  */
      break;
    case 584:	/* umnegl */
      value = 583;	/* --> umsubl.  */
      break;
    case 595:	/* ror */
      value = 594;	/* --> extr.  */
      break;
    case 746:	/* bic */
      value = 745;	/* --> and.  */
      break;
    case 748:	/* mov */
      value = 747;	/* --> orr.  */
      break;
    case 751:	/* tst */
      value = 750;	/* --> ands.  */
      break;
    case 756:	/* uxtw */
    case 755:	/* mov */
      value = 754;	/* --> orr.  */
      break;
    case 758:	/* mvn */
      value = 757;	/* --> orn.  */
      break;
    case 762:	/* tst */
      value = 761;	/* --> ands.  */
      break;
    case 888:	/* staddb */
      value = 792;	/* --> ldaddb.  */
      break;
    case 889:	/* staddh */
      value = 793;	/* --> ldaddh.  */
      break;
    case 890:	/* stadd */
      value = 794;	/* --> ldadd.  */
      break;
    case 891:	/* staddlb */
      value = 796;	/* --> ldaddlb.  */
      break;
    case 892:	/* staddlh */
      value = 799;	/* --> ldaddlh.  */
      break;
    case 893:	/* staddl */
      value = 802;	/* --> ldaddl.  */
      break;
    case 894:	/* stclrb */
      value = 804;	/* --> ldclrb.  */
      break;
    case 895:	/* stclrh */
      value = 805;	/* --> ldclrh.  */
      break;
    case 896:	/* stclr */
      value = 806;	/* --> ldclr.  */
      break;
    case 897:	/* stclrlb */
      value = 808;	/* --> ldclrlb.  */
      break;
    case 898:	/* stclrlh */
      value = 811;	/* --> ldclrlh.  */
      break;
    case 899:	/* stclrl */
      value = 814;	/* --> ldclrl.  */
      break;
    case 900:	/* steorb */
      value = 816;	/* --> ldeorb.  */
      break;
    case 901:	/* steorh */
      value = 817;	/* --> ldeorh.  */
      break;
    case 902:	/* steor */
      value = 818;	/* --> ldeor.  */
      break;
    case 903:	/* steorlb */
      value = 820;	/* --> ldeorlb.  */
      break;
    case 904:	/* steorlh */
      value = 823;	/* --> ldeorlh.  */
      break;
    case 905:	/* steorl */
      value = 826;	/* --> ldeorl.  */
      break;
    case 906:	/* stsetb */
      value = 828;	/* --> ldsetb.  */
      break;
    case 907:	/* stseth */
      value = 829;	/* --> ldseth.  */
      break;
    case 908:	/* stset */
      value = 830;	/* --> ldset.  */
      break;
    case 909:	/* stsetlb */
      value = 832;	/* --> ldsetlb.  */
      break;
    case 910:	/* stsetlh */
      value = 835;	/* --> ldsetlh.  */
      break;
    case 911:	/* stsetl */
      value = 838;	/* --> ldsetl.  */
      break;
    case 912:	/* stsmaxb */
      value = 840;	/* --> ldsmaxb.  */
      break;
    case 913:	/* stsmaxh */
      value = 841;	/* --> ldsmaxh.  */
      break;
    case 914:	/* stsmax */
      value = 842;	/* --> ldsmax.  */
      break;
    case 915:	/* stsmaxlb */
      value = 844;	/* --> ldsmaxlb.  */
      break;
    case 916:	/* stsmaxlh */
      value = 847;	/* --> ldsmaxlh.  */
      break;
    case 917:	/* stsmaxl */
      value = 850;	/* --> ldsmaxl.  */
      break;
    case 918:	/* stsminb */
      value = 852;	/* --> ldsminb.  */
      break;
    case 919:	/* stsminh */
      value = 853;	/* --> ldsminh.  */
      break;
    case 920:	/* stsmin */
      value = 854;	/* --> ldsmin.  */
      break;
    case 921:	/* stsminlb */
      value = 856;	/* --> ldsminlb.  */
      break;
    case 922:	/* stsminlh */
      value = 859;	/* --> ldsminlh.  */
      break;
    case 923:	/* stsminl */
      value = 862;	/* --> ldsminl.  */
      break;
    case 924:	/* stumaxb */
      value = 864;	/* --> ldumaxb.  */
      break;
    case 925:	/* stumaxh */
      value = 865;	/* --> ldumaxh.  */
      break;
    case 926:	/* stumax */
      value = 866;	/* --> ldumax.  */
      break;
    case 927:	/* stumaxlb */
      value = 868;	/* --> ldumaxlb.  */
      break;
    case 928:	/* stumaxlh */
      value = 871;	/* --> ldumaxlh.  */
      break;
    case 929:	/* stumaxl */
      value = 874;	/* --> ldumaxl.  */
      break;
    case 930:	/* stuminb */
      value = 876;	/* --> lduminb.  */
      break;
    case 931:	/* stuminh */
      value = 877;	/* --> lduminh.  */
      break;
    case 932:	/* stumin */
      value = 878;	/* --> ldumin.  */
      break;
    case 933:	/* stuminlb */
      value = 880;	/* --> lduminlb.  */
      break;
    case 934:	/* stuminlh */
      value = 883;	/* --> lduminlh.  */
      break;
    case 935:	/* stuminl */
      value = 886;	/* --> lduminl.  */
      break;
    case 937:	/* mov */
      value = 936;	/* --> movn.  */
      break;
    case 939:	/* mov */
      value = 938;	/* --> movz.  */
      break;
    case 950:	/* sevl */
    case 949:	/* sev */
    case 948:	/* wfi */
    case 947:	/* wfe */
    case 946:	/* yield */
    case 945:	/* nop */
      value = 944;	/* --> hint.  */
      break;
    case 959:	/* tlbi */
    case 958:	/* ic */
    case 957:	/* dc */
    case 956:	/* at */
      value = 955;	/* --> sys.  */
      break;
    default: return NULL;
    }

  return aarch64_opcode_table + value;
}

const char*
aarch64_insert_operand (const aarch64_operand *self,
			   const aarch64_opnd_info *info,
			   aarch64_insn *code, const aarch64_inst *inst)
{
  /* Use the index as the key.  */
  int key = self - aarch64_operands;
  switch (key)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 14:
    case 15:
    case 16:
    case 17:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 35:
    case 36:
      return aarch64_ins_regno (self, info, code, inst);
    case 12:
      return aarch64_ins_reg_extended (self, info, code, inst);
    case 13:
      return aarch64_ins_reg_shifted (self, info, code, inst);
    case 18:
      return aarch64_ins_ft (self, info, code, inst);
    case 28:
    case 29:
    case 30:
      return aarch64_ins_reglane (self, info, code, inst);
    case 31:
      return aarch64_ins_reglist (self, info, code, inst);
    case 32:
      return aarch64_ins_ldst_reglist (self, info, code, inst);
    case 33:
      return aarch64_ins_ldst_reglist_r (self, info, code, inst);
    case 34:
      return aarch64_ins_ldst_elemlist (self, info, code, inst);
    case 37:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 67:
    case 68:
    case 69:
    case 70:
      return aarch64_ins_imm (self, info, code, inst);
    case 38:
    case 39:
      return aarch64_ins_advsimd_imm_shift (self, info, code, inst);
    case 40:
    case 41:
    case 42:
      return aarch64_ins_advsimd_imm_modified (self, info, code, inst);
    case 59:
      return aarch64_ins_limm (self, info, code, inst);
    case 60:
      return aarch64_ins_aimm (self, info, code, inst);
    case 61:
      return aarch64_ins_imm_half (self, info, code, inst);
    case 62:
      return aarch64_ins_fbits (self, info, code, inst);
    case 64:
    case 65:
      return aarch64_ins_cond (self, info, code, inst);
    case 71:
    case 77:
      return aarch64_ins_addr_simple (self, info, code, inst);
    case 72:
      return aarch64_ins_addr_regoff (self, info, code, inst);
    case 73:
    case 74:
    case 75:
      return aarch64_ins_addr_simm (self, info, code, inst);
    case 76:
      return aarch64_ins_addr_uimm12 (self, info, code, inst);
    case 78:
      return aarch64_ins_simd_addr_post (self, info, code, inst);
    case 79:
      return aarch64_ins_sysreg (self, info, code, inst);
    case 80:
      return aarch64_ins_pstatefield (self, info, code, inst);
    case 81:
    case 82:
    case 83:
    case 84:
      return aarch64_ins_sysins_op (self, info, code, inst);
    case 85:
    case 86:
      return aarch64_ins_barrier (self, info, code, inst);
    case 87:
      return aarch64_ins_prfop (self, info, code, inst);
    default: assert (0); abort ();
    }
}
