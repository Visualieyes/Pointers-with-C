/*
 *  Basic Pointer Concepts
 *    Note:  this code is for demonstration purposes only!
 *           Some bad coding practices are used here that should never be applied in a real app
 *
 *  Author:  Joseph Fall
 *  Date:    Jan. 16, 2018
 */

#include <stdio.h>
#include <stdlib.h>

void stop();

int main() {
   int a = 42;   // an integer value

   int *ptr;   // a pointer to an integer value

   ptr = &a;   // address assignment -- pointer gets "address of" variable a;

   printf("Size of an int pointer:  %ld bytes;  Size of int data value: %ld bytes.\n", sizeof(ptr), sizeof(*ptr));
   printf("Pointer to a: \n   ptr=%p\n  *ptr=%d\n", ptr, *ptr);

   int b = 99;
   ptr = &b;
   printf("Pointer to b: \n  ptr=%p\n  *ptr=%d\n", ptr, *ptr);

   *ptr = 123;
   printf("After update Pointer value: \n  b=%d\n  ptr=%p\n  *ptr=%d\n", b, ptr, *ptr);

   // Add additional experimental code below -- run experiment, print results.

   ptr -= 1;
   *ptr = 666;
   printf("After update Pointer value: \n  b=%d\n  ptr=%p\n  *ptr=%d\n", b, ptr, *ptr);



   return 0;
}

void stop()
{
   printf("Place holder for address following main() in static memory\n");
}
