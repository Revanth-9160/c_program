#include<stdio.h>
int n,i;
int sum(int);
int main()
{
printf("Enter a number:");
scanf("%d",&n);
i=sum(n);
printf("%d",i);
}
int sum(int n)
{
 if (n==1)
  return 1;
 else
  return n%10 + sum(n/10);
}
