cmd_src/lua_src/lundump.o := gcc -Wp,-MD,src/lua_src/.lundump.o.d   -D__NAUTILUS__ -Iinclude  -include include/autoconf.h -D__NAUTILUS__ -O2 -fno-omit-frame-pointer -ffreestanding -fno-stack-protector -fno-strict-aliasing -mno-red-zone -mcmodel=large -Wall -Wno-unused-function -Wno-unused-variable -fno-common -std=gnu99  -Wno-unused-but-set-variable -fgnu89-inline -m64  -Wno-pointer-sign    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(lundump)"  -D"KBUILD_MODNAME=KBUILD_STR(lundump)" -c -o src/lua_src/lundump.o src/lua_src/lundump.c

deps_src/lua_src/lundump.o := \
  src/lua_src/lundump.c \
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
    $(wildcard include/config/debug/virtual/console.h) \
    $(wildcard include/config/legion/rt.h) \
    $(wildcard include/config/ndpc/rt.h) \
    $(wildcard include/config/nesl/rt.h) \
    $(wildcard include/config/no/rt.h) \
    $(wildcard include/config/serial/redirect.h) \
    $(wildcard include/config/serial/port.h) \
    $(wildcard include/config/hpet.h) \
    $(wildcard include/config/hz.h) \
    $(wildcard include/config/virtio/pci.h) \
  /usr/include/string.h \
  /usr/include/features.h \
  /usr/include/stdc-predef.h \
  /usr/include/x86_64-linux-gnu/sys/cdefs.h \
  /usr/include/x86_64-linux-gnu/bits/wordsize.h \
  /usr/include/x86_64-linux-gnu/gnu/stubs.h \
  /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h \
  /usr/include/xlocale.h \
  /usr/include/x86_64-linux-gnu/bits/string.h \
  /usr/include/x86_64-linux-gnu/bits/string2.h \
  /usr/include/endian.h \
  /usr/include/x86_64-linux-gnu/bits/endian.h \
  /usr/include/x86_64-linux-gnu/bits/byteswap.h \
  /usr/include/x86_64-linux-gnu/bits/types.h \
  /usr/include/x86_64-linux-gnu/bits/typesizes.h \
  /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
  /usr/include/stdlib.h \
  /usr/include/x86_64-linux-gnu/bits/string3.h \
  include/lua/lua.h \
  /usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h \
  include/lua/luaconf.h \
  /usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h \
  /usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/syslimits.h \
  /usr/include/limits.h \
  /usr/include/x86_64-linux-gnu/bits/posix1_lim.h \
  /usr/include/x86_64-linux-gnu/bits/local_lim.h \
  /usr/include/linux/limits.h \
  /usr/include/x86_64-linux-gnu/bits/posix2_lim.h \
  include/lua/ldebug.h \
  include/lua/lstate.h \
  include/lua/lua.h \
  include/lua/lobject.h \
  include/lua/llimits.h \
  include/lua/ltm.h \
  include/lua/lobject.h \
  include/lua/lzio.h \
  include/lua/lmem.h \
  include/lua/llimits.h \
  include/lua/ldo.h \
  include/lua/lzio.h \
  include/lua/lfunc.h \
  include/lua/lmem.h \
  include/lua/lstring.h \
  include/lua/lgc.h \
  include/lua/lundump.h \

src/lua_src/lundump.o: $(deps_src/lua_src/lundump.o)

$(deps_src/lua_src/lundump.o):
