  #include<stdio.h>
  int main () 
  {
      int i;
      int j;
      
      for (i=0;i<5;i++){
      for (j=1;j<=5;j++){
     
      printf("%d\t",i*5+j);
      }
      printf ("\n");
      }
      return 0;
  }