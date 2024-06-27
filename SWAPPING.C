  #include<stdio.h> 
  int main ()
  {
  int a;
  int b;
  int c;
   
   printf("value of a :");
   scanf ("%d",&a);
   printf("value of b :");
   scanf ("%d",&b);
   
   c=a;
   a=b;
   b=c;
    
	printf("value of a : %d",a);
	printf("\n value of b : %d",b);
	
	return 0;
  }