#include<stdio.h>

/*showMenu()          -no arguments, no return value
readNonNegative()     -no arguments, returns a value
printLine()           -takes an argument, no return value 
power()               -takes arguments, returns value
factorial()           -takes argument, returns value
gcd()                 -takes arguments, returns value
lcm()                 -takes arguments, returns a value

power() returns the result so that main() can print it or use it whenever needed instead of printing it directly inside the function*/

void showMenu(void);
int readNonNegative(void);
void printLine(int length);
long power(int base, int exp);
long factorial(int n);
int gcd(int a,int b);
int lcm(int a,int b);
int main()
{
int choice, num1, num2;

do
 {
  showMenu();

  printf("Enter your choice: ");
  scanf("%d",&choice);

  if(choice==1)
   {
    printf("Enter base: ");
    num1 = readNonNegative();

    printf("Enter exponent: ");
    num2 =readNonNegative();

    printf("Result: %ld\n", power(num1, num2));
   }

  else if(choice==2)
   {
    printf("Enter a Non-negative number: ");
    num1= readNonNegative();

    printf("Factorial: %ld\n", factorial(num1));
   }

  else if(choice==3)
   {
    printf("Enter a Non-Negative number: ");
    num1=readNonNegative();

    printf("Enter a 2nd Non-Negative number: ");
    num2 =readNonNegative();

    printf("GCD: %d\n", gcd(num1, num2));
   }

  else if(choice==4)
   {
    printf("Enter a Non-Negative number: ");
    num1 =readNonNegative();

    printf("Enter a 2nd Non-Negative number: ");
    num2= readNonNegative();

    printf("LCM: %d\n", lcm(num1, num2));
   }

  else if(choice==5)
   {
    printf("Enter length: ");
    num1 = readNonNegative();

    printLine(num1);
   }

  else if(choice==6)
   printf("Bye\n");

  else
   printf("Invalid choice.\n");

 }while(choice!=6);

return 0;
}

void showMenu(void)
{
printf("\n===== Options ======\n");
printf("1) Power\n");
printf("2) Factorial\n");
printf("3) GCD\n");
printf("4) LCM\n");
printf("5) Print Line\n");
printf("6) Exit\n");
printf("============\n");
}

int readNonNegative(void)
{
int num;
scanf("%d", &num);

while(num<0)
 {
  printf("Number cannot be negative. Enter again: ");
  scanf("%d", &num);
 }

return num;
}

void printLine(int length)
{
int i;

for(i=1;i<=length; i++)
  printf("-");

printf("\n");
}

long power(int base, int exp)
{
int i;
long result=1;

for(i=1; i<=exp;i++)
 result=result*base;

return result;
}

long factorial(int n)
{
int i;
long fact=1;

for(i=1;i<=n;i++)
 fact = fact*i;

return fact;
}

int gcd(int a,int b)
{
int i, gcd=1;

for(i=1;i<=a && i<=b; i++)
 {
  if(a%i==0 && b%i==0)
    gcd=i;
 }
return gcd;
}

int lcm(int a, int b)
{
int result;
result = (a*b)/gcd(a,b);

return result;
}
