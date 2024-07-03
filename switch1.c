#include<stdio.h>
 int number;
 char name[50];
 void getdata (){
    printf("enter the number :");
    scanf("%d",&number);
    printf("enter the name :");
    scanf ("%s",&name);

 }

 int main (){
    int n;
    do{
        printf("1:get data \n");
        printf("2:print data \n");
        printf("select number:");
        scanf("%d",&n);

        switch(n){
            
            case 1:
            getdata ();
            break;
            
            case 2:
            printf("select 2 :");
            break;

            default:
            printf ("number not match :");


        }
    }while(n==3);
       printf ("%d",number);

    return 0;
 }
