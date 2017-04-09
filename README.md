```

    _   __               __   _  __                
   / | / /____ _ __  __ / /_ (_)/ /__  __ _____    
  /  |/ // __ `// / / // __// // // / / // ___/ 
 / /|  // /_/ // /_/ // /_ / // // /_/ /(__  )     
/_/ |_/ \__,_/ \__,_/ \__//_//_/ \__,_//____/ **with Lua**


```
[![Travis](https://img.shields.io/travis/rust-lang/rust.svg)]()
![Lua Version](https://img.shields.io/badge/Lua-5.2.4-blue.svg)
![py ver](https://img.shields.io/badge/Python-3.6-yellow.svg)

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

The main repo for Nautilus is at <https://bitbucket.org/kchale/nautilus>. Fetch the code by running

`$> git clone https://goutkannan@bitbucket.org/kchale/nautilus.git`

First, configure Nautilus by running

`make menuconfig`

Select any options you require, then run `make` to build the HRT binary image. To make a bootable CD-ROM, 
run `make lua`. If you see weird errors, chances are there is something wrong with your GRUB2 toolchain 
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

![init screen](https://github.com/goutkannan/LUA-for-Nautilus/blob/master/Lua_init.JPG)

In the below sample, we show how to call a math function viz. abs() 

![sample math](https://github.com/goutkannan/LUA-for-Nautilus/blob/master/sample_math.JPG)

From the command `math.abs(param)` we can understand that `abs` is a function in the library `math`. 
We have implemented the nautilus test framework in the similar manner.

So a typical call to nautilus' function_to_test will look like `naut.function_to_test(**args)` 
In order to get the return value back append the command with an '=' sign. 





# Resources

You can find publications related to Nautilus and HRTs/HVMs at 
http://halek.co

You can refer to the Lua programming guide to know more about the lua commands and syntax

<https://www.lua.org/pil/contents.html>

For more detailed developer documentation, refer to Reference Manual 
<https://www.lua.org/manual/5.3/> 



# Acknowledgements
This project was done under the guidance and supervision of Prof. Kyle C. Hale.

Kyle C. Hale (c) 2015
Illinois Institute of Technology 

