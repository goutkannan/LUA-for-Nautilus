cmd_src/asm/built-in.o :=  ld -z max-page-size=0x1000 -melf_x86_64 -dp  -r -o src/asm/built-in.o src/asm/smpboot.o src/asm/excp_early.o src/asm/thread_lowlevel.o src/asm/setjmp_low.o
