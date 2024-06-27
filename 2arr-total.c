#include<stdio.h>
int main()
{
	int arr[3][3];
	int total=0;
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	
	printf("enter the element [%d] and [%d]:",i,j);
	scanf("%d",&arr[i][j]);
	}
	}

	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	
	printf("%d",arr[i][j]);
	total=total+arr[i][j];

	}
	
	printf("\n");
	
	}
	printf("%d\n",total);
	{
		int arr1[3][3];

	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	
	printf("enter the element of [%d] and [%d]:",i,j);
	scanf("%d",&arr1[i][j]);
	}
	}

	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	
	printf("%d",arr1[i][j]);
	total=total+arr1[i][j];
	
	
	}
	
	printf("\n");
	
	}
	printf("%d",total);
	} 
	return 0;
	}