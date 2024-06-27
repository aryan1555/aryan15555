#include <stdio.h>
int marks()
{
    int marks1;
    int marks2;
    int marks3;

    printf("enter the maths subject marks : ");
    scanf("%d", &marks1);
    printf("enter the eng subject marks : ");
    scanf("%d", &marks2);
    printf("enter the guj subject marks : ");
    scanf("%d", &marks3);
    int total = marks1 + marks2 + marks3;
    return total;
}
void total()
{
    int total;
    total = marks();
    printf("%d\t", total);
    float percentage = total / 3.0;
    printf("%0.2f", percentage);
}

int main ()-
{
    total();
   
    return 0;
}