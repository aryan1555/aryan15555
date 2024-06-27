#include <stdio.h>
int
main ()
{
  int i, 
  sum= 0;
  printf ("enter number  :\n");
  for (i = 1; i <= 10; i++)
	{
	  sum =sum  + i;
	  printf ("%d ", i);
	}
  printf ("\nThe sum: %d\n", sum);
  return 0;
}