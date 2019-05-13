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

#define WORDS  7
#define SENTINAL 0

int main() {
   int array[WORDS+1];  // an array of 7 integers (28 bytes), initialized with 4 char's per int + a sentinal (zero)
   int i;
   char c = 'A';  // 65
   for (i=0; i<WORDS; i++) {
      array[i] = c + ((c+1)<<8) + ((c+2)<<16) + ((c+3)<<24);  // load 4 chars into the 4 bytes of the int
      c+=4; // move along 4 characters in the ASCII table.
   }
   array[WORDS] = SENTINAL;  // Sentinal value marks end of array

   // Print the array as 2's compliment decimal integers
   int *iptr;
   iptr = array;  // address assignment!
   printf("Decimal array: [ ");
   while (*iptr != SENTINAL) {
      printf("%d, ", *iptr);
      iptr++;  // move to next word
   }
   printf("] \n");
   
   // Print the array as hexadecimal codes
   iptr = array;  // address assignment!
   printf("Hex codes: [ ");
   while (*iptr != SENTINAL) {
      printf("%x, ", *iptr);
      iptr++;  // move to next word
   }
   printf("] \n");

   // Print the array as ASCII encoded bytes
   char *cptr;
   cptr = (char *) array;  // typecast address assignment
   printf("ASCII codes: [ ");
   while (*cptr != SENTINAL) {
      printf("%c, ", *cptr);
      cptr++;  // move to next byte
   }
   printf("] \n");
   
   return 0;
}
