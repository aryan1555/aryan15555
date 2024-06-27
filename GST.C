#include<stdio.h>
#include<conio.h>
int main()
{
  int rate;
  int qty;
  int amt;
  int dis;
  int billamt;
  float gst;
  float netbill;
  clrscr();
  printf("rate of item :");
  scanf("%d",&rate);
  printf("qty of item :");
  scanf ("%d",&qty);
  amt=rate*qty;
  dis=amt*0.05;
  billamt= amt-dis;
  gst=billamt*0.18;
  netbill=billamt+gst;
  printf("Rate\t Quantity\t Amount\t Discount\t billamt\t Gst\t netbill\n");
  printf ("%d\t %d\t\t %d\t\t %d\t%d\t %2.f\t %2.f",rate,qty,amt,dis,billamt,gst,netbill);
  getch();
  return 0;
  }