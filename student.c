    #include<stdio.h>

int main ()
{
  
  int marks1;
  int marks2;
  int marks3;
  
  printf("enter the first subject marks :");
  scanf("%d",&marks1);
  printf("enter the seconed subject marks :");
  scanf("%d",&marks2);
  printf("enter the thered subject marks :");
  scanf("%d",&marks3);
  float percentage=(marks1+marks2+marks3)/3;
  
  if (percentage>33){
	  printf("pass");
	  
  }else{
	  printf("faill");
  }
   return 0;
  
  }
  