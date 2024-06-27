	#include<stdio.h>
	int main ()
 {
	int arr [3][3];
	int i,j;
	int total=i+j ;
	for (int i=0;i<3;i++){
	   for(int j=0;j<3;j++){
	   printf("enter the elemant of[%d]and[%d]:",i,j);
	   scanf("%d",&arr [i][j]);
	   }
	}
		for (int i=0;i<3;i++){
		   for(int j=0;j<3;j++){
		   
		   printf("%d\t",arr[i][j]);
		   }
		   printf("\n");
		   }
		   if(i<j){
			   i=0,0,1;
			   j=1,2,2;
			   printf("%d",total);
 }
		   return 0;
		   }