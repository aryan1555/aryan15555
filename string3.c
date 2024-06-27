#include<stdio.h>

int main ()
{
    char str1[50];
    char str2[50];
    char str3[50];
    
    int k=0;
    
     gets(str1);
     gets(str2);
     
     for(int i=0; str1[i]!='\0';i++,k++){
         str3[k]=str1[i];
     }
     for(int j=0; str2[j]!='\0';j++,k++){
         str3[k]=str2[j];
         
     }
     printf("%s",str3);
     
     return 0;
}