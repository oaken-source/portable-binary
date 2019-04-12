
#include <stdio.h>

int
main (void)
{
  printf("hello, world\n");

#ifdef __x86_64__
  printf("  I am x86_64\n");
#else
  printf("  I am something else\n");
#endif

  return 0;
}
