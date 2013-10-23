Creating Static libraries:
===========================

Instructions:
==============

	1. 
	Create c files containing functions that you want to put in a library as rob.c 
and david.c present in this directory, do create the header (.h) files for both the 
(.c) files which contain prototypes of the functions declared in respective files.

	2. 
	Make object files in "obj" directory out of these files created above using the 
below commands:
	gcc -o obj/rob.o -c rob.c
	gcc -o obj/david.o -c david.c

	Now, what we need to do is create a library file out of these two object files that 
contains definitions for both the functions and can be later linked with any other 
program if we need to use any of the functions that are present in the library file 
we will just create.

	3. 
	Use the archive command with following options given below to create a static 
library file in lib directory:
	ar -crv lib/libfoo.a obj/rob.o obj/david.o

	4. 
	As the library file is created now in lib directory its time to test our newly 
created library by creating simple program that calls functions defined in our library 
file as shown in "main.c".

	5. 
	Now at last to compile and run  main.c with our static library use the below 
command:
	gcc -o main main.c -L./lib -lfoo
