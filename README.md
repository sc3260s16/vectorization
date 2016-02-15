# Autovectorization

This simple code demonstrates autovectorization for a vector addition routine.

## Building

There are two makefiles in this repo, one for a gcc build and another for an 
icc build. To build run:

	make -f makefile.gcc

or

	make -f makefile.icc

to delete the executable you would then type:

	make clean -f makefile.gcc

or

	make clean -f makefile.icc

## Running

The program accepts one command line argument, the length of the vector. For 
example:

	./vec_add_icc 1000

## Exercises

