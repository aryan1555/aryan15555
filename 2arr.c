#include<stdio.h>
int main()
{
int n;
int a;
printf ("enter the array size :");

scanf ("%d",&n); 

int arr [n];
int arr1[n];
for (int i=0; i<n; i++){

printf("enter elemant of %d:",i);

scanf("%d",&arr[i]);

}
for (int i=0; i<n; i++){

printf("%d\t", arr[i]);

}
printf ("enter the size :");
scanf ("%d",&a);
for (int j=0; j<a; j++){

printf("enter elemant of %d:",j);

scanf("%d",&arr1[j]);

}
for (int j=0; j<a; j++){

printf("%d\t", arr1[j]);

}
return 0;
}