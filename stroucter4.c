#include<stdio.h>
struct student 
{
    int Roll;
    int marks;
    int total;
    char name[5],sub[5];
    float per;
};

int main ()
{
    struct student st1[3]
     for (int i=0;i<3;i++)
     {
        st1[i].total=0;
        st1[i].per=0;
        printf("\nenter the student Roll :");
        scanf("%d",&st1[i].Roll);
        printf("\nenter the student name :");
        scanf("%s",&st1[i].name);

     
     for (int j=0;j<5; j++)
     {
        printf("enter the student subject :");
        scanf("%d",&st1[i].sub[j]);
        st1[i].total+=st1[i].sub[j];
        st1[i].per=st1[i].total/3.0;
     }
     printf("total marks :%d\n",st1[i]total);
     printf("per is %0.2f",st1[i].per);
     }
    return 0;
}