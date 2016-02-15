# Autovectorization

This simple code demonstrates autovectorization for a vector addition routine.

## Building

There are two makefiles in this repo, one for a gcc build and another for an 
icc build. Ensure that you have the intel compiler loaded into your environment:

	setpkgs -a intel_cluster_studio_compiler 

To build run:

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

1. Build the binary with and without vectorization enabled using both icc and gcc. Building with level-three
optimization will ensure autovectorization is run for both compilers. Time the execution of both versions of 
the binary for a vector length of 1000000000. Compare the walltime with versions of the binary that are built
without vectorization enabled. Using optimization level zero will ensure that vectorization is disabled.

2. 
