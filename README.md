```

    _   __               __   _  __                
   / | / /____ _ __  __ / /_ (_)/ /__  __ _____    
  /  |/ // __ `// / / // __// // // / / // ___/ 
 / /|  // /_/ // /_/ // /_ / // // /_/ /(__  )     
/_/ |_/ \__,_/ \__,_/ \__//_//_/ \__,_//____/


```

# Lua interpreter for Nautilus AeroKernel  

Nautilus is an example of an AeroKernel, a very thin kernel-layer exposed 
(much like a library OS, or libOS) directly to the runtime and application. 
In order to provide the user-space like facility to perform tests on nautilus' 
implementation an interpreted language viz. Lua has been ported to work on nautilus. 

# Getting Started

## Prerequisites

- git 
- gcc cross compiler (more on this to come)
- grub version >= 2.02
- xorriso (for CD burning)
- QEMU 
- Python 3.6 or higher


## Hardware Support

Nautilus works with the following hardware:

- x86_64 machines (AMD and Intel)

## Installation and Building

First, configure Nautilus by running 

`make menuconfig`

Select any options you require, then 
run `make` to build the HRT binary image. To make a bootable CD-ROM, 
run `make isoimage`. If you see weird errors, chances are there
is something wrong with your GRUB2 toolchain (namely, `grub-mkrescue`). Make sure `grub-mkrescue`
knows where its libraries are, especially if you've installed the
latest GRUB from source. Use `grub-mkrescue -d`. We've run into issues with naming of
the GRUB2 binaries, in which case a workaround with symlinks was sufficient.


# Running and Debugging under QEMU

Recommended:

`$> qemu-system-x86_64 -cdrom nautilus.iso -m 2048`

Nautilus has multicore support, so this will also work just fine:

`$> qemu-system-x86_64 -cdrom nautilus.iso -m 2048 -smp 4`

You should see Nautilus boot up on all 4 cores.

Nautilus is a NUMA-aware AeroKernel. To see this in action, try (with a sufficiently new
version of QEMU):

```
$> qemu-system-x86_64 -cdrom nautilus.iso \
                      -m 8G \
                      -numa node,nodeid=0,cpus=0-1 \
                      -numa node,nodeid=1,cpus=2-3 \
                      -smp 4,sockets=2,cores=2,threads=1
```

Nautilus supports debugging over the serial port. This is useful if you want to
debug a physical machine remotely. All prints after the serial port has been
initialized will be redirected to COM1. To use this, find the SERIAL_REDIRECT
entry and enable it in `make menuconfig`. You can now run like this:

`$> qemu-system-x86_64 -cdrom nautilus.iso -m 2G -serial stdio`

# Running and Debugging under BOCHS

While we recommend using QEMU, sometimes it is nice to use the native debugging 
support in BOCHS. We've used BOCHS successfully with version 2.6.8. You must have
a version of BOCHS that is built with x86_64 support, which does not seem to be the
default in a lot of package repos. We had to build it manually. You probably also 
want to enable the native debugger.

Here is a BOCHS config file (`~/.bochsrc`) that we used successfully:

```
ata0-master: type=cdrom, path=nautilus.iso, status=inserted
boot: cdrom
com1: enabled=1, mode=file, dev=serial.out
cpu: count=2
cpuid: level=6, mmx=1, level=6, x86_64=1, 1g_pages=1
megs: 2048
```

# Resources

You can find publications related to Nautilus and HRTs/HVMs at 
http://halek.co

Our lab:
www.presciencelab.org


# Acknowledgements

Nautilus was made possible by support from the United States National Science
Foundation (NSF) via grant CNS-0709168, the Department of Energy (DOE) via
grant DE-SC0005343, and Sandia National Laboratories through the Hobbes
Project, which is funded by the 2013 Exascale Operating and Runtime Systems
Program under the Office of Advanced Scientific Computing Research in the DOE
Office of Science. Sandia National Laboratories is a multi-program laboratory
managed and operated by Sandia Corporation, a wholly owned subsidiary of
Lockheed Martin Corporation, for the U.S. Department of Energy’s National
Nuclear Security Administration under contract DE-AC04-94AL85000.

Kyle C. Hale (c) 2015
Northwestern University
