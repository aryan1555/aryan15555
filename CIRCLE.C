#include<stdio.h>
#include<conio.h>
int main()
{
  int radius;
  float pi =3.14;
  float area;
  clrscr();
  printf("value of radius :");
  scanf("%f",&radius);
  area=pi*radius*radius;
  printf("area of circle is %2.f", area);
  getch();
  return 0;


  }