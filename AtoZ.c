  #include<stdio.h>
  int main () 
  {
      int i;
      int j;
      int k='A';
      for (i=0;i<5;i++){
      for (j=1;j<=5;j++){
     
      printf("%c\t",k);
	  k++;
      }
      printf ("\n");
      }
      return 0;
  }