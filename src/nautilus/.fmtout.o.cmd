cmd_src/nautilus/fmtout.o := gcc -Wp,-MD,src/nautilus/.fmtout.o.d   -D__NAUTILUS__ -Iinclude  -include include/autoconf.h -D__NAUTILUS__ -O2 -fno-omit-frame-pointer -ffreestanding -fno-stack-protector -fno-strict-aliasing -mno-red-zone -mcmodel=large -Wall -Wno-unused-function -Wno-unused-variable -fno-common -g -std=gnu99  -Wno-unused-but-set-variable -fgnu89-inline -g -m64  -Wno-pointer-sign    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(fmtout)"  -D"KBUILD_MODNAME=KBUILD_STR(fmtout)" -c -o src/nautilus/fmtout.o src/nautilus/fmtout.c

deps_src/nautilus/fmtout.o := \
  src/nautilus/fmtout.c \
  include/autoconf.h \
    $(wildcard include/config/x86/64/host.h) \
    $(wildcard include/config/xeon/phi.h) \
    $(wildcard include/config/hvm/hrt.h) \
    $(wildcard include/config/max/cpus.h) \
    $(wildcard include/config/max/ioapics.h) \
    $(wildcard include/config/palacios.h) \
    $(wildcard include/config/use/naut/builtins.h) \
    $(wildcard include/config/cxx/support.h) \
    $(wildcard include/config/toolchain/root.h) \
    $(wildcard include/config/thread/exit/keycode.h) \
    $(wildcard include/config/use/ticketlocks.h) \
    $(wildcard include/config/virtual/console/serial/mirror.h) \
    $(wildcard include/config/virtual/console/serial/mirror/all.h) \
    $(wildcard include/config/fpu/save.h) \
    $(wildcard include/config/kick/schedule.h) \
    $(wildcard include/config/halt/while/idle.h) \
    $(wildcard include/config/thread/optimize.h) \
    $(wildcard include/config/use/idle/threads.h) \
    $(wildcard include/config/debug/info.h) \
    $(wildcard include/config/debug/prints.h) \
    $(wildcard include/config/enable/asserts.h) \
    $(wildcard include/config/profile.h) \
    $(wildcard include/config/silence/undef/err.h) \
    $(wildcard include/config/enable/stack/check.h) \
    $(wildcard include/config/debug/paging.h) \
    $(wildcard include/config/debug/bootmem.h) \
    $(wildcard include/config/debug/buddy.h) \
    $(wildcard include/config/debug/kmem.h) \
    $(wildcard include/config/debug/fpu.h) \
    $(wildcard include/config/debug/smp.h) \
    $(wildcard include/config/debug/sfi.h) \
    $(wildcard include/config/debug/cxx.h) \
    $(wildcard include/config/debug/threads.h) \
    $(wildcard include/config/debug/synch.h) \
    $(wildcard include/config/debug/barrier.h) \
    $(wildcard include/config/debug/numa.h) \
    $(wildcard include/config/debug/virtual/console.h) \
    $(wildcard include/config/legion/rt.h) \
    $(wildcard include/config/ndpc/rt.h) \
    $(wildcard include/config/nesl/rt.h) \
    $(wildcard include/config/no/rt.h) \
    $(wildcard include/config/serial/redirect.h) \
    $(wildcard include/config/serial/port.h) \
    $(wildcard include/config/debug/apic.h) \
    $(wildcard include/config/debug/ioapic.h) \
    $(wildcard include/config/debug/pci.h) \
    $(wildcard include/config/debug/kbd.h) \
    $(wildcard include/config/debug/timers.h) \
    $(wildcard include/config/debug/pit.h) \
    $(wildcard include/config/hpet.h) \
    $(wildcard include/config/hz.h) \
    $(wildcard include/config/virtio/pci.h) \
  /usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h \
  /usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h \
  include/nautilus/naut_string.h \
  include/nautilus/naut_types.h \
  include/nautilus/fmtout.h \

src/nautilus/fmtout.o: $(deps_src/nautilus/fmtout.o)

$(deps_src/nautilus/fmtout.o):
