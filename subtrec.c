#include<stdio.h>

int subtrec(int a,int b)

{

    int total;

    total=a-b;

    return total;   

}

    int main ()

{

    int total;

    total=subtrec(50,10);

    printf("%d",total);

    return 0;

}    
