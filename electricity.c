
 
 #include<stdio.h>

int main ()
{
 int unit;
 float amount;
 float surcharge_amount;
 float netamount;
 
 printf("enter the number:");
 scanf("%d",&unit);
 
 if (0<unit && unit<100)
 {
 amount=unit*0.60 + 50;
 printf("energy consumed:%0.2f",amount);
 }
 else if (101<unit && unit<200)
 {
 amount=unit*0.80 + 50;
 printf("energy consumed:%0.2f",amount);}
 else
 {
 amount=unit*0.90;
 printf("energy consumed:%0.2f",amount);
 }
  if (amount>300){
  surcharge_amount= amount+ amount*0.15;
  printf("\nenergy consumed:%0.2f",surcharge_amount);
  }
    
	
	
	return 0;
	
	}
 