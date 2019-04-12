
#include <stdio.h>

int
main (void)
{
  printf("hello, world\n");

  if (__x86_64__)
    printf("  I am x86_64\n");
  else
    printf("  I am something else\n");

  return 0;
}
