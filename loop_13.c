#include <stdio.h>
int
main ()
{
  int i; 
  int n;
  int sum =0;
  printf ("enter number  :\n");
  scanf("%d",&n);
  for (i = 1; i <=n; i++)
	{
	    if(i%2==0){
	   sum += i;
	  printf ("%d ", i);
	}
  printf ("\nThe Sum is : %d\n", sum);
	}
  return 0;
}