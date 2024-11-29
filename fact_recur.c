#include<stdio.h>
int n,i,m;
int fact(int);
int main()
{
printf("Enter a number:");
scanf("%d",&n);
m=fact(n);
printf("%d",m);
}
int fact(int n)
{
 if (n==1)
  return 1;
 else
  return n*fact(n-1);
 }
