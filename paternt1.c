	#include<stdio.h>
	int main ()
	{
	int i=1,j,k;
	while(i<=5){
	j=1;
	while(j<=5-i){
	printf(" ");
	j++;
	}
	k=1;
	while(k<=2*i-1){
	printf("*");
	k++;
	}
	printf("\n");
	i++;
	}
	return 0;
	}