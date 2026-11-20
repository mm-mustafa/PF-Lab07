#include<stdio.h>
float toFahrenheit(float c);
float toCelsius(float f);
void printTable(int start, int end, int step);
int main()
{
int start, step, end;
float fahren;

printf("Start: ");
scanf("%d", &start);
printf("End: ");
scanf("%d", &end);
printf("Step: ");
scanf("%d", &step);

printTable(start, end, step);

printf("Enter a Temperature in Fahrenheit: ");
scanf("%f", &fahren);

printf("%.1f F = %.2f C",fahren, toCelsius(fahren));

return 0;
}

float toFahrenheit(float c)
{ 
float fahrenH;
fahrenH = ((c*9/5)+32);

return(fahrenH);
}

float toCelsius(float f)
{
float celS;
celS = ((f-32)* 5 / 9);

return(celS);
}

void printTable(int start, int end, int step)
{
int i;

printf("Celsius\tFahrenheit\n");

for(i=start; i<=end;i+=step)
  printf("%d\t%.1f\n", i, toFahrenheit(i));

}


