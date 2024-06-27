#include<stdio.h>

int main ()
{
    int a=20, b=50;
    
    int *c=&a;
    int *d=&b;

    *c=*c+*d;
    *d=*c-*d;
    *c=*c-*d;

    printf ("%d\n",*c);
    printf ("%d",*d);

    return 0;
}