#include <stdio.h>

 int main () 
 { 
int i, j;
int k = 'A';

  
for (i = 1; i <= 5; i++){
for (j = 1; j <=i; j++)
	{
	 if(i%2!=0) {
		
		  
printf ("%c\t",k);
		
}else{
    
printf("%c\t",k+32);    
}
k++;
}
	  
printf ("\n");
	
}
  

return 0;

}


