#include<stdio.h>
int readUnits(void);
float calculateBill(int units);
int main()
{
int units;
float bill;

units = readUnits();
bill = calculateBill(units);
printf("TOtal Bill = Rs %.2f", bill);

return 0;
 }
 
int readUnits(void)
{
int units;

printf("Enter the units consumed: ");
scanf("%d", &units);

while(units<0)
 {
  printf("Units cannot be negative\n");
  printf("Enter the Units Consumed: ");
  scanf("%d", &units);
 }

return (units);
}

float calculateBill(int units)
{
float bill;

if(units<=100)
 bill = units*10;

else if(units<=300)
 bill = (100*10) + ((units - 100)*15);

else if(units>300)
 bill = (100*10) + (200 * 15) + ((units-300)*20);

if(bill>3000)
 bill = bill+ (bill*0.05);

return (bill);
}








