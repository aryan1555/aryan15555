#include<stdio.h>
int main (){

    FILE *ptr;
    char str [50];

       // ptr =fopen("mytext.txt","a");
      //  gets(str);
      //  fprintf(ptr,"%s",str);

    ptr=fopen("mytext.txt","r");
    while (fscanf(ptr,"%s",str)!=EOF)
  {
      printf("%s",str);
  
  
  
    }
    
}