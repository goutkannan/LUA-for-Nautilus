Steps involved in porting
  get the source from lua website 
  split the headers and souce into two different folders
  save source files intosrc/lua_src and headers into include/lua 
  Create a Makefile in the lua_src folder as show below. 
  
  Add the lua_src folder to the Makefile of the src folder to make nautilus build lua along with its other source files .
  
  Make Menuconfig to chose the re
