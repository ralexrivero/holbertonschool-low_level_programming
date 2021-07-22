   1              		.file	"100.c"
   2              		.intel_syntax noprefix
   3              	# GNU C17 (Ubuntu 9.3.0-17ubuntu1~20.04) version 9.3.0 (x86_64-linux-gnu)
   4              	#	compiled by GNU C version 9.3.0, GMP version 6.2.0, MPFR version 4.0.2, MPC version 1.1.0, isl ve
   5              	
   6              	# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
   7              	# options passed:  -imultiarch x86_64-linux-gnu 100.c -masm=intel
   8              	# -mtune=generic -march=x86-64 -g -fverbose-asm
   9              	# -fasynchronous-unwind-tables -fstack-protector-strong -Wformat
  10              	# -Wformat-security -fstack-clash-protection -fcf-protection
  11              	# options enabled:  -fPIC -fPIE -faggressive-loop-optimizations
  12              	# -fassume-phsa -fasynchronous-unwind-tables -fauto-inc-dec -fcommon
  13              	# -fdelete-null-pointer-checks -fdwarf2-cfi-asm -fearly-inlining
  14              	# -feliminate-unused-debug-types -ffp-int-builtin-inexact -ffunction-cse
  15              	# -fgcse-lm -fgnu-runtime -fgnu-unique -fident -finline-atomics
  16              	# -fipa-stack-alignment -fira-hoist-pressure -fira-share-save-slots
  17              	# -fira-share-spill-slots -fivopts -fkeep-static-consts
  18              	# -fleading-underscore -flifetime-dse -flto-odr-type-merging -fmath-errno
  19              	# -fmerge-debug-strings -fpeephole -fplt -fprefetch-loop-arrays
  20              	# -freg-struct-return -fsched-critical-path-heuristic
  21              	# -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
  22              	# -fsched-last-insn-heuristic -fsched-rank-heuristic -fsched-spec
  23              	# -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-fusion
  24              	# -fsemantic-interposition -fshow-column -fshrink-wrap-separate
  25              	# -fsigned-zeros -fsplit-ivs-in-unroller -fssa-backprop
  26              	# -fstack-clash-protection -fstack-protector-strong -fstdarg-opt
  27              	# -fstrict-volatile-bitfields -fsync-libcalls -ftrapping-math -ftree-cselim
  28              	# -ftree-forwprop -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
  29              	# -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop
  30              	# -ftree-reassoc -ftree-scev-cprop -funit-at-a-time -funwind-tables
  31              	# -fverbose-asm -fzero-initialized-in-bss -m128bit-long-double -m64 -m80387
  32              	# -malign-stringops -mavx256-split-unaligned-load
  33              	# -mavx256-split-unaligned-store -mfancy-math-387 -mfp-ret-in-387 -mfxsr
  34              	# -mglibc -mieee-fp -mlong-double-80 -mmmx -mno-sse4 -mpush-args -mred-zone
  35              	# -msse -msse2 -mstv -mtls-direct-seg-refs -mvzeroupper
  36              	
  37              		.text
  38              	.Ltext0:
  39              		.section	.rodata
  40              	.LC0:
  41 0000 48656C6C 		.string	"Hello, Holberton"
  41      6F2C2048 
  41      6F6C6265 
  41      72746F6E 
  41      00
  42              		.text
  43              		.globl	main
  45              	main:
  46              	.LFB0:
  47              		.file 1 "100.c"
   1:100.c         **** #include <stdio.h>
   2:100.c         **** int main(void)
   3:100.c         **** {
  48              		.loc 1 3 1
  49              		.cfi_startproc
  50 0000 F30F1EFA 		endbr64	
  51 0004 55       		push	rbp	#
  52              		.cfi_def_cfa_offset 16
  53              		.cfi_offset 6, -16
  54 0005 4889E5   		mov	rbp, rsp	#,
  55              		.cfi_def_cfa_register 6
  56              	# 100.c:4: 	puts("Hello, Holberton");
   4:100.c         **** 	puts("Hello, Holberton");
  57              		.loc 1 4 2
  58 0008 488D3D00 		lea	rdi, .LC0[rip]	#,
  58      000000
  59 000f E8000000 		call	puts@PLT	#
  59      00
  60              	# 100.c:5: 	return (0);
   5:100.c         **** 	return (0);
  61              		.loc 1 5 9
  62 0014 B8000000 		mov	eax, 0	# _3,
  62      00
  63              	# 100.c:6: }
   6:100.c         **** }
  64              		.loc 1 6 1
  65 0019 5D       		pop	rbp	#
  66              		.cfi_def_cfa 7, 8
  67 001a C3       		ret	
  68              		.cfi_endproc
  69              	.LFE0:
  71              	.Letext0:
  72              		.file 2 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h"
  73              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
  74              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
  75              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h"
  76              		.file 6 "/usr/include/stdio.h"
  77              		.file 7 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
 800              		.section	.note.gnu.property,"a"
 801              		.align 8
 802 0000 04000000 		.long	 1f - 0f
 803 0004 10000000 		.long	 4f - 1f
 804 0008 05000000 		.long	 5
 805              	0:
 806 000c 474E5500 		.string	 "GNU"
 807              	1:
 808              		.align 8
 809 0010 020000C0 		.long	 0xc0000002
 810 0014 04000000 		.long	 3f - 2f
 811              	2:
 812 0018 03000000 		.long	 0x3
 813              	3:
 814 001c 00000000 		.align 8
 815              	4:
