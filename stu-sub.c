#include<stdio.h>
int main()
{
int i,sub[5],student[3];
int total=0;
float per=0;

	for(i=0;i<3;i++)
	{
		
		printf("enter the roll no.:");
		scanf("%d",&student[i]);
		total=0;
		for(int j=0;j<5;j++)
		{
			printf("enter  mark:");
			scanf("%d",&sub[j]);
			total+=sub[j];
		}
		per=total/5.0;
		
		printf("roll no: %d\n",student[i]);
		
		printf("total marks %d\n",total);
		
		printf("per %f\n",per);
		
		 if(percentage>=90 && 100>percentage){
      printf("Grade A");
   }else if (percentage>=80 && 90>percentage){
      printf("Grade B");
   }else if(percentage>=70 && 80>percentage){
	   printf("Grade C");
   }else if(percentage>50 && 70>percentage){
	   printf("Grade D");
   }else if(percentage<=50 && 0<percentage){
	   printf("Fail!!");
	}else{
	 printf("error");}
			}
	return 0;
	}
	
		
		