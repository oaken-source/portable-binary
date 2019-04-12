
#include <stdio.h>
#include <inttypes.h>

int
main (void)
{
  unsigned int a = 10, b = 0;

  __asm__
    (
     "leal (%1, %1, 4), %0"
     : "=r" (b)
     : "r" (a)
    );


  printf("hello, world\n");
  printf("  %u * 5 == %u\n", a, b);

  return 0;
}
