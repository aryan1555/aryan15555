#include <stdio.h>
int main ()
{
  int i; 
  int n;
  int sum;
  printf ("enter number  :\n");
  
  scanf("%d",&n);
  
  for (i = 1; i <=n; i++)
	{
	    
	  printf ("%d ", i*i);
	
	}
  return 0;
}