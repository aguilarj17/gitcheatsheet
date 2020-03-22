#include <stdlib.h>
#include <stdio.h>

// Exercise 8: Sizes and arrays

int main(int argc, char *argv[])
{

 int areas[] =  {10, 12, 13, 14, 20};//is not unable tha put areas[0] = 100;
 char name[] = "Ivan";// is not unable assign elements to name and full name because they are char
 char full_name[] = {

 'I', 'v', 'a', 'n', ' ', 'A', 'g', 'u', 'i', 'l', 'a', 'r', '\0'
 };
 // WARNING: On some systems you may have to change the
 // %ld in this code to a %u since it will use unsigned ints
 printf("The size of an int: %ld\n", sizeof(int));
 printf("The size of areas (int[]): %ld\n",
 sizeof(areas));
 printf("The number of ints in areas: %ld\n",
 sizeof(areas) / sizeof(int));
 printf("The first area is %d, the 2nd %d.\n",
 areas[0], areas[1]);
 printf("The size of a char: %ld\n", sizeof(char));
 printf("The size of name (char[]): %ld\n",
 sizeof(name));
 printf("The number of chars: %ld\n",
 sizeof(name) / sizeof(char));
 printf("The size of full_name (char[]): %ld\n",
 sizeof(full_name));
 printf("The number of chars: %ld\n",
 sizeof(full_name) / sizeof(char));
 printf("name=\"%s\" and full_name=\"%s\"\n",
 name, full_name);
 return 0;
}

//On the common x86-64 architecture, 32-bit arithmetic is never slower than 64 bit arithmethic. So int is always the same speed or faster than long. On other architectures that don't actually have builtin 32-bit arithmetic, such as the MMIX, this might not hold.

