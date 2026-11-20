#include<stdio.h>
int isPrime(int n);
int isPerfect(int n);
int reverseNumber(int n);
int isPalindrome(int n);
int digitSum(int n);
void report(int n);
int main()
{
int num;

printf("Enter a Positive Number: ");
scanf("%d", &num);

report(num);
return 0;
}

int isPrime(int n)
{
int i;

if(n<=1)
 return 0;

for(i=2; i<n; i++)
 {
  if(n%i==0)
   return 0;
 }
return 1;
}

int isPerfect(int n)
{
int i, sum=0;

for(i=1;i<n; i++)
 {
  if(n%i==0)
   sum+=i;
 }

return (sum==n);
}

int reverseNumber(int n)
{
int reverse=0;

while(n>0)
 {
  reverse = reverse*10 + n%10;
  n = n/10;
 }

return reverse;
} 

int isPalindrome(int n)
{
return (n==reverseNumber(n));
}

int digitSum(int n)
{
int sum=0;
while(n>0)
 {
  sum+=n%10;
  n=n/10;
 }
return sum;
}

void report(int n)
{
int i;

printf("Prime: %s\n", isPrime(n) ? "Yes" : "No");
printf("Perfect: %s\n", isPerfect(n) ? "Yes" : "No");
printf("Reverse: %d\n", reverseNumber(n));
printf("Palindrome: %s\n", isPalindrome(n) ? "Yes" : "No");
printf("Sum of digits: %d\n", digitSum(n));

printf("Primes from 1 to %d: ", n);

for(i=1; i<=n; i++)
 {
  if(isPrime(i)==0)
   continue;
   printf("%d ", i);
  }
}