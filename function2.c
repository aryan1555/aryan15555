	#include <stdio.h>

	int  sum1 ()
	{
	
	int P;
	
	int T;
	
	int R;
	
	float total;
	
	printf("value of P :");
	scanf("%d",&P);
	printf("value of T:");
	scanf ("%d",&T);
	printf ("value of R :");
	scanf ("%d",&R);
	
	total=P*T*R/100;
	

	
	return total;
	
	}
	
	int main ()
	{
	
	int total;
	
    total=sum1();
 
printf("total is %d",total);

return 0; 
}
	
  