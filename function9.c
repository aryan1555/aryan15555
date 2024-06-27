#include<stdio.h>
void parfect ()
{
    int i,n,sum;
    printf("enter the number :");
    scanf("%d",&n);
    sum=0;
    printf("\t the positive divisors \t :");
    for (i=1; i<n; i++)
    {
        if(n%i==0)
    {
        sum=sum+i;
        printf("%d\t",i);
    }
    } 
    printf("\nthe sum of divisors");
    if(sum==n)    ,
    {
        printf("this is parfect :");

    }else{
        printf("this is not parfect :");
    }
    printf("\n");
}
    int main(){
        parfect ();
        return 0;
    }