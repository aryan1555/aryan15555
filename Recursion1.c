#include <stdio.h>
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main ()
{
    int sum;
    sum = factorial(5);
printf("factorial is %d", sum); 
return 0;
}