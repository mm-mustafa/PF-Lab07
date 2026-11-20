#include<stdio.h>
void welcome(void);
void printSquare(int side, char ch);
int main()
{
int side;
char ch;

welcome();

printf("Enter a side: ");
scanf("%d", &side);

printf("Enter a character: ");
scanf(" %c", &ch);

printSquare(side, ch);

welcome();

return 0;
}

void welcome(void)
{
printf("============================================\n");
printf("\tPattern Version v1.0\n");
printf("============================================\n");
}

void printSquare(int side1, char ch1)
{
int i, j;
for(i=1; i<=side1; i++)
 {
  for(j=1;j<=side1;j++)
   {
    printf("%c ", ch1);
   }
  printf("\n");
 }
 return;
} 