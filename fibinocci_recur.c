#include<stdio.h>
int n,i=0,m;
int fib(int n);
int main()
{
printf("Enter a number:");
scanf("%d",&n);
m=fib(n);
printf("%d",m);
}
int fib(int n)
{
 if (n==1)
  return 0;
 else if (n==2) 
  return 1;
 else  
  return fib(n-1)+fib(n-2);
}
