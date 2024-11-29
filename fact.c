#include<stdio.h>
int n,f=1,i=1;
int fact(int);
int main()
{
printf("Enter a number :");
scanf("%d",&n);
fact(n);
}
int fact(int n)
{
 for (;i<=n;i++)
 f=f*i;
 printf("%d",f);
 }

