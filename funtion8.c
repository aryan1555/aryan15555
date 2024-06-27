#include<stdio.h>
 
 void reversarr(int n ,int arr[]){
 int i;
 int j;
 int temp=0;

    for(i=0,j=n-1;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }
    for (i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
 }
 int main (){
    int arr [5]={1,2,3,4,5};
    reversarr(5,arr);
 }
 
