#include <stdio.h>

    int marks1;
    int marks2;
    int marks3;
    float percentage;
    int total;

   void marks(){
    

    printf("enter the maths subject marks : ");
    scanf("%d", &marks1);
    printf("enter the eng subject marks : ");
    scanf("%d", &marks2);
    printf("enter the guj subject marks : ");
    scanf("%d", &marks3);
     total = marks1 + marks2 + marks3;
   
}
void total1()
{

    marks();
    printf("%d\t", total);
     percentage = total / 3.0;
    printf("%f\n",percentage);
}

void grade (){

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
int main ()
{
    total1();
    grade ();
    return 0;
}