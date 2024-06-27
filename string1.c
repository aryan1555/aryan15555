#include<stdio.h>

int main ()
{
    char name [50];
    
    int k=0;
    
    gets(name);
    
    for(int i=0; name[i]!='\0';i++){
        
        printf("%c",name[i]);
      k++;
    }
	printf("\n%d",k); 
	return 0;
	}