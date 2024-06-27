#include<stdio.h>
 int main ()
 {
	 char term='A';
	 int n,i;
	printf ("enter the number :\n");
    scanf("%d",&n);
  for (i = 0; i <=n; i++)
	
	    {
	  printf ("%c\t ",term);
	  term +=2;
	 }
	 return 0;
 }