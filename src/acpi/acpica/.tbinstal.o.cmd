cmd_src/acpi/acpica/tbinstal.o := gcc -Wp,-MD,src/acpi/acpica/.tbinstal.o.d   -D__NAUTILUS__ -Iinclude  -include include/autoconf.h -D__NAUTILUS__ -O2 -fno-omit-frame-pointer -ffreestanding -fno-stack-protector -fno-strict-aliasing -mno-red-zone -mcmodel=large -Wall -Wno-unused-function -Wno-unused-variable -fno-common -g -std=gnu99  -Wno-unused-but-set-variable -fgnu89-inline -g -m64  -Wno-pointer-sign    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(tbinstal)"  -D"KBUILD_MODNAME=KBUILD_STR(acpi)" -c -o src/acpi/acpica/tbinstal.o src/acpi/acpica/tbinstal.c

deps_src/acpi/acpica/tbinstal.o := \
  src/acpi/acpica/tbinstal.c \
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
  include/acpi/acpi.h \
  include/acpi/platform/acenv.h \
  include/acpi/platform/acnautilus.h \
  include/nautilus/nautilus.h \
  include/nautilus/printk.h \
  /usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h \
  include/nautilus/naut_types.h \
  include/dev/serial.h \
  /usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h \
  include/nautilus/instrument.h \
  include/nautilus/vc.h \
  include/dev/kbd.h \
  include/dev/ioapic.h \
  include/nautilus/intrinsics.h \
  include/dev/timer.h \
  include/nautilus/idt.h \
  include/asm/lowlevel.h \
  include/nautilus/gdt.h \
  include/nautilus/naut_string.h \
  include/nautilus/smp.h \
  include/dev/apic.h \
  include/nautilus/spinlock.h \
  include/nautilus/atomic.h \
  include/nautilus/cpu.h \
  include/nautilus/mm.h \
  include/nautilus/list.h \
  include/nautilus/queue.h \
  include/nautilus/paging.h \
    $(wildcard include/config/hrt/hihalf/offset.h) \
  include/nautilus/limits.h \
  include/nautilus/naut_assert.h \
  include/nautilus/barrier.h \
  include/nautilus/numa.h \
  include/arch/x64/main.h \
  include/nautilus/thread.h \
  include/nautilus/percpu.h \
  include/nautilus/msr.h \
  include/lib/bitops.h \
  include/asm/bitops.h \
  include/nautilus/acpi-x86_64.h \
  include/acpi/platform/acgcc.h \
  include/acpi/actypes.h \
  include/acpi/acnames.h \
  include/acpi/actypes.h \
  include/acpi/acexcep.h \
  include/acpi/actbl.h \
  include/acpi/actbl1.h \
  include/acpi/actbl2.h \
  include/acpi/acoutput.h \
  include/acpi/acrestyp.h \
  include/acpi/acpiosxf.h \
  include/acpi/acpixf.h \
  src/acpi/acpica/accommon.h \
  src/acpi/acpica/acconfig.h \
    $(wildcard include/config/h.h) \
  src/acpi/acpica/acmacros.h \
    $(wildcard include/config/acpi/debug/func/trace.h) \
  src/acpi/acpica/aclocal.h \
  src/acpi/acpica/acobject.h \
  src/acpi/acpica/acstruct.h \
  src/acpi/acpica/acglobal.h \
  src/acpi/acpica/achware.h \
  src/acpi/acpica/acutils.h \
  src/acpi/acpica/acnamesp.h \
  src/acpi/acpica/actables.h \

src/acpi/acpica/tbinstal.o: $(deps_src/acpi/acpica/tbinstal.o)

$(deps_src/acpi/acpica/tbinstal.o):
