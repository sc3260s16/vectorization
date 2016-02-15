//********************************************
//
// This is a simple example to demonstrate
// autovectorization. To enable autovectorization
// build with:
//
// icc -O2 add.c (or higher)
// gcc -O3 add.c
//
//********************************************

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv )
{

   if (argc != 2) {
      printf("usage: ./vec_add vec_size\n");
      exit(-1);
   }

   int vec_size = atoi(argv[1]);

   float * a = malloc( vec_size * sizeof(float) );
   float * b = malloc( vec_size * sizeof(float) );
   float * c = malloc( vec_size * sizeof(float) );

   int i;
   for (i=0; i<vec_size ; i++)
   {
      a[i] = (float)i;
      b[i] = 2.0 * (float)i + 1.0;
      c[i] = a[i] + b[i];
   }
 
   if ( vec_size > 10 )  
      printf("i: %d, c[i]: %f\n",10,c[10]);

   free(a);
   free(b);
   free(c);

   return 0;

}