#include<stdio.h>
    void intrest (int p, int t, int r )
    {
        int intrest;
        intrest=p*t*r/100;
        printf("%d",intrest);

    }
     int main ()
     {
        intrest(10000,10,2);

     }