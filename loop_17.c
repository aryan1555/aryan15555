#include <stdio.h>
 int main ()
 {
 int i ;
 
 for(i='A';i<='Z';i)
 {
printf("%c\t",i);
i=i+2;
printf("%c\t",i+32);
i=i+2;

}
return 0;
}