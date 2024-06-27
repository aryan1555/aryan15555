#include <stdio.h>
void patternt()
{
    int i, j, n; 
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (i == 1 || i == 10 || j == 1 || j == 10 || i == j || (i + j) % 2 == 0)
            {
                printf("*");
                
            }else
            printf(" ");
        }
        printf("\n\t");
    }
}
int main(){
    patternt();
    return 0;
}