#include<stdio.h>
int n,i;
int fib(int);
int main()
{
printf("Enter a number:");
scanf("%d",&n);
printf("The Fibonacci series is :\n");
for (i=0;i<n;i++)
 printf("%d",fib(i));
 }
 int fib(int i)
{
 if (i==0)
  return 0;
 else if (i==1)
  return 1;
 else 
  return (fib(i-1)+fib(i-2));
 }
