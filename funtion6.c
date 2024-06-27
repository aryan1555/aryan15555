#include<stdio.h>
void patternt ()
{
int i,j,k;
for(i=1; i<=5; i++){
 
 for(j=1; j<=5-i; j++){
 
 printf (" ");}
 
 for (k=1; k<=i-1; k++){
 
 printf ("*");
 }
 printf("\n");
 
 }
 
 }
 int main (){
    patternt();
    return 0;
 }