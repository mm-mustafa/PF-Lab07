#include<stdio.h>
#include<math.h>
int main()
{
double a, b,c=0, powerA=0, powerB=0;
float roundUp, roundDown;
float hyp, area=0;

printf("Enter length of side 1: ");
scanf("%le", &a);

printf("Enter length of side 2: ");
scanf("%le", &b);

powerA = pow(a, 2);
powerB = pow(b, 2);

float sum = powerA+powerB;

hyp = sqrt(sum);

printf("Hyp = %.2f\n",hyp);
roundUp = hyp;
printf("Round Up = %.0f\n", ceil(roundUp));
roundDown = hyp;
printf("Round Down = %.0f\n", floor(roundDown));

area = ((float)a*b/2);
printf("Area = %.2f", area);

return 0;
}
