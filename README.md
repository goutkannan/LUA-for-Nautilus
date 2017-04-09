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
- Python >= 3.6


## Hardware Support

Nautilus works with the following hardware:

- x86_64 machines (AMD and Intel)

## Dowloading the source and Building

First,get the source of Nautilus that has LUA already ported by running 

`$> git clone https://github.com/goutkannan/LUA-for-Nautilus.git <destination folder>`

The main repo for Mautilus is at <https://bitbucket.org/kchale/nautilus>. Fetch the code by running

`$> git clone https://goutkannan@bitbucket.org/kchale/nautilus.git`


Select any options you require, then run `make` to build the HRT binary image. To make a bootable CD-ROM, 
run `make isoimage`. If you see weird errors, chances are there is something wrong with your GRUB2 toolchain 
(namely, `grub-mkrescue`). Make sure `grub-mkrescue` knows where its libraries are, especially if you've 
installed the latest GRUB from source. Use `grub-mkrescue -d`. We've run into issues with naming of
the GRUB2 binaries, in which case a workaround with symlinks was sufficient.


# Running and Debugging under QEMU

Recommended:

`$> qemu-system-x86_64 -cdrom nautilus.iso -m 2048`

Nautilus has multicore support, so this will also work just fine:

`$> qemu-system-x86_64 -cdrom nautilus.iso -m 2048 -smp 4`

## Interaction with the shell 

The shell will load with Lua interpreter waiting for input. 

[https://github.com/goutkannan/LUA-for-Nautilus/blob/master/Lua_init.JPG]

In the below sample, we show how to call a math function viz. abs() 

[https://github.com/goutkannan/LUA-for-Nautilus/blob/master/sample_math.JPG]





# Resources

You can find publications related to Nautilus and HRTs/HVMs at 
http://halek.co

You can refer to the Lua programming guide to know more about the lua commands and syntax

<https://www.lua.org/pil/contents.html>

For more detailed developer documentation, refer to Reference Manual 
<https://www.lua.org/manual/5.3/> 


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
