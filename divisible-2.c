#include<stdio.h>
int main ()
{ 
 int number;
 printf ("enter the number :");
 scanf ("%d",&number);
 if (number %5==0 && number %3==0){
	 printf ("it is divisable by 5 and 3:");
 }else{
	 printf ("it is not divisable by 5 and 3 :");
 }
  return 0;
} 